#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: harris_compute.h
#include "harris_compute.h"

#include "hw_classes.h"

struct cim_output_stencil_hcompute_cim_output_stencil_31_to_cim_output_stencil_hcompute_hw_output_stencil_7_cache {
	// RAM Box: {[0, 57], [0, 57]}
	// Capacity: 3364
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3364];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_output_stencil_hcompute_cim_output_stencil_31_to_cim_output_stencil_hcompute_hw_output_stencil_7_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3364);
  }
  ~cim_output_stencil_hcompute_cim_output_stencil_31_to_cim_output_stencil_hcompute_hw_output_stencil_7_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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
  cim_output_stencil_hcompute_cim_output_stencil_31_to_cim_output_stencil_hcompute_hw_output_stencil_7_cache cim_output_stencil_hcompute_cim_output_stencil_31_to_cim_output_stencil_hcompute_hw_output_stencil_7;
};



inline void cim_output_stencil_hcompute_cim_output_stencil_31_write(hw_uint<16>& cim_output_stencil_hcompute_cim_output_stencil_31, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  cim_output_stencil.cim_output_stencil_hcompute_cim_output_stencil_31_to_cim_output_stencil_hcompute_hw_output_stencil_7.write(cim_output_stencil_hcompute_cim_output_stencil_31, (cim_output_s0_x - 0) * 1 + (cim_output_s0_y - 0) * 58);
}

inline hw_uint<16> cim_output_stencil_hcompute_hw_output_stencil_7_select(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_output_stencil_hcompute_hw_output_stencil_7 read pattern: { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> cim_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
  auto value_cim_output_stencil_hcompute_cim_output_stencil_31 = cim_output_stencil.cim_output_stencil_hcompute_cim_output_stencil_31_to_cim_output_stencil_hcompute_hw_output_stencil_7.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 58);
  return value_cim_output_stencil_hcompute_cim_output_stencil_31;
  return 0;
}

// # of bundles = 2
// hcompute_cim_output_stencil_write
//	cim_output_stencil_hcompute_cim_output_stencil_31
inline void cim_output_stencil_hcompute_cim_output_stencil_write_bundle_write(hw_uint<16>& hcompute_cim_output_stencil_write, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
	hw_uint<16> cim_output_stencil_hcompute_cim_output_stencil_31_res = hcompute_cim_output_stencil_write.extract<0, 15>();
	cim_output_stencil_hcompute_cim_output_stencil_31_write(cim_output_stencil_hcompute_cim_output_stencil_31_res, cim_output_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
}

// hcompute_hw_output_stencil_read
//	cim_output_stencil_hcompute_hw_output_stencil_7
inline hw_uint<16> cim_output_stencil_hcompute_hw_output_stencil_read_bundle_read(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // cim_output_stencil_hcompute_hw_output_stencil_7

	hw_uint<16> result;
	hw_uint<16> cim_output_stencil_hcompute_hw_output_stencil_7_res = cim_output_stencil_hcompute_hw_output_stencil_7_select(cim_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, cim_output_stencil_hcompute_hw_output_stencil_7_res);
	return result;
}

#include "hw_classes.h"

struct cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_32_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_32_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_32_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_33_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_33_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_33_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_34_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_34_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_34_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_35_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_35_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_35_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_36_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_36_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_36_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_37_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_37_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_37_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_38_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_38_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_38_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_39_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_39_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_39_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_40_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_40_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_40_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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
  // # of banks: 9
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_32_cache cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_32;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_33_cache cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_33;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_34_cache cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_34;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_35_cache cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_35;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_36_cache cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_36;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_37_cache cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_37;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_38_cache cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_38;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_39_cache cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_39;
  cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_40_cache cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_40;
};



