#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sc_dyn_merged_compute_units.h
#include "sc_dyn_merged_compute_units.h"

#include "hw_classes.h"

struct in_pw_math_in_oc02_merged583_2_to_in_store_to_in_to_gp_26082_1_cache {
	// RAM Box: {[-2, 138], [-5, 132]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_pw_math_in_oc02_merged583_3_to_in_store_to_in_to_gp_26082_1_cache {
	// RAM Box: {[-3, 137], [-5, 132]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_pw_math_in_oc02_merged583_4_to_in_store_to_in_to_gp_26082_1_cache {
	// RAM Box: {[-4, 140], [-5, 132]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_pw_math_in_oc02_merged583_5_to_in_store_to_in_to_gp_26082_1_cache {
	// RAM Box: {[-5, 139], [-5, 132]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_cache {
  // # of banks: 4
  in_pw_math_in_oc02_merged583_2_to_in_store_to_in_to_gp_26082_1_cache in_pw_math_in_oc02_merged583_2_to_in_store_to_in_to_gp_26082_1;
  in_pw_math_in_oc02_merged583_3_to_in_store_to_in_to_gp_26082_1_cache in_pw_math_in_oc02_merged583_3_to_in_store_to_in_to_gp_26082_1;
  in_pw_math_in_oc02_merged583_4_to_in_store_to_in_to_gp_26082_1_cache in_pw_math_in_oc02_merged583_4_to_in_store_to_in_to_gp_26082_1;
  in_pw_math_in_oc02_merged583_5_to_in_store_to_in_to_gp_26082_1_cache in_pw_math_in_oc02_merged583_5_to_in_store_to_in_to_gp_26082_1;
};



inline void in_pw_math_in_oc02_merged583_2_write(hw_uint<32> & in_pw_math_in_oc02_merged583_2, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged583_2_to_in_store_to_in_to_gp_26082_1.push(in_pw_math_in_oc02_merged583_2);
}

inline void in_pw_math_in_oc02_merged583_3_write(hw_uint<32> & in_pw_math_in_oc02_merged583_3, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged583_3_to_in_store_to_in_to_gp_26082_1.push(in_pw_math_in_oc02_merged583_3);
}

inline void in_pw_math_in_oc02_merged583_4_write(hw_uint<32> & in_pw_math_in_oc02_merged583_4, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged583_4_to_in_store_to_in_to_gp_26082_1.push(in_pw_math_in_oc02_merged583_4);
}

inline void in_pw_math_in_oc02_merged583_5_write(hw_uint<32> & in_pw_math_in_oc02_merged583_5, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged583_5_to_in_store_to_in_to_gp_26082_1.push(in_pw_math_in_oc02_merged583_5);
}

