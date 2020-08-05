#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h
#include "local_laplacian_filters_compute.h"

#include "hw_classes.h"

struct color_in_pw_math_color_in_int59_734_to_color_in_cc511_1011_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_734_to_color_in_cc511_1011_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_734_to_color_in_cc511_1011_cache() {
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

struct color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_737_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_737_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_737_cache() {
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

struct color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_738_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_738_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_738_cache() {
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

struct color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_739_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_739_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_739_cache() {
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
  color_in_pw_math_color_in_int59_734_to_color_in_cc511_1011_cache color_in_pw_math_color_in_int59_734_to_color_in_cc511_1011;
  color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_737_cache color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_737;
  color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_738_cache color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_738;
  color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_739_cache color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_739;
};



inline void color_in_pw_math_color_in_int59_734_write(hw_uint<32> & color_in_pw_math_color_in_int59_734, color_in_cache& color_in, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
  color_in.color_in_pw_math_color_in_int59_734_to_color_in_cc511_1011.write(color_in_pw_math_color_in_int59_734, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  color_in.color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_737.write(color_in_pw_math_color_in_int59_734, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  color_in.color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_738.write(color_in_pw_math_color_in_int59_734, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  color_in.color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_739.write(color_in_pw_math_color_in_int59_734, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
}

inline hw_uint<32>  color_in_cc511_1011_select(color_in_cache& color_in, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_cc511_1011 read pattern: { cc511[root = 0, color_out_float_to_color508, color_out_float_to_color509, color_out_float_to_color510] -> color_in[color_out_float_to_color510, color_out_float_to_color509, color_out_float_to_color508] : 0 <= color_out_float_to_color508 <= 255 and 0 <= color_out_float_to_color509 <= 255 and 0 <= color_out_float_to_color510 <= 2 }
  auto value_color_in_pw_math_color_in_int59_734 = color_in.color_in_pw_math_color_in_int59_734_to_color_in_cc511_1011.read(/*ram type address*/ (color_out_float_to_color510 - 0) * 1 + (color_out_float_to_color509 - -7) * 3 + (color_out_float_to_color508 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_734;
  return 0;
}

inline hw_uint<32>  color_in_to_gray12_737_select(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_to_gray12_737 read pattern: { to_gray12[root = 0, color_in_to_gray10, color_in_to_gray11] -> color_in[0, color_in_to_gray11, color_in_to_gray10] : -7 <= color_in_to_gray10 <= 255 and -7 <= color_in_to_gray11 <= 255 }
  auto value_color_in_pw_math_color_in_int59_734 = color_in.color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_737.read(/*ram type address*/ (0 - 0) * 1 + (color_in_to_gray11 - -7) * 3 + (color_in_to_gray10 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_734;
  return 0;
}

inline hw_uint<32>  color_in_to_gray12_738_select(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_to_gray12_738 read pattern: { to_gray12[root = 0, color_in_to_gray10, color_in_to_gray11] -> color_in[1, color_in_to_gray11, color_in_to_gray10] : -7 <= color_in_to_gray10 <= 255 and -7 <= color_in_to_gray11 <= 255 }
  auto value_color_in_pw_math_color_in_int59_734 = color_in.color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_738.read(/*ram type address*/ (1 - 0) * 1 + (color_in_to_gray11 - -7) * 3 + (color_in_to_gray10 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_734;
  return 0;
}

inline hw_uint<32>  color_in_to_gray12_739_select(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_to_gray12_739 read pattern: { to_gray12[root = 0, color_in_to_gray10, color_in_to_gray11] -> color_in[2, color_in_to_gray11, color_in_to_gray10] : -7 <= color_in_to_gray10 <= 255 and -7 <= color_in_to_gray11 <= 255 }
  auto value_color_in_pw_math_color_in_int59_734 = color_in.color_in_pw_math_color_in_int59_734_to_color_in_to_gray12_739.read(/*ram type address*/ (2 - 0) * 1 + (color_in_to_gray11 - -7) * 3 + (color_in_to_gray10 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_734;
  return 0;
}

// # of bundles = 3
// cc511_read
//	color_in_cc511_1011
inline hw_uint<32> color_in_cc511_read_bundle_read(color_in_cache& color_in, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
  // # of ports in bundle: 1
    // color_in_cc511_1011

	hw_uint<32> result;
	hw_uint<32>  color_in_cc511_1011_res = color_in_cc511_1011_select(color_in, root, color_out_float_to_color508, color_out_float_to_color509, color_out_float_to_color510, dynamic_address);
	set_at<0, 32>(result, color_in_cc511_1011_res);
	return result;
}

// pw_math_color_in_int59_write
//	color_in_pw_math_color_in_int59_734
inline void color_in_pw_math_color_in_int59_write_bundle_write(hw_uint<32>& pw_math_color_in_int59_write, color_in_cache& color_in, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
	hw_uint<32>  color_in_pw_math_color_in_int59_734_res = pw_math_color_in_int59_write.extract<0, 31>();
	color_in_pw_math_color_in_int59_734_write(color_in_pw_math_color_in_int59_734_res, color_in, root, pw_math_color_in_int56, pw_math_color_in_int57, pw_math_color_in_int58, dynamic_address);
}

// to_gray12_read
//	color_in_to_gray12_737
//	color_in_to_gray12_738
//	color_in_to_gray12_739
inline hw_uint<96> color_in_to_gray12_read_bundle_read(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
  // # of ports in bundle: 3
    // color_in_to_gray12_737
    // color_in_to_gray12_738
    // color_in_to_gray12_739

	hw_uint<96> result;
	hw_uint<32>  color_in_to_gray12_737_res = color_in_to_gray12_737_select(color_in, root, color_in_to_gray10, color_in_to_gray11, dynamic_address);
	set_at<0, 96>(result, color_in_to_gray12_737_res);
	hw_uint<32>  color_in_to_gray12_738_res = color_in_to_gray12_738_select(color_in, root, color_in_to_gray10, color_in_to_gray11, dynamic_address);
	set_at<32, 96>(result, color_in_to_gray12_738_res);
	hw_uint<32>  color_in_to_gray12_739_res = color_in_to_gray12_739_select(color_in, root, color_in_to_gray10, color_in_to_gray11, dynamic_address);
	set_at<64, 96>(result, color_in_to_gray12_739_res);
	return result;
}

#include "hw_classes.h"

struct color_in_int_oc_load_color_in_oc04_729_to_color_in_int_pw_math_color_in_int59_735_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_int_oc_load_color_in_oc04_729_to_color_in_int_pw_math_color_in_int59_735_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_int_oc_load_color_in_oc04_729_to_color_in_int_pw_math_color_in_int59_735_cache() {
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
  color_in_int_oc_load_color_in_oc04_729_to_color_in_int_pw_math_color_in_int59_735_cache color_in_int_oc_load_color_in_oc04_729_to_color_in_int_pw_math_color_in_int59_735;
};



inline void color_in_int_oc_load_color_in_oc04_729_write(hw_uint<32> & color_in_int_oc_load_color_in_oc04_729, color_in_int_cache& color_in_int, int root, int oc_load_color_in_oc01, int oc_load_color_in_oc02, int oc_load_color_in_oc03, int dynamic_address) {
  color_in_int.color_in_int_oc_load_color_in_oc04_729_to_color_in_int_pw_math_color_in_int59_735.write(color_in_int_oc_load_color_in_oc04_729, (oc_load_color_in_oc03 - 0) * 1 + (oc_load_color_in_oc02 - -7) * 3 + (oc_load_color_in_oc01 - -7) * 789);
}

inline hw_uint<32>  color_in_int_pw_math_color_in_int59_735_select(color_in_int_cache& color_in_int, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_int_pw_math_color_in_int59_735 read pattern: { pw_math_color_in_int59[root = 0, pw_math_color_in_int56, pw_math_color_in_int57, pw_math_color_in_int58] -> color_in_int[pw_math_color_in_int58, pw_math_color_in_int57, pw_math_color_in_int56] : -7 <= pw_math_color_in_int56 <= 255 and -7 <= pw_math_color_in_int57 <= 255 and 0 <= pw_math_color_in_int58 <= 2 }
  auto value_color_in_int_oc_load_color_in_oc04_729 = color_in_int.color_in_int_oc_load_color_in_oc04_729_to_color_in_int_pw_math_color_in_int59_735.read(/*ram type address*/ (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  return value_color_in_int_oc_load_color_in_oc04_729;
  return 0;
}

// # of bundles = 2
// oc_load_color_in_oc04_write
//	color_in_int_oc_load_color_in_oc04_729
inline void color_in_int_oc_load_color_in_oc04_write_bundle_write(hw_uint<32>& oc_load_color_in_oc04_write, color_in_int_cache& color_in_int, int root, int oc_load_color_in_oc01, int oc_load_color_in_oc02, int oc_load_color_in_oc03, int dynamic_address) {
	hw_uint<32>  color_in_int_oc_load_color_in_oc04_729_res = oc_load_color_in_oc04_write.extract<0, 31>();
	color_in_int_oc_load_color_in_oc04_729_write(color_in_int_oc_load_color_in_oc04_729_res, color_in_int, root, oc_load_color_in_oc01, oc_load_color_in_oc02, oc_load_color_in_oc03, dynamic_address);
}

// pw_math_color_in_int59_read
//	color_in_int_pw_math_color_in_int59_735
inline hw_uint<32> color_in_int_pw_math_color_in_int59_read_bundle_read(color_in_int_cache& color_in_int, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
  // # of ports in bundle: 1
    // color_in_int_pw_math_color_in_int59_735

	hw_uint<32> result;
	hw_uint<32>  color_in_int_pw_math_color_in_int59_735_res = color_in_int_pw_math_color_in_int59_735_select(color_in_int, root, pw_math_color_in_int56, pw_math_color_in_int57, pw_math_color_in_int58, dynamic_address);
	set_at<0, 32>(result, color_in_int_pw_math_color_in_int59_735_res);
	return result;
}

#include "hw_classes.h"

struct color_out_float_cc511_1009_to_color_out_float_pw_math_color_out_float512516_1014_cache {
	// RAM Box: {[0, 2], [0, 255], [0, 255]}
	// Capacity: 196608
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[196608];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_out_float_cc511_1009_to_color_out_float_pw_math_color_out_float512516_1014_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*196608);
  }
  ~color_out_float_cc511_1009_to_color_out_float_pw_math_color_out_float512516_1014_cache() {
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
  color_out_float_cc511_1009_to_color_out_float_pw_math_color_out_float512516_1014_cache color_out_float_cc511_1009_to_color_out_float_pw_math_color_out_float512516_1014;
};



inline void color_out_float_cc511_1009_write(hw_uint<32> & color_out_float_cc511_1009, color_out_float_cache& color_out_float, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
  color_out_float.color_out_float_cc511_1009_to_color_out_float_pw_math_color_out_float512516_1014.write(color_out_float_cc511_1009, (color_out_float_to_color510 - 0) * 1 + (color_out_float_to_color509 - 0) * 3 + (color_out_float_to_color508 - 0) * 768);
}

inline hw_uint<32>  color_out_float_pw_math_color_out_float512516_1014_select(color_out_float_cache& color_out_float, int root, int pw_math_color_out_float512513, int pw_math_color_out_float512514, int pw_math_color_out_float512515, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_out_float_pw_math_color_out_float512516_1014 read pattern: { pw_math_color_out_float512516[root = 0, pw_math_color_out_float512513, pw_math_color_out_float512514, pw_math_color_out_float512515] -> color_out_float[pw_math_color_out_float512515, pw_math_color_out_float512514, pw_math_color_out_float512513] : 0 <= pw_math_color_out_float512513 <= 255 and 0 <= pw_math_color_out_float512514 <= 255 and 0 <= pw_math_color_out_float512515 <= 2 }
  auto value_color_out_float_cc511_1009 = color_out_float.color_out_float_cc511_1009_to_color_out_float_pw_math_color_out_float512516_1014.read(/*ram type address*/ (pw_math_color_out_float512515 - 0) * 1 + (pw_math_color_out_float512514 - 0) * 3 + (pw_math_color_out_float512513 - 0) * 768);
  return value_color_out_float_cc511_1009;
  return 0;
}

// # of bundles = 2
// cc511_write
//	color_out_float_cc511_1009
inline void color_out_float_cc511_write_bundle_write(hw_uint<32>& cc511_write, color_out_float_cache& color_out_float, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
	hw_uint<32>  color_out_float_cc511_1009_res = cc511_write.extract<0, 31>();
	color_out_float_cc511_1009_write(color_out_float_cc511_1009_res, color_out_float, root, color_out_float_to_color508, color_out_float_to_color509, color_out_float_to_color510, dynamic_address);
}

// pw_math_color_out_float512516_read
//	color_out_float_pw_math_color_out_float512516_1014
inline hw_uint<32> color_out_float_pw_math_color_out_float512516_read_bundle_read(color_out_float_cache& color_out_float, int root, int pw_math_color_out_float512513, int pw_math_color_out_float512514, int pw_math_color_out_float512515, int dynamic_address) {
  // # of ports in bundle: 1
    // color_out_float_pw_math_color_out_float512516_1014

	hw_uint<32> result;
	hw_uint<32>  color_out_float_pw_math_color_out_float512516_1014_res = color_out_float_pw_math_color_out_float512516_1014_select(color_out_float, root, pw_math_color_out_float512513, pw_math_color_out_float512514, pw_math_color_out_float512515, dynamic_address);
	set_at<0, 32>(result, color_out_float_pw_math_color_out_float512516_1014_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_947_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_947_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_947_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_interp470_973_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_interp470_973_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_interp470_973_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448_cache() {
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

struct gp_gray_1_buf437_init442_945_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_init442_945_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_init442_945_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587_cache() {
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

struct gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701_cache() {
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
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_947_cache gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_947;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_interp470_973_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_interp470_973;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445_cache gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592_cache gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439_cache gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442_cache gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241_cache gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_cache gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448_cache gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448;
  gp_gray_1_buf437_init442_945_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595_cache gp_gray_1_buf437_init442_945_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_cache gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587;
  gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701_cache gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701;
};



inline void gp_gray_1_buf437_avg444_946_write(hw_uint<32> & gp_gray_1_buf437_avg444_946, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_interp470_973.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701.write(gp_gray_1_buf437_avg444_946, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_init442_945_write(hw_uint<32> & gp_gray_1_buf437_init442_945, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_init442_945_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595.write(gp_gray_1_buf437_init442_945, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442.write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241.write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724.write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727.write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448.write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_947.write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445.write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592.write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439.write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline hw_uint<32>  gp_gray_1_buf437_avg444_947_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_avg444_947 read pattern: { avg444[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_947.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_interp470_973_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interp470_973 read pattern: { interp470[root = 0, gp_gray_1_buf437_interpolate_lp467468, gp_gray_1_buf437_interpolate_lp467469] -> gp_gray_1_buf437[gp_gray_1_buf437_interpolate_lp467469, gp_gray_1_buf437_interpolate_lp467468] : 0 <= gp_gray_1_buf437_interpolate_lp467468 <= 127 and 0 <= gp_gray_1_buf437_interpolate_lp467469 <= 127 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_interp470_973.read(/*ram type address*/ (gp_gray_1_buf437_interpolate_lp467469 - -3) * 1 + (gp_gray_1_buf437_interpolate_lp467468 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445 read pattern: { update443_gp_gray_1441_0525_gp_gray_1440_01155[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592 read pattern: { update443_gp_gray_1441_0525_gp_gray_1440_11161[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439 read pattern: { update443_gp_gray_1441_0525_gp_gray_1440__m_11149[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442 read pattern: { update443_gp_gray_1441_1527_gp_gray_1440_01153[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241 read pattern: { update443_gp_gray_1441_1527_gp_gray_1440_11159[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724 read pattern: { update443_gp_gray_1441_1527_gp_gray_1440__m_11147[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448 read pattern: { update443_gp_gray_1441__m_1523_gp_gray_1440_01157[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595 read pattern: { update443_gp_gray_1441__m_1523_gp_gray_1440_11163[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_init442_945 = gp_gray_1_buf437.gp_gray_1_buf437_init442_945_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_init442_945;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727 read pattern: { update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_01119[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[2gp_gray_2447, 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707.read(/*ram type address*/ (2*gp_gray_2447 - -3) * 1 + (2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_11125[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[2gp_gray_2447, 1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716.read(/*ram type address*/ (2*gp_gray_2447 - -3) * 1 + (1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448__m_11113[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[2gp_gray_2447, -1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698.read(/*ram type address*/ (2*gp_gray_2447 - -3) * 1 + (-1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_01117[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[1 + 2gp_gray_2447, 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704.read(/*ram type address*/ (1 + 2*gp_gray_2447 - -3) * 1 + (2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_11123[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[1 + 2gp_gray_2447, 1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713.read(/*ram type address*/ (1 + 2*gp_gray_2447 - -3) * 1 + (1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448__m_11111[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[1 + 2gp_gray_2447, -1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695.read(/*ram type address*/ (1 + 2*gp_gray_2447 - -3) * 1 + (-1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_01121[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[-1 + 2gp_gray_2447, 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710.read(/*ram type address*/ (-1 + 2*gp_gray_2447 - -3) * 1 + (2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_11127[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[-1 + 2gp_gray_2447, 1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587.read(/*ram type address*/ (-1 + 2*gp_gray_2447 - -3) * 1 + (1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[-1 + 2gp_gray_2447, -1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_946 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_946_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701.read(/*ram type address*/ (-1 + 2*gp_gray_2447 - -3) * 1 + (-1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_946;
  return 0;
}

// # of bundles = 31
// avg444_read
//	gp_gray_1_buf437_avg444_947
inline hw_uint<32> gp_gray_1_buf437_avg444_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_avg444_947

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_avg444_947_res = gp_gray_1_buf437_avg444_947_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_avg444_947_res);
	return result;
}

// avg444_write
//	gp_gray_1_buf437_avg444_946
inline void gp_gray_1_buf437_avg444_write_bundle_write(hw_uint<32>& avg444_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_avg444_946_res = avg444_write.extract<0, 31>();
	gp_gray_1_buf437_avg444_946_write(gp_gray_1_buf437_avg444_946_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// init442_write
//	gp_gray_1_buf437_init442_945
inline void gp_gray_1_buf437_init442_write_bundle_write(hw_uint<32>& init442_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_init442_945_res = init442_write.extract<0, 31>();
	gp_gray_1_buf437_init442_945_write(gp_gray_1_buf437_init442_945_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// interp470_read
//	gp_gray_1_buf437_interp470_973
inline hw_uint<32> gp_gray_1_buf437_interp470_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interp470_973

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interp470_973_res = gp_gray_1_buf437_interp470_973_select(gp_gray_1_buf437, root, gp_gray_1_buf437_interpolate_lp467468, gp_gray_1_buf437_interpolate_lp467469, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interp470_973_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440_01155_read
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445_res = gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_445_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440_01155_write
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444
inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_0525_gp_gray_1440_01155_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_res = update443_gp_gray_1441_0525_gp_gray_1440_01155_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_444_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_0525_gp_gray_1440_11161_read
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592_res = gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_592_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440_11161_write
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591
inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_0525_gp_gray_1440_11161_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_res = update443_gp_gray_1441_0525_gp_gray_1440_11161_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_591_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_0525_gp_gray_1440__m_11149_read
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439_res = gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_439_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438
inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_res = update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_438_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_1527_gp_gray_1440_01153_read
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442_res = gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_442_res);
	return result;
}

// update443_gp_gray_1441_1527_gp_gray_1440_01153_write
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441
inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_1527_gp_gray_1440_01153_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_res = update443_gp_gray_1441_1527_gp_gray_1440_01153_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_441_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_1527_gp_gray_1440_11159_read
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241_res = gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_241_res);
	return result;
}

// update443_gp_gray_1441_1527_gp_gray_1440_11159_write
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240
inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_1527_gp_gray_1440_11159_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_res = update443_gp_gray_1441_1527_gp_gray_1440_11159_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_240_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_1527_gp_gray_1440__m_11147_read
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_res = gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_res);
	return result;
}

// update443_gp_gray_1441_1527_gp_gray_1440__m_11147_write
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723
inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_1527_gp_gray_1440__m_11147_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_res = update443_gp_gray_1441_1527_gp_gray_1440__m_11147_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_01157_read
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448_res = gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_448_res);
	return result;
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447
inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write_bundle_write(hw_uint<32>& update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_res = update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_447_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_11163_read
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595_res = gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_595_res);
	return result;
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594
inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write_bundle_write(hw_uint<32>& update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_res = update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_594_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_read
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_res = gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_res);
	return result;
}

// update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_write
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726
inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_write_bundle_write(hw_uint<32>& update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_res = update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update451_gp_gray_2449_0537_gp_gray_2448_01119_read
//	gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707_res = gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_707_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448_11125_read
//	gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716_res = gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_716_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448__m_11113_read
//	gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698_res = gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_698_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448_01117_read
//	gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704_res = gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_704_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448_11123_read
//	gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713_res = gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_713_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448__m_11111_read
//	gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695_res = gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_695_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_01121_read
//	gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710_res = gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_710_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_11127_read
//	gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587_res = gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_587_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_read
//	gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701_res = gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_701_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_interpolated466_interp470_964_to_gp_gray_1_buf437_interpolated466_rc498_1002_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 16384
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[16384];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_interpolated466_interp470_964_to_gp_gray_1_buf437_interpolated466_rc498_1002_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*16384);
  }
  ~gp_gray_1_buf437_interpolated466_interp470_964_to_gp_gray_1_buf437_interpolated466_rc498_1002_cache() {
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
  gp_gray_1_buf437_interpolated466_interp470_964_to_gp_gray_1_buf437_interpolated466_rc498_1002_cache gp_gray_1_buf437_interpolated466_interp470_964_to_gp_gray_1_buf437_interpolated466_rc498_1002;
};



inline void gp_gray_1_buf437_interpolated466_interp470_964_write(hw_uint<32> & gp_gray_1_buf437_interpolated466_interp470_964, gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
  gp_gray_1_buf437_interpolated466.gp_gray_1_buf437_interpolated466_interp470_964_to_gp_gray_1_buf437_interpolated466_rc498_1002.write(gp_gray_1_buf437_interpolated466_interp470_964, (gp_gray_1_buf437_interpolate_lp467469 - 0) * 1 + (gp_gray_1_buf437_interpolate_lp467468 - 0) * 128);
}

inline hw_uint<32>  gp_gray_1_buf437_interpolated466_rc498_1002_select(gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interpolated466_rc498_1002 read pattern: { rc498[root = 0, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492] -> gp_gray_1_buf437_interpolated466[gp_gray_1_buf437_interpolated466_reconstruct_lp490492, gp_gray_1_buf437_interpolated466_reconstruct_lp490491] : 0 <= gp_gray_1_buf437_interpolated466_reconstruct_lp490491 <= 127 and 0 <= gp_gray_1_buf437_interpolated466_reconstruct_lp490492 <= 127 }
  auto value_gp_gray_1_buf437_interpolated466_interp470_964 = gp_gray_1_buf437_interpolated466.gp_gray_1_buf437_interpolated466_interp470_964_to_gp_gray_1_buf437_interpolated466_rc498_1002.read(/*ram type address*/ (gp_gray_1_buf437_interpolated466_reconstruct_lp490492 - 0) * 1 + (gp_gray_1_buf437_interpolated466_reconstruct_lp490491 - 0) * 128);
  return value_gp_gray_1_buf437_interpolated466_interp470_964;
  return 0;
}

// # of bundles = 2
// interp470_write
//	gp_gray_1_buf437_interpolated466_interp470_964
inline void gp_gray_1_buf437_interpolated466_interp470_write_bundle_write(hw_uint<32>& interp470_write, gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_interpolated466_interp470_964_res = interp470_write.extract<0, 31>();
	gp_gray_1_buf437_interpolated466_interp470_964_write(gp_gray_1_buf437_interpolated466_interp470_964_res, gp_gray_1_buf437_interpolated466, root, gp_gray_1_buf437_interpolate_lp467468, gp_gray_1_buf437_interpolate_lp467469, dynamic_address);
}

// rc498_read
//	gp_gray_1_buf437_interpolated466_rc498_1002
inline hw_uint<32> gp_gray_1_buf437_interpolated466_rc498_read_bundle_read(gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interpolated466_rc498_1002

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interpolated466_rc498_1002_res = gp_gray_1_buf437_interpolated466_rc498_1002_select(gp_gray_1_buf437_interpolated466, root, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interpolated466_rc498_1002_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 16384
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[16384];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*16384);
  }
  ~gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005_cache() {
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
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005_cache gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005;
};



inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_write(hw_uint<32> & gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005.write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001, (gp_gray_1_buf437_interpolated466_reconstruct_lp490492 - 0) * 1 + (gp_gray_1_buf437_interpolated466_reconstruct_lp490491 - 0) * 128);
}

inline hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005 read pattern: { us506[root = 0, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505] -> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493[o0, o1] : 0 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 <= 255 and 0 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 <= 255 and -1 + us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 <= 2o0 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 and -1 + us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 <= 2o1 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 }
  auto value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001 = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005.read(/*ram type address*/ (floord(us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, 2) - 0) * 1 + (floord(us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, 2) - 0) * 128);
  return value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001;
  return 0;
}

// # of bundles = 2
// rc498_write
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001
inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_write_bundle_write(hw_uint<32>& rc498_write, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_res = rc498_write.extract<0, 31>();
	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_1001_res, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, root, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492, dynamic_address);
}

// us506_read
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005
inline hw_uint<32> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_read_bundle_read(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005_res = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, root, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_1005_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 65536
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[65536];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*65536);
  }
  ~gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008_cache() {
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
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008_cache gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008;
};



inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_write(hw_uint<32> & gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008.write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004, (us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 - 0) * 1 + (us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 - 0) * 256);
}

inline hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int gray_interpolated461_reconstruct_lp499500, int gray_interpolated461_reconstruct_lp499501, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008 read pattern: { rc507[root = 0, gray_interpolated461_reconstruct_lp499500, gray_interpolated461_reconstruct_lp499501] -> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503[gray_interpolated461_reconstruct_lp499501, gray_interpolated461_reconstruct_lp499500] : 0 <= gray_interpolated461_reconstruct_lp499500 <= 255 and 0 <= gray_interpolated461_reconstruct_lp499501 <= 255 }
  auto value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004 = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008.read(/*ram type address*/ (gray_interpolated461_reconstruct_lp499501 - 0) * 1 + (gray_interpolated461_reconstruct_lp499500 - 0) * 256);
  return value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004;
  return 0;
}

// # of bundles = 2
// rc507_read
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008
inline hw_uint<32> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_read_bundle_read(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int gray_interpolated461_reconstruct_lp499500, int gray_interpolated461_reconstruct_lp499501, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008_res = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, root, gray_interpolated461_reconstruct_lp499500, gray_interpolated461_reconstruct_lp499501, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_1008_res);
	return result;
}

// us506_write
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004
inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_write_bundle_write(hw_uint<32>& us506_write, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_res = us506_write.extract<0, 31>();
	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_1004_res, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, root, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, dynamic_address);
}

#include "hw_classes.h"

struct gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693_to_gp_gray_2_buf445_avg452_950_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693_to_gp_gray_2_buf445_avg452_950_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693_to_gp_gray_2_buf445_avg452_950_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_interp475_983_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_interp475_983_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_interp475_983_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_706_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_706_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_706_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_715_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_715_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_715_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_699_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_697_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_699_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_697_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_699_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_697_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_705_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_703_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_705_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_703_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_705_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_703_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_712_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_712_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_712_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_696_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_694_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_696_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_694_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_696_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_694_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_709_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_709_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_709_cache() {
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

struct gp_gray_2_buf445_init450_948_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_586_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_init450_948_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_586_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_init450_948_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_586_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_702_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_700_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_702_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_700_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_702_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_700_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_575_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_575_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_575_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_581_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_581_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_581_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_425_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_425_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_425_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_203_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_203_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_203_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_578_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_578_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_578_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_422_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_422_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_422_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_206_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_206_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_206_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_584_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_584_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_584_cache() {
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

struct gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_428_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_428_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_428_cache() {
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
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693_to_gp_gray_2_buf445_avg452_950_cache gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693_to_gp_gray_2_buf445_avg452_950;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_interp475_983_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_interp475_983;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_706_cache gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_706;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_715_cache gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_715;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_699_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_697_cache gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_699_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_697;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_705_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_703_cache gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_705_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_703;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_712_cache gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_712;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_696_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_694_cache gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_696_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_694;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_709_cache gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_709;
  gp_gray_2_buf445_init450_948_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_586_cache gp_gray_2_buf445_init450_948_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_586;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_702_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_700_cache gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_702_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_700;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_575_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_575;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_581_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_581;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_425_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_425;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_203_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_203;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_578_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_578;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_422_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_422;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_206_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_206;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_584_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_584;
  gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_428_cache gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_428;
};



inline void gp_gray_2_buf445_avg452_949_write(hw_uint<32> & gp_gray_2_buf445_avg452_949, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_interp475_983.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_575.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_581.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_425.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_203.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_578.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_422.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_206.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_584.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_428.write(gp_gray_2_buf445_avg452_949, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_init450_948_write(hw_uint<32> & gp_gray_2_buf445_init450_948, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_init450_948_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_586.write(gp_gray_2_buf445_init450_948, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_705_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_705, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_705_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_703.write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_705, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_714_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_714, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_714_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_712.write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_714, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_696_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_696, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_696_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_694.write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_696, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_702_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_702, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_702_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_700.write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_702, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_711_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_711, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_709.write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_711, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693_to_gp_gray_2_buf445_avg452_950.write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_706.write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_715.write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_699_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_699, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_699_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_697.write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_699, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline hw_uint<32>  gp_gray_2_buf445_avg452_950_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_avg452_950 read pattern: { avg452[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693_to_gp_gray_2_buf445_avg452_950.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_693;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_interp475_983_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2_buf445_interpolate_lp472473, int gp_gray_2_buf445_interpolate_lp472474, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_interp475_983 read pattern: { interp475[root = 0, gp_gray_2_buf445_interpolate_lp472473, gp_gray_2_buf445_interpolate_lp472474] -> gp_gray_2_buf445[gp_gray_2_buf445_interpolate_lp472474, gp_gray_2_buf445_interpolate_lp472473] : 0 <= gp_gray_2_buf445_interpolate_lp472473 <= 63 and 0 <= gp_gray_2_buf445_interpolate_lp472474 <= 63 }
  auto value_gp_gray_2_buf445_avg452_949 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_949_to_gp_gray_2_buf445_interp475_983.read(/*ram type address*/ (gp_gray_2_buf445_interpolate_lp472474 - -1) * 1 + (gp_gray_2_buf445_interpolate_lp472473 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_949;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_706_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_706 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_01119[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_706.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_708;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_715_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_715 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_11125[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_715.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_585;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_697_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_697 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448__m_11113[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
