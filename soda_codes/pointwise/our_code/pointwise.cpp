#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: pointwise_compute.h
#include "pointwise_compute.h"

#include "hw_classes.h"

struct hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0_to_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct hw_input_global_wrapper_stencil_cache {
  // # of banks: 1
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0_to_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3_cache hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0_to_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0_to_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3.push(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int mult_s0_y, int mult_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3 read pattern: { op_hcompute_mult_stencil[root = 0, mult_s0_y, mult_s0_x] -> hw_input_global_wrapper_stencil[mult_s0_y, mult_s0_x] : 0 <= mult_s0_y <= 63 and 0 <= mult_s0_x <= 63 }
  // Read schedule : { op_hcompute_mult_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0_to_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_0_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_mult_stencil_read
//	hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3
inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int mult_s0_y, int mult_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3_res = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3_select(hw_input_global_wrapper_stencil, root, mult_s0_y, mult_s0_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_3_res);
	return result;
}

#include "hw_classes.h"

struct mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct mult_stencil_cache {
  // # of banks: 1
  mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_cache mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5;
};



inline void mult_stencil_op_hcompute_mult_stencil_2_write(hw_uint<16>& mult_stencil_op_hcompute_mult_stencil_2, mult_stencil_cache& mult_stencil, int root, int mult_s0_y, int mult_s0_x, int dynamic_address) {
  mult_stencil.mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5.push(mult_stencil_op_hcompute_mult_stencil_2);
}

inline hw_uint<16> mult_stencil_op_hcompute_hw_output_stencil_5_select(mult_stencil_cache& mult_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mult_stencil_op_hcompute_hw_output_stencil_5 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> mult_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_mult_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_mult_stencil_op_hcompute_mult_stencil_2 = mult_stencil.mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5.peek(/* one reader or all rams */ 0);
  return value_mult_stencil_op_hcompute_mult_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_hw_output_stencil_read
//	mult_stencil_op_hcompute_hw_output_stencil_5
inline hw_uint<16> mult_stencil_op_hcompute_hw_output_stencil_read_bundle_read(mult_stencil_cache& mult_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // mult_stencil_op_hcompute_hw_output_stencil_5

	hw_uint<16> result;
	hw_uint<16> mult_stencil_op_hcompute_hw_output_stencil_5_res = mult_stencil_op_hcompute_hw_output_stencil_5_select(mult_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, mult_stencil_op_hcompute_hw_output_stencil_5_res);
	return result;
}

// op_hcompute_mult_stencil_write
//	mult_stencil_op_hcompute_mult_stencil_2
inline void mult_stencil_op_hcompute_mult_stencil_write_bundle_write(hw_uint<16>& op_hcompute_mult_stencil_write, mult_stencil_cache& mult_stencil, int root, int mult_s0_y, int mult_s0_x, int dynamic_address) {
	hw_uint<16> mult_stencil_op_hcompute_mult_stencil_2_res = op_hcompute_mult_stencil_write.extract<0, 15>();
	mult_stencil_op_hcompute_mult_stencil_2_write(mult_stencil_op_hcompute_mult_stencil_2_res, mult_stencil, root, mult_s0_y, mult_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_mult_stencil(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, mult_stencil_cache& mult_stencil, int root, int mult_s0_y, int mult_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_mult_s0_y_c__mult_s0_x_value = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, mult_s0_y, mult_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_mult_stencil(hw_input_global_wrapper_stencil_mult_s0_y_c__mult_s0_x_value);
	// Produce: mult_stencil
	mult_stencil_op_hcompute_mult_stencil_write_bundle_write(/* arg names */compute_result, mult_stencil, root, mult_s0_y, mult_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(mult_stencil_cache& mult_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: mult_stencil
	auto mult_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = mult_stencil_op_hcompute_hw_output_stencil_read_bundle_read(mult_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(mult_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void pointwise(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("pointwise_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  mult_stencil_cache mult_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0, d1, d2] -> [d0, d1, d2, 0]; op_hcompute_mult_stencil[d0, d1, d2] -> [d0, d1, d2, 1]; op_hcompute_hw_output_stencil[d0, d1, d2] -> [d0, d1, d2, 2] }
//   { op_hcompute_hw_input_global_wrapper_stencil[d0, d1, d2] -> [d0, d1, d2, 0] }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((i3 == 0)))
//   { op_hcompute_mult_stencil[d0, d1, d2] -> [d0, d1, d2, 1] }
// Condition for op_hcompute_mult_stencil(((-1 + i3 == 0)))
//   { op_hcompute_hw_output_stencil[d0, d1, d2] -> [d0, d1, d2, 2] }
// Condition for op_hcompute_hw_output_stencil(((-2 + i3 == 0)))

  /*
  // Schedules...
    // op_hcompute_hw_input_global_wrapper_stencil -> [1*d0*1*1 + 1*0,1*d1*1*1 + 1*0,1*d2*1*1 + 1*0]
    // op_hcompute_hw_output_stencil -> [1*d0*1*1 + 1*0,1*d1*1*1 + 1*0,1*d2*1*1 + 1*0]
    // op_hcompute_mult_stencil -> [1*d0*1*1 + 1*0,1*d1*1*1 + 1*0,1*d2*1*1 + 1*0]
for (int c0 = 0; c0 <= 0; c0++) {
  for (int c1 = 0; c1 <= 63; c1++) {
    for (int c2 = 0; c2 <= 63; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        op_hcompute_hw_input_global_wrapper_stencil((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        op_hcompute_mult_stencil((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        op_hcompute_hw_output_stencil((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        op_hcompute_mult_stencil((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        op_hcompute_hw_input_global_wrapper_stencil((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        op_hcompute_hw_output_stencil((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // op_hcompute_hw_input_global_wrapper_stencil -> [1*d0*1*1 + 1*0,1*d1*1*1 + 1*0,1*d2*1*1 + 1*0]
	    // op_hcompute_hw_output_stencil -> [1*d0*1*1 + 1*0,1*d1*1*1 + 1*0,1*d2*1*1 + 1*0]
	    // op_hcompute_mult_stencil -> [1*d0*1*1 + 1*0,1*d1*1*1 + 1*0,1*d2*1*1 + 1*0]
	for (int c0 = 0; c0 <= 0; c0++) {
	  for (int c1 = 0; c1 <= 63; c1++) {
	    for (int c2 = 0; c2 <= 63; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        op_hcompute_mult_stencil(hw_input_global_wrapper_stencil /* buf name */, mult_stencil, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        op_hcompute_hw_output_stencil(mult_stencil /* buf name */, hw_output_stencil, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        op_hcompute_mult_stencil(hw_input_global_wrapper_stencil /* buf name */, mult_stencil, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 0) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        op_hcompute_hw_output_stencil(mult_stencil /* buf name */, hw_output_stencil, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void pointwise_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    pointwise(hw_input_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 4096;
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 4096;


extern "C" {

void pointwise_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers*size);

  pointwise_wrapper(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void pointwise_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  pointwise(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

