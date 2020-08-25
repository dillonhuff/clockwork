#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: unet_conv_3_3_compute.h
#include "unet_conv_3_3_compute.h"

#include "hw_classes.h"

struct conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache {
	// RAM Box: {[0, 3], [0, 12], [0, 12]}
	// Capacity: 676
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[676];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*676);
  }
  ~conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
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



	inline void write(const hw_uint<16> value, const int addr) {
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

struct conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_conv_stencil_2_10_cache {
	// RAM Box: {[0, 3], [0, 12], [1, 13]}
	// Capacity: 676
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[676];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_conv_stencil_2_10_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*676);
  }
  ~conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_conv_stencil_2_10_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_10_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_10_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_10_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
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



	inline void write(const hw_uint<16> value, const int addr) {
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

struct conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_conv_stencil_3_14_cache {
	// RAM Box: {[0, 3], [0, 12], [2, 14]}
	// Capacity: 676
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[676];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_conv_stencil_3_14_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*676);
  }
  ~conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_conv_stencil_3_14_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_14_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 840
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[840];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_14_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*840);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_14_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_18_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_18_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_18_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
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



	inline void write(const hw_uint<16> value, const int addr) {
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

struct conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_conv_stencil_4_18_cache {
	// RAM Box: {[0, 3], [1, 13], [0, 12]}
	// Capacity: 676
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[676];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_conv_stencil_4_18_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*676);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_conv_stencil_4_18_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_22_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_22_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_22_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
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



	inline void write(const hw_uint<16> value, const int addr) {
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

struct conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_conv_stencil_5_22_cache {
	// RAM Box: {[0, 3], [1, 13], [1, 13]}
	// Capacity: 676
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[676];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_conv_stencil_5_22_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*676);
  }
  ~conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_conv_stencil_5_22_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_26_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 14]}
	// Capacity: 840
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[840];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_26_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*840);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_26_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_conv_stencil_6_26_cache {
	// RAM Box: {[0, 3], [1, 13], [2, 14]}
	// Capacity: 676
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[676];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_conv_stencil_6_26_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*676);
  }
  ~conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_conv_stencil_6_26_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_30_cache {
	// RAM Box: {[0, 3], [0, 14], [0, 12]}
	// Capacity: 840
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[840];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_30_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*840);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_30_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_conv_stencil_7_30_cache {
	// RAM Box: {[0, 3], [2, 14], [0, 12]}
	// Capacity: 676
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[676];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_conv_stencil_7_30_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*676);
  }
  ~conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_conv_stencil_7_30_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_34_cache {
	// RAM Box: {[0, 3], [0, 14], [0, 13]}
	// Capacity: 840
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[840];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_34_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*840);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_34_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_conv_stencil_8_34_cache {
	// RAM Box: {[0, 3], [2, 14], [1, 13]}
	// Capacity: 676
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[676];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_conv_stencil_8_34_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*676);
  }
  ~conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_conv_stencil_8_34_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_38_cache {
	// RAM Box: {[0, 3], [0, 14], [0, 14]}
	// Capacity: 900
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[900];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_38_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*900);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_38_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 900)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 900);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 900)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 900);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_conv_stencil_9_38_cache {
	// RAM Box: {[0, 3], [2, 14], [2, 14]}
	// Capacity: 676
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[676];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_conv_stencil_9_38_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*676);
  }
  ~conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_conv_stencil_9_38_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 676)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 676);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
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



	inline void write(const hw_uint<16> value, const int addr) {
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

struct conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
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



	inline void write(const hw_uint<16> value, const int addr) {
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

struct conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 840
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[840];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*840);
  }
  ~conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
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



	inline void write(const hw_uint<16> value, const int addr) {
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

struct conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
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



	inline void write(const hw_uint<16> value, const int addr) {
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

struct conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache {
	// RAM Box: {[0, 3], [0, 13], [0, 14]}
	// Capacity: 840
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[840];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*840);
  }
  ~conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache {
	// RAM Box: {[0, 3], [0, 14], [0, 12]}
	// Capacity: 840
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[840];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*840);
  }
  ~conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache {
	// RAM Box: {[0, 3], [0, 14], [0, 13]}
	// Capacity: 840
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[840];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*840);
  }
  ~conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 840)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 840);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache {
	// RAM Box: {[0, 3], [0, 14], [0, 14]}
	// Capacity: 900
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[900];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*900);
  }
  ~conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 900)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 900);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 900)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 900);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_cache {
  // # of banks: 27
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6;
  conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_conv_stencil_2_10_cache conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_conv_stencil_2_10;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_10_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_10;
  conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_conv_stencil_3_14_cache conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_conv_stencil_3_14;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_14_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_14;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_18_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_18;
  conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_conv_stencil_4_18_cache conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_conv_stencil_4_18;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_22_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_22;
  conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_conv_stencil_5_22_cache conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_conv_stencil_5_22;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_26_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_26;
  conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_conv_stencil_6_26_cache conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_conv_stencil_6_26;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_30_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_30;
  conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_conv_stencil_7_30_cache conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_conv_stencil_7_30;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_34_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_34;
  conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_conv_stencil_8_34_cache conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_conv_stencil_8_34;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_38_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_38;
  conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_conv_stencil_9_38_cache conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_conv_stencil_9_38;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_42;
  conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_hw_output_stencil_42;
  conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_hw_output_stencil_42;
  conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_hw_output_stencil_42;
  conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_hw_output_stencil_42;
  conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_hw_output_stencil_42;
  conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_hw_output_stencil_42;
  conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_hw_output_stencil_42;
  conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_hw_output_stencil_42_cache conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_hw_output_stencil_42;
};



