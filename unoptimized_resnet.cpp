#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: resnet_compute.h
#include "resnet_compute.h"

#include "hw_classes.h"

struct conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache {
	// RAM Box: {[0, 27], [0, 27], [9, 9]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache {
	// RAM Box: {[0, 27], [0, 27], [10, 10]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache {
	// RAM Box: {[0, 27], [0, 27], [11, 11]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache {
	// RAM Box: {[0, 27], [0, 27], [12, 12]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache {
	// RAM Box: {[0, 27], [0, 27], [13, 13]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache {
	// RAM Box: {[0, 27], [0, 27], [14, 14]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache {
	// RAM Box: {[0, 27], [0, 27], [15, 15]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 0]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache {
	// RAM Box: {[0, 27], [0, 27], [1, 1]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache {
	// RAM Box: {[0, 27], [0, 27], [2, 2]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache {
	// RAM Box: {[0, 27], [0, 27], [3, 3]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache {
	// RAM Box: {[0, 27], [0, 27], [4, 4]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache {
	// RAM Box: {[0, 27], [0, 27], [5, 5]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache {
	// RAM Box: {[0, 27], [0, 27], [6, 6]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache {
	// RAM Box: {[0, 27], [0, 27], [7, 7]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache {
	// RAM Box: {[0, 27], [0, 27], [8, 8]}
	// Capacity: 784
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[784];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*784);
  }
  ~conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[12544];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*12544);
  }
  ~conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache() {
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
  // # of banks: 48
  conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168;
  conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186;
  conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204;
  conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222;
  conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240;
  conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258;
  conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6;
  conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24;
  conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60;
  conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78;
  conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96;
  conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114;
  conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132;
  conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150;
  conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150;
  conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294;
};



