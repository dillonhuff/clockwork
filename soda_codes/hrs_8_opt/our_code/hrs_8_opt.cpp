#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "hrs_8_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_write4_merged_banks_1_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_write7_merged_banks_1_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_cache {
  img_img_update_0_write0_merged_banks_1_cache img_img_update_0_write0_merged_banks_1;
  img_img_update_0_write1_merged_banks_1_cache img_img_update_0_write1_merged_banks_1;
  img_img_update_0_write2_merged_banks_1_cache img_img_update_0_write2_merged_banks_1;
  img_img_update_0_write3_merged_banks_1_cache img_img_update_0_write3_merged_banks_1;
  img_img_update_0_write4_merged_banks_1_cache img_img_update_0_write4_merged_banks_1;
  img_img_update_0_write5_merged_banks_1_cache img_img_update_0_write5_merged_banks_1;
  img_img_update_0_write6_merged_banks_1_cache img_img_update_0_write6_merged_banks_1;
  img_img_update_0_write7_merged_banks_1_cache img_img_update_0_write7_merged_banks_1;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write0_merged_banks_1.push(img_img_update_0_write0);
}

inline void img_img_update_0_write1_write(hw_uint<16>& img_img_update_0_write1, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write1_merged_banks_1.push(img_img_update_0_write1);
}

inline void img_img_update_0_write2_write(hw_uint<16>& img_img_update_0_write2, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write2_merged_banks_1.push(img_img_update_0_write2);
}

inline void img_img_update_0_write3_write(hw_uint<16>& img_img_update_0_write3, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write3_merged_banks_1.push(img_img_update_0_write3);
}

inline void img_img_update_0_write4_write(hw_uint<16>& img_img_update_0_write4, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write4_merged_banks_1.push(img_img_update_0_write4);
}

inline void img_img_update_0_write5_write(hw_uint<16>& img_img_update_0_write5, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write5_merged_banks_1.push(img_img_update_0_write5);
}

inline void img_img_update_0_write6_write(hw_uint<16>& img_img_update_0_write6, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write6_merged_banks_1.push(img_img_update_0_write6);
}

inline void img_img_update_0_write7_write(hw_uint<16>& img_img_update_0_write7, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write7_merged_banks_1.push(img_img_update_0_write7);
}

