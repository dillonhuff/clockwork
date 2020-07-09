#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: conv_3_3_compute.h
#include "conv_3_3_compute.h"

#include "hw_classes.h"

<<<<<<< HEAD
struct conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_conv_stencil_1_4_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_hw_output_stencil_7_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 1
	// # of read delays: 2
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

=======
>>>>>>> origin/master
struct conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_conv_stencil_1_4_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 1
	// # of read delays: 2
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

<<<<<<< HEAD
struct conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_hw_output_stencil_7_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct conv_stencil_hcompute_conv_stencil_1_3_merged_banks_1_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_hcompute_conv_stencil_2_merged_banks_1_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 1
	// # of read delays: 1
=======
struct conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_hw_output_stencil_7_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 1
	// # of read delays: 2
>>>>>>> origin/master
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_cache {
<<<<<<< HEAD
  conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_conv_stencil_1_4_cache conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_conv_stencil_1_4;
  conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_hw_output_stencil_7_cache conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_hw_output_stencil_7;
  conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_conv_stencil_1_4_cache conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_conv_stencil_1_4;
  conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_hw_output_stencil_7_cache conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_hw_output_stencil_7;
  conv_stencil_hcompute_conv_stencil_1_3_merged_banks_1_cache conv_stencil_hcompute_conv_stencil_1_3_merged_banks_1;
  conv_stencil_hcompute_conv_stencil_2_merged_banks_1_cache conv_stencil_hcompute_conv_stencil_2_merged_banks_1;
=======
  conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_conv_stencil_1_4_cache conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_conv_stencil_1_4;
  conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_hw_output_stencil_7_cache conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_hw_output_stencil_7;
>>>>>>> origin/master
};



inline void conv_stencil_hcompute_conv_stencil_1_3_write(hw_uint<16>& conv_stencil_hcompute_conv_stencil_1_3, conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
<<<<<<< HEAD
  conv_stencil.conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_conv_stencil_1_4.push(conv_stencil_hcompute_conv_stencil_1_3);
  conv_stencil.conv_stencil_hcompute_conv_stencil_1_3_merged_banks_1.push(conv_stencil_hcompute_conv_stencil_1_3);
}

inline void conv_stencil_hcompute_conv_stencil_2_write(hw_uint<16>& conv_stencil_hcompute_conv_stencil_2, conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
  conv_stencil.conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_hw_output_stencil_7.push(conv_stencil_hcompute_conv_stencil_2);
  conv_stencil.conv_stencil_hcompute_conv_stencil_2_merged_banks_1.push(conv_stencil_hcompute_conv_stencil_2);
=======
  conv_stencil.conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_hw_output_stencil_7.push(conv_stencil_hcompute_conv_stencil_1_3);
}

inline void conv_stencil_hcompute_conv_stencil_2_write(hw_uint<16>& conv_stencil_hcompute_conv_stencil_2, conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
  conv_stencil.conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_conv_stencil_1_4.push(conv_stencil_hcompute_conv_stencil_2);
>>>>>>> origin/master
}

inline hw_uint<16> conv_stencil_hcompute_conv_stencil_1_4_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_hcompute_conv_stencil_1_4 read pattern: { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> conv_stencil[hw_output_s0_x_xo, hw_output_s0_y_yo] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
<<<<<<< HEAD
  if (false) {
  // Read schedule : { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // Write schedule: { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // DD fold: {  }
    auto value_conv_stencil_hcompute_conv_stencil_1_3 = conv_stencil.conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_conv_stencil_1_4.peek_0();
    return value_conv_stencil_hcompute_conv_stencil_1_3;
  }

  
  if ((true)) {
  // Read schedule : { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // Write schedule: { hcompute_conv_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 0] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // DD fold: {  }
    auto value_conv_stencil_hcompute_conv_stencil_2 = conv_stencil.conv_stencil_hcompute_conv_stencil_2_merged_banks_1.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_hcompute_conv_stencil_2;
  }

  
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " hw_output_s0_y_yo = " << hw_output_s0_y_yo  << " hw_output_s0_x_xo = " << hw_output_s0_x_xo  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
=======
  // Read schedule : { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // Write schedule: { hcompute_conv_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 0] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  auto value_conv_stencil_hcompute_conv_stencil_2 = conv_stencil.conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_conv_stencil_1_4.peek(/* one reader or all rams */ 0);
  return value_conv_stencil_hcompute_conv_stencil_2;
  return 0;
>>>>>>> origin/master
}

