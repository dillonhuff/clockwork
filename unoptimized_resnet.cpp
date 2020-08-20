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

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache() {
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[7200];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*7200);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache() {
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
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_169_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_169 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_170_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_170 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_171_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_171 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_172_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_172 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_173_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_173 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_174_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_174 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_175_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_175 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_176_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_176 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_187_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_187 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_188_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_188 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_189_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_189 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_190_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_190 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_191_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_191 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_192_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_192 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_193_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_193 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_194_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_194 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_205_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_205 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_206_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_206 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_207_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_207 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_208_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_208 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_209_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_209 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_210_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_210 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_211_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_211 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_212_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_212 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_223_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_223 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_224_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_224 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_225_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_225 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_226_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_226 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_227_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_227 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_228_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_228 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_229_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_229 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_230_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_230 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_241_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_241 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_242_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_242 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_243_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_243 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_244_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_244 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_245_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_245 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_246_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_246 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_247_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_247 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_248_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_248 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_259_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_259 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_260_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_260 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_261_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_261 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_262_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_262 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_263_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_263 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_264_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_264 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_265_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_265 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_266_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_266 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_277_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_277 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_278_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_278 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_279_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_279 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_280_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_280 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_281_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_281 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_282_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_282 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_283_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_283 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_284_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_284 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_10 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_11 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_12 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_13_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_13 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_14_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_14 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_7 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_8 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_9 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_25_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_25 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_26_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_26 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_27 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_28_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_28 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_29_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_29 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_30_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_30 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_31_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_31 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_32_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_32 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_43_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_43 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_44_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_44 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_45_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_45 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_46_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_46 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_47_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_47 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_48_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_48 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_49_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_49 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_50_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_50 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_61_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_61 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_62_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_62 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_63_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_63 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_64_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_64 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_65_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_65 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_66_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_66 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_67_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_67 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_68_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_68 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_79_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_79 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_80_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_80 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_81_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_81 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_82_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_82 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_83_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_83 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_84_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_84 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_85_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_85 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_86_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_86 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_100_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_100 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_101_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_101 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_102_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_102 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_103_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_103 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_104_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_104 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_97_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_97 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_98_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_98 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_99_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_99 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_115_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_115 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_116_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_116 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_117_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_117 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_118_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_118 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_119_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_119 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_120_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_120 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_121_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_121 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_122_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_122 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_133_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_133 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_134_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_134 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_135_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_135 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_136_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_136 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
