#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h
#include "local_laplacian_filters_compute.h"

#include "hw_classes.h"

struct color_in_pw_math_color_in_int59_778_to_color_in_cc511_743_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_778_to_color_in_cc511_743_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_778_to_color_in_cc511_743_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_940_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_940_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_940_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_941_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_941_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_941_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_942_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_942_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_942_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct color_in_cache {
  // # of banks: 4
  color_in_pw_math_color_in_int59_778_to_color_in_cc511_743_cache color_in_pw_math_color_in_int59_778_to_color_in_cc511_743;
  color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_940_cache color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_940;
  color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_941_cache color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_941;
  color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_942_cache color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_942;
};



inline void color_in_pw_math_color_in_int59_778_write(hw_uint<32> & color_in_pw_math_color_in_int59_778, color_in_cache& color_in, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
  color_in.color_in_pw_math_color_in_int59_778_to_color_in_cc511_743.write(color_in_pw_math_color_in_int59_778, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  color_in.color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_940.write(color_in_pw_math_color_in_int59_778, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  color_in.color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_941.write(color_in_pw_math_color_in_int59_778, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  color_in.color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_942.write(color_in_pw_math_color_in_int59_778, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
}

inline hw_uint<32>  color_in_cc511_743_select(color_in_cache& color_in, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_cc511_743 read pattern: { cc511[root = 0, color_out_float_to_color508, color_out_float_to_color509, color_out_float_to_color510] -> color_in[color_out_float_to_color510, color_out_float_to_color509, color_out_float_to_color508] : 0 <= color_out_float_to_color508 <= 255 and 0 <= color_out_float_to_color509 <= 255 and 0 <= color_out_float_to_color510 <= 2 }
  auto value_color_in_pw_math_color_in_int59_778 = color_in.color_in_pw_math_color_in_int59_778_to_color_in_cc511_743.read(/*ram type address*/ (color_out_float_to_color510 - 0) * 1 + (color_out_float_to_color509 - -7) * 3 + (color_out_float_to_color508 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_778;
  return 0;
}

inline hw_uint<32>  color_in_to_gray12_940_select(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_to_gray12_940 read pattern: { to_gray12[root = 0, color_in_to_gray10, color_in_to_gray11] -> color_in[0, color_in_to_gray11, color_in_to_gray10] : -7 <= color_in_to_gray10 <= 255 and -7 <= color_in_to_gray11 <= 255 }
  auto value_color_in_pw_math_color_in_int59_778 = color_in.color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_940.read(/*ram type address*/ (0 - 0) * 1 + (color_in_to_gray11 - -7) * 3 + (color_in_to_gray10 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_778;
  return 0;
}

inline hw_uint<32>  color_in_to_gray12_941_select(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_to_gray12_941 read pattern: { to_gray12[root = 0, color_in_to_gray10, color_in_to_gray11] -> color_in[1, color_in_to_gray11, color_in_to_gray10] : -7 <= color_in_to_gray10 <= 255 and -7 <= color_in_to_gray11 <= 255 }
  auto value_color_in_pw_math_color_in_int59_778 = color_in.color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_941.read(/*ram type address*/ (1 - 0) * 1 + (color_in_to_gray11 - -7) * 3 + (color_in_to_gray10 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_778;
  return 0;
}

inline hw_uint<32>  color_in_to_gray12_942_select(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_to_gray12_942 read pattern: { to_gray12[root = 0, color_in_to_gray10, color_in_to_gray11] -> color_in[2, color_in_to_gray11, color_in_to_gray10] : -7 <= color_in_to_gray10 <= 255 and -7 <= color_in_to_gray11 <= 255 }
  auto value_color_in_pw_math_color_in_int59_778 = color_in.color_in_pw_math_color_in_int59_778_to_color_in_to_gray12_942.read(/*ram type address*/ (2 - 0) * 1 + (color_in_to_gray11 - -7) * 3 + (color_in_to_gray10 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_778;
  return 0;
}

// # of bundles = 3
// cc511_read
//	color_in_cc511_743
inline hw_uint<32> color_in_cc511_read_bundle_read(color_in_cache& color_in, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
  // # of ports in bundle: 1
    // color_in_cc511_743

	hw_uint<32> result;
	hw_uint<32>  color_in_cc511_743_res = color_in_cc511_743_select(color_in, root, color_out_float_to_color508, color_out_float_to_color509, color_out_float_to_color510, dynamic_address);
	set_at<0, 32>(result, color_in_cc511_743_res);
	return result;
}

// pw_math_color_in_int59_write
//	color_in_pw_math_color_in_int59_778
inline void color_in_pw_math_color_in_int59_write_bundle_write(hw_uint<32>& pw_math_color_in_int59_write, color_in_cache& color_in, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
	hw_uint<32>  color_in_pw_math_color_in_int59_778_res = pw_math_color_in_int59_write.extract<0, 31>();
	color_in_pw_math_color_in_int59_778_write(color_in_pw_math_color_in_int59_778_res, color_in, root, pw_math_color_in_int56, pw_math_color_in_int57, pw_math_color_in_int58, dynamic_address);
}

// to_gray12_read
//	color_in_to_gray12_940
//	color_in_to_gray12_941
//	color_in_to_gray12_942
inline hw_uint<96> color_in_to_gray12_read_bundle_read(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
  // # of ports in bundle: 3
    // color_in_to_gray12_940
    // color_in_to_gray12_941
    // color_in_to_gray12_942

	hw_uint<96> result;
	hw_uint<32>  color_in_to_gray12_940_res = color_in_to_gray12_940_select(color_in, root, color_in_to_gray10, color_in_to_gray11, dynamic_address);
	set_at<0, 96>(result, color_in_to_gray12_940_res);
	hw_uint<32>  color_in_to_gray12_941_res = color_in_to_gray12_941_select(color_in, root, color_in_to_gray10, color_in_to_gray11, dynamic_address);
	set_at<32, 96>(result, color_in_to_gray12_941_res);
	hw_uint<32>  color_in_to_gray12_942_res = color_in_to_gray12_942_select(color_in, root, color_in_to_gray10, color_in_to_gray11, dynamic_address);
	set_at<64, 96>(result, color_in_to_gray12_942_res);
	return result;
}

#include "hw_classes.h"

struct color_in_int_oc_load_color_in_oc04_786_to_color_in_int_pw_math_color_in_int59_779_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_int_oc_load_color_in_oc04_786_to_color_in_int_pw_math_color_in_int59_779_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_int_oc_load_color_in_oc04_786_to_color_in_int_pw_math_color_in_int59_779_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 207507)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 207507);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct color_in_int_cache {
  // # of banks: 1
  color_in_int_oc_load_color_in_oc04_786_to_color_in_int_pw_math_color_in_int59_779_cache color_in_int_oc_load_color_in_oc04_786_to_color_in_int_pw_math_color_in_int59_779;
};



inline void color_in_int_oc_load_color_in_oc04_786_write(hw_uint<32> & color_in_int_oc_load_color_in_oc04_786, color_in_int_cache& color_in_int, int root, int oc_load_color_in_oc01, int oc_load_color_in_oc02, int oc_load_color_in_oc03, int dynamic_address) {
  color_in_int.color_in_int_oc_load_color_in_oc04_786_to_color_in_int_pw_math_color_in_int59_779.write(color_in_int_oc_load_color_in_oc04_786, (oc_load_color_in_oc03 - 0) * 1 + (oc_load_color_in_oc02 - -7) * 3 + (oc_load_color_in_oc01 - -7) * 789);
}

inline hw_uint<32>  color_in_int_pw_math_color_in_int59_779_select(color_in_int_cache& color_in_int, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_int_pw_math_color_in_int59_779 read pattern: { pw_math_color_in_int59[root = 0, pw_math_color_in_int56, pw_math_color_in_int57, pw_math_color_in_int58] -> color_in_int[pw_math_color_in_int58, pw_math_color_in_int57, pw_math_color_in_int56] : -7 <= pw_math_color_in_int56 <= 255 and -7 <= pw_math_color_in_int57 <= 255 and 0 <= pw_math_color_in_int58 <= 2 }
  auto value_color_in_int_oc_load_color_in_oc04_786 = color_in_int.color_in_int_oc_load_color_in_oc04_786_to_color_in_int_pw_math_color_in_int59_779.read(/*ram type address*/ (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  return value_color_in_int_oc_load_color_in_oc04_786;
  return 0;
}

// # of bundles = 2
// oc_load_color_in_oc04_write
//	color_in_int_oc_load_color_in_oc04_786
inline void color_in_int_oc_load_color_in_oc04_write_bundle_write(hw_uint<32>& oc_load_color_in_oc04_write, color_in_int_cache& color_in_int, int root, int oc_load_color_in_oc01, int oc_load_color_in_oc02, int oc_load_color_in_oc03, int dynamic_address) {
	hw_uint<32>  color_in_int_oc_load_color_in_oc04_786_res = oc_load_color_in_oc04_write.extract<0, 31>();
	color_in_int_oc_load_color_in_oc04_786_write(color_in_int_oc_load_color_in_oc04_786_res, color_in_int, root, oc_load_color_in_oc01, oc_load_color_in_oc02, oc_load_color_in_oc03, dynamic_address);
}

// pw_math_color_in_int59_read
//	color_in_int_pw_math_color_in_int59_779
inline hw_uint<32> color_in_int_pw_math_color_in_int59_read_bundle_read(color_in_int_cache& color_in_int, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
  // # of ports in bundle: 1
    // color_in_int_pw_math_color_in_int59_779

	hw_uint<32> result;
	hw_uint<32>  color_in_int_pw_math_color_in_int59_779_res = color_in_int_pw_math_color_in_int59_779_select(color_in_int, root, pw_math_color_in_int56, pw_math_color_in_int57, pw_math_color_in_int58, dynamic_address);
	set_at<0, 32>(result, color_in_int_pw_math_color_in_int59_779_res);
	return result;
}

#include "hw_classes.h"

struct color_out_float_cc511_741_to_color_out_float_pw_math_color_out_float512516_746_cache {
	// RAM Box: {[0, 2], [0, 255], [0, 255]}
	// Capacity: 196608
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[196608];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_out_float_cc511_741_to_color_out_float_pw_math_color_out_float512516_746_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*196608);
  }
  ~color_out_float_cc511_741_to_color_out_float_pw_math_color_out_float512516_746_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 196608)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 196608);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 196608)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 196608);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct color_out_float_cache {
  // # of banks: 1
  color_out_float_cc511_741_to_color_out_float_pw_math_color_out_float512516_746_cache color_out_float_cc511_741_to_color_out_float_pw_math_color_out_float512516_746;
};



inline void color_out_float_cc511_741_write(hw_uint<32> & color_out_float_cc511_741, color_out_float_cache& color_out_float, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
  color_out_float.color_out_float_cc511_741_to_color_out_float_pw_math_color_out_float512516_746.write(color_out_float_cc511_741, (color_out_float_to_color510 - 0) * 1 + (color_out_float_to_color509 - 0) * 3 + (color_out_float_to_color508 - 0) * 768);
}

inline hw_uint<32>  color_out_float_pw_math_color_out_float512516_746_select(color_out_float_cache& color_out_float, int root, int pw_math_color_out_float512513, int pw_math_color_out_float512514, int pw_math_color_out_float512515, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_out_float_pw_math_color_out_float512516_746 read pattern: { pw_math_color_out_float512516[root = 0, pw_math_color_out_float512513, pw_math_color_out_float512514, pw_math_color_out_float512515] -> color_out_float[pw_math_color_out_float512515, pw_math_color_out_float512514, pw_math_color_out_float512513] : 0 <= pw_math_color_out_float512513 <= 255 and 0 <= pw_math_color_out_float512514 <= 255 and 0 <= pw_math_color_out_float512515 <= 2 }
  auto value_color_out_float_cc511_741 = color_out_float.color_out_float_cc511_741_to_color_out_float_pw_math_color_out_float512516_746.read(/*ram type address*/ (pw_math_color_out_float512515 - 0) * 1 + (pw_math_color_out_float512514 - 0) * 3 + (pw_math_color_out_float512513 - 0) * 768);
  return value_color_out_float_cc511_741;
  return 0;
}

// # of bundles = 2
// cc511_write
//	color_out_float_cc511_741
inline void color_out_float_cc511_write_bundle_write(hw_uint<32>& cc511_write, color_out_float_cache& color_out_float, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
	hw_uint<32>  color_out_float_cc511_741_res = cc511_write.extract<0, 31>();
	color_out_float_cc511_741_write(color_out_float_cc511_741_res, color_out_float, root, color_out_float_to_color508, color_out_float_to_color509, color_out_float_to_color510, dynamic_address);
}

// pw_math_color_out_float512516_read
//	color_out_float_pw_math_color_out_float512516_746
inline hw_uint<32> color_out_float_pw_math_color_out_float512516_read_bundle_read(color_out_float_cache& color_out_float, int root, int pw_math_color_out_float512513, int pw_math_color_out_float512514, int pw_math_color_out_float512515, int dynamic_address) {
  // # of ports in bundle: 1
    // color_out_float_pw_math_color_out_float512516_746

	hw_uint<32> result;
	hw_uint<32>  color_out_float_pw_math_color_out_float512516_746_res = color_out_float_pw_math_color_out_float512516_746_select(color_out_float, root, pw_math_color_out_float512513, pw_math_color_out_float512514, pw_math_color_out_float512515, dynamic_address);
	set_at<0, 32>(result, color_out_float_pw_math_color_out_float512516_746_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_to_gp_gray_1_buf437_avg444_849_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_to_gp_gray_1_buf437_avg444_849_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_to_gp_gray_1_buf437_avg444_849_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_interp470_873_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_interp470_873_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_interp470_873_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_init442_847_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_init442_847_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_init442_847_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 17161)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 17161);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_cache {
  // # of banks: 20
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_to_gp_gray_1_buf437_avg444_849_cache gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_to_gp_gray_1_buf437_avg444_849;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_interp470_873_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_interp470_873;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382_cache gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388_cache gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373_cache gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379_cache gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385_cache gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559_cache gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562_cache gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562;
  gp_gray_1_buf437_init442_847_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565_cache gp_gray_1_buf437_init442_847_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376_cache gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722;
  gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710_cache gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710;
};



inline void gp_gray_1_buf437_avg444_848_write(hw_uint<32> & gp_gray_1_buf437_avg444_848, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_interp470_873.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710.write(gp_gray_1_buf437_avg444_848, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_init442_847_write(hw_uint<32> & gp_gray_1_buf437_init442_847, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_init442_847_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565.write(gp_gray_1_buf437_init442_847, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379.write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385.write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559.write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376.write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562.write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_to_gp_gray_1_buf437_avg444_849.write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382.write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388.write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373.write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline hw_uint<32>  gp_gray_1_buf437_avg444_849_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_avg444_849 read pattern: { avg444[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_to_gp_gray_1_buf437_avg444_849.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_interp470_873_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interp470_873 read pattern: { interp470[root = 0, gp_gray_1_buf437_interpolate_lp467468, gp_gray_1_buf437_interpolate_lp467469] -> gp_gray_1_buf437[gp_gray_1_buf437_interpolate_lp467469, gp_gray_1_buf437_interpolate_lp467468] : 0 <= gp_gray_1_buf437_interpolate_lp467468 <= 127 and 0 <= gp_gray_1_buf437_interpolate_lp467469 <= 127 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_interp470_873.read(/*ram type address*/ (gp_gray_1_buf437_interpolate_lp467469 - -3) * 1 + (gp_gray_1_buf437_interpolate_lp467468 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382 read pattern: { update443_gp_gray_1441_0525_gp_gray_1440_01155[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388 read pattern: { update443_gp_gray_1441_0525_gp_gray_1440_11161[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373 read pattern: { update443_gp_gray_1441_0525_gp_gray_1440__m_11149[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379 read pattern: { update443_gp_gray_1441_1527_gp_gray_1440_01153[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385 read pattern: { update443_gp_gray_1441_1527_gp_gray_1440_11159[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559 read pattern: { update443_gp_gray_1441_1527_gp_gray_1440__m_11147[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562 read pattern: { update443_gp_gray_1441__m_1523_gp_gray_1440_01157[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565 read pattern: { update443_gp_gray_1441__m_1523_gp_gray_1440_11163[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_init442_847 = gp_gray_1_buf437.gp_gray_1_buf437_init442_847_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_init442_847;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376 read pattern: { update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_01119[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[2gp_gray_2447, 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716.read(/*ram type address*/ (2*gp_gray_2447 - -3) * 1 + (2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_11125[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[2gp_gray_2447, 1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545.read(/*ram type address*/ (2*gp_gray_2447 - -3) * 1 + (1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448__m_11113[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[2gp_gray_2447, -1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194.read(/*ram type address*/ (2*gp_gray_2447 - -3) * 1 + (-1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_01117[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[1 + 2gp_gray_2447, 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713.read(/*ram type address*/ (1 + 2*gp_gray_2447 - -3) * 1 + (2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_11123[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[1 + 2gp_gray_2447, 1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542.read(/*ram type address*/ (1 + 2*gp_gray_2447 - -3) * 1 + (1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448__m_11111[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[1 + 2gp_gray_2447, -1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539.read(/*ram type address*/ (1 + 2*gp_gray_2447 - -3) * 1 + (-1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_01121[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[-1 + 2gp_gray_2447, 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719.read(/*ram type address*/ (-1 + 2*gp_gray_2447 - -3) * 1 + (2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_11127[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[-1 + 2gp_gray_2447, 1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722.read(/*ram type address*/ (-1 + 2*gp_gray_2447 - -3) * 1 + (1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[-1 + 2gp_gray_2447, -1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_848 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_848_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710.read(/*ram type address*/ (-1 + 2*gp_gray_2447 - -3) * 1 + (-1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_848;
  return 0;
}

// # of bundles = 31
// avg444_read
//	gp_gray_1_buf437_avg444_849
inline hw_uint<32> gp_gray_1_buf437_avg444_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_avg444_849

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_avg444_849_res = gp_gray_1_buf437_avg444_849_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_avg444_849_res);
	return result;
}

// avg444_write
//	gp_gray_1_buf437_avg444_848
inline void gp_gray_1_buf437_avg444_write_bundle_write(hw_uint<32>& avg444_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_avg444_848_res = avg444_write.extract<0, 31>();
	gp_gray_1_buf437_avg444_848_write(gp_gray_1_buf437_avg444_848_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// init442_write
//	gp_gray_1_buf437_init442_847
inline void gp_gray_1_buf437_init442_write_bundle_write(hw_uint<32>& init442_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_init442_847_res = init442_write.extract<0, 31>();
	gp_gray_1_buf437_init442_847_write(gp_gray_1_buf437_init442_847_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// interp470_read
//	gp_gray_1_buf437_interp470_873
inline hw_uint<32> gp_gray_1_buf437_interp470_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interp470_873

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interp470_873_res = gp_gray_1_buf437_interp470_873_select(gp_gray_1_buf437, root, gp_gray_1_buf437_interpolate_lp467468, gp_gray_1_buf437_interpolate_lp467469, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interp470_873_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440_01155_read
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382_res = gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_382_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440_01155_write
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381
inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_0525_gp_gray_1440_01155_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_res = update443_gp_gray_1441_0525_gp_gray_1440_01155_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_381_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_0525_gp_gray_1440_11161_read
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388_res = gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_388_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440_11161_write
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387
inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_0525_gp_gray_1440_11161_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_res = update443_gp_gray_1441_0525_gp_gray_1440_11161_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_387_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_0525_gp_gray_1440__m_11149_read
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373_res = gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_373_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372
inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_res = update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_372_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_1527_gp_gray_1440_01153_read
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379_res = gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_379_res);
	return result;
}

// update443_gp_gray_1441_1527_gp_gray_1440_01153_write
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378
inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_1527_gp_gray_1440_01153_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_res = update443_gp_gray_1441_1527_gp_gray_1440_01153_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_378_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_1527_gp_gray_1440_11159_read
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385_res = gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_385_res);
	return result;
}

// update443_gp_gray_1441_1527_gp_gray_1440_11159_write
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384
inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_1527_gp_gray_1440_11159_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_res = update443_gp_gray_1441_1527_gp_gray_1440_11159_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_384_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_1527_gp_gray_1440__m_11147_read
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559_res = gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_559_res);
	return result;
}

// update443_gp_gray_1441_1527_gp_gray_1440__m_11147_write
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558
inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_1527_gp_gray_1440__m_11147_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_res = update443_gp_gray_1441_1527_gp_gray_1440__m_11147_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_558_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_01157_read
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562_res = gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_562_res);
	return result;
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561
inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write_bundle_write(hw_uint<32>& update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_res = update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_561_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_11163_read
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565_res = gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_565_res);
	return result;
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564
inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write_bundle_write(hw_uint<32>& update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_res = update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_564_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_read
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376_res = gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_376_res);
	return result;
}

// update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_write
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375
inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_write_bundle_write(hw_uint<32>& update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_res = update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_375_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update451_gp_gray_2449_0537_gp_gray_2448_01119_read
//	gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716_res = gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_716_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448_11125_read
//	gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545_res = gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_545_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448__m_11113_read
//	gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194_res = gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_194_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448_01117_read
//	gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_res = gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448_11123_read
//	gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542_res = gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_542_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448__m_11111_read
//	gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539_res = gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_539_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_01121_read
//	gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719_res = gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_719_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_11127_read
//	gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722_res = gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_722_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_read
//	gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710_res = gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_710_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_interpolated466_interp470_864_to_gp_gray_1_buf437_interpolated466_rc498_734_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 16384
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[16384];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_interpolated466_interp470_864_to_gp_gray_1_buf437_interpolated466_rc498_734_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*16384);
  }
  ~gp_gray_1_buf437_interpolated466_interp470_864_to_gp_gray_1_buf437_interpolated466_rc498_734_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 16384)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 16384);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 16384)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 16384);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_interpolated466_cache {
  // # of banks: 1
  gp_gray_1_buf437_interpolated466_interp470_864_to_gp_gray_1_buf437_interpolated466_rc498_734_cache gp_gray_1_buf437_interpolated466_interp470_864_to_gp_gray_1_buf437_interpolated466_rc498_734;
};



inline void gp_gray_1_buf437_interpolated466_interp470_864_write(hw_uint<32> & gp_gray_1_buf437_interpolated466_interp470_864, gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
  gp_gray_1_buf437_interpolated466.gp_gray_1_buf437_interpolated466_interp470_864_to_gp_gray_1_buf437_interpolated466_rc498_734.write(gp_gray_1_buf437_interpolated466_interp470_864, (gp_gray_1_buf437_interpolate_lp467469 - 0) * 1 + (gp_gray_1_buf437_interpolate_lp467468 - 0) * 128);
}

inline hw_uint<32>  gp_gray_1_buf437_interpolated466_rc498_734_select(gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interpolated466_rc498_734 read pattern: { rc498[root = 0, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492] -> gp_gray_1_buf437_interpolated466[gp_gray_1_buf437_interpolated466_reconstruct_lp490492, gp_gray_1_buf437_interpolated466_reconstruct_lp490491] : 0 <= gp_gray_1_buf437_interpolated466_reconstruct_lp490491 <= 127 and 0 <= gp_gray_1_buf437_interpolated466_reconstruct_lp490492 <= 127 }
  auto value_gp_gray_1_buf437_interpolated466_interp470_864 = gp_gray_1_buf437_interpolated466.gp_gray_1_buf437_interpolated466_interp470_864_to_gp_gray_1_buf437_interpolated466_rc498_734.read(/*ram type address*/ (gp_gray_1_buf437_interpolated466_reconstruct_lp490492 - 0) * 1 + (gp_gray_1_buf437_interpolated466_reconstruct_lp490491 - 0) * 128);
  return value_gp_gray_1_buf437_interpolated466_interp470_864;
  return 0;
}

// # of bundles = 2
// interp470_write
//	gp_gray_1_buf437_interpolated466_interp470_864
inline void gp_gray_1_buf437_interpolated466_interp470_write_bundle_write(hw_uint<32>& interp470_write, gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_interpolated466_interp470_864_res = interp470_write.extract<0, 31>();
	gp_gray_1_buf437_interpolated466_interp470_864_write(gp_gray_1_buf437_interpolated466_interp470_864_res, gp_gray_1_buf437_interpolated466, root, gp_gray_1_buf437_interpolate_lp467468, gp_gray_1_buf437_interpolate_lp467469, dynamic_address);
}

// rc498_read
//	gp_gray_1_buf437_interpolated466_rc498_734
inline hw_uint<32> gp_gray_1_buf437_interpolated466_rc498_read_bundle_read(gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interpolated466_rc498_734

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interpolated466_rc498_734_res = gp_gray_1_buf437_interpolated466_rc498_734_select(gp_gray_1_buf437_interpolated466, root, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interpolated466_rc498_734_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 16384
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[16384];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*16384);
  }
  ~gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 16384)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 16384);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 16384)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 16384);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache {
  // # of banks: 1
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737_cache gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737;
};



inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_write(hw_uint<32> & gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737.write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733, (gp_gray_1_buf437_interpolated466_reconstruct_lp490492 - 0) * 1 + (gp_gray_1_buf437_interpolated466_reconstruct_lp490491 - 0) * 128);
}

inline hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737 read pattern: { us506[root = 0, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505] -> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493[o0, o1] : 0 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 <= 255 and 0 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 <= 255 and -1 + us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 <= 2o0 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 and -1 + us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 <= 2o1 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 }
  auto value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733 = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737.read(/*ram type address*/ (floord(us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, 2) - 0) * 1 + (floord(us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, 2) - 0) * 128);
  return value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733;
  return 0;
}

// # of bundles = 2
// rc498_write
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733
inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_write_bundle_write(hw_uint<32>& rc498_write, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_res = rc498_write.extract<0, 31>();
	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_733_res, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, root, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492, dynamic_address);
}

// us506_read
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737
inline hw_uint<32> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_read_bundle_read(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737_res = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, root, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_737_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 65536
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[65536];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*65536);
  }
  ~gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 65536)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 65536);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 65536)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 65536);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache {
  // # of banks: 1
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740_cache gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740;
};



inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_write(hw_uint<32> & gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740.write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736, (us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 - 0) * 1 + (us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 - 0) * 256);
}

inline hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int gray_interpolated461_reconstruct_lp499500, int gray_interpolated461_reconstruct_lp499501, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740 read pattern: { rc507[root = 0, gray_interpolated461_reconstruct_lp499500, gray_interpolated461_reconstruct_lp499501] -> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503[gray_interpolated461_reconstruct_lp499501, gray_interpolated461_reconstruct_lp499500] : 0 <= gray_interpolated461_reconstruct_lp499500 <= 255 and 0 <= gray_interpolated461_reconstruct_lp499501 <= 255 }
  auto value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736 = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740.read(/*ram type address*/ (gray_interpolated461_reconstruct_lp499501 - 0) * 1 + (gray_interpolated461_reconstruct_lp499500 - 0) * 256);
  return value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736;
  return 0;
}

// # of bundles = 2
// rc507_read
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740
inline hw_uint<32> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_read_bundle_read(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int gray_interpolated461_reconstruct_lp499500, int gray_interpolated461_reconstruct_lp499501, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740_res = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, root, gray_interpolated461_reconstruct_lp499500, gray_interpolated461_reconstruct_lp499501, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_740_res);
	return result;
}

// us506_write
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736
inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_write_bundle_write(hw_uint<32>& us506_write, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_res = us506_write.extract<0, 31>();
	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_736_res, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, root, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, dynamic_address);
}

#include "hw_classes.h"

struct gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537_to_gp_gray_2_buf445_avg452_905_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537_to_gp_gray_2_buf445_avg452_905_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537_to_gp_gray_2_buf445_avg452_905_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_interp475_919_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_interp475_919_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_interp475_919_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_715_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_715_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_715_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_544_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_544_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_544_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_193_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_193_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_193_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_541_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_541_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_541_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_538_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_538_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_538_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_718_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_718_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_718_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_init450_850_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_721_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_init450_850_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_721_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_init450_850_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_721_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_709_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_709_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_709_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_365_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_365_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_365_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_179_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_179_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_179_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_170_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_170_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_170_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_362_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_362_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_362_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_176_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_176_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_176_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_692_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_692_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_692_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_173_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_173_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_173_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_182_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_182_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_182_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_359_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_359_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_359_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4225)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4225);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct gp_gray_2_buf445_cache {
  // # of banks: 20
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537_to_gp_gray_2_buf445_avg452_905_cache gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537_to_gp_gray_2_buf445_avg452_905;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_interp475_919_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_interp475_919;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_715_cache gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_715;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_544_cache gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_544;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_193_cache gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_193;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_cache gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_541_cache gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_541;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_538_cache gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_538;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_718_cache gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_718;
  gp_gray_2_buf445_init450_850_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_721_cache gp_gray_2_buf445_init450_850_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_721;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_709_cache gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_709;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_365_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_365;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_179_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_179;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_170_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_170;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_362_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_362;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_176_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_176;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_692_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_692;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_173_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_173;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_182_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_182;
  gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_359_cache gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_359;
};



inline void gp_gray_2_buf445_avg452_904_write(hw_uint<32> & gp_gray_2_buf445_avg452_904, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_interp475_919.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_365.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_179.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_170.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_362.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_176.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_692.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_173.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_182.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_359.write(gp_gray_2_buf445_avg452_904, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_init450_850_write(hw_uint<32> & gp_gray_2_buf445_init450_850, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_init450_850_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_721.write(gp_gray_2_buf445_init450_850, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712.write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_541.write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_538.write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_709.write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_718.write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537_to_gp_gray_2_buf445_avg452_905.write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_715.write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_544.write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_193.write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline hw_uint<32>  gp_gray_2_buf445_avg452_905_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_avg452_905 read pattern: { avg452[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537_to_gp_gray_2_buf445_avg452_905.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_537;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_interp475_919_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2_buf445_interpolate_lp472473, int gp_gray_2_buf445_interpolate_lp472474, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_interp475_919 read pattern: { interp475[root = 0, gp_gray_2_buf445_interpolate_lp472473, gp_gray_2_buf445_interpolate_lp472474] -> gp_gray_2_buf445[gp_gray_2_buf445_interpolate_lp472474, gp_gray_2_buf445_interpolate_lp472473] : 0 <= gp_gray_2_buf445_interpolate_lp472473 <= 63 and 0 <= gp_gray_2_buf445_interpolate_lp472474 <= 63 }
  auto value_gp_gray_2_buf445_avg452_904 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_interp475_919.read(/*ram type address*/ (gp_gray_2_buf445_interpolate_lp472474 - -1) * 1 + (gp_gray_2_buf445_interpolate_lp472473 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_904;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_715_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_715 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_01119[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_715.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_717;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_544_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_544 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_11125[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_544.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_720;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_193_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_193 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448__m_11113[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_193.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_708;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_01117[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_714;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_541_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_541 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_11123[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_541.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_543;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_538_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_538 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448__m_11111[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_538.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_192;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_718_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_718 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_01121[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_718.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_540;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_721_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_721 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_11127[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_init450_850 = gp_gray_2_buf445.gp_gray_2_buf445_init450_850_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_721.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_init450_850;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_709_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_709 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_709.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_365_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_365 read pattern: { update459_gp_gray_3457_0549_gp_gray_3456_01083[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[2gp_gray_3455, 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_904 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_365.read(/*ram type address*/ (2*gp_gray_3455 - -1) * 1 + (2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_904;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_179_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_179 read pattern: { update459_gp_gray_3457_0549_gp_gray_3456_11089[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[2gp_gray_3455, 1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_904 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_179.read(/*ram type address*/ (2*gp_gray_3455 - -1) * 1 + (1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_904;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_170_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_170 read pattern: { update459_gp_gray_3457_0549_gp_gray_3456__m_11077[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[2gp_gray_3455, -1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_904 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_170.read(/*ram type address*/ (2*gp_gray_3455 - -1) * 1 + (-1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_904;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_362_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_362 read pattern: { update459_gp_gray_3457_1551_gp_gray_3456_01081[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[1 + 2gp_gray_3455, 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_904 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_362.read(/*ram type address*/ (1 + 2*gp_gray_3455 - -1) * 1 + (2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_904;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_176_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_176 read pattern: { update459_gp_gray_3457_1551_gp_gray_3456_11087[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[1 + 2gp_gray_3455, 1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_904 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_176.read(/*ram type address*/ (1 + 2*gp_gray_3455 - -1) * 1 + (1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_904;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_692_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_692 read pattern: { update459_gp_gray_3457_1551_gp_gray_3456__m_11075[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[1 + 2gp_gray_3455, -1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_904 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_692.read(/*ram type address*/ (1 + 2*gp_gray_3455 - -1) * 1 + (-1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_904;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_173_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_173 read pattern: { update459_gp_gray_3457__m_1547_gp_gray_3456_01085[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[-1 + 2gp_gray_3455, 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_904 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_173.read(/*ram type address*/ (-1 + 2*gp_gray_3455 - -1) * 1 + (2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_904;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_182_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_182 read pattern: { update459_gp_gray_3457__m_1547_gp_gray_3456_11091[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[-1 + 2gp_gray_3455, 1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_904 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_904_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_182.read(/*ram type address*/ (-1 + 2*gp_gray_3455 - -1) * 1 + (1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_904;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_359_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_359 read pattern: { update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[-1 + 2gp_gray_3455, -1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