inline hw_uint<16> conv_stencil_hcompute_hw_output_stencil_7_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_hcompute_hw_output_stencil_7 read pattern: { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> conv_stencil[hw_output_s0_x_xo, hw_output_s0_y_yo] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
<<<<<<< HEAD
  if ((true)) {
  // Read schedule : { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 3] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // Write schedule: { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // DD fold: {  }
    auto value_conv_stencil_hcompute_conv_stencil_1_3 = conv_stencil.conv_stencil_hcompute_conv_stencil_1_3_merged_banks_1.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_hcompute_conv_stencil_1_3;
  }

  
  if (false) {
  // Read schedule : { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 3] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // Write schedule: { hcompute_conv_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 0] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // DD fold: {  }
    auto value_conv_stencil_hcompute_conv_stencil_2 = conv_stencil.conv_stencil_hcompute_conv_stencil_2_to_conv_stencil_hcompute_hw_output_stencil_7.peek_0();
    return value_conv_stencil_hcompute_conv_stencil_2;
  }

  
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " hw_output_s0_y_yo = " << hw_output_s0_y_yo  << " hw_output_s0_x_xo = " << hw_output_s0_x_xo  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
=======
  // Read schedule : { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 3] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // Write schedule: { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  auto value_conv_stencil_hcompute_conv_stencil_1_3 = conv_stencil.conv_stencil_hcompute_conv_stencil_1_3_to_conv_stencil_hcompute_hw_output_stencil_7.peek(/* one reader or all rams */ 0);
  return value_conv_stencil_hcompute_conv_stencil_1_3;
  return 0;
>>>>>>> origin/master
}

// # of bundles = 4
// hcompute_conv_stencil_1_read
//	conv_stencil_hcompute_conv_stencil_1_4
inline hw_uint<16> conv_stencil_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_hcompute_conv_stencil_1_4

	hw_uint<16> result;
	hw_uint<16> conv_stencil_hcompute_conv_stencil_1_4_res = conv_stencil_hcompute_conv_stencil_1_4_select(conv_stencil, root, hw_output_s0_y_yo, hw_output_s0_x_xo, dynamic_address);
	set_at<0, 16>(result, conv_stencil_hcompute_conv_stencil_1_4_res);
	return result;
}

// hcompute_conv_stencil_1_write
//	conv_stencil_hcompute_conv_stencil_1_3
inline void conv_stencil_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
	hw_uint<16> conv_stencil_hcompute_conv_stencil_1_3_res = hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_hcompute_conv_stencil_1_3_write(conv_stencil_hcompute_conv_stencil_1_3_res, conv_stencil, root, hw_output_s0_y_yo, hw_output_s0_x_xo, dynamic_address);
}

// hcompute_conv_stencil_write
//	conv_stencil_hcompute_conv_stencil_2
inline void conv_stencil_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
	hw_uint<16> conv_stencil_hcompute_conv_stencil_2_res = hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_hcompute_conv_stencil_2_write(conv_stencil_hcompute_conv_stencil_2_res, conv_stencil, root, hw_output_s0_y_yo, hw_output_s0_x_xo, dynamic_address);
}

// hcompute_hw_output_stencil_read
//	conv_stencil_hcompute_hw_output_stencil_7
inline hw_uint<16> conv_stencil_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_hcompute_hw_output_stencil_7

	hw_uint<16> result;
	hw_uint<16> conv_stencil_hcompute_hw_output_stencil_7_res = conv_stencil_hcompute_hw_output_stencil_7_select(conv_stencil, root, hw_output_s0_y_yo, hw_output_s0_x_xo, dynamic_address);
	set_at<0, 16>(result, conv_stencil_hcompute_hw_output_stencil_7_res);
	return result;
}

#include "hw_classes.h"

struct hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_to_hw_input_copy_stencil_hcompute_conv_stencil_1_5_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

