#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: resnet_compute.h
#include "resnet_compute.h"

#include "hw_classes.h"

struct conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_op_hcompute_hw_output_stencil_295_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_op_hcompute_hw_output_stencil_295_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_op_hcompute_hw_output_stencil_295_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_cache {
  // # of banks: 2
  conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3_cache conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3;
  conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_op_hcompute_hw_output_stencil_295_cache conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_op_hcompute_hw_output_stencil_295;
};



inline void conv_stencil_op_hcompute_conv_stencil_298_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_298, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3.write(conv_stencil_op_hcompute_conv_stencil_298, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_op_hcompute_hw_output_stencil_295.write(conv_stencil_op_hcompute_conv_stencil_298, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
}

inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> conv_stencil[0, conv_s1_y, conv_stencil_ld2] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15 }
  auto value_conv_stencil_op_hcompute_conv_stencil_298 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_298;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_295_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_295 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_298 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_298_to_conv_stencil_op_hcompute_hw_output_stencil_295.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_298;
  return 0;
}

// # of bundles = 3
// load_to_conv_stencil_rb_at_conv_s1_x3_read
//	conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3
inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3

	hw_uint<16> result;
	hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3_res = conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3_select(conv_stencil, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_3_res);
	return result;
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_298
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_298_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_298_write(conv_stencil_op_hcompute_conv_stencil_298_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_295
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_295

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_295_res = conv_stencil_op_hcompute_hw_output_stencil_295_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_295_res);
	return result;
}

#include "hw_classes.h"

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 9]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_cache {
	// RAM Box: {[0, 27], [0, 27], [9, 9]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 10]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_cache {
	// RAM Box: {[0, 27], [0, 27], [10, 10]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 11]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_cache {
	// RAM Box: {[0, 27], [0, 27], [11, 11]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 12]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_cache {
	// RAM Box: {[0, 27], [0, 27], [12, 12]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 13]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_cache {
	// RAM Box: {[0, 27], [0, 27], [13, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 14]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_cache {
	// RAM Box: {[0, 27], [0, 27], [14, 14]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_cache {
	// RAM Box: {[0, 27], [0, 27], [15, 15]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 0]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 0]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 1]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_cache {
	// RAM Box: {[0, 27], [0, 27], [1, 1]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 2]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_cache {
	// RAM Box: {[0, 27], [0, 27], [2, 2]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 3]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_cache {
	// RAM Box: {[0, 27], [0, 27], [3, 3]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 4]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_cache {
	// RAM Box: {[0, 27], [0, 27], [4, 4]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 5]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_cache {
	// RAM Box: {[0, 27], [0, 27], [5, 5]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 6]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_cache {
	// RAM Box: {[0, 27], [0, 27], [6, 6]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 7]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_cache {
	// RAM Box: {[0, 27], [0, 27], [7, 7]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 8]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*12544);
  }
  ~conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_cache {
	// RAM Box: {[0, 27], [0, 27], [8, 8]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*784);
  }
  ~conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 784)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 784);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_cache {
  // # of banks: 48
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133;
  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_cache conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151;
  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_cache conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151;
};



inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 9) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 10) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 11) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 12) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 13) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 14) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 15) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 1) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 2) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 3) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 4) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 5) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 6) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 7) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 0) * 784);
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 8) * 784);
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, conv_stencil_ld6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
  if ((((-9 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168;
  }

  
  if ((((-10 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186;
  }

  
  if ((((-11 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204;
  }

  
  if ((((-12 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222;
  }

  
  if ((((-13 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240;
  }

  
  if ((((-14 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258;
  }

  
  if ((((-15 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276;
  }

  
  if ((((conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6;
  }

  
  if ((((-1 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24;
  }

  
  if ((((-2 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60;
  }

  
  if ((((-3 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42;
  }

  
  if ((((-4 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78;
  }

  
  if ((((-5 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96;
  }

  
  if ((((-6 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114;
  }

  
  if ((((-7 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132;
  }

  
  if ((((-8 + conv_stencil_ld6 == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 9) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 10) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 11) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 12) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 13) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 14) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 15) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 1) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 2) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 3) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 4) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 5) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 6) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 7) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132;
  }

  
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (conv_s1_x == 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 0) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_to_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 8) * 784);
    return value_conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150;
  }

  
  return 0;
}

// # of bundles = 35
// load_to_conv_stencil_rb_at_conv_s1_x3_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_res = load_to_conv_stencil_rb_at_conv_s1_x3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_2_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
}

// load_to_conv_stencil_rb_at_conv_s1_x7_read
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_res = conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_res);
	return result;
}

// load_to_conv_stencil_rb_at_conv_s1_x7_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_res = load_to_conv_stencil_rb_at_conv_s1_x7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
}

// op_hcompute_conv_stencil_10_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_169_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_10_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_res = op_hcompute_conv_stencil_10_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_187_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_11_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_res = op_hcompute_conv_stencil_11_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_186_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_12_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_res = op_hcompute_conv_stencil_12_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_204_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_223_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_13_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_res = op_hcompute_conv_stencil_13_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_222_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_241_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_14_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_res = op_hcompute_conv_stencil_14_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_240_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_259_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_15_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_res = op_hcompute_conv_stencil_15_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_258_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_16_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_277_res);
	return result;
}

// op_hcompute_conv_stencil_16_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_16_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_res = op_hcompute_conv_stencil_16_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_276_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_1_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_res = op_hcompute_conv_stencil_1_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_25_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_2_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_res = op_hcompute_conv_stencil_2_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_61_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_res = op_hcompute_conv_stencil_3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_60_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_43_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_4_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_res = op_hcompute_conv_stencil_4_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_42_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_79_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_5_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_res = op_hcompute_conv_stencil_5_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_78_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_97_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_6_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_res = op_hcompute_conv_stencil_6_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_96_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_115_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_res = op_hcompute_conv_stencil_7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_114_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_133_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_8_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_res = op_hcompute_conv_stencil_8_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_132_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_151_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_9_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_res = op_hcompute_conv_stencil_9_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_177_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_177_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_177_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_195_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_195_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_195_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_213_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_213_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_213_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_231_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_231_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_231_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_249_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_249_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_249_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_267_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_267_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_267_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_285_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_285_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_285_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_15_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_15_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_15_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_33_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_33_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_33_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_62_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_62_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_62_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_63_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_63_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_63_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_64_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_64_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_64_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_65_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_65_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_65_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_66_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_66_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_66_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_67_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_67_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_67_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_68_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_68_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_68_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_69_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_69_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_69_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_44_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_44_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_44_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_45_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_45_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_45_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_46_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_46_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_46_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_47_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_47_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_47_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_48_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_48_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_48_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_49_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_49_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_49_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_50_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_50_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_50_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_51_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_51_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_51_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_87_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_87_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_87_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_105_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_105_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_105_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_123_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_123_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_123_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_141_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_141_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_141_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_159_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_159_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_159_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_cache {
  // # of banks: 128
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_170;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_171;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_172;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_173;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_174;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_175;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_176;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_177_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_177;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_188;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_189;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_190;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_191;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_192;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_193;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_194;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_195_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_195;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_206;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_207;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_208;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_209;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_210;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_211;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_212;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_213_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_213;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_224;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_225;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_226;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_227;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_228;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_229;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_230;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_231_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_231;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_242;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_243;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_244;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_245;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_246;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_247;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_248;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_249_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_249;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_260;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_261;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_262;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_263;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_264;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_265;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_266;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_267_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_267;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_278;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_279;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_280;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_281;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_282;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_283;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_284;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_285_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_285;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_10;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_11;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_12;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_13;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_14;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_15_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_15;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_8;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_9;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_26;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_27;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_28;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_29;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_30;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_31;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_32;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_33_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_33;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_62_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_62;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_63_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_63;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_64_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_64;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_65_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_65;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_66_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_66;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_67_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_67;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_68_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_68;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_69_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_69;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_44_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_44;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_45_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_45;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_46_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_46;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_47_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_47;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_48_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_48;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_49_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_49;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_50_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_50;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_51_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_51;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_80;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_81;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_82;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_83;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_84;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_85;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_86;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_87_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_87;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_100;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_101;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_102;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_103;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_104;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_105_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_105;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_98;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_99;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_116;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_117;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_118;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_119;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_120;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_121;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_122;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_123_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_123;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_134;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_135;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_136;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_137;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_138;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_139;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_140;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_141_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_141;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_152;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_153;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_154;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_155;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_156;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_157;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_158;
  hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_159_cache hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_159;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_296_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_296, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_170.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_171.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_172.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_173.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_174.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_175.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_176.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_177.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_188.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_189.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_190.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_191.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_192.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_193.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_194.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_195.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_206.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_207.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_208.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_209.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_210.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_211.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_212.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_213.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_224.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_225.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_226.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_227.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_228.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_229.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_230.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_231.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_242.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_243.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_244.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_245.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_246.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_247.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_248.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_249.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_260.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_261.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_262.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_263.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_264.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_265.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_266.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_267.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_278.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_279.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_280.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_281.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_282.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_283.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_284.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_285.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_10.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_11.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_12.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_13.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_14.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_15.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_8.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_9.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_26.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_27.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_28.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_29.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_30.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_31.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_32.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_33.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_62.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_63.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_64.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_65.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_66.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_67.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_68.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_69.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_44.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_45.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_46.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_47.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_48.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_49.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_50.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_51.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_80.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_81.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_82.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_83.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_84.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_85.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_86.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_5_87.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_100.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_101.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_102.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_103.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_104.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_105.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_98.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_6_99.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_116.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_117.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_118.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_119.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_120.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_121.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_122.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_7_123.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_134.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_135.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_136.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_137.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_138.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_139.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_140.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_8_141.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_152.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_153.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_154.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_155.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_156.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_157.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_158.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_9_159.write(hw_input_stencil_op_hcompute_hw_input_stencil_296, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_170_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_170 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_170.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_171_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_171 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_171.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_172_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_172 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_172.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_173_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_173 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_173.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_174_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_174 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_174.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_175_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_175 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_175.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_176_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_176 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_176.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_177_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_177 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_10_177.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_188_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_188 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_188.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_189_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_189 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_189.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_190_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_190 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_190.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_191_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_191 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_191.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_192_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_192 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_192.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_193_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_193 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_193.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_194_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_194 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_194.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_195_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_195 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_11_195.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_206_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_206 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_206.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_207_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_207 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_207.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_208_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_208 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_208.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_209_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_209 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_209.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_210_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_210 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_210.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_211_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_211 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_211.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_212_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_212 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_212.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_213_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_213 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_12_213.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_224_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_224 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_224.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_225_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_225 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_225.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_226_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_226 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_226.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_227_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_227 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_227.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_228_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_228 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_228.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_229_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_229 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_229.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_230_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_230 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_230.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_231_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_231 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_13_231.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_242_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_242 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_242.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_243_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_243 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_243.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_244_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_244 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_244.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_245_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_245 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_245.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_246_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_246 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_246.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_247_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_247 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_247.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_248_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_248 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_248.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_249_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_249 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_14_249.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_260_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_260 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_260.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_261_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_261 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_261.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_262_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_262 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_262.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_263_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_263 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_263.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_264_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_264 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_264.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_265_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_265 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_265.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_266_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_266 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_266.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_267_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_267 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_15_267.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_278_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_278 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_278.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_279_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_279 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_279.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_280_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_280 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_280.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_281_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_281 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_281.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_282_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_282 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_282.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_283_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_283 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_283.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_284_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_284 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_284.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_285_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_285 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_16_285.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_10 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_10.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_11 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_11.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_12 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_12.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_13_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_13 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_13.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_14_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_14 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_14.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_15_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_15 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_15.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_8 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_8.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_9 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_1_9.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_26_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_26 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_26.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_27 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_27.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_28_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_28 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_28.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_29_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_29 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_29.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_30_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_30 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_30.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_31_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_31 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_31.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_32_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_32 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_32.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_33_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_33 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_2_33.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_62_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_62 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_62.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_63_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_63 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_63.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_64_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_64 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_64.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_65_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_65 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_65.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_66_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_66 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_66.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_67_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_67 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_67.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_68_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_68 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_68.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_69_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_69 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_3_69.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_44_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_44 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_44.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_45_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_45 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_45.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_46_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_46 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_46.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_47_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_47 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_47.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_48_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_48 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_48.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_49_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_49 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_296 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_296_to_hw_input_stencil_op_hcompute_conv_stencil_4_49.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_296;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_50_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_50 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