inline void cim_stencil_hcompute_cim_stencil_70_write(hw_uint<16>& cim_stencil_hcompute_cim_stencil_70, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_32.write(cim_stencil_hcompute_cim_stencil_70, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_33.write(cim_stencil_hcompute_cim_stencil_70, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_34.write(cim_stencil_hcompute_cim_stencil_70, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_35.write(cim_stencil_hcompute_cim_stencil_70, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_36.write(cim_stencil_hcompute_cim_stencil_70, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_37.write(cim_stencil_hcompute_cim_stencil_70, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_38.write(cim_stencil_hcompute_cim_stencil_70, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_39.write(cim_stencil_hcompute_cim_stencil_70, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_40.write(cim_stencil_hcompute_cim_stencil_70, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_32_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_32 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_x, -1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_70 = cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_32.read(/*ram type address*/ (-1 + cim_output_s0_x - -1) * 1 + (-1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_70;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_33_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_33 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_x, cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_70 = cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_33.read(/*ram type address*/ (cim_output_s0_x - -1) * 1 + (cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_70;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_34_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_34 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_x, -1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_70 = cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_34.read(/*ram type address*/ (cim_output_s0_x - -1) * 1 + (-1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_70;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_35_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_35 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_x, -1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_70 = cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_35.read(/*ram type address*/ (1 + cim_output_s0_x - -1) * 1 + (-1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_70;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_36_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_36 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_x, cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_70 = cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_36.read(/*ram type address*/ (-1 + cim_output_s0_x - -1) * 1 + (cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_70;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_37_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_37 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_x, cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_70 = cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_37.read(/*ram type address*/ (1 + cim_output_s0_x - -1) * 1 + (cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_70;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_38_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_38 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_x, 1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_70 = cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_38.read(/*ram type address*/ (-1 + cim_output_s0_x - -1) * 1 + (1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_70;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_39_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_39 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_x, 1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_70 = cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_39.read(/*ram type address*/ (cim_output_s0_x - -1) * 1 + (1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_70;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_40_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_40 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_x, 1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_70 = cim_stencil.cim_stencil_hcompute_cim_stencil_70_to_cim_stencil_hcompute_cim_output_stencil_40.read(/*ram type address*/ (1 + cim_output_s0_x - -1) * 1 + (1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_70;
  return 0;
}

// # of bundles = 2
// hcompute_cim_output_stencil_read
//	cim_stencil_hcompute_cim_output_stencil_32
//	cim_stencil_hcompute_cim_output_stencil_33
//	cim_stencil_hcompute_cim_output_stencil_34
//	cim_stencil_hcompute_cim_output_stencil_35
//	cim_stencil_hcompute_cim_output_stencil_36
//	cim_stencil_hcompute_cim_output_stencil_37
//	cim_stencil_hcompute_cim_output_stencil_38
//	cim_stencil_hcompute_cim_output_stencil_39
//	cim_stencil_hcompute_cim_output_stencil_40
inline hw_uint<144> cim_stencil_hcompute_cim_output_stencil_read_bundle_read(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  // # of ports in bundle: 9
    // cim_stencil_hcompute_cim_output_stencil_32
    // cim_stencil_hcompute_cim_output_stencil_33
    // cim_stencil_hcompute_cim_output_stencil_34
    // cim_stencil_hcompute_cim_output_stencil_35
    // cim_stencil_hcompute_cim_output_stencil_36
    // cim_stencil_hcompute_cim_output_stencil_37
    // cim_stencil_hcompute_cim_output_stencil_38
    // cim_stencil_hcompute_cim_output_stencil_39
    // cim_stencil_hcompute_cim_output_stencil_40

	hw_uint<144> result;
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_32_res = cim_stencil_hcompute_cim_output_stencil_32_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<0, 144>(result, cim_stencil_hcompute_cim_output_stencil_32_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_33_res = cim_stencil_hcompute_cim_output_stencil_33_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<16, 144>(result, cim_stencil_hcompute_cim_output_stencil_33_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_34_res = cim_stencil_hcompute_cim_output_stencil_34_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<32, 144>(result, cim_stencil_hcompute_cim_output_stencil_34_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_35_res = cim_stencil_hcompute_cim_output_stencil_35_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<48, 144>(result, cim_stencil_hcompute_cim_output_stencil_35_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_36_res = cim_stencil_hcompute_cim_output_stencil_36_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<64, 144>(result, cim_stencil_hcompute_cim_output_stencil_36_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_37_res = cim_stencil_hcompute_cim_output_stencil_37_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<80, 144>(result, cim_stencil_hcompute_cim_output_stencil_37_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_38_res = cim_stencil_hcompute_cim_output_stencil_38_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<96, 144>(result, cim_stencil_hcompute_cim_output_stencil_38_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_39_res = cim_stencil_hcompute_cim_output_stencil_39_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<112, 144>(result, cim_stencil_hcompute_cim_output_stencil_39_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_40_res = cim_stencil_hcompute_cim_output_stencil_40_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<128, 144>(result, cim_stencil_hcompute_cim_output_stencil_40_res);
	return result;
}

// hcompute_cim_stencil_write
//	cim_stencil_hcompute_cim_stencil_70
inline void cim_stencil_hcompute_cim_stencil_write_bundle_write(hw_uint<16>& hcompute_cim_stencil_write, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
	hw_uint<16> cim_stencil_hcompute_cim_stencil_70_res = hcompute_cim_stencil_write.extract<0, 15>();
	cim_stencil_hcompute_cim_stencil_70_write(cim_stencil_hcompute_cim_stencil_70_res, cim_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxx_stencil_9_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxx_stencil_9_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxx_stencil_9_cache() {
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

struct grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxy_stencil_1_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxy_stencil_1_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxy_stencil_1_cache() {
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

struct grad_x_stencil_cache {
  // # of banks: 2
  grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxx_stencil_9_cache grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxx_stencil_9;
  grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxy_stencil_1_cache grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxy_stencil_1;
};



inline void grad_x_stencil_hcompute_grad_x_stencil_52_write(hw_uint<16>& grad_x_stencil_hcompute_grad_x_stencil_52, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  grad_x_stencil.grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxx_stencil_9.write(grad_x_stencil_hcompute_grad_x_stencil_52, (grad_x_s0_x - -2) * 1 + (grad_x_s0_y - -2) * 64);
  grad_x_stencil.grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxy_stencil_1.write(grad_x_stencil_hcompute_grad_x_stencil_52, (grad_x_s0_x - -2) * 1 + (grad_x_s0_y - -2) * 64);
}

inline hw_uint<16> grad_x_stencil_hcompute_lxx_stencil_9_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_stencil_hcompute_lxx_stencil_9 read pattern: { hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> grad_x_stencil[lxx_s0_x, lxx_s0_y] : -2 <= lxx_s0_y <= 61 and -2 <= lxx_s0_x <= 61 }
  auto value_grad_x_stencil_hcompute_grad_x_stencil_52 = grad_x_stencil.grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxx_stencil_9.read(/*ram type address*/ (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  return value_grad_x_stencil_hcompute_grad_x_stencil_52;
  return 0;
}

inline hw_uint<16> grad_x_stencil_hcompute_lxy_stencil_1_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_stencil_hcompute_lxy_stencil_1 read pattern: { hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_x_stencil[lxy_s0_x, lxy_s0_y] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61 }
  auto value_grad_x_stencil_hcompute_grad_x_stencil_52 = grad_x_stencil.grad_x_stencil_hcompute_grad_x_stencil_52_to_grad_x_stencil_hcompute_lxy_stencil_1.read(/*ram type address*/ (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  return value_grad_x_stencil_hcompute_grad_x_stencil_52;
  return 0;
}

// # of bundles = 3
// hcompute_grad_x_stencil_write
//	grad_x_stencil_hcompute_grad_x_stencil_52
inline void grad_x_stencil_hcompute_grad_x_stencil_write_bundle_write(hw_uint<16>& hcompute_grad_x_stencil_write, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
	hw_uint<16> grad_x_stencil_hcompute_grad_x_stencil_52_res = hcompute_grad_x_stencil_write.extract<0, 15>();
	grad_x_stencil_hcompute_grad_x_stencil_52_write(grad_x_stencil_hcompute_grad_x_stencil_52_res, grad_x_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
}

// hcompute_lxx_stencil_read
//	grad_x_stencil_hcompute_lxx_stencil_9
inline hw_uint<16> grad_x_stencil_hcompute_lxx_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_hcompute_lxx_stencil_9

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_hcompute_lxx_stencil_9_res = grad_x_stencil_hcompute_lxx_stencil_9_select(grad_x_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_hcompute_lxx_stencil_9_res);
	return result;
}

// hcompute_lxy_stencil_read
//	grad_x_stencil_hcompute_lxy_stencil_1
inline hw_uint<16> grad_x_stencil_hcompute_lxy_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_hcompute_lxy_stencil_1

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_hcompute_lxy_stencil_1_res = grad_x_stencil_hcompute_lxy_stencil_1_select(grad_x_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_hcompute_lxy_stencil_1_res);
	return result;
}

#include "hw_classes.h"

struct grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lxy_stencil_2_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lxy_stencil_2_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lxy_stencil_2_cache() {
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

struct grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lyy_stencil_4_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lyy_stencil_4_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lyy_stencil_4_cache() {
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

struct grad_y_stencil_cache {
  // # of banks: 2
  grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lxy_stencil_2_cache grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lxy_stencil_2;
  grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lyy_stencil_4_cache grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lyy_stencil_4;
};



inline void grad_y_stencil_hcompute_grad_y_stencil_24_write(hw_uint<16>& grad_y_stencil_hcompute_grad_y_stencil_24, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  grad_y_stencil.grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lxy_stencil_2.write(grad_y_stencil_hcompute_grad_y_stencil_24, (grad_y_s0_x - -2) * 1 + (grad_y_s0_y - -2) * 64);
  grad_y_stencil.grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lyy_stencil_4.write(grad_y_stencil_hcompute_grad_y_stencil_24, (grad_y_s0_x - -2) * 1 + (grad_y_s0_y - -2) * 64);
}

inline hw_uint<16> grad_y_stencil_hcompute_lxy_stencil_2_select(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_stencil_hcompute_lxy_stencil_2 read pattern: { hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_y_stencil[lxy_s0_x, lxy_s0_y] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61 }
  auto value_grad_y_stencil_hcompute_grad_y_stencil_24 = grad_y_stencil.grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lxy_stencil_2.read(/*ram type address*/ (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  return value_grad_y_stencil_hcompute_grad_y_stencil_24;
  return 0;
}

inline hw_uint<16> grad_y_stencil_hcompute_lyy_stencil_4_select(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_stencil_hcompute_lyy_stencil_4 read pattern: { hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> grad_y_stencil[lyy_s0_x, lyy_s0_y] : -2 <= lyy_s0_y <= 61 and -2 <= lyy_s0_x <= 61 }
  auto value_grad_y_stencil_hcompute_grad_y_stencil_24 = grad_y_stencil.grad_y_stencil_hcompute_grad_y_stencil_24_to_grad_y_stencil_hcompute_lyy_stencil_4.read(/*ram type address*/ (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  return value_grad_y_stencil_hcompute_grad_y_stencil_24;
  return 0;
}

// # of bundles = 3
// hcompute_grad_y_stencil_write
//	grad_y_stencil_hcompute_grad_y_stencil_24
inline void grad_y_stencil_hcompute_grad_y_stencil_write_bundle_write(hw_uint<16>& hcompute_grad_y_stencil_write, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
	hw_uint<16> grad_y_stencil_hcompute_grad_y_stencil_24_res = hcompute_grad_y_stencil_write.extract<0, 15>();
	grad_y_stencil_hcompute_grad_y_stencil_24_write(grad_y_stencil_hcompute_grad_y_stencil_24_res, grad_y_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
}

// hcompute_lxy_stencil_read
//	grad_y_stencil_hcompute_lxy_stencil_2
inline hw_uint<16> grad_y_stencil_hcompute_lxy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_hcompute_lxy_stencil_2

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_hcompute_lxy_stencil_2_res = grad_y_stencil_hcompute_lxy_stencil_2_select(grad_y_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_hcompute_lxy_stencil_2_res);
	return result;
}

// hcompute_lyy_stencil_read
//	grad_y_stencil_hcompute_lyy_stencil_4
inline hw_uint<16> grad_y_stencil_hcompute_lyy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_hcompute_lyy_stencil_4

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_hcompute_lyy_stencil_4_res = grad_y_stencil_hcompute_lyy_stencil_4_select(grad_y_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_hcompute_lyy_stencil_4_res);
	return result;
}

#include "hw_classes.h"

struct lgxx_stencil_hcompute_lgxx_stencil_1_41_to_lgxx_stencil_hcompute_cim_stencil_71_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgxx_stencil_hcompute_lgxx_stencil_1_41_to_lgxx_stencil_hcompute_cim_stencil_71_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgxx_stencil_hcompute_lgxx_stencil_1_41_to_lgxx_stencil_hcompute_cim_stencil_71_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct lgxx_stencil_hcompute_lgxx_stencil_5_to_lgxx_stencil_hcompute_lgxx_stencil_1_42_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgxx_stencil_hcompute_lgxx_stencil_5_to_lgxx_stencil_hcompute_lgxx_stencil_1_42_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgxx_stencil_hcompute_lgxx_stencil_5_to_lgxx_stencil_hcompute_lgxx_stencil_1_42_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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
  // # of banks: 2
  lgxx_stencil_hcompute_lgxx_stencil_1_41_to_lgxx_stencil_hcompute_cim_stencil_71_cache lgxx_stencil_hcompute_lgxx_stencil_1_41_to_lgxx_stencil_hcompute_cim_stencil_71;
  lgxx_stencil_hcompute_lgxx_stencil_5_to_lgxx_stencil_hcompute_lgxx_stencil_1_42_cache lgxx_stencil_hcompute_lgxx_stencil_5_to_lgxx_stencil_hcompute_lgxx_stencil_1_42;
};



inline void lgxx_stencil_hcompute_lgxx_stencil_1_41_write(hw_uint<16>& lgxx_stencil_hcompute_lgxx_stencil_1_41, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_hcompute_lgxx_stencil_1_41_to_lgxx_stencil_hcompute_cim_stencil_71.write(lgxx_stencil_hcompute_lgxx_stencil_1_41, (lgxx_s1_x - -1) * 1 + (lgxx_s1_y - -1) * 61);
}

inline void lgxx_stencil_hcompute_lgxx_stencil_5_write(hw_uint<16>& lgxx_stencil_hcompute_lgxx_stencil_5, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_hcompute_lgxx_stencil_5_to_lgxx_stencil_hcompute_lgxx_stencil_1_42.write(lgxx_stencil_hcompute_lgxx_stencil_5, (lgxx_s0_x - -1) * 1 + (lgxx_s0_y - -1) * 61);
}

inline hw_uint<16> lgxx_stencil_hcompute_cim_stencil_71_select(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_stencil_hcompute_cim_stencil_71 read pattern: { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxx_stencil[cim_s0_x, cim_s0_y] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
  auto value_lgxx_stencil_hcompute_lgxx_stencil_1_41 = lgxx_stencil.lgxx_stencil_hcompute_lgxx_stencil_1_41_to_lgxx_stencil_hcompute_cim_stencil_71.read(/*ram type address*/ (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  return value_lgxx_stencil_hcompute_lgxx_stencil_1_41;
  return 0;
}

inline hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_42_select(lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_stencil_hcompute_lgxx_stencil_1_42 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lgxx_stencil[lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lgxx_stencil_hcompute_lgxx_stencil_5 = lgxx_stencil.lgxx_stencil_hcompute_lgxx_stencil_5_to_lgxx_stencil_hcompute_lgxx_stencil_1_42.read(/*ram type address*/ (lgxx_s1_x - -1) * 1 + (lgxx_s1_y - -1) * 61);
  return value_lgxx_stencil_hcompute_lgxx_stencil_5;
  return 0;
}

// # of bundles = 4
// hcompute_cim_stencil_read
//	lgxx_stencil_hcompute_cim_stencil_71
inline hw_uint<16> lgxx_stencil_hcompute_cim_stencil_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_hcompute_cim_stencil_71

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_hcompute_cim_stencil_71_res = lgxx_stencil_hcompute_cim_stencil_71_select(lgxx_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_hcompute_cim_stencil_71_res);
	return result;
}

// hcompute_lgxx_stencil_1_read
//	lgxx_stencil_hcompute_lgxx_stencil_1_42
inline hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_hcompute_lgxx_stencil_1_42

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_42_res = lgxx_stencil_hcompute_lgxx_stencil_1_42_select(lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_hcompute_lgxx_stencil_1_42_res);
	return result;
}

// hcompute_lgxx_stencil_1_write
//	lgxx_stencil_hcompute_lgxx_stencil_1_41
inline void lgxx_stencil_hcompute_lgxx_stencil_1_write_bundle_write(hw_uint<16>& hcompute_lgxx_stencil_1_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_41_res = hcompute_lgxx_stencil_1_write.extract<0, 15>();
	lgxx_stencil_hcompute_lgxx_stencil_1_41_write(lgxx_stencil_hcompute_lgxx_stencil_1_41_res, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
}

// hcompute_lgxx_stencil_write
//	lgxx_stencil_hcompute_lgxx_stencil_5
inline void lgxx_stencil_hcompute_lgxx_stencil_write_bundle_write(hw_uint<16>& hcompute_lgxx_stencil_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_5_res = hcompute_lgxx_stencil_write.extract<0, 15>();
	lgxx_stencil_hcompute_lgxx_stencil_5_write(lgxx_stencil_hcompute_lgxx_stencil_5_res, lgxx_stencil, root, lgxx_s0_y, lgxx_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lgxy_stencil_hcompute_lgxy_stencil_1_12_to_lgxy_stencil_hcompute_cim_stencil_72_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgxy_stencil_hcompute_lgxy_stencil_1_12_to_lgxy_stencil_hcompute_cim_stencil_72_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgxy_stencil_hcompute_lgxy_stencil_1_12_to_lgxy_stencil_hcompute_cim_stencil_72_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct lgxy_stencil_hcompute_lgxy_stencil_23_to_lgxy_stencil_hcompute_lgxy_stencil_1_13_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgxy_stencil_hcompute_lgxy_stencil_23_to_lgxy_stencil_hcompute_lgxy_stencil_1_13_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgxy_stencil_hcompute_lgxy_stencil_23_to_lgxy_stencil_hcompute_lgxy_stencil_1_13_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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
  // # of banks: 2
  lgxy_stencil_hcompute_lgxy_stencil_1_12_to_lgxy_stencil_hcompute_cim_stencil_72_cache lgxy_stencil_hcompute_lgxy_stencil_1_12_to_lgxy_stencil_hcompute_cim_stencil_72;
  lgxy_stencil_hcompute_lgxy_stencil_23_to_lgxy_stencil_hcompute_lgxy_stencil_1_13_cache lgxy_stencil_hcompute_lgxy_stencil_23_to_lgxy_stencil_hcompute_lgxy_stencil_1_13;
};



inline void lgxy_stencil_hcompute_lgxy_stencil_1_12_write(hw_uint<16>& lgxy_stencil_hcompute_lgxy_stencil_1_12, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_hcompute_lgxy_stencil_1_12_to_lgxy_stencil_hcompute_cim_stencil_72.write(lgxy_stencil_hcompute_lgxy_stencil_1_12, (lgxy_s1_x - -1) * 1 + (lgxy_s1_y - -1) * 61);
}

inline void lgxy_stencil_hcompute_lgxy_stencil_23_write(hw_uint<16>& lgxy_stencil_hcompute_lgxy_stencil_23, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_hcompute_lgxy_stencil_23_to_lgxy_stencil_hcompute_lgxy_stencil_1_13.write(lgxy_stencil_hcompute_lgxy_stencil_23, (lgxy_s0_x - -1) * 1 + (lgxy_s0_y - -1) * 61);
}

inline hw_uint<16> lgxy_stencil_hcompute_cim_stencil_72_select(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_stencil_hcompute_cim_stencil_72 read pattern: { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxy_stencil[cim_s0_x, cim_s0_y] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
  auto value_lgxy_stencil_hcompute_lgxy_stencil_1_12 = lgxy_stencil.lgxy_stencil_hcompute_lgxy_stencil_1_12_to_lgxy_stencil_hcompute_cim_stencil_72.read(/*ram type address*/ (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  return value_lgxy_stencil_hcompute_lgxy_stencil_1_12;
  return 0;
}

inline hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_13_select(lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_stencil_hcompute_lgxy_stencil_1_13 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lgxy_stencil[lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lgxy_stencil_hcompute_lgxy_stencil_23 = lgxy_stencil.lgxy_stencil_hcompute_lgxy_stencil_23_to_lgxy_stencil_hcompute_lgxy_stencil_1_13.read(/*ram type address*/ (lgxy_s1_x - -1) * 1 + (lgxy_s1_y - -1) * 61);
  return value_lgxy_stencil_hcompute_lgxy_stencil_23;
  return 0;
}

// # of bundles = 4
// hcompute_cim_stencil_read
//	lgxy_stencil_hcompute_cim_stencil_72
inline hw_uint<16> lgxy_stencil_hcompute_cim_stencil_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_hcompute_cim_stencil_72

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_hcompute_cim_stencil_72_res = lgxy_stencil_hcompute_cim_stencil_72_select(lgxy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_hcompute_cim_stencil_72_res);
	return result;
}

// hcompute_lgxy_stencil_1_read
//	lgxy_stencil_hcompute_lgxy_stencil_1_13
inline hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_hcompute_lgxy_stencil_1_13

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_13_res = lgxy_stencil_hcompute_lgxy_stencil_1_13_select(lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_hcompute_lgxy_stencil_1_13_res);
	return result;
}

// hcompute_lgxy_stencil_1_write
//	lgxy_stencil_hcompute_lgxy_stencil_1_12
inline void lgxy_stencil_hcompute_lgxy_stencil_1_write_bundle_write(hw_uint<16>& hcompute_lgxy_stencil_1_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_12_res = hcompute_lgxy_stencil_1_write.extract<0, 15>();
	lgxy_stencil_hcompute_lgxy_stencil_1_12_write(lgxy_stencil_hcompute_lgxy_stencil_1_12_res, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
}

// hcompute_lgxy_stencil_write
//	lgxy_stencil_hcompute_lgxy_stencil_23
inline void lgxy_stencil_hcompute_lgxy_stencil_write_bundle_write(hw_uint<16>& hcompute_lgxy_stencil_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_23_res = hcompute_lgxy_stencil_write.extract<0, 15>();
	lgxy_stencil_hcompute_lgxy_stencil_23_write(lgxy_stencil_hcompute_lgxy_stencil_23_res, lgxy_stencil, root, lgxy_s0_y, lgxy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lgyy_stencil_hcompute_lgyy_stencil_1_59_to_lgyy_stencil_hcompute_cim_stencil_73_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgyy_stencil_hcompute_lgyy_stencil_1_59_to_lgyy_stencil_hcompute_cim_stencil_73_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgyy_stencil_hcompute_lgyy_stencil_1_59_to_lgyy_stencil_hcompute_cim_stencil_73_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct lgyy_stencil_hcompute_lgyy_stencil_74_to_lgyy_stencil_hcompute_lgyy_stencil_1_60_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3721];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lgyy_stencil_hcompute_lgyy_stencil_74_to_lgyy_stencil_hcompute_lgyy_stencil_1_60_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3721);
  }
  ~lgyy_stencil_hcompute_lgyy_stencil_74_to_lgyy_stencil_hcompute_lgyy_stencil_1_60_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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
  // # of banks: 2
  lgyy_stencil_hcompute_lgyy_stencil_1_59_to_lgyy_stencil_hcompute_cim_stencil_73_cache lgyy_stencil_hcompute_lgyy_stencil_1_59_to_lgyy_stencil_hcompute_cim_stencil_73;
  lgyy_stencil_hcompute_lgyy_stencil_74_to_lgyy_stencil_hcompute_lgyy_stencil_1_60_cache lgyy_stencil_hcompute_lgyy_stencil_74_to_lgyy_stencil_hcompute_lgyy_stencil_1_60;
};



inline void lgyy_stencil_hcompute_lgyy_stencil_1_59_write(hw_uint<16>& lgyy_stencil_hcompute_lgyy_stencil_1_59, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_hcompute_lgyy_stencil_1_59_to_lgyy_stencil_hcompute_cim_stencil_73.write(lgyy_stencil_hcompute_lgyy_stencil_1_59, (lgyy_s1_x - -1) * 1 + (lgyy_s1_y - -1) * 61);
}

inline void lgyy_stencil_hcompute_lgyy_stencil_74_write(hw_uint<16>& lgyy_stencil_hcompute_lgyy_stencil_74, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_hcompute_lgyy_stencil_74_to_lgyy_stencil_hcompute_lgyy_stencil_1_60.write(lgyy_stencil_hcompute_lgyy_stencil_74, (lgyy_s0_x - -1) * 1 + (lgyy_s0_y - -1) * 61);
}

inline hw_uint<16> lgyy_stencil_hcompute_cim_stencil_73_select(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_stencil_hcompute_cim_stencil_73 read pattern: { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgyy_stencil[cim_s0_x, cim_s0_y] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
  auto value_lgyy_stencil_hcompute_lgyy_stencil_1_59 = lgyy_stencil.lgyy_stencil_hcompute_lgyy_stencil_1_59_to_lgyy_stencil_hcompute_cim_stencil_73.read(/*ram type address*/ (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  return value_lgyy_stencil_hcompute_lgyy_stencil_1_59;
  return 0;
}

inline hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_60_select(lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_stencil_hcompute_lgyy_stencil_1_60 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lgyy_stencil[lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lgyy_stencil_hcompute_lgyy_stencil_74 = lgyy_stencil.lgyy_stencil_hcompute_lgyy_stencil_74_to_lgyy_stencil_hcompute_lgyy_stencil_1_60.read(/*ram type address*/ (lgyy_s1_x - -1) * 1 + (lgyy_s1_y - -1) * 61);
  return value_lgyy_stencil_hcompute_lgyy_stencil_74;
  return 0;
}

// # of bundles = 4
// hcompute_cim_stencil_read
//	lgyy_stencil_hcompute_cim_stencil_73
inline hw_uint<16> lgyy_stencil_hcompute_cim_stencil_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_hcompute_cim_stencil_73

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_hcompute_cim_stencil_73_res = lgyy_stencil_hcompute_cim_stencil_73_select(lgyy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_hcompute_cim_stencil_73_res);
	return result;
}

// hcompute_lgyy_stencil_1_read
//	lgyy_stencil_hcompute_lgyy_stencil_1_60
inline hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_hcompute_lgyy_stencil_1_60

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_60_res = lgyy_stencil_hcompute_lgyy_stencil_1_60_select(lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_hcompute_lgyy_stencil_1_60_res);
	return result;
}

// hcompute_lgyy_stencil_1_write
//	lgyy_stencil_hcompute_lgyy_stencil_1_59
inline void lgyy_stencil_hcompute_lgyy_stencil_1_write_bundle_write(hw_uint<16>& hcompute_lgyy_stencil_1_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_59_res = hcompute_lgyy_stencil_1_write.extract<0, 15>();
	lgyy_stencil_hcompute_lgyy_stencil_1_59_write(lgyy_stencil_hcompute_lgyy_stencil_1_59_res, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
}

// hcompute_lgyy_stencil_write
//	lgyy_stencil_hcompute_lgyy_stencil_74
inline void lgyy_stencil_hcompute_lgyy_stencil_write_bundle_write(hw_uint<16>& hcompute_lgyy_stencil_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_74_res = hcompute_lgyy_stencil_write.extract<0, 15>();
	lgyy_stencil_hcompute_lgyy_stencil_74_write(lgyy_stencil_hcompute_lgyy_stencil_74_res, lgyy_stencil, root, lgyy_s0_y, lgyy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_43_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_43_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_43_cache() {
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

struct lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_44_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_44_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_44_cache() {
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

struct lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_45_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_45_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_45_cache() {
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

struct lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_46_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_46_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_46_cache() {
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

struct lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_47_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_47_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_47_cache() {
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

struct lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_48_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_48_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_48_cache() {
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

struct lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_49_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_49_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_49_cache() {
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

struct lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_50_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_50_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_50_cache() {
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

struct lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_51_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_51_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_51_cache() {
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

struct lxx_stencil_cache {
  // # of banks: 9
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_43_cache lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_43;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_44_cache lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_44;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_45_cache lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_45;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_46_cache lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_46;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_47_cache lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_47;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_48_cache lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_48;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_49_cache lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_49;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_50_cache lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_50;
  lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_51_cache lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_51;
};



inline void lxx_stencil_hcompute_lxx_stencil_8_write(hw_uint<16>& lxx_stencil_hcompute_lxx_stencil_8, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_43.write(lxx_stencil_hcompute_lxx_stencil_8, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_44.write(lxx_stencil_hcompute_lxx_stencil_8, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_45.write(lxx_stencil_hcompute_lxx_stencil_8, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_46.write(lxx_stencil_hcompute_lxx_stencil_8, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_47.write(lxx_stencil_hcompute_lxx_stencil_8, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_48.write(lxx_stencil_hcompute_lxx_stencil_8, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_49.write(lxx_stencil_hcompute_lxx_stencil_8, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_50.write(lxx_stencil_hcompute_lxx_stencil_8, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_51.write(lxx_stencil_hcompute_lxx_stencil_8, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_43_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_43 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_x, -1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_8 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_43.read(/*ram type address*/ (-1 + lgxx_s1_x - -2) * 1 + (-1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_8;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_44_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_44 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_x, -1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_8 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_44.read(/*ram type address*/ (lgxx_s1_x - -2) * 1 + (-1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_8;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_45_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_45 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_x, -1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_8 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_45.read(/*ram type address*/ (1 + lgxx_s1_x - -2) * 1 + (-1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_8;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_46_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_46 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_8 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_46.read(/*ram type address*/ (-1 + lgxx_s1_x - -2) * 1 + (lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_8;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_47_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_47 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_8 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_47.read(/*ram type address*/ (lgxx_s1_x - -2) * 1 + (lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_8;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_48_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_48 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_8 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_48.read(/*ram type address*/ (1 + lgxx_s1_x - -2) * 1 + (lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_8;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_49_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_49 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_x, 1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_8 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_49.read(/*ram type address*/ (-1 + lgxx_s1_x - -2) * 1 + (1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_8;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_50_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_50 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_x, 1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_8 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_50.read(/*ram type address*/ (1 + lgxx_s1_x - -2) * 1 + (1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_8;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_51_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_51 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_x, 1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_8 = lxx_stencil.lxx_stencil_hcompute_lxx_stencil_8_to_lxx_stencil_hcompute_lgxx_stencil_1_51.read(/*ram type address*/ (lgxx_s1_x - -2) * 1 + (1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_8;
  return 0;
}

// # of bundles = 2
// hcompute_lgxx_stencil_1_read
//	lxx_stencil_hcompute_lgxx_stencil_1_43
//	lxx_stencil_hcompute_lgxx_stencil_1_44
//	lxx_stencil_hcompute_lgxx_stencil_1_45
//	lxx_stencil_hcompute_lgxx_stencil_1_46
//	lxx_stencil_hcompute_lgxx_stencil_1_47
//	lxx_stencil_hcompute_lgxx_stencil_1_48
//	lxx_stencil_hcompute_lgxx_stencil_1_49
//	lxx_stencil_hcompute_lgxx_stencil_1_50
//	lxx_stencil_hcompute_lgxx_stencil_1_51
inline hw_uint<144> lxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxx_stencil_hcompute_lgxx_stencil_1_43
    // lxx_stencil_hcompute_lgxx_stencil_1_44
    // lxx_stencil_hcompute_lgxx_stencil_1_45
    // lxx_stencil_hcompute_lgxx_stencil_1_46
    // lxx_stencil_hcompute_lgxx_stencil_1_47
    // lxx_stencil_hcompute_lgxx_stencil_1_48
    // lxx_stencil_hcompute_lgxx_stencil_1_49
    // lxx_stencil_hcompute_lgxx_stencil_1_50
    // lxx_stencil_hcompute_lgxx_stencil_1_51

	hw_uint<144> result;
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_43_res = lxx_stencil_hcompute_lgxx_stencil_1_43_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_43_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_44_res = lxx_stencil_hcompute_lgxx_stencil_1_44_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<16, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_44_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_45_res = lxx_stencil_hcompute_lgxx_stencil_1_45_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<32, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_45_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_46_res = lxx_stencil_hcompute_lgxx_stencil_1_46_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<48, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_46_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_47_res = lxx_stencil_hcompute_lgxx_stencil_1_47_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<64, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_47_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_48_res = lxx_stencil_hcompute_lgxx_stencil_1_48_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<80, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_48_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_49_res = lxx_stencil_hcompute_lgxx_stencil_1_49_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<96, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_49_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_50_res = lxx_stencil_hcompute_lgxx_stencil_1_50_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<112, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_50_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_51_res = lxx_stencil_hcompute_lgxx_stencil_1_51_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<128, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_51_res);
	return result;
}

// hcompute_lxx_stencil_write
//	lxx_stencil_hcompute_lxx_stencil_8
inline void lxx_stencil_hcompute_lxx_stencil_write_bundle_write(hw_uint<16>& hcompute_lxx_stencil_write, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
	hw_uint<16> lxx_stencil_hcompute_lxx_stencil_8_res = hcompute_lxx_stencil_write.extract<0, 15>();
	lxx_stencil_hcompute_lxx_stencil_8_write(lxx_stencil_hcompute_lxx_stencil_8_res, lxx_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_14_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_14_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_14_cache() {
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

struct lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_15_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_15_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_15_cache() {
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

struct lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_16_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_16_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_16_cache() {
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

struct lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_17_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_17_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_17_cache() {
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

struct lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_18_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_18_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_18_cache() {
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

struct lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_19_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_19_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_19_cache() {
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

struct lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_20_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_20_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_20_cache() {
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

struct lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_21_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_21_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_21_cache() {
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

struct lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_22_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_22_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_22_cache() {
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

struct lxy_stencil_cache {
  // # of banks: 9
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_14_cache lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_14;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_15_cache lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_15;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_16_cache lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_16;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_17_cache lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_17;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_18_cache lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_18;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_19_cache lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_19;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_20_cache lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_20;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_21_cache lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_21;
  lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_22_cache lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_22;
};



inline void lxy_stencil_hcompute_lxy_stencil_0_write(hw_uint<16>& lxy_stencil_hcompute_lxy_stencil_0, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_14.write(lxy_stencil_hcompute_lxy_stencil_0, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_15.write(lxy_stencil_hcompute_lxy_stencil_0, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_16.write(lxy_stencil_hcompute_lxy_stencil_0, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_17.write(lxy_stencil_hcompute_lxy_stencil_0, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_18.write(lxy_stencil_hcompute_lxy_stencil_0, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_19.write(lxy_stencil_hcompute_lxy_stencil_0, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_20.write(lxy_stencil_hcompute_lxy_stencil_0, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_21.write(lxy_stencil_hcompute_lxy_stencil_0, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_22.write(lxy_stencil_hcompute_lxy_stencil_0, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_14_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_14 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_x, -1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_0 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_14.read(/*ram type address*/ (-1 + lgxy_s1_x - -2) * 1 + (-1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_0;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_15_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_15 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_x, -1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_0 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_15.read(/*ram type address*/ (lgxy_s1_x - -2) * 1 + (-1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_0;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_16_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_16 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_x, -1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_0 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_16.read(/*ram type address*/ (1 + lgxy_s1_x - -2) * 1 + (-1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_0;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_17_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_17 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_0 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_17.read(/*ram type address*/ (-1 + lgxy_s1_x - -2) * 1 + (lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_0;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_18_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_18 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_0 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_18.read(/*ram type address*/ (lgxy_s1_x - -2) * 1 + (lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_0;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_19_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_19 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_0 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_19.read(/*ram type address*/ (1 + lgxy_s1_x - -2) * 1 + (lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_0;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_20_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_20 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_x, 1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_0 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_20.read(/*ram type address*/ (-1 + lgxy_s1_x - -2) * 1 + (1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_0;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_21_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_21 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_x, 1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_0 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_21.read(/*ram type address*/ (1 + lgxy_s1_x - -2) * 1 + (1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_0;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_22_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_22 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_x, 1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_0 = lxy_stencil.lxy_stencil_hcompute_lxy_stencil_0_to_lxy_stencil_hcompute_lgxy_stencil_1_22.read(/*ram type address*/ (lgxy_s1_x - -2) * 1 + (1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_0;
  return 0;
}

// # of bundles = 2
// hcompute_lgxy_stencil_1_read
//	lxy_stencil_hcompute_lgxy_stencil_1_14
//	lxy_stencil_hcompute_lgxy_stencil_1_15
//	lxy_stencil_hcompute_lgxy_stencil_1_16
//	lxy_stencil_hcompute_lgxy_stencil_1_17
//	lxy_stencil_hcompute_lgxy_stencil_1_18
//	lxy_stencil_hcompute_lgxy_stencil_1_19
//	lxy_stencil_hcompute_lgxy_stencil_1_20
//	lxy_stencil_hcompute_lgxy_stencil_1_21
//	lxy_stencil_hcompute_lgxy_stencil_1_22
inline hw_uint<144> lxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxy_stencil_hcompute_lgxy_stencil_1_14
    // lxy_stencil_hcompute_lgxy_stencil_1_15
    // lxy_stencil_hcompute_lgxy_stencil_1_16
    // lxy_stencil_hcompute_lgxy_stencil_1_17
    // lxy_stencil_hcompute_lgxy_stencil_1_18
    // lxy_stencil_hcompute_lgxy_stencil_1_19
    // lxy_stencil_hcompute_lgxy_stencil_1_20
    // lxy_stencil_hcompute_lgxy_stencil_1_21
    // lxy_stencil_hcompute_lgxy_stencil_1_22

	hw_uint<144> result;
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_14_res = lxy_stencil_hcompute_lgxy_stencil_1_14_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_14_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_15_res = lxy_stencil_hcompute_lgxy_stencil_1_15_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<16, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_15_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_16_res = lxy_stencil_hcompute_lgxy_stencil_1_16_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<32, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_16_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_17_res = lxy_stencil_hcompute_lgxy_stencil_1_17_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<48, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_17_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_18_res = lxy_stencil_hcompute_lgxy_stencil_1_18_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<64, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_18_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_19_res = lxy_stencil_hcompute_lgxy_stencil_1_19_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<80, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_19_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_20_res = lxy_stencil_hcompute_lgxy_stencil_1_20_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<96, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_20_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_21_res = lxy_stencil_hcompute_lgxy_stencil_1_21_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<112, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_21_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_22_res = lxy_stencil_hcompute_lgxy_stencil_1_22_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<128, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_22_res);
	return result;
}

// hcompute_lxy_stencil_write
//	lxy_stencil_hcompute_lxy_stencil_0
inline void lxy_stencil_hcompute_lxy_stencil_write_bundle_write(hw_uint<16>& hcompute_lxy_stencil_write, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
	hw_uint<16> lxy_stencil_hcompute_lxy_stencil_0_res = hcompute_lxy_stencil_write.extract<0, 15>();
	lxy_stencil_hcompute_lxy_stencil_0_write(lxy_stencil_hcompute_lxy_stencil_0_res, lxy_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_61_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_61_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_61_cache() {
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

struct lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_62_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_62_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_62_cache() {
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

struct lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_63_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_63_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_63_cache() {
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

struct lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_64_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_64_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_64_cache() {
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

struct lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_65_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_65_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_65_cache() {
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

struct lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_66_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_66_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_66_cache() {
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

struct lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_67_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_67_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_67_cache() {
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

struct lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_68_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_68_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_68_cache() {
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

struct lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_69_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_69_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_69_cache() {
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

struct lyy_stencil_cache {
  // # of banks: 9
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_61_cache lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_61;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_62_cache lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_62;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_63_cache lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_63;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_64_cache lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_64;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_65_cache lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_65;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_66_cache lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_66;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_67_cache lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_67;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_68_cache lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_68;
  lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_69_cache lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_69;
};



inline void lyy_stencil_hcompute_lyy_stencil_3_write(hw_uint<16>& lyy_stencil_hcompute_lyy_stencil_3, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_61.write(lyy_stencil_hcompute_lyy_stencil_3, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_62.write(lyy_stencil_hcompute_lyy_stencil_3, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_63.write(lyy_stencil_hcompute_lyy_stencil_3, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_64.write(lyy_stencil_hcompute_lyy_stencil_3, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_65.write(lyy_stencil_hcompute_lyy_stencil_3, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_66.write(lyy_stencil_hcompute_lyy_stencil_3, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_67.write(lyy_stencil_hcompute_lyy_stencil_3, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_68.write(lyy_stencil_hcompute_lyy_stencil_3, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_69.write(lyy_stencil_hcompute_lyy_stencil_3, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_61_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_61 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_x, -1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_3 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_61.read(/*ram type address*/ (-1 + lgyy_s1_x - -2) * 1 + (-1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_3;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_62_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_62 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_x, -1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_3 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_62.read(/*ram type address*/ (lgyy_s1_x - -2) * 1 + (-1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_3;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_63_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_63 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_x, -1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_3 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_63.read(/*ram type address*/ (1 + lgyy_s1_x - -2) * 1 + (-1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_3;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_64_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_64 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_3 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_64.read(/*ram type address*/ (-1 + lgyy_s1_x - -2) * 1 + (lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_3;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_65_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_65 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_3 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_65.read(/*ram type address*/ (lgyy_s1_x - -2) * 1 + (lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_3;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_66_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_66 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_3 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_66.read(/*ram type address*/ (1 + lgyy_s1_x - -2) * 1 + (lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_3;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_67_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_67 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_x, 1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_3 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_67.read(/*ram type address*/ (-1 + lgyy_s1_x - -2) * 1 + (1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_3;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_68_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_68 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_x, 1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_3 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_68.read(/*ram type address*/ (1 + lgyy_s1_x - -2) * 1 + (1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_3;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_69_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_69 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_x, 1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_3 = lyy_stencil.lyy_stencil_hcompute_lyy_stencil_3_to_lyy_stencil_hcompute_lgyy_stencil_1_69.read(/*ram type address*/ (lgyy_s1_x - -2) * 1 + (1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_3;
  return 0;
}

// # of bundles = 2
// hcompute_lgyy_stencil_1_read
//	lyy_stencil_hcompute_lgyy_stencil_1_61
//	lyy_stencil_hcompute_lgyy_stencil_1_62
//	lyy_stencil_hcompute_lgyy_stencil_1_63
//	lyy_stencil_hcompute_lgyy_stencil_1_64
//	lyy_stencil_hcompute_lgyy_stencil_1_65
//	lyy_stencil_hcompute_lgyy_stencil_1_66
//	lyy_stencil_hcompute_lgyy_stencil_1_67
//	lyy_stencil_hcompute_lgyy_stencil_1_68
//	lyy_stencil_hcompute_lgyy_stencil_1_69
inline hw_uint<144> lyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lyy_stencil_hcompute_lgyy_stencil_1_61
    // lyy_stencil_hcompute_lgyy_stencil_1_62
    // lyy_stencil_hcompute_lgyy_stencil_1_63
    // lyy_stencil_hcompute_lgyy_stencil_1_64
    // lyy_stencil_hcompute_lgyy_stencil_1_65
    // lyy_stencil_hcompute_lgyy_stencil_1_66
    // lyy_stencil_hcompute_lgyy_stencil_1_67
    // lyy_stencil_hcompute_lgyy_stencil_1_68
    // lyy_stencil_hcompute_lgyy_stencil_1_69

	hw_uint<144> result;
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_61_res = lyy_stencil_hcompute_lgyy_stencil_1_61_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_61_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_62_res = lyy_stencil_hcompute_lgyy_stencil_1_62_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<16, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_62_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_63_res = lyy_stencil_hcompute_lgyy_stencil_1_63_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<32, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_63_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_64_res = lyy_stencil_hcompute_lgyy_stencil_1_64_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<48, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_64_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_65_res = lyy_stencil_hcompute_lgyy_stencil_1_65_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<64, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_65_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_66_res = lyy_stencil_hcompute_lgyy_stencil_1_66_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<80, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_66_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_67_res = lyy_stencil_hcompute_lgyy_stencil_1_67_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<96, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_67_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_68_res = lyy_stencil_hcompute_lgyy_stencil_1_68_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<112, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_68_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_69_res = lyy_stencil_hcompute_lgyy_stencil_1_69_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<128, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_69_res);
	return result;
}

// hcompute_lyy_stencil_write
//	lyy_stencil_hcompute_lyy_stencil_3
inline void lyy_stencil_hcompute_lyy_stencil_write_bundle_write(hw_uint<16>& hcompute_lyy_stencil_write, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
	hw_uint<16> lyy_stencil_hcompute_lyy_stencil_3_res = hcompute_lyy_stencil_write.extract<0, 15>();
	lyy_stencil_hcompute_lyy_stencil_3_write(lyy_stencil_hcompute_lyy_stencil_3_res, lyy_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_53_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_53_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_53_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_54_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_54_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_54_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_55_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_55_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_55_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_56_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_56_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_56_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_57_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_57_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_57_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_58_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_58_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_58_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_25_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_25_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_25_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_26_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_26_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_26_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_27_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_27_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_27_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_28_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_28_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_28_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_29_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_29_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_29_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_30_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4489];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_30_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4489);
  }
  ~padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_30_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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
  // # of banks: 12
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_53_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_53;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_54_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_54;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_55_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_55;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_56_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_56;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_57_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_57;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_58_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_58;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_25_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_25;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_26_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_26;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_27_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_27;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_28_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_28;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_29_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_29;
  padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_30_cache padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_30;
};



inline void padded16_stencil_hcompute_padded16_stencil_10_write(hw_uint<16>& padded16_stencil_hcompute_padded16_stencil_10, padded16_stencil_cache& padded16_stencil, int root, int padded16_s0_y, int padded16_s0_x, int dynamic_address) {
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_53.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_54.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_55.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_56.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_57.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_58.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_25.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_26.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_27.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_28.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_29.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
  padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_30.write(padded16_stencil_hcompute_padded16_stencil_10, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_53_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_53 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[1 + grad_x_s0_x, -1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_53.read(/*ram type address*/ (1 + grad_x_s0_x - -3) * 1 + (-1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_54_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_54 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[1 + grad_x_s0_x, 1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_54.read(/*ram type address*/ (1 + grad_x_s0_x - -3) * 1 + (1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_55_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_55 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[1 + grad_x_s0_x, grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_55.read(/*ram type address*/ (1 + grad_x_s0_x - -3) * 1 + (grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_56_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_56 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[-1 + grad_x_s0_x, -1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_56.read(/*ram type address*/ (-1 + grad_x_s0_x - -3) * 1 + (-1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_57_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_57 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[-1 + grad_x_s0_x, grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_57.read(/*ram type address*/ (-1 + grad_x_s0_x - -3) * 1 + (grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_58_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_58 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[-1 + grad_x_s0_x, 1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_x_stencil_58.read(/*ram type address*/ (-1 + grad_x_s0_x - -3) * 1 + (1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_25_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_25 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[-1 + grad_y_s0_x, -1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_25.read(/*ram type address*/ (-1 + grad_y_s0_x - -3) * 1 + (-1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_26_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_26 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[grad_y_s0_x, -1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_26.read(/*ram type address*/ (grad_y_s0_x - -3) * 1 + (-1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_27_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_27 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[1 + grad_y_s0_x, -1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_27.read(/*ram type address*/ (1 + grad_y_s0_x - -3) * 1 + (-1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_28_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_28 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[-1 + grad_y_s0_x, 1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_28.read(/*ram type address*/ (-1 + grad_y_s0_x - -3) * 1 + (1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_29_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_29 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[1 + grad_y_s0_x, 1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_29.read(/*ram type address*/ (1 + grad_y_s0_x - -3) * 1 + (1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_30_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_30 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[grad_y_s0_x, 1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_10 = padded16_stencil.padded16_stencil_hcompute_padded16_stencil_10_to_padded16_stencil_hcompute_grad_y_stencil_30.read(/*ram type address*/ (grad_y_s0_x - -3) * 1 + (1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_10;
  return 0;
}

// # of bundles = 3
// hcompute_grad_x_stencil_read
//	padded16_stencil_hcompute_grad_x_stencil_53
//	padded16_stencil_hcompute_grad_x_stencil_54
//	padded16_stencil_hcompute_grad_x_stencil_55
//	padded16_stencil_hcompute_grad_x_stencil_56
//	padded16_stencil_hcompute_grad_x_stencil_57
//	padded16_stencil_hcompute_grad_x_stencil_58
inline hw_uint<96> padded16_stencil_hcompute_grad_x_stencil_read_bundle_read(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_stencil_hcompute_grad_x_stencil_53
    // padded16_stencil_hcompute_grad_x_stencil_54
    // padded16_stencil_hcompute_grad_x_stencil_55
    // padded16_stencil_hcompute_grad_x_stencil_56
    // padded16_stencil_hcompute_grad_x_stencil_57
    // padded16_stencil_hcompute_grad_x_stencil_58

	hw_uint<96> result;
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_53_res = padded16_stencil_hcompute_grad_x_stencil_53_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_stencil_hcompute_grad_x_stencil_53_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_54_res = padded16_stencil_hcompute_grad_x_stencil_54_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_stencil_hcompute_grad_x_stencil_54_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_55_res = padded16_stencil_hcompute_grad_x_stencil_55_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_stencil_hcompute_grad_x_stencil_55_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_56_res = padded16_stencil_hcompute_grad_x_stencil_56_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_stencil_hcompute_grad_x_stencil_56_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_57_res = padded16_stencil_hcompute_grad_x_stencil_57_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_stencil_hcompute_grad_x_stencil_57_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_58_res = padded16_stencil_hcompute_grad_x_stencil_58_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_stencil_hcompute_grad_x_stencil_58_res);
	return result;
}

// hcompute_grad_y_stencil_read
//	padded16_stencil_hcompute_grad_y_stencil_25
//	padded16_stencil_hcompute_grad_y_stencil_26
//	padded16_stencil_hcompute_grad_y_stencil_27
//	padded16_stencil_hcompute_grad_y_stencil_28
//	padded16_stencil_hcompute_grad_y_stencil_29
//	padded16_stencil_hcompute_grad_y_stencil_30
inline hw_uint<96> padded16_stencil_hcompute_grad_y_stencil_read_bundle_read(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_stencil_hcompute_grad_y_stencil_25
    // padded16_stencil_hcompute_grad_y_stencil_26
    // padded16_stencil_hcompute_grad_y_stencil_27
    // padded16_stencil_hcompute_grad_y_stencil_28
    // padded16_stencil_hcompute_grad_y_stencil_29
    // padded16_stencil_hcompute_grad_y_stencil_30

	hw_uint<96> result;
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_25_res = padded16_stencil_hcompute_grad_y_stencil_25_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_stencil_hcompute_grad_y_stencil_25_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_26_res = padded16_stencil_hcompute_grad_y_stencil_26_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_stencil_hcompute_grad_y_stencil_26_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_27_res = padded16_stencil_hcompute_grad_y_stencil_27_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_stencil_hcompute_grad_y_stencil_27_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_28_res = padded16_stencil_hcompute_grad_y_stencil_28_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_stencil_hcompute_grad_y_stencil_28_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_29_res = padded16_stencil_hcompute_grad_y_stencil_29_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_stencil_hcompute_grad_y_stencil_29_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_30_res = padded16_stencil_hcompute_grad_y_stencil_30_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_stencil_hcompute_grad_y_stencil_30_res);
	return result;
}

// hcompute_padded16_stencil_write
//	padded16_stencil_hcompute_padded16_stencil_10
inline void padded16_stencil_hcompute_padded16_stencil_write_bundle_write(hw_uint<16>& hcompute_padded16_stencil_write, padded16_stencil_cache& padded16_stencil, int root, int padded16_s0_y, int padded16_s0_x, int dynamic_address) {
	hw_uint<16> padded16_stencil_hcompute_padded16_stencil_10_res = hcompute_padded16_stencil_write.extract<0, 15>();
	padded16_stencil_hcompute_padded16_stencil_10_write(padded16_stencil_hcompute_padded16_stencil_10_res, padded16_stencil, root, padded16_s0_y, padded16_s0_x, dynamic_address);
}



// Operation logic
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

inline void hcompute_lgxx_stencil(lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s0_y, int lgxx_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxx_stencil();
	// Produce: lgxx_stencil
	lgxx_stencil_hcompute_lgxx_stencil_write_bundle_write(/* arg names */compute_result, lgxx_stencil, root, lgxx_s0_y, lgxx_s0_x, 0);

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

inline void hcompute_lgyy_stencil(lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s0_y, int lgyy_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgyy_stencil();
	// Produce: lgyy_stencil
	lgyy_stencil_hcompute_lgyy_stencil_write_bundle_write(/* arg names */compute_result, lgyy_stencil, root, lgyy_s0_y, lgyy_s0_x, 0);

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
#endif //__VIVADO_SYNTH__
  cim_stencil_cache cim_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  grad_x_stencil_cache grad_x_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  grad_y_stencil_cache grad_y_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxx_stencil_cache lgxx_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxy_stencil_cache lgxy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgyy_stencil_cache lgyy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lxx_stencil_cache lxx_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lxy_stencil_cache lxy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lyy_stencil_cache lyy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  padded16_stencil_cache padded16_stencil;
#ifdef __VIVADO_SYNTH__
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
extern "C" {

void unoptimized_harris_rdai(HWStream<hw_uint<16> >& hcompute_padded16_stencil_read_pipe0, HWStream<hw_uint<16> >&  hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = hcompute_padded16_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_harris(hcompute_padded16_stencil_read_pipe0, hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