<<<<<<< HEAD
struct hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_merged_banks_1_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_copy_stencil_cache {
  hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_to_hw_input_copy_stencil_hcompute_conv_stencil_1_5_cache hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_to_hw_input_copy_stencil_hcompute_conv_stencil_1_5;
  hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_merged_banks_1_cache hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_merged_banks_1;
=======
struct hw_input_copy_stencil_cache {
  hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_to_hw_input_copy_stencil_hcompute_conv_stencil_1_5_cache hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_to_hw_input_copy_stencil_hcompute_conv_stencil_1_5;
>>>>>>> origin/master
};



inline void hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_write(hw_uint<16>& hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0, hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_input_copy_s0_y, int hw_input_copy_s0_x, int dynamic_address) {
<<<<<<< HEAD
  hw_input_copy_stencil.hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_merged_banks_1.push(hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0);
=======
  hw_input_copy_stencil.hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_to_hw_input_copy_stencil_hcompute_conv_stencil_1_5.push(hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0);
>>>>>>> origin/master
}

inline hw_uint<16> hw_input_copy_stencil_hcompute_conv_stencil_1_5_select(hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_copy_stencil_hcompute_conv_stencil_1_5 read pattern: { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> hw_input_copy_stencil[hw_output_s0_x_xo, hw_output_s0_y_yo] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // Read schedule : { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
  // Write schedule: { hcompute_hw_input_copy_stencil[root = 0, hw_input_copy_s0_y, hw_input_copy_s0_x] -> [hw_input_copy_s0_y, hw_input_copy_s0_x, 1] : 0 <= hw_input_copy_s0_y <= 63 and 0 <= hw_input_copy_s0_x <= 63 }
<<<<<<< HEAD
  // DD fold: {  }
  auto value_hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0 = hw_input_copy_stencil.hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " hw_output_s0_y_yo = " << hw_output_s0_y_yo  << " hw_output_s0_x_xo = " << hw_output_s0_x_xo  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
=======
  auto value_hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0 = hw_input_copy_stencil.hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_to_hw_input_copy_stencil_hcompute_conv_stencil_1_5.peek(/* one reader or all rams */ 0);
  return value_hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0;
  return 0;
>>>>>>> origin/master
}

// # of bundles = 2
// hcompute_conv_stencil_1_read
//	hw_input_copy_stencil_hcompute_conv_stencil_1_5
inline hw_uint<16> hw_input_copy_stencil_hcompute_conv_stencil_1_read_bundle_read(hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_copy_stencil_hcompute_conv_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> hw_input_copy_stencil_hcompute_conv_stencil_1_5_res = hw_input_copy_stencil_hcompute_conv_stencil_1_5_select(hw_input_copy_stencil, root, hw_output_s0_y_yo, hw_output_s0_x_xo, dynamic_address);
	set_at<0, 16>(result, hw_input_copy_stencil_hcompute_conv_stencil_1_5_res);
	return result;
}

// hcompute_hw_input_copy_stencil_write
//	hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0
inline void hw_input_copy_stencil_hcompute_hw_input_copy_stencil_write_bundle_write(hw_uint<16>& hcompute_hw_input_copy_stencil_write, hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_input_copy_s0_y, int hw_input_copy_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_res = hcompute_hw_input_copy_stencil_write.extract<0, 15>();
	hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_write(hw_input_copy_stencil_hcompute_hw_input_copy_stencil_0_res, hw_input_copy_stencil, root, hw_input_copy_s0_y, hw_input_copy_s0_x, dynamic_address);
}



// Operation logic
inline void hcompute_hw_input_copy_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_input_copy_s0_y, int hw_input_copy_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_hw_input_copy_s0_x_c__hw_input_copy_s0_y_value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_copy_stencil(hw_input_stencil_hw_input_copy_s0_x_c__hw_input_copy_s0_y_value);
	// Produce: hw_input_copy_stencil
	hw_input_copy_stencil_hcompute_hw_input_copy_stencil_write_bundle_write(/* arg names */compute_result, hw_input_copy_stencil, root, hw_input_copy_s0_y, hw_input_copy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, hw_output_s0_y_yo, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_conv_stencil_1(conv_stencil_cache& conv_stencil, hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_x_xo_c__hw_output_s0_y_yo_value = conv_stencil_hcompute_conv_stencil_1_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_y_yo, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_copy_stencil
	auto hw_input_copy_stencil_hw_output_s0_x_xo_c__hw_output_s0_y_yo_value = hw_input_copy_stencil_hcompute_conv_stencil_1_read_bundle_read(hw_input_copy_stencil/* source_delay */, root, hw_output_s0_y_yo, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_hw_output_s0_x_xo_c__hw_output_s0_y_yo_value, hw_input_copy_stencil_hw_output_s0_x_xo_c__hw_output_s0_y_yo_value);
	// Produce: conv_stencil
	conv_stencil_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, hw_output_s0_y_yo, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yo, int hw_output_s0_x_xo) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_x_xo_c__hw_output_s0_y_yo_value = conv_stencil_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_y_yo, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_x_xo_c__hw_output_s0_y_yo_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void conv_3_3_halide(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("conv_3_3_halide_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv_stencil_cache conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_copy_stencil_cache hw_input_copy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { hcompute_hw_input_copy_stencil[root = 0, hw_input_copy_s0_y, hw_input_copy_s0_x] -> [hw_input_copy_s0_y, hw_input_copy_s0_x, 1] : 0 <= hw_input_copy_s0_y <= 63 and 0 <= hw_input_copy_s0_x <= 63; hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61; hcompute_conv_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 0] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61; hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 3] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
<<<<<<< HEAD
=======
//   { hcompute_hw_input_copy_stencil[root = 0, hw_input_copy_s0_y, hw_input_copy_s0_x] -> [hw_input_copy_s0_y, hw_input_copy_s0_x, 1] : 0 <= hw_input_copy_s0_y <= 63 and 0 <= hw_input_copy_s0_x <= 63 }
// Condition for hcompute_hw_input_copy_stencil(((-1 + i2 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { hcompute_conv_stencil_1[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
// Condition for hcompute_conv_stencil_1(((-2 + i2 == 0) && (i0 >= 0) && (61 - i0 >= 0) && (i1 >= 0) && (61 - i1 >= 0)))
//   { hcompute_conv_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 0] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
// Condition for hcompute_conv_stencil(((i2 == 0) && (i0 >= 0) && (61 - i0 >= 0) && (i1 >= 0) && (61 - i1 >= 0)))
//   { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> [hw_output_s0_y_yo, hw_output_s0_x_xo, 3] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
// Condition for hcompute_hw_output_stencil(((-3 + i2 == 0) && (i0 >= 0) && (61 - i0 >= 0) && (i1 >= 0) && (61 - i1 >= 0)))

>>>>>>> origin/master
  /*
for (int c0 = 0; c0 <= 63; c0 += 1)
  for (int c1 = 0; c1 <= 63; c1 += 1) {
    if (c0 <= 61 && c1 <= 61)
      hcompute_conv_stencil(0, c0, c1);
    hcompute_hw_input_copy_stencil(0, c0, c1);
    if (c0 <= 61 && c1 <= 61) {
      hcompute_conv_stencil_1(0, c0, c1);
      hcompute_hw_output_stencil(0, c0, c1);
    }
  }

  */
	for (int c0 = 0; c0 <= 63; c0 += 1)
	  for (int c1 = 0; c1 <= 63; c1 += 1) {
	    if (c0 <= 61 && c1 <= 61)
	      hcompute_conv_stencil(conv_stencil, 0, c0, c1);
	    hcompute_hw_input_copy_stencil(hw_input_stencil /* buf name */, hw_input_copy_stencil, 0, c0, c1);
	    if (c0 <= 61 && c1 <= 61) {
	      hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_copy_stencil /* buf name */, 0, c0, c1);
	      hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, c0, c1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
<<<<<<< HEAD
const int hcompute_hw_input_copy_stencil_read_num_transfers = 0;
const int hcompute_hw_output_stencil_write_num_transfers = 0;
=======
  // { hcompute_hw_input_copy_stencil[root = 0, hw_input_copy_s0_y, hw_input_copy_s0_x] -> hw_input_stencil[hw_input_copy_s0_x, hw_input_copy_s0_y] : 0 <= hw_input_copy_s0_y <= 63 and 0 <= hw_input_copy_s0_x <= 63 }
const int hcompute_hw_input_copy_stencil_read_num_transfers = 4096;
  // { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yo, hw_output_s0_x_xo] -> hw_output_stencil[hw_output_s0_x_xo, hw_output_s0_y_yo] : 0 <= hw_output_s0_y_yo <= 61 and 0 <= hw_output_s0_x_xo <= 61 }
const int hcompute_hw_output_stencil_write_num_transfers = 3844;
>>>>>>> origin/master


extern "C" {

static void read_hcompute_hw_input_copy_stencil_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = hcompute_hw_input_copy_stencil_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_hcompute_hw_output_stencil_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = hcompute_hw_output_stencil_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void conv_3_3_halide_accel(hw_uint<16>* hcompute_hw_input_copy_stencil_read, hw_uint<16>* hcompute_hw_output_stencil_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = hcompute_hw_input_copy_stencil_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = hcompute_hw_output_stencil_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = hcompute_hw_input_copy_stencil_read bundle = control
#pragma HLS INTERFACE s_axilite port = hcompute_hw_output_stencil_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > hcompute_hw_input_copy_stencil_read_channel;
  static HWStream<hw_uint<16> > hcompute_hw_output_stencil_write_channel;

  read_hcompute_hw_input_copy_stencil_read(hcompute_hw_input_copy_stencil_read, hcompute_hw_input_copy_stencil_read_channel, size);

<<<<<<< HEAD
  conv_3_3_halide(hcompute_hw_input_copy_stencil_read_channel, hcompute_hw_output_stencil_write_channel, size);
=======
  conv_3_3_halide(hcompute_hw_input_copy_stencil_read_channel, hcompute_hw_output_stencil_write_channel);
>>>>>>> origin/master

  write_hcompute_hw_output_stencil_write(hcompute_hw_output_stencil_write, hcompute_hw_output_stencil_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