inline void conv_stencil_op_hcompute_conv_stencil_10_167_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_10_167, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168.write(conv_stencil_op_hcompute_conv_stencil_10_167, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 9) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_10_167, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_11_185_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_11_185, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186.write(conv_stencil_op_hcompute_conv_stencil_11_185, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 10) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_11_185, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_12_203_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_12_203, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204.write(conv_stencil_op_hcompute_conv_stencil_12_203, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 11) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_12_203, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_13_221_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_13_221, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222.write(conv_stencil_op_hcompute_conv_stencil_13_221, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 12) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_13_221, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_14_239_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_14_239, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240.write(conv_stencil_op_hcompute_conv_stencil_14_239, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 13) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_14_239, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_15_257_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_15_257, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258.write(conv_stencil_op_hcompute_conv_stencil_15_257, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 14) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_15_257, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_16_275_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_16_275, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276.write(conv_stencil_op_hcompute_conv_stencil_16_275, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 15) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_16_275, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_1_5_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_5, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6.write(conv_stencil_op_hcompute_conv_stencil_1_5, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_1_5, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_23_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_23, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24.write(conv_stencil_op_hcompute_conv_stencil_2_23, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 1) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_2_23, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_3_41_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_3_41, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42.write(conv_stencil_op_hcompute_conv_stencil_3_41, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 2) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_3_41, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150.write(conv_stencil_op_hcompute_conv_stencil_4, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_59_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4_59, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60.write(conv_stencil_op_hcompute_conv_stencil_4_59, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 3) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_4_59, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_5_77_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_5_77, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78.write(conv_stencil_op_hcompute_conv_stencil_5_77, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 4) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_5_77, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_6_95_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_6_95, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96.write(conv_stencil_op_hcompute_conv_stencil_6_95, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 5) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_6_95, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_7_113_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_7_113, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114.write(conv_stencil_op_hcompute_conv_stencil_7_113, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 6) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_7_113, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_8_131_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_8_131, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132.write(conv_stencil_op_hcompute_conv_stencil_8_131, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 7) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_8_131, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_9_149_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_9_149, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150.write(conv_stencil_op_hcompute_conv_stencil_9_149, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 8) * 784);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294.write(conv_stencil_op_hcompute_conv_stencil_9_149, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 0) * 784);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_168_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_10_168 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_10_167 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 9) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_10_167;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_186_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_11_186 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_11_185 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 10) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_11_185;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_204_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_12_204 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_12_203 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 11) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_12_203;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_222_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_13_222 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_13_221 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 12) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_13_221;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_240_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_14_240 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_14_239 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 13) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_14_239;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_258_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_15_258 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_15_257 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 14) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_15_257;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_276_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_16_276 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_16_275 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 15) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_16_275;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_6_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_1_6 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_1_5 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_1_5;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_24_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_2_24 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_2_23 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 1) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_2_23;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_42_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_3_42 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_3_41 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 2) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_3_41;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_60_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_4_60 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4_59 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 3) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4_59;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_78_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_5_78 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_5_77 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 4) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_5_77;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_96_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_6_96 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_6_95 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 5) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_6_95;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_114_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_7_114 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_7_113 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 6) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_7_113;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_132_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_8_132 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_8_131 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 7) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_8_131;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_150_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_9_150 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_9_149 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 8) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_9_149;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_294_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_294 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  if ((((-9 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_10_167 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_10_167;
  }

  
  if ((((-10 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_11_185 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_11_185;
  }

  
  if ((((-11 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_12_203 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_12_203;
  }

  
  if ((((-12 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_13_221 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_13_221;
  }

  
  if ((((-13 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_14_239 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_14_239;
  }

  
  if ((((-14 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_15_257 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_15_257;
  }

  
  if ((((-15 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_16_275 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_16_275;
  }

  
  if ((((hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_1_5 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_1_5;
  }

  
  if ((((-1 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_2_23 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_2_23;
  }

  
  if ((((-2 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_3_41 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_3_41;
  }

  
  if ((((-3 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_4_59 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_4_59;
  }

  
  if ((((-4 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_5_77 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_5_77;
  }

  
  if ((((-5 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_6_95 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_6_95;
  }

  
  if ((((-6 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_7_113 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_7_113;
  }

  
  if ((((-7 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_8_131 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_8_131;
  }

  
  if ((((-8 + hw_output_s0_w == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_9_149 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
    return value_conv_stencil_op_hcompute_conv_stencil_9_149;
  }

  
  return 0;
}

// # of bundles = 34
// op_hcompute_conv_stencil_10_read
//	conv_stencil_op_hcompute_conv_stencil_10_168
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_10_168

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_168_res = conv_stencil_op_hcompute_conv_stencil_10_168_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_10_168_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_op_hcompute_conv_stencil_10_167
inline void conv_stencil_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_10_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_167_res = op_hcompute_conv_stencil_10_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_10_167_write(conv_stencil_op_hcompute_conv_stencil_10_167_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_op_hcompute_conv_stencil_11_186
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_11_186

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_186_res = conv_stencil_op_hcompute_conv_stencil_11_186_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_11_186_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_op_hcompute_conv_stencil_11_185
inline void conv_stencil_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_11_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_185_res = op_hcompute_conv_stencil_11_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_11_185_write(conv_stencil_op_hcompute_conv_stencil_11_185_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_op_hcompute_conv_stencil_12_204
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_12_204

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_204_res = conv_stencil_op_hcompute_conv_stencil_12_204_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_12_204_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_op_hcompute_conv_stencil_12_203
inline void conv_stencil_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_12_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_203_res = op_hcompute_conv_stencil_12_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_12_203_write(conv_stencil_op_hcompute_conv_stencil_12_203_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_op_hcompute_conv_stencil_13_222
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_13_222

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_222_res = conv_stencil_op_hcompute_conv_stencil_13_222_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_13_222_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_op_hcompute_conv_stencil_13_221
inline void conv_stencil_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_13_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_221_res = op_hcompute_conv_stencil_13_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_13_221_write(conv_stencil_op_hcompute_conv_stencil_13_221_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_op_hcompute_conv_stencil_14_240
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_14_240

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_240_res = conv_stencil_op_hcompute_conv_stencil_14_240_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_14_240_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_op_hcompute_conv_stencil_14_239
inline void conv_stencil_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_14_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_239_res = op_hcompute_conv_stencil_14_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_14_239_write(conv_stencil_op_hcompute_conv_stencil_14_239_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_op_hcompute_conv_stencil_15_258
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_15_258

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_258_res = conv_stencil_op_hcompute_conv_stencil_15_258_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_15_258_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_op_hcompute_conv_stencil_15_257
inline void conv_stencil_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_15_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_257_res = op_hcompute_conv_stencil_15_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_15_257_write(conv_stencil_op_hcompute_conv_stencil_15_257_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_16_read
//	conv_stencil_op_hcompute_conv_stencil_16_276
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_16_276

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_276_res = conv_stencil_op_hcompute_conv_stencil_16_276_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_16_276_res);
	return result;
}

// op_hcompute_conv_stencil_16_write
//	conv_stencil_op_hcompute_conv_stencil_16_275
inline void conv_stencil_op_hcompute_conv_stencil_16_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_16_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_275_res = op_hcompute_conv_stencil_16_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_16_275_write(conv_stencil_op_hcompute_conv_stencil_16_275_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_op_hcompute_conv_stencil_1_6
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_1_6

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_6_res = conv_stencil_op_hcompute_conv_stencil_1_6_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_1_6_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_5
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_5_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_5_write(conv_stencil_op_hcompute_conv_stencil_1_5_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_op_hcompute_conv_stencil_2_24
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_2_24

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_24_res = conv_stencil_op_hcompute_conv_stencil_2_24_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_2_24_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_23
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_23_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_23_write(conv_stencil_op_hcompute_conv_stencil_2_23_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_op_hcompute_conv_stencil_3_42
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_3_42

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_42_res = conv_stencil_op_hcompute_conv_stencil_3_42_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_3_42_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_op_hcompute_conv_stencil_3_41
inline void conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_3_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_41_res = op_hcompute_conv_stencil_3_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_3_41_write(conv_stencil_op_hcompute_conv_stencil_3_41_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_op_hcompute_conv_stencil_4_60
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_4_60

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_60_res = conv_stencil_op_hcompute_conv_stencil_4_60_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_4_60_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_op_hcompute_conv_stencil_4_59
inline void conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_4_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_59_res = op_hcompute_conv_stencil_4_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_59_write(conv_stencil_op_hcompute_conv_stencil_4_59_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_op_hcompute_conv_stencil_5_78
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_5_78

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_78_res = conv_stencil_op_hcompute_conv_stencil_5_78_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_5_78_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_op_hcompute_conv_stencil_5_77
inline void conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_5_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_77_res = op_hcompute_conv_stencil_5_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_5_77_write(conv_stencil_op_hcompute_conv_stencil_5_77_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_op_hcompute_conv_stencil_6_96
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_6_96

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_96_res = conv_stencil_op_hcompute_conv_stencil_6_96_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_6_96_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_op_hcompute_conv_stencil_6_95
inline void conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_6_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_95_res = op_hcompute_conv_stencil_6_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_6_95_write(conv_stencil_op_hcompute_conv_stencil_6_95_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_op_hcompute_conv_stencil_7_114
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_7_114

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_114_res = conv_stencil_op_hcompute_conv_stencil_7_114_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_7_114_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_op_hcompute_conv_stencil_7_113
inline void conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_7_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_113_res = op_hcompute_conv_stencil_7_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_7_113_write(conv_stencil_op_hcompute_conv_stencil_7_113_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_op_hcompute_conv_stencil_8_132
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_8_132

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_132_res = conv_stencil_op_hcompute_conv_stencil_8_132_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_8_132_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_op_hcompute_conv_stencil_8_131
inline void conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_8_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_131_res = op_hcompute_conv_stencil_8_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_8_131_write(conv_stencil_op_hcompute_conv_stencil_8_131_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_op_hcompute_conv_stencil_9_150
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_9_150

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_150_res = conv_stencil_op_hcompute_conv_stencil_9_150_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_9_150_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_op_hcompute_conv_stencil_9_149
inline void conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_9_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_149_res = op_hcompute_conv_stencil_9_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_9_149_write(conv_stencil_op_hcompute_conv_stencil_9_149_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_4
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_write(conv_stencil_op_hcompute_conv_stencil_4_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_294
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_294

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_294_res = conv_stencil_op_hcompute_hw_output_stencil_294_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_294_res);
	return result;
}