inline hw_uint<16> hrs_8_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hrs_8_rd0 read pattern: { hrs_8_update_0[d0, d1] -> img[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hrs_8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> hrs_8_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hrs_8_rd1 read pattern: { hrs_8_update_0[d0, d1] -> img[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hrs_8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> hrs_8_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hrs_8_rd2 read pattern: { hrs_8_update_0[d0, d1] -> img[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hrs_8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> hrs_8_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hrs_8_rd3 read pattern: { hrs_8_update_0[d0, d1] -> img[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hrs_8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> hrs_8_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hrs_8_rd4 read pattern: { hrs_8_update_0[d0, d1] -> img[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hrs_8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> hrs_8_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hrs_8_rd5 read pattern: { hrs_8_update_0[d0, d1] -> img[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hrs_8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> hrs_8_rd6_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hrs_8_rd6 read pattern: { hrs_8_update_0[d0, d1] -> img[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hrs_8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> hrs_8_rd7_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hrs_8_rd7 read pattern: { hrs_8_update_0[d0, d1] -> img[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { hrs_8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// hrs_8_update_0_read
//	hrs_8_rd0
//	hrs_8_rd1
//	hrs_8_rd2
//	hrs_8_rd3
//	hrs_8_rd4
//	hrs_8_rd5
//	hrs_8_rd6
//	hrs_8_rd7
inline hw_uint<128> img_hrs_8_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 8
    // hrs_8_rd0
    // hrs_8_rd1
    // hrs_8_rd2
    // hrs_8_rd3
    // hrs_8_rd4
    // hrs_8_rd5
    // hrs_8_rd6
    // hrs_8_rd7

	hw_uint<128> result;
	hw_uint<16> hrs_8_rd0_res = hrs_8_rd0_select(img, d0, d1);
	set_at<0, 128>(result, hrs_8_rd0_res);
	hw_uint<16> hrs_8_rd1_res = hrs_8_rd1_select(img, d0, d1);
	set_at<16, 128>(result, hrs_8_rd1_res);
	hw_uint<16> hrs_8_rd2_res = hrs_8_rd2_select(img, d0, d1);
	set_at<32, 128>(result, hrs_8_rd2_res);
	hw_uint<16> hrs_8_rd3_res = hrs_8_rd3_select(img, d0, d1);
	set_at<48, 128>(result, hrs_8_rd3_res);
	hw_uint<16> hrs_8_rd4_res = hrs_8_rd4_select(img, d0, d1);
	set_at<64, 128>(result, hrs_8_rd4_res);
	hw_uint<16> hrs_8_rd5_res = hrs_8_rd5_select(img, d0, d1);
	set_at<80, 128>(result, hrs_8_rd5_res);
	hw_uint<16> hrs_8_rd6_res = hrs_8_rd6_select(img, d0, d1);
	set_at<96, 128>(result, hrs_8_rd6_res);
	hw_uint<16> hrs_8_rd7_res = hrs_8_rd7_select(img, d0, d1);
	set_at<112, 128>(result, hrs_8_rd7_res);
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
inline void img_img_update_0_write_bundle_write(hw_uint<128>& img_update_0_write, img_cache& img, int d0, int d1) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write1_res = img_update_0_write.extract<16, 31>();
	img_img_update_0_write1_write(img_img_update_0_write1_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write2_res = img_update_0_write.extract<32, 47>();
	img_img_update_0_write2_write(img_img_update_0_write2_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write3_res = img_update_0_write.extract<48, 63>();
	img_img_update_0_write3_write(img_img_update_0_write3_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write4_res = img_update_0_write.extract<64, 79>();
	img_img_update_0_write4_write(img_img_update_0_write4_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write5_res = img_update_0_write.extract<80, 95>();
	img_img_update_0_write5_write(img_img_update_0_write5_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write6_res = img_update_0_write.extract<96, 111>();
	img_img_update_0_write6_write(img_img_update_0_write6_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write7_res = img_update_0_write.extract<112, 127>();
	img_img_update_0_write7_write(img_img_update_0_write7_res, img, d0, d1);
}



// Operation logic
inline void img_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */img_oc, img_cache& img, int d0, int d1) {
	// Consume: img_oc
	auto img_oc_0_c__0_value = img_oc.read();
	auto compute_result = img_generated_compute_unrolled_8(img_oc_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(compute_result, img, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<128> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  hw_uint<16> debug_compute_result_lane_4;
  set_at<0, 16, 16>(debug_compute_result_lane_4, debug_compute_result.extract<64, 79>());
  hw_uint<16> debug_compute_result_lane_5;
  set_at<0, 16, 16>(debug_compute_result_lane_5, debug_compute_result.extract<80, 95>());
  hw_uint<16> debug_compute_result_lane_6;
  set_at<0, 16, 16>(debug_compute_result_lane_6, debug_compute_result.extract<96, 111>());
  hw_uint<16> debug_compute_result_lane_7;
  set_at<0, 16, 16>(debug_compute_result_lane_7, debug_compute_result.extract<112, 127>());
  *global_debug_handle << "img_update_0," << (8*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 4) << "," << d1<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 5) << "," << d1<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 6) << "," << d1<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 7) << "," << d1<< "," <<  debug_compute_result_lane_7 << endl;
#endif //__VIVADO_SYNTH__

}

inline void hrs_8_update_0(img_cache& img, HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */hrs_8, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_hrs_8_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "hrs_8_update_0_img," << d0<< "," << d1<< "," <<  img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = hrs_8_generated_compute_unrolled_8(img_0_c__0_value);
	// Produce: hrs_8
	hrs_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<128> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  hw_uint<16> debug_compute_result_lane_4;
  set_at<0, 16, 16>(debug_compute_result_lane_4, debug_compute_result.extract<64, 79>());
  hw_uint<16> debug_compute_result_lane_5;
  set_at<0, 16, 16>(debug_compute_result_lane_5, debug_compute_result.extract<80, 95>());
  hw_uint<16> debug_compute_result_lane_6;
  set_at<0, 16, 16>(debug_compute_result_lane_6, debug_compute_result.extract<96, 111>());
  hw_uint<16> debug_compute_result_lane_7;
  set_at<0, 16, 16>(debug_compute_result_lane_7, debug_compute_result.extract<112, 127>());
  *global_debug_handle << "hrs_8_update_0," << (8*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "hrs_8_update_0," << (8*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "hrs_8_update_0," << (8*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "hrs_8_update_0," << (8*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "hrs_8_update_0," << (8*d0 + 4) << "," << d1<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "hrs_8_update_0," << (8*d0 + 5) << "," << d1<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "hrs_8_update_0," << (8*d0 + 6) << "," << d1<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "hrs_8_update_0," << (8*d0 + 7) << "," << d1<< "," <<  debug_compute_result_lane_7 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void hrs_8_opt(HWStream<hw_uint<128> >& /* get_args num ports = 8 */img_oc, HWStream<hw_uint<128> >& /* get_args num ports = 8 */hrs_8, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("hrs_8_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // hrs_8_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // img_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = 0; c0 <= 1079; c0++) {
	  for (int c1 = 0; c1 <= 239; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 239) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	img_update_0(img_oc, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 239) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	hrs_8_update_0(img, hrs_8, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void hrs_8_opt(HWStream<hw_uint<128> >& /* get_args num ports = 8 */img_oc, HWStream<hw_uint<128> >& /* get_args num ports = 8 */hrs_8) {

  hrs_8_opt(img_oc, hrs_8, 1);
}
#ifdef __VIVADO_SYNTH__
#include "hrs_8_opt.h"

const int hrs_8_update_0_write_num_transfers = 259200;
const int img_update_0_read_num_transfers = 259200;


extern "C" {

static void read_img_update_0_read(hw_uint<128>* input, HWStream<hw_uint<128> >& v, const int size) {
  hw_uint<128> burst_reg;
  int num_transfers = img_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_hrs_8_update_0_write(hw_uint<128>* output, HWStream<hw_uint<128> >& v, const int size) {
  hw_uint<128> burst_reg;
  int num_transfers = hrs_8_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void hrs_8_opt_accel(hw_uint<128>* img_update_0_read, hw_uint<128>* hrs_8_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = hrs_8_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = hrs_8_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<128> > img_update_0_read_channel;
  static HWStream<hw_uint<128> > hrs_8_update_0_write_channel;

  read_img_update_0_read(img_update_0_read, img_update_0_read_channel, size);

  hrs_8_opt(img_update_0_read_channel, hrs_8_update_0_write_channel, size);

  write_hrs_8_update_0_write(hrs_8_update_0_write, hrs_8_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

