#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "harris16_mini_opt_compute_units.h"

#include "hw_classes.h"

struct grad_x_grad_x_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct grad_x_cache {
  grad_x_grad_x_update_0_write0_merged_banks_1_cache grad_x_grad_x_update_0_write0_merged_banks_1;
};



inline void grad_x_grad_x_update_0_write0_write(hw_uint<16>& grad_x_grad_x_update_0_write0, grad_x_cache& grad_x, int d0, int d1) {
  grad_x.grad_x_grad_x_update_0_write0_merged_banks_1.push(grad_x_grad_x_update_0_write0);
}

inline hw_uint<16> harris16_mini_rd0_select(grad_x_cache& grad_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris16_mini_rd0 read pattern: { harris16_mini_update_0[d0, d1] -> grad_x[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { harris16_mini_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_grad_x_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_grad_x_grad_x_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// grad_x_update_0_write
//	grad_x_grad_x_update_0_write0
inline void grad_x_grad_x_update_0_write_bundle_write(hw_uint<16>& grad_x_update_0_write, grad_x_cache& grad_x, int d0, int d1) {
	hw_uint<16> grad_x_grad_x_update_0_write0_res = grad_x_update_0_write.extract<0, 15>();
	grad_x_grad_x_update_0_write0_write(grad_x_grad_x_update_0_write0_res, grad_x, d0, d1);
}

// harris16_mini_update_0_read
//	harris16_mini_rd0
inline hw_uint<16> grad_x_harris16_mini_update_0_read_bundle_read(grad_x_cache& grad_x, int d0, int d1) {
  // # of ports in bundle: 1
    // harris16_mini_rd0

	hw_uint<16> result;
	hw_uint<16> harris16_mini_rd0_res = harris16_mini_rd0_select(grad_x, d0, d1);
	set_at<0, 16>(result, harris16_mini_rd0_res);
	return result;
}

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[-1, 32], [-1, 32]}
	// Capacity: 71
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 31> f3;
	hw_uint<16> f4;
	hw_uint<16> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 31> f7;
	hw_uint<16> f8;
	hw_uint<16> f9;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f1;
	}

	inline hw_uint<16> peek_2() {
		return f2;
	}

	inline hw_uint<16> peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_34() {
		return f4;
	}

	inline hw_uint<16> peek_35() {
		return f5;
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_68() {
		return f8;
	}

	inline hw_uint<16> peek_69() {
		return f9;
	}

	inline hw_uint<16> peek_70() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f9 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f5 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f1 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_cache {
  img_img_update_0_write0_merged_banks_6_cache img_img_update_0_write0_merged_banks_6;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write0_merged_banks_6.push(img_img_update_0_write0);
}

inline hw_uint<16> grad_x_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd0 read pattern: { grad_x_update_0[d0, d1] -> img[-1 + d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { grad_x_update_0[d0, d1] -> 70 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_70();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> grad_x_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd1 read pattern: { grad_x_update_0[d0, d1] -> img[-1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { grad_x_update_0[d0, d1] -> 36 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_36();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> grad_x_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd2 read pattern: { grad_x_update_0[d0, d1] -> img[-1 + d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { grad_x_update_0[d0, d1] -> 2 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_2();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> grad_x_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd3 read pattern: { grad_x_update_0[d0, d1] -> img[1 + d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { grad_x_update_0[d0, d1] -> 68 : 0 <= d0 <= 30 and 0 <= d1 <= 31; grad_x_update_0[d0, d1] -> (37 + d0) : d0 = 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_68();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> grad_x_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd4 read pattern: { grad_x_update_0[d0, d1] -> img[1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { grad_x_update_0[d0, d1] -> 34 : 0 <= d0 <= 30 and 0 <= d1 <= 31; grad_x_update_0[d0, d1] -> (3 + d0) : d0 = 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_34();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> grad_x_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd5 read pattern: { grad_x_update_0[d0, d1] -> img[1 + d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { grad_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_0();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// grad_x_update_0_read
//	grad_x_rd0
//	grad_x_rd1
//	grad_x_rd2
//	grad_x_rd3
//	grad_x_rd4
//	grad_x_rd5
inline hw_uint<96> img_grad_x_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 6
    // grad_x_rd0
    // grad_x_rd1
    // grad_x_rd2
    // grad_x_rd3
    // grad_x_rd4
    // grad_x_rd5

	hw_uint<96> result;
	hw_uint<16> grad_x_rd0_res = grad_x_rd0_select(img, d0, d1);
	set_at<0, 96>(result, grad_x_rd0_res);
	hw_uint<16> grad_x_rd1_res = grad_x_rd1_select(img, d0, d1);
	set_at<16, 96>(result, grad_x_rd1_res);
	hw_uint<16> grad_x_rd2_res = grad_x_rd2_select(img, d0, d1);
	set_at<32, 96>(result, grad_x_rd2_res);
	hw_uint<16> grad_x_rd3_res = grad_x_rd3_select(img, d0, d1);
	set_at<48, 96>(result, grad_x_rd3_res);
	hw_uint<16> grad_x_rd4_res = grad_x_rd4_select(img, d0, d1);
	set_at<64, 96>(result, grad_x_rd4_res);
	hw_uint<16> grad_x_rd5_res = grad_x_rd5_select(img, d0, d1);
	set_at<80, 96>(result, grad_x_rd5_res);
	return result;
}

// img_update_0_write
//	img_img_update_0_write0
inline void img_img_update_0_write_bundle_write(hw_uint<16>& img_update_0_write, img_cache& img, int d0, int d1) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1);
}



// Operation logic
inline void img_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */img_oc, img_cache& img, int d0, int d1) {
	// Consume: img_oc
	auto img_oc_0_c__0_value = img_oc.read();
	auto compute_result = img_generated_compute_unrolled_1(img_oc_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(compute_result, img, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "img_update_0," << (1*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void grad_x_update_0(img_cache& img, grad_x_cache& grad_x, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_grad_x_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "grad_x_update_0_img," << d0<< "," << d1<< "," <<  img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = grad_x_generated_compute_unrolled_1(img_0_c__0_value);
	// Produce: grad_x
	grad_x_grad_x_update_0_write_bundle_write(compute_result, grad_x, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "grad_x_update_0," << (1*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void harris16_mini_update_0(grad_x_cache& grad_x, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */harris16_mini, int d0, int d1) {
	// Consume: grad_x
	auto grad_x_0_c__0_value = grad_x_harris16_mini_update_0_read_bundle_read(grad_x/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "harris16_mini_update_0_grad_x," << d0<< "," << d1<< "," <<  grad_x_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = harris16_mini_generated_compute_unrolled_1(grad_x_0_c__0_value);
	// Produce: harris16_mini
	harris16_mini.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "harris16_mini_update_0," << (1*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void harris16_mini_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */img_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */harris16_mini, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("harris16_mini_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  grad_x_cache grad_x;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // grad_x_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // harris16_mini_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // img_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -1; c0 <= 32; c0++) {
	  for (int c1 = -1; c1 <= 32; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 32) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 32) && ((c0 - 0) % 1 == 0)) {
	img_update_0(img_oc, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 32) && ((c0 - 1) % 1 == 0)) {
	grad_x_update_0(img, grad_x, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 32) && ((c0 - 1) % 1 == 0)) {
	harris16_mini_update_0(grad_x, harris16_mini, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void harris16_mini_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */img_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */harris16_mini) {

  harris16_mini_opt(img_oc, harris16_mini, 1);
}
#ifdef __VIVADO_SYNTH__
#include "harris16_mini_opt.h"

const int harris16_mini_update_0_write_num_transfers = 1024;
const int img_update_0_read_num_transfers = 1156;


extern "C" {

static void read_img_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = img_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_harris16_mini_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = harris16_mini_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void harris16_mini_opt_accel(hw_uint<16>* img_update_0_read, hw_uint<16>* harris16_mini_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = harris16_mini_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = harris16_mini_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > img_update_0_read_channel;
  static HWStream<hw_uint<16> > harris16_mini_update_0_write_channel;

  read_img_update_0_read(img_update_0_read, img_update_0_read_channel, size);

  harris16_mini_opt(img_update_0_read_channel, harris16_mini_update_0_write_channel, size);

  write_harris16_mini_update_0_write(harris16_mini_update_0_write, harris16_mini_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

