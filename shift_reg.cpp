#include "hw_classes.h"

struct write_cache {
	// Capacity: 3
	// DD expr = 2
	// DD expr = 1
	// DD expr = 0
	// Peek points
	// DD = 0
	// DD = 1
	// DD = 2
	// Break points in parition
	// BP = 0
	// BP = 1
	// BP = 1
	// BP = 2
	// BP = 2
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<int, 1> f4;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		cout << "Error: Unsupported offset in shift_reg: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void write_write(InputStream<int>& write, write_cache& write_delay) {
	int write_value = write.read(); write_delay.push(write_value);
}

// Select if: { read0[i] -> write[i' = i] : 0 <= i <= 7 }
inline int read0_select(write_cache& write_delay
, int i) {
// Pieces...
// { read0[i] : 0 <= i <= 7 } -> { read0[i] -> 2 }
// 	is always true on iteration domain: 1
	int value_write = write_delay.peek_2();
	return value_write;
}

// Select if: { read1[i] -> write[i' = 1 + i] : 0 <= i <= 7 }
inline int read1_select(write_cache& write_delay
, int i) {
// Pieces...
// { read1[i] : 0 <= i <= 7 } -> { read1[i] -> 1 }
// 	is always true on iteration domain: 1
	int value_write = write_delay.peek_1();
	return value_write;
}

// Select if: { read2[i] -> write[i' = 2 + i] : 0 <= i <= 7 }
inline int read2_select(write_cache& write_delay
, int i) {
// Pieces...
	int value_write = write_delay.peek_0();
	return value_write;
}

// Bundles...
// read0
//	read0
inline int shift_reg_read0_bundle_action(write_cache& write_delay, int i) {
	int result;
	int read0_res = read0_select(write_delay, i);
	set_at<0, 32>(result, read0_res);
	return result;
}

// read1
//	read1
inline int shift_reg_read1_bundle_action(write_cache& write_delay, int i) {
	int result;
	int read1_res = read1_select(write_delay, i);
	set_at<0, 32>(result, read1_res);
	return result;
}

// read2
//	read2
inline int shift_reg_read2_bundle_action(write_cache& write_delay, int i) {
	int result;
	int read2_res = read2_select(write_delay, i);
	set_at<0, 32>(result, read2_res);
	return result;
}

// write
//	write
inline void shift_reg_write_bundle_action(InputStream<int>& write, write_cache& write_delay) {
	write_write(write, write_delay);
}



void shift_reg(OutputStream<int >& read0, OutputStream<int >& read1, OutputStream<int >& read2, InputStream<int >& write) {
	write_cache write_delay;

	for (int c0 = 0; c0 <= 9; c0 += 1) {
	  write_write(write, write_delay);
	  if (c0 >= 2) {
	    read2.write(shift_reg_read2_bundle_action(write_delay, c0 - 2));
	    read1.write(shift_reg_read1_bundle_action(write_delay, c0 - 2));
	    read0.write(shift_reg_read0_bundle_action(write_delay, c0 - 2));
	  }
	}
	
}
