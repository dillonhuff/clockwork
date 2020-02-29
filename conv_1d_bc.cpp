#include "accumulate_3.h"

#include "hw_classes.h"

struct M_write_4_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f4;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in M: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct M_cache {
  M_write_4_cache M_write_4;
};



inline void M_write_4_write(hw_uint<32> & M_write_4, M_cache& M) {
	M.M_write_4.push(M_write_4);
}

inline hw_uint<32>  M_read0_1_select(M_cache& M, int root, int c) {
	hw_uint<32>  value_M_write_4 = M.M_write_4.peek((root == 0 && c >= 0 && 7 - c >= 0) ? (2) : (-8 + c == 0 && root == 0) ? (1) : 0);
	return value_M_write_4;
}

inline hw_uint<32>  M_read0_2_select(M_cache& M, int root, int c) {
	hw_uint<32>  value_M_write_4 = M.M_write_4.peek((root == 0 && c >= 0 && 7 - c >= 0) ? (1) : 0);
	return value_M_write_4;
}

inline hw_uint<32>  M_read0_3_select(M_cache& M, int root, int c) {
	hw_uint<32>  value_M_write_4 = M.M_write_4.peek_0();
	return value_M_write_4;
}

// # of bundles = 2
// read0_read
//	M_read0_1
//	M_read0_2
//	M_read0_3
inline hw_uint<96> M_read0_read_bundle_read(M_cache& M, int root, int c) {
	hw_uint<96> result;
	hw_uint<32>  M_read0_1_res = M_read0_1_select(M, root, c);
	set_at<0, 96>(result, M_read0_1_res);
	hw_uint<32>  M_read0_2_res = M_read0_2_select(M, root, c);
	set_at<32, 96>(result, M_read0_2_res);
	hw_uint<32>  M_read0_3_res = M_read0_3_select(M, root, c);
	set_at<64, 96>(result, M_read0_3_res);
	return result;
}

// write_write
//	M_write_4
inline void M_write_write_bundle_write(hw_uint<32>& write_write, M_cache& M) {
	hw_uint<32>  M_write_4_res = write_write.extract<0, 31>();
	M_write_4_write(M_write_4_res, M);
}



#include "hw_classes.h"

struct T_read0_0_cache {
	// Capacity: 1
	fifo<hw_uint<96>, 1> f;
	inline hw_uint<96> peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<96> peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<96> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct T_cache {
  T_read0_0_cache T_read0_0;
};



inline void T_read0_0_write(hw_uint<96>& T_read0_0, T_cache& T) {
	T.T_read0_0.push(T_read0_0);
}

inline hw_uint<96> T_compute_out_7_select(T_cache& T, int root, int c) {
	hw_uint<96> value_T_read0_0 = T.T_read0_0.peek_0();
	return value_T_read0_0;
}

// # of bundles = 2
// compute_out_read
//	T_compute_out_7
inline hw_uint<96> T_compute_out_read_bundle_read(T_cache& T, int root, int c) {
	hw_uint<96> result;
	hw_uint<96> T_compute_out_7_res = T_compute_out_7_select(T, root, c);
	set_at<0, 96>(result, T_compute_out_7_res);
	return result;
}

// read0_write
//	T_read0_0
inline void T_read0_write_bundle_write(hw_uint<96>& read0_write, T_cache& T) {
	hw_uint<96> T_read0_0_res = read0_write.extract<0, 95>();
	T_read0_0_write(T_read0_0_res, T);
}





// Operation logic
inline void read0(M_cache& M, T_cache& T, int root, int c) {
	// Consume: M
	auto M_min_lp_c_c__9_rp__value = M_read0_read_bundle_read(M/* source_delay */, root, c);
	// Produce: T
	T_read0_write_bundle_write(M_min_lp_c_c__9_rp__value, T);
}

inline void write(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, M_cache& M, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	M_write_write_bundle_write(in_p_value, M);
}

inline void compute_out(T_cache& T, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int c) {
	// Consume: T
	auto T_c_value = T_compute_out_read_bundle_read(T/* source_delay */, root, c);
	auto compute_result = accumulate_3(T_c_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void conv_1d_bc(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {
  M_cache M;
  T_cache T;
	for (int c0 = 0; c0 <= 11; c0 += 1) {
	  if (c0 <= 9)
	    write(in, M, 0, c0);
	  if (c0 >= 2) {
	    read0(M, T, 0, c0 - 2);
	    compute_out(T, out, 0, c0 - 2);
	  }
	}
	
}
