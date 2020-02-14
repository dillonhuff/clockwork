#include "hw_classes.h"

struct write_cache {
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
		cout << "Error: Unsupported offset in shift_reg: " << offset << endl;
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



inline void write_write(InputStream<hw_uint<32>  >& write, write_cache& write_delay) {
	hw_uint<32>  write_value = write.read(); write_delay.push(write_value);
}

inline hw_uint<32>  read0_select(write_cache& write_delay
, int i) {
// Pieces...
// { read0[i] : 0 <= i <= 7 } -> { read0[i] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	hw_uint<32>  value_write = write_delay.peek_2();
	return value_write;
}

inline hw_uint<32>  read1_select(write_cache& write_delay
, int i) {
// Pieces...
// { read1[i] : 0 <= i <= 7 } -> { read1[i] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	hw_uint<32>  value_write = write_delay.peek_1();
	return value_write;
}

inline hw_uint<32>  read2_select(write_cache& write_delay
, int i) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	hw_uint<32>  value_write = write_delay.peek_0();
	return value_write;
}

// Bundles...
// read0
//	read0
inline hw_uint<32> shift_reg_read0_bundle_read(write_cache& write_delay, int i) {
	hw_uint<32> result;
	hw_uint<32>  read0_res = read0_select(write_delay, i);
	set_at<0, 32>(result, read0_res);
	return result;
}

// read1
//	read1
inline hw_uint<32> shift_reg_read1_bundle_read(write_cache& write_delay, int i) {
	hw_uint<32> result;
	hw_uint<32>  read1_res = read1_select(write_delay, i);
	set_at<0, 32>(result, read1_res);
	return result;
}

// read2
//	read2
inline hw_uint<32> shift_reg_read2_bundle_read(write_cache& write_delay, int i) {
	hw_uint<32> result;
	hw_uint<32>  read2_res = read2_select(write_delay, i);
	set_at<0, 32>(result, read2_res);
	return result;
}

// write
//	write
inline void shift_reg_write_bundle_write(InputStream<hw_uint<32>  >& write, write_cache& write_delay) {
	write_write(write, write_delay);
}



void shift_reg(OutputStream<hw_uint<32> >& read0, OutputStream<hw_uint<32> >& read1, OutputStream<hw_uint<32> >& read2, InputStream<hw_uint<32> >& write) {
	write_cache write_delay;

	for (int c0 = 0; c0 <= 9; c0 += 1) {
	  write_write(write, write_delay);
	  if (c0 >= 2) {
	    read2.write(shift_reg_read2_bundle_read(write_delay, c0 - 2));
	    read1.write(shift_reg_read1_bundle_read(write_delay, c0 - 2));
	    read0.write(shift_reg_read0_bundle_read(write_delay, c0 - 2));
	  }
	}
	
}
