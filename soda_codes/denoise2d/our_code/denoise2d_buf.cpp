#include "hw_classes.h"

struct denoise2d_cache {
	// Capacity: 1
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in denoise2d: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};



inline void denoise2d_write(InputStream<hw_uint<32>  >& denoise2d, denoise2d_cache& denoise2d_delay) {
	hw_uint<32>  denoise2d_value = denoise2d.read(); denoise2d_delay.push(denoise2d_value);
}

// # of bundles = 1
// denoise2d_comp_write
//	denoise2d
inline void denoise2d_denoise2d_comp_write_bundle_write(InputStream<hw_uint<32>  >& denoise2d_comp_write, denoise2d_cache& denoise2d_delay) {
	denoise2d_write(denoise2d_comp_write, denoise2d_delay);
}