inline hw_uint<32>  in_store_to_in_to_gp_26082_1_select(in_cache& in, int root, int in_ld1, int in_ld0, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_store_to_in_to_gp_26082_1 read pattern: { store_to_in_to_gp_26082[root = 0, in_ld1, in_ld0] -> in[in_ld0, in_ld1] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  if ((((-2 - in_ld0 + 4*floord(2 + in_ld0, 4) == 0)))) {
  // Read schedule : { store_to_in_to_gp_26082[root = 0, in_ld1, in_ld0] -> [5 + in_ld1, 5 + in_ld0, 1] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, 4pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
    auto value_in_pw_math_in_oc02_merged583_2 = in.in_pw_math_in_oc02_merged583_2_to_in_store_to_in_to_gp_26082_1.peek(/* one reader or all rams */ 0);
    return value_in_pw_math_in_oc02_merged583_2;
  }

  
  if ((((1 - in_ld0 + 4*floord(-1 + in_ld0, 4) == 0)))) {
  // Read schedule : { store_to_in_to_gp_26082[root = 0, in_ld1, in_ld0] -> [5 + in_ld1, 5 + in_ld0, 1] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, 4pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
    auto value_in_pw_math_in_oc02_merged583_3 = in.in_pw_math_in_oc02_merged583_3_to_in_store_to_in_to_gp_26082_1.peek(/* one reader or all rams */ 0);
    return value_in_pw_math_in_oc02_merged583_3;
  }

  
  if ((((-in_ld0 + 4*floord(in_ld0, 4) == 0)))) {
  // Read schedule : { store_to_in_to_gp_26082[root = 0, in_ld1, in_ld0] -> [5 + in_ld1, 5 + in_ld0, 1] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, 4pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
    auto value_in_pw_math_in_oc02_merged583_4 = in.in_pw_math_in_oc02_merged583_4_to_in_store_to_in_to_gp_26082_1.peek(/* one reader or all rams */ 0);
    return value_in_pw_math_in_oc02_merged583_4;
  }

  
  if ((((-1 - in_ld0 + 4*floord(1 + in_ld0, 4) == 0)))) {
  // Read schedule : { store_to_in_to_gp_26082[root = 0, in_ld1, in_ld0] -> [5 + in_ld1, 5 + in_ld0, 1] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, 4pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
    auto value_in_pw_math_in_oc02_merged583_5 = in.in_pw_math_in_oc02_merged583_5_to_in_store_to_in_to_gp_26082_1.peek(/* one reader or all rams */ 0);
    return value_in_pw_math_in_oc02_merged583_5;
  }

  
  return 0;
}

// # of bundles = 2
// pw_math_in_oc02_merged583_write
//	in_pw_math_in_oc02_merged583_2
//	in_pw_math_in_oc02_merged583_3
//	in_pw_math_in_oc02_merged583_4
//	in_pw_math_in_oc02_merged583_5
inline void in_pw_math_in_oc02_merged583_write_bundle_write(hw_uint<128>& pw_math_in_oc02_merged583_write, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
	hw_uint<32>  in_pw_math_in_oc02_merged583_2_res = pw_math_in_oc02_merged583_write.extract<0, 31>();
	in_pw_math_in_oc02_merged583_2_write(in_pw_math_in_oc02_merged583_2_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc02_merged583_3_res = pw_math_in_oc02_merged583_write.extract<32, 63>();
	in_pw_math_in_oc02_merged583_3_write(in_pw_math_in_oc02_merged583_3_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc02_merged583_4_res = pw_math_in_oc02_merged583_write.extract<64, 95>();
	in_pw_math_in_oc02_merged583_4_write(in_pw_math_in_oc02_merged583_4_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc02_merged583_5_res = pw_math_in_oc02_merged583_write.extract<96, 127>();
	in_pw_math_in_oc02_merged583_5_write(in_pw_math_in_oc02_merged583_5_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
}

// store_to_in_to_gp_26082_read
//	in_store_to_in_to_gp_26082_1
inline hw_uint<32> in_store_to_in_to_gp_26082_read_bundle_read(in_cache& in, int root, int in_ld1, int in_ld0, int dynamic_address) {
  // # of ports in bundle: 1
    // in_store_to_in_to_gp_26082_1

	hw_uint<32> result;
	hw_uint<32>  in_store_to_in_to_gp_26082_1_res = in_store_to_in_to_gp_26082_1_select(in, root, in_ld1, in_ld0, dynamic_address);
	set_at<0, 32>(result, in_store_to_in_to_gp_26082_1_res);
	return result;
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void store_to_in_to_gp_26082(in_cache& in, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_to_gp_2608, int root, int in_ld1, int in_ld0) {
  // Dynamic address computation

	// Consume: in
	auto in_in_ld0_c__in_ld1_value = in_store_to_in_to_gp_26082_read_bundle_read(in/* source_delay */, root, in_ld1, in_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_to_gp_2608
	in_to_gp_2608.write(in_in_ld0_c__in_ld1_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_in_oc02_merged583(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */in_oc, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc__lp__lp_4_m_pw_math_in_oc02__p__3_rp___p___m_5_rp__c_______lp_pw_math_in_oc01__p___m_5_rp__value = in_oc.read();
	auto compute_result = pw_math_in_oc02_cu581(in_oc__lp__lp_4_m_pw_math_in_oc02__p__3_rp___p___m_5_rp__c_______lp_pw_math_in_oc01__p___m_5_rp__value);
	// Produce: in
	in_pw_math_in_oc02_merged583_write_bundle_write(/* arg names */compute_result, in, root, pw_math_in_oc01, pw_math_in_oc02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_pw_math_in_oc01_(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_to_gp_2608) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_pw_math_in_oc01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, 4pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36; store_to_in_to_gp_26082[root = 0, in_ld1, in_ld0] -> [5 + in_ld1, 5 + in_ld0, 1] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
//   { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, 4pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
// Condition for pw_math_in_oc02_merged583(((-i1 + 4*floord(i1, 4) == 0) && (i2 == 0) && (i0 >= 0) && (137 - i0 >= 0) && (i1 >= 0) && (144 - i1 >= 0)))
//   { store_to_in_to_gp_26082[root = 0, in_ld1, in_ld0] -> [5 + in_ld1, 5 + in_ld0, 1] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
// Condition for store_to_in_to_gp_26082(((-1 + i2 == 0) && (i0 >= 0) && (137 - i0 >= 0) && (i1 >= 0) && (145 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 137; c0 += 1)
  for (int c1 = 0; c1 <= 145; c1 += 1) {
    if (c1 % 4 == 0)
      pw_math_in_oc02_merged583(0, c0, c1 / 4);
    store_to_in_to_gp_26082(0, c0 - 5, c1 - 5);
  }

  */
	for (int c0 = 0; c0 <= 137; c0 += 1)
	  for (int c1 = 0; c1 <= 145; c1 += 1) {
	    if (c1 % 4 == 0)
	      pw_math_in_oc02_merged583(in_oc /* buf name */, in, 0, c0, c1 / 4);
	    store_to_in_to_gp_26082(in /* buf name */, in_to_gp_2608, 0, c0 - 5, c1 - 5);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_pw_math_in_oc01__wrapper(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_to_gp_2608, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_pw_math_in_oc01_(in_oc, in_to_gp_2608);
  }
}
#include "hw_classes.h"

struct stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_merged_banks_4_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 4
	// # of read delays: 4
  // 0, 1, 2, 3
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_3() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_4_FIFO_buf607_cache {
  // # of banks: 1
  stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_merged_banks_4_cache stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_merged_banks_4;
};



inline void stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_write(hw_uint<32> & stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8, stencil_4_FIFO_buf607_cache& stencil_4_FIFO_buf607, int root, int stencil_4_ld1, int stencil_4_ld0, int dynamic_address) {
  stencil_4_FIFO_buf607.stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_merged_banks_4.push(stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8);
}

inline hw_uint<32>  stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_4_select(stencil_4_FIFO_buf607_cache& stencil_4_FIFO_buf607, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_4 read pattern: { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> stencil_4_FIFO_buf607[3 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Read schedule : { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [pw_math_stencil_43435, 3 + 4pw_math_stencil_43436, 1] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Write schedule: { load_to_stencil_4_FIFO_buf6072[root = 0, stencil_4_ld1, stencil_4_ld0] -> [stencil_4_ld1, stencil_4_ld0, 0] : 0 <= stencil_4_ld1 <= 127 and 0 <= stencil_4_ld0 <= 127 }
  auto value_stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8 = stencil_4_FIFO_buf607.stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_merged_banks_4.peek_0();
  return value_stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8;
  return 0;
}

inline hw_uint<32>  stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_5_select(stencil_4_FIFO_buf607_cache& stencil_4_FIFO_buf607, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_5 read pattern: { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> stencil_4_FIFO_buf607[2 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Read schedule : { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [pw_math_stencil_43435, 3 + 4pw_math_stencil_43436, 1] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Write schedule: { load_to_stencil_4_FIFO_buf6072[root = 0, stencil_4_ld1, stencil_4_ld0] -> [stencil_4_ld1, stencil_4_ld0, 0] : 0 <= stencil_4_ld1 <= 127 and 0 <= stencil_4_ld0 <= 127 }
  auto value_stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8 = stencil_4_FIFO_buf607.stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_merged_banks_4.peek_1();
  return value_stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8;
  return 0;
}

inline hw_uint<32>  stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_6_select(stencil_4_FIFO_buf607_cache& stencil_4_FIFO_buf607, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_6 read pattern: { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> stencil_4_FIFO_buf607[1 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Read schedule : { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [pw_math_stencil_43435, 3 + 4pw_math_stencil_43436, 1] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Write schedule: { load_to_stencil_4_FIFO_buf6072[root = 0, stencil_4_ld1, stencil_4_ld0] -> [stencil_4_ld1, stencil_4_ld0, 0] : 0 <= stencil_4_ld1 <= 127 and 0 <= stencil_4_ld0 <= 127 }
  auto value_stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8 = stencil_4_FIFO_buf607.stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_merged_banks_4.peek_2();
  return value_stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8;
  return 0;
}

inline hw_uint<32>  stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_7_select(stencil_4_FIFO_buf607_cache& stencil_4_FIFO_buf607, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_7 read pattern: { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> stencil_4_FIFO_buf607[4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Read schedule : { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [pw_math_stencil_43435, 3 + 4pw_math_stencil_43436, 1] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Write schedule: { load_to_stencil_4_FIFO_buf6072[root = 0, stencil_4_ld1, stencil_4_ld0] -> [stencil_4_ld1, stencil_4_ld0, 0] : 0 <= stencil_4_ld1 <= 127 and 0 <= stencil_4_ld0 <= 127 }
  auto value_stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8 = stencil_4_FIFO_buf607.stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_merged_banks_4.peek_3();
  return value_stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8;
  return 0;
}

// # of bundles = 2
// load_to_stencil_4_FIFO_buf6072_write
//	stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8
inline void stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_write_bundle_write(hw_uint<32>& load_to_stencil_4_FIFO_buf6072_write, stencil_4_FIFO_buf607_cache& stencil_4_FIFO_buf607, int root, int stencil_4_ld1, int stencil_4_ld0, int dynamic_address) {
	hw_uint<32>  stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_res = load_to_stencil_4_FIFO_buf6072_write.extract<0, 31>();
	stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_write(stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_8_res, stencil_4_FIFO_buf607, root, stencil_4_ld1, stencil_4_ld0, dynamic_address);
}

// pw_math_stencil_43436_merged601_read
//	stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_4
//	stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_5
//	stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_6
//	stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_7
inline hw_uint<128> stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_read_bundle_read(stencil_4_FIFO_buf607_cache& stencil_4_FIFO_buf607, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_4
    // stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_5
    // stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_6
    // stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_7

	hw_uint<128> result;
	hw_uint<32>  stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_4_res = stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_4_select(stencil_4_FIFO_buf607, root, pw_math_stencil_43435, pw_math_stencil_43436, dynamic_address);
	set_at<0, 128>(result, stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_4_res);
	hw_uint<32>  stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_5_res = stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_5_select(stencil_4_FIFO_buf607, root, pw_math_stencil_43435, pw_math_stencil_43436, dynamic_address);
	set_at<32, 128>(result, stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_5_res);
	hw_uint<32>  stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_6_res = stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_6_select(stencil_4_FIFO_buf607, root, pw_math_stencil_43435, pw_math_stencil_43436, dynamic_address);
	set_at<64, 128>(result, stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_6_res);
	hw_uint<32>  stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_7_res = stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_7_select(stencil_4_FIFO_buf607, root, pw_math_stencil_43435, pw_math_stencil_43436, dynamic_address);
	set_at<96, 128>(result, stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_7_res);
	return result;
}

// Total re-use buffer capacity: 96 bits


// Operation logic
inline void pw_math_stencil_43436_merged601(stencil_4_FIFO_buf607_cache& stencil_4_FIFO_buf607, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */out, int root, int pw_math_stencil_43435, int pw_math_stencil_43436) {
  // Dynamic address computation

	// Consume: stencil_4_FIFO_buf607
	auto stencil_4_FIFO_buf607__lp_4_m_pw_math_stencil_43436__p__3_rp__c____pw_math_stencil_43435_value = stencil_4_FIFO_buf607_pw_math_stencil_43436_merged601_read_bundle_read(stencil_4_FIFO_buf607/* source_delay */, root, pw_math_stencil_43435, pw_math_stencil_43436, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw_math_stencil_43436_cu599(stencil_4_FIFO_buf607__lp_4_m_pw_math_stencil_43436__p__3_rp__c____pw_math_stencil_43435_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stencil_4_FIFO_buf6072(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_4_to_gp_1613, stencil_4_FIFO_buf607_cache& stencil_4_FIFO_buf607, int root, int stencil_4_ld1, int stencil_4_ld0) {
  // Dynamic address computation

	// Consume: stencil_4_to_gp_1613
	auto stencil_4_to_gp_1613_stencil_4_ld0_c__stencil_4_ld1_value = stencil_4_to_gp_1613.read();
	// Produce: stencil_4_FIFO_buf607
	stencil_4_FIFO_buf607_load_to_stencil_4_FIFO_buf6072_write_bundle_write(/* arg names */stencil_4_to_gp_1613_stencil_4_ld0_c__stencil_4_ld1_value, stencil_4_FIFO_buf607, root, stencil_4_ld1, stencil_4_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_pw_math_stencil_43435_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_4_to_gp_1613, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_pw_math_stencil_43435__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stencil_4_FIFO_buf607_cache stencil_4_FIFO_buf607;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [pw_math_stencil_43435, 3 + 4pw_math_stencil_43436, 1] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31; load_to_stencil_4_FIFO_buf6072[root = 0, stencil_4_ld1, stencil_4_ld0] -> [stencil_4_ld1, stencil_4_ld0, 0] : 0 <= stencil_4_ld1 <= 127 and 0 <= stencil_4_ld0 <= 127 }
//   { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [pw_math_stencil_43435, 3 + 4pw_math_stencil_43436, 1] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
// Condition for pw_math_stencil_43436_merged601(((-1 - i1 + 4*floord(1 + i1, 4) == 0) && (-1 + i2 == 0) && (i0 >= 0) && (127 - i0 >= 0) && (-3 + i1 >= 0) && (127 - i1 >= 0)))
//   { load_to_stencil_4_FIFO_buf6072[root = 0, stencil_4_ld1, stencil_4_ld0] -> [stencil_4_ld1, stencil_4_ld0, 0] : 0 <= stencil_4_ld1 <= 127 and 0 <= stencil_4_ld0 <= 127 }
// Condition for load_to_stencil_4_FIFO_buf6072(((i2 == 0) && (i0 >= 0) && (127 - i0 >= 0) && (i1 >= 0) && (127 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 127; c0 += 1)
  for (int c1 = 0; c1 <= 127; c1 += 1) {
    load_to_stencil_4_FIFO_buf6072(0, c0, c1);
    if ((c1 + 1) % 4 == 0)
      pw_math_stencil_43436_merged601(0, c0, (c1 - 3) / 4);
  }

  */
	for (int c0 = 0; c0 <= 127; c0 += 1)
	  for (int c1 = 0; c1 <= 127; c1 += 1) {
	    load_to_stencil_4_FIFO_buf6072(stencil_4_to_gp_1613 /* buf name */, stencil_4_FIFO_buf607, 0, c0, c1);
	    if ((c1 + 1) % 4 == 0)
	      pw_math_stencil_43436_merged601(stencil_4_FIFO_buf607 /* buf name */, out, 0, c0, (c1 - 3) / 4);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_pw_math_stencil_43435__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_4_to_gp_1613, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_pw_math_stencil_43435_(stencil_4_to_gp_1613, out);
  }
}
#include "hw_classes.h"

struct in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36_cache {
	// RAM Box: {[-5, 140], [-5, 132]}
	// Capacity: 298
	// # of read delays: 18
  // 0, 1, 2, 3, 4, 5, 146, 147, 148, 149, 150, 151, 292, 293, 294, 295, 296, 297
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 140> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;
	hw_uint<32>  f18;
	hw_uint<32>  f20;
	hw_uint<32>  f22;
	fifo<hw_uint<32> , 140> f23;
	hw_uint<32>  f24;
	hw_uint<32>  f26;
	hw_uint<32>  f28;
	hw_uint<32>  f30;
	hw_uint<32>  f32;
	hw_uint<32>  f34;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_3() {
		return f6;
	}

	inline hw_uint<32>  peek_4() {
		return f8;
	}

	inline hw_uint<32>  peek_5() {
		return f10;
	}

	inline hw_uint<32>  peek_145() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_146() {
		return f12;
	}

	inline hw_uint<32>  peek_147() {
		return f14;
	}

	inline hw_uint<32>  peek_148() {
		return f16;
	}

	inline hw_uint<32>  peek_149() {
		return f18;
	}

	inline hw_uint<32>  peek_150() {
		return f20;
	}

	inline hw_uint<32>  peek_151() {
		return f22;
	}

	inline hw_uint<32>  peek_291() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f23.back();
	}

	inline hw_uint<32>  peek_292() {
		return f24;
	}

	inline hw_uint<32>  peek_293() {
		return f26;
	}

	inline hw_uint<32>  peek_294() {
		return f28;
	}

	inline hw_uint<32>  peek_295() {
		return f30;
	}

	inline hw_uint<32>  peek_296() {
		return f32;
	}

	inline hw_uint<32>  peek_297() {
		return f34;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f30 = f28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 140
    f24 = f23.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 140 reading from capacity: 1
    f23.push(f22);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 140
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 140 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_FIFO_buf602_cache {
  // # of banks: 1
  in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36_cache in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36;
};



inline void in_FIFO_buf602_load_to_in_FIFO_buf6022_46_write(hw_uint<32> & in_FIFO_buf602_load_to_in_FIFO_buf6022_46, in_FIFO_buf602_cache& in_FIFO_buf602, int root, int in_ld1, int in_ld0, int dynamic_address) {
  in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.push(in_FIFO_buf602_load_to_in_FIFO_buf6022_46);
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_10_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_10 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_146();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_11_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_11 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-1 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_147();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_12_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_12 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-2 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_148();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_13_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_13 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_0();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_14_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_14 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-1 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_1();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_15_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_15 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-2 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_2();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_16_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_16 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-1 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_293();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_18_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_18 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-2 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_294();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_19_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_19 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-3 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_295();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_20_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_20 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-1 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_147();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_21_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_21 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-2 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_148();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_22_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_22 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-3 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_149();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_23_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_23 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-1 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_1();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_24_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_24 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-2 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_2();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_25_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_25 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-3 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_3();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_26_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_26 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-2 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_294();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_28_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_28 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-3 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_295();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_29_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_29 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-4 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_296();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_30_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_30 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-2 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_148();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_31_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_31 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-3 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_149();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_32_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_32 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-4 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_150();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_33_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_33 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-2 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_2();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_34_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_34 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-3 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_3();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_35_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_35 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-4 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_4();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_36_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_36 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-3 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_295();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_38_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_38 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-4 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_296();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_39_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_39 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-5 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_297();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_40_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_40 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-3 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_149();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_41_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_41 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-4 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_150();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_42_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_42 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-5 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_151();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_43_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_43 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-3 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_3();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_44_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_44 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-4 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_4();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_45_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_45 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-5 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_5();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_6_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_6 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_292();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_8_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_8 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-1 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_293();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

inline hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_9_select(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf602_stencil_05_merged586_9 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in_FIFO_buf602[-2 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
  auto value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46 = in_FIFO_buf602.in_FIFO_buf602_load_to_in_FIFO_buf6022_46_merged_banks_36.peek_294();
  return value_in_FIFO_buf602_load_to_in_FIFO_buf6022_46;
  return 0;
}

// # of bundles = 2
// load_to_in_FIFO_buf6022_write
//	in_FIFO_buf602_load_to_in_FIFO_buf6022_46
inline void in_FIFO_buf602_load_to_in_FIFO_buf6022_write_bundle_write(hw_uint<32>& load_to_in_FIFO_buf6022_write, in_FIFO_buf602_cache& in_FIFO_buf602, int root, int in_ld1, int in_ld0, int dynamic_address) {
	hw_uint<32>  in_FIFO_buf602_load_to_in_FIFO_buf6022_46_res = load_to_in_FIFO_buf6022_write.extract<0, 31>();
	in_FIFO_buf602_load_to_in_FIFO_buf6022_46_write(in_FIFO_buf602_load_to_in_FIFO_buf6022_46_res, in_FIFO_buf602, root, in_ld1, in_ld0, dynamic_address);
}

// stencil_05_merged586_read
//	in_FIFO_buf602_stencil_05_merged586_6
//	in_FIFO_buf602_stencil_05_merged586_8
//	in_FIFO_buf602_stencil_05_merged586_9
//	in_FIFO_buf602_stencil_05_merged586_10
//	in_FIFO_buf602_stencil_05_merged586_11
//	in_FIFO_buf602_stencil_05_merged586_12
//	in_FIFO_buf602_stencil_05_merged586_13
//	in_FIFO_buf602_stencil_05_merged586_14
//	in_FIFO_buf602_stencil_05_merged586_15
//	in_FIFO_buf602_stencil_05_merged586_16
//	in_FIFO_buf602_stencil_05_merged586_18
//	in_FIFO_buf602_stencil_05_merged586_19
//	in_FIFO_buf602_stencil_05_merged586_20
//	in_FIFO_buf602_stencil_05_merged586_21
//	in_FIFO_buf602_stencil_05_merged586_22
//	in_FIFO_buf602_stencil_05_merged586_23
//	in_FIFO_buf602_stencil_05_merged586_24
//	in_FIFO_buf602_stencil_05_merged586_25
//	in_FIFO_buf602_stencil_05_merged586_26
//	in_FIFO_buf602_stencil_05_merged586_28
//	in_FIFO_buf602_stencil_05_merged586_29
//	in_FIFO_buf602_stencil_05_merged586_30
//	in_FIFO_buf602_stencil_05_merged586_31
//	in_FIFO_buf602_stencil_05_merged586_32
//	in_FIFO_buf602_stencil_05_merged586_33
//	in_FIFO_buf602_stencil_05_merged586_34
//	in_FIFO_buf602_stencil_05_merged586_35
//	in_FIFO_buf602_stencil_05_merged586_36
//	in_FIFO_buf602_stencil_05_merged586_38
//	in_FIFO_buf602_stencil_05_merged586_39
//	in_FIFO_buf602_stencil_05_merged586_40
//	in_FIFO_buf602_stencil_05_merged586_41
//	in_FIFO_buf602_stencil_05_merged586_42
//	in_FIFO_buf602_stencil_05_merged586_43
//	in_FIFO_buf602_stencil_05_merged586_44
//	in_FIFO_buf602_stencil_05_merged586_45
inline hw_uint<1152> in_FIFO_buf602_stencil_05_merged586_read_bundle_read(in_FIFO_buf602_cache& in_FIFO_buf602, int root, int stencil_04, int stencil_05, int dynamic_address) {
  // # of ports in bundle: 36
    // in_FIFO_buf602_stencil_05_merged586_6
    // in_FIFO_buf602_stencil_05_merged586_8
    // in_FIFO_buf602_stencil_05_merged586_9
    // in_FIFO_buf602_stencil_05_merged586_10
    // in_FIFO_buf602_stencil_05_merged586_11
    // in_FIFO_buf602_stencil_05_merged586_12
    // in_FIFO_buf602_stencil_05_merged586_13
    // in_FIFO_buf602_stencil_05_merged586_14
    // in_FIFO_buf602_stencil_05_merged586_15
    // in_FIFO_buf602_stencil_05_merged586_16
    // in_FIFO_buf602_stencil_05_merged586_18
    // in_FIFO_buf602_stencil_05_merged586_19
    // in_FIFO_buf602_stencil_05_merged586_20
    // in_FIFO_buf602_stencil_05_merged586_21
    // in_FIFO_buf602_stencil_05_merged586_22
    // in_FIFO_buf602_stencil_05_merged586_23
    // in_FIFO_buf602_stencil_05_merged586_24
    // in_FIFO_buf602_stencil_05_merged586_25
    // in_FIFO_buf602_stencil_05_merged586_26
    // in_FIFO_buf602_stencil_05_merged586_28
    // in_FIFO_buf602_stencil_05_merged586_29
    // in_FIFO_buf602_stencil_05_merged586_30
    // in_FIFO_buf602_stencil_05_merged586_31
    // in_FIFO_buf602_stencil_05_merged586_32
    // in_FIFO_buf602_stencil_05_merged586_33
    // in_FIFO_buf602_stencil_05_merged586_34
    // in_FIFO_buf602_stencil_05_merged586_35
    // in_FIFO_buf602_stencil_05_merged586_36
    // in_FIFO_buf602_stencil_05_merged586_38
    // in_FIFO_buf602_stencil_05_merged586_39
    // in_FIFO_buf602_stencil_05_merged586_40
    // in_FIFO_buf602_stencil_05_merged586_41
    // in_FIFO_buf602_stencil_05_merged586_42
    // in_FIFO_buf602_stencil_05_merged586_43
    // in_FIFO_buf602_stencil_05_merged586_44
    // in_FIFO_buf602_stencil_05_merged586_45

	hw_uint<1152> result;
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_6_res = in_FIFO_buf602_stencil_05_merged586_6_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<0, 1152>(result, in_FIFO_buf602_stencil_05_merged586_6_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_8_res = in_FIFO_buf602_stencil_05_merged586_8_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<32, 1152>(result, in_FIFO_buf602_stencil_05_merged586_8_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_9_res = in_FIFO_buf602_stencil_05_merged586_9_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<64, 1152>(result, in_FIFO_buf602_stencil_05_merged586_9_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_10_res = in_FIFO_buf602_stencil_05_merged586_10_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<96, 1152>(result, in_FIFO_buf602_stencil_05_merged586_10_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_11_res = in_FIFO_buf602_stencil_05_merged586_11_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<128, 1152>(result, in_FIFO_buf602_stencil_05_merged586_11_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_12_res = in_FIFO_buf602_stencil_05_merged586_12_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<160, 1152>(result, in_FIFO_buf602_stencil_05_merged586_12_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_13_res = in_FIFO_buf602_stencil_05_merged586_13_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<192, 1152>(result, in_FIFO_buf602_stencil_05_merged586_13_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_14_res = in_FIFO_buf602_stencil_05_merged586_14_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<224, 1152>(result, in_FIFO_buf602_stencil_05_merged586_14_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_15_res = in_FIFO_buf602_stencil_05_merged586_15_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<256, 1152>(result, in_FIFO_buf602_stencil_05_merged586_15_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_16_res = in_FIFO_buf602_stencil_05_merged586_16_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<288, 1152>(result, in_FIFO_buf602_stencil_05_merged586_16_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_18_res = in_FIFO_buf602_stencil_05_merged586_18_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<320, 1152>(result, in_FIFO_buf602_stencil_05_merged586_18_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_19_res = in_FIFO_buf602_stencil_05_merged586_19_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<352, 1152>(result, in_FIFO_buf602_stencil_05_merged586_19_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_20_res = in_FIFO_buf602_stencil_05_merged586_20_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<384, 1152>(result, in_FIFO_buf602_stencil_05_merged586_20_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_21_res = in_FIFO_buf602_stencil_05_merged586_21_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<416, 1152>(result, in_FIFO_buf602_stencil_05_merged586_21_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_22_res = in_FIFO_buf602_stencil_05_merged586_22_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<448, 1152>(result, in_FIFO_buf602_stencil_05_merged586_22_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_23_res = in_FIFO_buf602_stencil_05_merged586_23_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<480, 1152>(result, in_FIFO_buf602_stencil_05_merged586_23_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_24_res = in_FIFO_buf602_stencil_05_merged586_24_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<512, 1152>(result, in_FIFO_buf602_stencil_05_merged586_24_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_25_res = in_FIFO_buf602_stencil_05_merged586_25_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<544, 1152>(result, in_FIFO_buf602_stencil_05_merged586_25_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_26_res = in_FIFO_buf602_stencil_05_merged586_26_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<576, 1152>(result, in_FIFO_buf602_stencil_05_merged586_26_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_28_res = in_FIFO_buf602_stencil_05_merged586_28_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<608, 1152>(result, in_FIFO_buf602_stencil_05_merged586_28_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_29_res = in_FIFO_buf602_stencil_05_merged586_29_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<640, 1152>(result, in_FIFO_buf602_stencil_05_merged586_29_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_30_res = in_FIFO_buf602_stencil_05_merged586_30_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<672, 1152>(result, in_FIFO_buf602_stencil_05_merged586_30_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_31_res = in_FIFO_buf602_stencil_05_merged586_31_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<704, 1152>(result, in_FIFO_buf602_stencil_05_merged586_31_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_32_res = in_FIFO_buf602_stencil_05_merged586_32_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<736, 1152>(result, in_FIFO_buf602_stencil_05_merged586_32_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_33_res = in_FIFO_buf602_stencil_05_merged586_33_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<768, 1152>(result, in_FIFO_buf602_stencil_05_merged586_33_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_34_res = in_FIFO_buf602_stencil_05_merged586_34_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<800, 1152>(result, in_FIFO_buf602_stencil_05_merged586_34_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_35_res = in_FIFO_buf602_stencil_05_merged586_35_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<832, 1152>(result, in_FIFO_buf602_stencil_05_merged586_35_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_36_res = in_FIFO_buf602_stencil_05_merged586_36_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<864, 1152>(result, in_FIFO_buf602_stencil_05_merged586_36_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_38_res = in_FIFO_buf602_stencil_05_merged586_38_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<896, 1152>(result, in_FIFO_buf602_stencil_05_merged586_38_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_39_res = in_FIFO_buf602_stencil_05_merged586_39_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<928, 1152>(result, in_FIFO_buf602_stencil_05_merged586_39_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_40_res = in_FIFO_buf602_stencil_05_merged586_40_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<960, 1152>(result, in_FIFO_buf602_stencil_05_merged586_40_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_41_res = in_FIFO_buf602_stencil_05_merged586_41_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<992, 1152>(result, in_FIFO_buf602_stencil_05_merged586_41_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_42_res = in_FIFO_buf602_stencil_05_merged586_42_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<1024, 1152>(result, in_FIFO_buf602_stencil_05_merged586_42_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_43_res = in_FIFO_buf602_stencil_05_merged586_43_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<1056, 1152>(result, in_FIFO_buf602_stencil_05_merged586_43_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_44_res = in_FIFO_buf602_stencil_05_merged586_44_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<1088, 1152>(result, in_FIFO_buf602_stencil_05_merged586_44_res);
	hw_uint<32>  in_FIFO_buf602_stencil_05_merged586_45_res = in_FIFO_buf602_stencil_05_merged586_45_select(in_FIFO_buf602, root, stencil_04, stencil_05, dynamic_address);
	set_at<1120, 1152>(result, in_FIFO_buf602_stencil_05_merged586_45_res);
	return result;
}

#include "hw_classes.h"

struct stencil_0_stencil_05_merged586_2_to_stencil_0_store_to_stencil_0_to_gp_36095_1_cache {
	// RAM Box: {[-1, 135], [-4, 131]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_0_stencil_05_merged586_3_to_stencil_0_store_to_stencil_0_to_gp_36095_1_cache {
	// RAM Box: {[-2, 134], [-4, 131]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_0_stencil_05_merged586_4_to_stencil_0_store_to_stencil_0_to_gp_36095_1_cache {
	// RAM Box: {[-3, 137], [-4, 131]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_0_stencil_05_merged586_5_to_stencil_0_store_to_stencil_0_to_gp_36095_1_cache {
	// RAM Box: {[-4, 136], [-4, 131]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_0_cache {
  // # of banks: 4
  stencil_0_stencil_05_merged586_2_to_stencil_0_store_to_stencil_0_to_gp_36095_1_cache stencil_0_stencil_05_merged586_2_to_stencil_0_store_to_stencil_0_to_gp_36095_1;
  stencil_0_stencil_05_merged586_3_to_stencil_0_store_to_stencil_0_to_gp_36095_1_cache stencil_0_stencil_05_merged586_3_to_stencil_0_store_to_stencil_0_to_gp_36095_1;
  stencil_0_stencil_05_merged586_4_to_stencil_0_store_to_stencil_0_to_gp_36095_1_cache stencil_0_stencil_05_merged586_4_to_stencil_0_store_to_stencil_0_to_gp_36095_1;
  stencil_0_stencil_05_merged586_5_to_stencil_0_store_to_stencil_0_to_gp_36095_1_cache stencil_0_stencil_05_merged586_5_to_stencil_0_store_to_stencil_0_to_gp_36095_1;
};



inline void stencil_0_stencil_05_merged586_2_write(hw_uint<32> & stencil_0_stencil_05_merged586_2, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_stencil_05_merged586_2_to_stencil_0_store_to_stencil_0_to_gp_36095_1.push(stencil_0_stencil_05_merged586_2);
}

inline void stencil_0_stencil_05_merged586_3_write(hw_uint<32> & stencil_0_stencil_05_merged586_3, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_stencil_05_merged586_3_to_stencil_0_store_to_stencil_0_to_gp_36095_1.push(stencil_0_stencil_05_merged586_3);
}

inline void stencil_0_stencil_05_merged586_4_write(hw_uint<32> & stencil_0_stencil_05_merged586_4, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_stencil_05_merged586_4_to_stencil_0_store_to_stencil_0_to_gp_36095_1.push(stencil_0_stencil_05_merged586_4);
}

inline void stencil_0_stencil_05_merged586_5_write(hw_uint<32> & stencil_0_stencil_05_merged586_5, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_stencil_05_merged586_5_to_stencil_0_store_to_stencil_0_to_gp_36095_1.push(stencil_0_stencil_05_merged586_5);
}

inline hw_uint<32>  stencil_0_stencil_05_merged586_17_select(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_05_merged586_17 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> stencil_0[-2 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_05_merged586_27_select(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_05_merged586_27 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> stencil_0[-3 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_05_merged586_37_select(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_05_merged586_37 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> stencil_0[-4 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_05_merged586_7_select(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_05_merged586_7 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> stencil_0[-1 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  return 0;
}

inline hw_uint<32>  stencil_0_store_to_stencil_0_to_gp_36095_1_select(stencil_0_cache& stencil_0, int root, int stencil_0_ld4, int stencil_0_ld3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_store_to_stencil_0_to_gp_36095_1 read pattern: { store_to_stencil_0_to_gp_36095[root = 0, stencil_0_ld4, stencil_0_ld3] -> stencil_0[stencil_0_ld3, stencil_0_ld4] : -4 <= stencil_0_ld4 <= 131 and -4 <= stencil_0_ld3 <= 137 }
  if ((((-1 - stencil_0_ld3 + 4*floord(1 + stencil_0_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_0_to_gp_36095[root = 0, stencil_0_ld4, stencil_0_ld3] -> [4 + stencil_0_ld4, 4 + stencil_0_ld3, 2] : -4 <= stencil_0_ld4 <= 131 and -4 <= stencil_0_ld3 <= 137 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
    auto value_stencil_0_stencil_05_merged586_2 = stencil_0.stencil_0_stencil_05_merged586_2_to_stencil_0_store_to_stencil_0_to_gp_36095_1.peek(/* one reader or all rams */ 0);
    return value_stencil_0_stencil_05_merged586_2;
  }

  
  if ((((-2 - stencil_0_ld3 + 4*floord(2 + stencil_0_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_0_to_gp_36095[root = 0, stencil_0_ld4, stencil_0_ld3] -> [4 + stencil_0_ld4, 4 + stencil_0_ld3, 2] : -4 <= stencil_0_ld4 <= 131 and -4 <= stencil_0_ld3 <= 137 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
    auto value_stencil_0_stencil_05_merged586_3 = stencil_0.stencil_0_stencil_05_merged586_3_to_stencil_0_store_to_stencil_0_to_gp_36095_1.peek(/* one reader or all rams */ 0);
    return value_stencil_0_stencil_05_merged586_3;
  }

  
  if ((((1 - stencil_0_ld3 + 4*floord(-1 + stencil_0_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_0_to_gp_36095[root = 0, stencil_0_ld4, stencil_0_ld3] -> [4 + stencil_0_ld4, 4 + stencil_0_ld3, 2] : -4 <= stencil_0_ld4 <= 131 and -4 <= stencil_0_ld3 <= 137 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
    auto value_stencil_0_stencil_05_merged586_4 = stencil_0.stencil_0_stencil_05_merged586_4_to_stencil_0_store_to_stencil_0_to_gp_36095_1.peek(/* one reader or all rams */ 0);
    return value_stencil_0_stencil_05_merged586_4;
  }

  
  if ((((-stencil_0_ld3 + 4*floord(stencil_0_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_0_to_gp_36095[root = 0, stencil_0_ld4, stencil_0_ld3] -> [4 + stencil_0_ld4, 4 + stencil_0_ld3, 2] : -4 <= stencil_0_ld4 <= 131 and -4 <= stencil_0_ld3 <= 137 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
    auto value_stencil_0_stencil_05_merged586_5 = stencil_0.stencil_0_stencil_05_merged586_5_to_stencil_0_store_to_stencil_0_to_gp_36095_1.peek(/* one reader or all rams */ 0);
    return value_stencil_0_stencil_05_merged586_5;
  }

  
  return 0;
}

// # of bundles = 3
// stencil_05_merged586_read
//	stencil_0_stencil_05_merged586_7
//	stencil_0_stencil_05_merged586_17
//	stencil_0_stencil_05_merged586_27
//	stencil_0_stencil_05_merged586_37
inline hw_uint<128> stencil_0_stencil_05_merged586_read_bundle_read(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_0_stencil_05_merged586_7
    // stencil_0_stencil_05_merged586_17
    // stencil_0_stencil_05_merged586_27
    // stencil_0_stencil_05_merged586_37

	hw_uint<128> result;
	hw_uint<32>  stencil_0_stencil_05_merged586_7_res = stencil_0_stencil_05_merged586_7_select(stencil_0, root, stencil_04, stencil_05, dynamic_address);
	set_at<0, 128>(result, stencil_0_stencil_05_merged586_7_res);
	hw_uint<32>  stencil_0_stencil_05_merged586_17_res = stencil_0_stencil_05_merged586_17_select(stencil_0, root, stencil_04, stencil_05, dynamic_address);
	set_at<32, 128>(result, stencil_0_stencil_05_merged586_17_res);
	hw_uint<32>  stencil_0_stencil_05_merged586_27_res = stencil_0_stencil_05_merged586_27_select(stencil_0, root, stencil_04, stencil_05, dynamic_address);
	set_at<64, 128>(result, stencil_0_stencil_05_merged586_27_res);
	hw_uint<32>  stencil_0_stencil_05_merged586_37_res = stencil_0_stencil_05_merged586_37_select(stencil_0, root, stencil_04, stencil_05, dynamic_address);
	set_at<96, 128>(result, stencil_0_stencil_05_merged586_37_res);
	return result;
}

// stencil_05_merged586_write
//	stencil_0_stencil_05_merged586_2
//	stencil_0_stencil_05_merged586_3
//	stencil_0_stencil_05_merged586_4
//	stencil_0_stencil_05_merged586_5
inline void stencil_0_stencil_05_merged586_write_bundle_write(hw_uint<128>& stencil_05_merged586_write, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
	hw_uint<32>  stencil_0_stencil_05_merged586_2_res = stencil_05_merged586_write.extract<0, 31>();
	stencil_0_stencil_05_merged586_2_write(stencil_0_stencil_05_merged586_2_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
	hw_uint<32>  stencil_0_stencil_05_merged586_3_res = stencil_05_merged586_write.extract<32, 63>();
	stencil_0_stencil_05_merged586_3_write(stencil_0_stencil_05_merged586_3_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
	hw_uint<32>  stencil_0_stencil_05_merged586_4_res = stencil_05_merged586_write.extract<64, 95>();
	stencil_0_stencil_05_merged586_4_write(stencil_0_stencil_05_merged586_4_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
	hw_uint<32>  stencil_0_stencil_05_merged586_5_res = stencil_05_merged586_write.extract<96, 127>();
	stencil_0_stencil_05_merged586_5_write(stencil_0_stencil_05_merged586_5_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
}

// store_to_stencil_0_to_gp_36095_read
//	stencil_0_store_to_stencil_0_to_gp_36095_1
inline hw_uint<32> stencil_0_store_to_stencil_0_to_gp_36095_read_bundle_read(stencil_0_cache& stencil_0, int root, int stencil_0_ld4, int stencil_0_ld3, int dynamic_address) {
  // # of ports in bundle: 1
    // stencil_0_store_to_stencil_0_to_gp_36095_1

	hw_uint<32> result;
	hw_uint<32>  stencil_0_store_to_stencil_0_to_gp_36095_1_res = stencil_0_store_to_stencil_0_to_gp_36095_1_select(stencil_0, root, stencil_0_ld4, stencil_0_ld3, dynamic_address);
	set_at<0, 32>(result, stencil_0_store_to_stencil_0_to_gp_36095_1_res);
	return result;
}

// Total re-use buffer capacity: 9504 bits


// Operation logic
inline void stencil_05_merged586(in_FIFO_buf602_cache& in_FIFO_buf602, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05) {
  // Dynamic address computation

	// Consume: in_FIFO_buf602
	auto in_FIFO_buf602__lp__lp_4_m_stencil_05__p__3_rp___p___m_4_rp___p__1_c_________lp_stencil_04__p___m_4_rp___p___m_1_value = in_FIFO_buf602_stencil_05_merged586_read_bundle_read(in_FIFO_buf602/* source_delay */, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_0
	auto stencil_0__lp__lp_4_m_stencil_05__p__3_rp___p___m_4_rp__c_________lp_stencil_04__p___m_4_rp__value = stencil_0_stencil_05_merged586_read_bundle_read(stencil_0/* source_delay */, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_05_cu584(in_FIFO_buf602__lp__lp_4_m_stencil_05__p__3_rp___p___m_4_rp___p__1_c_________lp_stencil_04__p___m_4_rp___p___m_1_value, stencil_0__lp__lp_4_m_stencil_05__p__3_rp___p___m_4_rp__c_________lp_stencil_04__p___m_4_rp__value);
	// Produce: stencil_0
	stencil_0_stencil_05_merged586_write_bundle_write(/* arg names */compute_result, stencil_0, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_FIFO_buf6022(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_to_gp_2608, in_FIFO_buf602_cache& in_FIFO_buf602, int root, int in_ld1, int in_ld0) {
  // Dynamic address computation

	// Consume: in_to_gp_2608
	auto in_to_gp_2608_in_ld0_c__in_ld1_value = in_to_gp_2608.read();
	// Produce: in_FIFO_buf602
	in_FIFO_buf602_load_to_in_FIFO_buf6022_write_bundle_write(/* arg names */in_to_gp_2608_in_ld0_c__in_ld1_value, in_FIFO_buf602, root, in_ld1, in_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_stencil_0_to_gp_36095(stencil_0_cache& stencil_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_0_to_gp_3609, int root, int stencil_0_ld4, int stencil_0_ld3) {
  // Dynamic address computation

	// Consume: stencil_0
	auto stencil_0_stencil_0_ld3_c__stencil_0_ld4_value = stencil_0_store_to_stencil_0_to_gp_36095_read_bundle_read(stencil_0/* source_delay */, root, stencil_0_ld4, stencil_0_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stencil_0_to_gp_3609
	stencil_0_to_gp_3609.write(stencil_0_stencil_0_ld3_c__stencil_0_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stencil_04_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_to_gp_2608, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_0_to_gp_3609) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stencil_04__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_FIFO_buf602_cache in_FIFO_buf602;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_0_cache stencil_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35; load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140; store_to_stencil_0_to_gp_36095[root = 0, stencil_0_ld4, stencil_0_ld3] -> [4 + stencil_0_ld4, 4 + stencil_0_ld3, 2] : -4 <= stencil_0_ld4 <= 131 and -4 <= stencil_0_ld3 <= 137 }
//   { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [stencil_04, 4stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
// Condition for stencil_05_merged586(((-i1 + 4*floord(i1, 4) == 0) && (-1 + i2 == 0) && (i0 >= 0) && (135 - i0 >= 0) && (i1 >= 0) && (140 - i1 >= 0)))
//   { load_to_in_FIFO_buf6022[root = 0, in_ld1, in_ld0] -> [3 + in_ld1, in_ld0, 0] : -5 <= in_ld1 <= 132 and -5 <= in_ld0 <= 140 }
// Condition for load_to_in_FIFO_buf6022(((i2 == 0) && (2 + i0 >= 0) && (135 - i0 >= 0) && (5 + i1 >= 0) && (140 - i1 >= 0)))
//   { store_to_stencil_0_to_gp_36095[root = 0, stencil_0_ld4, stencil_0_ld3] -> [4 + stencil_0_ld4, 4 + stencil_0_ld3, 2] : -4 <= stencil_0_ld4 <= 131 and -4 <= stencil_0_ld3 <= 137 }
// Condition for store_to_stencil_0_to_gp_36095(((-2 + i2 == 0) && (i0 >= 0) && (135 - i0 >= 0) && (i1 >= 0) && (141 - i1 >= 0)))

  /*
for (int c0 = -2; c0 <= 135; c0 += 1)
  for (int c1 = -5; c1 <= 141; c1 += 1) {
    if (c1 <= 140) {
      load_to_in_FIFO_buf6022(0, c0 - 3, c1);
      if (c0 >= 0 && c1 >= 0 && c1 % 4 == 0)
        stencil_05_merged586(0, c0, c1 / 4);
    }
    if (c0 >= 0 && c1 >= 0)
      store_to_stencil_0_to_gp_36095(0, c0 - 4, c1 - 4);
  }

  */
	for (int c0 = -2; c0 <= 135; c0 += 1)
	  for (int c1 = -5; c1 <= 141; c1 += 1) {
	    if (c1 <= 140) {
	      load_to_in_FIFO_buf6022(in_to_gp_2608 /* buf name */, in_FIFO_buf602, 0, c0 - 3, c1);
	      if (c0 >= 0 && c1 >= 0 && c1 % 4 == 0)
	        stencil_05_merged586(in_FIFO_buf602 /* buf name */, stencil_0 /* buf name */, 0, c0, c1 / 4);
	    }
	    if (c0 >= 0 && c1 >= 0)
	      store_to_stencil_0_to_gp_36095(stencil_0 /* buf name */, stencil_0_to_gp_3609, 0, c0 - 4, c1 - 4);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_stencil_04__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_to_gp_2608, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_0_to_gp_3609, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_stencil_04_(in_to_gp_2608, stencil_0_to_gp_3609);
  }
}
#include "hw_classes.h"

struct stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36_cache {
	// RAM Box: {[-4, 137], [-4, 131]}
	// Capacity: 290
	// # of read delays: 18
  // 0, 1, 2, 3, 4, 5, 142, 143, 144, 145, 146, 147, 284, 285, 286, 287, 288, 289
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 136> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;
	hw_uint<32>  f18;
	hw_uint<32>  f20;
	hw_uint<32>  f22;
	fifo<hw_uint<32> , 136> f23;
	hw_uint<32>  f24;
	hw_uint<32>  f26;
	hw_uint<32>  f28;
	hw_uint<32>  f30;
	hw_uint<32>  f32;
	hw_uint<32>  f34;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_3() {
		return f6;
	}

	inline hw_uint<32>  peek_4() {
		return f8;
	}

	inline hw_uint<32>  peek_5() {
		return f10;
	}

	inline hw_uint<32>  peek_141() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_142() {
		return f12;
	}

	inline hw_uint<32>  peek_143() {
		return f14;
	}

	inline hw_uint<32>  peek_144() {
		return f16;
	}

	inline hw_uint<32>  peek_145() {
		return f18;
	}

	inline hw_uint<32>  peek_146() {
		return f20;
	}

	inline hw_uint<32>  peek_147() {
		return f22;
	}

	inline hw_uint<32>  peek_283() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f23.back();
	}

	inline hw_uint<32>  peek_284() {
		return f24;
	}

	inline hw_uint<32>  peek_285() {
		return f26;
	}

	inline hw_uint<32>  peek_286() {
		return f28;
	}

	inline hw_uint<32>  peek_287() {
		return f30;
	}

	inline hw_uint<32>  peek_288() {
		return f32;
	}

	inline hw_uint<32>  peek_289() {
		return f34;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f30 = f28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 136
    f24 = f23.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 136 reading from capacity: 1
    f23.push(f22);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 136
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 136 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_0_FIFO_buf603_cache {
  // # of banks: 1
  stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36_cache stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36;
};



inline void stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_write(hw_uint<32> & stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46, stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_0_ld1, int stencil_0_ld0, int dynamic_address) {
  stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.push(stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46);
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_10_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_10 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_142();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_11_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_11 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_143();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_12_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_12 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_144();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_13_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_13 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[1 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_0();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_14_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_14 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_1();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_15_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_15 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-1 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_2();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_16_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_16 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_285();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_18_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_18 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-1 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_286();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_19_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_19 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-2 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_287();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_20_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_20 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_143();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_21_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_21 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_144();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_22_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_22 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-2 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_145();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_23_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_23 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_1();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_24_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_24 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-1 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_2();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_25_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_25 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-2 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_3();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_26_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_26 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-1 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_286();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_28_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_28 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-2 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_287();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_29_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_29 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-3 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_288();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_30_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_30 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_144();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_31_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_31 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-2 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_145();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_32_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_32 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-3 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_146();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_33_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_33 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-1 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_2();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_34_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_34 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-2 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_3();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_35_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_35 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-3 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_4();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_36_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_36 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-2 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_287();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_38_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_38 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-3 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_288();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_39_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_39 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-4 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_289();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_40_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_40 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-2 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_145();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_41_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_41 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-3 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_146();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_42_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_42 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-4 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_147();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_43_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_43 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-2 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_3();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_44_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_44 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-3 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_4();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_45_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_45 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-4 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_5();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_6_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_6 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[1 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_284();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_8_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_8 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_285();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

inline hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_9_select(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf603_stencil_111_merged589_9 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0_FIFO_buf603[-1 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
  auto value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46 = stencil_0_FIFO_buf603.stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_merged_banks_36.peek_286();
  return value_stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46;
  return 0;
}

// # of bundles = 2
// load_to_stencil_0_FIFO_buf6032_write
//	stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46
inline void stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_write_bundle_write(hw_uint<32>& load_to_stencil_0_FIFO_buf6032_write, stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_0_ld1, int stencil_0_ld0, int dynamic_address) {
	hw_uint<32>  stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_res = load_to_stencil_0_FIFO_buf6032_write.extract<0, 31>();
	stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_write(stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_46_res, stencil_0_FIFO_buf603, root, stencil_0_ld1, stencil_0_ld0, dynamic_address);
}

// stencil_111_merged589_read
//	stencil_0_FIFO_buf603_stencil_111_merged589_6
//	stencil_0_FIFO_buf603_stencil_111_merged589_8
//	stencil_0_FIFO_buf603_stencil_111_merged589_9
//	stencil_0_FIFO_buf603_stencil_111_merged589_10
//	stencil_0_FIFO_buf603_stencil_111_merged589_11
//	stencil_0_FIFO_buf603_stencil_111_merged589_12
//	stencil_0_FIFO_buf603_stencil_111_merged589_13
//	stencil_0_FIFO_buf603_stencil_111_merged589_14
//	stencil_0_FIFO_buf603_stencil_111_merged589_15
//	stencil_0_FIFO_buf603_stencil_111_merged589_16
//	stencil_0_FIFO_buf603_stencil_111_merged589_18
//	stencil_0_FIFO_buf603_stencil_111_merged589_19
//	stencil_0_FIFO_buf603_stencil_111_merged589_20
//	stencil_0_FIFO_buf603_stencil_111_merged589_21
//	stencil_0_FIFO_buf603_stencil_111_merged589_22
//	stencil_0_FIFO_buf603_stencil_111_merged589_23
//	stencil_0_FIFO_buf603_stencil_111_merged589_24
//	stencil_0_FIFO_buf603_stencil_111_merged589_25
//	stencil_0_FIFO_buf603_stencil_111_merged589_26
//	stencil_0_FIFO_buf603_stencil_111_merged589_28
//	stencil_0_FIFO_buf603_stencil_111_merged589_29
//	stencil_0_FIFO_buf603_stencil_111_merged589_30
//	stencil_0_FIFO_buf603_stencil_111_merged589_31
//	stencil_0_FIFO_buf603_stencil_111_merged589_32
//	stencil_0_FIFO_buf603_stencil_111_merged589_33
//	stencil_0_FIFO_buf603_stencil_111_merged589_34
//	stencil_0_FIFO_buf603_stencil_111_merged589_35
//	stencil_0_FIFO_buf603_stencil_111_merged589_36
//	stencil_0_FIFO_buf603_stencil_111_merged589_38
//	stencil_0_FIFO_buf603_stencil_111_merged589_39
//	stencil_0_FIFO_buf603_stencil_111_merged589_40
//	stencil_0_FIFO_buf603_stencil_111_merged589_41
//	stencil_0_FIFO_buf603_stencil_111_merged589_42
//	stencil_0_FIFO_buf603_stencil_111_merged589_43
//	stencil_0_FIFO_buf603_stencil_111_merged589_44
//	stencil_0_FIFO_buf603_stencil_111_merged589_45
inline hw_uint<1152> stencil_0_FIFO_buf603_stencil_111_merged589_read_bundle_read(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_110, int stencil_111, int dynamic_address) {
  // # of ports in bundle: 36
    // stencil_0_FIFO_buf603_stencil_111_merged589_6
    // stencil_0_FIFO_buf603_stencil_111_merged589_8
    // stencil_0_FIFO_buf603_stencil_111_merged589_9
    // stencil_0_FIFO_buf603_stencil_111_merged589_10
    // stencil_0_FIFO_buf603_stencil_111_merged589_11
    // stencil_0_FIFO_buf603_stencil_111_merged589_12
    // stencil_0_FIFO_buf603_stencil_111_merged589_13
    // stencil_0_FIFO_buf603_stencil_111_merged589_14
    // stencil_0_FIFO_buf603_stencil_111_merged589_15
    // stencil_0_FIFO_buf603_stencil_111_merged589_16
    // stencil_0_FIFO_buf603_stencil_111_merged589_18
    // stencil_0_FIFO_buf603_stencil_111_merged589_19
    // stencil_0_FIFO_buf603_stencil_111_merged589_20
    // stencil_0_FIFO_buf603_stencil_111_merged589_21
    // stencil_0_FIFO_buf603_stencil_111_merged589_22
    // stencil_0_FIFO_buf603_stencil_111_merged589_23
    // stencil_0_FIFO_buf603_stencil_111_merged589_24
    // stencil_0_FIFO_buf603_stencil_111_merged589_25
    // stencil_0_FIFO_buf603_stencil_111_merged589_26
    // stencil_0_FIFO_buf603_stencil_111_merged589_28
    // stencil_0_FIFO_buf603_stencil_111_merged589_29
    // stencil_0_FIFO_buf603_stencil_111_merged589_30
    // stencil_0_FIFO_buf603_stencil_111_merged589_31
    // stencil_0_FIFO_buf603_stencil_111_merged589_32
    // stencil_0_FIFO_buf603_stencil_111_merged589_33
    // stencil_0_FIFO_buf603_stencil_111_merged589_34
    // stencil_0_FIFO_buf603_stencil_111_merged589_35
    // stencil_0_FIFO_buf603_stencil_111_merged589_36
    // stencil_0_FIFO_buf603_stencil_111_merged589_38
    // stencil_0_FIFO_buf603_stencil_111_merged589_39
    // stencil_0_FIFO_buf603_stencil_111_merged589_40
    // stencil_0_FIFO_buf603_stencil_111_merged589_41
    // stencil_0_FIFO_buf603_stencil_111_merged589_42
    // stencil_0_FIFO_buf603_stencil_111_merged589_43
    // stencil_0_FIFO_buf603_stencil_111_merged589_44
    // stencil_0_FIFO_buf603_stencil_111_merged589_45

	hw_uint<1152> result;
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_6_res = stencil_0_FIFO_buf603_stencil_111_merged589_6_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<0, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_6_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_8_res = stencil_0_FIFO_buf603_stencil_111_merged589_8_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<32, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_8_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_9_res = stencil_0_FIFO_buf603_stencil_111_merged589_9_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<64, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_9_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_10_res = stencil_0_FIFO_buf603_stencil_111_merged589_10_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<96, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_10_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_11_res = stencil_0_FIFO_buf603_stencil_111_merged589_11_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<128, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_11_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_12_res = stencil_0_FIFO_buf603_stencil_111_merged589_12_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<160, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_12_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_13_res = stencil_0_FIFO_buf603_stencil_111_merged589_13_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<192, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_13_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_14_res = stencil_0_FIFO_buf603_stencil_111_merged589_14_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<224, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_14_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_15_res = stencil_0_FIFO_buf603_stencil_111_merged589_15_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<256, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_15_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_16_res = stencil_0_FIFO_buf603_stencil_111_merged589_16_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<288, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_16_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_18_res = stencil_0_FIFO_buf603_stencil_111_merged589_18_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<320, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_18_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_19_res = stencil_0_FIFO_buf603_stencil_111_merged589_19_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<352, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_19_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_20_res = stencil_0_FIFO_buf603_stencil_111_merged589_20_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<384, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_20_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_21_res = stencil_0_FIFO_buf603_stencil_111_merged589_21_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<416, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_21_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_22_res = stencil_0_FIFO_buf603_stencil_111_merged589_22_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<448, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_22_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_23_res = stencil_0_FIFO_buf603_stencil_111_merged589_23_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<480, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_23_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_24_res = stencil_0_FIFO_buf603_stencil_111_merged589_24_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<512, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_24_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_25_res = stencil_0_FIFO_buf603_stencil_111_merged589_25_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<544, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_25_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_26_res = stencil_0_FIFO_buf603_stencil_111_merged589_26_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<576, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_26_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_28_res = stencil_0_FIFO_buf603_stencil_111_merged589_28_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<608, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_28_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_29_res = stencil_0_FIFO_buf603_stencil_111_merged589_29_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<640, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_29_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_30_res = stencil_0_FIFO_buf603_stencil_111_merged589_30_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<672, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_30_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_31_res = stencil_0_FIFO_buf603_stencil_111_merged589_31_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<704, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_31_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_32_res = stencil_0_FIFO_buf603_stencil_111_merged589_32_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<736, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_32_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_33_res = stencil_0_FIFO_buf603_stencil_111_merged589_33_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<768, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_33_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_34_res = stencil_0_FIFO_buf603_stencil_111_merged589_34_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<800, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_34_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_35_res = stencil_0_FIFO_buf603_stencil_111_merged589_35_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<832, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_35_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_36_res = stencil_0_FIFO_buf603_stencil_111_merged589_36_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<864, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_36_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_38_res = stencil_0_FIFO_buf603_stencil_111_merged589_38_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<896, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_38_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_39_res = stencil_0_FIFO_buf603_stencil_111_merged589_39_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<928, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_39_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_40_res = stencil_0_FIFO_buf603_stencil_111_merged589_40_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<960, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_40_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_41_res = stencil_0_FIFO_buf603_stencil_111_merged589_41_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<992, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_41_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_42_res = stencil_0_FIFO_buf603_stencil_111_merged589_42_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<1024, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_42_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_43_res = stencil_0_FIFO_buf603_stencil_111_merged589_43_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<1056, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_43_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_44_res = stencil_0_FIFO_buf603_stencil_111_merged589_44_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<1088, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_44_res);
	hw_uint<32>  stencil_0_FIFO_buf603_stencil_111_merged589_45_res = stencil_0_FIFO_buf603_stencil_111_merged589_45_select(stencil_0_FIFO_buf603, root, stencil_110, stencil_111, dynamic_address);
	set_at<1120, 1152>(result, stencil_0_FIFO_buf603_stencil_111_merged589_45_res);
	return result;
}

#include "hw_classes.h"

struct stencil_1_stencil_111_merged589_2_to_stencil_1_store_to_stencil_1_to_gp_46105_1_cache {
	// RAM Box: {[0, 132], [-3, 130]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_1_stencil_111_merged589_3_to_stencil_1_store_to_stencil_1_to_gp_46105_1_cache {
	// RAM Box: {[-1, 131], [-3, 130]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_1_stencil_111_merged589_4_to_stencil_1_store_to_stencil_1_to_gp_46105_1_cache {
	// RAM Box: {[-2, 134], [-3, 130]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_1_stencil_111_merged589_5_to_stencil_1_store_to_stencil_1_to_gp_46105_1_cache {
	// RAM Box: {[-3, 133], [-3, 130]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_1_cache {
  // # of banks: 4
  stencil_1_stencil_111_merged589_2_to_stencil_1_store_to_stencil_1_to_gp_46105_1_cache stencil_1_stencil_111_merged589_2_to_stencil_1_store_to_stencil_1_to_gp_46105_1;
  stencil_1_stencil_111_merged589_3_to_stencil_1_store_to_stencil_1_to_gp_46105_1_cache stencil_1_stencil_111_merged589_3_to_stencil_1_store_to_stencil_1_to_gp_46105_1;
  stencil_1_stencil_111_merged589_4_to_stencil_1_store_to_stencil_1_to_gp_46105_1_cache stencil_1_stencil_111_merged589_4_to_stencil_1_store_to_stencil_1_to_gp_46105_1;
  stencil_1_stencil_111_merged589_5_to_stencil_1_store_to_stencil_1_to_gp_46105_1_cache stencil_1_stencil_111_merged589_5_to_stencil_1_store_to_stencil_1_to_gp_46105_1;
};



inline void stencil_1_stencil_111_merged589_2_write(hw_uint<32> & stencil_1_stencil_111_merged589_2, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  stencil_1.stencil_1_stencil_111_merged589_2_to_stencil_1_store_to_stencil_1_to_gp_46105_1.push(stencil_1_stencil_111_merged589_2);
}

inline void stencil_1_stencil_111_merged589_3_write(hw_uint<32> & stencil_1_stencil_111_merged589_3, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  stencil_1.stencil_1_stencil_111_merged589_3_to_stencil_1_store_to_stencil_1_to_gp_46105_1.push(stencil_1_stencil_111_merged589_3);
}

inline void stencil_1_stencil_111_merged589_4_write(hw_uint<32> & stencil_1_stencil_111_merged589_4, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  stencil_1.stencil_1_stencil_111_merged589_4_to_stencil_1_store_to_stencil_1_to_gp_46105_1.push(stencil_1_stencil_111_merged589_4);
}

inline void stencil_1_stencil_111_merged589_5_write(hw_uint<32> & stencil_1_stencil_111_merged589_5, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  stencil_1.stencil_1_stencil_111_merged589_5_to_stencil_1_store_to_stencil_1_to_gp_46105_1.push(stencil_1_stencil_111_merged589_5);
}

inline hw_uint<32>  stencil_1_stencil_111_merged589_17_select(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_111_merged589_17 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_1[-1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_111_merged589_27_select(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_111_merged589_27 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_1[-2 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_111_merged589_37_select(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_111_merged589_37 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_1[-3 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_111_merged589_7_select(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_111_merged589_7 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_1[4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  return 0;
}

inline hw_uint<32>  stencil_1_store_to_stencil_1_to_gp_46105_1_select(stencil_1_cache& stencil_1, int root, int stencil_1_ld4, int stencil_1_ld3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_store_to_stencil_1_to_gp_46105_1 read pattern: { store_to_stencil_1_to_gp_46105[root = 0, stencil_1_ld4, stencil_1_ld3] -> stencil_1[stencil_1_ld3, stencil_1_ld4] : -3 <= stencil_1_ld4 <= 130 and -3 <= stencil_1_ld3 <= 134 }
  if ((((-stencil_1_ld3 + 4*floord(stencil_1_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_1_to_gp_46105[root = 0, stencil_1_ld4, stencil_1_ld3] -> [3 + stencil_1_ld4, 4 + stencil_1_ld3, 2] : -3 <= stencil_1_ld4 <= 130 and -3 <= stencil_1_ld3 <= 134 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
    auto value_stencil_1_stencil_111_merged589_2 = stencil_1.stencil_1_stencil_111_merged589_2_to_stencil_1_store_to_stencil_1_to_gp_46105_1.peek(/* one reader or all rams */ 0);
    return value_stencil_1_stencil_111_merged589_2;
  }

  
  if ((((-1 - stencil_1_ld3 + 4*floord(1 + stencil_1_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_1_to_gp_46105[root = 0, stencil_1_ld4, stencil_1_ld3] -> [3 + stencil_1_ld4, 4 + stencil_1_ld3, 2] : -3 <= stencil_1_ld4 <= 130 and -3 <= stencil_1_ld3 <= 134 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
    auto value_stencil_1_stencil_111_merged589_3 = stencil_1.stencil_1_stencil_111_merged589_3_to_stencil_1_store_to_stencil_1_to_gp_46105_1.peek(/* one reader or all rams */ 0);
    return value_stencil_1_stencil_111_merged589_3;
  }

  
  if ((((-2 - stencil_1_ld3 + 4*floord(2 + stencil_1_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_1_to_gp_46105[root = 0, stencil_1_ld4, stencil_1_ld3] -> [3 + stencil_1_ld4, 4 + stencil_1_ld3, 2] : -3 <= stencil_1_ld4 <= 130 and -3 <= stencil_1_ld3 <= 134 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
    auto value_stencil_1_stencil_111_merged589_4 = stencil_1.stencil_1_stencil_111_merged589_4_to_stencil_1_store_to_stencil_1_to_gp_46105_1.peek(/* one reader or all rams */ 0);
    return value_stencil_1_stencil_111_merged589_4;
  }

  
  if ((((1 - stencil_1_ld3 + 4*floord(-1 + stencil_1_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_1_to_gp_46105[root = 0, stencil_1_ld4, stencil_1_ld3] -> [3 + stencil_1_ld4, 4 + stencil_1_ld3, 2] : -3 <= stencil_1_ld4 <= 130 and -3 <= stencil_1_ld3 <= 134 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
    auto value_stencil_1_stencil_111_merged589_5 = stencil_1.stencil_1_stencil_111_merged589_5_to_stencil_1_store_to_stencil_1_to_gp_46105_1.peek(/* one reader or all rams */ 0);
    return value_stencil_1_stencil_111_merged589_5;
  }

  
  return 0;
}

// # of bundles = 3
// stencil_111_merged589_read
//	stencil_1_stencil_111_merged589_7
//	stencil_1_stencil_111_merged589_17
//	stencil_1_stencil_111_merged589_27
//	stencil_1_stencil_111_merged589_37
inline hw_uint<128> stencil_1_stencil_111_merged589_read_bundle_read(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_1_stencil_111_merged589_7
    // stencil_1_stencil_111_merged589_17
    // stencil_1_stencil_111_merged589_27
    // stencil_1_stencil_111_merged589_37

	hw_uint<128> result;
	hw_uint<32>  stencil_1_stencil_111_merged589_7_res = stencil_1_stencil_111_merged589_7_select(stencil_1, root, stencil_110, stencil_111, dynamic_address);
	set_at<0, 128>(result, stencil_1_stencil_111_merged589_7_res);
	hw_uint<32>  stencil_1_stencil_111_merged589_17_res = stencil_1_stencil_111_merged589_17_select(stencil_1, root, stencil_110, stencil_111, dynamic_address);
	set_at<32, 128>(result, stencil_1_stencil_111_merged589_17_res);
	hw_uint<32>  stencil_1_stencil_111_merged589_27_res = stencil_1_stencil_111_merged589_27_select(stencil_1, root, stencil_110, stencil_111, dynamic_address);
	set_at<64, 128>(result, stencil_1_stencil_111_merged589_27_res);
	hw_uint<32>  stencil_1_stencil_111_merged589_37_res = stencil_1_stencil_111_merged589_37_select(stencil_1, root, stencil_110, stencil_111, dynamic_address);
	set_at<96, 128>(result, stencil_1_stencil_111_merged589_37_res);
	return result;
}

// stencil_111_merged589_write
//	stencil_1_stencil_111_merged589_2
//	stencil_1_stencil_111_merged589_3
//	stencil_1_stencil_111_merged589_4
//	stencil_1_stencil_111_merged589_5
inline void stencil_1_stencil_111_merged589_write_bundle_write(hw_uint<128>& stencil_111_merged589_write, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
	hw_uint<32>  stencil_1_stencil_111_merged589_2_res = stencil_111_merged589_write.extract<0, 31>();
	stencil_1_stencil_111_merged589_2_write(stencil_1_stencil_111_merged589_2_res, stencil_1, root, stencil_110, stencil_111, dynamic_address);
	hw_uint<32>  stencil_1_stencil_111_merged589_3_res = stencil_111_merged589_write.extract<32, 63>();
	stencil_1_stencil_111_merged589_3_write(stencil_1_stencil_111_merged589_3_res, stencil_1, root, stencil_110, stencil_111, dynamic_address);
	hw_uint<32>  stencil_1_stencil_111_merged589_4_res = stencil_111_merged589_write.extract<64, 95>();
	stencil_1_stencil_111_merged589_4_write(stencil_1_stencil_111_merged589_4_res, stencil_1, root, stencil_110, stencil_111, dynamic_address);
	hw_uint<32>  stencil_1_stencil_111_merged589_5_res = stencil_111_merged589_write.extract<96, 127>();
	stencil_1_stencil_111_merged589_5_write(stencil_1_stencil_111_merged589_5_res, stencil_1, root, stencil_110, stencil_111, dynamic_address);
}

// store_to_stencil_1_to_gp_46105_read
//	stencil_1_store_to_stencil_1_to_gp_46105_1
inline hw_uint<32> stencil_1_store_to_stencil_1_to_gp_46105_read_bundle_read(stencil_1_cache& stencil_1, int root, int stencil_1_ld4, int stencil_1_ld3, int dynamic_address) {
  // # of ports in bundle: 1
    // stencil_1_store_to_stencil_1_to_gp_46105_1

	hw_uint<32> result;
	hw_uint<32>  stencil_1_store_to_stencil_1_to_gp_46105_1_res = stencil_1_store_to_stencil_1_to_gp_46105_1_select(stencil_1, root, stencil_1_ld4, stencil_1_ld3, dynamic_address);
	set_at<0, 32>(result, stencil_1_store_to_stencil_1_to_gp_46105_1_res);
	return result;
}

// Total re-use buffer capacity: 9248 bits


// Operation logic
inline void stencil_111_merged589(stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111) {
  // Dynamic address computation

	// Consume: stencil_0_FIFO_buf603
	auto stencil_0_FIFO_buf603__lp__lp_4_m_stencil_111__p__3_rp___p___m_3_rp___p__1_c_________lp_stencil_110__p___m_3_rp___p___m_1_value = stencil_0_FIFO_buf603_stencil_111_merged589_read_bundle_read(stencil_0_FIFO_buf603/* source_delay */, root, stencil_110, stencil_111, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_1
	auto stencil_1__lp__lp_4_m_stencil_111__p__3_rp___p___m_3_rp__c_________lp_stencil_110__p___m_3_rp__value = stencil_1_stencil_111_merged589_read_bundle_read(stencil_1/* source_delay */, root, stencil_110, stencil_111, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_111_cu587(stencil_0_FIFO_buf603__lp__lp_4_m_stencil_111__p__3_rp___p___m_3_rp___p__1_c_________lp_stencil_110__p___m_3_rp___p___m_1_value, stencil_1__lp__lp_4_m_stencil_111__p__3_rp___p___m_3_rp__c_________lp_stencil_110__p___m_3_rp__value);
	// Produce: stencil_1
	stencil_1_stencil_111_merged589_write_bundle_write(/* arg names */compute_result, stencil_1, root, stencil_110, stencil_111, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stencil_0_FIFO_buf6032(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_0_to_gp_3609, stencil_0_FIFO_buf603_cache& stencil_0_FIFO_buf603, int root, int stencil_0_ld1, int stencil_0_ld0) {
  // Dynamic address computation

	// Consume: stencil_0_to_gp_3609
	auto stencil_0_to_gp_3609_stencil_0_ld0_c__stencil_0_ld1_value = stencil_0_to_gp_3609.read();
	// Produce: stencil_0_FIFO_buf603
	stencil_0_FIFO_buf603_load_to_stencil_0_FIFO_buf6032_write_bundle_write(/* arg names */stencil_0_to_gp_3609_stencil_0_ld0_c__stencil_0_ld1_value, stencil_0_FIFO_buf603, root, stencil_0_ld1, stencil_0_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_stencil_1_to_gp_46105(stencil_1_cache& stencil_1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_1_to_gp_4610, int root, int stencil_1_ld4, int stencil_1_ld3) {
  // Dynamic address computation

	// Consume: stencil_1
	auto stencil_1_stencil_1_ld3_c__stencil_1_ld4_value = stencil_1_store_to_stencil_1_to_gp_46105_read_bundle_read(stencil_1/* source_delay */, root, stencil_1_ld4, stencil_1_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stencil_1_to_gp_4610
	stencil_1_to_gp_4610.write(stencil_1_stencil_1_ld3_c__stencil_1_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stencil_110_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_0_to_gp_3609, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_1_to_gp_4610) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stencil_110__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stencil_0_FIFO_buf603_cache stencil_0_FIFO_buf603;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_1_cache stencil_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { store_to_stencil_1_to_gp_46105[root = 0, stencil_1_ld4, stencil_1_ld3] -> [3 + stencil_1_ld4, 4 + stencil_1_ld3, 2] : -3 <= stencil_1_ld4 <= 130 and -3 <= stencil_1_ld3 <= 134; load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137; stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
//   { store_to_stencil_1_to_gp_46105[root = 0, stencil_1_ld4, stencil_1_ld3] -> [3 + stencil_1_ld4, 4 + stencil_1_ld3, 2] : -3 <= stencil_1_ld4 <= 130 and -3 <= stencil_1_ld3 <= 134 }
// Condition for store_to_stencil_1_to_gp_46105(((-2 + i2 == 0) && (i0 >= 0) && (133 - i0 >= 0) && (-1 + i1 >= 0) && (138 - i1 >= 0)))
//   { load_to_stencil_0_FIFO_buf6032[root = 0, stencil_0_ld1, stencil_0_ld0] -> [2 + stencil_0_ld1, stencil_0_ld0, 0] : -4 <= stencil_0_ld1 <= 131 and -4 <= stencil_0_ld0 <= 137 }
// Condition for load_to_stencil_0_FIFO_buf6032(((i2 == 0) && (2 + i0 >= 0) && (133 - i0 >= 0) && (4 + i1 >= 0) && (137 - i1 >= 0)))
//   { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [stencil_110, 1 + 4stencil_111, 1] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
// Condition for stencil_111_merged589(((1 - i1 + 4*floord(-1 + i1, 4) == 0) && (-1 + i2 == 0) && (i0 >= 0) && (133 - i0 >= 0) && (-1 + i1 >= 0) && (137 - i1 >= 0)))

  /*
for (int c0 = -2; c0 <= 133; c0 += 1)
  for (int c1 = -4; c1 <= 138; c1 += 1) {
    if (c1 <= 137) {
      load_to_stencil_0_FIFO_buf6032(0, c0 - 2, c1);
      if (c0 >= 0 && c1 >= 1 && (c1 - 1) % 4 == 0)
        stencil_111_merged589(0, c0, (c1 - 1) / 4);
    }
    if (c0 >= 0 && c1 >= 1)
      store_to_stencil_1_to_gp_46105(0, c0 - 3, c1 - 4);
  }

  */
	for (int c0 = -2; c0 <= 133; c0 += 1)
	  for (int c1 = -4; c1 <= 138; c1 += 1) {
	    if (c1 <= 137) {
	      load_to_stencil_0_FIFO_buf6032(stencil_0_to_gp_3609 /* buf name */, stencil_0_FIFO_buf603, 0, c0 - 2, c1);
	      if (c0 >= 0 && c1 >= 1 && (c1 - 1) % 4 == 0)
	        stencil_111_merged589(stencil_0_FIFO_buf603 /* buf name */, stencil_1 /* buf name */, 0, c0, (c1 - 1) / 4);
	    }
	    if (c0 >= 0 && c1 >= 1)
	      store_to_stencil_1_to_gp_46105(stencil_1 /* buf name */, stencil_1_to_gp_4610, 0, c0 - 3, c1 - 4);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_stencil_110__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_0_to_gp_3609, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_1_to_gp_4610, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_stencil_110_(stencil_0_to_gp_3609, stencil_1_to_gp_4610);
  }
}
#include "hw_classes.h"

struct stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36_cache {
	// RAM Box: {[-3, 134], [-3, 130]}
	// Capacity: 282
	// # of read delays: 18
  // 0, 1, 2, 3, 4, 5, 138, 139, 140, 141, 142, 143, 276, 277, 278, 279, 280, 281
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 132> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;
	hw_uint<32>  f18;
	hw_uint<32>  f20;
	hw_uint<32>  f22;
	fifo<hw_uint<32> , 132> f23;
	hw_uint<32>  f24;
	hw_uint<32>  f26;
	hw_uint<32>  f28;
	hw_uint<32>  f30;
	hw_uint<32>  f32;
	hw_uint<32>  f34;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_3() {
		return f6;
	}

	inline hw_uint<32>  peek_4() {
		return f8;
	}

	inline hw_uint<32>  peek_5() {
		return f10;
	}

	inline hw_uint<32>  peek_137() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_138() {
		return f12;
	}

	inline hw_uint<32>  peek_139() {
		return f14;
	}

	inline hw_uint<32>  peek_140() {
		return f16;
	}

	inline hw_uint<32>  peek_141() {
		return f18;
	}

	inline hw_uint<32>  peek_142() {
		return f20;
	}

	inline hw_uint<32>  peek_143() {
		return f22;
	}

	inline hw_uint<32>  peek_275() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f23.back();
	}

	inline hw_uint<32>  peek_276() {
		return f24;
	}

	inline hw_uint<32>  peek_277() {
		return f26;
	}

	inline hw_uint<32>  peek_278() {
		return f28;
	}

	inline hw_uint<32>  peek_279() {
		return f30;
	}

	inline hw_uint<32>  peek_280() {
		return f32;
	}

	inline hw_uint<32>  peek_281() {
		return f34;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f30 = f28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 132
    f24 = f23.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 132 reading from capacity: 1
    f23.push(f22);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 132
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 132 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_1_FIFO_buf604_cache {
  // # of banks: 1
  stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36_cache stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36;
};



inline void stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_write(hw_uint<32> & stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46, stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_1_ld1, int stencil_1_ld0, int dynamic_address) {
  stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.push(stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46);
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_10_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_10 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[2 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_138();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_11_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_11 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_139();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_12_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_12 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_140();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_13_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_13 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[2 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_0();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_14_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_14 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_1();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_15_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_15 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_2();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_16_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_16 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_277();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_18_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_18 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_278();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_19_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_19 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_279();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_20_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_20 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_139();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_21_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_21 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_140();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_22_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_22 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_141();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_23_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_23 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_1();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_24_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_24 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_2();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_25_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_25 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_3();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_26_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_26 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_278();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_28_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_28 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_279();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_29_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_29 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-2 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_280();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_30_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_30 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_140();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_31_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_31 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_141();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_32_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_32 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-2 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_142();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_33_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_33 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_2();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_34_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_34 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_3();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_35_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_35 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-2 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_4();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_36_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_36 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_279();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_38_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_38 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-2 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_280();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_39_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_39 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-3 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_281();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_40_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_40 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_141();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_41_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_41 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-2 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_142();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_42_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_42 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-3 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_143();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_43_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_43 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_3();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_44_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_44 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-2 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_4();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_45_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_45 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[-3 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_5();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_6_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_6 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[2 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_276();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_8_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_8 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_277();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

inline hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_9_select(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_FIFO_buf604_stencil_217_merged592_9 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1_FIFO_buf604[4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
  auto value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46 = stencil_1_FIFO_buf604.stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_merged_banks_36.peek_278();
  return value_stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46;
  return 0;
}

// # of bundles = 2
// load_to_stencil_1_FIFO_buf6042_write
//	stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46
inline void stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_write_bundle_write(hw_uint<32>& load_to_stencil_1_FIFO_buf6042_write, stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_1_ld1, int stencil_1_ld0, int dynamic_address) {
	hw_uint<32>  stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_res = load_to_stencil_1_FIFO_buf6042_write.extract<0, 31>();
	stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_write(stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_46_res, stencil_1_FIFO_buf604, root, stencil_1_ld1, stencil_1_ld0, dynamic_address);
}

// stencil_217_merged592_read
//	stencil_1_FIFO_buf604_stencil_217_merged592_6
//	stencil_1_FIFO_buf604_stencil_217_merged592_8
//	stencil_1_FIFO_buf604_stencil_217_merged592_9
//	stencil_1_FIFO_buf604_stencil_217_merged592_10
//	stencil_1_FIFO_buf604_stencil_217_merged592_11
//	stencil_1_FIFO_buf604_stencil_217_merged592_12
//	stencil_1_FIFO_buf604_stencil_217_merged592_13
//	stencil_1_FIFO_buf604_stencil_217_merged592_14
//	stencil_1_FIFO_buf604_stencil_217_merged592_15
//	stencil_1_FIFO_buf604_stencil_217_merged592_16
//	stencil_1_FIFO_buf604_stencil_217_merged592_18
//	stencil_1_FIFO_buf604_stencil_217_merged592_19
//	stencil_1_FIFO_buf604_stencil_217_merged592_20
//	stencil_1_FIFO_buf604_stencil_217_merged592_21
//	stencil_1_FIFO_buf604_stencil_217_merged592_22
//	stencil_1_FIFO_buf604_stencil_217_merged592_23
//	stencil_1_FIFO_buf604_stencil_217_merged592_24
//	stencil_1_FIFO_buf604_stencil_217_merged592_25
//	stencil_1_FIFO_buf604_stencil_217_merged592_26
//	stencil_1_FIFO_buf604_stencil_217_merged592_28
//	stencil_1_FIFO_buf604_stencil_217_merged592_29
//	stencil_1_FIFO_buf604_stencil_217_merged592_30
//	stencil_1_FIFO_buf604_stencil_217_merged592_31
//	stencil_1_FIFO_buf604_stencil_217_merged592_32
//	stencil_1_FIFO_buf604_stencil_217_merged592_33
//	stencil_1_FIFO_buf604_stencil_217_merged592_34
//	stencil_1_FIFO_buf604_stencil_217_merged592_35
//	stencil_1_FIFO_buf604_stencil_217_merged592_36
//	stencil_1_FIFO_buf604_stencil_217_merged592_38
//	stencil_1_FIFO_buf604_stencil_217_merged592_39
//	stencil_1_FIFO_buf604_stencil_217_merged592_40
//	stencil_1_FIFO_buf604_stencil_217_merged592_41
//	stencil_1_FIFO_buf604_stencil_217_merged592_42
//	stencil_1_FIFO_buf604_stencil_217_merged592_43
//	stencil_1_FIFO_buf604_stencil_217_merged592_44
//	stencil_1_FIFO_buf604_stencil_217_merged592_45
inline hw_uint<1152> stencil_1_FIFO_buf604_stencil_217_merged592_read_bundle_read(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_216, int stencil_217, int dynamic_address) {
  // # of ports in bundle: 36
    // stencil_1_FIFO_buf604_stencil_217_merged592_6
    // stencil_1_FIFO_buf604_stencil_217_merged592_8
    // stencil_1_FIFO_buf604_stencil_217_merged592_9
    // stencil_1_FIFO_buf604_stencil_217_merged592_10
    // stencil_1_FIFO_buf604_stencil_217_merged592_11
    // stencil_1_FIFO_buf604_stencil_217_merged592_12
    // stencil_1_FIFO_buf604_stencil_217_merged592_13
    // stencil_1_FIFO_buf604_stencil_217_merged592_14
    // stencil_1_FIFO_buf604_stencil_217_merged592_15
    // stencil_1_FIFO_buf604_stencil_217_merged592_16
    // stencil_1_FIFO_buf604_stencil_217_merged592_18
    // stencil_1_FIFO_buf604_stencil_217_merged592_19
    // stencil_1_FIFO_buf604_stencil_217_merged592_20
    // stencil_1_FIFO_buf604_stencil_217_merged592_21
    // stencil_1_FIFO_buf604_stencil_217_merged592_22
    // stencil_1_FIFO_buf604_stencil_217_merged592_23
    // stencil_1_FIFO_buf604_stencil_217_merged592_24
    // stencil_1_FIFO_buf604_stencil_217_merged592_25
    // stencil_1_FIFO_buf604_stencil_217_merged592_26
    // stencil_1_FIFO_buf604_stencil_217_merged592_28
    // stencil_1_FIFO_buf604_stencil_217_merged592_29
    // stencil_1_FIFO_buf604_stencil_217_merged592_30
    // stencil_1_FIFO_buf604_stencil_217_merged592_31
    // stencil_1_FIFO_buf604_stencil_217_merged592_32
    // stencil_1_FIFO_buf604_stencil_217_merged592_33
    // stencil_1_FIFO_buf604_stencil_217_merged592_34
    // stencil_1_FIFO_buf604_stencil_217_merged592_35
    // stencil_1_FIFO_buf604_stencil_217_merged592_36
    // stencil_1_FIFO_buf604_stencil_217_merged592_38
    // stencil_1_FIFO_buf604_stencil_217_merged592_39
    // stencil_1_FIFO_buf604_stencil_217_merged592_40
    // stencil_1_FIFO_buf604_stencil_217_merged592_41
    // stencil_1_FIFO_buf604_stencil_217_merged592_42
    // stencil_1_FIFO_buf604_stencil_217_merged592_43
    // stencil_1_FIFO_buf604_stencil_217_merged592_44
    // stencil_1_FIFO_buf604_stencil_217_merged592_45

	hw_uint<1152> result;
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_6_res = stencil_1_FIFO_buf604_stencil_217_merged592_6_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<0, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_6_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_8_res = stencil_1_FIFO_buf604_stencil_217_merged592_8_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<32, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_8_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_9_res = stencil_1_FIFO_buf604_stencil_217_merged592_9_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<64, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_9_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_10_res = stencil_1_FIFO_buf604_stencil_217_merged592_10_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<96, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_10_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_11_res = stencil_1_FIFO_buf604_stencil_217_merged592_11_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<128, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_11_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_12_res = stencil_1_FIFO_buf604_stencil_217_merged592_12_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<160, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_12_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_13_res = stencil_1_FIFO_buf604_stencil_217_merged592_13_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<192, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_13_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_14_res = stencil_1_FIFO_buf604_stencil_217_merged592_14_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<224, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_14_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_15_res = stencil_1_FIFO_buf604_stencil_217_merged592_15_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<256, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_15_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_16_res = stencil_1_FIFO_buf604_stencil_217_merged592_16_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<288, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_16_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_18_res = stencil_1_FIFO_buf604_stencil_217_merged592_18_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<320, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_18_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_19_res = stencil_1_FIFO_buf604_stencil_217_merged592_19_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<352, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_19_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_20_res = stencil_1_FIFO_buf604_stencil_217_merged592_20_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<384, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_20_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_21_res = stencil_1_FIFO_buf604_stencil_217_merged592_21_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<416, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_21_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_22_res = stencil_1_FIFO_buf604_stencil_217_merged592_22_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<448, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_22_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_23_res = stencil_1_FIFO_buf604_stencil_217_merged592_23_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<480, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_23_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_24_res = stencil_1_FIFO_buf604_stencil_217_merged592_24_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<512, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_24_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_25_res = stencil_1_FIFO_buf604_stencil_217_merged592_25_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<544, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_25_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_26_res = stencil_1_FIFO_buf604_stencil_217_merged592_26_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<576, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_26_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_28_res = stencil_1_FIFO_buf604_stencil_217_merged592_28_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<608, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_28_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_29_res = stencil_1_FIFO_buf604_stencil_217_merged592_29_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<640, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_29_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_30_res = stencil_1_FIFO_buf604_stencil_217_merged592_30_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<672, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_30_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_31_res = stencil_1_FIFO_buf604_stencil_217_merged592_31_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<704, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_31_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_32_res = stencil_1_FIFO_buf604_stencil_217_merged592_32_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<736, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_32_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_33_res = stencil_1_FIFO_buf604_stencil_217_merged592_33_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<768, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_33_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_34_res = stencil_1_FIFO_buf604_stencil_217_merged592_34_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<800, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_34_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_35_res = stencil_1_FIFO_buf604_stencil_217_merged592_35_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<832, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_35_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_36_res = stencil_1_FIFO_buf604_stencil_217_merged592_36_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<864, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_36_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_38_res = stencil_1_FIFO_buf604_stencil_217_merged592_38_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<896, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_38_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_39_res = stencil_1_FIFO_buf604_stencil_217_merged592_39_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<928, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_39_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_40_res = stencil_1_FIFO_buf604_stencil_217_merged592_40_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<960, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_40_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_41_res = stencil_1_FIFO_buf604_stencil_217_merged592_41_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<992, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_41_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_42_res = stencil_1_FIFO_buf604_stencil_217_merged592_42_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<1024, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_42_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_43_res = stencil_1_FIFO_buf604_stencil_217_merged592_43_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<1056, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_43_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_44_res = stencil_1_FIFO_buf604_stencil_217_merged592_44_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<1088, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_44_res);
	hw_uint<32>  stencil_1_FIFO_buf604_stencil_217_merged592_45_res = stencil_1_FIFO_buf604_stencil_217_merged592_45_select(stencil_1_FIFO_buf604, root, stencil_216, stencil_217, dynamic_address);
	set_at<1120, 1152>(result, stencil_1_FIFO_buf604_stencil_217_merged592_45_res);
	return result;
}

#include "hw_classes.h"

struct stencil_2_stencil_217_merged592_2_to_stencil_2_store_to_stencil_2_to_gp_56115_1_cache {
	// RAM Box: {[1, 129], [-2, 129]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_2_stencil_217_merged592_3_to_stencil_2_store_to_stencil_2_to_gp_56115_1_cache {
	// RAM Box: {[0, 128], [-2, 129]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_2_stencil_217_merged592_4_to_stencil_2_store_to_stencil_2_to_gp_56115_1_cache {
	// RAM Box: {[-1, 131], [-2, 129]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_2_stencil_217_merged592_5_to_stencil_2_store_to_stencil_2_to_gp_56115_1_cache {
	// RAM Box: {[-2, 130], [-2, 129]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_2_cache {
  // # of banks: 4
  stencil_2_stencil_217_merged592_2_to_stencil_2_store_to_stencil_2_to_gp_56115_1_cache stencil_2_stencil_217_merged592_2_to_stencil_2_store_to_stencil_2_to_gp_56115_1;
  stencil_2_stencil_217_merged592_3_to_stencil_2_store_to_stencil_2_to_gp_56115_1_cache stencil_2_stencil_217_merged592_3_to_stencil_2_store_to_stencil_2_to_gp_56115_1;
  stencil_2_stencil_217_merged592_4_to_stencil_2_store_to_stencil_2_to_gp_56115_1_cache stencil_2_stencil_217_merged592_4_to_stencil_2_store_to_stencil_2_to_gp_56115_1;
  stencil_2_stencil_217_merged592_5_to_stencil_2_store_to_stencil_2_to_gp_56115_1_cache stencil_2_stencil_217_merged592_5_to_stencil_2_store_to_stencil_2_to_gp_56115_1;
};



inline void stencil_2_stencil_217_merged592_2_write(hw_uint<32> & stencil_2_stencil_217_merged592_2, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  stencil_2.stencil_2_stencil_217_merged592_2_to_stencil_2_store_to_stencil_2_to_gp_56115_1.push(stencil_2_stencil_217_merged592_2);
}

inline void stencil_2_stencil_217_merged592_3_write(hw_uint<32> & stencil_2_stencil_217_merged592_3, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  stencil_2.stencil_2_stencil_217_merged592_3_to_stencil_2_store_to_stencil_2_to_gp_56115_1.push(stencil_2_stencil_217_merged592_3);
}

inline void stencil_2_stencil_217_merged592_4_write(hw_uint<32> & stencil_2_stencil_217_merged592_4, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  stencil_2.stencil_2_stencil_217_merged592_4_to_stencil_2_store_to_stencil_2_to_gp_56115_1.push(stencil_2_stencil_217_merged592_4);
}

inline void stencil_2_stencil_217_merged592_5_write(hw_uint<32> & stencil_2_stencil_217_merged592_5, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  stencil_2.stencil_2_stencil_217_merged592_5_to_stencil_2_store_to_stencil_2_to_gp_56115_1.push(stencil_2_stencil_217_merged592_5);
}

inline hw_uint<32>  stencil_2_stencil_217_merged592_17_select(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_217_merged592_17 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_2[4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_217_merged592_27_select(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_217_merged592_27 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_2[-1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_217_merged592_37_select(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_217_merged592_37 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_2[-2 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_217_merged592_7_select(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_217_merged592_7 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_2[1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  return 0;
}

inline hw_uint<32>  stencil_2_store_to_stencil_2_to_gp_56115_1_select(stencil_2_cache& stencil_2, int root, int stencil_2_ld4, int stencil_2_ld3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_store_to_stencil_2_to_gp_56115_1 read pattern: { store_to_stencil_2_to_gp_56115[root = 0, stencil_2_ld4, stencil_2_ld3] -> stencil_2[stencil_2_ld3, stencil_2_ld4] : -2 <= stencil_2_ld4 <= 129 and -2 <= stencil_2_ld3 <= 131 }
  if ((((1 - stencil_2_ld3 + 4*floord(-1 + stencil_2_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_2_to_gp_56115[root = 0, stencil_2_ld4, stencil_2_ld3] -> [2 + stencil_2_ld4, 4 + stencil_2_ld3, 2] : -2 <= stencil_2_ld4 <= 129 and -2 <= stencil_2_ld3 <= 131 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
    auto value_stencil_2_stencil_217_merged592_2 = stencil_2.stencil_2_stencil_217_merged592_2_to_stencil_2_store_to_stencil_2_to_gp_56115_1.peek(/* one reader or all rams */ 0);
    return value_stencil_2_stencil_217_merged592_2;
  }

  
  if ((((-stencil_2_ld3 + 4*floord(stencil_2_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_2_to_gp_56115[root = 0, stencil_2_ld4, stencil_2_ld3] -> [2 + stencil_2_ld4, 4 + stencil_2_ld3, 2] : -2 <= stencil_2_ld4 <= 129 and -2 <= stencil_2_ld3 <= 131 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
    auto value_stencil_2_stencil_217_merged592_3 = stencil_2.stencil_2_stencil_217_merged592_3_to_stencil_2_store_to_stencil_2_to_gp_56115_1.peek(/* one reader or all rams */ 0);
    return value_stencil_2_stencil_217_merged592_3;
  }

  
  if ((((-1 - stencil_2_ld3 + 4*floord(1 + stencil_2_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_2_to_gp_56115[root = 0, stencil_2_ld4, stencil_2_ld3] -> [2 + stencil_2_ld4, 4 + stencil_2_ld3, 2] : -2 <= stencil_2_ld4 <= 129 and -2 <= stencil_2_ld3 <= 131 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
    auto value_stencil_2_stencil_217_merged592_4 = stencil_2.stencil_2_stencil_217_merged592_4_to_stencil_2_store_to_stencil_2_to_gp_56115_1.peek(/* one reader or all rams */ 0);
    return value_stencil_2_stencil_217_merged592_4;
  }

  
  if ((((-2 - stencil_2_ld3 + 4*floord(2 + stencil_2_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_2_to_gp_56115[root = 0, stencil_2_ld4, stencil_2_ld3] -> [2 + stencil_2_ld4, 4 + stencil_2_ld3, 2] : -2 <= stencil_2_ld4 <= 129 and -2 <= stencil_2_ld3 <= 131 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
    auto value_stencil_2_stencil_217_merged592_5 = stencil_2.stencil_2_stencil_217_merged592_5_to_stencil_2_store_to_stencil_2_to_gp_56115_1.peek(/* one reader or all rams */ 0);
    return value_stencil_2_stencil_217_merged592_5;
  }

  
  return 0;
}

// # of bundles = 3
// stencil_217_merged592_read
//	stencil_2_stencil_217_merged592_7
//	stencil_2_stencil_217_merged592_17
//	stencil_2_stencil_217_merged592_27
//	stencil_2_stencil_217_merged592_37
inline hw_uint<128> stencil_2_stencil_217_merged592_read_bundle_read(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_2_stencil_217_merged592_7
    // stencil_2_stencil_217_merged592_17
    // stencil_2_stencil_217_merged592_27
    // stencil_2_stencil_217_merged592_37

	hw_uint<128> result;
	hw_uint<32>  stencil_2_stencil_217_merged592_7_res = stencil_2_stencil_217_merged592_7_select(stencil_2, root, stencil_216, stencil_217, dynamic_address);
	set_at<0, 128>(result, stencil_2_stencil_217_merged592_7_res);
	hw_uint<32>  stencil_2_stencil_217_merged592_17_res = stencil_2_stencil_217_merged592_17_select(stencil_2, root, stencil_216, stencil_217, dynamic_address);
	set_at<32, 128>(result, stencil_2_stencil_217_merged592_17_res);
	hw_uint<32>  stencil_2_stencil_217_merged592_27_res = stencil_2_stencil_217_merged592_27_select(stencil_2, root, stencil_216, stencil_217, dynamic_address);
	set_at<64, 128>(result, stencil_2_stencil_217_merged592_27_res);
	hw_uint<32>  stencil_2_stencil_217_merged592_37_res = stencil_2_stencil_217_merged592_37_select(stencil_2, root, stencil_216, stencil_217, dynamic_address);
	set_at<96, 128>(result, stencil_2_stencil_217_merged592_37_res);
	return result;
}

// stencil_217_merged592_write
//	stencil_2_stencil_217_merged592_2
//	stencil_2_stencil_217_merged592_3
//	stencil_2_stencil_217_merged592_4
//	stencil_2_stencil_217_merged592_5
inline void stencil_2_stencil_217_merged592_write_bundle_write(hw_uint<128>& stencil_217_merged592_write, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
	hw_uint<32>  stencil_2_stencil_217_merged592_2_res = stencil_217_merged592_write.extract<0, 31>();
	stencil_2_stencil_217_merged592_2_write(stencil_2_stencil_217_merged592_2_res, stencil_2, root, stencil_216, stencil_217, dynamic_address);
	hw_uint<32>  stencil_2_stencil_217_merged592_3_res = stencil_217_merged592_write.extract<32, 63>();
	stencil_2_stencil_217_merged592_3_write(stencil_2_stencil_217_merged592_3_res, stencil_2, root, stencil_216, stencil_217, dynamic_address);
	hw_uint<32>  stencil_2_stencil_217_merged592_4_res = stencil_217_merged592_write.extract<64, 95>();
	stencil_2_stencil_217_merged592_4_write(stencil_2_stencil_217_merged592_4_res, stencil_2, root, stencil_216, stencil_217, dynamic_address);
	hw_uint<32>  stencil_2_stencil_217_merged592_5_res = stencil_217_merged592_write.extract<96, 127>();
	stencil_2_stencil_217_merged592_5_write(stencil_2_stencil_217_merged592_5_res, stencil_2, root, stencil_216, stencil_217, dynamic_address);
}

// store_to_stencil_2_to_gp_56115_read
//	stencil_2_store_to_stencil_2_to_gp_56115_1
inline hw_uint<32> stencil_2_store_to_stencil_2_to_gp_56115_read_bundle_read(stencil_2_cache& stencil_2, int root, int stencil_2_ld4, int stencil_2_ld3, int dynamic_address) {
  // # of ports in bundle: 1
    // stencil_2_store_to_stencil_2_to_gp_56115_1

	hw_uint<32> result;
	hw_uint<32>  stencil_2_store_to_stencil_2_to_gp_56115_1_res = stencil_2_store_to_stencil_2_to_gp_56115_1_select(stencil_2, root, stencil_2_ld4, stencil_2_ld3, dynamic_address);
	set_at<0, 32>(result, stencil_2_store_to_stencil_2_to_gp_56115_1_res);
	return result;
}

// Total re-use buffer capacity: 8992 bits


// Operation logic
inline void load_to_stencil_1_FIFO_buf6042(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_1_to_gp_4610, stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, int root, int stencil_1_ld1, int stencil_1_ld0) {
  // Dynamic address computation

	// Consume: stencil_1_to_gp_4610
	auto stencil_1_to_gp_4610_stencil_1_ld0_c__stencil_1_ld1_value = stencil_1_to_gp_4610.read();
	// Produce: stencil_1_FIFO_buf604
	stencil_1_FIFO_buf604_load_to_stencil_1_FIFO_buf6042_write_bundle_write(/* arg names */stencil_1_to_gp_4610_stencil_1_ld0_c__stencil_1_ld1_value, stencil_1_FIFO_buf604, root, stencil_1_ld1, stencil_1_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_stencil_2_to_gp_56115(stencil_2_cache& stencil_2, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_2_to_gp_5611, int root, int stencil_2_ld4, int stencil_2_ld3) {
  // Dynamic address computation

	// Consume: stencil_2
	auto stencil_2_stencil_2_ld3_c__stencil_2_ld4_value = stencil_2_store_to_stencil_2_to_gp_56115_read_bundle_read(stencil_2/* source_delay */, root, stencil_2_ld4, stencil_2_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stencil_2_to_gp_5611
	stencil_2_to_gp_5611.write(stencil_2_stencil_2_ld3_c__stencil_2_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stencil_217_merged592(stencil_1_FIFO_buf604_cache& stencil_1_FIFO_buf604, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217) {
  // Dynamic address computation

	// Consume: stencil_1_FIFO_buf604
	auto stencil_1_FIFO_buf604__lp__lp_4_m_stencil_217__p__3_rp___p___m_2_rp___p__1_c_________lp_stencil_216__p___m_2_rp___p___m_1_value = stencil_1_FIFO_buf604_stencil_217_merged592_read_bundle_read(stencil_1_FIFO_buf604/* source_delay */, root, stencil_216, stencil_217, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_2
	auto stencil_2__lp__lp_4_m_stencil_217__p__3_rp___p___m_2_rp__c_________lp_stencil_216__p___m_2_rp__value = stencil_2_stencil_217_merged592_read_bundle_read(stencil_2/* source_delay */, root, stencil_216, stencil_217, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_217_cu590(stencil_1_FIFO_buf604__lp__lp_4_m_stencil_217__p__3_rp___p___m_2_rp___p__1_c_________lp_stencil_216__p___m_2_rp___p___m_1_value, stencil_2__lp__lp_4_m_stencil_217__p__3_rp___p___m_2_rp__c_________lp_stencil_216__p___m_2_rp__value);
	// Produce: stencil_2
	stencil_2_stencil_217_merged592_write_bundle_write(/* arg names */compute_result, stencil_2, root, stencil_216, stencil_217, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stencil_216_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_1_to_gp_4610, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_2_to_gp_5611) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stencil_216__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stencil_1_FIFO_buf604_cache stencil_1_FIFO_buf604;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_2_cache stencil_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134; store_to_stencil_2_to_gp_56115[root = 0, stencil_2_ld4, stencil_2_ld3] -> [2 + stencil_2_ld4, 4 + stencil_2_ld3, 2] : -2 <= stencil_2_ld4 <= 129 and -2 <= stencil_2_ld3 <= 131; stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
//   { load_to_stencil_1_FIFO_buf6042[root = 0, stencil_1_ld1, stencil_1_ld0] -> [1 + stencil_1_ld1, stencil_1_ld0, 0] : -3 <= stencil_1_ld1 <= 130 and -3 <= stencil_1_ld0 <= 134 }
// Condition for load_to_stencil_1_FIFO_buf6042(((i2 == 0) && (2 + i0 >= 0) && (131 - i0 >= 0) && (3 + i1 >= 0) && (134 - i1 >= 0)))
//   { store_to_stencil_2_to_gp_56115[root = 0, stencil_2_ld4, stencil_2_ld3] -> [2 + stencil_2_ld4, 4 + stencil_2_ld3, 2] : -2 <= stencil_2_ld4 <= 129 and -2 <= stencil_2_ld3 <= 131 }
// Condition for store_to_stencil_2_to_gp_56115(((-2 + i2 == 0) && (i0 >= 0) && (131 - i0 >= 0) && (-2 + i1 >= 0) && (135 - i1 >= 0)))
//   { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [stencil_216, 2 + 4stencil_217, 1] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
// Condition for stencil_217_merged592(((-2 - i1 + 4*floord(2 + i1, 4) == 0) && (-1 + i2 == 0) && (i0 >= 0) && (131 - i0 >= 0) && (-2 + i1 >= 0) && (134 - i1 >= 0)))

  /*
for (int c0 = -2; c0 <= 131; c0 += 1)
  for (int c1 = -3; c1 <= 135; c1 += 1) {
    if (c1 <= 134) {
      load_to_stencil_1_FIFO_buf6042(0, c0 - 1, c1);
      if (c0 >= 0 && c1 >= 2 && (c1 + 2) % 4 == 0)
        stencil_217_merged592(0, c0, (c1 - 2) / 4);
    }
    if (c0 >= 0 && c1 >= 2)
      store_to_stencil_2_to_gp_56115(0, c0 - 2, c1 - 4);
  }

  */
	for (int c0 = -2; c0 <= 131; c0 += 1)
	  for (int c1 = -3; c1 <= 135; c1 += 1) {
	    if (c1 <= 134) {
	      load_to_stencil_1_FIFO_buf6042(stencil_1_to_gp_4610 /* buf name */, stencil_1_FIFO_buf604, 0, c0 - 1, c1);
	      if (c0 >= 0 && c1 >= 2 && (c1 + 2) % 4 == 0)
	        stencil_217_merged592(stencil_1_FIFO_buf604 /* buf name */, stencil_2 /* buf name */, 0, c0, (c1 - 2) / 4);
	    }
	    if (c0 >= 0 && c1 >= 2)
	      store_to_stencil_2_to_gp_56115(stencil_2 /* buf name */, stencil_2_to_gp_5611, 0, c0 - 2, c1 - 4);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_stencil_216__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_1_to_gp_4610, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_2_to_gp_5611, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_stencil_216_(stencil_1_to_gp_4610, stencil_2_to_gp_5611);
  }
}
#include "hw_classes.h"

struct stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36_cache {
	// RAM Box: {[-2, 131], [-2, 129]}
	// Capacity: 274
	// # of read delays: 18
  // 0, 1, 2, 3, 4, 5, 134, 135, 136, 137, 138, 139, 268, 269, 270, 271, 272, 273
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 128> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;
	hw_uint<32>  f18;
	hw_uint<32>  f20;
	hw_uint<32>  f22;
	fifo<hw_uint<32> , 128> f23;
	hw_uint<32>  f24;
	hw_uint<32>  f26;
	hw_uint<32>  f28;
	hw_uint<32>  f30;
	hw_uint<32>  f32;
	hw_uint<32>  f34;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_3() {
		return f6;
	}

	inline hw_uint<32>  peek_4() {
		return f8;
	}

	inline hw_uint<32>  peek_5() {
		return f10;
	}

	inline hw_uint<32>  peek_133() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_134() {
		return f12;
	}

	inline hw_uint<32>  peek_135() {
		return f14;
	}

	inline hw_uint<32>  peek_136() {
		return f16;
	}

	inline hw_uint<32>  peek_137() {
		return f18;
	}

	inline hw_uint<32>  peek_138() {
		return f20;
	}

	inline hw_uint<32>  peek_139() {
		return f22;
	}

	inline hw_uint<32>  peek_267() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f23.back();
	}

	inline hw_uint<32>  peek_268() {
		return f24;
	}

	inline hw_uint<32>  peek_269() {
		return f26;
	}

	inline hw_uint<32>  peek_270() {
		return f28;
	}

	inline hw_uint<32>  peek_271() {
		return f30;
	}

	inline hw_uint<32>  peek_272() {
		return f32;
	}

	inline hw_uint<32>  peek_273() {
		return f34;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f30 = f28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 128
    f24 = f23.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 128 reading from capacity: 1
    f23.push(f22);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 128
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 128 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_2_FIFO_buf605_cache {
  // # of banks: 1
  stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36_cache stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36;
};



inline void stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_write(hw_uint<32> & stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46, stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_2_ld1, int stencil_2_ld0, int dynamic_address) {
  stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.push(stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46);
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_10_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_10 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[3 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_134();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_11_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_11 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[2 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_135();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_12_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_12 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_136();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_13_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_13 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[3 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_0();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_14_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_14 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[2 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_1();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_15_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_15 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_2();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_16_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_16 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[2 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_269();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_18_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_18 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_270();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_19_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_19 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_271();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_20_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_20 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[2 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_135();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_21_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_21 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_136();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_22_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_22 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_137();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_23_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_23 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[2 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_1();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_24_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_24 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_2();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_25_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_25 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_3();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_26_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_26 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_270();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_28_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_28 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_271();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_29_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_29 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[-1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_272();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_30_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_30 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_136();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_31_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_31 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_137();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_32_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_32 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[-1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_138();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_33_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_33 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_2();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_34_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_34 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_3();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_35_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_35 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[-1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_4();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_36_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_36 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_271();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_38_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_38 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[-1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_272();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_39_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_39 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[-2 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_273();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_40_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_40 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_137();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_41_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_41 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[-1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_138();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_42_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_42 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[-2 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_139();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_43_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_43 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_3();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_44_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_44 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[-1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_4();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_45_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_45 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[-2 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_5();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_6_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_6 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[3 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_268();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_8_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_8 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[2 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_269();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

inline hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_9_select(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_FIFO_buf605_stencil_323_merged595_9 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2_FIFO_buf605[1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
  auto value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46 = stencil_2_FIFO_buf605.stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_merged_banks_36.peek_270();
  return value_stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46;
  return 0;
}

// # of bundles = 2
// load_to_stencil_2_FIFO_buf6052_write
//	stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46
inline void stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_write_bundle_write(hw_uint<32>& load_to_stencil_2_FIFO_buf6052_write, stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_2_ld1, int stencil_2_ld0, int dynamic_address) {
	hw_uint<32>  stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_res = load_to_stencil_2_FIFO_buf6052_write.extract<0, 31>();
	stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_write(stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_46_res, stencil_2_FIFO_buf605, root, stencil_2_ld1, stencil_2_ld0, dynamic_address);
}

// stencil_323_merged595_read
//	stencil_2_FIFO_buf605_stencil_323_merged595_6
//	stencil_2_FIFO_buf605_stencil_323_merged595_8
//	stencil_2_FIFO_buf605_stencil_323_merged595_9
//	stencil_2_FIFO_buf605_stencil_323_merged595_10
//	stencil_2_FIFO_buf605_stencil_323_merged595_11
//	stencil_2_FIFO_buf605_stencil_323_merged595_12
//	stencil_2_FIFO_buf605_stencil_323_merged595_13
//	stencil_2_FIFO_buf605_stencil_323_merged595_14
//	stencil_2_FIFO_buf605_stencil_323_merged595_15
//	stencil_2_FIFO_buf605_stencil_323_merged595_16
//	stencil_2_FIFO_buf605_stencil_323_merged595_18
//	stencil_2_FIFO_buf605_stencil_323_merged595_19
//	stencil_2_FIFO_buf605_stencil_323_merged595_20
//	stencil_2_FIFO_buf605_stencil_323_merged595_21
//	stencil_2_FIFO_buf605_stencil_323_merged595_22
//	stencil_2_FIFO_buf605_stencil_323_merged595_23
//	stencil_2_FIFO_buf605_stencil_323_merged595_24
//	stencil_2_FIFO_buf605_stencil_323_merged595_25
//	stencil_2_FIFO_buf605_stencil_323_merged595_26
//	stencil_2_FIFO_buf605_stencil_323_merged595_28
//	stencil_2_FIFO_buf605_stencil_323_merged595_29
//	stencil_2_FIFO_buf605_stencil_323_merged595_30
//	stencil_2_FIFO_buf605_stencil_323_merged595_31
//	stencil_2_FIFO_buf605_stencil_323_merged595_32
//	stencil_2_FIFO_buf605_stencil_323_merged595_33
//	stencil_2_FIFO_buf605_stencil_323_merged595_34
//	stencil_2_FIFO_buf605_stencil_323_merged595_35
//	stencil_2_FIFO_buf605_stencil_323_merged595_36
//	stencil_2_FIFO_buf605_stencil_323_merged595_38
//	stencil_2_FIFO_buf605_stencil_323_merged595_39
//	stencil_2_FIFO_buf605_stencil_323_merged595_40
//	stencil_2_FIFO_buf605_stencil_323_merged595_41
//	stencil_2_FIFO_buf605_stencil_323_merged595_42
//	stencil_2_FIFO_buf605_stencil_323_merged595_43
//	stencil_2_FIFO_buf605_stencil_323_merged595_44
//	stencil_2_FIFO_buf605_stencil_323_merged595_45
inline hw_uint<1152> stencil_2_FIFO_buf605_stencil_323_merged595_read_bundle_read(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_322, int stencil_323, int dynamic_address) {
  // # of ports in bundle: 36
    // stencil_2_FIFO_buf605_stencil_323_merged595_6
    // stencil_2_FIFO_buf605_stencil_323_merged595_8
    // stencil_2_FIFO_buf605_stencil_323_merged595_9
    // stencil_2_FIFO_buf605_stencil_323_merged595_10
    // stencil_2_FIFO_buf605_stencil_323_merged595_11
    // stencil_2_FIFO_buf605_stencil_323_merged595_12
    // stencil_2_FIFO_buf605_stencil_323_merged595_13
    // stencil_2_FIFO_buf605_stencil_323_merged595_14
    // stencil_2_FIFO_buf605_stencil_323_merged595_15
    // stencil_2_FIFO_buf605_stencil_323_merged595_16
    // stencil_2_FIFO_buf605_stencil_323_merged595_18
    // stencil_2_FIFO_buf605_stencil_323_merged595_19
    // stencil_2_FIFO_buf605_stencil_323_merged595_20
    // stencil_2_FIFO_buf605_stencil_323_merged595_21
    // stencil_2_FIFO_buf605_stencil_323_merged595_22
    // stencil_2_FIFO_buf605_stencil_323_merged595_23
    // stencil_2_FIFO_buf605_stencil_323_merged595_24
    // stencil_2_FIFO_buf605_stencil_323_merged595_25
    // stencil_2_FIFO_buf605_stencil_323_merged595_26
    // stencil_2_FIFO_buf605_stencil_323_merged595_28
    // stencil_2_FIFO_buf605_stencil_323_merged595_29
    // stencil_2_FIFO_buf605_stencil_323_merged595_30
    // stencil_2_FIFO_buf605_stencil_323_merged595_31
    // stencil_2_FIFO_buf605_stencil_323_merged595_32
    // stencil_2_FIFO_buf605_stencil_323_merged595_33
    // stencil_2_FIFO_buf605_stencil_323_merged595_34
    // stencil_2_FIFO_buf605_stencil_323_merged595_35
    // stencil_2_FIFO_buf605_stencil_323_merged595_36
    // stencil_2_FIFO_buf605_stencil_323_merged595_38
    // stencil_2_FIFO_buf605_stencil_323_merged595_39
    // stencil_2_FIFO_buf605_stencil_323_merged595_40
    // stencil_2_FIFO_buf605_stencil_323_merged595_41
    // stencil_2_FIFO_buf605_stencil_323_merged595_42
    // stencil_2_FIFO_buf605_stencil_323_merged595_43
    // stencil_2_FIFO_buf605_stencil_323_merged595_44
    // stencil_2_FIFO_buf605_stencil_323_merged595_45

	hw_uint<1152> result;
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_6_res = stencil_2_FIFO_buf605_stencil_323_merged595_6_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<0, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_6_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_8_res = stencil_2_FIFO_buf605_stencil_323_merged595_8_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<32, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_8_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_9_res = stencil_2_FIFO_buf605_stencil_323_merged595_9_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<64, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_9_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_10_res = stencil_2_FIFO_buf605_stencil_323_merged595_10_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<96, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_10_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_11_res = stencil_2_FIFO_buf605_stencil_323_merged595_11_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<128, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_11_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_12_res = stencil_2_FIFO_buf605_stencil_323_merged595_12_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<160, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_12_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_13_res = stencil_2_FIFO_buf605_stencil_323_merged595_13_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<192, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_13_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_14_res = stencil_2_FIFO_buf605_stencil_323_merged595_14_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<224, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_14_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_15_res = stencil_2_FIFO_buf605_stencil_323_merged595_15_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<256, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_15_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_16_res = stencil_2_FIFO_buf605_stencil_323_merged595_16_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<288, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_16_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_18_res = stencil_2_FIFO_buf605_stencil_323_merged595_18_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<320, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_18_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_19_res = stencil_2_FIFO_buf605_stencil_323_merged595_19_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<352, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_19_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_20_res = stencil_2_FIFO_buf605_stencil_323_merged595_20_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<384, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_20_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_21_res = stencil_2_FIFO_buf605_stencil_323_merged595_21_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<416, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_21_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_22_res = stencil_2_FIFO_buf605_stencil_323_merged595_22_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<448, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_22_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_23_res = stencil_2_FIFO_buf605_stencil_323_merged595_23_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<480, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_23_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_24_res = stencil_2_FIFO_buf605_stencil_323_merged595_24_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<512, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_24_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_25_res = stencil_2_FIFO_buf605_stencil_323_merged595_25_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<544, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_25_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_26_res = stencil_2_FIFO_buf605_stencil_323_merged595_26_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<576, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_26_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_28_res = stencil_2_FIFO_buf605_stencil_323_merged595_28_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<608, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_28_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_29_res = stencil_2_FIFO_buf605_stencil_323_merged595_29_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<640, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_29_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_30_res = stencil_2_FIFO_buf605_stencil_323_merged595_30_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<672, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_30_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_31_res = stencil_2_FIFO_buf605_stencil_323_merged595_31_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<704, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_31_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_32_res = stencil_2_FIFO_buf605_stencil_323_merged595_32_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<736, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_32_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_33_res = stencil_2_FIFO_buf605_stencil_323_merged595_33_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<768, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_33_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_34_res = stencil_2_FIFO_buf605_stencil_323_merged595_34_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<800, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_34_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_35_res = stencil_2_FIFO_buf605_stencil_323_merged595_35_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<832, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_35_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_36_res = stencil_2_FIFO_buf605_stencil_323_merged595_36_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<864, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_36_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_38_res = stencil_2_FIFO_buf605_stencil_323_merged595_38_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<896, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_38_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_39_res = stencil_2_FIFO_buf605_stencil_323_merged595_39_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<928, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_39_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_40_res = stencil_2_FIFO_buf605_stencil_323_merged595_40_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<960, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_40_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_41_res = stencil_2_FIFO_buf605_stencil_323_merged595_41_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<992, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_41_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_42_res = stencil_2_FIFO_buf605_stencil_323_merged595_42_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<1024, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_42_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_43_res = stencil_2_FIFO_buf605_stencil_323_merged595_43_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<1056, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_43_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_44_res = stencil_2_FIFO_buf605_stencil_323_merged595_44_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<1088, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_44_res);
	hw_uint<32>  stencil_2_FIFO_buf605_stencil_323_merged595_45_res = stencil_2_FIFO_buf605_stencil_323_merged595_45_select(stencil_2_FIFO_buf605, root, stencil_322, stencil_323, dynamic_address);
	set_at<1120, 1152>(result, stencil_2_FIFO_buf605_stencil_323_merged595_45_res);
	return result;
}

#include "hw_classes.h"

struct stencil_3_stencil_323_merged595_2_to_stencil_3_store_to_stencil_3_to_gp_66125_1_cache {
	// RAM Box: {[2, 126], [-1, 128]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_3_stencil_323_merged595_3_to_stencil_3_store_to_stencil_3_to_gp_66125_1_cache {
	// RAM Box: {[1, 125], [-1, 128]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_3_stencil_323_merged595_4_to_stencil_3_store_to_stencil_3_to_gp_66125_1_cache {
	// RAM Box: {[0, 128], [-1, 128]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_3_stencil_323_merged595_5_to_stencil_3_store_to_stencil_3_to_gp_66125_1_cache {
	// RAM Box: {[-1, 127], [-1, 128]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_3_cache {
  // # of banks: 4
  stencil_3_stencil_323_merged595_2_to_stencil_3_store_to_stencil_3_to_gp_66125_1_cache stencil_3_stencil_323_merged595_2_to_stencil_3_store_to_stencil_3_to_gp_66125_1;
  stencil_3_stencil_323_merged595_3_to_stencil_3_store_to_stencil_3_to_gp_66125_1_cache stencil_3_stencil_323_merged595_3_to_stencil_3_store_to_stencil_3_to_gp_66125_1;
  stencil_3_stencil_323_merged595_4_to_stencil_3_store_to_stencil_3_to_gp_66125_1_cache stencil_3_stencil_323_merged595_4_to_stencil_3_store_to_stencil_3_to_gp_66125_1;
  stencil_3_stencil_323_merged595_5_to_stencil_3_store_to_stencil_3_to_gp_66125_1_cache stencil_3_stencil_323_merged595_5_to_stencil_3_store_to_stencil_3_to_gp_66125_1;
};



inline void stencil_3_stencil_323_merged595_2_write(hw_uint<32> & stencil_3_stencil_323_merged595_2, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  stencil_3.stencil_3_stencil_323_merged595_2_to_stencil_3_store_to_stencil_3_to_gp_66125_1.push(stencil_3_stencil_323_merged595_2);
}

inline void stencil_3_stencil_323_merged595_3_write(hw_uint<32> & stencil_3_stencil_323_merged595_3, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  stencil_3.stencil_3_stencil_323_merged595_3_to_stencil_3_store_to_stencil_3_to_gp_66125_1.push(stencil_3_stencil_323_merged595_3);
}

inline void stencil_3_stencil_323_merged595_4_write(hw_uint<32> & stencil_3_stencil_323_merged595_4, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  stencil_3.stencil_3_stencil_323_merged595_4_to_stencil_3_store_to_stencil_3_to_gp_66125_1.push(stencil_3_stencil_323_merged595_4);
}

inline void stencil_3_stencil_323_merged595_5_write(hw_uint<32> & stencil_3_stencil_323_merged595_5, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  stencil_3.stencil_3_stencil_323_merged595_5_to_stencil_3_store_to_stencil_3_to_gp_66125_1.push(stencil_3_stencil_323_merged595_5);
}

inline hw_uint<32>  stencil_3_stencil_323_merged595_17_select(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_323_merged595_17 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_3[1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_323_merged595_27_select(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_323_merged595_27 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_3[4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_323_merged595_37_select(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_323_merged595_37 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_3[-1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_323_merged595_7_select(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_323_merged595_7 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_3[2 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  return 0;
}

inline hw_uint<32>  stencil_3_store_to_stencil_3_to_gp_66125_1_select(stencil_3_cache& stencil_3, int root, int stencil_3_ld4, int stencil_3_ld3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_store_to_stencil_3_to_gp_66125_1 read pattern: { store_to_stencil_3_to_gp_66125[root = 0, stencil_3_ld4, stencil_3_ld3] -> stencil_3[stencil_3_ld3, stencil_3_ld4] : -1 <= stencil_3_ld4 <= 128 and -1 <= stencil_3_ld3 <= 128 }
  if ((((-2 - stencil_3_ld3 + 4*floord(2 + stencil_3_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_3_to_gp_66125[root = 0, stencil_3_ld4, stencil_3_ld3] -> [1 + stencil_3_ld4, 4 + stencil_3_ld3, 2] : -1 <= stencil_3_ld4 <= 128 and -1 <= stencil_3_ld3 <= 128 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
    auto value_stencil_3_stencil_323_merged595_2 = stencil_3.stencil_3_stencil_323_merged595_2_to_stencil_3_store_to_stencil_3_to_gp_66125_1.peek(/* one reader or all rams */ 0);
    return value_stencil_3_stencil_323_merged595_2;
  }

  
  if ((((1 - stencil_3_ld3 + 4*floord(-1 + stencil_3_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_3_to_gp_66125[root = 0, stencil_3_ld4, stencil_3_ld3] -> [1 + stencil_3_ld4, 4 + stencil_3_ld3, 2] : -1 <= stencil_3_ld4 <= 128 and -1 <= stencil_3_ld3 <= 128 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
    auto value_stencil_3_stencil_323_merged595_3 = stencil_3.stencil_3_stencil_323_merged595_3_to_stencil_3_store_to_stencil_3_to_gp_66125_1.peek(/* one reader or all rams */ 0);
    return value_stencil_3_stencil_323_merged595_3;
  }

  
  if ((((-stencil_3_ld3 + 4*floord(stencil_3_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_3_to_gp_66125[root = 0, stencil_3_ld4, stencil_3_ld3] -> [1 + stencil_3_ld4, 4 + stencil_3_ld3, 2] : -1 <= stencil_3_ld4 <= 128 and -1 <= stencil_3_ld3 <= 128 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
    auto value_stencil_3_stencil_323_merged595_4 = stencil_3.stencil_3_stencil_323_merged595_4_to_stencil_3_store_to_stencil_3_to_gp_66125_1.peek(/* one reader or all rams */ 0);
    return value_stencil_3_stencil_323_merged595_4;
  }

  
  if ((((-1 - stencil_3_ld3 + 4*floord(1 + stencil_3_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_3_to_gp_66125[root = 0, stencil_3_ld4, stencil_3_ld3] -> [1 + stencil_3_ld4, 4 + stencil_3_ld3, 2] : -1 <= stencil_3_ld4 <= 128 and -1 <= stencil_3_ld3 <= 128 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
    auto value_stencil_3_stencil_323_merged595_5 = stencil_3.stencil_3_stencil_323_merged595_5_to_stencil_3_store_to_stencil_3_to_gp_66125_1.peek(/* one reader or all rams */ 0);
    return value_stencil_3_stencil_323_merged595_5;
  }

  
  return 0;
}

// # of bundles = 3
// stencil_323_merged595_read
//	stencil_3_stencil_323_merged595_7
//	stencil_3_stencil_323_merged595_17
//	stencil_3_stencil_323_merged595_27
//	stencil_3_stencil_323_merged595_37
inline hw_uint<128> stencil_3_stencil_323_merged595_read_bundle_read(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_3_stencil_323_merged595_7
    // stencil_3_stencil_323_merged595_17
    // stencil_3_stencil_323_merged595_27
    // stencil_3_stencil_323_merged595_37

	hw_uint<128> result;
	hw_uint<32>  stencil_3_stencil_323_merged595_7_res = stencil_3_stencil_323_merged595_7_select(stencil_3, root, stencil_322, stencil_323, dynamic_address);
	set_at<0, 128>(result, stencil_3_stencil_323_merged595_7_res);
	hw_uint<32>  stencil_3_stencil_323_merged595_17_res = stencil_3_stencil_323_merged595_17_select(stencil_3, root, stencil_322, stencil_323, dynamic_address);
	set_at<32, 128>(result, stencil_3_stencil_323_merged595_17_res);
	hw_uint<32>  stencil_3_stencil_323_merged595_27_res = stencil_3_stencil_323_merged595_27_select(stencil_3, root, stencil_322, stencil_323, dynamic_address);
	set_at<64, 128>(result, stencil_3_stencil_323_merged595_27_res);
	hw_uint<32>  stencil_3_stencil_323_merged595_37_res = stencil_3_stencil_323_merged595_37_select(stencil_3, root, stencil_322, stencil_323, dynamic_address);
	set_at<96, 128>(result, stencil_3_stencil_323_merged595_37_res);
	return result;
}

// stencil_323_merged595_write
//	stencil_3_stencil_323_merged595_2
//	stencil_3_stencil_323_merged595_3
//	stencil_3_stencil_323_merged595_4
//	stencil_3_stencil_323_merged595_5
inline void stencil_3_stencil_323_merged595_write_bundle_write(hw_uint<128>& stencil_323_merged595_write, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
	hw_uint<32>  stencil_3_stencil_323_merged595_2_res = stencil_323_merged595_write.extract<0, 31>();
	stencil_3_stencil_323_merged595_2_write(stencil_3_stencil_323_merged595_2_res, stencil_3, root, stencil_322, stencil_323, dynamic_address);
	hw_uint<32>  stencil_3_stencil_323_merged595_3_res = stencil_323_merged595_write.extract<32, 63>();
	stencil_3_stencil_323_merged595_3_write(stencil_3_stencil_323_merged595_3_res, stencil_3, root, stencil_322, stencil_323, dynamic_address);
	hw_uint<32>  stencil_3_stencil_323_merged595_4_res = stencil_323_merged595_write.extract<64, 95>();
	stencil_3_stencil_323_merged595_4_write(stencil_3_stencil_323_merged595_4_res, stencil_3, root, stencil_322, stencil_323, dynamic_address);
	hw_uint<32>  stencil_3_stencil_323_merged595_5_res = stencil_323_merged595_write.extract<96, 127>();
	stencil_3_stencil_323_merged595_5_write(stencil_3_stencil_323_merged595_5_res, stencil_3, root, stencil_322, stencil_323, dynamic_address);
}

// store_to_stencil_3_to_gp_66125_read
//	stencil_3_store_to_stencil_3_to_gp_66125_1
inline hw_uint<32> stencil_3_store_to_stencil_3_to_gp_66125_read_bundle_read(stencil_3_cache& stencil_3, int root, int stencil_3_ld4, int stencil_3_ld3, int dynamic_address) {
  // # of ports in bundle: 1
    // stencil_3_store_to_stencil_3_to_gp_66125_1

	hw_uint<32> result;
	hw_uint<32>  stencil_3_store_to_stencil_3_to_gp_66125_1_res = stencil_3_store_to_stencil_3_to_gp_66125_1_select(stencil_3, root, stencil_3_ld4, stencil_3_ld3, dynamic_address);
	set_at<0, 32>(result, stencil_3_store_to_stencil_3_to_gp_66125_1_res);
	return result;
}

// Total re-use buffer capacity: 8736 bits


// Operation logic
inline void stencil_323_merged595(stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323) {
  // Dynamic address computation

	// Consume: stencil_2_FIFO_buf605
	auto stencil_2_FIFO_buf605__lp__lp_4_m_stencil_323__p__3_rp___p___m_1_rp___p__1_c_________lp_stencil_322__p___m_1_rp___p___m_1_value = stencil_2_FIFO_buf605_stencil_323_merged595_read_bundle_read(stencil_2_FIFO_buf605/* source_delay */, root, stencil_322, stencil_323, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_3
	auto stencil_3__lp__lp_4_m_stencil_323__p__3_rp___p___m_1_rp__c_________lp_stencil_322__p___m_1_rp__value = stencil_3_stencil_323_merged595_read_bundle_read(stencil_3/* source_delay */, root, stencil_322, stencil_323, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_323_cu593(stencil_2_FIFO_buf605__lp__lp_4_m_stencil_323__p__3_rp___p___m_1_rp___p__1_c_________lp_stencil_322__p___m_1_rp___p___m_1_value, stencil_3__lp__lp_4_m_stencil_323__p__3_rp___p___m_1_rp__c_________lp_stencil_322__p___m_1_rp__value);
	// Produce: stencil_3
	stencil_3_stencil_323_merged595_write_bundle_write(/* arg names */compute_result, stencil_3, root, stencil_322, stencil_323, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stencil_2_FIFO_buf6052(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_2_to_gp_5611, stencil_2_FIFO_buf605_cache& stencil_2_FIFO_buf605, int root, int stencil_2_ld1, int stencil_2_ld0) {
  // Dynamic address computation

	// Consume: stencil_2_to_gp_5611
	auto stencil_2_to_gp_5611_stencil_2_ld0_c__stencil_2_ld1_value = stencil_2_to_gp_5611.read();
	// Produce: stencil_2_FIFO_buf605
	stencil_2_FIFO_buf605_load_to_stencil_2_FIFO_buf6052_write_bundle_write(/* arg names */stencil_2_to_gp_5611_stencil_2_ld0_c__stencil_2_ld1_value, stencil_2_FIFO_buf605, root, stencil_2_ld1, stencil_2_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_stencil_3_to_gp_66125(stencil_3_cache& stencil_3, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_3_to_gp_6612, int root, int stencil_3_ld4, int stencil_3_ld3) {
  // Dynamic address computation

	// Consume: stencil_3
	auto stencil_3_stencil_3_ld3_c__stencil_3_ld4_value = stencil_3_store_to_stencil_3_to_gp_66125_read_bundle_read(stencil_3/* source_delay */, root, stencil_3_ld4, stencil_3_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stencil_3_to_gp_6612
	stencil_3_to_gp_6612.write(stencil_3_stencil_3_ld3_c__stencil_3_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stencil_322_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_2_to_gp_5611, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_3_to_gp_6612) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stencil_322__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stencil_2_FIFO_buf605_cache stencil_2_FIFO_buf605;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_3_cache stencil_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { store_to_stencil_3_to_gp_66125[root = 0, stencil_3_ld4, stencil_3_ld3] -> [1 + stencil_3_ld4, 4 + stencil_3_ld3, 2] : -1 <= stencil_3_ld4 <= 128 and -1 <= stencil_3_ld3 <= 128; stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32; load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
//   { store_to_stencil_3_to_gp_66125[root = 0, stencil_3_ld4, stencil_3_ld3] -> [1 + stencil_3_ld4, 4 + stencil_3_ld3, 2] : -1 <= stencil_3_ld4 <= 128 and -1 <= stencil_3_ld3 <= 128 }
// Condition for store_to_stencil_3_to_gp_66125(((-2 + i2 == 0) && (i0 >= 0) && (129 - i0 >= 0) && (-3 + i1 >= 0) && (132 - i1 >= 0)))
//   { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [stencil_322, 3 + 4stencil_323, 1] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
// Condition for stencil_323_merged595(((-1 - i1 + 4*floord(1 + i1, 4) == 0) && (-1 + i2 == 0) && (i0 >= 0) && (129 - i0 >= 0) && (-3 + i1 >= 0) && (131 - i1 >= 0)))
//   { load_to_stencil_2_FIFO_buf6052[root = 0, stencil_2_ld1, stencil_2_ld0] -> [stencil_2_ld1, stencil_2_ld0, 0] : -2 <= stencil_2_ld1 <= 129 and -2 <= stencil_2_ld0 <= 131 }
// Condition for load_to_stencil_2_FIFO_buf6052(((i2 == 0) && (2 + i0 >= 0) && (129 - i0 >= 0) && (2 + i1 >= 0) && (131 - i1 >= 0)))

  /*
for (int c0 = -2; c0 <= 129; c0 += 1)
  for (int c1 = -2; c1 <= 132; c1 += 1) {
    if (c1 <= 131) {
      load_to_stencil_2_FIFO_buf6052(0, c0, c1);
      if (c0 >= 0 && c1 >= 3 && (c1 + 1) % 4 == 0)
        stencil_323_merged595(0, c0, (c1 - 3) / 4);
    }
    if (c0 >= 0 && c1 >= 3)
      store_to_stencil_3_to_gp_66125(0, c0 - 1, c1 - 4);
  }

  */
	for (int c0 = -2; c0 <= 129; c0 += 1)
	  for (int c1 = -2; c1 <= 132; c1 += 1) {
	    if (c1 <= 131) {
	      load_to_stencil_2_FIFO_buf6052(stencil_2_to_gp_5611 /* buf name */, stencil_2_FIFO_buf605, 0, c0, c1);
	      if (c0 >= 0 && c1 >= 3 && (c1 + 1) % 4 == 0)
	        stencil_323_merged595(stencil_2_FIFO_buf605 /* buf name */, stencil_3 /* buf name */, 0, c0, (c1 - 3) / 4);
	    }
	    if (c0 >= 0 && c1 >= 3)
	      store_to_stencil_3_to_gp_66125(stencil_3 /* buf name */, stencil_3_to_gp_6612, 0, c0 - 1, c1 - 4);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_stencil_322__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_2_to_gp_5611, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_3_to_gp_6612, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_stencil_322_(stencil_2_to_gp_5611, stencil_3_to_gp_6612);
  }
}
#include "hw_classes.h"

struct stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36_cache {
	// RAM Box: {[-1, 128], [-1, 128]}
	// Capacity: 266
	// # of read delays: 18
  // 0, 1, 2, 3, 4, 5, 130, 131, 132, 133, 134, 135, 260, 261, 262, 263, 264, 265
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 124> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;
	hw_uint<32>  f18;
	hw_uint<32>  f20;
	hw_uint<32>  f22;
	fifo<hw_uint<32> , 124> f23;
	hw_uint<32>  f24;
	hw_uint<32>  f26;
	hw_uint<32>  f28;
	hw_uint<32>  f30;
	hw_uint<32>  f32;
	hw_uint<32>  f34;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_3() {
		return f6;
	}

	inline hw_uint<32>  peek_4() {
		return f8;
	}

	inline hw_uint<32>  peek_5() {
		return f10;
	}

	inline hw_uint<32>  peek_129() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_130() {
		return f12;
	}

	inline hw_uint<32>  peek_131() {
		return f14;
	}

	inline hw_uint<32>  peek_132() {
		return f16;
	}

	inline hw_uint<32>  peek_133() {
		return f18;
	}

	inline hw_uint<32>  peek_134() {
		return f20;
	}

	inline hw_uint<32>  peek_135() {
		return f22;
	}

	inline hw_uint<32>  peek_259() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f23.back();
	}

	inline hw_uint<32>  peek_260() {
		return f24;
	}

	inline hw_uint<32>  peek_261() {
		return f26;
	}

	inline hw_uint<32>  peek_262() {
		return f28;
	}

	inline hw_uint<32>  peek_263() {
		return f30;
	}

	inline hw_uint<32>  peek_264() {
		return f32;
	}

	inline hw_uint<32>  peek_265() {
		return f34;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f30 = f28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 124
    f24 = f23.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f23.push(f22);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 124
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_3_FIFO_buf606_cache {
  // # of banks: 1
  stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36_cache stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36;
};



inline void stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_write(hw_uint<32> & stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46, stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_3_ld1, int stencil_3_ld0, int dynamic_address) {
  stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.push(stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46);
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_10_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_10 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[4 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_130();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_11_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_11 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[3 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_131();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_12_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_12 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[2 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_132();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_13_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_13 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[4 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_0();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_14_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_14 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[3 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_1();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_15_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_15 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[2 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_2();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_16_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_16 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[3 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_261();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_18_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_18 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[2 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_262();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_19_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_19 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[1 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_263();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_20_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_20 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[3 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_131();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_21_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_21 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[2 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_132();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_22_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_22 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_133();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_23_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_23 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[3 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_1();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_24_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_24 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[2 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_2();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_25_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_25 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[1 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_3();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_26_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_26 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[2 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_262();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_28_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_28 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[1 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_263();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_29_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_29 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_264();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_30_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_30 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[2 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_132();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_31_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_31 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_133();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_32_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_32 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_134();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_33_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_33 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[2 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_2();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_34_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_34 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[1 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_3();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_35_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_35 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_4();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_36_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_36 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[1 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_263();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_38_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_38 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_264();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_39_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_39 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[-1 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_265();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_40_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_40 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_133();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_41_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_41 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_134();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_42_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_42 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[-1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_135();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_43_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_43 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[1 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_3();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_44_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_44 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_4();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_45_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_45 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[-1 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_5();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_6_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_6 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[4 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_260();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_8_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_8 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[3 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_261();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

inline hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_9_select(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_FIFO_buf606_stencil_429_merged598_9 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3_FIFO_buf606[2 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
  auto value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46 = stencil_3_FIFO_buf606.stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_merged_banks_36.peek_262();
  return value_stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46;
  return 0;
}

// # of bundles = 2
// load_to_stencil_3_FIFO_buf6062_write
//	stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46
inline void stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_write_bundle_write(hw_uint<32>& load_to_stencil_3_FIFO_buf6062_write, stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_3_ld1, int stencil_3_ld0, int dynamic_address) {
	hw_uint<32>  stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_res = load_to_stencil_3_FIFO_buf6062_write.extract<0, 31>();
	stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_write(stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_46_res, stencil_3_FIFO_buf606, root, stencil_3_ld1, stencil_3_ld0, dynamic_address);
}

// stencil_429_merged598_read
//	stencil_3_FIFO_buf606_stencil_429_merged598_6
//	stencil_3_FIFO_buf606_stencil_429_merged598_8
//	stencil_3_FIFO_buf606_stencil_429_merged598_9
//	stencil_3_FIFO_buf606_stencil_429_merged598_10
//	stencil_3_FIFO_buf606_stencil_429_merged598_11
//	stencil_3_FIFO_buf606_stencil_429_merged598_12
//	stencil_3_FIFO_buf606_stencil_429_merged598_13
//	stencil_3_FIFO_buf606_stencil_429_merged598_14
//	stencil_3_FIFO_buf606_stencil_429_merged598_15
//	stencil_3_FIFO_buf606_stencil_429_merged598_16
//	stencil_3_FIFO_buf606_stencil_429_merged598_18
//	stencil_3_FIFO_buf606_stencil_429_merged598_19
//	stencil_3_FIFO_buf606_stencil_429_merged598_20
//	stencil_3_FIFO_buf606_stencil_429_merged598_21
//	stencil_3_FIFO_buf606_stencil_429_merged598_22
//	stencil_3_FIFO_buf606_stencil_429_merged598_23
//	stencil_3_FIFO_buf606_stencil_429_merged598_24
//	stencil_3_FIFO_buf606_stencil_429_merged598_25
//	stencil_3_FIFO_buf606_stencil_429_merged598_26
//	stencil_3_FIFO_buf606_stencil_429_merged598_28
//	stencil_3_FIFO_buf606_stencil_429_merged598_29
//	stencil_3_FIFO_buf606_stencil_429_merged598_30
//	stencil_3_FIFO_buf606_stencil_429_merged598_31
//	stencil_3_FIFO_buf606_stencil_429_merged598_32
//	stencil_3_FIFO_buf606_stencil_429_merged598_33
//	stencil_3_FIFO_buf606_stencil_429_merged598_34
//	stencil_3_FIFO_buf606_stencil_429_merged598_35
//	stencil_3_FIFO_buf606_stencil_429_merged598_36
//	stencil_3_FIFO_buf606_stencil_429_merged598_38
//	stencil_3_FIFO_buf606_stencil_429_merged598_39
//	stencil_3_FIFO_buf606_stencil_429_merged598_40
//	stencil_3_FIFO_buf606_stencil_429_merged598_41
//	stencil_3_FIFO_buf606_stencil_429_merged598_42
//	stencil_3_FIFO_buf606_stencil_429_merged598_43
//	stencil_3_FIFO_buf606_stencil_429_merged598_44
//	stencil_3_FIFO_buf606_stencil_429_merged598_45
inline hw_uint<1152> stencil_3_FIFO_buf606_stencil_429_merged598_read_bundle_read(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_428, int stencil_429, int dynamic_address) {
  // # of ports in bundle: 36
    // stencil_3_FIFO_buf606_stencil_429_merged598_6
    // stencil_3_FIFO_buf606_stencil_429_merged598_8
    // stencil_3_FIFO_buf606_stencil_429_merged598_9
    // stencil_3_FIFO_buf606_stencil_429_merged598_10
    // stencil_3_FIFO_buf606_stencil_429_merged598_11
    // stencil_3_FIFO_buf606_stencil_429_merged598_12
    // stencil_3_FIFO_buf606_stencil_429_merged598_13
    // stencil_3_FIFO_buf606_stencil_429_merged598_14
    // stencil_3_FIFO_buf606_stencil_429_merged598_15
    // stencil_3_FIFO_buf606_stencil_429_merged598_16
    // stencil_3_FIFO_buf606_stencil_429_merged598_18
    // stencil_3_FIFO_buf606_stencil_429_merged598_19
    // stencil_3_FIFO_buf606_stencil_429_merged598_20
    // stencil_3_FIFO_buf606_stencil_429_merged598_21
    // stencil_3_FIFO_buf606_stencil_429_merged598_22
    // stencil_3_FIFO_buf606_stencil_429_merged598_23
    // stencil_3_FIFO_buf606_stencil_429_merged598_24
    // stencil_3_FIFO_buf606_stencil_429_merged598_25
    // stencil_3_FIFO_buf606_stencil_429_merged598_26
    // stencil_3_FIFO_buf606_stencil_429_merged598_28
    // stencil_3_FIFO_buf606_stencil_429_merged598_29
    // stencil_3_FIFO_buf606_stencil_429_merged598_30
    // stencil_3_FIFO_buf606_stencil_429_merged598_31
    // stencil_3_FIFO_buf606_stencil_429_merged598_32
    // stencil_3_FIFO_buf606_stencil_429_merged598_33
    // stencil_3_FIFO_buf606_stencil_429_merged598_34
    // stencil_3_FIFO_buf606_stencil_429_merged598_35
    // stencil_3_FIFO_buf606_stencil_429_merged598_36
    // stencil_3_FIFO_buf606_stencil_429_merged598_38
    // stencil_3_FIFO_buf606_stencil_429_merged598_39
    // stencil_3_FIFO_buf606_stencil_429_merged598_40
    // stencil_3_FIFO_buf606_stencil_429_merged598_41
    // stencil_3_FIFO_buf606_stencil_429_merged598_42
    // stencil_3_FIFO_buf606_stencil_429_merged598_43
    // stencil_3_FIFO_buf606_stencil_429_merged598_44
    // stencil_3_FIFO_buf606_stencil_429_merged598_45

	hw_uint<1152> result;
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_6_res = stencil_3_FIFO_buf606_stencil_429_merged598_6_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<0, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_6_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_8_res = stencil_3_FIFO_buf606_stencil_429_merged598_8_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<32, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_8_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_9_res = stencil_3_FIFO_buf606_stencil_429_merged598_9_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<64, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_9_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_10_res = stencil_3_FIFO_buf606_stencil_429_merged598_10_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<96, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_10_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_11_res = stencil_3_FIFO_buf606_stencil_429_merged598_11_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<128, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_11_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_12_res = stencil_3_FIFO_buf606_stencil_429_merged598_12_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<160, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_12_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_13_res = stencil_3_FIFO_buf606_stencil_429_merged598_13_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<192, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_13_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_14_res = stencil_3_FIFO_buf606_stencil_429_merged598_14_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<224, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_14_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_15_res = stencil_3_FIFO_buf606_stencil_429_merged598_15_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<256, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_15_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_16_res = stencil_3_FIFO_buf606_stencil_429_merged598_16_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<288, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_16_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_18_res = stencil_3_FIFO_buf606_stencil_429_merged598_18_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<320, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_18_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_19_res = stencil_3_FIFO_buf606_stencil_429_merged598_19_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<352, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_19_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_20_res = stencil_3_FIFO_buf606_stencil_429_merged598_20_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<384, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_20_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_21_res = stencil_3_FIFO_buf606_stencil_429_merged598_21_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<416, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_21_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_22_res = stencil_3_FIFO_buf606_stencil_429_merged598_22_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<448, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_22_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_23_res = stencil_3_FIFO_buf606_stencil_429_merged598_23_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<480, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_23_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_24_res = stencil_3_FIFO_buf606_stencil_429_merged598_24_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<512, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_24_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_25_res = stencil_3_FIFO_buf606_stencil_429_merged598_25_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<544, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_25_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_26_res = stencil_3_FIFO_buf606_stencil_429_merged598_26_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<576, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_26_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_28_res = stencil_3_FIFO_buf606_stencil_429_merged598_28_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<608, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_28_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_29_res = stencil_3_FIFO_buf606_stencil_429_merged598_29_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<640, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_29_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_30_res = stencil_3_FIFO_buf606_stencil_429_merged598_30_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<672, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_30_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_31_res = stencil_3_FIFO_buf606_stencil_429_merged598_31_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<704, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_31_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_32_res = stencil_3_FIFO_buf606_stencil_429_merged598_32_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<736, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_32_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_33_res = stencil_3_FIFO_buf606_stencil_429_merged598_33_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<768, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_33_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_34_res = stencil_3_FIFO_buf606_stencil_429_merged598_34_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<800, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_34_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_35_res = stencil_3_FIFO_buf606_stencil_429_merged598_35_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<832, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_35_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_36_res = stencil_3_FIFO_buf606_stencil_429_merged598_36_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<864, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_36_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_38_res = stencil_3_FIFO_buf606_stencil_429_merged598_38_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<896, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_38_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_39_res = stencil_3_FIFO_buf606_stencil_429_merged598_39_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<928, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_39_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_40_res = stencil_3_FIFO_buf606_stencil_429_merged598_40_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<960, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_40_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_41_res = stencil_3_FIFO_buf606_stencil_429_merged598_41_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<992, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_41_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_42_res = stencil_3_FIFO_buf606_stencil_429_merged598_42_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<1024, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_42_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_43_res = stencil_3_FIFO_buf606_stencil_429_merged598_43_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<1056, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_43_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_44_res = stencil_3_FIFO_buf606_stencil_429_merged598_44_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<1088, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_44_res);
	hw_uint<32>  stencil_3_FIFO_buf606_stencil_429_merged598_45_res = stencil_3_FIFO_buf606_stencil_429_merged598_45_select(stencil_3_FIFO_buf606, root, stencil_428, stencil_429, dynamic_address);
	set_at<1120, 1152>(result, stencil_3_FIFO_buf606_stencil_429_merged598_45_res);
	return result;
}

#include "hw_classes.h"

struct stencil_4_stencil_429_merged598_2_to_stencil_4_store_to_stencil_4_to_gp_16135_1_cache {
	// RAM Box: {[3, 127], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_4_stencil_429_merged598_3_to_stencil_4_store_to_stencil_4_to_gp_16135_1_cache {
	// RAM Box: {[2, 126], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_4_stencil_429_merged598_4_to_stencil_4_store_to_stencil_4_to_gp_16135_1_cache {
	// RAM Box: {[1, 125], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_4_stencil_429_merged598_5_to_stencil_4_store_to_stencil_4_to_gp_16135_1_cache {
	// RAM Box: {[0, 124], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_4_cache {
  // # of banks: 4
  stencil_4_stencil_429_merged598_2_to_stencil_4_store_to_stencil_4_to_gp_16135_1_cache stencil_4_stencil_429_merged598_2_to_stencil_4_store_to_stencil_4_to_gp_16135_1;
  stencil_4_stencil_429_merged598_3_to_stencil_4_store_to_stencil_4_to_gp_16135_1_cache stencil_4_stencil_429_merged598_3_to_stencil_4_store_to_stencil_4_to_gp_16135_1;
  stencil_4_stencil_429_merged598_4_to_stencil_4_store_to_stencil_4_to_gp_16135_1_cache stencil_4_stencil_429_merged598_4_to_stencil_4_store_to_stencil_4_to_gp_16135_1;
  stencil_4_stencil_429_merged598_5_to_stencil_4_store_to_stencil_4_to_gp_16135_1_cache stencil_4_stencil_429_merged598_5_to_stencil_4_store_to_stencil_4_to_gp_16135_1;
};



inline void stencil_4_stencil_429_merged598_2_write(hw_uint<32> & stencil_4_stencil_429_merged598_2, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  stencil_4.stencil_4_stencil_429_merged598_2_to_stencil_4_store_to_stencil_4_to_gp_16135_1.push(stencil_4_stencil_429_merged598_2);
}

inline void stencil_4_stencil_429_merged598_3_write(hw_uint<32> & stencil_4_stencil_429_merged598_3, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  stencil_4.stencil_4_stencil_429_merged598_3_to_stencil_4_store_to_stencil_4_to_gp_16135_1.push(stencil_4_stencil_429_merged598_3);
}

inline void stencil_4_stencil_429_merged598_4_write(hw_uint<32> & stencil_4_stencil_429_merged598_4, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  stencil_4.stencil_4_stencil_429_merged598_4_to_stencil_4_store_to_stencil_4_to_gp_16135_1.push(stencil_4_stencil_429_merged598_4);
}

inline void stencil_4_stencil_429_merged598_5_write(hw_uint<32> & stencil_4_stencil_429_merged598_5, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  stencil_4.stencil_4_stencil_429_merged598_5_to_stencil_4_store_to_stencil_4_to_gp_16135_1.push(stencil_4_stencil_429_merged598_5);
}

inline hw_uint<32>  stencil_4_stencil_429_merged598_17_select(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_stencil_429_merged598_17 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_4[2 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  return 0;
}

inline hw_uint<32>  stencil_4_stencil_429_merged598_27_select(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_stencil_429_merged598_27 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_4[1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  return 0;
}

inline hw_uint<32>  stencil_4_stencil_429_merged598_37_select(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_stencil_429_merged598_37 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_4[4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  return 0;
}

inline hw_uint<32>  stencil_4_stencil_429_merged598_7_select(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_stencil_429_merged598_7 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_4[3 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  return 0;
}

inline hw_uint<32>  stencil_4_store_to_stencil_4_to_gp_16135_1_select(stencil_4_cache& stencil_4, int root, int stencil_4_ld4, int stencil_4_ld3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_store_to_stencil_4_to_gp_16135_1 read pattern: { store_to_stencil_4_to_gp_16135[root = 0, stencil_4_ld4, stencil_4_ld3] -> stencil_4[stencil_4_ld3, stencil_4_ld4] : 0 <= stencil_4_ld4 <= 127 and 0 <= stencil_4_ld3 <= 127 }
  if ((((-1 - stencil_4_ld3 + 4*floord(1 + stencil_4_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_4_to_gp_16135[root = 0, stencil_4_ld4, stencil_4_ld3] -> [1 + stencil_4_ld4, 4 + stencil_4_ld3, 2] : 0 <= stencil_4_ld4 <= 127 and 0 <= stencil_4_ld3 <= 127 }
  // Write schedule: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
    auto value_stencil_4_stencil_429_merged598_2 = stencil_4.stencil_4_stencil_429_merged598_2_to_stencil_4_store_to_stencil_4_to_gp_16135_1.peek(/* one reader or all rams */ 0);
    return value_stencil_4_stencil_429_merged598_2;
  }

  
  if ((((-2 - stencil_4_ld3 + 4*floord(2 + stencil_4_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_4_to_gp_16135[root = 0, stencil_4_ld4, stencil_4_ld3] -> [1 + stencil_4_ld4, 4 + stencil_4_ld3, 2] : 0 <= stencil_4_ld4 <= 127 and 0 <= stencil_4_ld3 <= 127 }
  // Write schedule: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
    auto value_stencil_4_stencil_429_merged598_3 = stencil_4.stencil_4_stencil_429_merged598_3_to_stencil_4_store_to_stencil_4_to_gp_16135_1.peek(/* one reader or all rams */ 0);
    return value_stencil_4_stencil_429_merged598_3;
  }

  
  if ((((1 - stencil_4_ld3 + 4*floord(-1 + stencil_4_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_4_to_gp_16135[root = 0, stencil_4_ld4, stencil_4_ld3] -> [1 + stencil_4_ld4, 4 + stencil_4_ld3, 2] : 0 <= stencil_4_ld4 <= 127 and 0 <= stencil_4_ld3 <= 127 }
  // Write schedule: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
    auto value_stencil_4_stencil_429_merged598_4 = stencil_4.stencil_4_stencil_429_merged598_4_to_stencil_4_store_to_stencil_4_to_gp_16135_1.peek(/* one reader or all rams */ 0);
    return value_stencil_4_stencil_429_merged598_4;
  }

  
  if ((((-stencil_4_ld3 + 4*floord(stencil_4_ld3, 4) == 0)))) {
  // Read schedule : { store_to_stencil_4_to_gp_16135[root = 0, stencil_4_ld4, stencil_4_ld3] -> [1 + stencil_4_ld4, 4 + stencil_4_ld3, 2] : 0 <= stencil_4_ld4 <= 127 and 0 <= stencil_4_ld3 <= 127 }
  // Write schedule: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
    auto value_stencil_4_stencil_429_merged598_5 = stencil_4.stencil_4_stencil_429_merged598_5_to_stencil_4_store_to_stencil_4_to_gp_16135_1.peek(/* one reader or all rams */ 0);
    return value_stencil_4_stencil_429_merged598_5;
  }

  
  return 0;
}

// # of bundles = 3
// stencil_429_merged598_read
//	stencil_4_stencil_429_merged598_7
//	stencil_4_stencil_429_merged598_17
//	stencil_4_stencil_429_merged598_27
//	stencil_4_stencil_429_merged598_37
inline hw_uint<128> stencil_4_stencil_429_merged598_read_bundle_read(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_4_stencil_429_merged598_7
    // stencil_4_stencil_429_merged598_17
    // stencil_4_stencil_429_merged598_27
    // stencil_4_stencil_429_merged598_37

	hw_uint<128> result;
	hw_uint<32>  stencil_4_stencil_429_merged598_7_res = stencil_4_stencil_429_merged598_7_select(stencil_4, root, stencil_428, stencil_429, dynamic_address);
	set_at<0, 128>(result, stencil_4_stencil_429_merged598_7_res);
	hw_uint<32>  stencil_4_stencil_429_merged598_17_res = stencil_4_stencil_429_merged598_17_select(stencil_4, root, stencil_428, stencil_429, dynamic_address);
	set_at<32, 128>(result, stencil_4_stencil_429_merged598_17_res);
	hw_uint<32>  stencil_4_stencil_429_merged598_27_res = stencil_4_stencil_429_merged598_27_select(stencil_4, root, stencil_428, stencil_429, dynamic_address);
	set_at<64, 128>(result, stencil_4_stencil_429_merged598_27_res);
	hw_uint<32>  stencil_4_stencil_429_merged598_37_res = stencil_4_stencil_429_merged598_37_select(stencil_4, root, stencil_428, stencil_429, dynamic_address);
	set_at<96, 128>(result, stencil_4_stencil_429_merged598_37_res);
	return result;
}

// stencil_429_merged598_write
//	stencil_4_stencil_429_merged598_2
//	stencil_4_stencil_429_merged598_3
//	stencil_4_stencil_429_merged598_4
//	stencil_4_stencil_429_merged598_5
inline void stencil_4_stencil_429_merged598_write_bundle_write(hw_uint<128>& stencil_429_merged598_write, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
	hw_uint<32>  stencil_4_stencil_429_merged598_2_res = stencil_429_merged598_write.extract<0, 31>();
	stencil_4_stencil_429_merged598_2_write(stencil_4_stencil_429_merged598_2_res, stencil_4, root, stencil_428, stencil_429, dynamic_address);
	hw_uint<32>  stencil_4_stencil_429_merged598_3_res = stencil_429_merged598_write.extract<32, 63>();
	stencil_4_stencil_429_merged598_3_write(stencil_4_stencil_429_merged598_3_res, stencil_4, root, stencil_428, stencil_429, dynamic_address);
	hw_uint<32>  stencil_4_stencil_429_merged598_4_res = stencil_429_merged598_write.extract<64, 95>();
	stencil_4_stencil_429_merged598_4_write(stencil_4_stencil_429_merged598_4_res, stencil_4, root, stencil_428, stencil_429, dynamic_address);
	hw_uint<32>  stencil_4_stencil_429_merged598_5_res = stencil_429_merged598_write.extract<96, 127>();
	stencil_4_stencil_429_merged598_5_write(stencil_4_stencil_429_merged598_5_res, stencil_4, root, stencil_428, stencil_429, dynamic_address);
}

// store_to_stencil_4_to_gp_16135_read
//	stencil_4_store_to_stencil_4_to_gp_16135_1
inline hw_uint<32> stencil_4_store_to_stencil_4_to_gp_16135_read_bundle_read(stencil_4_cache& stencil_4, int root, int stencil_4_ld4, int stencil_4_ld3, int dynamic_address) {
  // # of ports in bundle: 1
    // stencil_4_store_to_stencil_4_to_gp_16135_1

	hw_uint<32> result;
	hw_uint<32>  stencil_4_store_to_stencil_4_to_gp_16135_1_res = stencil_4_store_to_stencil_4_to_gp_16135_1_select(stencil_4, root, stencil_4_ld4, stencil_4_ld3, dynamic_address);
	set_at<0, 32>(result, stencil_4_store_to_stencil_4_to_gp_16135_1_res);
	return result;
}

// Total re-use buffer capacity: 8480 bits


// Operation logic
inline void store_to_stencil_4_to_gp_16135(stencil_4_cache& stencil_4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_4_to_gp_1613, int root, int stencil_4_ld4, int stencil_4_ld3) {
  // Dynamic address computation

	// Consume: stencil_4
	auto stencil_4_stencil_4_ld3_c__stencil_4_ld4_value = stencil_4_store_to_stencil_4_to_gp_16135_read_bundle_read(stencil_4/* source_delay */, root, stencil_4_ld4, stencil_4_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stencil_4_to_gp_1613
	stencil_4_to_gp_1613.write(stencil_4_stencil_4_ld3_c__stencil_4_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stencil_429_merged598(stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429) {
  // Dynamic address computation

	// Consume: stencil_3_FIFO_buf606
	auto stencil_3_FIFO_buf606__lp_4_m_stencil_429__p__3_rp___p__1_c______stencil_428__p___m_1_value = stencil_3_FIFO_buf606_stencil_429_merged598_read_bundle_read(stencil_3_FIFO_buf606/* source_delay */, root, stencil_428, stencil_429, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_4
	auto stencil_4__lp_4_m_stencil_429__p__3_rp__c______stencil_428_value = stencil_4_stencil_429_merged598_read_bundle_read(stencil_4/* source_delay */, root, stencil_428, stencil_429, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_429_cu596(stencil_3_FIFO_buf606__lp_4_m_stencil_429__p__3_rp___p__1_c______stencil_428__p___m_1_value, stencil_4__lp_4_m_stencil_429__p__3_rp__c______stencil_428_value);
	// Produce: stencil_4
	stencil_4_stencil_429_merged598_write_bundle_write(/* arg names */compute_result, stencil_4, root, stencil_428, stencil_429, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stencil_3_FIFO_buf6062(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_3_to_gp_6612, stencil_3_FIFO_buf606_cache& stencil_3_FIFO_buf606, int root, int stencil_3_ld1, int stencil_3_ld0) {
  // Dynamic address computation

	// Consume: stencil_3_to_gp_6612
	auto stencil_3_to_gp_6612_stencil_3_ld0_c__stencil_3_ld1_value = stencil_3_to_gp_6612.read();
	// Produce: stencil_3_FIFO_buf606
	stencil_3_FIFO_buf606_load_to_stencil_3_FIFO_buf6062_write_bundle_write(/* arg names */stencil_3_to_gp_6612_stencil_3_ld0_c__stencil_3_ld1_value, stencil_3_FIFO_buf606, root, stencil_3_ld1, stencil_3_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stencil_428_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_3_to_gp_6612, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_4_to_gp_1613) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stencil_428__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stencil_3_FIFO_buf606_cache stencil_3_FIFO_buf606;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_4_cache stencil_4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128; store_to_stencil_4_to_gp_16135[root = 0, stencil_4_ld4, stencil_4_ld3] -> [1 + stencil_4_ld4, 4 + stencil_4_ld3, 2] : 0 <= stencil_4_ld4 <= 127 and 0 <= stencil_4_ld3 <= 127; stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
//   { load_to_stencil_3_FIFO_buf6062[root = 0, stencil_3_ld1, stencil_3_ld0] -> [stencil_3_ld1, stencil_3_ld0, 0] : -1 <= stencil_3_ld1 <= 128 and -1 <= stencil_3_ld0 <= 128 }
// Condition for load_to_stencil_3_FIFO_buf6062(((i2 == 0) && (1 + i0 >= 0) && (128 - i0 >= 0) && (1 + i1 >= 0) && (128 - i1 >= 0)))
//   { store_to_stencil_4_to_gp_16135[root = 0, stencil_4_ld4, stencil_4_ld3] -> [1 + stencil_4_ld4, 4 + stencil_4_ld3, 2] : 0 <= stencil_4_ld4 <= 127 and 0 <= stencil_4_ld3 <= 127 }
// Condition for store_to_stencil_4_to_gp_16135(((-2 + i2 == 0) && (-1 + i0 >= 0) && (128 - i0 >= 0) && (-4 + i1 >= 0) && (131 - i1 >= 0)))
//   { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [1 + stencil_428, 4 + 4stencil_429, 1] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
// Condition for stencil_429_merged598(((-i1 + 4*floord(i1, 4) == 0) && (-1 + i2 == 0) && (-1 + i0 >= 0) && (128 - i0 >= 0) && (-4 + i1 >= 0) && (128 - i1 >= 0)))

  /*
for (int c0 = -1; c0 <= 128; c0 += 1)
  for (int c1 = -1; c1 <= 131; c1 += 1) {
    if (c1 <= 128) {
      load_to_stencil_3_FIFO_buf6062(0, c0, c1);
      if (c0 >= 1 && c1 >= 4 && c1 % 4 == 0)
        stencil_429_merged598(0, c0 - 1, (c1 / 4) - 1);
    }
    if (c0 >= 1 && c1 >= 4)
      store_to_stencil_4_to_gp_16135(0, c0 - 1, c1 - 4);
  }

  */
	for (int c0 = -1; c0 <= 128; c0 += 1)
	  for (int c1 = -1; c1 <= 131; c1 += 1) {
	    if (c1 <= 128) {
	      load_to_stencil_3_FIFO_buf6062(stencil_3_to_gp_6612 /* buf name */, stencil_3_FIFO_buf606, 0, c0, c1);
	      if (c0 >= 1 && c1 >= 4 && c1 % 4 == 0)
	        stencil_429_merged598(stencil_3_FIFO_buf606 /* buf name */, stencil_4 /* buf name */, 0, c0 - 1, (c1 / 4) - 1);
	    }
	    if (c0 >= 1 && c1 >= 4)
	      store_to_stencil_4_to_gp_16135(stencil_4 /* buf name */, stencil_4_to_gp_1613, 0, c0 - 1, c1 - 4);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_stencil_428__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_3_to_gp_6612, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_4_to_gp_1613, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_stencil_428_(stencil_3_to_gp_6612, stencil_4_to_gp_1613);
  }
}
// Driver function
void sc_dyn(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sc_dyn_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream<hw_uint<32> > in_to_gp_2608;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_to_gp_2608.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > stencil_4_to_gp_1613;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stencil_4_to_gp_1613.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > stencil_0_to_gp_3609;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stencil_0_to_gp_3609.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > stencil_1_to_gp_4610;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stencil_1_to_gp_4610.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > stencil_2_to_gp_5611;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stencil_2_to_gp_5611.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > stencil_3_to_gp_6612;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stencil_3_to_gp_6612.values depth=1
#endif //__VIVADO_SYNTH__


  Extracted_pw_math_in_oc01_(in_oc, in_to_gp_2608);
  Extracted_stencil_04_(in_to_gp_2608, stencil_0_to_gp_3609);
  Extracted_stencil_110_(stencil_0_to_gp_3609, stencil_1_to_gp_4610);
  Extracted_stencil_216_(stencil_1_to_gp_4610, stencil_2_to_gp_5611);
  Extracted_stencil_322_(stencil_2_to_gp_5611, stencil_3_to_gp_6612);
  Extracted_stencil_428_(stencil_3_to_gp_6612, stencil_4_to_gp_1613);
  Extracted_pw_math_stencil_43435_(stencil_4_to_gp_1613, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sc_dyn_wrapper(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sc_dyn(in_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[-2 + 4pw_math_in_oc02, -5 + pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36; pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[-3 + 4pw_math_in_oc02, -5 + pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36; pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[-4 + 4pw_math_in_oc02, -5 + pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36; pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[-5 + 4pw_math_in_oc02, -5 + pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
const int pw_math_in_oc02_merged583_read_pipe0_num_transfers = 5106;
  // { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> out[3 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31; pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> out[2 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31; pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> out[1 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31; pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> out[4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
const int pw_math_stencil_43436_merged601_write_pipe0_num_transfers = 4096;


extern "C" {

void sc_dyn_accel(hw_uint<128>* pw_math_in_oc02_merged583_read_pipe0, hw_uint<128>* pw_math_stencil_43436_merged601_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in_oc02_merged583_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_stencil_43436_merged601_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in_oc02_merged583_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_stencil_43436_merged601_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > pw_math_in_oc02_merged583_read_pipe0_channel;
  static HWStream<hw_uint<128> > pw_math_stencil_43436_merged601_write_pipe0_channel;

  burst_read<128>(pw_math_in_oc02_merged583_read_pipe0, pw_math_in_oc02_merged583_read_pipe0_channel, pw_math_in_oc02_merged583_read_pipe0_num_transfers*size);

  sc_dyn_wrapper(pw_math_in_oc02_merged583_read_pipe0_channel, pw_math_stencil_43436_merged601_write_pipe0_channel, size);

  burst_write<128>(pw_math_stencil_43436_merged601_write_pipe0, pw_math_stencil_43436_merged601_write_pipe0_channel, pw_math_stencil_43436_merged601_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sc_dyn_rdai(HWStream<hw_uint<128> >& pw_math_in_oc02_merged583_read_pipe0, HWStream<hw_uint<128> >&  pw_math_stencil_43436_merged601_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in_oc02_merged583_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_stencil_43436_merged601_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sc_dyn(pw_math_in_oc02_merged583_read_pipe0, pw_math_stencil_43436_merged601_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

