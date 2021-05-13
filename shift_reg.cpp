#include "shift_reg.h"

struct write_to_read0_cache {
	// RAM Box: {[0, 7]}
	// Capacity: 3
	// # of read delays: 2
  // 0, 2
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

struct write_to_read1_cache {
	// RAM Box: {[1, 8]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<32> , 2> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct write_to_read2_cache {
	// RAM Box: {[2, 9]}
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

struct shift_reg_cache {
  // Reader addrs...
    // { read0[i] -> M[i] : 0 <= i <= 7 }
    // { read1[i] -> M[1 + i] : 0 <= i <= 7 }
    // { read2[i] -> M[2 + i] : 0 <= i <= 7 }
  // # of banks: 3
  write_to_read0_cache write_to_read0;
  write_to_read1_cache write_to_read1;
  write_to_read2_cache write_to_read2;
};



inline void write_write(hw_uint<32> & write, shift_reg_cache& shift_reg, int i, int dynamic_address) {
  shift_reg.write_to_read0.push(write);
  shift_reg.write_to_read1.push(write);
  shift_reg.write_to_read2.push(write);
}

inline hw_uint<32>  read0_select(shift_reg_cache& shift_reg, int i, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // read0 read pattern: { read0[i] -> M[i] : 0 <= i <= 7 }
  // Read schedule : { read0[i] -> [2 + i, 1] : 0 <= i <= 7 }
  // Write schedule: { write[i] -> [i, 0] : 0 <= i <= 9 }
  auto value_write = shift_reg.write_to_read0.peek(/* one reader or all rams */ 2);
  return value_write;
  return 0;
}

inline hw_uint<32>  read1_select(shift_reg_cache& shift_reg, int i, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // read1 read pattern: { read1[i] -> M[1 + i] : 0 <= i <= 7 }
  // Read schedule : { read1[i] -> [2 + i, 1] : 0 <= i <= 7 }
  // Write schedule: { write[i] -> [i, 0] : 0 <= i <= 9 }
  auto value_write = shift_reg.write_to_read1.peek(/* one reader or all rams */ 1);
  return value_write;
  return 0;
}

inline hw_uint<32>  read2_select(shift_reg_cache& shift_reg, int i, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // read2 read pattern: { read2[i] -> M[2 + i] : 0 <= i <= 7 }
  // Read schedule : { read2[i] -> [2 + i, 1] : 0 <= i <= 7 }
  // Write schedule: { write[i] -> [i, 0] : 0 <= i <= 9 }
  auto value_write = shift_reg.write_to_read2.peek(/* one reader or all rams */ 0);
  return value_write;
  return 0;
}

// # of bundles = 4
// read0
//	read0
inline hw_uint<32> shift_reg_read0_bundle_read(shift_reg_cache& shift_reg, int i, int dynamic_address) {
  // # of ports in bundle: 1
    // read0

	hw_uint<32> result;
	hw_uint<32>  read0_res = read0_select(shift_reg, i, dynamic_address);
	set_at<0, 32>(result, read0_res);
	return result;
}

// read1
//	read1
inline hw_uint<32> shift_reg_read1_bundle_read(shift_reg_cache& shift_reg, int i, int dynamic_address) {
  // # of ports in bundle: 1
    // read1

	hw_uint<32> result;
	hw_uint<32>  read1_res = read1_select(shift_reg, i, dynamic_address);
	set_at<0, 32>(result, read1_res);
	return result;
}

// read2
//	read2
inline hw_uint<32> shift_reg_read2_bundle_read(shift_reg_cache& shift_reg, int i, int dynamic_address) {
  // # of ports in bundle: 1
    // read2

	hw_uint<32> result;
	hw_uint<32>  read2_res = read2_select(shift_reg, i, dynamic_address);
	set_at<0, 32>(result, read2_res);
	return result;
}

// write
//	write
inline void shift_reg_write_bundle_write(HWStream<hw_uint<32> >& write, shift_reg_cache& shift_reg, int i, int dynamic_address) {
	hw_uint<32> data_write = write.read();
	hw_uint<32>  write_res = data_write.extract<0, 31>();
	write_write(write_res, shift_reg, i, dynamic_address);
}

void shift_reg(HWStream<hw_uint<32> >& read0, HWStream<hw_uint<32> >& read1, HWStream<hw_uint<32> >& read2, HWStream<hw_uint<32> >& write) {
	shift_reg_cache write_delay;

	for (int c0 = 0; c0 <= 9; c0 += 1) {
	  shift_reg_write_bundle_write(write, write_delay, c0, 0);
	  if (c0 >= 2) {
	    read2.write(shift_reg_read2_bundle_read(write_delay, c0 - 2, 0));
	    read1.write(shift_reg_read1_bundle_read(write_delay, c0 - 2, 0));
	    read0.write(shift_reg_read0_bundle_read(write_delay, c0 - 2, 0));
	  }
	}
	
}
