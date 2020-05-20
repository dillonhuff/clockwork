#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "hr_8_opt_compute_units.h"

#include "hw_classes.h"

struct det_det_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct det_det_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct det_det_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct det_det_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct det_det_update_0_write4_merged_banks_1_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct det_det_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct det_det_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct det_det_update_0_write7_merged_banks_1_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct det_cache {
  det_det_update_0_write0_merged_banks_1_cache det_det_update_0_write0_merged_banks_1;
  det_det_update_0_write1_merged_banks_1_cache det_det_update_0_write1_merged_banks_1;
  det_det_update_0_write2_merged_banks_1_cache det_det_update_0_write2_merged_banks_1;
  det_det_update_0_write3_merged_banks_1_cache det_det_update_0_write3_merged_banks_1;
  det_det_update_0_write4_merged_banks_1_cache det_det_update_0_write4_merged_banks_1;
  det_det_update_0_write5_merged_banks_1_cache det_det_update_0_write5_merged_banks_1;
  det_det_update_0_write6_merged_banks_1_cache det_det_update_0_write6_merged_banks_1;
  det_det_update_0_write7_merged_banks_1_cache det_det_update_0_write7_merged_banks_1;
};



inline void det_det_update_0_write0_write(hw_uint<32> & det_det_update_0_write0, det_cache& det, int d0, int d1) {
  det.det_det_update_0_write0_merged_banks_1.push(det_det_update_0_write0);
}

inline void det_det_update_0_write1_write(hw_uint<32> & det_det_update_0_write1, det_cache& det, int d0, int d1) {
  det.det_det_update_0_write1_merged_banks_1.push(det_det_update_0_write1);
}

inline void det_det_update_0_write2_write(hw_uint<32> & det_det_update_0_write2, det_cache& det, int d0, int d1) {
  det.det_det_update_0_write2_merged_banks_1.push(det_det_update_0_write2);
}

inline void det_det_update_0_write3_write(hw_uint<32> & det_det_update_0_write3, det_cache& det, int d0, int d1) {
  det.det_det_update_0_write3_merged_banks_1.push(det_det_update_0_write3);
}

inline void det_det_update_0_write4_write(hw_uint<32> & det_det_update_0_write4, det_cache& det, int d0, int d1) {
  det.det_det_update_0_write4_merged_banks_1.push(det_det_update_0_write4);
}

inline void det_det_update_0_write5_write(hw_uint<32> & det_det_update_0_write5, det_cache& det, int d0, int d1) {
  det.det_det_update_0_write5_merged_banks_1.push(det_det_update_0_write5);
}

inline void det_det_update_0_write6_write(hw_uint<32> & det_det_update_0_write6, det_cache& det, int d0, int d1) {
  det.det_det_update_0_write6_merged_banks_1.push(det_det_update_0_write6);
}

inline void det_det_update_0_write7_write(hw_uint<32> & det_det_update_0_write7, det_cache& det, int d0, int d1) {
  det.det_det_update_0_write7_merged_banks_1.push(det_det_update_0_write7);
}

