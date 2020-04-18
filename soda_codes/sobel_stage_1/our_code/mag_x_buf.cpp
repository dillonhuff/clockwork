#include "hw_classes.h"

struct mag_x_cache {
	// Capacity: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};



inline void mag_x_write(InputStream<hw_uint<32>  >& mag_x, mag_x_cache& mag_x_delay) {
	hw_uint<32>  mag_x_value = mag_x.read(); mag_x_delay.push(mag_x_value);
}

inline hw_uint<32>  mag_rd0_select(mag_x_cache& mag_x_delay
, int d0, int d1) {
	hw_uint<32>  value_mag_x = mag_x_delay.peek_0();
	return value_mag_x;
}

// # of bundles = 2
// mag_comp_read
//	mag_rd0
inline hw_uint<32> mag_x_mag_comp_read_bundle_read(mag_x_cache& mag_x_delay, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  mag_rd0_res = mag_rd0_select(mag_x_delay, d0, d1);
	set_at<0, 32>(result, mag_rd0_res);
	return result;
}

// mag_x_comp_write
//	mag_x
inline void mag_x_mag_x_comp_write_bundle_write(InputStream<hw_uint<32>  >& mag_x_comp_write, mag_x_cache& mag_x_delay) {
	mag_x_write(mag_x_comp_write, mag_x_delay);
}



