#include "accumulate_3.h"

#include "hw_classes.h"

struct agg_get_input_0_cache {
	// Capacity: 4
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 3] capacity = 1
	fifo<hw_uint<32> , 1> f6;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
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
		if (offset == 3) {
			return f6.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in agg: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct agg_cache {
  agg_get_input_0_cache agg_get_input_0;
};



inline void agg_get_input_0_write(hw_uint<32> & agg_get_input_0, agg_cache& agg) {
	agg.agg_get_input_0.push(agg_get_input_0);
}

inline hw_uint<32>  agg_compute_output_3_select(agg_cache& agg, int root, int c) {
  // qpd = { compute_output[root, c] -> 3 : root = 0 and 0 <= c <= 2 }
	hw_uint<32>  value_agg_get_input_0 = agg.agg_get_input_0.peek_3();
	return value_agg_get_input_0;
}

inline hw_uint<32>  agg_compute_output_4_select(agg_cache& agg, int root, int c) {
  // qpd = { compute_output[root, c] -> 2 : root = 0 and 0 <= c <= 2 }
	hw_uint<32>  value_agg_get_input_0 = agg.agg_get_input_0.peek_2();
	return value_agg_get_input_0;
}

inline hw_uint<32>  agg_compute_output_5_select(agg_cache& agg, int root, int c) {
  // qpd = { compute_output[root, c] -> 1 : root = 0 and 0 <= c <= 2 }
	hw_uint<32>  value_agg_get_input_0 = agg.agg_get_input_0.peek_1();
	return value_agg_get_input_0;
}

inline hw_uint<32>  agg_compute_output_6_select(agg_cache& agg, int root, int c) {
  // qpd = {  }
	hw_uint<32>  value_agg_get_input_0 = agg.agg_get_input_0.peek_0();
	return value_agg_get_input_0;
}

// # of bundles = 3
// agg_get_input_0
//	agg_get_input_0
inline void agg_agg_get_input_0_bundle_write(hw_uint<32>& agg_get_input_0, agg_cache& agg) {
	hw_uint<32>  agg_get_input_0_res = agg_get_input_0.extract<0, 31>();
	agg_get_input_0_write(agg_get_input_0_res, agg);
}

// compute_output_read
//	agg_compute_output_3
//	agg_compute_output_4
//	agg_compute_output_5
//	agg_compute_output_6
inline hw_uint<128> agg_compute_output_read_bundle_read(agg_cache& agg, int root, int c) {
	hw_uint<128> result;
	hw_uint<32>  agg_compute_output_3_res = agg_compute_output_3_select(agg, root, c);
	set_at<0, 128>(result, agg_compute_output_3_res);
	hw_uint<32>  agg_compute_output_4_res = agg_compute_output_4_select(agg, root, c);
	set_at<32, 128>(result, agg_compute_output_4_res);
	hw_uint<32>  agg_compute_output_5_res = agg_compute_output_5_select(agg, root, c);
	set_at<64, 128>(result, agg_compute_output_5_res);
	hw_uint<32>  agg_compute_output_6_res = agg_compute_output_6_select(agg, root, c);
	set_at<96, 128>(result, agg_compute_output_6_res);
	return result;
}

// get_input_write
//	agg_get_input_0
inline void agg_get_input_write_bundle_write(hw_uint<32>& get_input_write, agg_cache& agg) {
	hw_uint<32>  agg_get_input_0_res = get_input_write.extract<0, 31>();
	agg_get_input_0_write(agg_get_input_0_res, agg);
}





// Operation logic
inline void get_input(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, agg_cache& agg, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: agg
	agg_get_input_write_bundle_write(in_p_value, agg);
}

inline void compute_output(agg_cache& agg, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int c) {
	// Consume: agg
	auto agg_4_m_c_value = agg_compute_output_read_bundle_read(agg/* source_delay */, root, c);
	auto compute_result = accumulate_3(agg_4_m_c_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void agg(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {
  agg_cache agg;
	for (int c0 = 0; c0 <= 11; c0 += 1) {
	  get_input(in, agg, 0, c0);
	  if ((c0 + 1) % 4 == 0)
	    compute_output(agg, out, 0, (c0 - 3) / 4);
	}
	
}
