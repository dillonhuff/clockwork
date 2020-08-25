#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: accumulation_compute.h
#include "accumulation_compute.h"

#include "hw_classes.h"

struct conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_conv_stencil_1_4_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3844];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_conv_stencil_1_4_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3844);
  }
  ~conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_conv_stencil_1_4_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_2_to_conv_stencil_op_hcompute_conv_stencil_1_4_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3844];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_2_to_conv_stencil_op_hcompute_conv_stencil_1_4_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3844);
  }
  ~conv_stencil_op_hcompute_conv_stencil_2_to_conv_stencil_op_hcompute_conv_stencil_1_4_cache() {
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

struct conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_7_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3844];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_7_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3844);
  }
  ~conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_7_cache() {
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

struct conv_stencil_cache {
  // # of banks: 3
  conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_conv_stencil_1_4_cache conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_conv_stencil_1_4;
  conv_stencil_op_hcompute_conv_stencil_2_to_conv_stencil_op_hcompute_conv_stencil_1_4_cache conv_stencil_op_hcompute_conv_stencil_2_to_conv_stencil_op_hcompute_conv_stencil_1_4;
  conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_7_cache conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_7;
};



inline void conv_stencil_op_hcompute_conv_stencil_1_3_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_3, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_conv_stencil_1_4.write(conv_stencil_op_hcompute_conv_stencil_1_3, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 62);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_7.write(conv_stencil_op_hcompute_conv_stencil_1_3, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 62);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_to_conv_stencil_op_hcompute_conv_stencil_1_4.write(conv_stencil_op_hcompute_conv_stencil_2, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 62);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_4_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_1_4 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y] : 0 <= conv_s1_y <= 61 and 0 <= conv_s1_x <= 61 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_1_3 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_conv_stencil_1_4.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 62);
    return value_conv_stencil_op_hcompute_conv_stencil_1_3;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
    auto value_conv_stencil_op_hcompute_conv_stencil_2 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_to_conv_stencil_op_hcompute_conv_stencil_1_4.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 62);
    return value_conv_stencil_op_hcompute_conv_stencil_2;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_7_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_7 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_3 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_7.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 62);
  return value_conv_stencil_op_hcompute_conv_stencil_1_3;
  return 0;
}

// # of bundles = 4
// op_hcompute_conv_stencil_1_read
//	conv_stencil_op_hcompute_conv_stencil_1_4
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_1_4

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_4_res = conv_stencil_op_hcompute_conv_stencil_1_4_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_1_4_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_3
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_3_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_3_write(conv_stencil_op_hcompute_conv_stencil_1_3_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_2
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_write(conv_stencil_op_hcompute_conv_stencil_2_res, conv_stencil, root, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_7
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_7

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_7_res = conv_stencil_op_hcompute_hw_output_stencil_7_select(conv_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_7_res);
	return result;
}

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_5_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_5_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_5_cache() {
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
  // # of banks: 1
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_5_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_5;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_5.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_5_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_5 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 61 and 0 <= conv_s1_x <= 61 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_5.read(/*ram type address*/ (conv_s1_x + conv_s1_r_x - 0) * 1 + (conv_s1_y + conv_s1_r_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_5
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_5_res = hw_input_stencil_op_hcompute_conv_stencil_1_5_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_1_5_res);
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

inline void op_hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_1(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_value = conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_conv_s1_x_c__conv_s1_y_value, hw_input_stencil__lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, conv_s1_r_x, conv_s1_r_y);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value = conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_accumulation(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_accumulation_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv_stencil_cache conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_stencil_cache hw_input_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 2, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 61 and 0 <= conv_s1_x <= 61 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63; op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x] -> [0, 0, 1, conv_s0_y, 0, conv_s0_x, 0, 0, 0, 0, 0] : 0 <= conv_s0_y <= 61 and 0 <= conv_s0_x <= 61; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 3, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 2, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 61 and 0 <= conv_s1_x <= 61 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_1(((i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (61 - i3 >= 0) && (i5 >= 0) && (61 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63 }
// Condition for op_hcompute_hw_input_stencil(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i7 == 0) && (i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (63 - i3 >= 0) && (i5 >= 0) && (63 - i5 >= 0)))
//   { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x] -> [0, 0, 1, conv_s0_y, 0, conv_s0_x, 0, 0, 0, 0, 0] : 0 <= conv_s0_y <= 61 and 0 <= conv_s0_x <= 61 }
// Condition for op_hcompute_conv_stencil(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i7 == 0) && (i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (61 - i3 >= 0) && (i5 >= 0) && (61 - i5 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 3, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
// Condition for op_hcompute_hw_output_stencil(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i7 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (61 - i3 >= 0) && (i5 >= 0) && (61 - i5 >= 0)))

  /*
{
  for (int c3 = 0; c3 <= 63; c3 += 1)
    for (int c5 = 0; c5 <= 63; c5 += 1)
      op_hcompute_hw_input_stencil(0, c3, c5);
  for (int c3 = 0; c3 <= 61; c3 += 1)
    for (int c5 = 0; c5 <= 61; c5 += 1)
      op_hcompute_conv_stencil(0, c3, c5);
  for (int c3 = 0; c3 <= 61; c3 += 1)
    for (int c5 = 0; c5 <= 61; c5 += 1)
      for (int c7 = 0; c7 <= 2; c7 += 1)
        for (int c9 = 0; c9 <= 2; c9 += 1)
          op_hcompute_conv_stencil_1(0, c3, c5, c7, c9);
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
	      op_hcompute_conv_stencil(conv_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      for (int c7 = 0; c7 <= 2; c7 += 1)
	        for (int c9 = 0; c9 <= 2; c9 += 1)
	          op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, 0, c3, c5, c7, c9);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, c3, c5);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_accumulation_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_accumulation(input_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 3844;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x] -> input_copy_stencil[hw_input_s0_x, hw_input_s0_y] : 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63 }
const int op_hcompute_hw_input_stencil_read_pipe0_num_transfers = 4096;


extern "C" {

void unoptimized_accumulation_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
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

  unoptimized_accumulation_wrapper(op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_accumulation_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_accumulation(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