inline hw_uint<32>  hr_8_rd0_select(det_cache& det, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd0 read pattern: { hr_8_update_0[d0, d1] -> det[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_det_det_update_0_write0 = det.det_det_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_det_det_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd1_select(det_cache& det, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd1 read pattern: { hr_8_update_0[d0, d1] -> det[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_det_det_update_0_write1 = det.det_det_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_det_det_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd2_select(det_cache& det, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd2 read pattern: { hr_8_update_0[d0, d1] -> det[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_det_det_update_0_write2 = det.det_det_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_det_det_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd3_select(det_cache& det, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd3 read pattern: { hr_8_update_0[d0, d1] -> det[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_det_det_update_0_write3 = det.det_det_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_det_det_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd4_select(det_cache& det, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd4 read pattern: { hr_8_update_0[d0, d1] -> det[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_det_det_update_0_write4 = det.det_det_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_det_det_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd5_select(det_cache& det, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd5 read pattern: { hr_8_update_0[d0, d1] -> det[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_det_det_update_0_write5 = det.det_det_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_det_det_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd6_select(det_cache& det, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd6 read pattern: { hr_8_update_0[d0, d1] -> det[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_det_det_update_0_write6 = det.det_det_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_det_det_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd7_select(det_cache& det, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd7 read pattern: { hr_8_update_0[d0, d1] -> det[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_det_det_update_0_write7 = det.det_det_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_det_det_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// det_update_0_write
//	det_det_update_0_write0
//	det_det_update_0_write1
//	det_det_update_0_write2
//	det_det_update_0_write3
//	det_det_update_0_write4
//	det_det_update_0_write5
//	det_det_update_0_write6
//	det_det_update_0_write7
inline void det_det_update_0_write_bundle_write(hw_uint<256>& det_update_0_write, det_cache& det, int d0, int d1) {
	hw_uint<32>  det_det_update_0_write0_res = det_update_0_write.extract<0, 31>();
	det_det_update_0_write0_write(det_det_update_0_write0_res, det, d0, d1);
	hw_uint<32>  det_det_update_0_write1_res = det_update_0_write.extract<32, 63>();
	det_det_update_0_write1_write(det_det_update_0_write1_res, det, d0, d1);
	hw_uint<32>  det_det_update_0_write2_res = det_update_0_write.extract<64, 95>();
	det_det_update_0_write2_write(det_det_update_0_write2_res, det, d0, d1);
	hw_uint<32>  det_det_update_0_write3_res = det_update_0_write.extract<96, 127>();
	det_det_update_0_write3_write(det_det_update_0_write3_res, det, d0, d1);
	hw_uint<32>  det_det_update_0_write4_res = det_update_0_write.extract<128, 159>();
	det_det_update_0_write4_write(det_det_update_0_write4_res, det, d0, d1);
	hw_uint<32>  det_det_update_0_write5_res = det_update_0_write.extract<160, 191>();
	det_det_update_0_write5_write(det_det_update_0_write5_res, det, d0, d1);
	hw_uint<32>  det_det_update_0_write6_res = det_update_0_write.extract<192, 223>();
	det_det_update_0_write6_write(det_det_update_0_write6_res, det, d0, d1);
	hw_uint<32>  det_det_update_0_write7_res = det_update_0_write.extract<224, 255>();
	det_det_update_0_write7_write(det_det_update_0_write7_res, det, d0, d1);
}

// hr_8_update_0_read
//	hr_8_rd0
//	hr_8_rd1
//	hr_8_rd2
//	hr_8_rd3
//	hr_8_rd4
//	hr_8_rd5
//	hr_8_rd6
//	hr_8_rd7
inline hw_uint<256> det_hr_8_update_0_read_bundle_read(det_cache& det, int d0, int d1) {
  // # of ports in bundle: 8
    // hr_8_rd0
    // hr_8_rd1
    // hr_8_rd2
    // hr_8_rd3
    // hr_8_rd4
    // hr_8_rd5
    // hr_8_rd6
    // hr_8_rd7

	hw_uint<256> result;
	hw_uint<32>  hr_8_rd0_res = hr_8_rd0_select(det, d0, d1);
	set_at<0, 256>(result, hr_8_rd0_res);
	hw_uint<32>  hr_8_rd1_res = hr_8_rd1_select(det, d0, d1);
	set_at<32, 256>(result, hr_8_rd1_res);
	hw_uint<32>  hr_8_rd2_res = hr_8_rd2_select(det, d0, d1);
	set_at<64, 256>(result, hr_8_rd2_res);
	hw_uint<32>  hr_8_rd3_res = hr_8_rd3_select(det, d0, d1);
	set_at<96, 256>(result, hr_8_rd3_res);
	hw_uint<32>  hr_8_rd4_res = hr_8_rd4_select(det, d0, d1);
	set_at<128, 256>(result, hr_8_rd4_res);
	hw_uint<32>  hr_8_rd5_res = hr_8_rd5_select(det, d0, d1);
	set_at<160, 256>(result, hr_8_rd5_res);
	hw_uint<32>  hr_8_rd6_res = hr_8_rd6_select(det, d0, d1);
	set_at<192, 256>(result, hr_8_rd6_res);
	hw_uint<32>  hr_8_rd7_res = hr_8_rd7_select(det, d0, d1);
	set_at<224, 256>(result, hr_8_rd7_res);
	return result;
}

#include "hw_classes.h"

struct grad_x_grad_x_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[-8, 1920], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_x_grad_x_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[-7, 1921], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_x_grad_x_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[-6, 1922], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_x_grad_x_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[-5, 1923], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_x_grad_x_update_0_write4_merged_banks_2_cache {
	// RAM Box: {[-4, 1924], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_x_grad_x_update_0_write5_merged_banks_2_cache {
	// RAM Box: {[-3, 1925], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_x_grad_x_update_0_write6_merged_banks_2_cache {
	// RAM Box: {[-2, 1926], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_x_grad_x_update_0_write7_merged_banks_2_cache {
	// RAM Box: {[-1, 1927], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_x_cache {
  grad_x_grad_x_update_0_write0_merged_banks_2_cache grad_x_grad_x_update_0_write0_merged_banks_2;
  grad_x_grad_x_update_0_write1_merged_banks_2_cache grad_x_grad_x_update_0_write1_merged_banks_2;
  grad_x_grad_x_update_0_write2_merged_banks_2_cache grad_x_grad_x_update_0_write2_merged_banks_2;
  grad_x_grad_x_update_0_write3_merged_banks_2_cache grad_x_grad_x_update_0_write3_merged_banks_2;
  grad_x_grad_x_update_0_write4_merged_banks_2_cache grad_x_grad_x_update_0_write4_merged_banks_2;
  grad_x_grad_x_update_0_write5_merged_banks_2_cache grad_x_grad_x_update_0_write5_merged_banks_2;
  grad_x_grad_x_update_0_write6_merged_banks_2_cache grad_x_grad_x_update_0_write6_merged_banks_2;
  grad_x_grad_x_update_0_write7_merged_banks_2_cache grad_x_grad_x_update_0_write7_merged_banks_2;
};



inline void grad_x_grad_x_update_0_write0_write(hw_uint<32> & grad_x_grad_x_update_0_write0, grad_x_cache& grad_x, int d0, int d1) {
  grad_x.grad_x_grad_x_update_0_write0_merged_banks_2.push(grad_x_grad_x_update_0_write0);
}

inline void grad_x_grad_x_update_0_write1_write(hw_uint<32> & grad_x_grad_x_update_0_write1, grad_x_cache& grad_x, int d0, int d1) {
  grad_x.grad_x_grad_x_update_0_write1_merged_banks_2.push(grad_x_grad_x_update_0_write1);
}

inline void grad_x_grad_x_update_0_write2_write(hw_uint<32> & grad_x_grad_x_update_0_write2, grad_x_cache& grad_x, int d0, int d1) {
  grad_x.grad_x_grad_x_update_0_write2_merged_banks_2.push(grad_x_grad_x_update_0_write2);
}

inline void grad_x_grad_x_update_0_write3_write(hw_uint<32> & grad_x_grad_x_update_0_write3, grad_x_cache& grad_x, int d0, int d1) {
  grad_x.grad_x_grad_x_update_0_write3_merged_banks_2.push(grad_x_grad_x_update_0_write3);
}

inline void grad_x_grad_x_update_0_write4_write(hw_uint<32> & grad_x_grad_x_update_0_write4, grad_x_cache& grad_x, int d0, int d1) {
  grad_x.grad_x_grad_x_update_0_write4_merged_banks_2.push(grad_x_grad_x_update_0_write4);
}

inline void grad_x_grad_x_update_0_write5_write(hw_uint<32> & grad_x_grad_x_update_0_write5, grad_x_cache& grad_x, int d0, int d1) {
  grad_x.grad_x_grad_x_update_0_write5_merged_banks_2.push(grad_x_grad_x_update_0_write5);
}

inline void grad_x_grad_x_update_0_write6_write(hw_uint<32> & grad_x_grad_x_update_0_write6, grad_x_cache& grad_x, int d0, int d1) {
  grad_x.grad_x_grad_x_update_0_write6_merged_banks_2.push(grad_x_grad_x_update_0_write6);
}

inline void grad_x_grad_x_update_0_write7_write(hw_uint<32> & grad_x_grad_x_update_0_write7, grad_x_cache& grad_x, int d0, int d1) {
  grad_x.grad_x_grad_x_update_0_write7_merged_banks_2.push(grad_x_grad_x_update_0_write7);
}

inline hw_uint<32>  lxx_rd0_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_rd0 read pattern: { lxx_update_0[d0, d1] -> grad_x[8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_grad_x_update_0_write0_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxx_rd1_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_rd1 read pattern: { lxx_update_0[d0, d1] -> grad_x[1 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write1 = grad_x.grad_x_grad_x_update_0_write1_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxx_rd2_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_rd2 read pattern: { lxx_update_0[d0, d1] -> grad_x[2 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write2 = grad_x.grad_x_grad_x_update_0_write2_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxx_rd3_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_rd3 read pattern: { lxx_update_0[d0, d1] -> grad_x[3 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write3 = grad_x.grad_x_grad_x_update_0_write3_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxx_rd4_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_rd4 read pattern: { lxx_update_0[d0, d1] -> grad_x[4 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write4 = grad_x.grad_x_grad_x_update_0_write4_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxx_rd5_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_rd5 read pattern: { lxx_update_0[d0, d1] -> grad_x[5 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write5 = grad_x.grad_x_grad_x_update_0_write5_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxx_rd6_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_rd6 read pattern: { lxx_update_0[d0, d1] -> grad_x[6 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write6 = grad_x.grad_x_grad_x_update_0_write6_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxx_rd7_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_rd7 read pattern: { lxx_update_0[d0, d1] -> grad_x[7 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write7 = grad_x.grad_x_grad_x_update_0_write7_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd0_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd0 read pattern: { lxy_update_0[d0, d1] -> grad_x[8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_grad_x_update_0_write0_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd1_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd1 read pattern: { lxy_update_0[d0, d1] -> grad_x[1 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write1 = grad_x.grad_x_grad_x_update_0_write1_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd2_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd2 read pattern: { lxy_update_0[d0, d1] -> grad_x[2 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write2 = grad_x.grad_x_grad_x_update_0_write2_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd3_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd3 read pattern: { lxy_update_0[d0, d1] -> grad_x[3 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write3 = grad_x.grad_x_grad_x_update_0_write3_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd4_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd4 read pattern: { lxy_update_0[d0, d1] -> grad_x[4 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write4 = grad_x.grad_x_grad_x_update_0_write4_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd5_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd5 read pattern: { lxy_update_0[d0, d1] -> grad_x[5 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write5 = grad_x.grad_x_grad_x_update_0_write5_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd6_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd6 read pattern: { lxy_update_0[d0, d1] -> grad_x[6 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write6 = grad_x.grad_x_grad_x_update_0_write6_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd7_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd7 read pattern: { lxy_update_0[d0, d1] -> grad_x[7 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write7 = grad_x.grad_x_grad_x_update_0_write7_merged_banks_2.peek_0();
  return value_grad_x_grad_x_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// grad_x_update_0_write
//	grad_x_grad_x_update_0_write0
//	grad_x_grad_x_update_0_write1
//	grad_x_grad_x_update_0_write2
//	grad_x_grad_x_update_0_write3
//	grad_x_grad_x_update_0_write4
//	grad_x_grad_x_update_0_write5
//	grad_x_grad_x_update_0_write6
//	grad_x_grad_x_update_0_write7
inline void grad_x_grad_x_update_0_write_bundle_write(hw_uint<256>& grad_x_update_0_write, grad_x_cache& grad_x, int d0, int d1) {
	hw_uint<32>  grad_x_grad_x_update_0_write0_res = grad_x_update_0_write.extract<0, 31>();
	grad_x_grad_x_update_0_write0_write(grad_x_grad_x_update_0_write0_res, grad_x, d0, d1);
	hw_uint<32>  grad_x_grad_x_update_0_write1_res = grad_x_update_0_write.extract<32, 63>();
	grad_x_grad_x_update_0_write1_write(grad_x_grad_x_update_0_write1_res, grad_x, d0, d1);
	hw_uint<32>  grad_x_grad_x_update_0_write2_res = grad_x_update_0_write.extract<64, 95>();
	grad_x_grad_x_update_0_write2_write(grad_x_grad_x_update_0_write2_res, grad_x, d0, d1);
	hw_uint<32>  grad_x_grad_x_update_0_write3_res = grad_x_update_0_write.extract<96, 127>();
	grad_x_grad_x_update_0_write3_write(grad_x_grad_x_update_0_write3_res, grad_x, d0, d1);
	hw_uint<32>  grad_x_grad_x_update_0_write4_res = grad_x_update_0_write.extract<128, 159>();
	grad_x_grad_x_update_0_write4_write(grad_x_grad_x_update_0_write4_res, grad_x, d0, d1);
	hw_uint<32>  grad_x_grad_x_update_0_write5_res = grad_x_update_0_write.extract<160, 191>();
	grad_x_grad_x_update_0_write5_write(grad_x_grad_x_update_0_write5_res, grad_x, d0, d1);
	hw_uint<32>  grad_x_grad_x_update_0_write6_res = grad_x_update_0_write.extract<192, 223>();
	grad_x_grad_x_update_0_write6_write(grad_x_grad_x_update_0_write6_res, grad_x, d0, d1);
	hw_uint<32>  grad_x_grad_x_update_0_write7_res = grad_x_update_0_write.extract<224, 255>();
	grad_x_grad_x_update_0_write7_write(grad_x_grad_x_update_0_write7_res, grad_x, d0, d1);
}

// lxx_update_0_read
//	lxx_rd0
//	lxx_rd1
//	lxx_rd2
//	lxx_rd3
//	lxx_rd4
//	lxx_rd5
//	lxx_rd6
//	lxx_rd7
inline hw_uint<256> grad_x_lxx_update_0_read_bundle_read(grad_x_cache& grad_x, int d0, int d1) {
  // # of ports in bundle: 8
    // lxx_rd0
    // lxx_rd1
    // lxx_rd2
    // lxx_rd3
    // lxx_rd4
    // lxx_rd5
    // lxx_rd6
    // lxx_rd7

	hw_uint<256> result;
	hw_uint<32>  lxx_rd0_res = lxx_rd0_select(grad_x, d0, d1);
	set_at<0, 256>(result, lxx_rd0_res);
	hw_uint<32>  lxx_rd1_res = lxx_rd1_select(grad_x, d0, d1);
	set_at<32, 256>(result, lxx_rd1_res);
	hw_uint<32>  lxx_rd2_res = lxx_rd2_select(grad_x, d0, d1);
	set_at<64, 256>(result, lxx_rd2_res);
	hw_uint<32>  lxx_rd3_res = lxx_rd3_select(grad_x, d0, d1);
	set_at<96, 256>(result, lxx_rd3_res);
	hw_uint<32>  lxx_rd4_res = lxx_rd4_select(grad_x, d0, d1);
	set_at<128, 256>(result, lxx_rd4_res);
	hw_uint<32>  lxx_rd5_res = lxx_rd5_select(grad_x, d0, d1);
	set_at<160, 256>(result, lxx_rd5_res);
	hw_uint<32>  lxx_rd6_res = lxx_rd6_select(grad_x, d0, d1);
	set_at<192, 256>(result, lxx_rd6_res);
	hw_uint<32>  lxx_rd7_res = lxx_rd7_select(grad_x, d0, d1);
	set_at<224, 256>(result, lxx_rd7_res);
	return result;
}

// lxy_update_0_read
//	lxy_rd0
//	lxy_rd1
//	lxy_rd2
//	lxy_rd3
//	lxy_rd4
//	lxy_rd5
//	lxy_rd6
//	lxy_rd7
inline hw_uint<256> grad_x_lxy_update_0_read_bundle_read(grad_x_cache& grad_x, int d0, int d1) {
  // # of ports in bundle: 8
    // lxy_rd0
    // lxy_rd1
    // lxy_rd2
    // lxy_rd3
    // lxy_rd4
    // lxy_rd5
    // lxy_rd6
    // lxy_rd7

	hw_uint<256> result;
	hw_uint<32>  lxy_rd0_res = lxy_rd0_select(grad_x, d0, d1);
	set_at<0, 256>(result, lxy_rd0_res);
	hw_uint<32>  lxy_rd1_res = lxy_rd1_select(grad_x, d0, d1);
	set_at<32, 256>(result, lxy_rd1_res);
	hw_uint<32>  lxy_rd2_res = lxy_rd2_select(grad_x, d0, d1);
	set_at<64, 256>(result, lxy_rd2_res);
	hw_uint<32>  lxy_rd3_res = lxy_rd3_select(grad_x, d0, d1);
	set_at<96, 256>(result, lxy_rd3_res);
	hw_uint<32>  lxy_rd4_res = lxy_rd4_select(grad_x, d0, d1);
	set_at<128, 256>(result, lxy_rd4_res);
	hw_uint<32>  lxy_rd5_res = lxy_rd5_select(grad_x, d0, d1);
	set_at<160, 256>(result, lxy_rd5_res);
	hw_uint<32>  lxy_rd6_res = lxy_rd6_select(grad_x, d0, d1);
	set_at<192, 256>(result, lxy_rd6_res);
	hw_uint<32>  lxy_rd7_res = lxy_rd7_select(grad_x, d0, d1);
	set_at<224, 256>(result, lxy_rd7_res);
	return result;
}

#include "hw_classes.h"

struct grad_y_grad_y_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[-8, 1920], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_y_grad_y_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[-7, 1921], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_y_grad_y_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[-6, 1922], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_y_grad_y_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[-5, 1923], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_y_grad_y_update_0_write4_merged_banks_2_cache {
	// RAM Box: {[-4, 1924], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_y_grad_y_update_0_write5_merged_banks_2_cache {
	// RAM Box: {[-3, 1925], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_y_grad_y_update_0_write6_merged_banks_2_cache {
	// RAM Box: {[-2, 1926], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_y_grad_y_update_0_write7_merged_banks_2_cache {
	// RAM Box: {[-1, 1927], [-1, 1080]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct grad_y_cache {
  grad_y_grad_y_update_0_write0_merged_banks_2_cache grad_y_grad_y_update_0_write0_merged_banks_2;
  grad_y_grad_y_update_0_write1_merged_banks_2_cache grad_y_grad_y_update_0_write1_merged_banks_2;
  grad_y_grad_y_update_0_write2_merged_banks_2_cache grad_y_grad_y_update_0_write2_merged_banks_2;
  grad_y_grad_y_update_0_write3_merged_banks_2_cache grad_y_grad_y_update_0_write3_merged_banks_2;
  grad_y_grad_y_update_0_write4_merged_banks_2_cache grad_y_grad_y_update_0_write4_merged_banks_2;
  grad_y_grad_y_update_0_write5_merged_banks_2_cache grad_y_grad_y_update_0_write5_merged_banks_2;
  grad_y_grad_y_update_0_write6_merged_banks_2_cache grad_y_grad_y_update_0_write6_merged_banks_2;
  grad_y_grad_y_update_0_write7_merged_banks_2_cache grad_y_grad_y_update_0_write7_merged_banks_2;
};



inline void grad_y_grad_y_update_0_write0_write(hw_uint<32> & grad_y_grad_y_update_0_write0, grad_y_cache& grad_y, int d0, int d1) {
  grad_y.grad_y_grad_y_update_0_write0_merged_banks_2.push(grad_y_grad_y_update_0_write0);
}

inline void grad_y_grad_y_update_0_write1_write(hw_uint<32> & grad_y_grad_y_update_0_write1, grad_y_cache& grad_y, int d0, int d1) {
  grad_y.grad_y_grad_y_update_0_write1_merged_banks_2.push(grad_y_grad_y_update_0_write1);
}

inline void grad_y_grad_y_update_0_write2_write(hw_uint<32> & grad_y_grad_y_update_0_write2, grad_y_cache& grad_y, int d0, int d1) {
  grad_y.grad_y_grad_y_update_0_write2_merged_banks_2.push(grad_y_grad_y_update_0_write2);
}

inline void grad_y_grad_y_update_0_write3_write(hw_uint<32> & grad_y_grad_y_update_0_write3, grad_y_cache& grad_y, int d0, int d1) {
  grad_y.grad_y_grad_y_update_0_write3_merged_banks_2.push(grad_y_grad_y_update_0_write3);
}

inline void grad_y_grad_y_update_0_write4_write(hw_uint<32> & grad_y_grad_y_update_0_write4, grad_y_cache& grad_y, int d0, int d1) {
  grad_y.grad_y_grad_y_update_0_write4_merged_banks_2.push(grad_y_grad_y_update_0_write4);
}

inline void grad_y_grad_y_update_0_write5_write(hw_uint<32> & grad_y_grad_y_update_0_write5, grad_y_cache& grad_y, int d0, int d1) {
  grad_y.grad_y_grad_y_update_0_write5_merged_banks_2.push(grad_y_grad_y_update_0_write5);
}

inline void grad_y_grad_y_update_0_write6_write(hw_uint<32> & grad_y_grad_y_update_0_write6, grad_y_cache& grad_y, int d0, int d1) {
  grad_y.grad_y_grad_y_update_0_write6_merged_banks_2.push(grad_y_grad_y_update_0_write6);
}

inline void grad_y_grad_y_update_0_write7_write(hw_uint<32> & grad_y_grad_y_update_0_write7, grad_y_cache& grad_y, int d0, int d1) {
  grad_y.grad_y_grad_y_update_0_write7_merged_banks_2.push(grad_y_grad_y_update_0_write7);
}

inline hw_uint<32>  lxy_rd0_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd0 read pattern: { lxy_update_0[d0, d1] -> grad_y[8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write0 = grad_y.grad_y_grad_y_update_0_write0_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd1_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd1 read pattern: { lxy_update_0[d0, d1] -> grad_y[1 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write1 = grad_y.grad_y_grad_y_update_0_write1_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd2_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd2 read pattern: { lxy_update_0[d0, d1] -> grad_y[2 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write2 = grad_y.grad_y_grad_y_update_0_write2_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd3_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd3 read pattern: { lxy_update_0[d0, d1] -> grad_y[3 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write3 = grad_y.grad_y_grad_y_update_0_write3_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd4_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd4 read pattern: { lxy_update_0[d0, d1] -> grad_y[4 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write4 = grad_y.grad_y_grad_y_update_0_write4_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd5_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd5 read pattern: { lxy_update_0[d0, d1] -> grad_y[5 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write5 = grad_y.grad_y_grad_y_update_0_write5_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd6_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd6 read pattern: { lxy_update_0[d0, d1] -> grad_y[6 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write6 = grad_y.grad_y_grad_y_update_0_write6_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lxy_rd7_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_rd7 read pattern: { lxy_update_0[d0, d1] -> grad_y[7 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write7 = grad_y.grad_y_grad_y_update_0_write7_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lyy_rd0_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_rd0 read pattern: { lyy_update_0[d0, d1] -> grad_y[8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write0 = grad_y.grad_y_grad_y_update_0_write0_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lyy_rd1_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_rd1 read pattern: { lyy_update_0[d0, d1] -> grad_y[1 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write1 = grad_y.grad_y_grad_y_update_0_write1_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lyy_rd2_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_rd2 read pattern: { lyy_update_0[d0, d1] -> grad_y[2 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write2 = grad_y.grad_y_grad_y_update_0_write2_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lyy_rd3_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_rd3 read pattern: { lyy_update_0[d0, d1] -> grad_y[3 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write3 = grad_y.grad_y_grad_y_update_0_write3_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lyy_rd4_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_rd4 read pattern: { lyy_update_0[d0, d1] -> grad_y[4 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write4 = grad_y.grad_y_grad_y_update_0_write4_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lyy_rd5_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_rd5 read pattern: { lyy_update_0[d0, d1] -> grad_y[5 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write5 = grad_y.grad_y_grad_y_update_0_write5_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lyy_rd6_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_rd6 read pattern: { lyy_update_0[d0, d1] -> grad_y[6 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write6 = grad_y.grad_y_grad_y_update_0_write6_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lyy_rd7_select(grad_y_cache& grad_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_rd7 read pattern: { lyy_update_0[d0, d1] -> grad_y[7 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_grad_y_grad_y_update_0_write7 = grad_y.grad_y_grad_y_update_0_write7_merged_banks_2.peek_0();
  return value_grad_y_grad_y_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// grad_y_update_0_write
//	grad_y_grad_y_update_0_write0
//	grad_y_grad_y_update_0_write1
//	grad_y_grad_y_update_0_write2
//	grad_y_grad_y_update_0_write3
//	grad_y_grad_y_update_0_write4
//	grad_y_grad_y_update_0_write5
//	grad_y_grad_y_update_0_write6
//	grad_y_grad_y_update_0_write7
inline void grad_y_grad_y_update_0_write_bundle_write(hw_uint<256>& grad_y_update_0_write, grad_y_cache& grad_y, int d0, int d1) {
	hw_uint<32>  grad_y_grad_y_update_0_write0_res = grad_y_update_0_write.extract<0, 31>();
	grad_y_grad_y_update_0_write0_write(grad_y_grad_y_update_0_write0_res, grad_y, d0, d1);
	hw_uint<32>  grad_y_grad_y_update_0_write1_res = grad_y_update_0_write.extract<32, 63>();
	grad_y_grad_y_update_0_write1_write(grad_y_grad_y_update_0_write1_res, grad_y, d0, d1);
	hw_uint<32>  grad_y_grad_y_update_0_write2_res = grad_y_update_0_write.extract<64, 95>();
	grad_y_grad_y_update_0_write2_write(grad_y_grad_y_update_0_write2_res, grad_y, d0, d1);
	hw_uint<32>  grad_y_grad_y_update_0_write3_res = grad_y_update_0_write.extract<96, 127>();
	grad_y_grad_y_update_0_write3_write(grad_y_grad_y_update_0_write3_res, grad_y, d0, d1);
	hw_uint<32>  grad_y_grad_y_update_0_write4_res = grad_y_update_0_write.extract<128, 159>();
	grad_y_grad_y_update_0_write4_write(grad_y_grad_y_update_0_write4_res, grad_y, d0, d1);
	hw_uint<32>  grad_y_grad_y_update_0_write5_res = grad_y_update_0_write.extract<160, 191>();
	grad_y_grad_y_update_0_write5_write(grad_y_grad_y_update_0_write5_res, grad_y, d0, d1);
	hw_uint<32>  grad_y_grad_y_update_0_write6_res = grad_y_update_0_write.extract<192, 223>();
	grad_y_grad_y_update_0_write6_write(grad_y_grad_y_update_0_write6_res, grad_y, d0, d1);
	hw_uint<32>  grad_y_grad_y_update_0_write7_res = grad_y_update_0_write.extract<224, 255>();
	grad_y_grad_y_update_0_write7_write(grad_y_grad_y_update_0_write7_res, grad_y, d0, d1);
}

// lxy_update_0_read
//	lxy_rd0
//	lxy_rd1
//	lxy_rd2
//	lxy_rd3
//	lxy_rd4
//	lxy_rd5
//	lxy_rd6
//	lxy_rd7
inline hw_uint<256> grad_y_lxy_update_0_read_bundle_read(grad_y_cache& grad_y, int d0, int d1) {
  // # of ports in bundle: 8
    // lxy_rd0
    // lxy_rd1
    // lxy_rd2
    // lxy_rd3
    // lxy_rd4
    // lxy_rd5
    // lxy_rd6
    // lxy_rd7

	hw_uint<256> result;
	hw_uint<32>  lxy_rd0_res = lxy_rd0_select(grad_y, d0, d1);
	set_at<0, 256>(result, lxy_rd0_res);
	hw_uint<32>  lxy_rd1_res = lxy_rd1_select(grad_y, d0, d1);
	set_at<32, 256>(result, lxy_rd1_res);
	hw_uint<32>  lxy_rd2_res = lxy_rd2_select(grad_y, d0, d1);
	set_at<64, 256>(result, lxy_rd2_res);
	hw_uint<32>  lxy_rd3_res = lxy_rd3_select(grad_y, d0, d1);
	set_at<96, 256>(result, lxy_rd3_res);
	hw_uint<32>  lxy_rd4_res = lxy_rd4_select(grad_y, d0, d1);
	set_at<128, 256>(result, lxy_rd4_res);
	hw_uint<32>  lxy_rd5_res = lxy_rd5_select(grad_y, d0, d1);
	set_at<160, 256>(result, lxy_rd5_res);
	hw_uint<32>  lxy_rd6_res = lxy_rd6_select(grad_y, d0, d1);
	set_at<192, 256>(result, lxy_rd6_res);
	hw_uint<32>  lxy_rd7_res = lxy_rd7_select(grad_y, d0, d1);
	set_at<224, 256>(result, lxy_rd7_res);
	return result;
}

// lyy_update_0_read
//	lyy_rd0
//	lyy_rd1
//	lyy_rd2
//	lyy_rd3
//	lyy_rd4
//	lyy_rd5
//	lyy_rd6
//	lyy_rd7
inline hw_uint<256> grad_y_lyy_update_0_read_bundle_read(grad_y_cache& grad_y, int d0, int d1) {
  // # of ports in bundle: 8
    // lyy_rd0
    // lyy_rd1
    // lyy_rd2
    // lyy_rd3
    // lyy_rd4
    // lyy_rd5
    // lyy_rd6
    // lyy_rd7

	hw_uint<256> result;
	hw_uint<32>  lyy_rd0_res = lyy_rd0_select(grad_y, d0, d1);
	set_at<0, 256>(result, lyy_rd0_res);
	hw_uint<32>  lyy_rd1_res = lyy_rd1_select(grad_y, d0, d1);
	set_at<32, 256>(result, lyy_rd1_res);
	hw_uint<32>  lyy_rd2_res = lyy_rd2_select(grad_y, d0, d1);
	set_at<64, 256>(result, lyy_rd2_res);
	hw_uint<32>  lyy_rd3_res = lyy_rd3_select(grad_y, d0, d1);
	set_at<96, 256>(result, lyy_rd3_res);
	hw_uint<32>  lyy_rd4_res = lyy_rd4_select(grad_y, d0, d1);
	set_at<128, 256>(result, lyy_rd4_res);
	hw_uint<32>  lyy_rd5_res = lyy_rd5_select(grad_y, d0, d1);
	set_at<160, 256>(result, lyy_rd5_res);
	hw_uint<32>  lyy_rd6_res = lyy_rd6_select(grad_y, d0, d1);
	set_at<192, 256>(result, lyy_rd6_res);
	hw_uint<32>  lyy_rd7_res = lyy_rd7_select(grad_y, d0, d1);
	set_at<224, 256>(result, lyy_rd7_res);
	return result;
}

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_12_cache {
	// RAM Box: {[-16, 1928], [-2, 1081]}
	// Capacity: 490
	// # of read delays: 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 242> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 242> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_243() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_244() {
		return f4;
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}

	inline hw_uint<32>  peek_487() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_488() {
		return f8;
	}

	inline hw_uint<32>  peek_489() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 242
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 242 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 242
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 242 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write1_merged_banks_12_cache {
	// RAM Box: {[-15, 1929], [-2, 1081]}
	// Capacity: 490
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 243> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 243> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_245() {
		return f4;
	}

	inline hw_uint<32>  peek_488() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_489() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write2_merged_banks_12_cache {
	// RAM Box: {[-14, 1930], [-2, 1081]}
	// Capacity: 490
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 243> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 243> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_245() {
		return f4;
	}

	inline hw_uint<32>  peek_488() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_489() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write3_merged_banks_12_cache {
	// RAM Box: {[-13, 1931], [-2, 1081]}
	// Capacity: 490
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 243> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 243> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_245() {
		return f4;
	}

	inline hw_uint<32>  peek_488() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_489() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write4_merged_banks_12_cache {
	// RAM Box: {[-12, 1932], [-2, 1081]}
	// Capacity: 490
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 243> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 243> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_245() {
		return f4;
	}

	inline hw_uint<32>  peek_488() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_489() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write5_merged_banks_12_cache {
	// RAM Box: {[-11, 1933], [-2, 1081]}
	// Capacity: 490
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 243> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 243> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_245() {
		return f4;
	}

	inline hw_uint<32>  peek_488() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_489() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write6_merged_banks_12_cache {
	// RAM Box: {[-10, 1934], [-2, 1081]}
	// Capacity: 490
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 243> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 243> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_245() {
		return f4;
	}

	inline hw_uint<32>  peek_488() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_489() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 243
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 243 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write7_merged_banks_12_cache {
	// RAM Box: {[-9, 1935], [-2, 1081]}
	// Capacity: 491
	// # of read delays: 7
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 242> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 242> f9;
	hw_uint<32>  f10;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}

	inline hw_uint<32>  peek_246() {
		return f8;
	}

	inline hw_uint<32>  peek_488() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_489() {
		return f10;
	}

	inline hw_uint<32>  peek_490() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 242
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 242 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 242
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 242 reading from capacity: 1
    f5.push(f4);
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

struct img_cache {
  img_img_update_0_write0_merged_banks_12_cache img_img_update_0_write0_merged_banks_12;
  img_img_update_0_write1_merged_banks_12_cache img_img_update_0_write1_merged_banks_12;
  img_img_update_0_write2_merged_banks_12_cache img_img_update_0_write2_merged_banks_12;
  img_img_update_0_write3_merged_banks_12_cache img_img_update_0_write3_merged_banks_12;
  img_img_update_0_write4_merged_banks_12_cache img_img_update_0_write4_merged_banks_12;
  img_img_update_0_write5_merged_banks_12_cache img_img_update_0_write5_merged_banks_12;
  img_img_update_0_write6_merged_banks_12_cache img_img_update_0_write6_merged_banks_12;
  img_img_update_0_write7_merged_banks_12_cache img_img_update_0_write7_merged_banks_12;
};



inline void img_img_update_0_write0_write(hw_uint<32> & img_img_update_0_write0, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write0_merged_banks_12.push(img_img_update_0_write0);
}

inline void img_img_update_0_write1_write(hw_uint<32> & img_img_update_0_write1, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write1_merged_banks_12.push(img_img_update_0_write1);
}

inline void img_img_update_0_write2_write(hw_uint<32> & img_img_update_0_write2, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write2_merged_banks_12.push(img_img_update_0_write2);
}

inline void img_img_update_0_write3_write(hw_uint<32> & img_img_update_0_write3, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write3_merged_banks_12.push(img_img_update_0_write3);
}

inline void img_img_update_0_write4_write(hw_uint<32> & img_img_update_0_write4, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write4_merged_banks_12.push(img_img_update_0_write4);
}

inline void img_img_update_0_write5_write(hw_uint<32> & img_img_update_0_write5, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write5_merged_banks_12.push(img_img_update_0_write5);
}

inline void img_img_update_0_write6_write(hw_uint<32> & img_img_update_0_write6, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write6_merged_banks_12.push(img_img_update_0_write6);
}

inline void img_img_update_0_write7_write(hw_uint<32> & img_img_update_0_write7, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write7_merged_banks_12.push(img_img_update_0_write7);
}

inline hw_uint<32>  grad_x_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd0 read pattern: { grad_x_update_0[d0, d1] -> img[-1 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 490 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_490();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd1 read pattern: { grad_x_update_0[d0, d1] -> img[-1 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 246 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_246();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd10_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd10 read pattern: { grad_x_update_0[d0, d1] -> img[2 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_245();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd11_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd11 read pattern: { grad_x_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd12_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd12 read pattern: { grad_x_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_489();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd13_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd13 read pattern: { grad_x_update_0[d0, d1] -> img[1 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_245();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd14_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd14 read pattern: { grad_x_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd15_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd15 read pattern: { grad_x_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_489();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd16_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd16 read pattern: { grad_x_update_0[d0, d1] -> img[3 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_245();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd17_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd17 read pattern: { grad_x_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd18_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd18 read pattern: { grad_x_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_489();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd19_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd19 read pattern: { grad_x_update_0[d0, d1] -> img[2 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_245();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd2 read pattern: { grad_x_update_0[d0, d1] -> img[-1 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 2 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_2();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd20_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd20 read pattern: { grad_x_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd21_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd21 read pattern: { grad_x_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_489();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd22_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd22 read pattern: { grad_x_update_0[d0, d1] -> img[4 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_245();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd23_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd23 read pattern: { grad_x_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd24_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd24 read pattern: { grad_x_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_489();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd25_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd25 read pattern: { grad_x_update_0[d0, d1] -> img[3 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_245();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd26_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd26 read pattern: { grad_x_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd27_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd27 read pattern: { grad_x_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_489();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd28_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd28 read pattern: { grad_x_update_0[d0, d1] -> img[5 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_245();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd29_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd29 read pattern: { grad_x_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd3 read pattern: { grad_x_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_489();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd30_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd30 read pattern: { grad_x_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_489();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd31_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd31 read pattern: { grad_x_update_0[d0, d1] -> img[4 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_245();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd32_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd32 read pattern: { grad_x_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd33_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd33 read pattern: { grad_x_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_489();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd34_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd34 read pattern: { grad_x_update_0[d0, d1] -> img[6 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_245();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd35_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd35 read pattern: { grad_x_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd36_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd36 read pattern: { grad_x_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_489();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd37_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd37 read pattern: { grad_x_update_0[d0, d1] -> img[5 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_245();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd38_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd38 read pattern: { grad_x_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd39_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd39 read pattern: { grad_x_update_0[d0, d1] -> img[7 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_489();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd4 read pattern: { grad_x_update_0[d0, d1] -> img[1 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_245();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd40_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd40 read pattern: { grad_x_update_0[d0, d1] -> img[7 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_245();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd41_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd41 read pattern: { grad_x_update_0[d0, d1] -> img[7 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd42_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd42 read pattern: { grad_x_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_489();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd43_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd43 read pattern: { grad_x_update_0[d0, d1] -> img[6 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_245();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd44_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd44 read pattern: { grad_x_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd45_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd45 read pattern: { grad_x_update_0[d0, d1] -> img[8 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 488 : -1 <= d0 <= 239 and -1 <= d1 <= 1080; grad_x_update_0[d0, d1] -> (248 + d0) : d0 = 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_488();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd46_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd46 read pattern: { grad_x_update_0[d0, d1] -> img[8 + 8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 244 : -1 <= d0 <= 239 and -1 <= d1 <= 1080; grad_x_update_0[d0, d1] -> (4 + d0) : d0 = 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_244();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd47_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd47 read pattern: { grad_x_update_0[d0, d1] -> img[8 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd5 read pattern: { grad_x_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd6_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd6 read pattern: { grad_x_update_0[d0, d1] -> img[8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_489();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd7_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd7 read pattern: { grad_x_update_0[d0, d1] -> img[8d0, d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 245 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_245();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd8_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd8 read pattern: { grad_x_update_0[d0, d1] -> img[8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_x_rd9_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd9 read pattern: { grad_x_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_x_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_489();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd0 read pattern: { grad_y_update_0[d0, d1] -> img[-1 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 490 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_490();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd1 read pattern: { grad_y_update_0[d0, d1] -> img[-1 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 2 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_2();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd10_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd10 read pattern: { grad_y_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_489();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd11_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd11 read pattern: { grad_y_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd12_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd12 read pattern: { grad_y_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_489();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd13_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd13 read pattern: { grad_y_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd14_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd14 read pattern: { grad_y_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_489();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd15_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd15 read pattern: { grad_y_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd16_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd16 read pattern: { grad_y_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_489();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd17_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd17 read pattern: { grad_y_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd18_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd18 read pattern: { grad_y_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_489();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd19_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd19 read pattern: { grad_y_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd2 read pattern: { grad_y_update_0[d0, d1] -> img[8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_489();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd20_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd20 read pattern: { grad_y_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_489();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd21_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd21 read pattern: { grad_y_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd22_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd22 read pattern: { grad_y_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_489();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd23_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd23 read pattern: { grad_y_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd24_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd24 read pattern: { grad_y_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_489();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd25_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd25 read pattern: { grad_y_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd26_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd26 read pattern: { grad_y_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_489();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd27_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd27 read pattern: { grad_y_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd28_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd28 read pattern: { grad_y_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_489();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd29_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd29 read pattern: { grad_y_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd3 read pattern: { grad_y_update_0[d0, d1] -> img[8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd30_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd30 read pattern: { grad_y_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_489();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd31_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd31 read pattern: { grad_y_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd32_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd32 read pattern: { grad_y_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_489();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd33_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd33 read pattern: { grad_y_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd34_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd34 read pattern: { grad_y_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_489();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd35_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd35 read pattern: { grad_y_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd36_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd36 read pattern: { grad_y_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_489();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd37_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd37 read pattern: { grad_y_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd38_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd38 read pattern: { grad_y_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_489();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd39_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd39 read pattern: { grad_y_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd4 read pattern: { grad_y_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_489();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd40_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd40 read pattern: { grad_y_update_0[d0, d1] -> img[7 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_489();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd41_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd41 read pattern: { grad_y_update_0[d0, d1] -> img[7 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd42_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd42 read pattern: { grad_y_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_489();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd43_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd43 read pattern: { grad_y_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd44_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd44 read pattern: { grad_y_update_0[d0, d1] -> img[7 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_489();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd45_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd45 read pattern: { grad_y_update_0[d0, d1] -> img[7 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd46_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd46 read pattern: { grad_y_update_0[d0, d1] -> img[8 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 488 : -1 <= d0 <= 239 and -1 <= d1 <= 1080; grad_y_update_0[d0, d1] -> (248 + d0) : d0 = 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_488();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd47_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd47 read pattern: { grad_y_update_0[d0, d1] -> img[8 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd5 read pattern: { grad_y_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd6_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd6 read pattern: { grad_y_update_0[d0, d1] -> img[8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_489();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd7_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd7 read pattern: { grad_y_update_0[d0, d1] -> img[8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd8_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd8 read pattern: { grad_y_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 489 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_489();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  grad_y_rd9_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_rd9 read pattern: { grad_y_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Read schedule : { grad_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 241 and -2 <= d1 <= 1081 }
  // DD fold: { grad_y_update_0[d0, d1] -> 1 : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// grad_x_update_0_read
//	grad_x_rd0
//	grad_x_rd1
//	grad_x_rd2
//	grad_x_rd3
//	grad_x_rd4
//	grad_x_rd5
//	grad_x_rd6
//	grad_x_rd7
//	grad_x_rd8
//	grad_x_rd9
//	grad_x_rd10
//	grad_x_rd11
//	grad_x_rd12
//	grad_x_rd13
//	grad_x_rd14
//	grad_x_rd15
//	grad_x_rd16
//	grad_x_rd17
//	grad_x_rd18
//	grad_x_rd19
//	grad_x_rd20
//	grad_x_rd21
//	grad_x_rd22
//	grad_x_rd23
//	grad_x_rd24
//	grad_x_rd25
//	grad_x_rd26
//	grad_x_rd27
//	grad_x_rd28
//	grad_x_rd29
//	grad_x_rd30
//	grad_x_rd31
//	grad_x_rd32
//	grad_x_rd33
//	grad_x_rd34
//	grad_x_rd35
//	grad_x_rd36
//	grad_x_rd37
//	grad_x_rd38
//	grad_x_rd39
//	grad_x_rd40
//	grad_x_rd41
//	grad_x_rd42
//	grad_x_rd43
//	grad_x_rd44
//	grad_x_rd45
//	grad_x_rd46
//	grad_x_rd47
inline hw_uint<1536> img_grad_x_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 48
    // grad_x_rd0
    // grad_x_rd1
    // grad_x_rd2
    // grad_x_rd3
    // grad_x_rd4
    // grad_x_rd5
    // grad_x_rd6
    // grad_x_rd7
    // grad_x_rd8
    // grad_x_rd9
    // grad_x_rd10
    // grad_x_rd11
    // grad_x_rd12
    // grad_x_rd13
    // grad_x_rd14
    // grad_x_rd15
    // grad_x_rd16
    // grad_x_rd17
    // grad_x_rd18
    // grad_x_rd19
    // grad_x_rd20
    // grad_x_rd21
    // grad_x_rd22
    // grad_x_rd23
    // grad_x_rd24
    // grad_x_rd25
    // grad_x_rd26
    // grad_x_rd27
    // grad_x_rd28
    // grad_x_rd29
    // grad_x_rd30
    // grad_x_rd31
    // grad_x_rd32
    // grad_x_rd33
    // grad_x_rd34
    // grad_x_rd35
    // grad_x_rd36
    // grad_x_rd37
    // grad_x_rd38
    // grad_x_rd39
    // grad_x_rd40
    // grad_x_rd41
    // grad_x_rd42
    // grad_x_rd43
    // grad_x_rd44
    // grad_x_rd45
    // grad_x_rd46
    // grad_x_rd47

	hw_uint<1536> result;
	hw_uint<32>  grad_x_rd0_res = grad_x_rd0_select(img, d0, d1);
	set_at<0, 1536>(result, grad_x_rd0_res);
	hw_uint<32>  grad_x_rd1_res = grad_x_rd1_select(img, d0, d1);
	set_at<32, 1536>(result, grad_x_rd1_res);
	hw_uint<32>  grad_x_rd2_res = grad_x_rd2_select(img, d0, d1);
	set_at<64, 1536>(result, grad_x_rd2_res);
	hw_uint<32>  grad_x_rd3_res = grad_x_rd3_select(img, d0, d1);
	set_at<96, 1536>(result, grad_x_rd3_res);
	hw_uint<32>  grad_x_rd4_res = grad_x_rd4_select(img, d0, d1);
	set_at<128, 1536>(result, grad_x_rd4_res);
	hw_uint<32>  grad_x_rd5_res = grad_x_rd5_select(img, d0, d1);
	set_at<160, 1536>(result, grad_x_rd5_res);
	hw_uint<32>  grad_x_rd6_res = grad_x_rd6_select(img, d0, d1);
	set_at<192, 1536>(result, grad_x_rd6_res);
	hw_uint<32>  grad_x_rd7_res = grad_x_rd7_select(img, d0, d1);
	set_at<224, 1536>(result, grad_x_rd7_res);
	hw_uint<32>  grad_x_rd8_res = grad_x_rd8_select(img, d0, d1);
	set_at<256, 1536>(result, grad_x_rd8_res);
	hw_uint<32>  grad_x_rd9_res = grad_x_rd9_select(img, d0, d1);
	set_at<288, 1536>(result, grad_x_rd9_res);
	hw_uint<32>  grad_x_rd10_res = grad_x_rd10_select(img, d0, d1);
	set_at<320, 1536>(result, grad_x_rd10_res);
	hw_uint<32>  grad_x_rd11_res = grad_x_rd11_select(img, d0, d1);
	set_at<352, 1536>(result, grad_x_rd11_res);
	hw_uint<32>  grad_x_rd12_res = grad_x_rd12_select(img, d0, d1);
	set_at<384, 1536>(result, grad_x_rd12_res);
	hw_uint<32>  grad_x_rd13_res = grad_x_rd13_select(img, d0, d1);
	set_at<416, 1536>(result, grad_x_rd13_res);
	hw_uint<32>  grad_x_rd14_res = grad_x_rd14_select(img, d0, d1);
	set_at<448, 1536>(result, grad_x_rd14_res);
	hw_uint<32>  grad_x_rd15_res = grad_x_rd15_select(img, d0, d1);
	set_at<480, 1536>(result, grad_x_rd15_res);
	hw_uint<32>  grad_x_rd16_res = grad_x_rd16_select(img, d0, d1);
	set_at<512, 1536>(result, grad_x_rd16_res);
	hw_uint<32>  grad_x_rd17_res = grad_x_rd17_select(img, d0, d1);
	set_at<544, 1536>(result, grad_x_rd17_res);
	hw_uint<32>  grad_x_rd18_res = grad_x_rd18_select(img, d0, d1);
	set_at<576, 1536>(result, grad_x_rd18_res);
	hw_uint<32>  grad_x_rd19_res = grad_x_rd19_select(img, d0, d1);
	set_at<608, 1536>(result, grad_x_rd19_res);
	hw_uint<32>  grad_x_rd20_res = grad_x_rd20_select(img, d0, d1);
	set_at<640, 1536>(result, grad_x_rd20_res);
	hw_uint<32>  grad_x_rd21_res = grad_x_rd21_select(img, d0, d1);
	set_at<672, 1536>(result, grad_x_rd21_res);
	hw_uint<32>  grad_x_rd22_res = grad_x_rd22_select(img, d0, d1);
	set_at<704, 1536>(result, grad_x_rd22_res);
	hw_uint<32>  grad_x_rd23_res = grad_x_rd23_select(img, d0, d1);
	set_at<736, 1536>(result, grad_x_rd23_res);
	hw_uint<32>  grad_x_rd24_res = grad_x_rd24_select(img, d0, d1);
	set_at<768, 1536>(result, grad_x_rd24_res);
	hw_uint<32>  grad_x_rd25_res = grad_x_rd25_select(img, d0, d1);
	set_at<800, 1536>(result, grad_x_rd25_res);
	hw_uint<32>  grad_x_rd26_res = grad_x_rd26_select(img, d0, d1);
	set_at<832, 1536>(result, grad_x_rd26_res);
	hw_uint<32>  grad_x_rd27_res = grad_x_rd27_select(img, d0, d1);
	set_at<864, 1536>(result, grad_x_rd27_res);
	hw_uint<32>  grad_x_rd28_res = grad_x_rd28_select(img, d0, d1);
	set_at<896, 1536>(result, grad_x_rd28_res);
	hw_uint<32>  grad_x_rd29_res = grad_x_rd29_select(img, d0, d1);
	set_at<928, 1536>(result, grad_x_rd29_res);
	hw_uint<32>  grad_x_rd30_res = grad_x_rd30_select(img, d0, d1);
	set_at<960, 1536>(result, grad_x_rd30_res);
	hw_uint<32>  grad_x_rd31_res = grad_x_rd31_select(img, d0, d1);
	set_at<992, 1536>(result, grad_x_rd31_res);
	hw_uint<32>  grad_x_rd32_res = grad_x_rd32_select(img, d0, d1);
	set_at<1024, 1536>(result, grad_x_rd32_res);
	hw_uint<32>  grad_x_rd33_res = grad_x_rd33_select(img, d0, d1);
	set_at<1056, 1536>(result, grad_x_rd33_res);
	hw_uint<32>  grad_x_rd34_res = grad_x_rd34_select(img, d0, d1);
	set_at<1088, 1536>(result, grad_x_rd34_res);
	hw_uint<32>  grad_x_rd35_res = grad_x_rd35_select(img, d0, d1);
	set_at<1120, 1536>(result, grad_x_rd35_res);
	hw_uint<32>  grad_x_rd36_res = grad_x_rd36_select(img, d0, d1);
	set_at<1152, 1536>(result, grad_x_rd36_res);
	hw_uint<32>  grad_x_rd37_res = grad_x_rd37_select(img, d0, d1);
	set_at<1184, 1536>(result, grad_x_rd37_res);
	hw_uint<32>  grad_x_rd38_res = grad_x_rd38_select(img, d0, d1);
	set_at<1216, 1536>(result, grad_x_rd38_res);
	hw_uint<32>  grad_x_rd39_res = grad_x_rd39_select(img, d0, d1);
	set_at<1248, 1536>(result, grad_x_rd39_res);
	hw_uint<32>  grad_x_rd40_res = grad_x_rd40_select(img, d0, d1);
	set_at<1280, 1536>(result, grad_x_rd40_res);
	hw_uint<32>  grad_x_rd41_res = grad_x_rd41_select(img, d0, d1);
	set_at<1312, 1536>(result, grad_x_rd41_res);
	hw_uint<32>  grad_x_rd42_res = grad_x_rd42_select(img, d0, d1);
	set_at<1344, 1536>(result, grad_x_rd42_res);
	hw_uint<32>  grad_x_rd43_res = grad_x_rd43_select(img, d0, d1);
	set_at<1376, 1536>(result, grad_x_rd43_res);
	hw_uint<32>  grad_x_rd44_res = grad_x_rd44_select(img, d0, d1);
	set_at<1408, 1536>(result, grad_x_rd44_res);
	hw_uint<32>  grad_x_rd45_res = grad_x_rd45_select(img, d0, d1);
	set_at<1440, 1536>(result, grad_x_rd45_res);
	hw_uint<32>  grad_x_rd46_res = grad_x_rd46_select(img, d0, d1);
	set_at<1472, 1536>(result, grad_x_rd46_res);
	hw_uint<32>  grad_x_rd47_res = grad_x_rd47_select(img, d0, d1);
	set_at<1504, 1536>(result, grad_x_rd47_res);
	return result;
}

// grad_y_update_0_read
//	grad_y_rd0
//	grad_y_rd1
//	grad_y_rd2
//	grad_y_rd3
//	grad_y_rd4
//	grad_y_rd5
//	grad_y_rd6
//	grad_y_rd7
//	grad_y_rd8
//	grad_y_rd9
//	grad_y_rd10
//	grad_y_rd11
//	grad_y_rd12
//	grad_y_rd13
//	grad_y_rd14
//	grad_y_rd15
//	grad_y_rd16
//	grad_y_rd17
//	grad_y_rd18
//	grad_y_rd19
//	grad_y_rd20
//	grad_y_rd21
//	grad_y_rd22
//	grad_y_rd23
//	grad_y_rd24
//	grad_y_rd25
//	grad_y_rd26
//	grad_y_rd27
//	grad_y_rd28
//	grad_y_rd29
//	grad_y_rd30
//	grad_y_rd31
//	grad_y_rd32
//	grad_y_rd33
//	grad_y_rd34
//	grad_y_rd35
//	grad_y_rd36
//	grad_y_rd37
//	grad_y_rd38
//	grad_y_rd39
//	grad_y_rd40
//	grad_y_rd41
//	grad_y_rd42
//	grad_y_rd43
//	grad_y_rd44
//	grad_y_rd45
//	grad_y_rd46
//	grad_y_rd47
inline hw_uint<1536> img_grad_y_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 48
    // grad_y_rd0
    // grad_y_rd1
    // grad_y_rd2
    // grad_y_rd3
    // grad_y_rd4
    // grad_y_rd5
    // grad_y_rd6
    // grad_y_rd7
    // grad_y_rd8
    // grad_y_rd9
    // grad_y_rd10
    // grad_y_rd11
    // grad_y_rd12
    // grad_y_rd13
    // grad_y_rd14
    // grad_y_rd15
    // grad_y_rd16
    // grad_y_rd17
    // grad_y_rd18
    // grad_y_rd19
    // grad_y_rd20
    // grad_y_rd21
    // grad_y_rd22
    // grad_y_rd23
    // grad_y_rd24
    // grad_y_rd25
    // grad_y_rd26
    // grad_y_rd27
    // grad_y_rd28
    // grad_y_rd29
    // grad_y_rd30
    // grad_y_rd31
    // grad_y_rd32
    // grad_y_rd33
    // grad_y_rd34
    // grad_y_rd35
    // grad_y_rd36
    // grad_y_rd37
    // grad_y_rd38
    // grad_y_rd39
    // grad_y_rd40
    // grad_y_rd41
    // grad_y_rd42
    // grad_y_rd43
    // grad_y_rd44
    // grad_y_rd45
    // grad_y_rd46
    // grad_y_rd47

	hw_uint<1536> result;
	hw_uint<32>  grad_y_rd0_res = grad_y_rd0_select(img, d0, d1);
	set_at<0, 1536>(result, grad_y_rd0_res);
	hw_uint<32>  grad_y_rd1_res = grad_y_rd1_select(img, d0, d1);
	set_at<32, 1536>(result, grad_y_rd1_res);
	hw_uint<32>  grad_y_rd2_res = grad_y_rd2_select(img, d0, d1);
	set_at<64, 1536>(result, grad_y_rd2_res);
	hw_uint<32>  grad_y_rd3_res = grad_y_rd3_select(img, d0, d1);
	set_at<96, 1536>(result, grad_y_rd3_res);
	hw_uint<32>  grad_y_rd4_res = grad_y_rd4_select(img, d0, d1);
	set_at<128, 1536>(result, grad_y_rd4_res);
	hw_uint<32>  grad_y_rd5_res = grad_y_rd5_select(img, d0, d1);
	set_at<160, 1536>(result, grad_y_rd5_res);
	hw_uint<32>  grad_y_rd6_res = grad_y_rd6_select(img, d0, d1);
	set_at<192, 1536>(result, grad_y_rd6_res);
	hw_uint<32>  grad_y_rd7_res = grad_y_rd7_select(img, d0, d1);
	set_at<224, 1536>(result, grad_y_rd7_res);
	hw_uint<32>  grad_y_rd8_res = grad_y_rd8_select(img, d0, d1);
	set_at<256, 1536>(result, grad_y_rd8_res);
	hw_uint<32>  grad_y_rd9_res = grad_y_rd9_select(img, d0, d1);
	set_at<288, 1536>(result, grad_y_rd9_res);
	hw_uint<32>  grad_y_rd10_res = grad_y_rd10_select(img, d0, d1);
	set_at<320, 1536>(result, grad_y_rd10_res);
	hw_uint<32>  grad_y_rd11_res = grad_y_rd11_select(img, d0, d1);
	set_at<352, 1536>(result, grad_y_rd11_res);
	hw_uint<32>  grad_y_rd12_res = grad_y_rd12_select(img, d0, d1);
	set_at<384, 1536>(result, grad_y_rd12_res);
	hw_uint<32>  grad_y_rd13_res = grad_y_rd13_select(img, d0, d1);
	set_at<416, 1536>(result, grad_y_rd13_res);
	hw_uint<32>  grad_y_rd14_res = grad_y_rd14_select(img, d0, d1);
	set_at<448, 1536>(result, grad_y_rd14_res);
	hw_uint<32>  grad_y_rd15_res = grad_y_rd15_select(img, d0, d1);
	set_at<480, 1536>(result, grad_y_rd15_res);
	hw_uint<32>  grad_y_rd16_res = grad_y_rd16_select(img, d0, d1);
	set_at<512, 1536>(result, grad_y_rd16_res);
	hw_uint<32>  grad_y_rd17_res = grad_y_rd17_select(img, d0, d1);
	set_at<544, 1536>(result, grad_y_rd17_res);
	hw_uint<32>  grad_y_rd18_res = grad_y_rd18_select(img, d0, d1);
	set_at<576, 1536>(result, grad_y_rd18_res);
	hw_uint<32>  grad_y_rd19_res = grad_y_rd19_select(img, d0, d1);
	set_at<608, 1536>(result, grad_y_rd19_res);
	hw_uint<32>  grad_y_rd20_res = grad_y_rd20_select(img, d0, d1);
	set_at<640, 1536>(result, grad_y_rd20_res);
	hw_uint<32>  grad_y_rd21_res = grad_y_rd21_select(img, d0, d1);
	set_at<672, 1536>(result, grad_y_rd21_res);
	hw_uint<32>  grad_y_rd22_res = grad_y_rd22_select(img, d0, d1);
	set_at<704, 1536>(result, grad_y_rd22_res);
	hw_uint<32>  grad_y_rd23_res = grad_y_rd23_select(img, d0, d1);
	set_at<736, 1536>(result, grad_y_rd23_res);
	hw_uint<32>  grad_y_rd24_res = grad_y_rd24_select(img, d0, d1);
	set_at<768, 1536>(result, grad_y_rd24_res);
	hw_uint<32>  grad_y_rd25_res = grad_y_rd25_select(img, d0, d1);
	set_at<800, 1536>(result, grad_y_rd25_res);
	hw_uint<32>  grad_y_rd26_res = grad_y_rd26_select(img, d0, d1);
	set_at<832, 1536>(result, grad_y_rd26_res);
	hw_uint<32>  grad_y_rd27_res = grad_y_rd27_select(img, d0, d1);
	set_at<864, 1536>(result, grad_y_rd27_res);
	hw_uint<32>  grad_y_rd28_res = grad_y_rd28_select(img, d0, d1);
	set_at<896, 1536>(result, grad_y_rd28_res);
	hw_uint<32>  grad_y_rd29_res = grad_y_rd29_select(img, d0, d1);
	set_at<928, 1536>(result, grad_y_rd29_res);
	hw_uint<32>  grad_y_rd30_res = grad_y_rd30_select(img, d0, d1);
	set_at<960, 1536>(result, grad_y_rd30_res);
	hw_uint<32>  grad_y_rd31_res = grad_y_rd31_select(img, d0, d1);
	set_at<992, 1536>(result, grad_y_rd31_res);
	hw_uint<32>  grad_y_rd32_res = grad_y_rd32_select(img, d0, d1);
	set_at<1024, 1536>(result, grad_y_rd32_res);
	hw_uint<32>  grad_y_rd33_res = grad_y_rd33_select(img, d0, d1);
	set_at<1056, 1536>(result, grad_y_rd33_res);
	hw_uint<32>  grad_y_rd34_res = grad_y_rd34_select(img, d0, d1);
	set_at<1088, 1536>(result, grad_y_rd34_res);
	hw_uint<32>  grad_y_rd35_res = grad_y_rd35_select(img, d0, d1);
	set_at<1120, 1536>(result, grad_y_rd35_res);
	hw_uint<32>  grad_y_rd36_res = grad_y_rd36_select(img, d0, d1);
	set_at<1152, 1536>(result, grad_y_rd36_res);
	hw_uint<32>  grad_y_rd37_res = grad_y_rd37_select(img, d0, d1);
	set_at<1184, 1536>(result, grad_y_rd37_res);
	hw_uint<32>  grad_y_rd38_res = grad_y_rd38_select(img, d0, d1);
	set_at<1216, 1536>(result, grad_y_rd38_res);
	hw_uint<32>  grad_y_rd39_res = grad_y_rd39_select(img, d0, d1);
	set_at<1248, 1536>(result, grad_y_rd39_res);
	hw_uint<32>  grad_y_rd40_res = grad_y_rd40_select(img, d0, d1);
	set_at<1280, 1536>(result, grad_y_rd40_res);
	hw_uint<32>  grad_y_rd41_res = grad_y_rd41_select(img, d0, d1);
	set_at<1312, 1536>(result, grad_y_rd41_res);
	hw_uint<32>  grad_y_rd42_res = grad_y_rd42_select(img, d0, d1);
	set_at<1344, 1536>(result, grad_y_rd42_res);
	hw_uint<32>  grad_y_rd43_res = grad_y_rd43_select(img, d0, d1);
	set_at<1376, 1536>(result, grad_y_rd43_res);
	hw_uint<32>  grad_y_rd44_res = grad_y_rd44_select(img, d0, d1);
	set_at<1408, 1536>(result, grad_y_rd44_res);
	hw_uint<32>  grad_y_rd45_res = grad_y_rd45_select(img, d0, d1);
	set_at<1440, 1536>(result, grad_y_rd45_res);
	hw_uint<32>  grad_y_rd46_res = grad_y_rd46_select(img, d0, d1);
	set_at<1472, 1536>(result, grad_y_rd46_res);
	hw_uint<32>  grad_y_rd47_res = grad_y_rd47_select(img, d0, d1);
	set_at<1504, 1536>(result, grad_y_rd47_res);
	return result;
}

// img_update_0_write
//	img_img_update_0_write0
//	img_img_update_0_write1
//	img_img_update_0_write2
//	img_img_update_0_write3
//	img_img_update_0_write4
//	img_img_update_0_write5
//	img_img_update_0_write6
//	img_img_update_0_write7
inline void img_img_update_0_write_bundle_write(hw_uint<256>& img_update_0_write, img_cache& img, int d0, int d1) {
	hw_uint<32>  img_img_update_0_write0_res = img_update_0_write.extract<0, 31>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1);
	hw_uint<32>  img_img_update_0_write1_res = img_update_0_write.extract<32, 63>();
	img_img_update_0_write1_write(img_img_update_0_write1_res, img, d0, d1);
	hw_uint<32>  img_img_update_0_write2_res = img_update_0_write.extract<64, 95>();
	img_img_update_0_write2_write(img_img_update_0_write2_res, img, d0, d1);
	hw_uint<32>  img_img_update_0_write3_res = img_update_0_write.extract<96, 127>();
	img_img_update_0_write3_write(img_img_update_0_write3_res, img, d0, d1);
	hw_uint<32>  img_img_update_0_write4_res = img_update_0_write.extract<128, 159>();
	img_img_update_0_write4_write(img_img_update_0_write4_res, img, d0, d1);
	hw_uint<32>  img_img_update_0_write5_res = img_update_0_write.extract<160, 191>();
	img_img_update_0_write5_write(img_img_update_0_write5_res, img, d0, d1);
	hw_uint<32>  img_img_update_0_write6_res = img_update_0_write.extract<192, 223>();
	img_img_update_0_write6_write(img_img_update_0_write6_res, img, d0, d1);
	hw_uint<32>  img_img_update_0_write7_res = img_update_0_write.extract<224, 255>();
	img_img_update_0_write7_write(img_img_update_0_write7_res, img, d0, d1);
}

#include "hw_classes.h"

struct lgxx_lgxx_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxx_lgxx_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxx_lgxx_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxx_lgxx_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxx_lgxx_update_0_write4_merged_banks_1_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxx_lgxx_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxx_lgxx_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxx_lgxx_update_0_write7_merged_banks_1_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxx_cache {
  lgxx_lgxx_update_0_write0_merged_banks_1_cache lgxx_lgxx_update_0_write0_merged_banks_1;
  lgxx_lgxx_update_0_write1_merged_banks_1_cache lgxx_lgxx_update_0_write1_merged_banks_1;
  lgxx_lgxx_update_0_write2_merged_banks_1_cache lgxx_lgxx_update_0_write2_merged_banks_1;
  lgxx_lgxx_update_0_write3_merged_banks_1_cache lgxx_lgxx_update_0_write3_merged_banks_1;
  lgxx_lgxx_update_0_write4_merged_banks_1_cache lgxx_lgxx_update_0_write4_merged_banks_1;
  lgxx_lgxx_update_0_write5_merged_banks_1_cache lgxx_lgxx_update_0_write5_merged_banks_1;
  lgxx_lgxx_update_0_write6_merged_banks_1_cache lgxx_lgxx_update_0_write6_merged_banks_1;
  lgxx_lgxx_update_0_write7_merged_banks_1_cache lgxx_lgxx_update_0_write7_merged_banks_1;
};



inline void lgxx_lgxx_update_0_write0_write(hw_uint<32> & lgxx_lgxx_update_0_write0, lgxx_cache& lgxx, int d0, int d1) {
  lgxx.lgxx_lgxx_update_0_write0_merged_banks_1.push(lgxx_lgxx_update_0_write0);
}

inline void lgxx_lgxx_update_0_write1_write(hw_uint<32> & lgxx_lgxx_update_0_write1, lgxx_cache& lgxx, int d0, int d1) {
  lgxx.lgxx_lgxx_update_0_write1_merged_banks_1.push(lgxx_lgxx_update_0_write1);
}

inline void lgxx_lgxx_update_0_write2_write(hw_uint<32> & lgxx_lgxx_update_0_write2, lgxx_cache& lgxx, int d0, int d1) {
  lgxx.lgxx_lgxx_update_0_write2_merged_banks_1.push(lgxx_lgxx_update_0_write2);
}

inline void lgxx_lgxx_update_0_write3_write(hw_uint<32> & lgxx_lgxx_update_0_write3, lgxx_cache& lgxx, int d0, int d1) {
  lgxx.lgxx_lgxx_update_0_write3_merged_banks_1.push(lgxx_lgxx_update_0_write3);
}

inline void lgxx_lgxx_update_0_write4_write(hw_uint<32> & lgxx_lgxx_update_0_write4, lgxx_cache& lgxx, int d0, int d1) {
  lgxx.lgxx_lgxx_update_0_write4_merged_banks_1.push(lgxx_lgxx_update_0_write4);
}

inline void lgxx_lgxx_update_0_write5_write(hw_uint<32> & lgxx_lgxx_update_0_write5, lgxx_cache& lgxx, int d0, int d1) {
  lgxx.lgxx_lgxx_update_0_write5_merged_banks_1.push(lgxx_lgxx_update_0_write5);
}

inline void lgxx_lgxx_update_0_write6_write(hw_uint<32> & lgxx_lgxx_update_0_write6, lgxx_cache& lgxx, int d0, int d1) {
  lgxx.lgxx_lgxx_update_0_write6_merged_banks_1.push(lgxx_lgxx_update_0_write6);
}

inline void lgxx_lgxx_update_0_write7_write(hw_uint<32> & lgxx_lgxx_update_0_write7, lgxx_cache& lgxx, int d0, int d1) {
  lgxx.lgxx_lgxx_update_0_write7_merged_banks_1.push(lgxx_lgxx_update_0_write7);
}

inline hw_uint<32>  lgxx8_rd0_select(lgxx_cache& lgxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx8_rd0 read pattern: { lgxx8_update_0[d0, d1] -> lgxx[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx_lgxx_update_0_write0 = lgxx.lgxx_lgxx_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxx_lgxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx8_rd1_select(lgxx_cache& lgxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx8_rd1 read pattern: { lgxx8_update_0[d0, d1] -> lgxx[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx_lgxx_update_0_write1 = lgxx.lgxx_lgxx_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxx_lgxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx8_rd2_select(lgxx_cache& lgxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx8_rd2 read pattern: { lgxx8_update_0[d0, d1] -> lgxx[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx_lgxx_update_0_write2 = lgxx.lgxx_lgxx_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxx_lgxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx8_rd3_select(lgxx_cache& lgxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx8_rd3 read pattern: { lgxx8_update_0[d0, d1] -> lgxx[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx_lgxx_update_0_write3 = lgxx.lgxx_lgxx_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxx_lgxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx8_rd4_select(lgxx_cache& lgxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx8_rd4 read pattern: { lgxx8_update_0[d0, d1] -> lgxx[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx_lgxx_update_0_write4 = lgxx.lgxx_lgxx_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxx_lgxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx8_rd5_select(lgxx_cache& lgxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx8_rd5 read pattern: { lgxx8_update_0[d0, d1] -> lgxx[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx_lgxx_update_0_write5 = lgxx.lgxx_lgxx_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxx_lgxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx8_rd6_select(lgxx_cache& lgxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx8_rd6 read pattern: { lgxx8_update_0[d0, d1] -> lgxx[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx_lgxx_update_0_write6 = lgxx.lgxx_lgxx_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxx_lgxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx8_rd7_select(lgxx_cache& lgxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx8_rd7 read pattern: { lgxx8_update_0[d0, d1] -> lgxx[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx_lgxx_update_0_write7 = lgxx.lgxx_lgxx_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxx_lgxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// lgxx8_update_0_read
//	lgxx8_rd0
//	lgxx8_rd1
//	lgxx8_rd2
//	lgxx8_rd3
//	lgxx8_rd4
//	lgxx8_rd5
//	lgxx8_rd6
//	lgxx8_rd7
inline hw_uint<256> lgxx_lgxx8_update_0_read_bundle_read(lgxx_cache& lgxx, int d0, int d1) {
  // # of ports in bundle: 8
    // lgxx8_rd0
    // lgxx8_rd1
    // lgxx8_rd2
    // lgxx8_rd3
    // lgxx8_rd4
    // lgxx8_rd5
    // lgxx8_rd6
    // lgxx8_rd7

	hw_uint<256> result;
	hw_uint<32>  lgxx8_rd0_res = lgxx8_rd0_select(lgxx, d0, d1);
	set_at<0, 256>(result, lgxx8_rd0_res);
	hw_uint<32>  lgxx8_rd1_res = lgxx8_rd1_select(lgxx, d0, d1);
	set_at<32, 256>(result, lgxx8_rd1_res);
	hw_uint<32>  lgxx8_rd2_res = lgxx8_rd2_select(lgxx, d0, d1);
	set_at<64, 256>(result, lgxx8_rd2_res);
	hw_uint<32>  lgxx8_rd3_res = lgxx8_rd3_select(lgxx, d0, d1);
	set_at<96, 256>(result, lgxx8_rd3_res);
	hw_uint<32>  lgxx8_rd4_res = lgxx8_rd4_select(lgxx, d0, d1);
	set_at<128, 256>(result, lgxx8_rd4_res);
	hw_uint<32>  lgxx8_rd5_res = lgxx8_rd5_select(lgxx, d0, d1);
	set_at<160, 256>(result, lgxx8_rd5_res);
	hw_uint<32>  lgxx8_rd6_res = lgxx8_rd6_select(lgxx, d0, d1);
	set_at<192, 256>(result, lgxx8_rd6_res);
	hw_uint<32>  lgxx8_rd7_res = lgxx8_rd7_select(lgxx, d0, d1);
	set_at<224, 256>(result, lgxx8_rd7_res);
	return result;
}

// lgxx_update_0_write
//	lgxx_lgxx_update_0_write0
//	lgxx_lgxx_update_0_write1
//	lgxx_lgxx_update_0_write2
//	lgxx_lgxx_update_0_write3
//	lgxx_lgxx_update_0_write4
//	lgxx_lgxx_update_0_write5
//	lgxx_lgxx_update_0_write6
//	lgxx_lgxx_update_0_write7
inline void lgxx_lgxx_update_0_write_bundle_write(hw_uint<256>& lgxx_update_0_write, lgxx_cache& lgxx, int d0, int d1) {
	hw_uint<32>  lgxx_lgxx_update_0_write0_res = lgxx_update_0_write.extract<0, 31>();
	lgxx_lgxx_update_0_write0_write(lgxx_lgxx_update_0_write0_res, lgxx, d0, d1);
	hw_uint<32>  lgxx_lgxx_update_0_write1_res = lgxx_update_0_write.extract<32, 63>();
	lgxx_lgxx_update_0_write1_write(lgxx_lgxx_update_0_write1_res, lgxx, d0, d1);
	hw_uint<32>  lgxx_lgxx_update_0_write2_res = lgxx_update_0_write.extract<64, 95>();
	lgxx_lgxx_update_0_write2_write(lgxx_lgxx_update_0_write2_res, lgxx, d0, d1);
	hw_uint<32>  lgxx_lgxx_update_0_write3_res = lgxx_update_0_write.extract<96, 127>();
	lgxx_lgxx_update_0_write3_write(lgxx_lgxx_update_0_write3_res, lgxx, d0, d1);
	hw_uint<32>  lgxx_lgxx_update_0_write4_res = lgxx_update_0_write.extract<128, 159>();
	lgxx_lgxx_update_0_write4_write(lgxx_lgxx_update_0_write4_res, lgxx, d0, d1);
	hw_uint<32>  lgxx_lgxx_update_0_write5_res = lgxx_update_0_write.extract<160, 191>();
	lgxx_lgxx_update_0_write5_write(lgxx_lgxx_update_0_write5_res, lgxx, d0, d1);
	hw_uint<32>  lgxx_lgxx_update_0_write6_res = lgxx_update_0_write.extract<192, 223>();
	lgxx_lgxx_update_0_write6_write(lgxx_lgxx_update_0_write6_res, lgxx, d0, d1);
	hw_uint<32>  lgxx_lgxx_update_0_write7_res = lgxx_update_0_write.extract<224, 255>();
	lgxx_lgxx_update_0_write7_write(lgxx_lgxx_update_0_write7_res, lgxx, d0, d1);
}

#include "hw_classes.h"

struct lgxx8_lgxx8_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgxx8_lgxx8_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgxx8_lgxx8_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgxx8_lgxx8_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgxx8_lgxx8_update_0_write4_merged_banks_2_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgxx8_lgxx8_update_0_write5_merged_banks_2_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgxx8_lgxx8_update_0_write6_merged_banks_2_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgxx8_lgxx8_update_0_write7_merged_banks_2_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgxx8_cache {
  lgxx8_lgxx8_update_0_write0_merged_banks_2_cache lgxx8_lgxx8_update_0_write0_merged_banks_2;
  lgxx8_lgxx8_update_0_write1_merged_banks_2_cache lgxx8_lgxx8_update_0_write1_merged_banks_2;
  lgxx8_lgxx8_update_0_write2_merged_banks_2_cache lgxx8_lgxx8_update_0_write2_merged_banks_2;
  lgxx8_lgxx8_update_0_write3_merged_banks_2_cache lgxx8_lgxx8_update_0_write3_merged_banks_2;
  lgxx8_lgxx8_update_0_write4_merged_banks_2_cache lgxx8_lgxx8_update_0_write4_merged_banks_2;
  lgxx8_lgxx8_update_0_write5_merged_banks_2_cache lgxx8_lgxx8_update_0_write5_merged_banks_2;
  lgxx8_lgxx8_update_0_write6_merged_banks_2_cache lgxx8_lgxx8_update_0_write6_merged_banks_2;
  lgxx8_lgxx8_update_0_write7_merged_banks_2_cache lgxx8_lgxx8_update_0_write7_merged_banks_2;
};



inline void lgxx8_lgxx8_update_0_write0_write(hw_uint<32> & lgxx8_lgxx8_update_0_write0, lgxx8_cache& lgxx8, int d0, int d1) {
  lgxx8.lgxx8_lgxx8_update_0_write0_merged_banks_2.push(lgxx8_lgxx8_update_0_write0);
}

inline void lgxx8_lgxx8_update_0_write1_write(hw_uint<32> & lgxx8_lgxx8_update_0_write1, lgxx8_cache& lgxx8, int d0, int d1) {
  lgxx8.lgxx8_lgxx8_update_0_write1_merged_banks_2.push(lgxx8_lgxx8_update_0_write1);
}

inline void lgxx8_lgxx8_update_0_write2_write(hw_uint<32> & lgxx8_lgxx8_update_0_write2, lgxx8_cache& lgxx8, int d0, int d1) {
  lgxx8.lgxx8_lgxx8_update_0_write2_merged_banks_2.push(lgxx8_lgxx8_update_0_write2);
}

inline void lgxx8_lgxx8_update_0_write3_write(hw_uint<32> & lgxx8_lgxx8_update_0_write3, lgxx8_cache& lgxx8, int d0, int d1) {
  lgxx8.lgxx8_lgxx8_update_0_write3_merged_banks_2.push(lgxx8_lgxx8_update_0_write3);
}

inline void lgxx8_lgxx8_update_0_write4_write(hw_uint<32> & lgxx8_lgxx8_update_0_write4, lgxx8_cache& lgxx8, int d0, int d1) {
  lgxx8.lgxx8_lgxx8_update_0_write4_merged_banks_2.push(lgxx8_lgxx8_update_0_write4);
}

inline void lgxx8_lgxx8_update_0_write5_write(hw_uint<32> & lgxx8_lgxx8_update_0_write5, lgxx8_cache& lgxx8, int d0, int d1) {
  lgxx8.lgxx8_lgxx8_update_0_write5_merged_banks_2.push(lgxx8_lgxx8_update_0_write5);
}

inline void lgxx8_lgxx8_update_0_write6_write(hw_uint<32> & lgxx8_lgxx8_update_0_write6, lgxx8_cache& lgxx8, int d0, int d1) {
  lgxx8.lgxx8_lgxx8_update_0_write6_merged_banks_2.push(lgxx8_lgxx8_update_0_write6);
}

inline void lgxx8_lgxx8_update_0_write7_write(hw_uint<32> & lgxx8_lgxx8_update_0_write7, lgxx8_cache& lgxx8, int d0, int d1) {
  lgxx8.lgxx8_lgxx8_update_0_write7_merged_banks_2.push(lgxx8_lgxx8_update_0_write7);
}

inline hw_uint<32>  det_rd0_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd0 read pattern: { det_update_0[d0, d1] -> lgxx8[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write0 = lgxx8.lgxx8_lgxx8_update_0_write0_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd1_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd1 read pattern: { det_update_0[d0, d1] -> lgxx8[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write1 = lgxx8.lgxx8_lgxx8_update_0_write1_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd2_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd2 read pattern: { det_update_0[d0, d1] -> lgxx8[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write2 = lgxx8.lgxx8_lgxx8_update_0_write2_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd3_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd3 read pattern: { det_update_0[d0, d1] -> lgxx8[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write3 = lgxx8.lgxx8_lgxx8_update_0_write3_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd4_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd4 read pattern: { det_update_0[d0, d1] -> lgxx8[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write4 = lgxx8.lgxx8_lgxx8_update_0_write4_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd5_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd5 read pattern: { det_update_0[d0, d1] -> lgxx8[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write5 = lgxx8.lgxx8_lgxx8_update_0_write5_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd6_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd6 read pattern: { det_update_0[d0, d1] -> lgxx8[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write6 = lgxx8.lgxx8_lgxx8_update_0_write6_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd7_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd7 read pattern: { det_update_0[d0, d1] -> lgxx8[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write7 = lgxx8.lgxx8_lgxx8_update_0_write7_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd0_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd0 read pattern: { trace_update_0[d0, d1] -> lgxx8[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write0 = lgxx8.lgxx8_lgxx8_update_0_write0_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd1_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd1 read pattern: { trace_update_0[d0, d1] -> lgxx8[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write1 = lgxx8.lgxx8_lgxx8_update_0_write1_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd2_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd2 read pattern: { trace_update_0[d0, d1] -> lgxx8[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write2 = lgxx8.lgxx8_lgxx8_update_0_write2_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd3_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd3 read pattern: { trace_update_0[d0, d1] -> lgxx8[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write3 = lgxx8.lgxx8_lgxx8_update_0_write3_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd4_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd4 read pattern: { trace_update_0[d0, d1] -> lgxx8[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write4 = lgxx8.lgxx8_lgxx8_update_0_write4_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd5_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd5 read pattern: { trace_update_0[d0, d1] -> lgxx8[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write5 = lgxx8.lgxx8_lgxx8_update_0_write5_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd6_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd6 read pattern: { trace_update_0[d0, d1] -> lgxx8[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write6 = lgxx8.lgxx8_lgxx8_update_0_write6_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd7_select(lgxx8_cache& lgxx8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd7 read pattern: { trace_update_0[d0, d1] -> lgxx8[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxx8_update_0[d0, d1] -> [2 + d1, 2 + d0, 12] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxx8_lgxx8_update_0_write7 = lgxx8.lgxx8_lgxx8_update_0_write7_merged_banks_2.peek_0();
  return value_lgxx8_lgxx8_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// det_update_0_read
//	det_rd0
//	det_rd1
//	det_rd2
//	det_rd3
//	det_rd4
//	det_rd5
//	det_rd6
//	det_rd7
inline hw_uint<256> lgxx8_det_update_0_read_bundle_read(lgxx8_cache& lgxx8, int d0, int d1) {
  // # of ports in bundle: 8
    // det_rd0
    // det_rd1
    // det_rd2
    // det_rd3
    // det_rd4
    // det_rd5
    // det_rd6
    // det_rd7

	hw_uint<256> result;
	hw_uint<32>  det_rd0_res = det_rd0_select(lgxx8, d0, d1);
	set_at<0, 256>(result, det_rd0_res);
	hw_uint<32>  det_rd1_res = det_rd1_select(lgxx8, d0, d1);
	set_at<32, 256>(result, det_rd1_res);
	hw_uint<32>  det_rd2_res = det_rd2_select(lgxx8, d0, d1);
	set_at<64, 256>(result, det_rd2_res);
	hw_uint<32>  det_rd3_res = det_rd3_select(lgxx8, d0, d1);
	set_at<96, 256>(result, det_rd3_res);
	hw_uint<32>  det_rd4_res = det_rd4_select(lgxx8, d0, d1);
	set_at<128, 256>(result, det_rd4_res);
	hw_uint<32>  det_rd5_res = det_rd5_select(lgxx8, d0, d1);
	set_at<160, 256>(result, det_rd5_res);
	hw_uint<32>  det_rd6_res = det_rd6_select(lgxx8, d0, d1);
	set_at<192, 256>(result, det_rd6_res);
	hw_uint<32>  det_rd7_res = det_rd7_select(lgxx8, d0, d1);
	set_at<224, 256>(result, det_rd7_res);
	return result;
}

// lgxx8_update_0_write
//	lgxx8_lgxx8_update_0_write0
//	lgxx8_lgxx8_update_0_write1
//	lgxx8_lgxx8_update_0_write2
//	lgxx8_lgxx8_update_0_write3
//	lgxx8_lgxx8_update_0_write4
//	lgxx8_lgxx8_update_0_write5
//	lgxx8_lgxx8_update_0_write6
//	lgxx8_lgxx8_update_0_write7
inline void lgxx8_lgxx8_update_0_write_bundle_write(hw_uint<256>& lgxx8_update_0_write, lgxx8_cache& lgxx8, int d0, int d1) {
	hw_uint<32>  lgxx8_lgxx8_update_0_write0_res = lgxx8_update_0_write.extract<0, 31>();
	lgxx8_lgxx8_update_0_write0_write(lgxx8_lgxx8_update_0_write0_res, lgxx8, d0, d1);
	hw_uint<32>  lgxx8_lgxx8_update_0_write1_res = lgxx8_update_0_write.extract<32, 63>();
	lgxx8_lgxx8_update_0_write1_write(lgxx8_lgxx8_update_0_write1_res, lgxx8, d0, d1);
	hw_uint<32>  lgxx8_lgxx8_update_0_write2_res = lgxx8_update_0_write.extract<64, 95>();
	lgxx8_lgxx8_update_0_write2_write(lgxx8_lgxx8_update_0_write2_res, lgxx8, d0, d1);
	hw_uint<32>  lgxx8_lgxx8_update_0_write3_res = lgxx8_update_0_write.extract<96, 127>();
	lgxx8_lgxx8_update_0_write3_write(lgxx8_lgxx8_update_0_write3_res, lgxx8, d0, d1);
	hw_uint<32>  lgxx8_lgxx8_update_0_write4_res = lgxx8_update_0_write.extract<128, 159>();
	lgxx8_lgxx8_update_0_write4_write(lgxx8_lgxx8_update_0_write4_res, lgxx8, d0, d1);
	hw_uint<32>  lgxx8_lgxx8_update_0_write5_res = lgxx8_update_0_write.extract<160, 191>();
	lgxx8_lgxx8_update_0_write5_write(lgxx8_lgxx8_update_0_write5_res, lgxx8, d0, d1);
	hw_uint<32>  lgxx8_lgxx8_update_0_write6_res = lgxx8_update_0_write.extract<192, 223>();
	lgxx8_lgxx8_update_0_write6_write(lgxx8_lgxx8_update_0_write6_res, lgxx8, d0, d1);
	hw_uint<32>  lgxx8_lgxx8_update_0_write7_res = lgxx8_update_0_write.extract<224, 255>();
	lgxx8_lgxx8_update_0_write7_write(lgxx8_lgxx8_update_0_write7_res, lgxx8, d0, d1);
}

// trace_update_0_read
//	trace_rd0
//	trace_rd1
//	trace_rd2
//	trace_rd3
//	trace_rd4
//	trace_rd5
//	trace_rd6
//	trace_rd7
inline hw_uint<256> lgxx8_trace_update_0_read_bundle_read(lgxx8_cache& lgxx8, int d0, int d1) {
  // # of ports in bundle: 8
    // trace_rd0
    // trace_rd1
    // trace_rd2
    // trace_rd3
    // trace_rd4
    // trace_rd5
    // trace_rd6
    // trace_rd7

	hw_uint<256> result;
	hw_uint<32>  trace_rd0_res = trace_rd0_select(lgxx8, d0, d1);
	set_at<0, 256>(result, trace_rd0_res);
	hw_uint<32>  trace_rd1_res = trace_rd1_select(lgxx8, d0, d1);
	set_at<32, 256>(result, trace_rd1_res);
	hw_uint<32>  trace_rd2_res = trace_rd2_select(lgxx8, d0, d1);
	set_at<64, 256>(result, trace_rd2_res);
	hw_uint<32>  trace_rd3_res = trace_rd3_select(lgxx8, d0, d1);
	set_at<96, 256>(result, trace_rd3_res);
	hw_uint<32>  trace_rd4_res = trace_rd4_select(lgxx8, d0, d1);
	set_at<128, 256>(result, trace_rd4_res);
	hw_uint<32>  trace_rd5_res = trace_rd5_select(lgxx8, d0, d1);
	set_at<160, 256>(result, trace_rd5_res);
	hw_uint<32>  trace_rd6_res = trace_rd6_select(lgxx8, d0, d1);
	set_at<192, 256>(result, trace_rd6_res);
	hw_uint<32>  trace_rd7_res = trace_rd7_select(lgxx8, d0, d1);
	set_at<224, 256>(result, trace_rd7_res);
	return result;
}

#include "hw_classes.h"

struct lgxy_lgxy_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy_lgxy_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy_lgxy_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy_lgxy_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy_lgxy_update_0_write4_merged_banks_1_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy_lgxy_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy_lgxy_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy_lgxy_update_0_write7_merged_banks_1_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy_cache {
  lgxy_lgxy_update_0_write0_merged_banks_1_cache lgxy_lgxy_update_0_write0_merged_banks_1;
  lgxy_lgxy_update_0_write1_merged_banks_1_cache lgxy_lgxy_update_0_write1_merged_banks_1;
  lgxy_lgxy_update_0_write2_merged_banks_1_cache lgxy_lgxy_update_0_write2_merged_banks_1;
  lgxy_lgxy_update_0_write3_merged_banks_1_cache lgxy_lgxy_update_0_write3_merged_banks_1;
  lgxy_lgxy_update_0_write4_merged_banks_1_cache lgxy_lgxy_update_0_write4_merged_banks_1;
  lgxy_lgxy_update_0_write5_merged_banks_1_cache lgxy_lgxy_update_0_write5_merged_banks_1;
  lgxy_lgxy_update_0_write6_merged_banks_1_cache lgxy_lgxy_update_0_write6_merged_banks_1;
  lgxy_lgxy_update_0_write7_merged_banks_1_cache lgxy_lgxy_update_0_write7_merged_banks_1;
};



inline void lgxy_lgxy_update_0_write0_write(hw_uint<32> & lgxy_lgxy_update_0_write0, lgxy_cache& lgxy, int d0, int d1) {
  lgxy.lgxy_lgxy_update_0_write0_merged_banks_1.push(lgxy_lgxy_update_0_write0);
}

inline void lgxy_lgxy_update_0_write1_write(hw_uint<32> & lgxy_lgxy_update_0_write1, lgxy_cache& lgxy, int d0, int d1) {
  lgxy.lgxy_lgxy_update_0_write1_merged_banks_1.push(lgxy_lgxy_update_0_write1);
}

inline void lgxy_lgxy_update_0_write2_write(hw_uint<32> & lgxy_lgxy_update_0_write2, lgxy_cache& lgxy, int d0, int d1) {
  lgxy.lgxy_lgxy_update_0_write2_merged_banks_1.push(lgxy_lgxy_update_0_write2);
}

inline void lgxy_lgxy_update_0_write3_write(hw_uint<32> & lgxy_lgxy_update_0_write3, lgxy_cache& lgxy, int d0, int d1) {
  lgxy.lgxy_lgxy_update_0_write3_merged_banks_1.push(lgxy_lgxy_update_0_write3);
}

inline void lgxy_lgxy_update_0_write4_write(hw_uint<32> & lgxy_lgxy_update_0_write4, lgxy_cache& lgxy, int d0, int d1) {
  lgxy.lgxy_lgxy_update_0_write4_merged_banks_1.push(lgxy_lgxy_update_0_write4);
}

inline void lgxy_lgxy_update_0_write5_write(hw_uint<32> & lgxy_lgxy_update_0_write5, lgxy_cache& lgxy, int d0, int d1) {
  lgxy.lgxy_lgxy_update_0_write5_merged_banks_1.push(lgxy_lgxy_update_0_write5);
}

inline void lgxy_lgxy_update_0_write6_write(hw_uint<32> & lgxy_lgxy_update_0_write6, lgxy_cache& lgxy, int d0, int d1) {
  lgxy.lgxy_lgxy_update_0_write6_merged_banks_1.push(lgxy_lgxy_update_0_write6);
}

inline void lgxy_lgxy_update_0_write7_write(hw_uint<32> & lgxy_lgxy_update_0_write7, lgxy_cache& lgxy, int d0, int d1) {
  lgxy.lgxy_lgxy_update_0_write7_merged_banks_1.push(lgxy_lgxy_update_0_write7);
}

inline hw_uint<32>  lgxy8_rd0_select(lgxy_cache& lgxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy8_rd0 read pattern: { lgxy8_update_0[d0, d1] -> lgxy[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy_lgxy_update_0_write0 = lgxy.lgxy_lgxy_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy_lgxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy8_rd1_select(lgxy_cache& lgxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy8_rd1 read pattern: { lgxy8_update_0[d0, d1] -> lgxy[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy_lgxy_update_0_write1 = lgxy.lgxy_lgxy_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy_lgxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy8_rd2_select(lgxy_cache& lgxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy8_rd2 read pattern: { lgxy8_update_0[d0, d1] -> lgxy[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy_lgxy_update_0_write2 = lgxy.lgxy_lgxy_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy_lgxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy8_rd3_select(lgxy_cache& lgxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy8_rd3 read pattern: { lgxy8_update_0[d0, d1] -> lgxy[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy_lgxy_update_0_write3 = lgxy.lgxy_lgxy_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy_lgxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy8_rd4_select(lgxy_cache& lgxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy8_rd4 read pattern: { lgxy8_update_0[d0, d1] -> lgxy[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy_lgxy_update_0_write4 = lgxy.lgxy_lgxy_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy_lgxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy8_rd5_select(lgxy_cache& lgxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy8_rd5 read pattern: { lgxy8_update_0[d0, d1] -> lgxy[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy_lgxy_update_0_write5 = lgxy.lgxy_lgxy_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy_lgxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy8_rd6_select(lgxy_cache& lgxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy8_rd6 read pattern: { lgxy8_update_0[d0, d1] -> lgxy[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy_lgxy_update_0_write6 = lgxy.lgxy_lgxy_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy_lgxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy8_rd7_select(lgxy_cache& lgxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy8_rd7 read pattern: { lgxy8_update_0[d0, d1] -> lgxy[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy_lgxy_update_0_write7 = lgxy.lgxy_lgxy_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy_lgxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// lgxy8_update_0_read
//	lgxy8_rd0
//	lgxy8_rd1
//	lgxy8_rd2
//	lgxy8_rd3
//	lgxy8_rd4
//	lgxy8_rd5
//	lgxy8_rd6
//	lgxy8_rd7
inline hw_uint<256> lgxy_lgxy8_update_0_read_bundle_read(lgxy_cache& lgxy, int d0, int d1) {
  // # of ports in bundle: 8
    // lgxy8_rd0
    // lgxy8_rd1
    // lgxy8_rd2
    // lgxy8_rd3
    // lgxy8_rd4
    // lgxy8_rd5
    // lgxy8_rd6
    // lgxy8_rd7

	hw_uint<256> result;
	hw_uint<32>  lgxy8_rd0_res = lgxy8_rd0_select(lgxy, d0, d1);
	set_at<0, 256>(result, lgxy8_rd0_res);
	hw_uint<32>  lgxy8_rd1_res = lgxy8_rd1_select(lgxy, d0, d1);
	set_at<32, 256>(result, lgxy8_rd1_res);
	hw_uint<32>  lgxy8_rd2_res = lgxy8_rd2_select(lgxy, d0, d1);
	set_at<64, 256>(result, lgxy8_rd2_res);
	hw_uint<32>  lgxy8_rd3_res = lgxy8_rd3_select(lgxy, d0, d1);
	set_at<96, 256>(result, lgxy8_rd3_res);
	hw_uint<32>  lgxy8_rd4_res = lgxy8_rd4_select(lgxy, d0, d1);
	set_at<128, 256>(result, lgxy8_rd4_res);
	hw_uint<32>  lgxy8_rd5_res = lgxy8_rd5_select(lgxy, d0, d1);
	set_at<160, 256>(result, lgxy8_rd5_res);
	hw_uint<32>  lgxy8_rd6_res = lgxy8_rd6_select(lgxy, d0, d1);
	set_at<192, 256>(result, lgxy8_rd6_res);
	hw_uint<32>  lgxy8_rd7_res = lgxy8_rd7_select(lgxy, d0, d1);
	set_at<224, 256>(result, lgxy8_rd7_res);
	return result;
}

// lgxy_update_0_write
//	lgxy_lgxy_update_0_write0
//	lgxy_lgxy_update_0_write1
//	lgxy_lgxy_update_0_write2
//	lgxy_lgxy_update_0_write3
//	lgxy_lgxy_update_0_write4
//	lgxy_lgxy_update_0_write5
//	lgxy_lgxy_update_0_write6
//	lgxy_lgxy_update_0_write7
inline void lgxy_lgxy_update_0_write_bundle_write(hw_uint<256>& lgxy_update_0_write, lgxy_cache& lgxy, int d0, int d1) {
	hw_uint<32>  lgxy_lgxy_update_0_write0_res = lgxy_update_0_write.extract<0, 31>();
	lgxy_lgxy_update_0_write0_write(lgxy_lgxy_update_0_write0_res, lgxy, d0, d1);
	hw_uint<32>  lgxy_lgxy_update_0_write1_res = lgxy_update_0_write.extract<32, 63>();
	lgxy_lgxy_update_0_write1_write(lgxy_lgxy_update_0_write1_res, lgxy, d0, d1);
	hw_uint<32>  lgxy_lgxy_update_0_write2_res = lgxy_update_0_write.extract<64, 95>();
	lgxy_lgxy_update_0_write2_write(lgxy_lgxy_update_0_write2_res, lgxy, d0, d1);
	hw_uint<32>  lgxy_lgxy_update_0_write3_res = lgxy_update_0_write.extract<96, 127>();
	lgxy_lgxy_update_0_write3_write(lgxy_lgxy_update_0_write3_res, lgxy, d0, d1);
	hw_uint<32>  lgxy_lgxy_update_0_write4_res = lgxy_update_0_write.extract<128, 159>();
	lgxy_lgxy_update_0_write4_write(lgxy_lgxy_update_0_write4_res, lgxy, d0, d1);
	hw_uint<32>  lgxy_lgxy_update_0_write5_res = lgxy_update_0_write.extract<160, 191>();
	lgxy_lgxy_update_0_write5_write(lgxy_lgxy_update_0_write5_res, lgxy, d0, d1);
	hw_uint<32>  lgxy_lgxy_update_0_write6_res = lgxy_update_0_write.extract<192, 223>();
	lgxy_lgxy_update_0_write6_write(lgxy_lgxy_update_0_write6_res, lgxy, d0, d1);
	hw_uint<32>  lgxy_lgxy_update_0_write7_res = lgxy_update_0_write.extract<224, 255>();
	lgxy_lgxy_update_0_write7_write(lgxy_lgxy_update_0_write7_res, lgxy, d0, d1);
}

#include "hw_classes.h"

struct lgxy8_lgxy8_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy8_lgxy8_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy8_lgxy8_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy8_lgxy8_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy8_lgxy8_update_0_write4_merged_banks_1_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy8_lgxy8_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy8_lgxy8_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy8_lgxy8_update_0_write7_merged_banks_1_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgxy8_cache {
  lgxy8_lgxy8_update_0_write0_merged_banks_1_cache lgxy8_lgxy8_update_0_write0_merged_banks_1;
  lgxy8_lgxy8_update_0_write1_merged_banks_1_cache lgxy8_lgxy8_update_0_write1_merged_banks_1;
  lgxy8_lgxy8_update_0_write2_merged_banks_1_cache lgxy8_lgxy8_update_0_write2_merged_banks_1;
  lgxy8_lgxy8_update_0_write3_merged_banks_1_cache lgxy8_lgxy8_update_0_write3_merged_banks_1;
  lgxy8_lgxy8_update_0_write4_merged_banks_1_cache lgxy8_lgxy8_update_0_write4_merged_banks_1;
  lgxy8_lgxy8_update_0_write5_merged_banks_1_cache lgxy8_lgxy8_update_0_write5_merged_banks_1;
  lgxy8_lgxy8_update_0_write6_merged_banks_1_cache lgxy8_lgxy8_update_0_write6_merged_banks_1;
  lgxy8_lgxy8_update_0_write7_merged_banks_1_cache lgxy8_lgxy8_update_0_write7_merged_banks_1;
};



inline void lgxy8_lgxy8_update_0_write0_write(hw_uint<32> & lgxy8_lgxy8_update_0_write0, lgxy8_cache& lgxy8, int d0, int d1) {
  lgxy8.lgxy8_lgxy8_update_0_write0_merged_banks_1.push(lgxy8_lgxy8_update_0_write0);
}

inline void lgxy8_lgxy8_update_0_write1_write(hw_uint<32> & lgxy8_lgxy8_update_0_write1, lgxy8_cache& lgxy8, int d0, int d1) {
  lgxy8.lgxy8_lgxy8_update_0_write1_merged_banks_1.push(lgxy8_lgxy8_update_0_write1);
}

inline void lgxy8_lgxy8_update_0_write2_write(hw_uint<32> & lgxy8_lgxy8_update_0_write2, lgxy8_cache& lgxy8, int d0, int d1) {
  lgxy8.lgxy8_lgxy8_update_0_write2_merged_banks_1.push(lgxy8_lgxy8_update_0_write2);
}

inline void lgxy8_lgxy8_update_0_write3_write(hw_uint<32> & lgxy8_lgxy8_update_0_write3, lgxy8_cache& lgxy8, int d0, int d1) {
  lgxy8.lgxy8_lgxy8_update_0_write3_merged_banks_1.push(lgxy8_lgxy8_update_0_write3);
}

inline void lgxy8_lgxy8_update_0_write4_write(hw_uint<32> & lgxy8_lgxy8_update_0_write4, lgxy8_cache& lgxy8, int d0, int d1) {
  lgxy8.lgxy8_lgxy8_update_0_write4_merged_banks_1.push(lgxy8_lgxy8_update_0_write4);
}

inline void lgxy8_lgxy8_update_0_write5_write(hw_uint<32> & lgxy8_lgxy8_update_0_write5, lgxy8_cache& lgxy8, int d0, int d1) {
  lgxy8.lgxy8_lgxy8_update_0_write5_merged_banks_1.push(lgxy8_lgxy8_update_0_write5);
}

inline void lgxy8_lgxy8_update_0_write6_write(hw_uint<32> & lgxy8_lgxy8_update_0_write6, lgxy8_cache& lgxy8, int d0, int d1) {
  lgxy8.lgxy8_lgxy8_update_0_write6_merged_banks_1.push(lgxy8_lgxy8_update_0_write6);
}

inline void lgxy8_lgxy8_update_0_write7_write(hw_uint<32> & lgxy8_lgxy8_update_0_write7, lgxy8_cache& lgxy8, int d0, int d1) {
  lgxy8.lgxy8_lgxy8_update_0_write7_merged_banks_1.push(lgxy8_lgxy8_update_0_write7);
}

inline hw_uint<32>  det_rd0_select(lgxy8_cache& lgxy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd0 read pattern: { det_update_0[d0, d1] -> lgxy8[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy8_lgxy8_update_0_write0 = lgxy8.lgxy8_lgxy8_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy8_lgxy8_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd1_select(lgxy8_cache& lgxy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd1 read pattern: { det_update_0[d0, d1] -> lgxy8[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy8_lgxy8_update_0_write1 = lgxy8.lgxy8_lgxy8_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy8_lgxy8_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd2_select(lgxy8_cache& lgxy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd2 read pattern: { det_update_0[d0, d1] -> lgxy8[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy8_lgxy8_update_0_write2 = lgxy8.lgxy8_lgxy8_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy8_lgxy8_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd3_select(lgxy8_cache& lgxy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd3 read pattern: { det_update_0[d0, d1] -> lgxy8[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy8_lgxy8_update_0_write3 = lgxy8.lgxy8_lgxy8_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy8_lgxy8_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd4_select(lgxy8_cache& lgxy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd4 read pattern: { det_update_0[d0, d1] -> lgxy8[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy8_lgxy8_update_0_write4 = lgxy8.lgxy8_lgxy8_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy8_lgxy8_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd5_select(lgxy8_cache& lgxy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd5 read pattern: { det_update_0[d0, d1] -> lgxy8[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy8_lgxy8_update_0_write5 = lgxy8.lgxy8_lgxy8_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy8_lgxy8_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd6_select(lgxy8_cache& lgxy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd6 read pattern: { det_update_0[d0, d1] -> lgxy8[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy8_lgxy8_update_0_write6 = lgxy8.lgxy8_lgxy8_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy8_lgxy8_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd7_select(lgxy8_cache& lgxy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd7 read pattern: { det_update_0[d0, d1] -> lgxy8[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgxy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgxy8_lgxy8_update_0_write7 = lgxy8.lgxy8_lgxy8_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgxy8_lgxy8_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// det_update_0_read
//	det_rd0
//	det_rd1
//	det_rd2
//	det_rd3
//	det_rd4
//	det_rd5
//	det_rd6
//	det_rd7
inline hw_uint<256> lgxy8_det_update_0_read_bundle_read(lgxy8_cache& lgxy8, int d0, int d1) {
  // # of ports in bundle: 8
    // det_rd0
    // det_rd1
    // det_rd2
    // det_rd3
    // det_rd4
    // det_rd5
    // det_rd6
    // det_rd7

	hw_uint<256> result;
	hw_uint<32>  det_rd0_res = det_rd0_select(lgxy8, d0, d1);
	set_at<0, 256>(result, det_rd0_res);
	hw_uint<32>  det_rd1_res = det_rd1_select(lgxy8, d0, d1);
	set_at<32, 256>(result, det_rd1_res);
	hw_uint<32>  det_rd2_res = det_rd2_select(lgxy8, d0, d1);
	set_at<64, 256>(result, det_rd2_res);
	hw_uint<32>  det_rd3_res = det_rd3_select(lgxy8, d0, d1);
	set_at<96, 256>(result, det_rd3_res);
	hw_uint<32>  det_rd4_res = det_rd4_select(lgxy8, d0, d1);
	set_at<128, 256>(result, det_rd4_res);
	hw_uint<32>  det_rd5_res = det_rd5_select(lgxy8, d0, d1);
	set_at<160, 256>(result, det_rd5_res);
	hw_uint<32>  det_rd6_res = det_rd6_select(lgxy8, d0, d1);
	set_at<192, 256>(result, det_rd6_res);
	hw_uint<32>  det_rd7_res = det_rd7_select(lgxy8, d0, d1);
	set_at<224, 256>(result, det_rd7_res);
	return result;
}

// lgxy8_update_0_write
//	lgxy8_lgxy8_update_0_write0
//	lgxy8_lgxy8_update_0_write1
//	lgxy8_lgxy8_update_0_write2
//	lgxy8_lgxy8_update_0_write3
//	lgxy8_lgxy8_update_0_write4
//	lgxy8_lgxy8_update_0_write5
//	lgxy8_lgxy8_update_0_write6
//	lgxy8_lgxy8_update_0_write7
inline void lgxy8_lgxy8_update_0_write_bundle_write(hw_uint<256>& lgxy8_update_0_write, lgxy8_cache& lgxy8, int d0, int d1) {
	hw_uint<32>  lgxy8_lgxy8_update_0_write0_res = lgxy8_update_0_write.extract<0, 31>();
	lgxy8_lgxy8_update_0_write0_write(lgxy8_lgxy8_update_0_write0_res, lgxy8, d0, d1);
	hw_uint<32>  lgxy8_lgxy8_update_0_write1_res = lgxy8_update_0_write.extract<32, 63>();
	lgxy8_lgxy8_update_0_write1_write(lgxy8_lgxy8_update_0_write1_res, lgxy8, d0, d1);
	hw_uint<32>  lgxy8_lgxy8_update_0_write2_res = lgxy8_update_0_write.extract<64, 95>();
	lgxy8_lgxy8_update_0_write2_write(lgxy8_lgxy8_update_0_write2_res, lgxy8, d0, d1);
	hw_uint<32>  lgxy8_lgxy8_update_0_write3_res = lgxy8_update_0_write.extract<96, 127>();
	lgxy8_lgxy8_update_0_write3_write(lgxy8_lgxy8_update_0_write3_res, lgxy8, d0, d1);
	hw_uint<32>  lgxy8_lgxy8_update_0_write4_res = lgxy8_update_0_write.extract<128, 159>();
	lgxy8_lgxy8_update_0_write4_write(lgxy8_lgxy8_update_0_write4_res, lgxy8, d0, d1);
	hw_uint<32>  lgxy8_lgxy8_update_0_write5_res = lgxy8_update_0_write.extract<160, 191>();
	lgxy8_lgxy8_update_0_write5_write(lgxy8_lgxy8_update_0_write5_res, lgxy8, d0, d1);
	hw_uint<32>  lgxy8_lgxy8_update_0_write6_res = lgxy8_update_0_write.extract<192, 223>();
	lgxy8_lgxy8_update_0_write6_write(lgxy8_lgxy8_update_0_write6_res, lgxy8, d0, d1);
	hw_uint<32>  lgxy8_lgxy8_update_0_write7_res = lgxy8_update_0_write.extract<224, 255>();
	lgxy8_lgxy8_update_0_write7_write(lgxy8_lgxy8_update_0_write7_res, lgxy8, d0, d1);
}

#include "hw_classes.h"

struct lgyy_lgyy_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgyy_lgyy_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgyy_lgyy_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgyy_lgyy_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgyy_lgyy_update_0_write4_merged_banks_1_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgyy_lgyy_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgyy_lgyy_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgyy_lgyy_update_0_write7_merged_banks_1_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct lgyy_cache {
  lgyy_lgyy_update_0_write0_merged_banks_1_cache lgyy_lgyy_update_0_write0_merged_banks_1;
  lgyy_lgyy_update_0_write1_merged_banks_1_cache lgyy_lgyy_update_0_write1_merged_banks_1;
  lgyy_lgyy_update_0_write2_merged_banks_1_cache lgyy_lgyy_update_0_write2_merged_banks_1;
  lgyy_lgyy_update_0_write3_merged_banks_1_cache lgyy_lgyy_update_0_write3_merged_banks_1;
  lgyy_lgyy_update_0_write4_merged_banks_1_cache lgyy_lgyy_update_0_write4_merged_banks_1;
  lgyy_lgyy_update_0_write5_merged_banks_1_cache lgyy_lgyy_update_0_write5_merged_banks_1;
  lgyy_lgyy_update_0_write6_merged_banks_1_cache lgyy_lgyy_update_0_write6_merged_banks_1;
  lgyy_lgyy_update_0_write7_merged_banks_1_cache lgyy_lgyy_update_0_write7_merged_banks_1;
};



inline void lgyy_lgyy_update_0_write0_write(hw_uint<32> & lgyy_lgyy_update_0_write0, lgyy_cache& lgyy, int d0, int d1) {
  lgyy.lgyy_lgyy_update_0_write0_merged_banks_1.push(lgyy_lgyy_update_0_write0);
}

inline void lgyy_lgyy_update_0_write1_write(hw_uint<32> & lgyy_lgyy_update_0_write1, lgyy_cache& lgyy, int d0, int d1) {
  lgyy.lgyy_lgyy_update_0_write1_merged_banks_1.push(lgyy_lgyy_update_0_write1);
}

inline void lgyy_lgyy_update_0_write2_write(hw_uint<32> & lgyy_lgyy_update_0_write2, lgyy_cache& lgyy, int d0, int d1) {
  lgyy.lgyy_lgyy_update_0_write2_merged_banks_1.push(lgyy_lgyy_update_0_write2);
}

inline void lgyy_lgyy_update_0_write3_write(hw_uint<32> & lgyy_lgyy_update_0_write3, lgyy_cache& lgyy, int d0, int d1) {
  lgyy.lgyy_lgyy_update_0_write3_merged_banks_1.push(lgyy_lgyy_update_0_write3);
}

inline void lgyy_lgyy_update_0_write4_write(hw_uint<32> & lgyy_lgyy_update_0_write4, lgyy_cache& lgyy, int d0, int d1) {
  lgyy.lgyy_lgyy_update_0_write4_merged_banks_1.push(lgyy_lgyy_update_0_write4);
}

inline void lgyy_lgyy_update_0_write5_write(hw_uint<32> & lgyy_lgyy_update_0_write5, lgyy_cache& lgyy, int d0, int d1) {
  lgyy.lgyy_lgyy_update_0_write5_merged_banks_1.push(lgyy_lgyy_update_0_write5);
}

inline void lgyy_lgyy_update_0_write6_write(hw_uint<32> & lgyy_lgyy_update_0_write6, lgyy_cache& lgyy, int d0, int d1) {
  lgyy.lgyy_lgyy_update_0_write6_merged_banks_1.push(lgyy_lgyy_update_0_write6);
}

inline void lgyy_lgyy_update_0_write7_write(hw_uint<32> & lgyy_lgyy_update_0_write7, lgyy_cache& lgyy, int d0, int d1) {
  lgyy.lgyy_lgyy_update_0_write7_merged_banks_1.push(lgyy_lgyy_update_0_write7);
}

inline hw_uint<32>  lgyy8_rd0_select(lgyy_cache& lgyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy8_rd0 read pattern: { lgyy8_update_0[d0, d1] -> lgyy[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy_lgyy_update_0_write0 = lgyy.lgyy_lgyy_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgyy_lgyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy8_rd1_select(lgyy_cache& lgyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy8_rd1 read pattern: { lgyy8_update_0[d0, d1] -> lgyy[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy_lgyy_update_0_write1 = lgyy.lgyy_lgyy_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgyy_lgyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy8_rd2_select(lgyy_cache& lgyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy8_rd2 read pattern: { lgyy8_update_0[d0, d1] -> lgyy[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy_lgyy_update_0_write2 = lgyy.lgyy_lgyy_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgyy_lgyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy8_rd3_select(lgyy_cache& lgyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy8_rd3 read pattern: { lgyy8_update_0[d0, d1] -> lgyy[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy_lgyy_update_0_write3 = lgyy.lgyy_lgyy_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgyy_lgyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy8_rd4_select(lgyy_cache& lgyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy8_rd4 read pattern: { lgyy8_update_0[d0, d1] -> lgyy[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy_lgyy_update_0_write4 = lgyy.lgyy_lgyy_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgyy_lgyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy8_rd5_select(lgyy_cache& lgyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy8_rd5 read pattern: { lgyy8_update_0[d0, d1] -> lgyy[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy_lgyy_update_0_write5 = lgyy.lgyy_lgyy_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgyy_lgyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy8_rd6_select(lgyy_cache& lgyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy8_rd6 read pattern: { lgyy8_update_0[d0, d1] -> lgyy[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy_lgyy_update_0_write6 = lgyy.lgyy_lgyy_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgyy_lgyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy8_rd7_select(lgyy_cache& lgyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy8_rd7 read pattern: { lgyy8_update_0[d0, d1] -> lgyy[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy_lgyy_update_0_write7 = lgyy.lgyy_lgyy_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_lgyy_lgyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// lgyy8_update_0_read
//	lgyy8_rd0
//	lgyy8_rd1
//	lgyy8_rd2
//	lgyy8_rd3
//	lgyy8_rd4
//	lgyy8_rd5
//	lgyy8_rd6
//	lgyy8_rd7
inline hw_uint<256> lgyy_lgyy8_update_0_read_bundle_read(lgyy_cache& lgyy, int d0, int d1) {
  // # of ports in bundle: 8
    // lgyy8_rd0
    // lgyy8_rd1
    // lgyy8_rd2
    // lgyy8_rd3
    // lgyy8_rd4
    // lgyy8_rd5
    // lgyy8_rd6
    // lgyy8_rd7

	hw_uint<256> result;
	hw_uint<32>  lgyy8_rd0_res = lgyy8_rd0_select(lgyy, d0, d1);
	set_at<0, 256>(result, lgyy8_rd0_res);
	hw_uint<32>  lgyy8_rd1_res = lgyy8_rd1_select(lgyy, d0, d1);
	set_at<32, 256>(result, lgyy8_rd1_res);
	hw_uint<32>  lgyy8_rd2_res = lgyy8_rd2_select(lgyy, d0, d1);
	set_at<64, 256>(result, lgyy8_rd2_res);
	hw_uint<32>  lgyy8_rd3_res = lgyy8_rd3_select(lgyy, d0, d1);
	set_at<96, 256>(result, lgyy8_rd3_res);
	hw_uint<32>  lgyy8_rd4_res = lgyy8_rd4_select(lgyy, d0, d1);
	set_at<128, 256>(result, lgyy8_rd4_res);
	hw_uint<32>  lgyy8_rd5_res = lgyy8_rd5_select(lgyy, d0, d1);
	set_at<160, 256>(result, lgyy8_rd5_res);
	hw_uint<32>  lgyy8_rd6_res = lgyy8_rd6_select(lgyy, d0, d1);
	set_at<192, 256>(result, lgyy8_rd6_res);
	hw_uint<32>  lgyy8_rd7_res = lgyy8_rd7_select(lgyy, d0, d1);
	set_at<224, 256>(result, lgyy8_rd7_res);
	return result;
}

// lgyy_update_0_write
//	lgyy_lgyy_update_0_write0
//	lgyy_lgyy_update_0_write1
//	lgyy_lgyy_update_0_write2
//	lgyy_lgyy_update_0_write3
//	lgyy_lgyy_update_0_write4
//	lgyy_lgyy_update_0_write5
//	lgyy_lgyy_update_0_write6
//	lgyy_lgyy_update_0_write7
inline void lgyy_lgyy_update_0_write_bundle_write(hw_uint<256>& lgyy_update_0_write, lgyy_cache& lgyy, int d0, int d1) {
	hw_uint<32>  lgyy_lgyy_update_0_write0_res = lgyy_update_0_write.extract<0, 31>();
	lgyy_lgyy_update_0_write0_write(lgyy_lgyy_update_0_write0_res, lgyy, d0, d1);
	hw_uint<32>  lgyy_lgyy_update_0_write1_res = lgyy_update_0_write.extract<32, 63>();
	lgyy_lgyy_update_0_write1_write(lgyy_lgyy_update_0_write1_res, lgyy, d0, d1);
	hw_uint<32>  lgyy_lgyy_update_0_write2_res = lgyy_update_0_write.extract<64, 95>();
	lgyy_lgyy_update_0_write2_write(lgyy_lgyy_update_0_write2_res, lgyy, d0, d1);
	hw_uint<32>  lgyy_lgyy_update_0_write3_res = lgyy_update_0_write.extract<96, 127>();
	lgyy_lgyy_update_0_write3_write(lgyy_lgyy_update_0_write3_res, lgyy, d0, d1);
	hw_uint<32>  lgyy_lgyy_update_0_write4_res = lgyy_update_0_write.extract<128, 159>();
	lgyy_lgyy_update_0_write4_write(lgyy_lgyy_update_0_write4_res, lgyy, d0, d1);
	hw_uint<32>  lgyy_lgyy_update_0_write5_res = lgyy_update_0_write.extract<160, 191>();
	lgyy_lgyy_update_0_write5_write(lgyy_lgyy_update_0_write5_res, lgyy, d0, d1);
	hw_uint<32>  lgyy_lgyy_update_0_write6_res = lgyy_update_0_write.extract<192, 223>();
	lgyy_lgyy_update_0_write6_write(lgyy_lgyy_update_0_write6_res, lgyy, d0, d1);
	hw_uint<32>  lgyy_lgyy_update_0_write7_res = lgyy_update_0_write.extract<224, 255>();
	lgyy_lgyy_update_0_write7_write(lgyy_lgyy_update_0_write7_res, lgyy, d0, d1);
}

#include "hw_classes.h"

struct lgyy8_lgyy8_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgyy8_lgyy8_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgyy8_lgyy8_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgyy8_lgyy8_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgyy8_lgyy8_update_0_write4_merged_banks_2_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgyy8_lgyy8_update_0_write5_merged_banks_2_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgyy8_lgyy8_update_0_write6_merged_banks_2_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgyy8_lgyy8_update_0_write7_merged_banks_2_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct lgyy8_cache {
  lgyy8_lgyy8_update_0_write0_merged_banks_2_cache lgyy8_lgyy8_update_0_write0_merged_banks_2;
  lgyy8_lgyy8_update_0_write1_merged_banks_2_cache lgyy8_lgyy8_update_0_write1_merged_banks_2;
  lgyy8_lgyy8_update_0_write2_merged_banks_2_cache lgyy8_lgyy8_update_0_write2_merged_banks_2;
  lgyy8_lgyy8_update_0_write3_merged_banks_2_cache lgyy8_lgyy8_update_0_write3_merged_banks_2;
  lgyy8_lgyy8_update_0_write4_merged_banks_2_cache lgyy8_lgyy8_update_0_write4_merged_banks_2;
  lgyy8_lgyy8_update_0_write5_merged_banks_2_cache lgyy8_lgyy8_update_0_write5_merged_banks_2;
  lgyy8_lgyy8_update_0_write6_merged_banks_2_cache lgyy8_lgyy8_update_0_write6_merged_banks_2;
  lgyy8_lgyy8_update_0_write7_merged_banks_2_cache lgyy8_lgyy8_update_0_write7_merged_banks_2;
};



inline void lgyy8_lgyy8_update_0_write0_write(hw_uint<32> & lgyy8_lgyy8_update_0_write0, lgyy8_cache& lgyy8, int d0, int d1) {
  lgyy8.lgyy8_lgyy8_update_0_write0_merged_banks_2.push(lgyy8_lgyy8_update_0_write0);
}

inline void lgyy8_lgyy8_update_0_write1_write(hw_uint<32> & lgyy8_lgyy8_update_0_write1, lgyy8_cache& lgyy8, int d0, int d1) {
  lgyy8.lgyy8_lgyy8_update_0_write1_merged_banks_2.push(lgyy8_lgyy8_update_0_write1);
}

inline void lgyy8_lgyy8_update_0_write2_write(hw_uint<32> & lgyy8_lgyy8_update_0_write2, lgyy8_cache& lgyy8, int d0, int d1) {
  lgyy8.lgyy8_lgyy8_update_0_write2_merged_banks_2.push(lgyy8_lgyy8_update_0_write2);
}

inline void lgyy8_lgyy8_update_0_write3_write(hw_uint<32> & lgyy8_lgyy8_update_0_write3, lgyy8_cache& lgyy8, int d0, int d1) {
  lgyy8.lgyy8_lgyy8_update_0_write3_merged_banks_2.push(lgyy8_lgyy8_update_0_write3);
}

inline void lgyy8_lgyy8_update_0_write4_write(hw_uint<32> & lgyy8_lgyy8_update_0_write4, lgyy8_cache& lgyy8, int d0, int d1) {
  lgyy8.lgyy8_lgyy8_update_0_write4_merged_banks_2.push(lgyy8_lgyy8_update_0_write4);
}

inline void lgyy8_lgyy8_update_0_write5_write(hw_uint<32> & lgyy8_lgyy8_update_0_write5, lgyy8_cache& lgyy8, int d0, int d1) {
  lgyy8.lgyy8_lgyy8_update_0_write5_merged_banks_2.push(lgyy8_lgyy8_update_0_write5);
}

inline void lgyy8_lgyy8_update_0_write6_write(hw_uint<32> & lgyy8_lgyy8_update_0_write6, lgyy8_cache& lgyy8, int d0, int d1) {
  lgyy8.lgyy8_lgyy8_update_0_write6_merged_banks_2.push(lgyy8_lgyy8_update_0_write6);
}

inline void lgyy8_lgyy8_update_0_write7_write(hw_uint<32> & lgyy8_lgyy8_update_0_write7, lgyy8_cache& lgyy8, int d0, int d1) {
  lgyy8.lgyy8_lgyy8_update_0_write7_merged_banks_2.push(lgyy8_lgyy8_update_0_write7);
}

inline hw_uint<32>  det_rd0_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd0 read pattern: { det_update_0[d0, d1] -> lgyy8[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write0 = lgyy8.lgyy8_lgyy8_update_0_write0_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd1_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd1 read pattern: { det_update_0[d0, d1] -> lgyy8[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write1 = lgyy8.lgyy8_lgyy8_update_0_write1_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd2_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd2 read pattern: { det_update_0[d0, d1] -> lgyy8[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write2 = lgyy8.lgyy8_lgyy8_update_0_write2_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd3_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd3 read pattern: { det_update_0[d0, d1] -> lgyy8[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write3 = lgyy8.lgyy8_lgyy8_update_0_write3_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd4_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd4 read pattern: { det_update_0[d0, d1] -> lgyy8[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write4 = lgyy8.lgyy8_lgyy8_update_0_write4_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd5_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd5 read pattern: { det_update_0[d0, d1] -> lgyy8[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write5 = lgyy8.lgyy8_lgyy8_update_0_write5_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd6_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd6 read pattern: { det_update_0[d0, d1] -> lgyy8[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write6 = lgyy8.lgyy8_lgyy8_update_0_write6_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  det_rd7_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // det_rd7 read pattern: { det_update_0[d0, d1] -> lgyy8[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { det_update_0[d0, d1] -> [2 + d1, 2 + d0, 13] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write7 = lgyy8.lgyy8_lgyy8_update_0_write7_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd0_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd0 read pattern: { trace_update_0[d0, d1] -> lgyy8[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write0 = lgyy8.lgyy8_lgyy8_update_0_write0_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd1_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd1 read pattern: { trace_update_0[d0, d1] -> lgyy8[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write1 = lgyy8.lgyy8_lgyy8_update_0_write1_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd2_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd2 read pattern: { trace_update_0[d0, d1] -> lgyy8[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write2 = lgyy8.lgyy8_lgyy8_update_0_write2_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd3_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd3 read pattern: { trace_update_0[d0, d1] -> lgyy8[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write3 = lgyy8.lgyy8_lgyy8_update_0_write3_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd4_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd4 read pattern: { trace_update_0[d0, d1] -> lgyy8[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write4 = lgyy8.lgyy8_lgyy8_update_0_write4_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd5_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd5 read pattern: { trace_update_0[d0, d1] -> lgyy8[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write5 = lgyy8.lgyy8_lgyy8_update_0_write5_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd6_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd6 read pattern: { trace_update_0[d0, d1] -> lgyy8[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write6 = lgyy8.lgyy8_lgyy8_update_0_write6_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  trace_rd7_select(lgyy8_cache& lgyy8, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // trace_rd7 read pattern: { trace_update_0[d0, d1] -> lgyy8[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lgyy8_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_lgyy8_lgyy8_update_0_write7 = lgyy8.lgyy8_lgyy8_update_0_write7_merged_banks_2.peek_0();
  return value_lgyy8_lgyy8_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// det_update_0_read
//	det_rd0
//	det_rd1
//	det_rd2
//	det_rd3
//	det_rd4
//	det_rd5
//	det_rd6
//	det_rd7
inline hw_uint<256> lgyy8_det_update_0_read_bundle_read(lgyy8_cache& lgyy8, int d0, int d1) {
  // # of ports in bundle: 8
    // det_rd0
    // det_rd1
    // det_rd2
    // det_rd3
    // det_rd4
    // det_rd5
    // det_rd6
    // det_rd7

	hw_uint<256> result;
	hw_uint<32>  det_rd0_res = det_rd0_select(lgyy8, d0, d1);
	set_at<0, 256>(result, det_rd0_res);
	hw_uint<32>  det_rd1_res = det_rd1_select(lgyy8, d0, d1);
	set_at<32, 256>(result, det_rd1_res);
	hw_uint<32>  det_rd2_res = det_rd2_select(lgyy8, d0, d1);
	set_at<64, 256>(result, det_rd2_res);
	hw_uint<32>  det_rd3_res = det_rd3_select(lgyy8, d0, d1);
	set_at<96, 256>(result, det_rd3_res);
	hw_uint<32>  det_rd4_res = det_rd4_select(lgyy8, d0, d1);
	set_at<128, 256>(result, det_rd4_res);
	hw_uint<32>  det_rd5_res = det_rd5_select(lgyy8, d0, d1);
	set_at<160, 256>(result, det_rd5_res);
	hw_uint<32>  det_rd6_res = det_rd6_select(lgyy8, d0, d1);
	set_at<192, 256>(result, det_rd6_res);
	hw_uint<32>  det_rd7_res = det_rd7_select(lgyy8, d0, d1);
	set_at<224, 256>(result, det_rd7_res);
	return result;
}

// lgyy8_update_0_write
//	lgyy8_lgyy8_update_0_write0
//	lgyy8_lgyy8_update_0_write1
//	lgyy8_lgyy8_update_0_write2
//	lgyy8_lgyy8_update_0_write3
//	lgyy8_lgyy8_update_0_write4
//	lgyy8_lgyy8_update_0_write5
//	lgyy8_lgyy8_update_0_write6
//	lgyy8_lgyy8_update_0_write7
inline void lgyy8_lgyy8_update_0_write_bundle_write(hw_uint<256>& lgyy8_update_0_write, lgyy8_cache& lgyy8, int d0, int d1) {
	hw_uint<32>  lgyy8_lgyy8_update_0_write0_res = lgyy8_update_0_write.extract<0, 31>();
	lgyy8_lgyy8_update_0_write0_write(lgyy8_lgyy8_update_0_write0_res, lgyy8, d0, d1);
	hw_uint<32>  lgyy8_lgyy8_update_0_write1_res = lgyy8_update_0_write.extract<32, 63>();
	lgyy8_lgyy8_update_0_write1_write(lgyy8_lgyy8_update_0_write1_res, lgyy8, d0, d1);
	hw_uint<32>  lgyy8_lgyy8_update_0_write2_res = lgyy8_update_0_write.extract<64, 95>();
	lgyy8_lgyy8_update_0_write2_write(lgyy8_lgyy8_update_0_write2_res, lgyy8, d0, d1);
	hw_uint<32>  lgyy8_lgyy8_update_0_write3_res = lgyy8_update_0_write.extract<96, 127>();
	lgyy8_lgyy8_update_0_write3_write(lgyy8_lgyy8_update_0_write3_res, lgyy8, d0, d1);
	hw_uint<32>  lgyy8_lgyy8_update_0_write4_res = lgyy8_update_0_write.extract<128, 159>();
	lgyy8_lgyy8_update_0_write4_write(lgyy8_lgyy8_update_0_write4_res, lgyy8, d0, d1);
	hw_uint<32>  lgyy8_lgyy8_update_0_write5_res = lgyy8_update_0_write.extract<160, 191>();
	lgyy8_lgyy8_update_0_write5_write(lgyy8_lgyy8_update_0_write5_res, lgyy8, d0, d1);
	hw_uint<32>  lgyy8_lgyy8_update_0_write6_res = lgyy8_update_0_write.extract<192, 223>();
	lgyy8_lgyy8_update_0_write6_write(lgyy8_lgyy8_update_0_write6_res, lgyy8, d0, d1);
	hw_uint<32>  lgyy8_lgyy8_update_0_write7_res = lgyy8_update_0_write.extract<224, 255>();
	lgyy8_lgyy8_update_0_write7_write(lgyy8_lgyy8_update_0_write7_res, lgyy8, d0, d1);
}

// trace_update_0_read
//	trace_rd0
//	trace_rd1
//	trace_rd2
//	trace_rd3
//	trace_rd4
//	trace_rd5
//	trace_rd6
//	trace_rd7
inline hw_uint<256> lgyy8_trace_update_0_read_bundle_read(lgyy8_cache& lgyy8, int d0, int d1) {
  // # of ports in bundle: 8
    // trace_rd0
    // trace_rd1
    // trace_rd2
    // trace_rd3
    // trace_rd4
    // trace_rd5
    // trace_rd6
    // trace_rd7

	hw_uint<256> result;
	hw_uint<32>  trace_rd0_res = trace_rd0_select(lgyy8, d0, d1);
	set_at<0, 256>(result, trace_rd0_res);
	hw_uint<32>  trace_rd1_res = trace_rd1_select(lgyy8, d0, d1);
	set_at<32, 256>(result, trace_rd1_res);
	hw_uint<32>  trace_rd2_res = trace_rd2_select(lgyy8, d0, d1);
	set_at<64, 256>(result, trace_rd2_res);
	hw_uint<32>  trace_rd3_res = trace_rd3_select(lgyy8, d0, d1);
	set_at<96, 256>(result, trace_rd3_res);
	hw_uint<32>  trace_rd4_res = trace_rd4_select(lgyy8, d0, d1);
	set_at<128, 256>(result, trace_rd4_res);
	hw_uint<32>  trace_rd5_res = trace_rd5_select(lgyy8, d0, d1);
	set_at<160, 256>(result, trace_rd5_res);
	hw_uint<32>  trace_rd6_res = trace_rd6_select(lgyy8, d0, d1);
	set_at<192, 256>(result, trace_rd6_res);
	hw_uint<32>  trace_rd7_res = trace_rd7_select(lgyy8, d0, d1);
	set_at<224, 256>(result, trace_rd7_res);
	return result;
}

#include "hw_classes.h"

struct lxx_lxx_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-8, 1920], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 240> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 240> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_242() {
		return f4;
	}

	inline hw_uint<32>  peek_243() {
		return f6;
	}

	inline hw_uint<32>  peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_484() {
		return f8;
	}

	inline hw_uint<32>  peek_485() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxx_lxx_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-7, 1921], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxx_lxx_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[-6, 1922], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxx_lxx_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[-5, 1923], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxx_lxx_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[-4, 1924], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxx_lxx_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[-3, 1925], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxx_lxx_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[-2, 1926], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxx_lxx_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[-1, 1927], [-1, 1080]}
	// Capacity: 487
	// # of read delays: 7
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 240> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 240> f9;
	hw_uint<32>  f10;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_243() {
		return f6;
	}

	inline hw_uint<32>  peek_244() {
		return f8;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_485() {
		return f10;
	}

	inline hw_uint<32>  peek_486() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f5.push(f4);
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

struct lxx_cache {
  lxx_lxx_update_0_write0_merged_banks_9_cache lxx_lxx_update_0_write0_merged_banks_9;
  lxx_lxx_update_0_write1_merged_banks_9_cache lxx_lxx_update_0_write1_merged_banks_9;
  lxx_lxx_update_0_write2_merged_banks_9_cache lxx_lxx_update_0_write2_merged_banks_9;
  lxx_lxx_update_0_write3_merged_banks_9_cache lxx_lxx_update_0_write3_merged_banks_9;
  lxx_lxx_update_0_write4_merged_banks_9_cache lxx_lxx_update_0_write4_merged_banks_9;
  lxx_lxx_update_0_write5_merged_banks_9_cache lxx_lxx_update_0_write5_merged_banks_9;
  lxx_lxx_update_0_write6_merged_banks_9_cache lxx_lxx_update_0_write6_merged_banks_9;
  lxx_lxx_update_0_write7_merged_banks_9_cache lxx_lxx_update_0_write7_merged_banks_9;
};



inline void lxx_lxx_update_0_write0_write(hw_uint<32> & lxx_lxx_update_0_write0, lxx_cache& lxx, int d0, int d1) {
  lxx.lxx_lxx_update_0_write0_merged_banks_9.push(lxx_lxx_update_0_write0);
}

inline void lxx_lxx_update_0_write1_write(hw_uint<32> & lxx_lxx_update_0_write1, lxx_cache& lxx, int d0, int d1) {
  lxx.lxx_lxx_update_0_write1_merged_banks_9.push(lxx_lxx_update_0_write1);
}

inline void lxx_lxx_update_0_write2_write(hw_uint<32> & lxx_lxx_update_0_write2, lxx_cache& lxx, int d0, int d1) {
  lxx.lxx_lxx_update_0_write2_merged_banks_9.push(lxx_lxx_update_0_write2);
}

inline void lxx_lxx_update_0_write3_write(hw_uint<32> & lxx_lxx_update_0_write3, lxx_cache& lxx, int d0, int d1) {
  lxx.lxx_lxx_update_0_write3_merged_banks_9.push(lxx_lxx_update_0_write3);
}

inline void lxx_lxx_update_0_write4_write(hw_uint<32> & lxx_lxx_update_0_write4, lxx_cache& lxx, int d0, int d1) {
  lxx.lxx_lxx_update_0_write4_merged_banks_9.push(lxx_lxx_update_0_write4);
}

inline void lxx_lxx_update_0_write5_write(hw_uint<32> & lxx_lxx_update_0_write5, lxx_cache& lxx, int d0, int d1) {
  lxx.lxx_lxx_update_0_write5_merged_banks_9.push(lxx_lxx_update_0_write5);
}

inline void lxx_lxx_update_0_write6_write(hw_uint<32> & lxx_lxx_update_0_write6, lxx_cache& lxx, int d0, int d1) {
  lxx.lxx_lxx_update_0_write6_merged_banks_9.push(lxx_lxx_update_0_write6);
}

inline void lxx_lxx_update_0_write7_write(hw_uint<32> & lxx_lxx_update_0_write7, lxx_cache& lxx, int d0, int d1) {
  lxx.lxx_lxx_update_0_write7_merged_banks_9.push(lxx_lxx_update_0_write7);
}

inline hw_uint<32>  lgxx_rd0_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd0 read pattern: { lgxx_update_0[d0, d1] -> lxx[-1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 486 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write7 = lxx.lxx_lxx_update_0_write7_merged_banks_9.peek_486();
  return value_lxx_lxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd1_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd1 read pattern: { lgxx_update_0[d0, d1] -> lxx[-1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 244 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write7 = lxx.lxx_lxx_update_0_write7_merged_banks_9.peek_244();
  return value_lxx_lxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd10_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd10 read pattern: { lgxx_update_0[d0, d1] -> lxx[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write0 = lxx.lxx_lxx_update_0_write0_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd11_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd11 read pattern: { lgxx_update_0[d0, d1] -> lxx[8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write0 = lxx.lxx_lxx_update_0_write0_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd12_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd12 read pattern: { lgxx_update_0[d0, d1] -> lxx[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write1 = lxx.lxx_lxx_update_0_write1_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd13_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd13 read pattern: { lgxx_update_0[d0, d1] -> lxx[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write1 = lxx.lxx_lxx_update_0_write1_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd14_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd14 read pattern: { lgxx_update_0[d0, d1] -> lxx[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write1 = lxx.lxx_lxx_update_0_write1_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd15_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd15 read pattern: { lgxx_update_0[d0, d1] -> lxx[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write2 = lxx.lxx_lxx_update_0_write2_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd16_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd16 read pattern: { lgxx_update_0[d0, d1] -> lxx[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write2 = lxx.lxx_lxx_update_0_write2_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd17_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd17 read pattern: { lgxx_update_0[d0, d1] -> lxx[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write2 = lxx.lxx_lxx_update_0_write2_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd18_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd18 read pattern: { lgxx_update_0[d0, d1] -> lxx[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write1 = lxx.lxx_lxx_update_0_write1_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd19_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd19 read pattern: { lgxx_update_0[d0, d1] -> lxx[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write1 = lxx.lxx_lxx_update_0_write1_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd2_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd2 read pattern: { lgxx_update_0[d0, d1] -> lxx[-1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 2 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write7 = lxx.lxx_lxx_update_0_write7_merged_banks_9.peek_2();
  return value_lxx_lxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd20_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd20 read pattern: { lgxx_update_0[d0, d1] -> lxx[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write1 = lxx.lxx_lxx_update_0_write1_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd21_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd21 read pattern: { lgxx_update_0[d0, d1] -> lxx[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write2 = lxx.lxx_lxx_update_0_write2_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd22_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd22 read pattern: { lgxx_update_0[d0, d1] -> lxx[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write2 = lxx.lxx_lxx_update_0_write2_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd23_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd23 read pattern: { lgxx_update_0[d0, d1] -> lxx[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write2 = lxx.lxx_lxx_update_0_write2_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd24_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd24 read pattern: { lgxx_update_0[d0, d1] -> lxx[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write3 = lxx.lxx_lxx_update_0_write3_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd25_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd25 read pattern: { lgxx_update_0[d0, d1] -> lxx[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write3 = lxx.lxx_lxx_update_0_write3_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd26_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd26 read pattern: { lgxx_update_0[d0, d1] -> lxx[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write3 = lxx.lxx_lxx_update_0_write3_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd27_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd27 read pattern: { lgxx_update_0[d0, d1] -> lxx[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write2 = lxx.lxx_lxx_update_0_write2_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd28_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd28 read pattern: { lgxx_update_0[d0, d1] -> lxx[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write2 = lxx.lxx_lxx_update_0_write2_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd29_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd29 read pattern: { lgxx_update_0[d0, d1] -> lxx[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write2 = lxx.lxx_lxx_update_0_write2_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd3_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd3 read pattern: { lgxx_update_0[d0, d1] -> lxx[8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write0 = lxx.lxx_lxx_update_0_write0_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd30_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd30 read pattern: { lgxx_update_0[d0, d1] -> lxx[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write3 = lxx.lxx_lxx_update_0_write3_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd31_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd31 read pattern: { lgxx_update_0[d0, d1] -> lxx[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write3 = lxx.lxx_lxx_update_0_write3_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd32_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd32 read pattern: { lgxx_update_0[d0, d1] -> lxx[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write3 = lxx.lxx_lxx_update_0_write3_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd33_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd33 read pattern: { lgxx_update_0[d0, d1] -> lxx[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write4 = lxx.lxx_lxx_update_0_write4_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd34_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd34 read pattern: { lgxx_update_0[d0, d1] -> lxx[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write4 = lxx.lxx_lxx_update_0_write4_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd35_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd35 read pattern: { lgxx_update_0[d0, d1] -> lxx[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write4 = lxx.lxx_lxx_update_0_write4_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd36_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd36 read pattern: { lgxx_update_0[d0, d1] -> lxx[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write3 = lxx.lxx_lxx_update_0_write3_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd37_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd37 read pattern: { lgxx_update_0[d0, d1] -> lxx[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write3 = lxx.lxx_lxx_update_0_write3_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd38_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd38 read pattern: { lgxx_update_0[d0, d1] -> lxx[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write3 = lxx.lxx_lxx_update_0_write3_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd39_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd39 read pattern: { lgxx_update_0[d0, d1] -> lxx[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write4 = lxx.lxx_lxx_update_0_write4_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd4_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd4 read pattern: { lgxx_update_0[d0, d1] -> lxx[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write0 = lxx.lxx_lxx_update_0_write0_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd40_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd40 read pattern: { lgxx_update_0[d0, d1] -> lxx[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write4 = lxx.lxx_lxx_update_0_write4_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd41_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd41 read pattern: { lgxx_update_0[d0, d1] -> lxx[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write4 = lxx.lxx_lxx_update_0_write4_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd42_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd42 read pattern: { lgxx_update_0[d0, d1] -> lxx[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write5 = lxx.lxx_lxx_update_0_write5_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd43_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd43 read pattern: { lgxx_update_0[d0, d1] -> lxx[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write5 = lxx.lxx_lxx_update_0_write5_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd44_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd44 read pattern: { lgxx_update_0[d0, d1] -> lxx[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write5 = lxx.lxx_lxx_update_0_write5_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd45_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd45 read pattern: { lgxx_update_0[d0, d1] -> lxx[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write4 = lxx.lxx_lxx_update_0_write4_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd46_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd46 read pattern: { lgxx_update_0[d0, d1] -> lxx[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write4 = lxx.lxx_lxx_update_0_write4_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd47_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd47 read pattern: { lgxx_update_0[d0, d1] -> lxx[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write4 = lxx.lxx_lxx_update_0_write4_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd48_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd48 read pattern: { lgxx_update_0[d0, d1] -> lxx[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write5 = lxx.lxx_lxx_update_0_write5_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd49_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd49 read pattern: { lgxx_update_0[d0, d1] -> lxx[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write5 = lxx.lxx_lxx_update_0_write5_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd5_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd5 read pattern: { lgxx_update_0[d0, d1] -> lxx[8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write0 = lxx.lxx_lxx_update_0_write0_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd50_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd50 read pattern: { lgxx_update_0[d0, d1] -> lxx[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write5 = lxx.lxx_lxx_update_0_write5_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd51_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd51 read pattern: { lgxx_update_0[d0, d1] -> lxx[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write6 = lxx.lxx_lxx_update_0_write6_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd52_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd52 read pattern: { lgxx_update_0[d0, d1] -> lxx[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write6 = lxx.lxx_lxx_update_0_write6_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd53_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd53 read pattern: { lgxx_update_0[d0, d1] -> lxx[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write6 = lxx.lxx_lxx_update_0_write6_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd54_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd54 read pattern: { lgxx_update_0[d0, d1] -> lxx[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write5 = lxx.lxx_lxx_update_0_write5_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd55_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd55 read pattern: { lgxx_update_0[d0, d1] -> lxx[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write5 = lxx.lxx_lxx_update_0_write5_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd56_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd56 read pattern: { lgxx_update_0[d0, d1] -> lxx[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write5 = lxx.lxx_lxx_update_0_write5_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd57_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd57 read pattern: { lgxx_update_0[d0, d1] -> lxx[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write6 = lxx.lxx_lxx_update_0_write6_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd58_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd58 read pattern: { lgxx_update_0[d0, d1] -> lxx[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write6 = lxx.lxx_lxx_update_0_write6_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd59_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd59 read pattern: { lgxx_update_0[d0, d1] -> lxx[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write6 = lxx.lxx_lxx_update_0_write6_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd6_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd6 read pattern: { lgxx_update_0[d0, d1] -> lxx[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write1 = lxx.lxx_lxx_update_0_write1_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd60_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd60 read pattern: { lgxx_update_0[d0, d1] -> lxx[7 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write7 = lxx.lxx_lxx_update_0_write7_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd61_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd61 read pattern: { lgxx_update_0[d0, d1] -> lxx[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write7 = lxx.lxx_lxx_update_0_write7_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd62_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd62 read pattern: { lgxx_update_0[d0, d1] -> lxx[7 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write7 = lxx.lxx_lxx_update_0_write7_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd63_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd63 read pattern: { lgxx_update_0[d0, d1] -> lxx[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write6 = lxx.lxx_lxx_update_0_write6_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd64_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd64 read pattern: { lgxx_update_0[d0, d1] -> lxx[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write6 = lxx.lxx_lxx_update_0_write6_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd65_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd65 read pattern: { lgxx_update_0[d0, d1] -> lxx[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write6 = lxx.lxx_lxx_update_0_write6_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd66_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd66 read pattern: { lgxx_update_0[d0, d1] -> lxx[7 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write7 = lxx.lxx_lxx_update_0_write7_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd67_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd67 read pattern: { lgxx_update_0[d0, d1] -> lxx[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write7 = lxx.lxx_lxx_update_0_write7_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd68_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd68 read pattern: { lgxx_update_0[d0, d1] -> lxx[7 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write7 = lxx.lxx_lxx_update_0_write7_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd69_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd69 read pattern: { lgxx_update_0[d0, d1] -> lxx[8 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 484 : 0 <= d0 <= 238 and 0 <= d1 <= 1079; lgxx_update_0[d0, d1] -> (245 + d0) : d0 = 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write0 = lxx.lxx_lxx_update_0_write0_merged_banks_9.peek_484();
  return value_lxx_lxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd7_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd7 read pattern: { lgxx_update_0[d0, d1] -> lxx[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write1 = lxx.lxx_lxx_update_0_write1_merged_banks_9.peek_243();
  return value_lxx_lxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd70_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd70 read pattern: { lgxx_update_0[d0, d1] -> lxx[8 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 242 : 0 <= d0 <= 238 and 0 <= d1 <= 1079; lgxx_update_0[d0, d1] -> (3 + d0) : d0 = 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write0 = lxx.lxx_lxx_update_0_write0_merged_banks_9.peek_242();
  return value_lxx_lxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd71_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd71 read pattern: { lgxx_update_0[d0, d1] -> lxx[8 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_lxx_lxx_update_0_write0 = lxx.lxx_lxx_update_0_write0_merged_banks_9.peek_0();
  return value_lxx_lxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd8_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd8 read pattern: { lgxx_update_0[d0, d1] -> lxx[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write1 = lxx.lxx_lxx_update_0_write1_merged_banks_9.peek_1();
  return value_lxx_lxx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxx_rd9_select(lxx_cache& lxx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_rd9 read pattern: { lgxx_update_0[d0, d1] -> lxx[8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxx_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxx_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxx_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxx_lxx_update_0_write0 = lxx.lxx_lxx_update_0_write0_merged_banks_9.peek_485();
  return value_lxx_lxx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// lgxx_update_0_read
//	lgxx_rd0
//	lgxx_rd1
//	lgxx_rd2
//	lgxx_rd3
//	lgxx_rd4
//	lgxx_rd5
//	lgxx_rd6
//	lgxx_rd7
//	lgxx_rd8
//	lgxx_rd9
//	lgxx_rd10
//	lgxx_rd11
//	lgxx_rd12
//	lgxx_rd13
//	lgxx_rd14
//	lgxx_rd15
//	lgxx_rd16
//	lgxx_rd17
//	lgxx_rd18
//	lgxx_rd19
//	lgxx_rd20
//	lgxx_rd21
//	lgxx_rd22
//	lgxx_rd23
//	lgxx_rd24
//	lgxx_rd25
//	lgxx_rd26
//	lgxx_rd27
//	lgxx_rd28
//	lgxx_rd29
//	lgxx_rd30
//	lgxx_rd31
//	lgxx_rd32
//	lgxx_rd33
//	lgxx_rd34
//	lgxx_rd35
//	lgxx_rd36
//	lgxx_rd37
//	lgxx_rd38
//	lgxx_rd39
//	lgxx_rd40
//	lgxx_rd41
//	lgxx_rd42
//	lgxx_rd43
//	lgxx_rd44
//	lgxx_rd45
//	lgxx_rd46
//	lgxx_rd47
//	lgxx_rd48
//	lgxx_rd49
//	lgxx_rd50
//	lgxx_rd51
//	lgxx_rd52
//	lgxx_rd53
//	lgxx_rd54
//	lgxx_rd55
//	lgxx_rd56
//	lgxx_rd57
//	lgxx_rd58
//	lgxx_rd59
//	lgxx_rd60
//	lgxx_rd61
//	lgxx_rd62
//	lgxx_rd63
//	lgxx_rd64
//	lgxx_rd65
//	lgxx_rd66
//	lgxx_rd67
//	lgxx_rd68
//	lgxx_rd69
//	lgxx_rd70
//	lgxx_rd71
inline hw_uint<2304> lxx_lgxx_update_0_read_bundle_read(lxx_cache& lxx, int d0, int d1) {
  // # of ports in bundle: 72
    // lgxx_rd0
    // lgxx_rd1
    // lgxx_rd2
    // lgxx_rd3
    // lgxx_rd4
    // lgxx_rd5
    // lgxx_rd6
    // lgxx_rd7
    // lgxx_rd8
    // lgxx_rd9
    // lgxx_rd10
    // lgxx_rd11
    // lgxx_rd12
    // lgxx_rd13
    // lgxx_rd14
    // lgxx_rd15
    // lgxx_rd16
    // lgxx_rd17
    // lgxx_rd18
    // lgxx_rd19
    // lgxx_rd20
    // lgxx_rd21
    // lgxx_rd22
    // lgxx_rd23
    // lgxx_rd24
    // lgxx_rd25
    // lgxx_rd26
    // lgxx_rd27
    // lgxx_rd28
    // lgxx_rd29
    // lgxx_rd30
    // lgxx_rd31
    // lgxx_rd32
    // lgxx_rd33
    // lgxx_rd34
    // lgxx_rd35
    // lgxx_rd36
    // lgxx_rd37
    // lgxx_rd38
    // lgxx_rd39
    // lgxx_rd40
    // lgxx_rd41
    // lgxx_rd42
    // lgxx_rd43
    // lgxx_rd44
    // lgxx_rd45
    // lgxx_rd46
    // lgxx_rd47
    // lgxx_rd48
    // lgxx_rd49
    // lgxx_rd50
    // lgxx_rd51
    // lgxx_rd52
    // lgxx_rd53
    // lgxx_rd54
    // lgxx_rd55
    // lgxx_rd56
    // lgxx_rd57
    // lgxx_rd58
    // lgxx_rd59
    // lgxx_rd60
    // lgxx_rd61
    // lgxx_rd62
    // lgxx_rd63
    // lgxx_rd64
    // lgxx_rd65
    // lgxx_rd66
    // lgxx_rd67
    // lgxx_rd68
    // lgxx_rd69
    // lgxx_rd70
    // lgxx_rd71

	hw_uint<2304> result;
	hw_uint<32>  lgxx_rd0_res = lgxx_rd0_select(lxx, d0, d1);
	set_at<0, 2304>(result, lgxx_rd0_res);
	hw_uint<32>  lgxx_rd1_res = lgxx_rd1_select(lxx, d0, d1);
	set_at<32, 2304>(result, lgxx_rd1_res);
	hw_uint<32>  lgxx_rd2_res = lgxx_rd2_select(lxx, d0, d1);
	set_at<64, 2304>(result, lgxx_rd2_res);
	hw_uint<32>  lgxx_rd3_res = lgxx_rd3_select(lxx, d0, d1);
	set_at<96, 2304>(result, lgxx_rd3_res);
	hw_uint<32>  lgxx_rd4_res = lgxx_rd4_select(lxx, d0, d1);
	set_at<128, 2304>(result, lgxx_rd4_res);
	hw_uint<32>  lgxx_rd5_res = lgxx_rd5_select(lxx, d0, d1);
	set_at<160, 2304>(result, lgxx_rd5_res);
	hw_uint<32>  lgxx_rd6_res = lgxx_rd6_select(lxx, d0, d1);
	set_at<192, 2304>(result, lgxx_rd6_res);
	hw_uint<32>  lgxx_rd7_res = lgxx_rd7_select(lxx, d0, d1);
	set_at<224, 2304>(result, lgxx_rd7_res);
	hw_uint<32>  lgxx_rd8_res = lgxx_rd8_select(lxx, d0, d1);
	set_at<256, 2304>(result, lgxx_rd8_res);
	hw_uint<32>  lgxx_rd9_res = lgxx_rd9_select(lxx, d0, d1);
	set_at<288, 2304>(result, lgxx_rd9_res);
	hw_uint<32>  lgxx_rd10_res = lgxx_rd10_select(lxx, d0, d1);
	set_at<320, 2304>(result, lgxx_rd10_res);
	hw_uint<32>  lgxx_rd11_res = lgxx_rd11_select(lxx, d0, d1);
	set_at<352, 2304>(result, lgxx_rd11_res);
	hw_uint<32>  lgxx_rd12_res = lgxx_rd12_select(lxx, d0, d1);
	set_at<384, 2304>(result, lgxx_rd12_res);
	hw_uint<32>  lgxx_rd13_res = lgxx_rd13_select(lxx, d0, d1);
	set_at<416, 2304>(result, lgxx_rd13_res);
	hw_uint<32>  lgxx_rd14_res = lgxx_rd14_select(lxx, d0, d1);
	set_at<448, 2304>(result, lgxx_rd14_res);
	hw_uint<32>  lgxx_rd15_res = lgxx_rd15_select(lxx, d0, d1);
	set_at<480, 2304>(result, lgxx_rd15_res);
	hw_uint<32>  lgxx_rd16_res = lgxx_rd16_select(lxx, d0, d1);
	set_at<512, 2304>(result, lgxx_rd16_res);
	hw_uint<32>  lgxx_rd17_res = lgxx_rd17_select(lxx, d0, d1);
	set_at<544, 2304>(result, lgxx_rd17_res);
	hw_uint<32>  lgxx_rd18_res = lgxx_rd18_select(lxx, d0, d1);
	set_at<576, 2304>(result, lgxx_rd18_res);
	hw_uint<32>  lgxx_rd19_res = lgxx_rd19_select(lxx, d0, d1);
	set_at<608, 2304>(result, lgxx_rd19_res);
	hw_uint<32>  lgxx_rd20_res = lgxx_rd20_select(lxx, d0, d1);
	set_at<640, 2304>(result, lgxx_rd20_res);
	hw_uint<32>  lgxx_rd21_res = lgxx_rd21_select(lxx, d0, d1);
	set_at<672, 2304>(result, lgxx_rd21_res);
	hw_uint<32>  lgxx_rd22_res = lgxx_rd22_select(lxx, d0, d1);
	set_at<704, 2304>(result, lgxx_rd22_res);
	hw_uint<32>  lgxx_rd23_res = lgxx_rd23_select(lxx, d0, d1);
	set_at<736, 2304>(result, lgxx_rd23_res);
	hw_uint<32>  lgxx_rd24_res = lgxx_rd24_select(lxx, d0, d1);
	set_at<768, 2304>(result, lgxx_rd24_res);
	hw_uint<32>  lgxx_rd25_res = lgxx_rd25_select(lxx, d0, d1);
	set_at<800, 2304>(result, lgxx_rd25_res);
	hw_uint<32>  lgxx_rd26_res = lgxx_rd26_select(lxx, d0, d1);
	set_at<832, 2304>(result, lgxx_rd26_res);
	hw_uint<32>  lgxx_rd27_res = lgxx_rd27_select(lxx, d0, d1);
	set_at<864, 2304>(result, lgxx_rd27_res);
	hw_uint<32>  lgxx_rd28_res = lgxx_rd28_select(lxx, d0, d1);
	set_at<896, 2304>(result, lgxx_rd28_res);
	hw_uint<32>  lgxx_rd29_res = lgxx_rd29_select(lxx, d0, d1);
	set_at<928, 2304>(result, lgxx_rd29_res);
	hw_uint<32>  lgxx_rd30_res = lgxx_rd30_select(lxx, d0, d1);
	set_at<960, 2304>(result, lgxx_rd30_res);
	hw_uint<32>  lgxx_rd31_res = lgxx_rd31_select(lxx, d0, d1);
	set_at<992, 2304>(result, lgxx_rd31_res);
	hw_uint<32>  lgxx_rd32_res = lgxx_rd32_select(lxx, d0, d1);
	set_at<1024, 2304>(result, lgxx_rd32_res);
	hw_uint<32>  lgxx_rd33_res = lgxx_rd33_select(lxx, d0, d1);
	set_at<1056, 2304>(result, lgxx_rd33_res);
	hw_uint<32>  lgxx_rd34_res = lgxx_rd34_select(lxx, d0, d1);
	set_at<1088, 2304>(result, lgxx_rd34_res);
	hw_uint<32>  lgxx_rd35_res = lgxx_rd35_select(lxx, d0, d1);
	set_at<1120, 2304>(result, lgxx_rd35_res);
	hw_uint<32>  lgxx_rd36_res = lgxx_rd36_select(lxx, d0, d1);
	set_at<1152, 2304>(result, lgxx_rd36_res);
	hw_uint<32>  lgxx_rd37_res = lgxx_rd37_select(lxx, d0, d1);
	set_at<1184, 2304>(result, lgxx_rd37_res);
	hw_uint<32>  lgxx_rd38_res = lgxx_rd38_select(lxx, d0, d1);
	set_at<1216, 2304>(result, lgxx_rd38_res);
	hw_uint<32>  lgxx_rd39_res = lgxx_rd39_select(lxx, d0, d1);
	set_at<1248, 2304>(result, lgxx_rd39_res);
	hw_uint<32>  lgxx_rd40_res = lgxx_rd40_select(lxx, d0, d1);
	set_at<1280, 2304>(result, lgxx_rd40_res);
	hw_uint<32>  lgxx_rd41_res = lgxx_rd41_select(lxx, d0, d1);
	set_at<1312, 2304>(result, lgxx_rd41_res);
	hw_uint<32>  lgxx_rd42_res = lgxx_rd42_select(lxx, d0, d1);
	set_at<1344, 2304>(result, lgxx_rd42_res);
	hw_uint<32>  lgxx_rd43_res = lgxx_rd43_select(lxx, d0, d1);
	set_at<1376, 2304>(result, lgxx_rd43_res);
	hw_uint<32>  lgxx_rd44_res = lgxx_rd44_select(lxx, d0, d1);
	set_at<1408, 2304>(result, lgxx_rd44_res);
	hw_uint<32>  lgxx_rd45_res = lgxx_rd45_select(lxx, d0, d1);
	set_at<1440, 2304>(result, lgxx_rd45_res);
	hw_uint<32>  lgxx_rd46_res = lgxx_rd46_select(lxx, d0, d1);
	set_at<1472, 2304>(result, lgxx_rd46_res);
	hw_uint<32>  lgxx_rd47_res = lgxx_rd47_select(lxx, d0, d1);
	set_at<1504, 2304>(result, lgxx_rd47_res);
	hw_uint<32>  lgxx_rd48_res = lgxx_rd48_select(lxx, d0, d1);
	set_at<1536, 2304>(result, lgxx_rd48_res);
	hw_uint<32>  lgxx_rd49_res = lgxx_rd49_select(lxx, d0, d1);
	set_at<1568, 2304>(result, lgxx_rd49_res);
	hw_uint<32>  lgxx_rd50_res = lgxx_rd50_select(lxx, d0, d1);
	set_at<1600, 2304>(result, lgxx_rd50_res);
	hw_uint<32>  lgxx_rd51_res = lgxx_rd51_select(lxx, d0, d1);
	set_at<1632, 2304>(result, lgxx_rd51_res);
	hw_uint<32>  lgxx_rd52_res = lgxx_rd52_select(lxx, d0, d1);
	set_at<1664, 2304>(result, lgxx_rd52_res);
	hw_uint<32>  lgxx_rd53_res = lgxx_rd53_select(lxx, d0, d1);
	set_at<1696, 2304>(result, lgxx_rd53_res);
	hw_uint<32>  lgxx_rd54_res = lgxx_rd54_select(lxx, d0, d1);
	set_at<1728, 2304>(result, lgxx_rd54_res);
	hw_uint<32>  lgxx_rd55_res = lgxx_rd55_select(lxx, d0, d1);
	set_at<1760, 2304>(result, lgxx_rd55_res);
	hw_uint<32>  lgxx_rd56_res = lgxx_rd56_select(lxx, d0, d1);
	set_at<1792, 2304>(result, lgxx_rd56_res);
	hw_uint<32>  lgxx_rd57_res = lgxx_rd57_select(lxx, d0, d1);
	set_at<1824, 2304>(result, lgxx_rd57_res);
	hw_uint<32>  lgxx_rd58_res = lgxx_rd58_select(lxx, d0, d1);
	set_at<1856, 2304>(result, lgxx_rd58_res);
	hw_uint<32>  lgxx_rd59_res = lgxx_rd59_select(lxx, d0, d1);
	set_at<1888, 2304>(result, lgxx_rd59_res);
	hw_uint<32>  lgxx_rd60_res = lgxx_rd60_select(lxx, d0, d1);
	set_at<1920, 2304>(result, lgxx_rd60_res);
	hw_uint<32>  lgxx_rd61_res = lgxx_rd61_select(lxx, d0, d1);
	set_at<1952, 2304>(result, lgxx_rd61_res);
	hw_uint<32>  lgxx_rd62_res = lgxx_rd62_select(lxx, d0, d1);
	set_at<1984, 2304>(result, lgxx_rd62_res);
	hw_uint<32>  lgxx_rd63_res = lgxx_rd63_select(lxx, d0, d1);
	set_at<2016, 2304>(result, lgxx_rd63_res);
	hw_uint<32>  lgxx_rd64_res = lgxx_rd64_select(lxx, d0, d1);
	set_at<2048, 2304>(result, lgxx_rd64_res);
	hw_uint<32>  lgxx_rd65_res = lgxx_rd65_select(lxx, d0, d1);
	set_at<2080, 2304>(result, lgxx_rd65_res);
	hw_uint<32>  lgxx_rd66_res = lgxx_rd66_select(lxx, d0, d1);
	set_at<2112, 2304>(result, lgxx_rd66_res);
	hw_uint<32>  lgxx_rd67_res = lgxx_rd67_select(lxx, d0, d1);
	set_at<2144, 2304>(result, lgxx_rd67_res);
	hw_uint<32>  lgxx_rd68_res = lgxx_rd68_select(lxx, d0, d1);
	set_at<2176, 2304>(result, lgxx_rd68_res);
	hw_uint<32>  lgxx_rd69_res = lgxx_rd69_select(lxx, d0, d1);
	set_at<2208, 2304>(result, lgxx_rd69_res);
	hw_uint<32>  lgxx_rd70_res = lgxx_rd70_select(lxx, d0, d1);
	set_at<2240, 2304>(result, lgxx_rd70_res);
	hw_uint<32>  lgxx_rd71_res = lgxx_rd71_select(lxx, d0, d1);
	set_at<2272, 2304>(result, lgxx_rd71_res);
	return result;
}

// lxx_update_0_write
//	lxx_lxx_update_0_write0
//	lxx_lxx_update_0_write1
//	lxx_lxx_update_0_write2
//	lxx_lxx_update_0_write3
//	lxx_lxx_update_0_write4
//	lxx_lxx_update_0_write5
//	lxx_lxx_update_0_write6
//	lxx_lxx_update_0_write7
inline void lxx_lxx_update_0_write_bundle_write(hw_uint<256>& lxx_update_0_write, lxx_cache& lxx, int d0, int d1) {
	hw_uint<32>  lxx_lxx_update_0_write0_res = lxx_update_0_write.extract<0, 31>();
	lxx_lxx_update_0_write0_write(lxx_lxx_update_0_write0_res, lxx, d0, d1);
	hw_uint<32>  lxx_lxx_update_0_write1_res = lxx_update_0_write.extract<32, 63>();
	lxx_lxx_update_0_write1_write(lxx_lxx_update_0_write1_res, lxx, d0, d1);
	hw_uint<32>  lxx_lxx_update_0_write2_res = lxx_update_0_write.extract<64, 95>();
	lxx_lxx_update_0_write2_write(lxx_lxx_update_0_write2_res, lxx, d0, d1);
	hw_uint<32>  lxx_lxx_update_0_write3_res = lxx_update_0_write.extract<96, 127>();
	lxx_lxx_update_0_write3_write(lxx_lxx_update_0_write3_res, lxx, d0, d1);
	hw_uint<32>  lxx_lxx_update_0_write4_res = lxx_update_0_write.extract<128, 159>();
	lxx_lxx_update_0_write4_write(lxx_lxx_update_0_write4_res, lxx, d0, d1);
	hw_uint<32>  lxx_lxx_update_0_write5_res = lxx_update_0_write.extract<160, 191>();
	lxx_lxx_update_0_write5_write(lxx_lxx_update_0_write5_res, lxx, d0, d1);
	hw_uint<32>  lxx_lxx_update_0_write6_res = lxx_update_0_write.extract<192, 223>();
	lxx_lxx_update_0_write6_write(lxx_lxx_update_0_write6_res, lxx, d0, d1);
	hw_uint<32>  lxx_lxx_update_0_write7_res = lxx_update_0_write.extract<224, 255>();
	lxx_lxx_update_0_write7_write(lxx_lxx_update_0_write7_res, lxx, d0, d1);
}

#include "hw_classes.h"

struct lxy_lxy_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-8, 1920], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 240> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 240> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_242() {
		return f4;
	}

	inline hw_uint<32>  peek_243() {
		return f6;
	}

	inline hw_uint<32>  peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_484() {
		return f8;
	}

	inline hw_uint<32>  peek_485() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxy_lxy_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-7, 1921], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxy_lxy_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[-6, 1922], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxy_lxy_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[-5, 1923], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxy_lxy_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[-4, 1924], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxy_lxy_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[-3, 1925], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxy_lxy_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[-2, 1926], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxy_lxy_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[-1, 1927], [-1, 1080]}
	// Capacity: 487
	// # of read delays: 7
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 240> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 240> f9;
	hw_uint<32>  f10;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_243() {
		return f6;
	}

	inline hw_uint<32>  peek_244() {
		return f8;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_485() {
		return f10;
	}

	inline hw_uint<32>  peek_486() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f5.push(f4);
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

struct lxy_cache {
  lxy_lxy_update_0_write0_merged_banks_9_cache lxy_lxy_update_0_write0_merged_banks_9;
  lxy_lxy_update_0_write1_merged_banks_9_cache lxy_lxy_update_0_write1_merged_banks_9;
  lxy_lxy_update_0_write2_merged_banks_9_cache lxy_lxy_update_0_write2_merged_banks_9;
  lxy_lxy_update_0_write3_merged_banks_9_cache lxy_lxy_update_0_write3_merged_banks_9;
  lxy_lxy_update_0_write4_merged_banks_9_cache lxy_lxy_update_0_write4_merged_banks_9;
  lxy_lxy_update_0_write5_merged_banks_9_cache lxy_lxy_update_0_write5_merged_banks_9;
  lxy_lxy_update_0_write6_merged_banks_9_cache lxy_lxy_update_0_write6_merged_banks_9;
  lxy_lxy_update_0_write7_merged_banks_9_cache lxy_lxy_update_0_write7_merged_banks_9;
};



inline void lxy_lxy_update_0_write0_write(hw_uint<32> & lxy_lxy_update_0_write0, lxy_cache& lxy, int d0, int d1) {
  lxy.lxy_lxy_update_0_write0_merged_banks_9.push(lxy_lxy_update_0_write0);
}

inline void lxy_lxy_update_0_write1_write(hw_uint<32> & lxy_lxy_update_0_write1, lxy_cache& lxy, int d0, int d1) {
  lxy.lxy_lxy_update_0_write1_merged_banks_9.push(lxy_lxy_update_0_write1);
}

inline void lxy_lxy_update_0_write2_write(hw_uint<32> & lxy_lxy_update_0_write2, lxy_cache& lxy, int d0, int d1) {
  lxy.lxy_lxy_update_0_write2_merged_banks_9.push(lxy_lxy_update_0_write2);
}

inline void lxy_lxy_update_0_write3_write(hw_uint<32> & lxy_lxy_update_0_write3, lxy_cache& lxy, int d0, int d1) {
  lxy.lxy_lxy_update_0_write3_merged_banks_9.push(lxy_lxy_update_0_write3);
}

inline void lxy_lxy_update_0_write4_write(hw_uint<32> & lxy_lxy_update_0_write4, lxy_cache& lxy, int d0, int d1) {
  lxy.lxy_lxy_update_0_write4_merged_banks_9.push(lxy_lxy_update_0_write4);
}

inline void lxy_lxy_update_0_write5_write(hw_uint<32> & lxy_lxy_update_0_write5, lxy_cache& lxy, int d0, int d1) {
  lxy.lxy_lxy_update_0_write5_merged_banks_9.push(lxy_lxy_update_0_write5);
}

inline void lxy_lxy_update_0_write6_write(hw_uint<32> & lxy_lxy_update_0_write6, lxy_cache& lxy, int d0, int d1) {
  lxy.lxy_lxy_update_0_write6_merged_banks_9.push(lxy_lxy_update_0_write6);
}

inline void lxy_lxy_update_0_write7_write(hw_uint<32> & lxy_lxy_update_0_write7, lxy_cache& lxy, int d0, int d1) {
  lxy.lxy_lxy_update_0_write7_merged_banks_9.push(lxy_lxy_update_0_write7);
}

inline hw_uint<32>  lgxy_rd0_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd0 read pattern: { lgxy_update_0[d0, d1] -> lxy[-1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 486 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write7 = lxy.lxy_lxy_update_0_write7_merged_banks_9.peek_486();
  return value_lxy_lxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd1_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd1 read pattern: { lgxy_update_0[d0, d1] -> lxy[-1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 244 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write7 = lxy.lxy_lxy_update_0_write7_merged_banks_9.peek_244();
  return value_lxy_lxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd10_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd10 read pattern: { lgxy_update_0[d0, d1] -> lxy[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write0 = lxy.lxy_lxy_update_0_write0_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd11_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd11 read pattern: { lgxy_update_0[d0, d1] -> lxy[8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write0 = lxy.lxy_lxy_update_0_write0_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd12_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd12 read pattern: { lgxy_update_0[d0, d1] -> lxy[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write1 = lxy.lxy_lxy_update_0_write1_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd13_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd13 read pattern: { lgxy_update_0[d0, d1] -> lxy[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write1 = lxy.lxy_lxy_update_0_write1_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd14_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd14 read pattern: { lgxy_update_0[d0, d1] -> lxy[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write1 = lxy.lxy_lxy_update_0_write1_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd15_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd15 read pattern: { lgxy_update_0[d0, d1] -> lxy[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write2 = lxy.lxy_lxy_update_0_write2_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd16_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd16 read pattern: { lgxy_update_0[d0, d1] -> lxy[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write2 = lxy.lxy_lxy_update_0_write2_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd17_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd17 read pattern: { lgxy_update_0[d0, d1] -> lxy[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write2 = lxy.lxy_lxy_update_0_write2_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd18_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd18 read pattern: { lgxy_update_0[d0, d1] -> lxy[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write1 = lxy.lxy_lxy_update_0_write1_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd19_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd19 read pattern: { lgxy_update_0[d0, d1] -> lxy[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write1 = lxy.lxy_lxy_update_0_write1_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd2_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd2 read pattern: { lgxy_update_0[d0, d1] -> lxy[-1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 2 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write7 = lxy.lxy_lxy_update_0_write7_merged_banks_9.peek_2();
  return value_lxy_lxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd20_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd20 read pattern: { lgxy_update_0[d0, d1] -> lxy[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write1 = lxy.lxy_lxy_update_0_write1_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd21_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd21 read pattern: { lgxy_update_0[d0, d1] -> lxy[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write2 = lxy.lxy_lxy_update_0_write2_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd22_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd22 read pattern: { lgxy_update_0[d0, d1] -> lxy[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write2 = lxy.lxy_lxy_update_0_write2_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd23_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd23 read pattern: { lgxy_update_0[d0, d1] -> lxy[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write2 = lxy.lxy_lxy_update_0_write2_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd24_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd24 read pattern: { lgxy_update_0[d0, d1] -> lxy[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write3 = lxy.lxy_lxy_update_0_write3_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd25_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd25 read pattern: { lgxy_update_0[d0, d1] -> lxy[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write3 = lxy.lxy_lxy_update_0_write3_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd26_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd26 read pattern: { lgxy_update_0[d0, d1] -> lxy[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write3 = lxy.lxy_lxy_update_0_write3_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd27_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd27 read pattern: { lgxy_update_0[d0, d1] -> lxy[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write2 = lxy.lxy_lxy_update_0_write2_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd28_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd28 read pattern: { lgxy_update_0[d0, d1] -> lxy[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write2 = lxy.lxy_lxy_update_0_write2_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd29_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd29 read pattern: { lgxy_update_0[d0, d1] -> lxy[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write2 = lxy.lxy_lxy_update_0_write2_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd3_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd3 read pattern: { lgxy_update_0[d0, d1] -> lxy[8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write0 = lxy.lxy_lxy_update_0_write0_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd30_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd30 read pattern: { lgxy_update_0[d0, d1] -> lxy[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write3 = lxy.lxy_lxy_update_0_write3_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd31_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd31 read pattern: { lgxy_update_0[d0, d1] -> lxy[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write3 = lxy.lxy_lxy_update_0_write3_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd32_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd32 read pattern: { lgxy_update_0[d0, d1] -> lxy[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write3 = lxy.lxy_lxy_update_0_write3_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd33_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd33 read pattern: { lgxy_update_0[d0, d1] -> lxy[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write4 = lxy.lxy_lxy_update_0_write4_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd34_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd34 read pattern: { lgxy_update_0[d0, d1] -> lxy[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write4 = lxy.lxy_lxy_update_0_write4_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd35_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd35 read pattern: { lgxy_update_0[d0, d1] -> lxy[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write4 = lxy.lxy_lxy_update_0_write4_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd36_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd36 read pattern: { lgxy_update_0[d0, d1] -> lxy[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write3 = lxy.lxy_lxy_update_0_write3_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd37_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd37 read pattern: { lgxy_update_0[d0, d1] -> lxy[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write3 = lxy.lxy_lxy_update_0_write3_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd38_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd38 read pattern: { lgxy_update_0[d0, d1] -> lxy[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write3 = lxy.lxy_lxy_update_0_write3_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd39_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd39 read pattern: { lgxy_update_0[d0, d1] -> lxy[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write4 = lxy.lxy_lxy_update_0_write4_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd4_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd4 read pattern: { lgxy_update_0[d0, d1] -> lxy[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write0 = lxy.lxy_lxy_update_0_write0_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd40_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd40 read pattern: { lgxy_update_0[d0, d1] -> lxy[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write4 = lxy.lxy_lxy_update_0_write4_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd41_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd41 read pattern: { lgxy_update_0[d0, d1] -> lxy[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write4 = lxy.lxy_lxy_update_0_write4_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd42_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd42 read pattern: { lgxy_update_0[d0, d1] -> lxy[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write5 = lxy.lxy_lxy_update_0_write5_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd43_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd43 read pattern: { lgxy_update_0[d0, d1] -> lxy[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write5 = lxy.lxy_lxy_update_0_write5_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd44_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd44 read pattern: { lgxy_update_0[d0, d1] -> lxy[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write5 = lxy.lxy_lxy_update_0_write5_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd45_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd45 read pattern: { lgxy_update_0[d0, d1] -> lxy[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write4 = lxy.lxy_lxy_update_0_write4_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd46_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd46 read pattern: { lgxy_update_0[d0, d1] -> lxy[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write4 = lxy.lxy_lxy_update_0_write4_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd47_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd47 read pattern: { lgxy_update_0[d0, d1] -> lxy[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write4 = lxy.lxy_lxy_update_0_write4_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd48_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd48 read pattern: { lgxy_update_0[d0, d1] -> lxy[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write5 = lxy.lxy_lxy_update_0_write5_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd49_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd49 read pattern: { lgxy_update_0[d0, d1] -> lxy[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write5 = lxy.lxy_lxy_update_0_write5_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd5_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd5 read pattern: { lgxy_update_0[d0, d1] -> lxy[8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write0 = lxy.lxy_lxy_update_0_write0_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd50_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd50 read pattern: { lgxy_update_0[d0, d1] -> lxy[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write5 = lxy.lxy_lxy_update_0_write5_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd51_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd51 read pattern: { lgxy_update_0[d0, d1] -> lxy[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write6 = lxy.lxy_lxy_update_0_write6_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd52_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd52 read pattern: { lgxy_update_0[d0, d1] -> lxy[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write6 = lxy.lxy_lxy_update_0_write6_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd53_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd53 read pattern: { lgxy_update_0[d0, d1] -> lxy[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write6 = lxy.lxy_lxy_update_0_write6_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd54_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd54 read pattern: { lgxy_update_0[d0, d1] -> lxy[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write5 = lxy.lxy_lxy_update_0_write5_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd55_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd55 read pattern: { lgxy_update_0[d0, d1] -> lxy[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write5 = lxy.lxy_lxy_update_0_write5_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd56_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd56 read pattern: { lgxy_update_0[d0, d1] -> lxy[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write5 = lxy.lxy_lxy_update_0_write5_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd57_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd57 read pattern: { lgxy_update_0[d0, d1] -> lxy[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write6 = lxy.lxy_lxy_update_0_write6_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd58_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd58 read pattern: { lgxy_update_0[d0, d1] -> lxy[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write6 = lxy.lxy_lxy_update_0_write6_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd59_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd59 read pattern: { lgxy_update_0[d0, d1] -> lxy[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write6 = lxy.lxy_lxy_update_0_write6_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd6_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd6 read pattern: { lgxy_update_0[d0, d1] -> lxy[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write1 = lxy.lxy_lxy_update_0_write1_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd60_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd60 read pattern: { lgxy_update_0[d0, d1] -> lxy[7 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write7 = lxy.lxy_lxy_update_0_write7_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd61_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd61 read pattern: { lgxy_update_0[d0, d1] -> lxy[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write7 = lxy.lxy_lxy_update_0_write7_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd62_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd62 read pattern: { lgxy_update_0[d0, d1] -> lxy[7 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write7 = lxy.lxy_lxy_update_0_write7_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd63_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd63 read pattern: { lgxy_update_0[d0, d1] -> lxy[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write6 = lxy.lxy_lxy_update_0_write6_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd64_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd64 read pattern: { lgxy_update_0[d0, d1] -> lxy[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write6 = lxy.lxy_lxy_update_0_write6_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd65_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd65 read pattern: { lgxy_update_0[d0, d1] -> lxy[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write6 = lxy.lxy_lxy_update_0_write6_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd66_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd66 read pattern: { lgxy_update_0[d0, d1] -> lxy[7 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write7 = lxy.lxy_lxy_update_0_write7_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd67_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd67 read pattern: { lgxy_update_0[d0, d1] -> lxy[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write7 = lxy.lxy_lxy_update_0_write7_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd68_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd68 read pattern: { lgxy_update_0[d0, d1] -> lxy[7 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write7 = lxy.lxy_lxy_update_0_write7_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd69_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd69 read pattern: { lgxy_update_0[d0, d1] -> lxy[8 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 484 : 0 <= d0 <= 238 and 0 <= d1 <= 1079; lgxy_update_0[d0, d1] -> (245 + d0) : d0 = 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write0 = lxy.lxy_lxy_update_0_write0_merged_banks_9.peek_484();
  return value_lxy_lxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd7_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd7 read pattern: { lgxy_update_0[d0, d1] -> lxy[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write1 = lxy.lxy_lxy_update_0_write1_merged_banks_9.peek_243();
  return value_lxy_lxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd70_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd70 read pattern: { lgxy_update_0[d0, d1] -> lxy[8 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 242 : 0 <= d0 <= 238 and 0 <= d1 <= 1079; lgxy_update_0[d0, d1] -> (3 + d0) : d0 = 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write0 = lxy.lxy_lxy_update_0_write0_merged_banks_9.peek_242();
  return value_lxy_lxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd71_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd71 read pattern: { lgxy_update_0[d0, d1] -> lxy[8 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_lxy_lxy_update_0_write0 = lxy.lxy_lxy_update_0_write0_merged_banks_9.peek_0();
  return value_lxy_lxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd8_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd8 read pattern: { lgxy_update_0[d0, d1] -> lxy[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write1 = lxy.lxy_lxy_update_0_write1_merged_banks_9.peek_1();
  return value_lxy_lxy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgxy_rd9_select(lxy_cache& lxy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_rd9 read pattern: { lgxy_update_0[d0, d1] -> lxy[8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgxy_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lxy_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgxy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lxy_lxy_update_0_write0 = lxy.lxy_lxy_update_0_write0_merged_banks_9.peek_485();
  return value_lxy_lxy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// lgxy_update_0_read
//	lgxy_rd0
//	lgxy_rd1
//	lgxy_rd2
//	lgxy_rd3
//	lgxy_rd4
//	lgxy_rd5
//	lgxy_rd6
//	lgxy_rd7
//	lgxy_rd8
//	lgxy_rd9
//	lgxy_rd10
//	lgxy_rd11
//	lgxy_rd12
//	lgxy_rd13
//	lgxy_rd14
//	lgxy_rd15
//	lgxy_rd16
//	lgxy_rd17
//	lgxy_rd18
//	lgxy_rd19
//	lgxy_rd20
//	lgxy_rd21
//	lgxy_rd22
//	lgxy_rd23
//	lgxy_rd24
//	lgxy_rd25
//	lgxy_rd26
//	lgxy_rd27
//	lgxy_rd28
//	lgxy_rd29
//	lgxy_rd30
//	lgxy_rd31
//	lgxy_rd32
//	lgxy_rd33
//	lgxy_rd34
//	lgxy_rd35
//	lgxy_rd36
//	lgxy_rd37
//	lgxy_rd38
//	lgxy_rd39
//	lgxy_rd40
//	lgxy_rd41
//	lgxy_rd42
//	lgxy_rd43
//	lgxy_rd44
//	lgxy_rd45
//	lgxy_rd46
//	lgxy_rd47
//	lgxy_rd48
//	lgxy_rd49
//	lgxy_rd50
//	lgxy_rd51
//	lgxy_rd52
//	lgxy_rd53
//	lgxy_rd54
//	lgxy_rd55
//	lgxy_rd56
//	lgxy_rd57
//	lgxy_rd58
//	lgxy_rd59
//	lgxy_rd60
//	lgxy_rd61
//	lgxy_rd62
//	lgxy_rd63
//	lgxy_rd64
//	lgxy_rd65
//	lgxy_rd66
//	lgxy_rd67
//	lgxy_rd68
//	lgxy_rd69
//	lgxy_rd70
//	lgxy_rd71
inline hw_uint<2304> lxy_lgxy_update_0_read_bundle_read(lxy_cache& lxy, int d0, int d1) {
  // # of ports in bundle: 72
    // lgxy_rd0
    // lgxy_rd1
    // lgxy_rd2
    // lgxy_rd3
    // lgxy_rd4
    // lgxy_rd5
    // lgxy_rd6
    // lgxy_rd7
    // lgxy_rd8
    // lgxy_rd9
    // lgxy_rd10
    // lgxy_rd11
    // lgxy_rd12
    // lgxy_rd13
    // lgxy_rd14
    // lgxy_rd15
    // lgxy_rd16
    // lgxy_rd17
    // lgxy_rd18
    // lgxy_rd19
    // lgxy_rd20
    // lgxy_rd21
    // lgxy_rd22
    // lgxy_rd23
    // lgxy_rd24
    // lgxy_rd25
    // lgxy_rd26
    // lgxy_rd27
    // lgxy_rd28
    // lgxy_rd29
    // lgxy_rd30
    // lgxy_rd31
    // lgxy_rd32
    // lgxy_rd33
    // lgxy_rd34
    // lgxy_rd35
    // lgxy_rd36
    // lgxy_rd37
    // lgxy_rd38
    // lgxy_rd39
    // lgxy_rd40
    // lgxy_rd41
    // lgxy_rd42
    // lgxy_rd43
    // lgxy_rd44
    // lgxy_rd45
    // lgxy_rd46
    // lgxy_rd47
    // lgxy_rd48
    // lgxy_rd49
    // lgxy_rd50
    // lgxy_rd51
    // lgxy_rd52
    // lgxy_rd53
    // lgxy_rd54
    // lgxy_rd55
    // lgxy_rd56
    // lgxy_rd57
    // lgxy_rd58
    // lgxy_rd59
    // lgxy_rd60
    // lgxy_rd61
    // lgxy_rd62
    // lgxy_rd63
    // lgxy_rd64
    // lgxy_rd65
    // lgxy_rd66
    // lgxy_rd67
    // lgxy_rd68
    // lgxy_rd69
    // lgxy_rd70
    // lgxy_rd71

	hw_uint<2304> result;
	hw_uint<32>  lgxy_rd0_res = lgxy_rd0_select(lxy, d0, d1);
	set_at<0, 2304>(result, lgxy_rd0_res);
	hw_uint<32>  lgxy_rd1_res = lgxy_rd1_select(lxy, d0, d1);
	set_at<32, 2304>(result, lgxy_rd1_res);
	hw_uint<32>  lgxy_rd2_res = lgxy_rd2_select(lxy, d0, d1);
	set_at<64, 2304>(result, lgxy_rd2_res);
	hw_uint<32>  lgxy_rd3_res = lgxy_rd3_select(lxy, d0, d1);
	set_at<96, 2304>(result, lgxy_rd3_res);
	hw_uint<32>  lgxy_rd4_res = lgxy_rd4_select(lxy, d0, d1);
	set_at<128, 2304>(result, lgxy_rd4_res);
	hw_uint<32>  lgxy_rd5_res = lgxy_rd5_select(lxy, d0, d1);
	set_at<160, 2304>(result, lgxy_rd5_res);
	hw_uint<32>  lgxy_rd6_res = lgxy_rd6_select(lxy, d0, d1);
	set_at<192, 2304>(result, lgxy_rd6_res);
	hw_uint<32>  lgxy_rd7_res = lgxy_rd7_select(lxy, d0, d1);
	set_at<224, 2304>(result, lgxy_rd7_res);
	hw_uint<32>  lgxy_rd8_res = lgxy_rd8_select(lxy, d0, d1);
	set_at<256, 2304>(result, lgxy_rd8_res);
	hw_uint<32>  lgxy_rd9_res = lgxy_rd9_select(lxy, d0, d1);
	set_at<288, 2304>(result, lgxy_rd9_res);
	hw_uint<32>  lgxy_rd10_res = lgxy_rd10_select(lxy, d0, d1);
	set_at<320, 2304>(result, lgxy_rd10_res);
	hw_uint<32>  lgxy_rd11_res = lgxy_rd11_select(lxy, d0, d1);
	set_at<352, 2304>(result, lgxy_rd11_res);
	hw_uint<32>  lgxy_rd12_res = lgxy_rd12_select(lxy, d0, d1);
	set_at<384, 2304>(result, lgxy_rd12_res);
	hw_uint<32>  lgxy_rd13_res = lgxy_rd13_select(lxy, d0, d1);
	set_at<416, 2304>(result, lgxy_rd13_res);
	hw_uint<32>  lgxy_rd14_res = lgxy_rd14_select(lxy, d0, d1);
	set_at<448, 2304>(result, lgxy_rd14_res);
	hw_uint<32>  lgxy_rd15_res = lgxy_rd15_select(lxy, d0, d1);
	set_at<480, 2304>(result, lgxy_rd15_res);
	hw_uint<32>  lgxy_rd16_res = lgxy_rd16_select(lxy, d0, d1);
	set_at<512, 2304>(result, lgxy_rd16_res);
	hw_uint<32>  lgxy_rd17_res = lgxy_rd17_select(lxy, d0, d1);
	set_at<544, 2304>(result, lgxy_rd17_res);
	hw_uint<32>  lgxy_rd18_res = lgxy_rd18_select(lxy, d0, d1);
	set_at<576, 2304>(result, lgxy_rd18_res);
	hw_uint<32>  lgxy_rd19_res = lgxy_rd19_select(lxy, d0, d1);
	set_at<608, 2304>(result, lgxy_rd19_res);
	hw_uint<32>  lgxy_rd20_res = lgxy_rd20_select(lxy, d0, d1);
	set_at<640, 2304>(result, lgxy_rd20_res);
	hw_uint<32>  lgxy_rd21_res = lgxy_rd21_select(lxy, d0, d1);
	set_at<672, 2304>(result, lgxy_rd21_res);
	hw_uint<32>  lgxy_rd22_res = lgxy_rd22_select(lxy, d0, d1);
	set_at<704, 2304>(result, lgxy_rd22_res);
	hw_uint<32>  lgxy_rd23_res = lgxy_rd23_select(lxy, d0, d1);
	set_at<736, 2304>(result, lgxy_rd23_res);
	hw_uint<32>  lgxy_rd24_res = lgxy_rd24_select(lxy, d0, d1);
	set_at<768, 2304>(result, lgxy_rd24_res);
	hw_uint<32>  lgxy_rd25_res = lgxy_rd25_select(lxy, d0, d1);
	set_at<800, 2304>(result, lgxy_rd25_res);
	hw_uint<32>  lgxy_rd26_res = lgxy_rd26_select(lxy, d0, d1);
	set_at<832, 2304>(result, lgxy_rd26_res);
	hw_uint<32>  lgxy_rd27_res = lgxy_rd27_select(lxy, d0, d1);
	set_at<864, 2304>(result, lgxy_rd27_res);
	hw_uint<32>  lgxy_rd28_res = lgxy_rd28_select(lxy, d0, d1);
	set_at<896, 2304>(result, lgxy_rd28_res);
	hw_uint<32>  lgxy_rd29_res = lgxy_rd29_select(lxy, d0, d1);
	set_at<928, 2304>(result, lgxy_rd29_res);
	hw_uint<32>  lgxy_rd30_res = lgxy_rd30_select(lxy, d0, d1);
	set_at<960, 2304>(result, lgxy_rd30_res);
	hw_uint<32>  lgxy_rd31_res = lgxy_rd31_select(lxy, d0, d1);
	set_at<992, 2304>(result, lgxy_rd31_res);
	hw_uint<32>  lgxy_rd32_res = lgxy_rd32_select(lxy, d0, d1);
	set_at<1024, 2304>(result, lgxy_rd32_res);
	hw_uint<32>  lgxy_rd33_res = lgxy_rd33_select(lxy, d0, d1);
	set_at<1056, 2304>(result, lgxy_rd33_res);
	hw_uint<32>  lgxy_rd34_res = lgxy_rd34_select(lxy, d0, d1);
	set_at<1088, 2304>(result, lgxy_rd34_res);
	hw_uint<32>  lgxy_rd35_res = lgxy_rd35_select(lxy, d0, d1);
	set_at<1120, 2304>(result, lgxy_rd35_res);
	hw_uint<32>  lgxy_rd36_res = lgxy_rd36_select(lxy, d0, d1);
	set_at<1152, 2304>(result, lgxy_rd36_res);
	hw_uint<32>  lgxy_rd37_res = lgxy_rd37_select(lxy, d0, d1);
	set_at<1184, 2304>(result, lgxy_rd37_res);
	hw_uint<32>  lgxy_rd38_res = lgxy_rd38_select(lxy, d0, d1);
	set_at<1216, 2304>(result, lgxy_rd38_res);
	hw_uint<32>  lgxy_rd39_res = lgxy_rd39_select(lxy, d0, d1);
	set_at<1248, 2304>(result, lgxy_rd39_res);
	hw_uint<32>  lgxy_rd40_res = lgxy_rd40_select(lxy, d0, d1);
	set_at<1280, 2304>(result, lgxy_rd40_res);
	hw_uint<32>  lgxy_rd41_res = lgxy_rd41_select(lxy, d0, d1);
	set_at<1312, 2304>(result, lgxy_rd41_res);
	hw_uint<32>  lgxy_rd42_res = lgxy_rd42_select(lxy, d0, d1);
	set_at<1344, 2304>(result, lgxy_rd42_res);
	hw_uint<32>  lgxy_rd43_res = lgxy_rd43_select(lxy, d0, d1);
	set_at<1376, 2304>(result, lgxy_rd43_res);
	hw_uint<32>  lgxy_rd44_res = lgxy_rd44_select(lxy, d0, d1);
	set_at<1408, 2304>(result, lgxy_rd44_res);
	hw_uint<32>  lgxy_rd45_res = lgxy_rd45_select(lxy, d0, d1);
	set_at<1440, 2304>(result, lgxy_rd45_res);
	hw_uint<32>  lgxy_rd46_res = lgxy_rd46_select(lxy, d0, d1);
	set_at<1472, 2304>(result, lgxy_rd46_res);
	hw_uint<32>  lgxy_rd47_res = lgxy_rd47_select(lxy, d0, d1);
	set_at<1504, 2304>(result, lgxy_rd47_res);
	hw_uint<32>  lgxy_rd48_res = lgxy_rd48_select(lxy, d0, d1);
	set_at<1536, 2304>(result, lgxy_rd48_res);
	hw_uint<32>  lgxy_rd49_res = lgxy_rd49_select(lxy, d0, d1);
	set_at<1568, 2304>(result, lgxy_rd49_res);
	hw_uint<32>  lgxy_rd50_res = lgxy_rd50_select(lxy, d0, d1);
	set_at<1600, 2304>(result, lgxy_rd50_res);
	hw_uint<32>  lgxy_rd51_res = lgxy_rd51_select(lxy, d0, d1);
	set_at<1632, 2304>(result, lgxy_rd51_res);
	hw_uint<32>  lgxy_rd52_res = lgxy_rd52_select(lxy, d0, d1);
	set_at<1664, 2304>(result, lgxy_rd52_res);
	hw_uint<32>  lgxy_rd53_res = lgxy_rd53_select(lxy, d0, d1);
	set_at<1696, 2304>(result, lgxy_rd53_res);
	hw_uint<32>  lgxy_rd54_res = lgxy_rd54_select(lxy, d0, d1);
	set_at<1728, 2304>(result, lgxy_rd54_res);
	hw_uint<32>  lgxy_rd55_res = lgxy_rd55_select(lxy, d0, d1);
	set_at<1760, 2304>(result, lgxy_rd55_res);
	hw_uint<32>  lgxy_rd56_res = lgxy_rd56_select(lxy, d0, d1);
	set_at<1792, 2304>(result, lgxy_rd56_res);
	hw_uint<32>  lgxy_rd57_res = lgxy_rd57_select(lxy, d0, d1);
	set_at<1824, 2304>(result, lgxy_rd57_res);
	hw_uint<32>  lgxy_rd58_res = lgxy_rd58_select(lxy, d0, d1);
	set_at<1856, 2304>(result, lgxy_rd58_res);
	hw_uint<32>  lgxy_rd59_res = lgxy_rd59_select(lxy, d0, d1);
	set_at<1888, 2304>(result, lgxy_rd59_res);
	hw_uint<32>  lgxy_rd60_res = lgxy_rd60_select(lxy, d0, d1);
	set_at<1920, 2304>(result, lgxy_rd60_res);
	hw_uint<32>  lgxy_rd61_res = lgxy_rd61_select(lxy, d0, d1);
	set_at<1952, 2304>(result, lgxy_rd61_res);
	hw_uint<32>  lgxy_rd62_res = lgxy_rd62_select(lxy, d0, d1);
	set_at<1984, 2304>(result, lgxy_rd62_res);
	hw_uint<32>  lgxy_rd63_res = lgxy_rd63_select(lxy, d0, d1);
	set_at<2016, 2304>(result, lgxy_rd63_res);
	hw_uint<32>  lgxy_rd64_res = lgxy_rd64_select(lxy, d0, d1);
	set_at<2048, 2304>(result, lgxy_rd64_res);
	hw_uint<32>  lgxy_rd65_res = lgxy_rd65_select(lxy, d0, d1);
	set_at<2080, 2304>(result, lgxy_rd65_res);
	hw_uint<32>  lgxy_rd66_res = lgxy_rd66_select(lxy, d0, d1);
	set_at<2112, 2304>(result, lgxy_rd66_res);
	hw_uint<32>  lgxy_rd67_res = lgxy_rd67_select(lxy, d0, d1);
	set_at<2144, 2304>(result, lgxy_rd67_res);
	hw_uint<32>  lgxy_rd68_res = lgxy_rd68_select(lxy, d0, d1);
	set_at<2176, 2304>(result, lgxy_rd68_res);
	hw_uint<32>  lgxy_rd69_res = lgxy_rd69_select(lxy, d0, d1);
	set_at<2208, 2304>(result, lgxy_rd69_res);
	hw_uint<32>  lgxy_rd70_res = lgxy_rd70_select(lxy, d0, d1);
	set_at<2240, 2304>(result, lgxy_rd70_res);
	hw_uint<32>  lgxy_rd71_res = lgxy_rd71_select(lxy, d0, d1);
	set_at<2272, 2304>(result, lgxy_rd71_res);
	return result;
}

// lxy_update_0_write
//	lxy_lxy_update_0_write0
//	lxy_lxy_update_0_write1
//	lxy_lxy_update_0_write2
//	lxy_lxy_update_0_write3
//	lxy_lxy_update_0_write4
//	lxy_lxy_update_0_write5
//	lxy_lxy_update_0_write6
//	lxy_lxy_update_0_write7
inline void lxy_lxy_update_0_write_bundle_write(hw_uint<256>& lxy_update_0_write, lxy_cache& lxy, int d0, int d1) {
	hw_uint<32>  lxy_lxy_update_0_write0_res = lxy_update_0_write.extract<0, 31>();
	lxy_lxy_update_0_write0_write(lxy_lxy_update_0_write0_res, lxy, d0, d1);
	hw_uint<32>  lxy_lxy_update_0_write1_res = lxy_update_0_write.extract<32, 63>();
	lxy_lxy_update_0_write1_write(lxy_lxy_update_0_write1_res, lxy, d0, d1);
	hw_uint<32>  lxy_lxy_update_0_write2_res = lxy_update_0_write.extract<64, 95>();
	lxy_lxy_update_0_write2_write(lxy_lxy_update_0_write2_res, lxy, d0, d1);
	hw_uint<32>  lxy_lxy_update_0_write3_res = lxy_update_0_write.extract<96, 127>();
	lxy_lxy_update_0_write3_write(lxy_lxy_update_0_write3_res, lxy, d0, d1);
	hw_uint<32>  lxy_lxy_update_0_write4_res = lxy_update_0_write.extract<128, 159>();
	lxy_lxy_update_0_write4_write(lxy_lxy_update_0_write4_res, lxy, d0, d1);
	hw_uint<32>  lxy_lxy_update_0_write5_res = lxy_update_0_write.extract<160, 191>();
	lxy_lxy_update_0_write5_write(lxy_lxy_update_0_write5_res, lxy, d0, d1);
	hw_uint<32>  lxy_lxy_update_0_write6_res = lxy_update_0_write.extract<192, 223>();
	lxy_lxy_update_0_write6_write(lxy_lxy_update_0_write6_res, lxy, d0, d1);
	hw_uint<32>  lxy_lxy_update_0_write7_res = lxy_update_0_write.extract<224, 255>();
	lxy_lxy_update_0_write7_write(lxy_lxy_update_0_write7_res, lxy, d0, d1);
}

#include "hw_classes.h"

struct lyy_lyy_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-8, 1920], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 240> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 240> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_242() {
		return f4;
	}

	inline hw_uint<32>  peek_243() {
		return f6;
	}

	inline hw_uint<32>  peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_484() {
		return f8;
	}

	inline hw_uint<32>  peek_485() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lyy_lyy_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-7, 1921], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lyy_lyy_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[-6, 1922], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lyy_lyy_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[-5, 1923], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lyy_lyy_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[-4, 1924], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lyy_lyy_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[-3, 1925], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lyy_lyy_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[-2, 1926], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 241> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 241> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_243() {
		return f4;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_485() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lyy_lyy_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[-1, 1927], [-1, 1080]}
	// Capacity: 487
	// # of read delays: 7
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 240> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 240> f9;
	hw_uint<32>  f10;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_243() {
		return f6;
	}

	inline hw_uint<32>  peek_244() {
		return f8;
	}

	inline hw_uint<32>  peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_485() {
		return f10;
	}

	inline hw_uint<32>  peek_486() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f5.push(f4);
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

struct lyy_cache {
  lyy_lyy_update_0_write0_merged_banks_9_cache lyy_lyy_update_0_write0_merged_banks_9;
  lyy_lyy_update_0_write1_merged_banks_9_cache lyy_lyy_update_0_write1_merged_banks_9;
  lyy_lyy_update_0_write2_merged_banks_9_cache lyy_lyy_update_0_write2_merged_banks_9;
  lyy_lyy_update_0_write3_merged_banks_9_cache lyy_lyy_update_0_write3_merged_banks_9;
  lyy_lyy_update_0_write4_merged_banks_9_cache lyy_lyy_update_0_write4_merged_banks_9;
  lyy_lyy_update_0_write5_merged_banks_9_cache lyy_lyy_update_0_write5_merged_banks_9;
  lyy_lyy_update_0_write6_merged_banks_9_cache lyy_lyy_update_0_write6_merged_banks_9;
  lyy_lyy_update_0_write7_merged_banks_9_cache lyy_lyy_update_0_write7_merged_banks_9;
};



inline void lyy_lyy_update_0_write0_write(hw_uint<32> & lyy_lyy_update_0_write0, lyy_cache& lyy, int d0, int d1) {
  lyy.lyy_lyy_update_0_write0_merged_banks_9.push(lyy_lyy_update_0_write0);
}

inline void lyy_lyy_update_0_write1_write(hw_uint<32> & lyy_lyy_update_0_write1, lyy_cache& lyy, int d0, int d1) {
  lyy.lyy_lyy_update_0_write1_merged_banks_9.push(lyy_lyy_update_0_write1);
}

inline void lyy_lyy_update_0_write2_write(hw_uint<32> & lyy_lyy_update_0_write2, lyy_cache& lyy, int d0, int d1) {
  lyy.lyy_lyy_update_0_write2_merged_banks_9.push(lyy_lyy_update_0_write2);
}

inline void lyy_lyy_update_0_write3_write(hw_uint<32> & lyy_lyy_update_0_write3, lyy_cache& lyy, int d0, int d1) {
  lyy.lyy_lyy_update_0_write3_merged_banks_9.push(lyy_lyy_update_0_write3);
}

inline void lyy_lyy_update_0_write4_write(hw_uint<32> & lyy_lyy_update_0_write4, lyy_cache& lyy, int d0, int d1) {
  lyy.lyy_lyy_update_0_write4_merged_banks_9.push(lyy_lyy_update_0_write4);
}

inline void lyy_lyy_update_0_write5_write(hw_uint<32> & lyy_lyy_update_0_write5, lyy_cache& lyy, int d0, int d1) {
  lyy.lyy_lyy_update_0_write5_merged_banks_9.push(lyy_lyy_update_0_write5);
}

inline void lyy_lyy_update_0_write6_write(hw_uint<32> & lyy_lyy_update_0_write6, lyy_cache& lyy, int d0, int d1) {
  lyy.lyy_lyy_update_0_write6_merged_banks_9.push(lyy_lyy_update_0_write6);
}

inline void lyy_lyy_update_0_write7_write(hw_uint<32> & lyy_lyy_update_0_write7, lyy_cache& lyy, int d0, int d1) {
  lyy.lyy_lyy_update_0_write7_merged_banks_9.push(lyy_lyy_update_0_write7);
}

inline hw_uint<32>  lgyy_rd0_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd0 read pattern: { lgyy_update_0[d0, d1] -> lyy[-1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 486 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write7 = lyy.lyy_lyy_update_0_write7_merged_banks_9.peek_486();
  return value_lyy_lyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd1_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd1 read pattern: { lgyy_update_0[d0, d1] -> lyy[-1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 244 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write7 = lyy.lyy_lyy_update_0_write7_merged_banks_9.peek_244();
  return value_lyy_lyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd10_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd10 read pattern: { lgyy_update_0[d0, d1] -> lyy[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write0 = lyy.lyy_lyy_update_0_write0_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd11_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd11 read pattern: { lgyy_update_0[d0, d1] -> lyy[8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write0 = lyy.lyy_lyy_update_0_write0_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd12_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd12 read pattern: { lgyy_update_0[d0, d1] -> lyy[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write1 = lyy.lyy_lyy_update_0_write1_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd13_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd13 read pattern: { lgyy_update_0[d0, d1] -> lyy[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write1 = lyy.lyy_lyy_update_0_write1_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd14_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd14 read pattern: { lgyy_update_0[d0, d1] -> lyy[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write1 = lyy.lyy_lyy_update_0_write1_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd15_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd15 read pattern: { lgyy_update_0[d0, d1] -> lyy[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write2 = lyy.lyy_lyy_update_0_write2_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd16_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd16 read pattern: { lgyy_update_0[d0, d1] -> lyy[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write2 = lyy.lyy_lyy_update_0_write2_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd17_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd17 read pattern: { lgyy_update_0[d0, d1] -> lyy[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write2 = lyy.lyy_lyy_update_0_write2_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd18_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd18 read pattern: { lgyy_update_0[d0, d1] -> lyy[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write1 = lyy.lyy_lyy_update_0_write1_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd19_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd19 read pattern: { lgyy_update_0[d0, d1] -> lyy[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write1 = lyy.lyy_lyy_update_0_write1_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd2_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd2 read pattern: { lgyy_update_0[d0, d1] -> lyy[-1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 2 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write7 = lyy.lyy_lyy_update_0_write7_merged_banks_9.peek_2();
  return value_lyy_lyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd20_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd20 read pattern: { lgyy_update_0[d0, d1] -> lyy[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write1 = lyy.lyy_lyy_update_0_write1_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd21_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd21 read pattern: { lgyy_update_0[d0, d1] -> lyy[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write2 = lyy.lyy_lyy_update_0_write2_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd22_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd22 read pattern: { lgyy_update_0[d0, d1] -> lyy[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write2 = lyy.lyy_lyy_update_0_write2_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd23_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd23 read pattern: { lgyy_update_0[d0, d1] -> lyy[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write2 = lyy.lyy_lyy_update_0_write2_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd24_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd24 read pattern: { lgyy_update_0[d0, d1] -> lyy[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write3 = lyy.lyy_lyy_update_0_write3_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd25_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd25 read pattern: { lgyy_update_0[d0, d1] -> lyy[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write3 = lyy.lyy_lyy_update_0_write3_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd26_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd26 read pattern: { lgyy_update_0[d0, d1] -> lyy[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write3 = lyy.lyy_lyy_update_0_write3_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd27_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd27 read pattern: { lgyy_update_0[d0, d1] -> lyy[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write2 = lyy.lyy_lyy_update_0_write2_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd28_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd28 read pattern: { lgyy_update_0[d0, d1] -> lyy[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write2 = lyy.lyy_lyy_update_0_write2_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd29_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd29 read pattern: { lgyy_update_0[d0, d1] -> lyy[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write2 = lyy.lyy_lyy_update_0_write2_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd3_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd3 read pattern: { lgyy_update_0[d0, d1] -> lyy[8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write0 = lyy.lyy_lyy_update_0_write0_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd30_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd30 read pattern: { lgyy_update_0[d0, d1] -> lyy[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write3 = lyy.lyy_lyy_update_0_write3_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd31_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd31 read pattern: { lgyy_update_0[d0, d1] -> lyy[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write3 = lyy.lyy_lyy_update_0_write3_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd32_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd32 read pattern: { lgyy_update_0[d0, d1] -> lyy[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write3 = lyy.lyy_lyy_update_0_write3_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd33_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd33 read pattern: { lgyy_update_0[d0, d1] -> lyy[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write4 = lyy.lyy_lyy_update_0_write4_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd34_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd34 read pattern: { lgyy_update_0[d0, d1] -> lyy[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write4 = lyy.lyy_lyy_update_0_write4_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd35_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd35 read pattern: { lgyy_update_0[d0, d1] -> lyy[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write4 = lyy.lyy_lyy_update_0_write4_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd36_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd36 read pattern: { lgyy_update_0[d0, d1] -> lyy[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write3 = lyy.lyy_lyy_update_0_write3_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd37_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd37 read pattern: { lgyy_update_0[d0, d1] -> lyy[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write3 = lyy.lyy_lyy_update_0_write3_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd38_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd38 read pattern: { lgyy_update_0[d0, d1] -> lyy[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write3 = lyy.lyy_lyy_update_0_write3_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd39_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd39 read pattern: { lgyy_update_0[d0, d1] -> lyy[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write4 = lyy.lyy_lyy_update_0_write4_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd4_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd4 read pattern: { lgyy_update_0[d0, d1] -> lyy[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write0 = lyy.lyy_lyy_update_0_write0_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd40_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd40 read pattern: { lgyy_update_0[d0, d1] -> lyy[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write4 = lyy.lyy_lyy_update_0_write4_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd41_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd41 read pattern: { lgyy_update_0[d0, d1] -> lyy[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write4 = lyy.lyy_lyy_update_0_write4_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd42_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd42 read pattern: { lgyy_update_0[d0, d1] -> lyy[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write5 = lyy.lyy_lyy_update_0_write5_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd43_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd43 read pattern: { lgyy_update_0[d0, d1] -> lyy[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write5 = lyy.lyy_lyy_update_0_write5_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd44_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd44 read pattern: { lgyy_update_0[d0, d1] -> lyy[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write5 = lyy.lyy_lyy_update_0_write5_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd45_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd45 read pattern: { lgyy_update_0[d0, d1] -> lyy[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write4 = lyy.lyy_lyy_update_0_write4_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd46_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd46 read pattern: { lgyy_update_0[d0, d1] -> lyy[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write4 = lyy.lyy_lyy_update_0_write4_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd47_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd47 read pattern: { lgyy_update_0[d0, d1] -> lyy[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write4 = lyy.lyy_lyy_update_0_write4_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd48_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd48 read pattern: { lgyy_update_0[d0, d1] -> lyy[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write5 = lyy.lyy_lyy_update_0_write5_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd49_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd49 read pattern: { lgyy_update_0[d0, d1] -> lyy[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write5 = lyy.lyy_lyy_update_0_write5_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd5_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd5 read pattern: { lgyy_update_0[d0, d1] -> lyy[8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write0 = lyy.lyy_lyy_update_0_write0_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd50_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd50 read pattern: { lgyy_update_0[d0, d1] -> lyy[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write5 = lyy.lyy_lyy_update_0_write5_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd51_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd51 read pattern: { lgyy_update_0[d0, d1] -> lyy[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write6 = lyy.lyy_lyy_update_0_write6_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd52_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd52 read pattern: { lgyy_update_0[d0, d1] -> lyy[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write6 = lyy.lyy_lyy_update_0_write6_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd53_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd53 read pattern: { lgyy_update_0[d0, d1] -> lyy[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write6 = lyy.lyy_lyy_update_0_write6_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd54_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd54 read pattern: { lgyy_update_0[d0, d1] -> lyy[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write5 = lyy.lyy_lyy_update_0_write5_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd55_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd55 read pattern: { lgyy_update_0[d0, d1] -> lyy[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write5 = lyy.lyy_lyy_update_0_write5_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd56_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd56 read pattern: { lgyy_update_0[d0, d1] -> lyy[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write5 = lyy.lyy_lyy_update_0_write5_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd57_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd57 read pattern: { lgyy_update_0[d0, d1] -> lyy[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write6 = lyy.lyy_lyy_update_0_write6_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd58_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd58 read pattern: { lgyy_update_0[d0, d1] -> lyy[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write6 = lyy.lyy_lyy_update_0_write6_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd59_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd59 read pattern: { lgyy_update_0[d0, d1] -> lyy[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write6 = lyy.lyy_lyy_update_0_write6_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd6_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd6 read pattern: { lgyy_update_0[d0, d1] -> lyy[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write1 = lyy.lyy_lyy_update_0_write1_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd60_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd60 read pattern: { lgyy_update_0[d0, d1] -> lyy[7 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write7 = lyy.lyy_lyy_update_0_write7_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd61_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd61 read pattern: { lgyy_update_0[d0, d1] -> lyy[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write7 = lyy.lyy_lyy_update_0_write7_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd62_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd62 read pattern: { lgyy_update_0[d0, d1] -> lyy[7 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write7 = lyy.lyy_lyy_update_0_write7_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd63_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd63 read pattern: { lgyy_update_0[d0, d1] -> lyy[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write6 = lyy.lyy_lyy_update_0_write6_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd64_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd64 read pattern: { lgyy_update_0[d0, d1] -> lyy[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write6 = lyy.lyy_lyy_update_0_write6_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd65_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd65 read pattern: { lgyy_update_0[d0, d1] -> lyy[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write6 = lyy.lyy_lyy_update_0_write6_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd66_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd66 read pattern: { lgyy_update_0[d0, d1] -> lyy[7 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write7 = lyy.lyy_lyy_update_0_write7_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd67_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd67 read pattern: { lgyy_update_0[d0, d1] -> lyy[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write7 = lyy.lyy_lyy_update_0_write7_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd68_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd68 read pattern: { lgyy_update_0[d0, d1] -> lyy[7 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write7 = lyy.lyy_lyy_update_0_write7_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd69_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd69 read pattern: { lgyy_update_0[d0, d1] -> lyy[8 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 484 : 0 <= d0 <= 238 and 0 <= d1 <= 1079; lgyy_update_0[d0, d1] -> (245 + d0) : d0 = 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write0 = lyy.lyy_lyy_update_0_write0_merged_banks_9.peek_484();
  return value_lyy_lyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd7_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd7 read pattern: { lgyy_update_0[d0, d1] -> lyy[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write1 = lyy.lyy_lyy_update_0_write1_merged_banks_9.peek_243();
  return value_lyy_lyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd70_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd70 read pattern: { lgyy_update_0[d0, d1] -> lyy[8 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 242 : 0 <= d0 <= 238 and 0 <= d1 <= 1079; lgyy_update_0[d0, d1] -> (3 + d0) : d0 = 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write0 = lyy.lyy_lyy_update_0_write0_merged_banks_9.peek_242();
  return value_lyy_lyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd71_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd71 read pattern: { lgyy_update_0[d0, d1] -> lyy[8 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_lyy_lyy_update_0_write0 = lyy.lyy_lyy_update_0_write0_merged_banks_9.peek_0();
  return value_lyy_lyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd8_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd8 read pattern: { lgyy_update_0[d0, d1] -> lyy[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write1 = lyy.lyy_lyy_update_0_write1_merged_banks_9.peek_1();
  return value_lyy_lyy_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  lgyy_rd9_select(lyy_cache& lyy, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_rd9 read pattern: { lgyy_update_0[d0, d1] -> lyy[8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { lgyy_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { lyy_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { lgyy_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_lyy_lyy_update_0_write0 = lyy.lyy_lyy_update_0_write0_merged_banks_9.peek_485();
  return value_lyy_lyy_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// lgyy_update_0_read
//	lgyy_rd0
//	lgyy_rd1
//	lgyy_rd2
//	lgyy_rd3
//	lgyy_rd4
//	lgyy_rd5
//	lgyy_rd6
//	lgyy_rd7
//	lgyy_rd8
//	lgyy_rd9
//	lgyy_rd10
//	lgyy_rd11
//	lgyy_rd12
//	lgyy_rd13
//	lgyy_rd14
//	lgyy_rd15
//	lgyy_rd16
//	lgyy_rd17
//	lgyy_rd18
//	lgyy_rd19
//	lgyy_rd20
//	lgyy_rd21
//	lgyy_rd22
//	lgyy_rd23
//	lgyy_rd24
//	lgyy_rd25
//	lgyy_rd26
//	lgyy_rd27
//	lgyy_rd28
//	lgyy_rd29
//	lgyy_rd30
//	lgyy_rd31
//	lgyy_rd32
//	lgyy_rd33
//	lgyy_rd34
//	lgyy_rd35
//	lgyy_rd36
//	lgyy_rd37
//	lgyy_rd38
//	lgyy_rd39
//	lgyy_rd40
//	lgyy_rd41
//	lgyy_rd42
//	lgyy_rd43
//	lgyy_rd44
//	lgyy_rd45
//	lgyy_rd46
//	lgyy_rd47
//	lgyy_rd48
//	lgyy_rd49
//	lgyy_rd50
//	lgyy_rd51
//	lgyy_rd52
//	lgyy_rd53
//	lgyy_rd54
//	lgyy_rd55
//	lgyy_rd56
//	lgyy_rd57
//	lgyy_rd58
//	lgyy_rd59
//	lgyy_rd60
//	lgyy_rd61
//	lgyy_rd62
//	lgyy_rd63
//	lgyy_rd64
//	lgyy_rd65
//	lgyy_rd66
//	lgyy_rd67
//	lgyy_rd68
//	lgyy_rd69
//	lgyy_rd70
//	lgyy_rd71
inline hw_uint<2304> lyy_lgyy_update_0_read_bundle_read(lyy_cache& lyy, int d0, int d1) {
  // # of ports in bundle: 72
    // lgyy_rd0
    // lgyy_rd1
    // lgyy_rd2
    // lgyy_rd3
    // lgyy_rd4
    // lgyy_rd5
    // lgyy_rd6
    // lgyy_rd7
    // lgyy_rd8
    // lgyy_rd9
    // lgyy_rd10
    // lgyy_rd11
    // lgyy_rd12
    // lgyy_rd13
    // lgyy_rd14
    // lgyy_rd15
    // lgyy_rd16
    // lgyy_rd17
    // lgyy_rd18
    // lgyy_rd19
    // lgyy_rd20
    // lgyy_rd21
    // lgyy_rd22
    // lgyy_rd23
    // lgyy_rd24
    // lgyy_rd25
    // lgyy_rd26
    // lgyy_rd27
    // lgyy_rd28
    // lgyy_rd29
    // lgyy_rd30
    // lgyy_rd31
    // lgyy_rd32
    // lgyy_rd33
    // lgyy_rd34
    // lgyy_rd35
    // lgyy_rd36
    // lgyy_rd37
    // lgyy_rd38
    // lgyy_rd39
    // lgyy_rd40
    // lgyy_rd41
    // lgyy_rd42
    // lgyy_rd43
    // lgyy_rd44
    // lgyy_rd45
    // lgyy_rd46
    // lgyy_rd47
    // lgyy_rd48
    // lgyy_rd49
    // lgyy_rd50
    // lgyy_rd51
    // lgyy_rd52
    // lgyy_rd53
    // lgyy_rd54
    // lgyy_rd55
    // lgyy_rd56
    // lgyy_rd57
    // lgyy_rd58
    // lgyy_rd59
    // lgyy_rd60
    // lgyy_rd61
    // lgyy_rd62
    // lgyy_rd63
    // lgyy_rd64
    // lgyy_rd65
    // lgyy_rd66
    // lgyy_rd67
    // lgyy_rd68
    // lgyy_rd69
    // lgyy_rd70
    // lgyy_rd71

	hw_uint<2304> result;
	hw_uint<32>  lgyy_rd0_res = lgyy_rd0_select(lyy, d0, d1);
	set_at<0, 2304>(result, lgyy_rd0_res);
	hw_uint<32>  lgyy_rd1_res = lgyy_rd1_select(lyy, d0, d1);
	set_at<32, 2304>(result, lgyy_rd1_res);
	hw_uint<32>  lgyy_rd2_res = lgyy_rd2_select(lyy, d0, d1);
	set_at<64, 2304>(result, lgyy_rd2_res);
	hw_uint<32>  lgyy_rd3_res = lgyy_rd3_select(lyy, d0, d1);
	set_at<96, 2304>(result, lgyy_rd3_res);
	hw_uint<32>  lgyy_rd4_res = lgyy_rd4_select(lyy, d0, d1);
	set_at<128, 2304>(result, lgyy_rd4_res);
	hw_uint<32>  lgyy_rd5_res = lgyy_rd5_select(lyy, d0, d1);
	set_at<160, 2304>(result, lgyy_rd5_res);
	hw_uint<32>  lgyy_rd6_res = lgyy_rd6_select(lyy, d0, d1);
	set_at<192, 2304>(result, lgyy_rd6_res);
	hw_uint<32>  lgyy_rd7_res = lgyy_rd7_select(lyy, d0, d1);
	set_at<224, 2304>(result, lgyy_rd7_res);
	hw_uint<32>  lgyy_rd8_res = lgyy_rd8_select(lyy, d0, d1);
	set_at<256, 2304>(result, lgyy_rd8_res);
	hw_uint<32>  lgyy_rd9_res = lgyy_rd9_select(lyy, d0, d1);
	set_at<288, 2304>(result, lgyy_rd9_res);
	hw_uint<32>  lgyy_rd10_res = lgyy_rd10_select(lyy, d0, d1);
	set_at<320, 2304>(result, lgyy_rd10_res);
	hw_uint<32>  lgyy_rd11_res = lgyy_rd11_select(lyy, d0, d1);
	set_at<352, 2304>(result, lgyy_rd11_res);
	hw_uint<32>  lgyy_rd12_res = lgyy_rd12_select(lyy, d0, d1);
	set_at<384, 2304>(result, lgyy_rd12_res);
	hw_uint<32>  lgyy_rd13_res = lgyy_rd13_select(lyy, d0, d1);
	set_at<416, 2304>(result, lgyy_rd13_res);
	hw_uint<32>  lgyy_rd14_res = lgyy_rd14_select(lyy, d0, d1);
	set_at<448, 2304>(result, lgyy_rd14_res);
	hw_uint<32>  lgyy_rd15_res = lgyy_rd15_select(lyy, d0, d1);
	set_at<480, 2304>(result, lgyy_rd15_res);
	hw_uint<32>  lgyy_rd16_res = lgyy_rd16_select(lyy, d0, d1);
	set_at<512, 2304>(result, lgyy_rd16_res);
	hw_uint<32>  lgyy_rd17_res = lgyy_rd17_select(lyy, d0, d1);
	set_at<544, 2304>(result, lgyy_rd17_res);
	hw_uint<32>  lgyy_rd18_res = lgyy_rd18_select(lyy, d0, d1);
	set_at<576, 2304>(result, lgyy_rd18_res);
	hw_uint<32>  lgyy_rd19_res = lgyy_rd19_select(lyy, d0, d1);
	set_at<608, 2304>(result, lgyy_rd19_res);
	hw_uint<32>  lgyy_rd20_res = lgyy_rd20_select(lyy, d0, d1);
	set_at<640, 2304>(result, lgyy_rd20_res);
	hw_uint<32>  lgyy_rd21_res = lgyy_rd21_select(lyy, d0, d1);
	set_at<672, 2304>(result, lgyy_rd21_res);
	hw_uint<32>  lgyy_rd22_res = lgyy_rd22_select(lyy, d0, d1);
	set_at<704, 2304>(result, lgyy_rd22_res);
	hw_uint<32>  lgyy_rd23_res = lgyy_rd23_select(lyy, d0, d1);
	set_at<736, 2304>(result, lgyy_rd23_res);
	hw_uint<32>  lgyy_rd24_res = lgyy_rd24_select(lyy, d0, d1);
	set_at<768, 2304>(result, lgyy_rd24_res);
	hw_uint<32>  lgyy_rd25_res = lgyy_rd25_select(lyy, d0, d1);
	set_at<800, 2304>(result, lgyy_rd25_res);
	hw_uint<32>  lgyy_rd26_res = lgyy_rd26_select(lyy, d0, d1);
	set_at<832, 2304>(result, lgyy_rd26_res);
	hw_uint<32>  lgyy_rd27_res = lgyy_rd27_select(lyy, d0, d1);
	set_at<864, 2304>(result, lgyy_rd27_res);
	hw_uint<32>  lgyy_rd28_res = lgyy_rd28_select(lyy, d0, d1);
	set_at<896, 2304>(result, lgyy_rd28_res);
	hw_uint<32>  lgyy_rd29_res = lgyy_rd29_select(lyy, d0, d1);
	set_at<928, 2304>(result, lgyy_rd29_res);
	hw_uint<32>  lgyy_rd30_res = lgyy_rd30_select(lyy, d0, d1);
	set_at<960, 2304>(result, lgyy_rd30_res);
	hw_uint<32>  lgyy_rd31_res = lgyy_rd31_select(lyy, d0, d1);
	set_at<992, 2304>(result, lgyy_rd31_res);
	hw_uint<32>  lgyy_rd32_res = lgyy_rd32_select(lyy, d0, d1);
	set_at<1024, 2304>(result, lgyy_rd32_res);
	hw_uint<32>  lgyy_rd33_res = lgyy_rd33_select(lyy, d0, d1);
	set_at<1056, 2304>(result, lgyy_rd33_res);
	hw_uint<32>  lgyy_rd34_res = lgyy_rd34_select(lyy, d0, d1);
	set_at<1088, 2304>(result, lgyy_rd34_res);
	hw_uint<32>  lgyy_rd35_res = lgyy_rd35_select(lyy, d0, d1);
	set_at<1120, 2304>(result, lgyy_rd35_res);
	hw_uint<32>  lgyy_rd36_res = lgyy_rd36_select(lyy, d0, d1);
	set_at<1152, 2304>(result, lgyy_rd36_res);
	hw_uint<32>  lgyy_rd37_res = lgyy_rd37_select(lyy, d0, d1);
	set_at<1184, 2304>(result, lgyy_rd37_res);
	hw_uint<32>  lgyy_rd38_res = lgyy_rd38_select(lyy, d0, d1);
	set_at<1216, 2304>(result, lgyy_rd38_res);
	hw_uint<32>  lgyy_rd39_res = lgyy_rd39_select(lyy, d0, d1);
	set_at<1248, 2304>(result, lgyy_rd39_res);
	hw_uint<32>  lgyy_rd40_res = lgyy_rd40_select(lyy, d0, d1);
	set_at<1280, 2304>(result, lgyy_rd40_res);
	hw_uint<32>  lgyy_rd41_res = lgyy_rd41_select(lyy, d0, d1);
	set_at<1312, 2304>(result, lgyy_rd41_res);
	hw_uint<32>  lgyy_rd42_res = lgyy_rd42_select(lyy, d0, d1);
	set_at<1344, 2304>(result, lgyy_rd42_res);
	hw_uint<32>  lgyy_rd43_res = lgyy_rd43_select(lyy, d0, d1);
	set_at<1376, 2304>(result, lgyy_rd43_res);
	hw_uint<32>  lgyy_rd44_res = lgyy_rd44_select(lyy, d0, d1);
	set_at<1408, 2304>(result, lgyy_rd44_res);
	hw_uint<32>  lgyy_rd45_res = lgyy_rd45_select(lyy, d0, d1);
	set_at<1440, 2304>(result, lgyy_rd45_res);
	hw_uint<32>  lgyy_rd46_res = lgyy_rd46_select(lyy, d0, d1);
	set_at<1472, 2304>(result, lgyy_rd46_res);
	hw_uint<32>  lgyy_rd47_res = lgyy_rd47_select(lyy, d0, d1);
	set_at<1504, 2304>(result, lgyy_rd47_res);
	hw_uint<32>  lgyy_rd48_res = lgyy_rd48_select(lyy, d0, d1);
	set_at<1536, 2304>(result, lgyy_rd48_res);
	hw_uint<32>  lgyy_rd49_res = lgyy_rd49_select(lyy, d0, d1);
	set_at<1568, 2304>(result, lgyy_rd49_res);
	hw_uint<32>  lgyy_rd50_res = lgyy_rd50_select(lyy, d0, d1);
	set_at<1600, 2304>(result, lgyy_rd50_res);
	hw_uint<32>  lgyy_rd51_res = lgyy_rd51_select(lyy, d0, d1);
	set_at<1632, 2304>(result, lgyy_rd51_res);
	hw_uint<32>  lgyy_rd52_res = lgyy_rd52_select(lyy, d0, d1);
	set_at<1664, 2304>(result, lgyy_rd52_res);
	hw_uint<32>  lgyy_rd53_res = lgyy_rd53_select(lyy, d0, d1);
	set_at<1696, 2304>(result, lgyy_rd53_res);
	hw_uint<32>  lgyy_rd54_res = lgyy_rd54_select(lyy, d0, d1);
	set_at<1728, 2304>(result, lgyy_rd54_res);
	hw_uint<32>  lgyy_rd55_res = lgyy_rd55_select(lyy, d0, d1);
	set_at<1760, 2304>(result, lgyy_rd55_res);
	hw_uint<32>  lgyy_rd56_res = lgyy_rd56_select(lyy, d0, d1);
	set_at<1792, 2304>(result, lgyy_rd56_res);
	hw_uint<32>  lgyy_rd57_res = lgyy_rd57_select(lyy, d0, d1);
	set_at<1824, 2304>(result, lgyy_rd57_res);
	hw_uint<32>  lgyy_rd58_res = lgyy_rd58_select(lyy, d0, d1);
	set_at<1856, 2304>(result, lgyy_rd58_res);
	hw_uint<32>  lgyy_rd59_res = lgyy_rd59_select(lyy, d0, d1);
	set_at<1888, 2304>(result, lgyy_rd59_res);
	hw_uint<32>  lgyy_rd60_res = lgyy_rd60_select(lyy, d0, d1);
	set_at<1920, 2304>(result, lgyy_rd60_res);
	hw_uint<32>  lgyy_rd61_res = lgyy_rd61_select(lyy, d0, d1);
	set_at<1952, 2304>(result, lgyy_rd61_res);
	hw_uint<32>  lgyy_rd62_res = lgyy_rd62_select(lyy, d0, d1);
	set_at<1984, 2304>(result, lgyy_rd62_res);
	hw_uint<32>  lgyy_rd63_res = lgyy_rd63_select(lyy, d0, d1);
	set_at<2016, 2304>(result, lgyy_rd63_res);
	hw_uint<32>  lgyy_rd64_res = lgyy_rd64_select(lyy, d0, d1);
	set_at<2048, 2304>(result, lgyy_rd64_res);
	hw_uint<32>  lgyy_rd65_res = lgyy_rd65_select(lyy, d0, d1);
	set_at<2080, 2304>(result, lgyy_rd65_res);
	hw_uint<32>  lgyy_rd66_res = lgyy_rd66_select(lyy, d0, d1);
	set_at<2112, 2304>(result, lgyy_rd66_res);
	hw_uint<32>  lgyy_rd67_res = lgyy_rd67_select(lyy, d0, d1);
	set_at<2144, 2304>(result, lgyy_rd67_res);
	hw_uint<32>  lgyy_rd68_res = lgyy_rd68_select(lyy, d0, d1);
	set_at<2176, 2304>(result, lgyy_rd68_res);
	hw_uint<32>  lgyy_rd69_res = lgyy_rd69_select(lyy, d0, d1);
	set_at<2208, 2304>(result, lgyy_rd69_res);
	hw_uint<32>  lgyy_rd70_res = lgyy_rd70_select(lyy, d0, d1);
	set_at<2240, 2304>(result, lgyy_rd70_res);
	hw_uint<32>  lgyy_rd71_res = lgyy_rd71_select(lyy, d0, d1);
	set_at<2272, 2304>(result, lgyy_rd71_res);
	return result;
}

// lyy_update_0_write
//	lyy_lyy_update_0_write0
//	lyy_lyy_update_0_write1
//	lyy_lyy_update_0_write2
//	lyy_lyy_update_0_write3
//	lyy_lyy_update_0_write4
//	lyy_lyy_update_0_write5
//	lyy_lyy_update_0_write6
//	lyy_lyy_update_0_write7
inline void lyy_lyy_update_0_write_bundle_write(hw_uint<256>& lyy_update_0_write, lyy_cache& lyy, int d0, int d1) {
	hw_uint<32>  lyy_lyy_update_0_write0_res = lyy_update_0_write.extract<0, 31>();
	lyy_lyy_update_0_write0_write(lyy_lyy_update_0_write0_res, lyy, d0, d1);
	hw_uint<32>  lyy_lyy_update_0_write1_res = lyy_update_0_write.extract<32, 63>();
	lyy_lyy_update_0_write1_write(lyy_lyy_update_0_write1_res, lyy, d0, d1);
	hw_uint<32>  lyy_lyy_update_0_write2_res = lyy_update_0_write.extract<64, 95>();
	lyy_lyy_update_0_write2_write(lyy_lyy_update_0_write2_res, lyy, d0, d1);
	hw_uint<32>  lyy_lyy_update_0_write3_res = lyy_update_0_write.extract<96, 127>();
	lyy_lyy_update_0_write3_write(lyy_lyy_update_0_write3_res, lyy, d0, d1);
	hw_uint<32>  lyy_lyy_update_0_write4_res = lyy_update_0_write.extract<128, 159>();
	lyy_lyy_update_0_write4_write(lyy_lyy_update_0_write4_res, lyy, d0, d1);
	hw_uint<32>  lyy_lyy_update_0_write5_res = lyy_update_0_write.extract<160, 191>();
	lyy_lyy_update_0_write5_write(lyy_lyy_update_0_write5_res, lyy, d0, d1);
	hw_uint<32>  lyy_lyy_update_0_write6_res = lyy_update_0_write.extract<192, 223>();
	lyy_lyy_update_0_write6_write(lyy_lyy_update_0_write6_res, lyy, d0, d1);
	hw_uint<32>  lyy_lyy_update_0_write7_res = lyy_update_0_write.extract<224, 255>();
	lyy_lyy_update_0_write7_write(lyy_lyy_update_0_write7_res, lyy, d0, d1);
}

#include "hw_classes.h"

struct trace_trace_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct trace_trace_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct trace_trace_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct trace_trace_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct trace_trace_update_0_write4_merged_banks_1_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct trace_trace_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct trace_trace_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct trace_trace_update_0_write7_merged_banks_1_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct trace_cache {
  trace_trace_update_0_write0_merged_banks_1_cache trace_trace_update_0_write0_merged_banks_1;
  trace_trace_update_0_write1_merged_banks_1_cache trace_trace_update_0_write1_merged_banks_1;
  trace_trace_update_0_write2_merged_banks_1_cache trace_trace_update_0_write2_merged_banks_1;
  trace_trace_update_0_write3_merged_banks_1_cache trace_trace_update_0_write3_merged_banks_1;
  trace_trace_update_0_write4_merged_banks_1_cache trace_trace_update_0_write4_merged_banks_1;
  trace_trace_update_0_write5_merged_banks_1_cache trace_trace_update_0_write5_merged_banks_1;
  trace_trace_update_0_write6_merged_banks_1_cache trace_trace_update_0_write6_merged_banks_1;
  trace_trace_update_0_write7_merged_banks_1_cache trace_trace_update_0_write7_merged_banks_1;
};



inline void trace_trace_update_0_write0_write(hw_uint<32> & trace_trace_update_0_write0, trace_cache& trace, int d0, int d1) {
  trace.trace_trace_update_0_write0_merged_banks_1.push(trace_trace_update_0_write0);
}

inline void trace_trace_update_0_write1_write(hw_uint<32> & trace_trace_update_0_write1, trace_cache& trace, int d0, int d1) {
  trace.trace_trace_update_0_write1_merged_banks_1.push(trace_trace_update_0_write1);
}

inline void trace_trace_update_0_write2_write(hw_uint<32> & trace_trace_update_0_write2, trace_cache& trace, int d0, int d1) {
  trace.trace_trace_update_0_write2_merged_banks_1.push(trace_trace_update_0_write2);
}

inline void trace_trace_update_0_write3_write(hw_uint<32> & trace_trace_update_0_write3, trace_cache& trace, int d0, int d1) {
  trace.trace_trace_update_0_write3_merged_banks_1.push(trace_trace_update_0_write3);
}

inline void trace_trace_update_0_write4_write(hw_uint<32> & trace_trace_update_0_write4, trace_cache& trace, int d0, int d1) {
  trace.trace_trace_update_0_write4_merged_banks_1.push(trace_trace_update_0_write4);
}

inline void trace_trace_update_0_write5_write(hw_uint<32> & trace_trace_update_0_write5, trace_cache& trace, int d0, int d1) {
  trace.trace_trace_update_0_write5_merged_banks_1.push(trace_trace_update_0_write5);
}

inline void trace_trace_update_0_write6_write(hw_uint<32> & trace_trace_update_0_write6, trace_cache& trace, int d0, int d1) {
  trace.trace_trace_update_0_write6_merged_banks_1.push(trace_trace_update_0_write6);
}

inline void trace_trace_update_0_write7_write(hw_uint<32> & trace_trace_update_0_write7, trace_cache& trace, int d0, int d1) {
  trace.trace_trace_update_0_write7_merged_banks_1.push(trace_trace_update_0_write7);
}

inline hw_uint<32>  hr_8_rd0_select(trace_cache& trace, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd0 read pattern: { hr_8_update_0[d0, d1] -> trace[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_trace_trace_update_0_write0 = trace.trace_trace_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_trace_trace_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd1_select(trace_cache& trace, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd1 read pattern: { hr_8_update_0[d0, d1] -> trace[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_trace_trace_update_0_write1 = trace.trace_trace_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_trace_trace_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd2_select(trace_cache& trace, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd2 read pattern: { hr_8_update_0[d0, d1] -> trace[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_trace_trace_update_0_write2 = trace.trace_trace_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_trace_trace_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd3_select(trace_cache& trace, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd3 read pattern: { hr_8_update_0[d0, d1] -> trace[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_trace_trace_update_0_write3 = trace.trace_trace_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_trace_trace_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd4_select(trace_cache& trace, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd4 read pattern: { hr_8_update_0[d0, d1] -> trace[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_trace_trace_update_0_write4 = trace.trace_trace_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_trace_trace_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd5_select(trace_cache& trace, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd5 read pattern: { hr_8_update_0[d0, d1] -> trace[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_trace_trace_update_0_write5 = trace.trace_trace_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_trace_trace_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd6_select(trace_cache& trace, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd6 read pattern: { hr_8_update_0[d0, d1] -> trace[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_trace_trace_update_0_write6 = trace.trace_trace_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_trace_trace_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  hr_8_rd7_select(trace_cache& trace, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hr_8_rd7 read pattern: { hr_8_update_0[d0, d1] -> trace[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hr_8_update_0[d0, d1] -> [2 + d1, 2 + d0, 15] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { trace_update_0[d0, d1] -> [2 + d1, 2 + d0, 14] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_trace_trace_update_0_write7 = trace.trace_trace_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_trace_trace_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// hr_8_update_0_read
//	hr_8_rd0
//	hr_8_rd1
//	hr_8_rd2
//	hr_8_rd3
//	hr_8_rd4
//	hr_8_rd5
//	hr_8_rd6
//	hr_8_rd7
inline hw_uint<256> trace_hr_8_update_0_read_bundle_read(trace_cache& trace, int d0, int d1) {
  // # of ports in bundle: 8
    // hr_8_rd0
    // hr_8_rd1
    // hr_8_rd2
    // hr_8_rd3
    // hr_8_rd4
    // hr_8_rd5
    // hr_8_rd6
    // hr_8_rd7

	hw_uint<256> result;
	hw_uint<32>  hr_8_rd0_res = hr_8_rd0_select(trace, d0, d1);
	set_at<0, 256>(result, hr_8_rd0_res);
	hw_uint<32>  hr_8_rd1_res = hr_8_rd1_select(trace, d0, d1);
	set_at<32, 256>(result, hr_8_rd1_res);
	hw_uint<32>  hr_8_rd2_res = hr_8_rd2_select(trace, d0, d1);
	set_at<64, 256>(result, hr_8_rd2_res);
	hw_uint<32>  hr_8_rd3_res = hr_8_rd3_select(trace, d0, d1);
	set_at<96, 256>(result, hr_8_rd3_res);
	hw_uint<32>  hr_8_rd4_res = hr_8_rd4_select(trace, d0, d1);
	set_at<128, 256>(result, hr_8_rd4_res);
	hw_uint<32>  hr_8_rd5_res = hr_8_rd5_select(trace, d0, d1);
	set_at<160, 256>(result, hr_8_rd5_res);
	hw_uint<32>  hr_8_rd6_res = hr_8_rd6_select(trace, d0, d1);
	set_at<192, 256>(result, hr_8_rd6_res);
	hw_uint<32>  hr_8_rd7_res = hr_8_rd7_select(trace, d0, d1);
	set_at<224, 256>(result, hr_8_rd7_res);
	return result;
}

// trace_update_0_write
//	trace_trace_update_0_write0
//	trace_trace_update_0_write1
//	trace_trace_update_0_write2
//	trace_trace_update_0_write3
//	trace_trace_update_0_write4
//	trace_trace_update_0_write5
//	trace_trace_update_0_write6
//	trace_trace_update_0_write7
inline void trace_trace_update_0_write_bundle_write(hw_uint<256>& trace_update_0_write, trace_cache& trace, int d0, int d1) {
	hw_uint<32>  trace_trace_update_0_write0_res = trace_update_0_write.extract<0, 31>();
	trace_trace_update_0_write0_write(trace_trace_update_0_write0_res, trace, d0, d1);
	hw_uint<32>  trace_trace_update_0_write1_res = trace_update_0_write.extract<32, 63>();
	trace_trace_update_0_write1_write(trace_trace_update_0_write1_res, trace, d0, d1);
	hw_uint<32>  trace_trace_update_0_write2_res = trace_update_0_write.extract<64, 95>();
	trace_trace_update_0_write2_write(trace_trace_update_0_write2_res, trace, d0, d1);
	hw_uint<32>  trace_trace_update_0_write3_res = trace_update_0_write.extract<96, 127>();
	trace_trace_update_0_write3_write(trace_trace_update_0_write3_res, trace, d0, d1);
	hw_uint<32>  trace_trace_update_0_write4_res = trace_update_0_write.extract<128, 159>();
	trace_trace_update_0_write4_write(trace_trace_update_0_write4_res, trace, d0, d1);
	hw_uint<32>  trace_trace_update_0_write5_res = trace_update_0_write.extract<160, 191>();
	trace_trace_update_0_write5_write(trace_trace_update_0_write5_res, trace, d0, d1);
	hw_uint<32>  trace_trace_update_0_write6_res = trace_update_0_write.extract<192, 223>();
	trace_trace_update_0_write6_write(trace_trace_update_0_write6_res, trace, d0, d1);
	hw_uint<32>  trace_trace_update_0_write7_res = trace_update_0_write.extract<224, 255>();
	trace_trace_update_0_write7_write(trace_trace_update_0_write7_res, trace, d0, d1);
}



// Operation logic
inline void img_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */img_oc, img_cache& img, int d0, int d1) {
	// Consume: img_oc
	auto img_oc_0_c__0_value = img_oc.read();
	auto compute_result = img_generated_compute_unrolled_8(img_oc_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(compute_result, img, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lgxy8_update_0(lgxy_cache& lgxy, lgxy8_cache& lgxy8, int d0, int d1) {
	// Consume: lgxy
	auto lgxy_0_c__0_value = lgxy_lgxy8_update_0_read_bundle_read(lgxy/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lgxy8_generated_compute_unrolled_8(lgxy_0_c__0_value);
	// Produce: lgxy8
	lgxy8_lgxy8_update_0_write_bundle_write(compute_result, lgxy8, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lgxx8_update_0(lgxx_cache& lgxx, lgxx8_cache& lgxx8, int d0, int d1) {
	// Consume: lgxx
	auto lgxx_0_c__0_value = lgxx_lgxx8_update_0_read_bundle_read(lgxx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lgxx8_generated_compute_unrolled_8(lgxx_0_c__0_value);
	// Produce: lgxx8
	lgxx8_lgxx8_update_0_write_bundle_write(compute_result, lgxx8, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void det_update_0(lgxx8_cache& lgxx8, lgxy8_cache& lgxy8, lgyy8_cache& lgyy8, det_cache& det, int d0, int d1) {
	// Consume: lgxx8
	auto lgxx8_0_c__0_value = lgxx8_det_update_0_read_bundle_read(lgxx8/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lgxy8
	auto lgxy8_0_c__0_value = lgxy8_det_update_0_read_bundle_read(lgxy8/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lgyy8
	auto lgyy8_0_c__0_value = lgyy8_det_update_0_read_bundle_read(lgyy8/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = det_generated_compute_unrolled_8(lgxx8_0_c__0_value, lgxy8_0_c__0_value, lgyy8_0_c__0_value);
	// Produce: det
	det_det_update_0_write_bundle_write(compute_result, det, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void trace_update_0(lgxx8_cache& lgxx8, lgyy8_cache& lgyy8, trace_cache& trace, int d0, int d1) {
	// Consume: lgxx8
	auto lgxx8_0_c__0_value = lgxx8_trace_update_0_read_bundle_read(lgxx8/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lgyy8
	auto lgyy8_0_c__0_value = lgyy8_trace_update_0_read_bundle_read(lgyy8/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = trace_generated_compute_unrolled_8(lgxx8_0_c__0_value, lgyy8_0_c__0_value);
	// Produce: trace
	trace_trace_update_0_write_bundle_write(compute_result, trace, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hr_8_update_0(det_cache& det, trace_cache& trace, HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */hr_8, int d0, int d1) {
	// Consume: det
	auto det_0_c__0_value = det_hr_8_update_0_read_bundle_read(det/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: trace
	auto trace_0_c__0_value = trace_hr_8_update_0_read_bundle_read(trace/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hr_8_generated_compute_unrolled_8(det_0_c__0_value, trace_0_c__0_value);
	// Produce: hr_8
	hr_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void grad_y_update_0(img_cache& img, grad_y_cache& grad_y, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_grad_y_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = grad_y_generated_compute_unrolled_8(img_0_c__0_value);
	// Produce: grad_y
	grad_y_grad_y_update_0_write_bundle_write(compute_result, grad_y, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lyy_update_0(grad_y_cache& grad_y, lyy_cache& lyy, int d0, int d1) {
	// Consume: grad_y
	auto grad_y_0_c__0_value = grad_y_lyy_update_0_read_bundle_read(grad_y/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lyy_generated_compute_unrolled_8(grad_y_0_c__0_value);
	// Produce: lyy
	lyy_lyy_update_0_write_bundle_write(compute_result, lyy, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lxy_update_0(grad_x_cache& grad_x, grad_y_cache& grad_y, lxy_cache& lxy, int d0, int d1) {
	// Consume: grad_x
	auto grad_x_0_c__0_value = grad_x_lxy_update_0_read_bundle_read(grad_x/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: grad_y
	auto grad_y_0_c__0_value = grad_y_lxy_update_0_read_bundle_read(grad_y/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lxy_generated_compute_unrolled_8(grad_x_0_c__0_value, grad_y_0_c__0_value);
	// Produce: lxy
	lxy_lxy_update_0_write_bundle_write(compute_result, lxy, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lxx_update_0(grad_x_cache& grad_x, lxx_cache& lxx, int d0, int d1) {
	// Consume: grad_x
	auto grad_x_0_c__0_value = grad_x_lxx_update_0_read_bundle_read(grad_x/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lxx_generated_compute_unrolled_8(grad_x_0_c__0_value);
	// Produce: lxx
	lxx_lxx_update_0_write_bundle_write(compute_result, lxx, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lgyy_update_0(lyy_cache& lyy, lgyy_cache& lgyy, int d0, int d1) {
	// Consume: lyy
	auto lyy_0_c__0_value = lyy_lgyy_update_0_read_bundle_read(lyy/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lgyy_generated_compute_unrolled_8(lyy_0_c__0_value);
	// Produce: lgyy
	lgyy_lgyy_update_0_write_bundle_write(compute_result, lgyy, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lgxy_update_0(lxy_cache& lxy, lgxy_cache& lgxy, int d0, int d1) {
	// Consume: lxy
	auto lxy_0_c__0_value = lxy_lgxy_update_0_read_bundle_read(lxy/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lgxy_generated_compute_unrolled_8(lxy_0_c__0_value);
	// Produce: lgxy
	lgxy_lgxy_update_0_write_bundle_write(compute_result, lgxy, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lgyy8_update_0(lgyy_cache& lgyy, lgyy8_cache& lgyy8, int d0, int d1) {
	// Consume: lgyy
	auto lgyy_0_c__0_value = lgyy_lgyy8_update_0_read_bundle_read(lgyy/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lgyy8_generated_compute_unrolled_8(lgyy_0_c__0_value);
	// Produce: lgyy8
	lgyy8_lgyy8_update_0_write_bundle_write(compute_result, lgyy8, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void grad_x_update_0(img_cache& img, grad_x_cache& grad_x, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_grad_x_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = grad_x_generated_compute_unrolled_8(img_0_c__0_value);
	// Produce: grad_x
	grad_x_grad_x_update_0_write_bundle_write(compute_result, grad_x, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lgxx_update_0(lxx_cache& lxx, lgxx_cache& lgxx, int d0, int d1) {
	// Consume: lxx
	auto lxx_0_c__0_value = lxx_lgxx_update_0_read_bundle_read(lxx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lgxx_generated_compute_unrolled_8(lxx_0_c__0_value);
	// Produce: lgxx
	lgxx_lgxx_update_0_write_bundle_write(compute_result, lgxx, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void hr_8_opt(HWStream<hw_uint<256> >& /* get_args num ports = 8 */img_oc, HWStream<hw_uint<256> >& /* get_args num ports = 8 */hr_8, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("hr_8_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  det_cache det;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  grad_x_cache grad_x;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  grad_y_cache grad_y;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxx_cache lgxx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxx8_cache lgxx8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxy_cache lgxy;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxy8_cache lgxy8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgyy_cache lgyy;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgyy8_cache lgyy8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lxx_cache lxx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lxy_cache lxy;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lyy_cache lyy;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  trace_cache trace;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // det_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*13]
	    // grad_x_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // grad_y_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // hr_8_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*15]
	    // img_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // lgxx8_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*12]
	    // lgxx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*9]
	    // lgxy8_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*11]
	    // lgxy_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*8]
	    // lgyy8_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*10]
	    // lgyy_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*7]
	    // lxx_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*6]
	    // lxy_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*5]
	    // lyy_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*4]
	    // trace_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*14]
	for (int c0 = -2; c0 <= 1081; c0++) {
	  for (int c1 = -2; c1 <= 241; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-2 <= c1 && c1 <= 241) && ((c1 - 0) % 1 == 0) && (-2 <= c0 && c0 <= 1081) && ((c0 - 0) % 1 == 0)) {
	img_update_0(img_oc, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 241) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 1) % 1 == 0)) {
	grad_y_update_0(img, grad_y, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 241) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 1) % 1 == 0)) {
	grad_x_update_0(img, grad_x, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 241) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 1) % 1 == 0)) {
	lyy_update_0(grad_y, lyy, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 241) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 1) % 1 == 0)) {
	lxy_update_0(grad_x, grad_y, lxy, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 241) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 1) % 1 == 0)) {
	lxx_update_0(grad_x, lxx, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 241) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	lgyy_update_0(lyy, lgyy, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 241) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	lgxy_update_0(lxy, lgxy, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 241) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	lgxx_update_0(lxx, lgxx, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 241) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	lgyy8_update_0(lgyy, lgyy8, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 241) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	lgxy8_update_0(lgxy, lgxy8, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 241) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	lgxx8_update_0(lgxx, lgxx8, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 241) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	det_update_0(lgxx8, lgxy8, lgyy8, det, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 241) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	trace_update_0(lgxx8, lgyy8, trace, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 241) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	hr_8_update_0(det, trace, hr_8, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void hr_8_opt(HWStream<hw_uint<256> >& /* get_args num ports = 8 */img_oc, HWStream<hw_uint<256> >& /* get_args num ports = 8 */hr_8) {

  hr_8_opt(img_oc, hr_8, 1);
}
#ifdef __VIVADO_SYNTH__
#include "hr_8_opt.h"

const int hr_8_update_0_write_num_transfers = 259200;
const int img_update_0_read_num_transfers = 264496;


extern "C" {

static void read_img_update_0_read(hw_uint<256>* input, HWStream<hw_uint<256> >& v, const int size) {
  hw_uint<256> burst_reg;
  int num_transfers = img_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_hr_8_update_0_write(hw_uint<256>* output, HWStream<hw_uint<256> >& v, const int size) {
  hw_uint<256> burst_reg;
  int num_transfers = hr_8_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void hr_8_opt_accel(hw_uint<256>* img_update_0_read, hw_uint<256>* hr_8_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = hr_8_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = hr_8_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<256> > img_update_0_read_channel;
  static HWStream<hw_uint<256> > hr_8_update_0_write_channel;

  read_img_update_0_read(img_update_0_read, img_update_0_read_channel, size);

  hr_8_opt(img_update_0_read_channel, hr_8_update_0_write_channel, size);

  write_hr_8_update_0_write(hr_8_update_0_write, hr_8_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