inline void conv_stencil_op_hcompute_conv_stencil_1_5_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_5, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6.write(conv_stencil_op_hcompute_conv_stencil_1_5, (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (3*conv_s1_x_x - 0) * 52);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_42.write(conv_stencil_op_hcompute_conv_stencil_1_5, (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (3*conv_s1_x_x - 0) * 56);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_9_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_9, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_conv_stencil_2_10.write(conv_stencil_op_hcompute_conv_stencil_2_9, (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (1 + 3*conv_s1_x_x - 1) * 52);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_hw_output_stencil_42.write(conv_stencil_op_hcompute_conv_stencil_2_9, (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (1 + 3*conv_s1_x_x - 0) * 56);
}

inline void conv_stencil_op_hcompute_conv_stencil_3_13_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_3_13, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_conv_stencil_3_14.write(conv_stencil_op_hcompute_conv_stencil_3_13, (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (2 + 3*conv_s1_x_x - 2) * 52);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_hw_output_stencil_42.write(conv_stencil_op_hcompute_conv_stencil_3_13, (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (2 + 3*conv_s1_x_x - 0) * 56);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_w - 0) * 1 + (conv_s0_y - 0) * 4 + (conv_s0_x - 0) * 56);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_10.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_w - 0) * 1 + (conv_s0_y - 0) * 4 + (conv_s0_x - 0) * 56);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_14.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_w - 0) * 1 + (conv_s0_y - 0) * 4 + (conv_s0_x - 0) * 56);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_18.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_w - 0) * 1 + (conv_s0_y - 0) * 4 + (conv_s0_x - 0) * 56);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_22.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_w - 0) * 1 + (conv_s0_y - 0) * 4 + (conv_s0_x - 0) * 56);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_26.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_w - 0) * 1 + (conv_s0_y - 0) * 4 + (conv_s0_x - 0) * 56);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_30.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_w - 0) * 1 + (conv_s0_y - 0) * 4 + (conv_s0_x - 0) * 60);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_34.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_w - 0) * 1 + (conv_s0_y - 0) * 4 + (conv_s0_x - 0) * 60);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_38.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_w - 0) * 1 + (conv_s0_y - 0) * 4 + (conv_s0_x - 0) * 60);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_17_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4_17, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_conv_stencil_4_18.write(conv_stencil_op_hcompute_conv_stencil_4_17, (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 1) * 4 + (3*conv_s1_x_x_1 - 0) * 52);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_hw_output_stencil_42.write(conv_stencil_op_hcompute_conv_stencil_4_17, (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 0) * 4 + (3*conv_s1_x_x_1 - 0) * 56);
}

inline void conv_stencil_op_hcompute_conv_stencil_5_21_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_5_21, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_conv_stencil_5_22.write(conv_stencil_op_hcompute_conv_stencil_5_21, (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 1) * 4 + (1 + 3*conv_s1_x_x_1 - 1) * 52);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_hw_output_stencil_42.write(conv_stencil_op_hcompute_conv_stencil_5_21, (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 0) * 4 + (1 + 3*conv_s1_x_x_1 - 0) * 56);
}

inline void conv_stencil_op_hcompute_conv_stencil_6_25_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_6_25, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_conv_stencil_6_26.write(conv_stencil_op_hcompute_conv_stencil_6_25, (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 1) * 4 + (2 + 3*conv_s1_x_x_1 - 2) * 52);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_hw_output_stencil_42.write(conv_stencil_op_hcompute_conv_stencil_6_25, (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 0) * 4 + (2 + 3*conv_s1_x_x_1 - 0) * 56);
}

inline void conv_stencil_op_hcompute_conv_stencil_7_29_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_7_29, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_conv_stencil_7_30.write(conv_stencil_op_hcompute_conv_stencil_7_29, (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 2) * 4 + (3*conv_s1_x_x_2 - 0) * 52);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_hw_output_stencil_42.write(conv_stencil_op_hcompute_conv_stencil_7_29, (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 0) * 4 + (3*conv_s1_x_x_2 - 0) * 60);
}

inline void conv_stencil_op_hcompute_conv_stencil_8_33_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_8_33, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_conv_stencil_8_34.write(conv_stencil_op_hcompute_conv_stencil_8_33, (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 2) * 4 + (1 + 3*conv_s1_x_x_2 - 1) * 52);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_hw_output_stencil_42.write(conv_stencil_op_hcompute_conv_stencil_8_33, (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 0) * 4 + (1 + 3*conv_s1_x_x_2 - 0) * 60);
}

