#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "accumulate_3.h"

#include "hw_classes.h"

struct M_get_input_0_to_M_compute_output_2_cache {
	// RAM Box: {[0, 9]}
	// Capacity: 3
	// # of read delays: 3
	fifo<hw_uint<32> , 3> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct M_get_input_0_merged_banks_2_cache {
	// RAM Box: {[0, 9]}
	// Capacity: 2
	// # of read delays: 2
	hw_uint<32>  f0;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct M_cache {
  M_get_input_0_to_M_compute_output_2_cache M_get_input_0_to_M_compute_output_2;
  M_get_input_0_merged_banks_2_cache M_get_input_0_merged_banks_2;
};



inline void M_get_input_0_write(hw_uint<32> & M_get_input_0, M_cache& M, int root, int p) {
  M.M_get_input_0_to_M_compute_output_2.push(M_get_input_0);
  M.M_get_input_0_merged_banks_2.push(M_get_input_0);
}

inline hw_uint<32>  M_compute_output_2_select(M_cache& M, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // M_compute_output_2 read pattern: { compute_output[root = 0, c] -> M[c] : 0 <= c <= 9 }
  // Read schedule : { compute_output[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // Write schedule: { get_input[root = 0, p] -> [p, 0] : 0 <= p <= 9 }
  // DD fold: { compute_output[root, c] -> 2 : root = 0 and 0 <= c <= 7; compute_output[root, c] -> 1 : root = 0 and c = 8 }
  auto value_M_get_input_0 = M.M_get_input_0_to_M_compute_output_2.peek(/* one reader or all rams */ (-8 + c == 0) ? (1) : (7 - c >= 0) ? (2) : 0);
  return value_M_get_input_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  M_compute_output_3_select(M_cache& M, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // M_compute_output_3 read pattern: { compute_output[root = 0, c] -> M[1 + c] : 0 <= c <= 8; compute_output[root = 0, c = 9] -> M[9] }
  // Read schedule : { compute_output[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // Write schedule: { get_input[root = 0, p] -> [p, 0] : 0 <= p <= 9 }
  // DD fold: { compute_output[root, c] -> 1 : root = 0 and 0 <= c <= 7 }
  auto value_M_get_input_0 = M.M_get_input_0_merged_banks_2.peek(/* Needs general delay string */ (7 - c >= 0) ? (1) : 0);
  return value_M_get_input_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  M_compute_output_4_select(M_cache& M, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // M_compute_output_4 read pattern: { compute_output[root = 0, c] -> M[9] : 8 <= c <= 9; compute_output[root = 0, c] -> M[2 + c] : 0 <= c <= 7 }
  // Read schedule : { compute_output[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // Write schedule: { get_input[root = 0, p] -> [p, 0] : 0 <= p <= 9 }
  // DD fold: {  }
  auto value_M_get_input_0 = M.M_get_input_0_merged_banks_2.peek_0();
  return value_M_get_input_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// M_get_input_0
//	M_get_input_0
inline void M_M_get_input_0_bundle_write(hw_uint<32>& M_get_input_0, M_cache& M, int root, int p) {
	hw_uint<32>  M_get_input_0_res = M_get_input_0.extract<0, 31>();
	M_get_input_0_write(M_get_input_0_res, M, root, p);
}

// compute_output_read
//	M_compute_output_2
//	M_compute_output_3
//	M_compute_output_4
inline hw_uint<96> M_compute_output_read_bundle_read(M_cache& M, int root, int c) {
  // # of ports in bundle: 3
    // M_compute_output_2
    // M_compute_output_3
    // M_compute_output_4

	hw_uint<96> result;
	hw_uint<32>  M_compute_output_2_res = M_compute_output_2_select(M, root, c);
	set_at<0, 96>(result, M_compute_output_2_res);
	hw_uint<32>  M_compute_output_3_res = M_compute_output_3_select(M, root, c);
	set_at<32, 96>(result, M_compute_output_3_res);
	hw_uint<32>  M_compute_output_4_res = M_compute_output_4_select(M, root, c);
	set_at<64, 96>(result, M_compute_output_4_res);
	return result;
}

// get_input_write
//	M_get_input_0
inline void M_get_input_write_bundle_write(hw_uint<32>& get_input_write, M_cache& M, int root, int p) {
	hw_uint<32>  M_get_input_0_res = get_input_write.extract<0, 31>();
	M_get_input_0_write(M_get_input_0_res, M, root, p);
}



// Operation logic
inline void get_input(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, M_cache& M, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	M_get_input_write_bundle_write(in_p_value, M, root, p);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void compute_output(M_cache& M, int root, int c) {
	// Consume: M
	auto M_min_lp_c_c__9_rp__value = M_compute_output_read_bundle_read(M/* source_delay */, root, c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = accumulate_3(M_min_lp_c_c__9_rp__value);
