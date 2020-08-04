#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h
#include "local_laplacian_filters_compute.h"

#include "hw_classes.h"

struct color_in_pw_math_color_in_int59_730_to_color_in_cc511_879_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_730_to_color_in_cc511_879_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_730_to_color_in_cc511_879_cache() {
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

struct color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_735_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_735_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_735_cache() {
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

struct color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_736_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_736_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_736_cache() {
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

struct color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_737_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_737_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_737_cache() {
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
  color_in_pw_math_color_in_int59_730_to_color_in_cc511_879_cache color_in_pw_math_color_in_int59_730_to_color_in_cc511_879;
  color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_735_cache color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_735;
  color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_736_cache color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_736;
  color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_737_cache color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_737;
};



inline void color_in_pw_math_color_in_int59_730_write(hw_uint<32> & color_in_pw_math_color_in_int59_730, color_in_cache& color_in, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
  color_in.color_in_pw_math_color_in_int59_730_to_color_in_cc511_879.write(color_in_pw_math_color_in_int59_730, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  color_in.color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_735.write(color_in_pw_math_color_in_int59_730, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  color_in.color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_736.write(color_in_pw_math_color_in_int59_730, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  color_in.color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_737.write(color_in_pw_math_color_in_int59_730, (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
}

inline hw_uint<32>  color_in_cc511_879_select(color_in_cache& color_in, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_cc511_879 read pattern: { cc511[root = 0, color_out_float_to_color508, color_out_float_to_color509, color_out_float_to_color510] -> color_in[color_out_float_to_color510, color_out_float_to_color509, color_out_float_to_color508] : 0 <= color_out_float_to_color508 <= 255 and 0 <= color_out_float_to_color509 <= 255 and 0 <= color_out_float_to_color510 <= 2 }
  auto value_color_in_pw_math_color_in_int59_730 = color_in.color_in_pw_math_color_in_int59_730_to_color_in_cc511_879.read(/*ram type address*/ (color_out_float_to_color510 - 0) * 1 + (color_out_float_to_color509 - -7) * 3 + (color_out_float_to_color508 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_730;
  return 0;
}

inline hw_uint<32>  color_in_to_gray12_735_select(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_to_gray12_735 read pattern: { to_gray12[root = 0, color_in_to_gray10, color_in_to_gray11] -> color_in[0, color_in_to_gray11, color_in_to_gray10] : -7 <= color_in_to_gray10 <= 255 and -7 <= color_in_to_gray11 <= 255 }
  auto value_color_in_pw_math_color_in_int59_730 = color_in.color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_735.read(/*ram type address*/ (0 - 0) * 1 + (color_in_to_gray11 - -7) * 3 + (color_in_to_gray10 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_730;
  return 0;
}

inline hw_uint<32>  color_in_to_gray12_736_select(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_to_gray12_736 read pattern: { to_gray12[root = 0, color_in_to_gray10, color_in_to_gray11] -> color_in[1, color_in_to_gray11, color_in_to_gray10] : -7 <= color_in_to_gray10 <= 255 and -7 <= color_in_to_gray11 <= 255 }
  auto value_color_in_pw_math_color_in_int59_730 = color_in.color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_736.read(/*ram type address*/ (1 - 0) * 1 + (color_in_to_gray11 - -7) * 3 + (color_in_to_gray10 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_730;
  return 0;
}

inline hw_uint<32>  color_in_to_gray12_737_select(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_to_gray12_737 read pattern: { to_gray12[root = 0, color_in_to_gray10, color_in_to_gray11] -> color_in[2, color_in_to_gray11, color_in_to_gray10] : -7 <= color_in_to_gray10 <= 255 and -7 <= color_in_to_gray11 <= 255 }
  auto value_color_in_pw_math_color_in_int59_730 = color_in.color_in_pw_math_color_in_int59_730_to_color_in_to_gray12_737.read(/*ram type address*/ (2 - 0) * 1 + (color_in_to_gray11 - -7) * 3 + (color_in_to_gray10 - -7) * 789);
  return value_color_in_pw_math_color_in_int59_730;
  return 0;
}

// # of bundles = 3
// cc511_read
//	color_in_cc511_879
inline hw_uint<32> color_in_cc511_read_bundle_read(color_in_cache& color_in, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
  // # of ports in bundle: 1
    // color_in_cc511_879

	hw_uint<32> result;
	hw_uint<32>  color_in_cc511_879_res = color_in_cc511_879_select(color_in, root, color_out_float_to_color508, color_out_float_to_color509, color_out_float_to_color510, dynamic_address);
	set_at<0, 32>(result, color_in_cc511_879_res);
	return result;
}

// pw_math_color_in_int59_write
//	color_in_pw_math_color_in_int59_730
inline void color_in_pw_math_color_in_int59_write_bundle_write(hw_uint<32>& pw_math_color_in_int59_write, color_in_cache& color_in, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
	hw_uint<32>  color_in_pw_math_color_in_int59_730_res = pw_math_color_in_int59_write.extract<0, 31>();
	color_in_pw_math_color_in_int59_730_write(color_in_pw_math_color_in_int59_730_res, color_in, root, pw_math_color_in_int56, pw_math_color_in_int57, pw_math_color_in_int58, dynamic_address);
}

// to_gray12_read
//	color_in_to_gray12_735
//	color_in_to_gray12_736
//	color_in_to_gray12_737
inline hw_uint<96> color_in_to_gray12_read_bundle_read(color_in_cache& color_in, int root, int color_in_to_gray10, int color_in_to_gray11, int dynamic_address) {
  // # of ports in bundle: 3
    // color_in_to_gray12_735
    // color_in_to_gray12_736
    // color_in_to_gray12_737

	hw_uint<96> result;
	hw_uint<32>  color_in_to_gray12_735_res = color_in_to_gray12_735_select(color_in, root, color_in_to_gray10, color_in_to_gray11, dynamic_address);
	set_at<0, 96>(result, color_in_to_gray12_735_res);
	hw_uint<32>  color_in_to_gray12_736_res = color_in_to_gray12_736_select(color_in, root, color_in_to_gray10, color_in_to_gray11, dynamic_address);
	set_at<32, 96>(result, color_in_to_gray12_736_res);
	hw_uint<32>  color_in_to_gray12_737_res = color_in_to_gray12_737_select(color_in, root, color_in_to_gray10, color_in_to_gray11, dynamic_address);
	set_at<64, 96>(result, color_in_to_gray12_737_res);
	return result;
}

#include "hw_classes.h"

struct color_in_int_oc_load_color_in_oc04_732_to_color_in_int_pw_math_color_in_int59_731_cache {
	// RAM Box: {[0, 2], [-7, 255], [-7, 255]}
	// Capacity: 207507
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[207507];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_in_int_oc_load_color_in_oc04_732_to_color_in_int_pw_math_color_in_int59_731_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*207507);
  }
  ~color_in_int_oc_load_color_in_oc04_732_to_color_in_int_pw_math_color_in_int59_731_cache() {
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
  color_in_int_oc_load_color_in_oc04_732_to_color_in_int_pw_math_color_in_int59_731_cache color_in_int_oc_load_color_in_oc04_732_to_color_in_int_pw_math_color_in_int59_731;
};



inline void color_in_int_oc_load_color_in_oc04_732_write(hw_uint<32> & color_in_int_oc_load_color_in_oc04_732, color_in_int_cache& color_in_int, int root, int oc_load_color_in_oc01, int oc_load_color_in_oc02, int oc_load_color_in_oc03, int dynamic_address) {
  color_in_int.color_in_int_oc_load_color_in_oc04_732_to_color_in_int_pw_math_color_in_int59_731.write(color_in_int_oc_load_color_in_oc04_732, (oc_load_color_in_oc03 - 0) * 1 + (oc_load_color_in_oc02 - -7) * 3 + (oc_load_color_in_oc01 - -7) * 789);
}

inline hw_uint<32>  color_in_int_pw_math_color_in_int59_731_select(color_in_int_cache& color_in_int, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_in_int_pw_math_color_in_int59_731 read pattern: { pw_math_color_in_int59[root = 0, pw_math_color_in_int56, pw_math_color_in_int57, pw_math_color_in_int58] -> color_in_int[pw_math_color_in_int58, pw_math_color_in_int57, pw_math_color_in_int56] : -7 <= pw_math_color_in_int56 <= 255 and -7 <= pw_math_color_in_int57 <= 255 and 0 <= pw_math_color_in_int58 <= 2 }
  auto value_color_in_int_oc_load_color_in_oc04_732 = color_in_int.color_in_int_oc_load_color_in_oc04_732_to_color_in_int_pw_math_color_in_int59_731.read(/*ram type address*/ (pw_math_color_in_int58 - 0) * 1 + (pw_math_color_in_int57 - -7) * 3 + (pw_math_color_in_int56 - -7) * 789);
  return value_color_in_int_oc_load_color_in_oc04_732;
  return 0;
}

// # of bundles = 2
// oc_load_color_in_oc04_write
//	color_in_int_oc_load_color_in_oc04_732
inline void color_in_int_oc_load_color_in_oc04_write_bundle_write(hw_uint<32>& oc_load_color_in_oc04_write, color_in_int_cache& color_in_int, int root, int oc_load_color_in_oc01, int oc_load_color_in_oc02, int oc_load_color_in_oc03, int dynamic_address) {
	hw_uint<32>  color_in_int_oc_load_color_in_oc04_732_res = oc_load_color_in_oc04_write.extract<0, 31>();
	color_in_int_oc_load_color_in_oc04_732_write(color_in_int_oc_load_color_in_oc04_732_res, color_in_int, root, oc_load_color_in_oc01, oc_load_color_in_oc02, oc_load_color_in_oc03, dynamic_address);
}

// pw_math_color_in_int59_read
//	color_in_int_pw_math_color_in_int59_731
inline hw_uint<32> color_in_int_pw_math_color_in_int59_read_bundle_read(color_in_int_cache& color_in_int, int root, int pw_math_color_in_int56, int pw_math_color_in_int57, int pw_math_color_in_int58, int dynamic_address) {
  // # of ports in bundle: 1
    // color_in_int_pw_math_color_in_int59_731

	hw_uint<32> result;
	hw_uint<32>  color_in_int_pw_math_color_in_int59_731_res = color_in_int_pw_math_color_in_int59_731_select(color_in_int, root, pw_math_color_in_int56, pw_math_color_in_int57, pw_math_color_in_int58, dynamic_address);
	set_at<0, 32>(result, color_in_int_pw_math_color_in_int59_731_res);
	return result;
}

#include "hw_classes.h"

struct color_out_float_cc511_877_to_color_out_float_pw_math_color_out_float512516_882_cache {
	// RAM Box: {[0, 2], [0, 255], [0, 255]}
	// Capacity: 196608
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[196608];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  color_out_float_cc511_877_to_color_out_float_pw_math_color_out_float512516_882_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*196608);
  }
  ~color_out_float_cc511_877_to_color_out_float_pw_math_color_out_float512516_882_cache() {
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
  color_out_float_cc511_877_to_color_out_float_pw_math_color_out_float512516_882_cache color_out_float_cc511_877_to_color_out_float_pw_math_color_out_float512516_882;
};



inline void color_out_float_cc511_877_write(hw_uint<32> & color_out_float_cc511_877, color_out_float_cache& color_out_float, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
  color_out_float.color_out_float_cc511_877_to_color_out_float_pw_math_color_out_float512516_882.write(color_out_float_cc511_877, (color_out_float_to_color510 - 0) * 1 + (color_out_float_to_color509 - 0) * 3 + (color_out_float_to_color508 - 0) * 768);
}

inline hw_uint<32>  color_out_float_pw_math_color_out_float512516_882_select(color_out_float_cache& color_out_float, int root, int pw_math_color_out_float512513, int pw_math_color_out_float512514, int pw_math_color_out_float512515, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // color_out_float_pw_math_color_out_float512516_882 read pattern: { pw_math_color_out_float512516[root = 0, pw_math_color_out_float512513, pw_math_color_out_float512514, pw_math_color_out_float512515] -> color_out_float[pw_math_color_out_float512515, pw_math_color_out_float512514, pw_math_color_out_float512513] : 0 <= pw_math_color_out_float512513 <= 255 and 0 <= pw_math_color_out_float512514 <= 255 and 0 <= pw_math_color_out_float512515 <= 2 }
  auto value_color_out_float_cc511_877 = color_out_float.color_out_float_cc511_877_to_color_out_float_pw_math_color_out_float512516_882.read(/*ram type address*/ (pw_math_color_out_float512515 - 0) * 1 + (pw_math_color_out_float512514 - 0) * 3 + (pw_math_color_out_float512513 - 0) * 768);
  return value_color_out_float_cc511_877;
  return 0;
}

// # of bundles = 2
// cc511_write
//	color_out_float_cc511_877
inline void color_out_float_cc511_write_bundle_write(hw_uint<32>& cc511_write, color_out_float_cache& color_out_float, int root, int color_out_float_to_color508, int color_out_float_to_color509, int color_out_float_to_color510, int dynamic_address) {
	hw_uint<32>  color_out_float_cc511_877_res = cc511_write.extract<0, 31>();
	color_out_float_cc511_877_write(color_out_float_cc511_877_res, color_out_float, root, color_out_float_to_color508, color_out_float_to_color509, color_out_float_to_color510, dynamic_address);
}

// pw_math_color_out_float512516_read
//	color_out_float_pw_math_color_out_float512516_882
inline hw_uint<32> color_out_float_pw_math_color_out_float512516_read_bundle_read(color_out_float_cache& color_out_float, int root, int pw_math_color_out_float512513, int pw_math_color_out_float512514, int pw_math_color_out_float512515, int dynamic_address) {
  // # of ports in bundle: 1
    // color_out_float_pw_math_color_out_float512516_882

	hw_uint<32> result;
	hw_uint<32>  color_out_float_pw_math_color_out_float512516_882_res = color_out_float_pw_math_color_out_float512516_882_select(color_out_float, root, pw_math_color_out_float512513, pw_math_color_out_float512514, pw_math_color_out_float512515, dynamic_address);
	set_at<0, 32>(result, color_out_float_pw_math_color_out_float512516_882_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_1014_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_1014_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_1014_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_interp470_841_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_interp470_841_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_interp470_841_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214_cache() {
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

struct gp_gray_1_buf437_init442_1012_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_init442_1012_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_init442_1012_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217_cache() {
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

struct gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428_cache() {
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

struct gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416_cache {
	// RAM Box: {[-3, 127], [-3, 127]}
	// Capacity: 17161
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[17161];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*17161);
  }
  ~gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416_cache() {
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
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_1014_cache gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_1014;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_interp470_841_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_interp470_841;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211_cache gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457_cache gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457;
  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451_cache gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598_cache gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454_cache gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454;
  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_cache gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214_cache gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214;
  gp_gray_1_buf437_init442_1012_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217_cache gp_gray_1_buf437_init442_1012_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217;
  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_cache gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428;
  gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416_cache gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416;
};



inline void gp_gray_1_buf437_avg444_1013_write(hw_uint<32> & gp_gray_1_buf437_avg444_1013, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_interp470_841.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416.write(gp_gray_1_buf437_avg444_1013, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_init442_1012_write(hw_uint<32> & gp_gray_1_buf437_init442_1012, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_init442_1012_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217.write(gp_gray_1_buf437_init442_1012, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598.write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454.write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724.write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727.write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214.write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_1014.write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211.write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457.write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_write(hw_uint<32> & gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451.write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726, (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
}

inline hw_uint<32>  gp_gray_1_buf437_avg444_1014_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_avg444_1014 read pattern: { avg444[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723_to_gp_gray_1_buf437_avg444_1014.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_723;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_interp470_841_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interp470_841 read pattern: { interp470[root = 0, gp_gray_1_buf437_interpolate_lp467468, gp_gray_1_buf437_interpolate_lp467469] -> gp_gray_1_buf437[gp_gray_1_buf437_interpolate_lp467469, gp_gray_1_buf437_interpolate_lp467468] : 0 <= gp_gray_1_buf437_interpolate_lp467468 <= 127 and 0 <= gp_gray_1_buf437_interpolate_lp467469 <= 127 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_interp470_841.read(/*ram type address*/ (gp_gray_1_buf437_interpolate_lp467469 - -3) * 1 + (gp_gray_1_buf437_interpolate_lp467468 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211 read pattern: { update443_gp_gray_1441_0525_gp_gray_1440_01155[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457 read pattern: { update443_gp_gray_1441_0525_gp_gray_1440_11161[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451 read pattern: { update443_gp_gray_1441_0525_gp_gray_1440__m_11149[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726_to_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_726;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598 read pattern: { update443_gp_gray_1441_1527_gp_gray_1440_01153[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454 read pattern: { update443_gp_gray_1441_1527_gp_gray_1440_11159[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724 read pattern: { update443_gp_gray_1441_1527_gp_gray_1440__m_11147[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_to_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_724.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214 read pattern: { update443_gp_gray_1441__m_1523_gp_gray_1440_01157[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217 read pattern: { update443_gp_gray_1441__m_1523_gp_gray_1440_11163[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_init442_1012 = gp_gray_1_buf437.gp_gray_1_buf437_init442_1012_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_init442_1012;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727 read pattern: { update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151[root = 0, gp_gray_1438, gp_gray_1439] -> gp_gray_1_buf437[gp_gray_1439, gp_gray_1438] : -3 <= gp_gray_1438 <= 127 and -3 <= gp_gray_1439 <= 127 }
  auto value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597 = gp_gray_1_buf437.gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_to_gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_727.read(/*ram type address*/ (gp_gray_1439 - -3) * 1 + (gp_gray_1438 - -3) * 131);
  return value_gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_01119[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[2gp_gray_2447, 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419.read(/*ram type address*/ (2*gp_gray_2447 - -3) * 1 + (2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_11125[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[2gp_gray_2447, 1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425.read(/*ram type address*/ (2*gp_gray_2447 - -3) * 1 + (1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448__m_11113[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[2gp_gray_2447, -1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710.read(/*ram type address*/ (2*gp_gray_2447 - -3) * 1 + (-1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_01117[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[1 + 2gp_gray_2447, 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_01117_713.read(/*ram type address*/ (1 + 2*gp_gray_2447 - -3) * 1 + (2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_11123[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[1 + 2gp_gray_2447, 1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422.read(/*ram type address*/ (1 + 2*gp_gray_2447 - -3) * 1 + (1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448__m_11111[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[1 + 2gp_gray_2447, -1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707.read(/*ram type address*/ (1 + 2*gp_gray_2447 - -3) * 1 + (-1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_01121[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[-1 + 2gp_gray_2447, 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716.read(/*ram type address*/ (-1 + 2*gp_gray_2447 - -3) * 1 + (2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_11127[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[-1 + 2gp_gray_2447, 1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428.read(/*ram type address*/ (-1 + 2*gp_gray_2447 - -3) * 1 + (1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416_select(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_1_buf437[-1 + 2gp_gray_2447, -1 + 2gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_1_buf437_avg444_1013 = gp_gray_1_buf437.gp_gray_1_buf437_avg444_1013_to_gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416.read(/*ram type address*/ (-1 + 2*gp_gray_2447 - -3) * 1 + (-1 + 2*gp_gray_2446 - -3) * 131);
  return value_gp_gray_1_buf437_avg444_1013;
  return 0;
}

// # of bundles = 31
// avg444_read
//	gp_gray_1_buf437_avg444_1014
inline hw_uint<32> gp_gray_1_buf437_avg444_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_avg444_1014

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_avg444_1014_res = gp_gray_1_buf437_avg444_1014_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_avg444_1014_res);
	return result;
}

// avg444_write
//	gp_gray_1_buf437_avg444_1013
inline void gp_gray_1_buf437_avg444_write_bundle_write(hw_uint<32>& avg444_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_avg444_1013_res = avg444_write.extract<0, 31>();
	gp_gray_1_buf437_avg444_1013_write(gp_gray_1_buf437_avg444_1013_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// init442_write
//	gp_gray_1_buf437_init442_1012
inline void gp_gray_1_buf437_init442_write_bundle_write(hw_uint<32>& init442_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_init442_1012_res = init442_write.extract<0, 31>();
	gp_gray_1_buf437_init442_1012_write(gp_gray_1_buf437_init442_1012_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// interp470_read
//	gp_gray_1_buf437_interp470_841
inline hw_uint<32> gp_gray_1_buf437_interp470_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interp470_841

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interp470_841_res = gp_gray_1_buf437_interp470_841_select(gp_gray_1_buf437, root, gp_gray_1_buf437_interpolate_lp467468, gp_gray_1_buf437_interpolate_lp467469, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interp470_841_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440_01155_read
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211_res = gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_211_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440_01155_write
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210
inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_0525_gp_gray_1440_01155_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_res = update443_gp_gray_1441_0525_gp_gray_1440_01155_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_01155_210_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_0525_gp_gray_1440_11161_read
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457_res = gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_457_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440_11161_write
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456
inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_0525_gp_gray_1440_11161_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_res = update443_gp_gray_1441_0525_gp_gray_1440_11161_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440_11161_456_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_0525_gp_gray_1440__m_11149_read
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451_res = gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_451_res);
	return result;
}

// update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write
//	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450
inline void gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_res = update443_gp_gray_1441_0525_gp_gray_1440__m_11149_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_write(gp_gray_1_buf437_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_450_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_1527_gp_gray_1440_01153_read
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598_res = gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_598_res);
	return result;
}

// update443_gp_gray_1441_1527_gp_gray_1440_01153_write
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597
inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_1527_gp_gray_1440_01153_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_res = update443_gp_gray_1441_1527_gp_gray_1440_01153_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_01153_597_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441_1527_gp_gray_1440_11159_read
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454_res = gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_454_res);
	return result;
}

// update443_gp_gray_1441_1527_gp_gray_1440_11159_write
//	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453
inline void gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_write_bundle_write(hw_uint<32>& update443_gp_gray_1441_1527_gp_gray_1440_11159_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_res = update443_gp_gray_1441_1527_gp_gray_1440_11159_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_write(gp_gray_1_buf437_update443_gp_gray_1441_1527_gp_gray_1440_11159_453_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
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
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214_res = gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_214_res);
	return result;
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213
inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write_bundle_write(hw_uint<32>& update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_res = update443_gp_gray_1441__m_1523_gp_gray_1440_01157_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_213_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_11163_read
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217
inline hw_uint<32> gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217_res = gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217_select(gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_217_res);
	return result;
}

// update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write
//	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216
inline void gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write_bundle_write(hw_uint<32>& update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write, gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_1438, int gp_gray_1439, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_res = update443_gp_gray_1441__m_1523_gp_gray_1440_11163_write.extract<0, 31>();
	gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_write(gp_gray_1_buf437_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_216_res, gp_gray_1_buf437, root, gp_gray_1438, gp_gray_1439, dynamic_address);
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
//	gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419_res = gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_01119_419_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448_11125_read
//	gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425_res = gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448_11125_425_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448__m_11113_read
//	gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710_res = gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_710_res);
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
//	gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422_res = gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448_11123_422_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448__m_11111_read
//	gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707_res = gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_707_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_01121_read
//	gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716_res = gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_716_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_11127_read
//	gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428_res = gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_428_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_read
//	gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416
inline hw_uint<32> gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_read_bundle_read(gp_gray_1_buf437_cache& gp_gray_1_buf437, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416_res = gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416_select(gp_gray_1_buf437, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_416_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_interpolated466_interp470_832_to_gp_gray_1_buf437_interpolated466_rc498_870_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 16384
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[16384];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_interpolated466_interp470_832_to_gp_gray_1_buf437_interpolated466_rc498_870_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*16384);
  }
  ~gp_gray_1_buf437_interpolated466_interp470_832_to_gp_gray_1_buf437_interpolated466_rc498_870_cache() {
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
  gp_gray_1_buf437_interpolated466_interp470_832_to_gp_gray_1_buf437_interpolated466_rc498_870_cache gp_gray_1_buf437_interpolated466_interp470_832_to_gp_gray_1_buf437_interpolated466_rc498_870;
};



inline void gp_gray_1_buf437_interpolated466_interp470_832_write(hw_uint<32> & gp_gray_1_buf437_interpolated466_interp470_832, gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
  gp_gray_1_buf437_interpolated466.gp_gray_1_buf437_interpolated466_interp470_832_to_gp_gray_1_buf437_interpolated466_rc498_870.write(gp_gray_1_buf437_interpolated466_interp470_832, (gp_gray_1_buf437_interpolate_lp467469 - 0) * 1 + (gp_gray_1_buf437_interpolate_lp467468 - 0) * 128);
}

inline hw_uint<32>  gp_gray_1_buf437_interpolated466_rc498_870_select(gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interpolated466_rc498_870 read pattern: { rc498[root = 0, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492] -> gp_gray_1_buf437_interpolated466[gp_gray_1_buf437_interpolated466_reconstruct_lp490492, gp_gray_1_buf437_interpolated466_reconstruct_lp490491] : 0 <= gp_gray_1_buf437_interpolated466_reconstruct_lp490491 <= 127 and 0 <= gp_gray_1_buf437_interpolated466_reconstruct_lp490492 <= 127 }
  auto value_gp_gray_1_buf437_interpolated466_interp470_832 = gp_gray_1_buf437_interpolated466.gp_gray_1_buf437_interpolated466_interp470_832_to_gp_gray_1_buf437_interpolated466_rc498_870.read(/*ram type address*/ (gp_gray_1_buf437_interpolated466_reconstruct_lp490492 - 0) * 1 + (gp_gray_1_buf437_interpolated466_reconstruct_lp490491 - 0) * 128);
  return value_gp_gray_1_buf437_interpolated466_interp470_832;
  return 0;
}

// # of bundles = 2
// interp470_write
//	gp_gray_1_buf437_interpolated466_interp470_832
inline void gp_gray_1_buf437_interpolated466_interp470_write_bundle_write(hw_uint<32>& interp470_write, gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolate_lp467468, int gp_gray_1_buf437_interpolate_lp467469, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_interpolated466_interp470_832_res = interp470_write.extract<0, 31>();
	gp_gray_1_buf437_interpolated466_interp470_832_write(gp_gray_1_buf437_interpolated466_interp470_832_res, gp_gray_1_buf437_interpolated466, root, gp_gray_1_buf437_interpolate_lp467468, gp_gray_1_buf437_interpolate_lp467469, dynamic_address);
}

// rc498_read
//	gp_gray_1_buf437_interpolated466_rc498_870
inline hw_uint<32> gp_gray_1_buf437_interpolated466_rc498_read_bundle_read(gp_gray_1_buf437_interpolated466_cache& gp_gray_1_buf437_interpolated466, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interpolated466_rc498_870

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interpolated466_rc498_870_res = gp_gray_1_buf437_interpolated466_rc498_870_select(gp_gray_1_buf437_interpolated466, root, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interpolated466_rc498_870_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 16384
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[16384];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*16384);
  }
  ~gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873_cache() {
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
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873_cache gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873;
};



inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_write(hw_uint<32> & gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873.write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869, (gp_gray_1_buf437_interpolated466_reconstruct_lp490492 - 0) * 1 + (gp_gray_1_buf437_interpolated466_reconstruct_lp490491 - 0) * 128);
}

inline hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873 read pattern: { us506[root = 0, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505] -> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493[o0, o1] : 0 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 <= 255 and 0 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 <= 255 and -1 + us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 <= 2o0 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 and -1 + us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 <= 2o1 <= us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 }
  auto value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869 = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873.read(/*ram type address*/ (floord(us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, 2) - 0) * 1 + (floord(us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, 2) - 0) * 128);
  return value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869;
  return 0;
}

// # of bundles = 2
// rc498_write
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869
inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_write_bundle_write(hw_uint<32>& rc498_write, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_res = rc498_write.extract<0, 31>();
	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_rc498_869_res, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, root, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492, dynamic_address);
}

// us506_read
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873
inline hw_uint<32> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_read_bundle_read(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873_res = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493, root, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us506_873_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 65536
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[65536];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*65536);
  }
  ~gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876_cache() {
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
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876_cache gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876;
};



inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_write(hw_uint<32> & gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876.write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872, (us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505 - 0) * 1 + (us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504 - 0) * 256);
}

inline hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int gray_interpolated461_reconstruct_lp499500, int gray_interpolated461_reconstruct_lp499501, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876 read pattern: { rc507[root = 0, gray_interpolated461_reconstruct_lp499500, gray_interpolated461_reconstruct_lp499501] -> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503[gray_interpolated461_reconstruct_lp499501, gray_interpolated461_reconstruct_lp499500] : 0 <= gray_interpolated461_reconstruct_lp499500 <= 255 and 0 <= gray_interpolated461_reconstruct_lp499501 <= 255 }
  auto value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872 = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503.gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_to_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876.read(/*ram type address*/ (gray_interpolated461_reconstruct_lp499501 - 0) * 1 + (gray_interpolated461_reconstruct_lp499500 - 0) * 256);
  return value_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872;
  return 0;
}

// # of bundles = 2
// rc507_read
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876
inline hw_uint<32> gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_read_bundle_read(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int gray_interpolated461_reconstruct_lp499500, int gray_interpolated461_reconstruct_lp499501, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876

	hw_uint<32> result;
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876_res = gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876_select(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, root, gray_interpolated461_reconstruct_lp499500, gray_interpolated461_reconstruct_lp499501, dynamic_address);
	set_at<0, 32>(result, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_rc507_876_res);
	return result;
}

// us506_write
//	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872
inline void gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_write_bundle_write(hw_uint<32>& us506_write, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_cache& gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, int root, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, int us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_res = us506_write.extract<0, 31>();
	gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_write(gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503_us506_872_res, gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493_us503, root, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493504, us_gp_gray_1_buf437_interpolated466_reconstruct_lp490_buf493505, dynamic_address);
}

#include "hw_classes.h"

struct gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_to_gp_gray_2_buf445_avg452_818_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_to_gp_gray_2_buf445_avg452_818_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_to_gp_gray_2_buf445_avg452_818_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_interp475_851_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_interp475_851_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_interp475_851_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715_cache() {
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

struct gp_gray_2_buf445_init450_816_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_init450_816_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_init450_816_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427_cache() {
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

struct gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209_cache() {
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

struct gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584_cache {
	// RAM Box: {[-1, 63], [-1, 63]}
	// Capacity: 4225
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4225];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4225);
  }
  ~gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584_cache() {
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
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_to_gp_gray_2_buf445_avg452_818_cache gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_to_gp_gray_2_buf445_avg452_818;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_interp475_851_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_interp475_851;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418_cache gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424_cache gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424;
  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709_cache gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_cache gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421_cache gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421;
  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706_cache gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715_cache gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715;
  gp_gray_2_buf445_init450_816_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427_cache gp_gray_2_buf445_init450_816_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427;
  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415_cache gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209;
  gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584_cache gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584;
};



inline void gp_gray_2_buf445_avg452_817_write(hw_uint<32> & gp_gray_2_buf445_avg452_817, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_interp475_851.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584.write(gp_gray_2_buf445_avg452_817, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_init450_816_write(hw_uint<32> & gp_gray_2_buf445_init450_816, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_init450_816_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427.write(gp_gray_2_buf445_init450_816, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712.write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421.write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706.write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415.write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715.write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_to_gp_gray_2_buf445_avg452_818.write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418.write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424.write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_write(hw_uint<32> & gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709.write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414, (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
}

inline hw_uint<32>  gp_gray_2_buf445_avg452_818_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_avg452_818 read pattern: { avg452[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_to_gp_gray_2_buf445_avg452_818.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_interp475_851_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2_buf445_interpolate_lp472473, int gp_gray_2_buf445_interpolate_lp472474, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_interp475_851 read pattern: { interp475[root = 0, gp_gray_2_buf445_interpolate_lp472473, gp_gray_2_buf445_interpolate_lp472474] -> gp_gray_2_buf445[gp_gray_2_buf445_interpolate_lp472474, gp_gray_2_buf445_interpolate_lp472473] : 0 <= gp_gray_2_buf445_interpolate_lp472473 <= 63 and 0 <= gp_gray_2_buf445_interpolate_lp472474 <= 63 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_interp475_851.read(/*ram type address*/ (gp_gray_2_buf445_interpolate_lp472474 - -1) * 1 + (gp_gray_2_buf445_interpolate_lp472473 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_01119[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448_11125[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709 read pattern: { update451_gp_gray_2449_0537_gp_gray_2448__m_11113[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_to_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_01117[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448_11123[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706 read pattern: { update451_gp_gray_2449_1539_gp_gray_2448__m_11111[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_to_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_01121[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448_11127[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_init450_816 = gp_gray_2_buf445.gp_gray_2_buf445_init450_816_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_init450_816;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415 read pattern: { update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115[root = 0, gp_gray_2446, gp_gray_2447] -> gp_gray_2_buf445[gp_gray_2447, gp_gray_2446] : -1 <= gp_gray_2446 <= 63 and -1 <= gp_gray_2447 <= 63 }
  auto value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711 = gp_gray_2_buf445.gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_to_gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415.read(/*ram type address*/ (gp_gray_2447 - -1) * 1 + (gp_gray_2446 - -1) * 65);
  return value_gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203 read pattern: { update459_gp_gray_3457_0549_gp_gray_3456_01083[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[2gp_gray_3455, 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203.read(/*ram type address*/ (2*gp_gray_3455 - -1) * 1 + (2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206 read pattern: { update459_gp_gray_3457_0549_gp_gray_3456_11089[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[2gp_gray_3455, 1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206.read(/*ram type address*/ (2*gp_gray_3455 - -1) * 1 + (1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197 read pattern: { update459_gp_gray_3457_0549_gp_gray_3456__m_11077[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[2gp_gray_3455, -1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197.read(/*ram type address*/ (2*gp_gray_3455 - -1) * 1 + (-1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200 read pattern: { update459_gp_gray_3457_1551_gp_gray_3456_01081[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[1 + 2gp_gray_3455, 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200.read(/*ram type address*/ (1 + 2*gp_gray_3455 - -1) * 1 + (2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590 read pattern: { update459_gp_gray_3457_1551_gp_gray_3456_11087[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[1 + 2gp_gray_3455, 1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590.read(/*ram type address*/ (1 + 2*gp_gray_3455 - -1) * 1 + (1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194 read pattern: { update459_gp_gray_3457_1551_gp_gray_3456__m_11075[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[1 + 2gp_gray_3455, -1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194.read(/*ram type address*/ (1 + 2*gp_gray_3455 - -1) * 1 + (-1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587 read pattern: { update459_gp_gray_3457__m_1547_gp_gray_3456_01085[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[-1 + 2gp_gray_3455, 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587.read(/*ram type address*/ (-1 + 2*gp_gray_3455 - -1) * 1 + (2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209 read pattern: { update459_gp_gray_3457__m_1547_gp_gray_3456_11091[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[-1 + 2gp_gray_3455, 1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209.read(/*ram type address*/ (-1 + 2*gp_gray_3455 - -1) * 1 + (1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

inline hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584_select(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584 read pattern: { update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079[root = 0, gp_gray_3454, gp_gray_3455] -> gp_gray_2_buf445[-1 + 2gp_gray_3455, -1 + 2gp_gray_3454] : 0 <= gp_gray_3454 <= 31 and 0 <= gp_gray_3455 <= 31 }
  auto value_gp_gray_2_buf445_avg452_817 = gp_gray_2_buf445.gp_gray_2_buf445_avg452_817_to_gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584.read(/*ram type address*/ (-1 + 2*gp_gray_3455 - -1) * 1 + (-1 + 2*gp_gray_3454 - -1) * 65);
  return value_gp_gray_2_buf445_avg452_817;
  return 0;
}

// # of bundles = 31
// avg452_read
//	gp_gray_2_buf445_avg452_818
inline hw_uint<32> gp_gray_2_buf445_avg452_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_avg452_818

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_avg452_818_res = gp_gray_2_buf445_avg452_818_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_avg452_818_res);
	return result;
}

// avg452_write
//	gp_gray_2_buf445_avg452_817
inline void gp_gray_2_buf445_avg452_write_bundle_write(hw_uint<32>& avg452_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_avg452_817_res = avg452_write.extract<0, 31>();
	gp_gray_2_buf445_avg452_817_write(gp_gray_2_buf445_avg452_817_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// init450_write
//	gp_gray_2_buf445_init450_816
inline void gp_gray_2_buf445_init450_write_bundle_write(hw_uint<32>& init450_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_init450_816_res = init450_write.extract<0, 31>();
	gp_gray_2_buf445_init450_816_write(gp_gray_2_buf445_init450_816_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// interp475_read
//	gp_gray_2_buf445_interp475_851
inline hw_uint<32> gp_gray_2_buf445_interp475_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2_buf445_interpolate_lp472473, int gp_gray_2_buf445_interpolate_lp472474, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_interp475_851

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_interp475_851_res = gp_gray_2_buf445_interp475_851_select(gp_gray_2_buf445, root, gp_gray_2_buf445_interpolate_lp472473, gp_gray_2_buf445_interpolate_lp472474, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_interp475_851_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448_01119_read
//	gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418
inline hw_uint<32> gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418_res = gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_418_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448_01119_write
//	gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417
inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_write_bundle_write(hw_uint<32>& update451_gp_gray_2449_0537_gp_gray_2448_01119_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_res = update451_gp_gray_2449_0537_gp_gray_2448_01119_write.extract<0, 31>();
	gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_01119_417_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// update451_gp_gray_2449_0537_gp_gray_2448_11125_read
//	gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424
inline hw_uint<32> gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424_res = gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_424_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448_11125_write
//	gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423
inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_write_bundle_write(hw_uint<32>& update451_gp_gray_2449_0537_gp_gray_2448_11125_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_res = update451_gp_gray_2449_0537_gp_gray_2448_11125_write.extract<0, 31>();
	gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448_11125_423_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// update451_gp_gray_2449_0537_gp_gray_2448__m_11113_read
//	gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709
inline hw_uint<32> gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709_res = gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_709_res);
	return result;
}

// update451_gp_gray_2449_0537_gp_gray_2448__m_11113_write
//	gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708
inline void gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_write_bundle_write(hw_uint<32>& update451_gp_gray_2449_0537_gp_gray_2448__m_11113_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_res = update451_gp_gray_2449_0537_gp_gray_2448__m_11113_write.extract<0, 31>();
	gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_write(gp_gray_2_buf445_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_708_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// update451_gp_gray_2449_1539_gp_gray_2448_01117_read
//	gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712
inline hw_uint<32> gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_res = gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_712_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448_01117_write
//	gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711
inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_write_bundle_write(hw_uint<32>& update451_gp_gray_2449_1539_gp_gray_2448_01117_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_res = update451_gp_gray_2449_1539_gp_gray_2448_01117_write.extract<0, 31>();
	gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_01117_711_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// update451_gp_gray_2449_1539_gp_gray_2448_11123_read
//	gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421
inline hw_uint<32> gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421_res = gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_421_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448_11123_write
//	gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420
inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_write_bundle_write(hw_uint<32>& update451_gp_gray_2449_1539_gp_gray_2448_11123_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_res = update451_gp_gray_2449_1539_gp_gray_2448_11123_write.extract<0, 31>();
	gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448_11123_420_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// update451_gp_gray_2449_1539_gp_gray_2448__m_11111_read
//	gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706
inline hw_uint<32> gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706_res = gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_706_res);
	return result;
}

// update451_gp_gray_2449_1539_gp_gray_2448__m_11111_write
//	gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705
inline void gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_write_bundle_write(hw_uint<32>& update451_gp_gray_2449_1539_gp_gray_2448__m_11111_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_res = update451_gp_gray_2449_1539_gp_gray_2448__m_11111_write.extract<0, 31>();
	gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_write(gp_gray_2_buf445_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_705_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_01121_read
//	gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715
inline hw_uint<32> gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715_res = gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_715_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_01121_write
//	gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714
inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_write_bundle_write(hw_uint<32>& update451_gp_gray_2449__m_1535_gp_gray_2448_01121_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_res = update451_gp_gray_2449__m_1535_gp_gray_2448_01121_write.extract<0, 31>();
	gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_714_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_11127_read
//	gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427
inline hw_uint<32> gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427_res = gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_427_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448_11127_write
//	gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426
inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_write_bundle_write(hw_uint<32>& update451_gp_gray_2449__m_1535_gp_gray_2448_11127_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_res = update451_gp_gray_2449__m_1535_gp_gray_2448_11127_write.extract<0, 31>();
	gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_426_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_read
//	gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415
inline hw_uint<32> gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415_res = gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415_select(gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_415_res);
	return result;
}

// update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_write
//	gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414
inline void gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_write_bundle_write(hw_uint<32>& update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_write, gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_2446, int gp_gray_2447, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_res = update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_write.extract<0, 31>();
	gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_write(gp_gray_2_buf445_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_414_res, gp_gray_2_buf445, root, gp_gray_2446, gp_gray_2447, dynamic_address);
}

// update459_gp_gray_3457_0549_gp_gray_3456_01083_read
//	gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203
inline hw_uint<32> gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203_res = gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203_select(gp_gray_2_buf445, root, gp_gray_3454, gp_gray_3455, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_01083_203_res);
	return result;
}

// update459_gp_gray_3457_0549_gp_gray_3456_11089_read
//	gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206
inline hw_uint<32> gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206_res = gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206_select(gp_gray_2_buf445, root, gp_gray_3454, gp_gray_3455, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456_11089_206_res);
	return result;
}

// update459_gp_gray_3457_0549_gp_gray_3456__m_11077_read
//	gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197
inline hw_uint<32> gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197_res = gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197_select(gp_gray_2_buf445, root, gp_gray_3454, gp_gray_3455, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_197_res);
	return result;
}

// update459_gp_gray_3457_1551_gp_gray_3456_01081_read
//	gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200
inline hw_uint<32> gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200_res = gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200_select(gp_gray_2_buf445, root, gp_gray_3454, gp_gray_3455, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_01081_200_res);
	return result;
}

// update459_gp_gray_3457_1551_gp_gray_3456_11087_read
//	gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590
inline hw_uint<32> gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590_res = gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590_select(gp_gray_2_buf445, root, gp_gray_3454, gp_gray_3455, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456_11087_590_res);
	return result;
}

// update459_gp_gray_3457_1551_gp_gray_3456__m_11075_read
//	gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194
inline hw_uint<32> gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194_res = gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194_select(gp_gray_2_buf445, root, gp_gray_3454, gp_gray_3455, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_194_res);
	return result;
}

// update459_gp_gray_3457__m_1547_gp_gray_3456_01085_read
//	gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587
inline hw_uint<32> gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587_res = gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587_select(gp_gray_2_buf445, root, gp_gray_3454, gp_gray_3455, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_587_res);
	return result;
}

// update459_gp_gray_3457__m_1547_gp_gray_3456_11091_read
//	gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209
inline hw_uint<32> gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209_res = gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209_select(gp_gray_2_buf445, root, gp_gray_3454, gp_gray_3455, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_209_res);
	return result;
}

// update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_read
//	gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584
inline hw_uint<32> gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_read_bundle_read(gp_gray_2_buf445_cache& gp_gray_2_buf445, int root, int gp_gray_3454, int gp_gray_3455, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584_res = gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584_select(gp_gray_2_buf445, root, gp_gray_3454, gp_gray_3455, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_584_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_2_buf445_interpolated471_interp475_842_to_gp_gray_2_buf445_interpolated471_rc489_865_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_interpolated471_interp475_842_to_gp_gray_2_buf445_interpolated471_rc489_865_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4096);
  }
  ~gp_gray_2_buf445_interpolated471_interp475_842_to_gp_gray_2_buf445_interpolated471_rc489_865_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
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



	inline void write(const hw_uint<32>  value, const int addr) {
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

struct gp_gray_2_buf445_interpolated471_cache {
  // # of banks: 1
  gp_gray_2_buf445_interpolated471_interp475_842_to_gp_gray_2_buf445_interpolated471_rc489_865_cache gp_gray_2_buf445_interpolated471_interp475_842_to_gp_gray_2_buf445_interpolated471_rc489_865;
};



inline void gp_gray_2_buf445_interpolated471_interp475_842_write(hw_uint<32> & gp_gray_2_buf445_interpolated471_interp475_842, gp_gray_2_buf445_interpolated471_cache& gp_gray_2_buf445_interpolated471, int root, int gp_gray_2_buf445_interpolate_lp472473, int gp_gray_2_buf445_interpolate_lp472474, int dynamic_address) {
  gp_gray_2_buf445_interpolated471.gp_gray_2_buf445_interpolated471_interp475_842_to_gp_gray_2_buf445_interpolated471_rc489_865.write(gp_gray_2_buf445_interpolated471_interp475_842, (gp_gray_2_buf445_interpolate_lp472474 - 0) * 1 + (gp_gray_2_buf445_interpolate_lp472473 - 0) * 64);
}

inline hw_uint<32>  gp_gray_2_buf445_interpolated471_rc489_865_select(gp_gray_2_buf445_interpolated471_cache& gp_gray_2_buf445_interpolated471, int root, int gp_gray_2_buf445_interpolated471_reconstruct_lp481482, int gp_gray_2_buf445_interpolated471_reconstruct_lp481483, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_interpolated471_rc489_865 read pattern: { rc489[root = 0, gp_gray_2_buf445_interpolated471_reconstruct_lp481482, gp_gray_2_buf445_interpolated471_reconstruct_lp481483] -> gp_gray_2_buf445_interpolated471[gp_gray_2_buf445_interpolated471_reconstruct_lp481483, gp_gray_2_buf445_interpolated471_reconstruct_lp481482] : 0 <= gp_gray_2_buf445_interpolated471_reconstruct_lp481482 <= 63 and 0 <= gp_gray_2_buf445_interpolated471_reconstruct_lp481483 <= 63 }
  auto value_gp_gray_2_buf445_interpolated471_interp475_842 = gp_gray_2_buf445_interpolated471.gp_gray_2_buf445_interpolated471_interp475_842_to_gp_gray_2_buf445_interpolated471_rc489_865.read(/*ram type address*/ (gp_gray_2_buf445_interpolated471_reconstruct_lp481483 - 0) * 1 + (gp_gray_2_buf445_interpolated471_reconstruct_lp481482 - 0) * 64);
  return value_gp_gray_2_buf445_interpolated471_interp475_842;
  return 0;
}

// # of bundles = 2
// interp475_write
//	gp_gray_2_buf445_interpolated471_interp475_842
inline void gp_gray_2_buf445_interpolated471_interp475_write_bundle_write(hw_uint<32>& interp475_write, gp_gray_2_buf445_interpolated471_cache& gp_gray_2_buf445_interpolated471, int root, int gp_gray_2_buf445_interpolate_lp472473, int gp_gray_2_buf445_interpolate_lp472474, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_interpolated471_interp475_842_res = interp475_write.extract<0, 31>();
	gp_gray_2_buf445_interpolated471_interp475_842_write(gp_gray_2_buf445_interpolated471_interp475_842_res, gp_gray_2_buf445_interpolated471, root, gp_gray_2_buf445_interpolate_lp472473, gp_gray_2_buf445_interpolate_lp472474, dynamic_address);
}

// rc489_read
//	gp_gray_2_buf445_interpolated471_rc489_865
inline hw_uint<32> gp_gray_2_buf445_interpolated471_rc489_read_bundle_read(gp_gray_2_buf445_interpolated471_cache& gp_gray_2_buf445_interpolated471, int root, int gp_gray_2_buf445_interpolated471_reconstruct_lp481482, int gp_gray_2_buf445_interpolated471_reconstruct_lp481483, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_interpolated471_rc489_865

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_interpolated471_rc489_865_res = gp_gray_2_buf445_interpolated471_rc489_865_select(gp_gray_2_buf445_interpolated471, root, gp_gray_2_buf445_interpolated471_reconstruct_lp481482, gp_gray_2_buf445_interpolated471_reconstruct_lp481483, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_interpolated471_rc489_865_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*4096);
  }
  ~gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<32>  read(const int addr) {
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



	inline void write(const hw_uint<32>  value, const int addr) {
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

struct gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_cache {
  // # of banks: 1
  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868_cache gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868;
};



inline void gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_write(hw_uint<32> & gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864, gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_cache& gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484, int root, int gp_gray_2_buf445_interpolated471_reconstruct_lp481482, int gp_gray_2_buf445_interpolated471_reconstruct_lp481483, int dynamic_address) {
  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484.gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868.write(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864, (gp_gray_2_buf445_interpolated471_reconstruct_lp481483 - 0) * 1 + (gp_gray_2_buf445_interpolated471_reconstruct_lp481482 - 0) * 64);
}

inline hw_uint<32>  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868_select(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_cache& gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484, int root, int us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495, int us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868 read pattern: { us497[root = 0, us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495, us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496] -> gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484[o0, o1] : 0 <= us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495 <= 127 and 0 <= us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496 <= 127 and -1 + us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496 <= 2o0 <= us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496 and -1 + us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495 <= 2o1 <= us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495 }
  auto value_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864 = gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484.gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868.read(/*ram type address*/ (floord(us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496, 2) - 0) * 1 + (floord(us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495, 2) - 0) * 64);
  return value_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864;
  return 0;
}

// # of bundles = 2
// rc489_write
//	gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864
inline void gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_write_bundle_write(hw_uint<32>& rc489_write, gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_cache& gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484, int root, int gp_gray_2_buf445_interpolated471_reconstruct_lp481482, int gp_gray_2_buf445_interpolated471_reconstruct_lp481483, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_res = rc489_write.extract<0, 31>();
	gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_write(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_rc489_864_res, gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484, root, gp_gray_2_buf445_interpolated471_reconstruct_lp481482, gp_gray_2_buf445_interpolated471_reconstruct_lp481483, dynamic_address);
}

// us497_read
//	gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868
inline hw_uint<32> gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_read_bundle_read(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_cache& gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484, int root, int us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495, int us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868_res = gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868_select(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484, root, us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495, us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us497_868_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 16384
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  RAM[16384];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<32> * RAM;
  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871_cache() {
    RAM = (hw_uint<32> *) malloc(sizeof(hw_uint<32> )*16384);
  }
  ~gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871_cache() {
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

struct gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_cache {
  // # of banks: 1
  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871_cache gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871;
};



inline void gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_write(hw_uint<32> & gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867, gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_cache& gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494, int root, int us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495, int us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496, int dynamic_address) {
  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494.gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871.write(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867, (us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496 - 0) * 1 + (us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495 - 0) * 128);
}

inline hw_uint<32>  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871_select(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_cache& gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871 read pattern: { rc498[root = 0, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492] -> gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494[gp_gray_1_buf437_interpolated466_reconstruct_lp490492, gp_gray_1_buf437_interpolated466_reconstruct_lp490491] : 0 <= gp_gray_1_buf437_interpolated466_reconstruct_lp490491 <= 127 and 0 <= gp_gray_1_buf437_interpolated466_reconstruct_lp490492 <= 127 }
  auto value_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867 = gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494.gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_to_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871.read(/*ram type address*/ (gp_gray_1_buf437_interpolated466_reconstruct_lp490492 - 0) * 1 + (gp_gray_1_buf437_interpolated466_reconstruct_lp490491 - 0) * 128);
  return value_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867;
  return 0;
}

// # of bundles = 2
// rc498_read
//	gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871
inline hw_uint<32> gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_read_bundle_read(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_cache& gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494, int root, int gp_gray_1_buf437_interpolated466_reconstruct_lp490491, int gp_gray_1_buf437_interpolated466_reconstruct_lp490492, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871_res = gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871_select(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494, root, gp_gray_1_buf437_interpolated466_reconstruct_lp490491, gp_gray_1_buf437_interpolated466_reconstruct_lp490492, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_rc498_871_res);
	return result;
}

// us497_write
//	gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867
inline void gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_write_bundle_write(hw_uint<32>& us497_write, gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_cache& gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494, int root, int us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495, int us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_res = us497_write.extract<0, 31>();
	gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_write(gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494_us497_867_res, gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484_us494, root, us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484495, us_gp_gray_2_buf445_interpolated471_reconstruct_lp481_buf484496, dynamic_address);
}