inline void conv_stencil_op_hcompute_conv_stencil_9_37_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_9_37, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_conv_stencil_9_38.write(conv_stencil_op_hcompute_conv_stencil_9_37, (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 2) * 4 + (2 + 3*conv_s1_x_x_2 - 2) * 52);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_hw_output_stencil_42.write(conv_stencil_op_hcompute_conv_stencil_9_37, (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 0) * 4 + (2 + 3*conv_s1_x_x_2 - 0) * 60);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_6_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_1_6 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[conv_s1_w, 3conv_s1_y_y, 3conv_s1_x_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_1_5 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (3*conv_s1_x_x - 0) * 52);
    return value_conv_stencil_op_hcompute_conv_stencil_1_5;
  }

  
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (3*conv_s1_x_x - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_10_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_2_10 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[conv_s1_w, 3conv_s1_y_y, 1 + 3conv_s1_x_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_2_9 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_conv_stencil_2_10.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (1 + 3*conv_s1_x_x - 1) * 52);
    return value_conv_stencil_op_hcompute_conv_stencil_2_9;
  }

  
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_10.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (1 + 3*conv_s1_x_x - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_14_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_3_14 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[conv_s1_w, 3conv_s1_y_y, 2 + 3conv_s1_x_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_3_13 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_conv_stencil_3_14.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (2 + 3*conv_s1_x_x - 2) * 52);
    return value_conv_stencil_op_hcompute_conv_stencil_3_13;
  }

  
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_14.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (3*conv_s1_y_y - 0) * 4 + (2 + 3*conv_s1_x_x - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_18_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_4_18 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> conv_stencil[conv_s1_w, 1 + 3conv_s1_y_y, 3conv_s1_x_x_1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_18.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 0) * 4 + (3*conv_s1_x_x_1 - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4_17 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_conv_stencil_4_18.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 1) * 4 + (3*conv_s1_x_x_1 - 0) * 52);
    return value_conv_stencil_op_hcompute_conv_stencil_4_17;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_22_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_5_22 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> conv_stencil[conv_s1_w, 1 + 3conv_s1_y_y, 1 + 3conv_s1_x_x_1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_22.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 0) * 4 + (1 + 3*conv_s1_x_x_1 - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_5_21 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_conv_stencil_5_22.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 1) * 4 + (1 + 3*conv_s1_x_x_1 - 1) * 52);
    return value_conv_stencil_op_hcompute_conv_stencil_5_21;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_26_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_6_26 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> conv_stencil[conv_s1_w, 1 + 3conv_s1_y_y, 2 + 3conv_s1_x_x_1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x_1 >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_26.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 0) * 4 + (2 + 3*conv_s1_x_x_1 - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_6_25 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_conv_stencil_6_26.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (1 + 3*conv_s1_y_y - 1) * 4 + (2 + 3*conv_s1_x_x_1 - 2) * 52);
    return value_conv_stencil_op_hcompute_conv_stencil_6_25;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_30_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_7_30 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> conv_stencil[conv_s1_w, 2 + 3conv_s1_y_y, 3conv_s1_x_x_2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_y_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_30.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 0) * 4 + (3*conv_s1_x_x_2 - 0) * 60);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_7_29 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_conv_stencil_7_30.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 2) * 4 + (3*conv_s1_x_x_2 - 0) * 52);
    return value_conv_stencil_op_hcompute_conv_stencil_7_29;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_34_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_8_34 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> conv_stencil[conv_s1_w, 2 + 3conv_s1_y_y, 1 + 3conv_s1_x_x_2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_y_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_34.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 0) * 4 + (1 + 3*conv_s1_x_x_2 - 0) * 60);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_8_33 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_conv_stencil_8_34.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 2) * 4 + (1 + 3*conv_s1_x_x_2 - 1) * 52);
    return value_conv_stencil_op_hcompute_conv_stencil_8_33;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_38_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_9_38 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> conv_stencil[conv_s1_w, 2 + 3conv_s1_y_y, 2 + 3conv_s1_x_x_2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x_2 >= 0) && (3 - conv_s1_y_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_38.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 0) * 4 + (2 + 3*conv_s1_x_x_2 - 0) * 60);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_9_37 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_conv_stencil_9_38.read(/*ram type address*/ (conv_s1_w - 0) * 1 + (2 + 3*conv_s1_y_y - 2) * 4 + (2 + 3*conv_s1_x_x_2 - 2) * 52);
    return value_conv_stencil_op_hcompute_conv_stencil_9_37;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_42_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_42 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  if ((((-hw_output_s0_x_xi + 3*floord(hw_output_s0_x_xi, 3) == 0) && (-hw_output_s0_y_yi + 3*floord(hw_output_s0_y_yi, 3) == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_1_5 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_42.read(/*ram type address*/ (hw_output_s0_w - 0) * 1 + (hw_output_s0_y_yi - 0) * 4 + (hw_output_s0_x_xi - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_1_5;
  }

  
  if ((((1 - hw_output_s0_x_xi + 3*floord(-1 + hw_output_s0_x_xi, 3) == 0) && (-hw_output_s0_y_yi + 3*floord(hw_output_s0_y_yi, 3) == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_2_9 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_9_to_conv_stencil_op_hcompute_hw_output_stencil_42.read(/*ram type address*/ (hw_output_s0_w - 0) * 1 + (hw_output_s0_y_yi - 0) * 4 + (hw_output_s0_x_xi - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_2_9;
  }

  
  if ((((-1 - hw_output_s0_x_xi + 3*floord(1 + hw_output_s0_x_xi, 3) == 0) && (-hw_output_s0_y_yi + 3*floord(hw_output_s0_y_yi, 3) == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_3_13 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_13_to_conv_stencil_op_hcompute_hw_output_stencil_42.read(/*ram type address*/ (hw_output_s0_w - 0) * 1 + (hw_output_s0_y_yi - 0) * 4 + (hw_output_s0_x_xi - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_3_13;
  }

  
  if ((((-hw_output_s0_x_xi + 3*floord(hw_output_s0_x_xi, 3) == 0) && (1 - hw_output_s0_y_yi + 3*floord(-1 + hw_output_s0_y_yi, 3) == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4_17 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_17_to_conv_stencil_op_hcompute_hw_output_stencil_42.read(/*ram type address*/ (hw_output_s0_w - 0) * 1 + (hw_output_s0_y_yi - 0) * 4 + (hw_output_s0_x_xi - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_4_17;
  }

  
  if ((((1 - hw_output_s0_x_xi + 3*floord(-1 + hw_output_s0_x_xi, 3) == 0) && (1 - hw_output_s0_y_yi + 3*floord(-1 + hw_output_s0_y_yi, 3) == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_5_21 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_21_to_conv_stencil_op_hcompute_hw_output_stencil_42.read(/*ram type address*/ (hw_output_s0_w - 0) * 1 + (hw_output_s0_y_yi - 0) * 4 + (hw_output_s0_x_xi - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_5_21;
  }

  
  if ((((-1 - hw_output_s0_x_xi + 3*floord(1 + hw_output_s0_x_xi, 3) == 0) && (1 - hw_output_s0_y_yi + 3*floord(-1 + hw_output_s0_y_yi, 3) == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_6_25 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_25_to_conv_stencil_op_hcompute_hw_output_stencil_42.read(/*ram type address*/ (hw_output_s0_w - 0) * 1 + (hw_output_s0_y_yi - 0) * 4 + (hw_output_s0_x_xi - 0) * 56);
    return value_conv_stencil_op_hcompute_conv_stencil_6_25;
  }

  
  if ((((-hw_output_s0_x_xi + 3*floord(hw_output_s0_x_xi, 3) == 0) && (-1 - hw_output_s0_y_yi + 3*floord(1 + hw_output_s0_y_yi, 3) == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_7_29 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_29_to_conv_stencil_op_hcompute_hw_output_stencil_42.read(/*ram type address*/ (hw_output_s0_w - 0) * 1 + (hw_output_s0_y_yi - 0) * 4 + (hw_output_s0_x_xi - 0) * 60);
    return value_conv_stencil_op_hcompute_conv_stencil_7_29;
  }

  
  if ((((1 - hw_output_s0_x_xi + 3*floord(-1 + hw_output_s0_x_xi, 3) == 0) && (-1 - hw_output_s0_y_yi + 3*floord(1 + hw_output_s0_y_yi, 3) == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_8_33 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_33_to_conv_stencil_op_hcompute_hw_output_stencil_42.read(/*ram type address*/ (hw_output_s0_w - 0) * 1 + (hw_output_s0_y_yi - 0) * 4 + (hw_output_s0_x_xi - 0) * 60);
    return value_conv_stencil_op_hcompute_conv_stencil_8_33;
  }

  
  if ((((-1 - hw_output_s0_x_xi + 3*floord(1 + hw_output_s0_x_xi, 3) == 0) && (-1 - hw_output_s0_y_yi + 3*floord(1 + hw_output_s0_y_yi, 3) == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_9_37 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_37_to_conv_stencil_op_hcompute_hw_output_stencil_42.read(/*ram type address*/ (hw_output_s0_w - 0) * 1 + (hw_output_s0_y_yi - 0) * 4 + (hw_output_s0_x_xi - 0) * 60);
    return value_conv_stencil_op_hcompute_conv_stencil_9_37;
  }

  
  return 0;
}

// # of bundles = 20
// op_hcompute_conv_stencil_1_read
//	conv_stencil_op_hcompute_conv_stencil_1_6
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_1_6

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_6_res = conv_stencil_op_hcompute_conv_stencil_1_6_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_1_6_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_5
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_5_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_5_write(conv_stencil_op_hcompute_conv_stencil_1_5_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_op_hcompute_conv_stencil_2_10
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_2_10

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_10_res = conv_stencil_op_hcompute_conv_stencil_2_10_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_2_10_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_9
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_9_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_9_write(conv_stencil_op_hcompute_conv_stencil_2_9_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_op_hcompute_conv_stencil_3_14
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_3_14

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_14_res = conv_stencil_op_hcompute_conv_stencil_3_14_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_3_14_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_op_hcompute_conv_stencil_3_13
inline void conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_3_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_13_res = op_hcompute_conv_stencil_3_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_3_13_write(conv_stencil_op_hcompute_conv_stencil_3_13_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_op_hcompute_conv_stencil_4_18
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_4_18

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_18_res = conv_stencil_op_hcompute_conv_stencil_4_18_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_4_18_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_op_hcompute_conv_stencil_4_17
inline void conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_4_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_17_res = op_hcompute_conv_stencil_4_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_17_write(conv_stencil_op_hcompute_conv_stencil_4_17_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_op_hcompute_conv_stencil_5_22
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_5_22

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_22_res = conv_stencil_op_hcompute_conv_stencil_5_22_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_5_22_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_op_hcompute_conv_stencil_5_21
inline void conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_5_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_21_res = op_hcompute_conv_stencil_5_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_5_21_write(conv_stencil_op_hcompute_conv_stencil_5_21_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_op_hcompute_conv_stencil_6_26
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_6_26

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_26_res = conv_stencil_op_hcompute_conv_stencil_6_26_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_6_26_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_op_hcompute_conv_stencil_6_25
inline void conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_6_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_25_res = op_hcompute_conv_stencil_6_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_6_25_write(conv_stencil_op_hcompute_conv_stencil_6_25_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_op_hcompute_conv_stencil_7_30
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_7_30

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_30_res = conv_stencil_op_hcompute_conv_stencil_7_30_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_7_30_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_op_hcompute_conv_stencil_7_29
inline void conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_7_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_29_res = op_hcompute_conv_stencil_7_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_7_29_write(conv_stencil_op_hcompute_conv_stencil_7_29_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_op_hcompute_conv_stencil_8_34
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_8_34

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_34_res = conv_stencil_op_hcompute_conv_stencil_8_34_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_8_34_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_op_hcompute_conv_stencil_8_33
inline void conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_8_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_33_res = op_hcompute_conv_stencil_8_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_8_33_write(conv_stencil_op_hcompute_conv_stencil_8_33_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_op_hcompute_conv_stencil_9_38
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_9_38

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_38_res = conv_stencil_op_hcompute_conv_stencil_9_38_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_9_38_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_op_hcompute_conv_stencil_9_37
inline void conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_9_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_37_res = op_hcompute_conv_stencil_9_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_9_37_write(conv_stencil_op_hcompute_conv_stencil_9_37_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_4
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_write(conv_stencil_op_hcompute_conv_stencil_4_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_42
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_42

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_42_res = conv_stencil_op_hcompute_hw_output_stencil_42_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_42_res);
	return result;
}

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache {
	// RAM Box: {[0, 15], [0, 15], [0, 1]}
	// Capacity: 512
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[512];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*512);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 512)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 512);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 512)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 512);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_11_cache {
	// RAM Box: {[0, 15], [0, 15], [0, 1]}
	// Capacity: 512
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[512];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_11_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*512);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_11_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 512)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 512);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 512)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 512);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_15_cache {
	// RAM Box: {[0, 15], [0, 15], [0, 1]}
	// Capacity: 544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_15_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*544);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_15_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_19_cache {
	// RAM Box: {[0, 15], [0, 15], [0, 1]}
	// Capacity: 512
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[512];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_19_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*512);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_19_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 512)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 512);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 512)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 512);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_23_cache {
	// RAM Box: {[0, 15], [0, 15], [0, 1]}
	// Capacity: 512
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[512];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_23_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*512);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_23_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 512)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 512);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 512)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 512);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_27_cache {
	// RAM Box: {[0, 15], [0, 16], [0, 1]}
	// Capacity: 544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_27_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*544);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_27_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_31_cache {
	// RAM Box: {[0, 16], [0, 14], [0, 1]}
	// Capacity: 544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_31_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*544);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_31_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_35_cache {
	// RAM Box: {[0, 16], [0, 15], [0, 1]}
	// Capacity: 544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_35_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*544);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_35_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_39_cache {
	// RAM Box: {[0, 16], [0, 16], [0, 1]}
	// Capacity: 578
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[578];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_39_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*578);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_39_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 578)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 578);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 578)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 578);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_cache {
  // # of banks: 9
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_11_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_11;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_15_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_15;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_19_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_19;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_23_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_23;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_27_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_27;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_31_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_31;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_35_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_35;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_39_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_39;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_y - 0) * 1 + (hw_input_s0_x - 0) * 16 + (hw_input_s0_z - 0) * 256);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_11.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_y - 0) * 1 + (hw_input_s0_x - 0) * 16 + (hw_input_s0_z - 0) * 256);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_15.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_y - 0) * 1 + (hw_input_s0_x - 0) * 16 + (hw_input_s0_z - 0) * 272);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_19.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_y - 0) * 1 + (hw_input_s0_x - 0) * 16 + (hw_input_s0_z - 0) * 256);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_23.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_y - 0) * 1 + (hw_input_s0_x - 0) * 16 + (hw_input_s0_z - 0) * 256);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_27.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_y - 0) * 1 + (hw_input_s0_x - 0) * 16 + (hw_input_s0_z - 0) * 272);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_31.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_y - 0) * 1 + (hw_input_s0_x - 0) * 17 + (hw_input_s0_z - 0) * 272);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_35.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_y - 0) * 1 + (hw_input_s0_x - 0) * 17 + (hw_input_s0_z - 0) * 272);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_39.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_y - 0) * 1 + (hw_input_s0_x - 0) * 17 + (hw_input_s0_z - 0) * 289);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_7 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_y + 3conv_s1_y_y, conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7.read(/*ram type address*/ (conv_s1_r_y + 3*conv_s1_y_y - 0) * 1 + (conv_s1_r_x + 3*conv_s1_x_x - 0) * 16 + (conv_s1_r_z - 0) * 256);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_11 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_y + 3conv_s1_y_y, 1 + conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_11.read(/*ram type address*/ (conv_s1_r_y + 3*conv_s1_y_y - 0) * 1 + (1 + conv_s1_r_x + 3*conv_s1_x_x - 0) * 16 + (conv_s1_r_z - 0) * 256);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_15_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_15 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_y + 3conv_s1_y_y, 2 + conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_15.read(/*ram type address*/ (conv_s1_r_y + 3*conv_s1_y_y - 0) * 1 + (2 + conv_s1_r_x + 3*conv_s1_x_x - 0) * 16 + (conv_s1_r_z - 0) * 272);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_19_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_19 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_input_stencil[1 + conv_s1_r_y + 3conv_s1_y_y, conv_s1_r_x + 3conv_s1_x_x_1, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_19.read(/*ram type address*/ (1 + conv_s1_r_y + 3*conv_s1_y_y - 0) * 1 + (conv_s1_r_x + 3*conv_s1_x_x_1 - 0) * 16 + (conv_s1_r_z - 0) * 256);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_23_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_23 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_input_stencil[1 + conv_s1_r_y + 3conv_s1_y_y, 1 + conv_s1_r_x + 3conv_s1_x_x_1, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_23.read(/*ram type address*/ (1 + conv_s1_r_y + 3*conv_s1_y_y - 0) * 1 + (1 + conv_s1_r_x + 3*conv_s1_x_x_1 - 0) * 16 + (conv_s1_r_z - 0) * 256);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_27 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_input_stencil[1 + conv_s1_r_y + 3conv_s1_y_y, 2 + conv_s1_r_x + 3conv_s1_x_x_1, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_27.read(/*ram type address*/ (1 + conv_s1_r_y + 3*conv_s1_y_y - 0) * 1 + (2 + conv_s1_r_x + 3*conv_s1_x_x_1 - 0) * 16 + (conv_s1_r_z - 0) * 272);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_31_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_31 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_input_stencil[2 + conv_s1_r_y + 3conv_s1_y_y, conv_s1_r_x + 3conv_s1_x_x_2, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_31.read(/*ram type address*/ (2 + conv_s1_r_y + 3*conv_s1_y_y - 0) * 1 + (conv_s1_r_x + 3*conv_s1_x_x_2 - 0) * 17 + (conv_s1_r_z - 0) * 272);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_35_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_35 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_input_stencil[2 + conv_s1_r_y + 3conv_s1_y_y, 1 + conv_s1_r_x + 3conv_s1_x_x_2, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_35.read(/*ram type address*/ (2 + conv_s1_r_y + 3*conv_s1_y_y - 0) * 1 + (1 + conv_s1_r_x + 3*conv_s1_x_x_2 - 0) * 17 + (conv_s1_r_z - 0) * 272);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_39_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_39 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_input_stencil[2 + conv_s1_r_y + 3conv_s1_y_y, 2 + conv_s1_r_x + 3conv_s1_x_x_2, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_39.read(/*ram type address*/ (2 + conv_s1_r_y + 3*conv_s1_y_y - 0) * 1 + (2 + conv_s1_r_x + 3*conv_s1_x_x_2 - 0) * 17 + (conv_s1_r_z - 0) * 289);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

// # of bundles = 10
// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_7
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_1_7

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_res = hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_1_7_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_11
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_2_11

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_11_res = hw_input_stencil_op_hcompute_conv_stencil_2_11_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_2_11_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_15
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_3_15

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_15_res = hw_input_stencil_op_hcompute_conv_stencil_3_15_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_3_15_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_19
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_4_19

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_19_res = hw_input_stencil_op_hcompute_conv_stencil_4_19_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_4_19_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_stencil_op_hcompute_conv_stencil_5_23
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_5_23

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_23_res = hw_input_stencil_op_hcompute_conv_stencil_5_23_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_5_23_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_input_stencil_op_hcompute_conv_stencil_6_27
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_6_27

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_27_res = hw_input_stencil_op_hcompute_conv_stencil_6_27_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_6_27_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_31
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_7_31

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_31_res = hw_input_stencil_op_hcompute_conv_stencil_7_31_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_7_31_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_35
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_8_35

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_35_res = hw_input_stencil_op_hcompute_conv_stencil_8_35_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_8_35_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_39
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_9_39

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_39_res = hw_input_stencil_op_hcompute_conv_stencil_9_39_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_9_39_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_0
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_0_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_input_stencil_op_hcompute_hw_input_stencil_0_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
}

#include "hw_classes.h"

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
	// Capacity: 72
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[72];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*72);
  }
  ~hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_12_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
	// Capacity: 72
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[72];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_12_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*72);
  }
  ~hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_12_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_16_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
	// Capacity: 72
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[72];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_16_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*72);
  }
  ~hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_16_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_20_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
	// Capacity: 72
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[72];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_20_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*72);
  }
  ~hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_20_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_24_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
	// Capacity: 72
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[72];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_24_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*72);
  }
  ~hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_24_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_28_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
	// Capacity: 72
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[72];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_28_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*72);
  }
  ~hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_28_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_32_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
	// Capacity: 72
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[72];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_32_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*72);
  }
  ~hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_32_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_36_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
	// Capacity: 72
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[72];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_36_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*72);
  }
  ~hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_36_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_40_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
	// Capacity: 72
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[72];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_40_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*72);
  }
  ~hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_40_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 72)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 72);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_cache {
  // # of banks: 9
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_12_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_12;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_16_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_16;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_20_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_20;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_24_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_24;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_28_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_28;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_32_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_32;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_36_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_36;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_40_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_40;
};



inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_uint<16>& hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, (hw_kernel_s0_y - 0) * 1 + (hw_kernel_s0_x - 0) * 3 + (hw_kernel_s0_w - 0) * 9 + (hw_kernel_s0_z - 0) * 36);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_12.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, (hw_kernel_s0_y - 0) * 1 + (hw_kernel_s0_x - 0) * 3 + (hw_kernel_s0_w - 0) * 9 + (hw_kernel_s0_z - 0) * 36);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_16.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, (hw_kernel_s0_y - 0) * 1 + (hw_kernel_s0_x - 0) * 3 + (hw_kernel_s0_w - 0) * 9 + (hw_kernel_s0_z - 0) * 36);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_20.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, (hw_kernel_s0_y - 0) * 1 + (hw_kernel_s0_x - 0) * 3 + (hw_kernel_s0_w - 0) * 9 + (hw_kernel_s0_z - 0) * 36);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_24.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, (hw_kernel_s0_y - 0) * 1 + (hw_kernel_s0_x - 0) * 3 + (hw_kernel_s0_w - 0) * 9 + (hw_kernel_s0_z - 0) * 36);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_28.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, (hw_kernel_s0_y - 0) * 1 + (hw_kernel_s0_x - 0) * 3 + (hw_kernel_s0_w - 0) * 9 + (hw_kernel_s0_z - 0) * 36);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_32.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, (hw_kernel_s0_y - 0) * 1 + (hw_kernel_s0_x - 0) * 3 + (hw_kernel_s0_w - 0) * 9 + (hw_kernel_s0_z - 0) * 36);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_36.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, (hw_kernel_s0_y - 0) * 1 + (hw_kernel_s0_x - 0) * 3 + (hw_kernel_s0_w - 0) * 9 + (hw_kernel_s0_z - 0) * 36);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_40.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, (hw_kernel_s0_y - 0) * 1 + (hw_kernel_s0_x - 0) * 3 + (hw_kernel_s0_w - 0) * 9 + (hw_kernel_s0_z - 0) * 36);
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_8_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_8 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8.read(/*ram type address*/ (conv_s1_r_y - 0) * 1 + (conv_s1_r_x - 0) * 3 + (conv_s1_w - 0) * 9 + (conv_s1_r_z - 0) * 36);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_12_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_12 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_12.read(/*ram type address*/ (conv_s1_r_y - 0) * 1 + (conv_s1_r_x - 0) * 3 + (conv_s1_w - 0) * 9 + (conv_s1_r_z - 0) * 36);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_16_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_16 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_16.read(/*ram type address*/ (conv_s1_r_y - 0) * 1 + (conv_s1_r_x - 0) * 3 + (conv_s1_w - 0) * 9 + (conv_s1_r_z - 0) * 36);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_20_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_20 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_20.read(/*ram type address*/ (conv_s1_r_y - 0) * 1 + (conv_s1_r_x - 0) * 3 + (conv_s1_w - 0) * 9 + (conv_s1_r_z - 0) * 36);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_24_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_24 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_24.read(/*ram type address*/ (conv_s1_r_y - 0) * 1 + (conv_s1_r_x - 0) * 3 + (conv_s1_w - 0) * 9 + (conv_s1_r_z - 0) * 36);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_28_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_28 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_28.read(/*ram type address*/ (conv_s1_r_y - 0) * 1 + (conv_s1_r_x - 0) * 3 + (conv_s1_w - 0) * 9 + (conv_s1_r_z - 0) * 36);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_32_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_32 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_32.read(/*ram type address*/ (conv_s1_r_y - 0) * 1 + (conv_s1_r_x - 0) * 3 + (conv_s1_w - 0) * 9 + (conv_s1_r_z - 0) * 36);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_36_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_36 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_36.read(/*ram type address*/ (conv_s1_r_y - 0) * 1 + (conv_s1_r_x - 0) * 3 + (conv_s1_w - 0) * 9 + (conv_s1_r_z - 0) * 36);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_40_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_40 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_40.read(/*ram type address*/ (conv_s1_r_y - 0) * 1 + (conv_s1_r_x - 0) * 3 + (conv_s1_w - 0) * 9 + (conv_s1_r_z - 0) * 36);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

// # of bundles = 10
// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_8
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_8

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_8_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_8_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_8_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_12
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_12

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_12_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_12_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_12_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_16
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_16

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_16_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_16_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_16_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_20
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_20

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_20_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_20_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_20_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_24
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_24

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_24_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_24_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_24_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_28
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_28

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_28_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_28_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_28_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_32
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_32

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_32_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_32_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_32_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_36
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_36

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_36_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_36_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_36_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_40
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_40

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_40_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_40_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_40_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}



// Operation logic
inline void op_hcompute_hw_input_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_copy_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z) {
  // Dynamic address computation

	// Consume: input_copy_stencil
	auto input_copy_stencil_hw_input_s0_y_c__hw_input_s0_x_c__hw_input_s0_z_value = input_copy_stencil.read();
	auto compute_result = hcompute_hw_input_stencil(input_copy_stencil_hw_input_s0_y_c__hw_input_s0_x_c__hw_input_s0_z_value);
	// Produce: hw_input_stencil
	hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(/* arg names */compute_result, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_kernel_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */kernel_copy_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z) {
  // Dynamic address computation

	// Consume: kernel_copy_stencil
	auto kernel_copy_stencil_hw_kernel_s0_y_c__hw_kernel_s0_x_c__hw_kernel_s0_w_c__hw_kernel_s0_z_value = kernel_copy_stencil.read();
	auto compute_result = hcompute_hw_kernel_stencil(kernel_copy_stencil_hw_kernel_s0_y_c__hw_kernel_s0_x_c__hw_kernel_s0_w_c__hw_kernel_s0_z_value);
	// Produce: hw_kernel_stencil
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(/* arg names */compute_result, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_1(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp_conv_s1_x_x_m_3_rp__value = conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp_conv_s1_x_x_m_3_rp__value, hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_2(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__value = conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_2(conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__value, hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_3(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__value = conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_3(conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__value, hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_4(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp_conv_s1_x_x_1_m_3_rp__value = conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_4(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp_conv_s1_x_x_1_m_3_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_5(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__1_rp__value = conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_5(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__1_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_6(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__2_rp__value = conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_6(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__2_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_7(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp_conv_s1_x_x_2_m_3_rp__value = conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_7(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp_conv_s1_x_x_2_m_3_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_8(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__1_rp__value = conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_8(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__1_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_9(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__2_rp__value = conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_9(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__2_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_w_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_w_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_unet_conv_3_3(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */kernel_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_unet_conv_3_3_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv_stencil_cache conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_stencil_cache hw_input_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_kernel_stencil_cache hw_kernel_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0, 0, 0, 0, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3; op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4; op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4; op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1; op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4; op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4; op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13; op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4; op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0, 0, 0, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
//   { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0, 0, 0, 0, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
// Condition for op_hcompute_conv_stencil(((i14 == 0) && (i13 == 0) && (i12 == 0) && (i11 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (13 - i3 >= 0) && (i5 >= 0) && (13 - i5 >= 0) && (i7 >= 0) && (3 - i7 >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
// Condition for op_hcompute_conv_stencil_4(((i14 == 0) && (-1 + i12 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0) && (i11 >= 0) && (4 - i11 >= 0) && (i13 >= 0) && (4 - i13 >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
// Condition for op_hcompute_conv_stencil_5(((-1 + i14 == 0) && (-1 + i12 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0) && (i11 >= 0) && (4 - i11 >= 0) && (i13 >= 0) && (4 - i13 >= 0)))
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_1(((i14 == 0) && (i12 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0) && (i11 >= 0) && (4 - i11 >= 0) && (i13 >= 0) && (4 - i13 >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
// Condition for op_hcompute_hw_input_stencil(((i14 == 0) && (i13 == 0) && (i12 == 0) && (i11 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (15 - i3 >= 0) && (i5 >= 0) && (15 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_3(((-2 + i14 == 0) && (i12 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0) && (i11 >= 0) && (4 - i11 >= 0) && (i13 >= 0) && (4 - i13 >= 0)))
//   { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
// Condition for op_hcompute_conv_stencil_8(((-1 + i14 == 0) && (-2 + i12 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0) && (i11 >= 0) && (4 - i11 >= 0) && (i13 >= 0) && (4 - i13 >= 0)))
//   { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
// Condition for op_hcompute_conv_stencil_9(((-2 + i14 == 0) && (-2 + i12 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0) && (i11 >= 0) && (4 - i11 >= 0) && (i13 >= 0) && (4 - i13 >= 0)))
//   { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
// Condition for op_hcompute_conv_stencil_6(((-2 + i14 == 0) && (-1 + i12 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0) && (i11 >= 0) && (4 - i11 >= 0) && (i13 >= 0) && (4 - i13 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
// Condition for op_hcompute_hw_output_stencil(((i14 == 0) && (i13 == 0) && (i12 == 0) && (i11 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-4 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (3 - i3 >= 0) && (i5 >= 0) && (13 - i5 >= 0) && (i7 >= 0) && (13 - i7 >= 0)))
//   { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
// Condition for op_hcompute_conv_stencil_7(((i14 == 0) && (-2 + i12 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0) && (i11 >= 0) && (4 - i11 >= 0) && (i13 >= 0) && (4 - i13 >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_2(((-1 + i14 == 0) && (i12 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0) && (i11 >= 0) && (4 - i11 >= 0) && (i13 >= 0) && (4 - i13 >= 0)))
//   { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0, 0, 0, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
// Condition for op_hcompute_hw_kernel_stencil(((i14 == 0) && (i13 == 0) && (i12 == 0) && (i11 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (3 - i7 >= 0) && (i9 >= 0) && (1 - i9 >= 0)))

  /*
{
  for (int c3 = 0; c3 <= 15; c3 += 1)
    for (int c5 = 0; c5 <= 15; c5 += 1)
      for (int c7 = 0; c7 <= 1; c7 += 1)
        op_hcompute_hw_input_stencil(0, c3, c5, c7);
  for (int c3 = 0; c3 <= 2; c3 += 1)
    for (int c5 = 0; c5 <= 2; c5 += 1)
      for (int c7 = 0; c7 <= 3; c7 += 1)
        for (int c9 = 0; c9 <= 1; c9 += 1)
          op_hcompute_hw_kernel_stencil(0, c3, c5, c7, c9);
  for (int c3 = 0; c3 <= 13; c3 += 1)
    for (int c5 = 0; c5 <= 13; c5 += 1)
      for (int c7 = 0; c7 <= 3; c7 += 1)
        op_hcompute_conv_stencil(0, c3, c5, c7);
  for (int c3 = 0; c3 <= 2; c3 += 1)
    for (int c5 = 0; c5 <= 2; c5 += 1)
      for (int c7 = 0; c7 <= 1; c7 += 1)
        for (int c9 = 0; c9 <= 3; c9 += 1)
          for (int c11 = 0; c11 <= 4; c11 += 1) {
            for (int c13 = 0; c13 <= 4; c13 += 1) {
              op_hcompute_conv_stencil_1(0, c3, c5, c7, c9, c11, c13);
              op_hcompute_conv_stencil_2(0, c3, c5, c7, c9, c11, c13);
              op_hcompute_conv_stencil_3(0, c3, c5, c7, c9, c11, c13);
            }
            for (int c13 = 0; c13 <= 4; c13 += 1) {
              op_hcompute_conv_stencil_4(0, c3, c5, c7, c9, c11, c13);
              op_hcompute_conv_stencil_5(0, c3, c5, c7, c9, c11, c13);
              op_hcompute_conv_stencil_6(0, c3, c5, c7, c9, c11, c13);
            }
            for (int c13 = 0; c13 <= 4; c13 += 1) {
              op_hcompute_conv_stencil_7(0, c3, c5, c7, c9, c11, c13);
              op_hcompute_conv_stencil_8(0, c3, c5, c7, c9, c11, c13);
              op_hcompute_conv_stencil_9(0, c3, c5, c7, c9, c11, c13);
            }
          }
  for (int c3 = 0; c3 <= 3; c3 += 1)
    for (int c5 = 0; c5 <= 13; c5 += 1)
      for (int c7 = 0; c7 <= 13; c7 += 1)
        op_hcompute_hw_output_stencil(0, c3, c5, c7);
}

  */
	{
	  for (int c3 = 0; c3 <= 15; c3 += 1)
	    for (int c5 = 0; c5 <= 15; c5 += 1)
	      for (int c7 = 0; c7 <= 1; c7 += 1)
	        op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c3, c5, c7);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c5 = 0; c5 <= 2; c5 += 1)
	      for (int c7 = 0; c7 <= 3; c7 += 1)
	        for (int c9 = 0; c9 <= 1; c9 += 1)
	          op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, c3, c5, c7, c9);
	  for (int c3 = 0; c3 <= 13; c3 += 1)
	    for (int c5 = 0; c5 <= 13; c5 += 1)
	      for (int c7 = 0; c7 <= 3; c7 += 1)
	        op_hcompute_conv_stencil(conv_stencil, 0, c3, c5, c7);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c5 = 0; c5 <= 2; c5 += 1)
	      for (int c7 = 0; c7 <= 1; c7 += 1)
	        for (int c9 = 0; c9 <= 3; c9 += 1)
	          for (int c11 = 0; c11 <= 4; c11 += 1) {
	            for (int c13 = 0; c13 <= 4; c13 += 1) {
	              op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	            }
	            for (int c13 = 0; c13 <= 4; c13 += 1) {
	              op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	            }
	            for (int c13 = 0; c13 <= 4; c13 += 1) {
	              op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	            }
	          }
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c5 = 0; c5 <= 13; c5 += 1)
	      for (int c7 = 0; c7 <= 13; c7 += 1)
	        op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, c3, c5, c7);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_unet_conv_3_3_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */kernel_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_unet_conv_3_3(input_copy_stencil, kernel_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> input_copy_stencil[hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
const int op_hcompute_hw_input_stencil_read_pipe0_num_transfers = 512;
  // { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> kernel_copy_stencil[hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
const int op_hcompute_hw_kernel_stencil_read_pipe0_num_transfers = 72;


extern "C" {

void unoptimized_unet_conv_3_3_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_kernel_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_kernel_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_kernel_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_kernel_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_input_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_kernel_stencil_read_pipe0, op_hcompute_hw_kernel_stencil_read_pipe0_channel, op_hcompute_hw_kernel_stencil_read_pipe0_num_transfers*size);

  unoptimized_unet_conv_3_3_wrapper(op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_kernel_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_unet_conv_3_3_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_kernel_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_kernel_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_unet_conv_3_3(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_kernel_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

