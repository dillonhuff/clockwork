#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h
#include "clockwork_standard_compute_units.h"

struct ina_pw_math_in02_8_to_ina_soc_1_cache {
	// RAM Box: {[0, 258]}
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

struct ina_pw_math_in02_8_to_ina_soc_2_cache {
	// RAM Box: {[1, 259]}
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

struct ina_pw_math_in02_8_to_ina_soc_3_cache {
	// RAM Box: {[2, 260]}
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

struct ina_cache {
  // Reader addrs...
    // { soc[root = 0, y] -> ina[y] : 0 <= y <= 258 }
    // { soc[root = 0, y] -> ina[1 + y] : 0 <= y <= 258 }
    // { soc[root = 0, y] -> ina[2 + y] : 0 <= y <= 258 }
  // # of banks: 3
  ina_pw_math_in02_8_to_ina_soc_1_cache ina_pw_math_in02_8_to_ina_soc_1;
  ina_pw_math_in02_8_to_ina_soc_2_cache ina_pw_math_in02_8_to_ina_soc_2;
  ina_pw_math_in02_8_to_ina_soc_3_cache ina_pw_math_in02_8_to_ina_soc_3;
};



inline void ina_pw_math_in02_8_write(hw_uint<32> & ina_pw_math_in02_8, ina_cache& ina, int root, int pw_math_in01, int dynamic_address) {
  ina.ina_pw_math_in02_8_to_ina_soc_1.push(ina_pw_math_in02_8);
  ina.ina_pw_math_in02_8_to_ina_soc_2.push(ina_pw_math_in02_8);
  ina.ina_pw_math_in02_8_to_ina_soc_3.push(ina_pw_math_in02_8);
}

inline hw_uint<32>  ina_soc_1_select(ina_cache& ina, int root, int y, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ina_soc_1 read pattern: { soc[root = 0, y] -> ina[y] : 0 <= y <= 258 }
  // Read schedule : { soc[d0 = 0, d1] -> [0, 2 + d1, 1] : 0 <= d1 <= 258 }
  // Write schedule: { pw_math_in02[d0 = 0, d1] -> [0, d1, 0] : 0 <= d1 <= 260 }
  auto value_ina_pw_math_in02_8 = ina.ina_pw_math_in02_8_to_ina_soc_1.peek(/* one reader or all rams */ 2);
  return value_ina_pw_math_in02_8;
  return 0;
}

inline hw_uint<32>  ina_soc_2_select(ina_cache& ina, int root, int y, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ina_soc_2 read pattern: { soc[root = 0, y] -> ina[1 + y] : 0 <= y <= 258 }
  // Read schedule : { soc[d0 = 0, d1] -> [0, 2 + d1, 1] : 0 <= d1 <= 258 }
  // Write schedule: { pw_math_in02[d0 = 0, d1] -> [0, d1, 0] : 0 <= d1 <= 260 }
  auto value_ina_pw_math_in02_8 = ina.ina_pw_math_in02_8_to_ina_soc_2.peek(/* one reader or all rams */ 1);
  return value_ina_pw_math_in02_8;
  return 0;
}

inline hw_uint<32>  ina_soc_3_select(ina_cache& ina, int root, int y, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ina_soc_3 read pattern: { soc[root = 0, y] -> ina[2 + y] : 0 <= y <= 258 }
  // Read schedule : { soc[d0 = 0, d1] -> [0, 2 + d1, 1] : 0 <= d1 <= 258 }
  // Write schedule: { pw_math_in02[d0 = 0, d1] -> [0, d1, 0] : 0 <= d1 <= 260 }
  auto value_ina_pw_math_in02_8 = ina.ina_pw_math_in02_8_to_ina_soc_3.peek(/* one reader or all rams */ 0);
  return value_ina_pw_math_in02_8;
  return 0;
}

// # of bundles = 2
// pw_math_in02_write
//	ina_pw_math_in02_8
inline void ina_pw_math_in02_write_bundle_write(hw_uint<32>& pw_math_in02_write, ina_cache& ina, int root, int pw_math_in01, int dynamic_address) {
	hw_uint<32>  ina_pw_math_in02_8_res = pw_math_in02_write.extract<0, 31>();
	ina_pw_math_in02_8_write(ina_pw_math_in02_8_res, ina, root, pw_math_in01, dynamic_address);
}

// soc_read
//	ina_soc_1
//	ina_soc_2
//	ina_soc_3
inline hw_uint<96> ina_soc_read_bundle_read(ina_cache& ina, int root, int y, int dynamic_address) {
  // # of ports in bundle: 3
    // ina_soc_1
    // ina_soc_2
    // ina_soc_3

	hw_uint<96> result;
	hw_uint<32>  ina_soc_1_res = ina_soc_1_select(ina, root, y, dynamic_address);
	set_at<0, 96>(result, ina_soc_1_res);
	hw_uint<32>  ina_soc_2_res = ina_soc_2_select(ina, root, y, dynamic_address);
	set_at<32, 96>(result, ina_soc_2_res);
	hw_uint<32>  ina_soc_3_res = ina_soc_3_select(ina, root, y, dynamic_address);
	set_at<64, 96>(result, ina_soc_3_res);
	return result;
}

struct sd_ds_10_to_sd_s1_5_cache {
	// RAM Box: {[0, 127]}
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

struct sd_ds_10_to_sd_s1_6_cache {
	// RAM Box: {[1, 128]}
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

struct sd_ds_10_to_sd_s1_7_cache {
	// RAM Box: {[2, 129]}
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

struct sd_cache {
  // Reader addrs...
    // { s1[root = 0, y1] -> sd[y1] : 0 <= y1 <= 127 }
    // { s1[root = 0, y1] -> sd[1 + y1] : 0 <= y1 <= 127 }
    // { s1[root = 0, y1] -> sd[2 + y1] : 0 <= y1 <= 127 }
  // # of banks: 3
  sd_ds_10_to_sd_s1_5_cache sd_ds_10_to_sd_s1_5;
  sd_ds_10_to_sd_s1_6_cache sd_ds_10_to_sd_s1_6;
  sd_ds_10_to_sd_s1_7_cache sd_ds_10_to_sd_s1_7;
};



inline void sd_ds_10_write(hw_uint<32> & sd_ds_10, sd_cache& sd, int root, int d, int dynamic_address) {
  sd.sd_ds_10_to_sd_s1_5.push(sd_ds_10);
  sd.sd_ds_10_to_sd_s1_6.push(sd_ds_10);
  sd.sd_ds_10_to_sd_s1_7.push(sd_ds_10);
}

inline hw_uint<32>  sd_s1_5_select(sd_cache& sd, int root, int y1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sd_s1_5 read pattern: { s1[root = 0, y1] -> sd[y1] : 0 <= y1 <= 127 }
  // Read schedule : { s1[d0 = 0, d1] -> [0, 6 + 2d1, 3] : 0 <= d1 <= 127 }
  // Write schedule: { ds[d0 = 0, d1] -> [0, 2 + 2d1, 2] : 0 <= d1 <= 129 }
  auto value_sd_ds_10 = sd.sd_ds_10_to_sd_s1_5.peek(/* one reader or all rams */ 2);
  return value_sd_ds_10;
  return 0;
}

inline hw_uint<32>  sd_s1_6_select(sd_cache& sd, int root, int y1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sd_s1_6 read pattern: { s1[root = 0, y1] -> sd[1 + y1] : 0 <= y1 <= 127 }
  // Read schedule : { s1[d0 = 0, d1] -> [0, 6 + 2d1, 3] : 0 <= d1 <= 127 }
  // Write schedule: { ds[d0 = 0, d1] -> [0, 2 + 2d1, 2] : 0 <= d1 <= 129 }
  auto value_sd_ds_10 = sd.sd_ds_10_to_sd_s1_6.peek(/* one reader or all rams */ 1);
  return value_sd_ds_10;
  return 0;
}

inline hw_uint<32>  sd_s1_7_select(sd_cache& sd, int root, int y1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sd_s1_7 read pattern: { s1[root = 0, y1] -> sd[2 + y1] : 0 <= y1 <= 127 }
  // Read schedule : { s1[d0 = 0, d1] -> [0, 6 + 2d1, 3] : 0 <= d1 <= 127 }
  // Write schedule: { ds[d0 = 0, d1] -> [0, 2 + 2d1, 2] : 0 <= d1 <= 129 }
  auto value_sd_ds_10 = sd.sd_ds_10_to_sd_s1_7.peek(/* one reader or all rams */ 0);
  return value_sd_ds_10;
  return 0;
}

// # of bundles = 2
// ds_write
//	sd_ds_10
inline void sd_ds_write_bundle_write(hw_uint<32>& ds_write, sd_cache& sd, int root, int d, int dynamic_address) {
	hw_uint<32>  sd_ds_10_res = ds_write.extract<0, 31>();
	sd_ds_10_write(sd_ds_10_res, sd, root, d, dynamic_address);
}

// s1_read
//	sd_s1_5
//	sd_s1_6
//	sd_s1_7
inline hw_uint<96> sd_s1_read_bundle_read(sd_cache& sd, int root, int y1, int dynamic_address) {
  // # of ports in bundle: 3
    // sd_s1_5
    // sd_s1_6
    // sd_s1_7

	hw_uint<96> result;
	hw_uint<32>  sd_s1_5_res = sd_s1_5_select(sd, root, y1, dynamic_address);
	set_at<0, 96>(result, sd_s1_5_res);
	hw_uint<32>  sd_s1_6_res = sd_s1_6_select(sd, root, y1, dynamic_address);
	set_at<32, 96>(result, sd_s1_6_res);
	hw_uint<32>  sd_s1_7_res = sd_s1_7_select(sd, root, y1, dynamic_address);
	set_at<64, 96>(result, sd_s1_7_res);
	return result;
}

struct so_soc_0_to_so_ds_11_cache {
	// RAM Box: {[0, 258]}
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

struct so_cache {
  // Reader addrs...
    // { ds[root = 0, d] -> so[2d] : 0 <= d <= 129 }
  // # of banks: 1
  so_soc_0_to_so_ds_11_cache so_soc_0_to_so_ds_11;
};



inline void so_soc_0_write(hw_uint<32> & so_soc_0, so_cache& so, int root, int y, int dynamic_address) {
  so.so_soc_0_to_so_ds_11.push(so_soc_0);
}

inline hw_uint<32>  so_ds_11_select(so_cache& so, int root, int d, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // so_ds_11 read pattern: { ds[root = 0, d] -> so[2d] : 0 <= d <= 129 }
  // Read schedule : { ds[d0 = 0, d1] -> [0, 2 + 2d1, 2] : 0 <= d1 <= 129 }
  // Write schedule: { soc[d0 = 0, d1] -> [0, 2 + d1, 1] : 0 <= d1 <= 258 }
  auto value_so_soc_0 = so.so_soc_0_to_so_ds_11.peek(/* one reader or all rams */ 0);
  return value_so_soc_0;
  return 0;
}

// # of bundles = 2
// ds_read
//	so_ds_11
inline hw_uint<32> so_ds_read_bundle_read(so_cache& so, int root, int d, int dynamic_address) {
  // # of ports in bundle: 1
    // so_ds_11

	hw_uint<32> result;
	hw_uint<32>  so_ds_11_res = so_ds_11_select(so, root, d, dynamic_address);
	set_at<0, 32>(result, so_ds_11_res);
	return result;
}

// soc_write
//	so_soc_0
inline void so_soc_write_bundle_write(hw_uint<32>& soc_write, so_cache& so, int root, int y, int dynamic_address) {
	hw_uint<32>  so_soc_0_res = soc_write.extract<0, 31>();
	so_soc_0_write(so_soc_0_res, so, root, y, dynamic_address);
}

// Total re-use buffer capacity: 192 bits


// Operation logic
inline void pw_math_in02(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, ina_cache& ina, int root, int pw_math_in01) {
  // Dynamic address computation

	// Consume: in
	auto in_pw_math_in01_value = in.read();
	auto compute_result = id(in_pw_math_in01_value);
	// Produce: ina
	ina_pw_math_in02_write_bundle_write(/* arg names */compute_result, ina, root, pw_math_in01, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void soc(ina_cache& ina, so_cache& so, int root, int y) {
  // Dynamic address computation

	// Consume: ina
	auto ina_y_value = ina_soc_read_bundle_read(ina/* source_delay */, root, y, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = float_stencil_1x3(ina_y_value);
	// Produce: so
	so_soc_write_bundle_write(/* arg names */compute_result, so, root, y, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ds(so_cache& so, sd_cache& sd, int root, int d) {
  // Dynamic address computation

	// Consume: so
	auto so_2_m_d_value = so_ds_read_bundle_read(so/* source_delay */, root, d, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: sd
	sd_ds_write_bundle_write(/* arg names */so_2_m_d_value, sd, root, d, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void s1(sd_cache& sd, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int y1) {
  // Dynamic address computation

	// Consume: sd
	auto sd_y1_value = sd_s1_read_bundle_read(sd/* source_delay */, root, y1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = float_stencil_1x3(sd_y1_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void oned_r_oc2(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("oned_r_oc2_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  ina_cache ina;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  sd_cache sd;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  so_cache so;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { s1[d0 = 0, d1] -> [0, 6 + 2d1, 3] : 0 <= d1 <= 127; pw_math_in02[d0 = 0, d1] -> [0, d1, 0] : 0 <= d1 <= 260; ds[d0 = 0, d1] -> [0, 2 + 2d1, 2] : 0 <= d1 <= 129; soc[d0 = 0, d1] -> [0, 2 + d1, 1] : 0 <= d1 <= 258 }
//   { s1[d0 = 0, d1] -> [0, 6 + 2d1, 3] : 0 <= d1 <= 127 }
// Condition for s1(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-3 + 1*i2)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((260 + -1*i1)) >= 0)))
//   { pw_math_in02[d0 = 0, d1] -> [0, d1, 0] : 0 <= d1 <= 260 }
// Condition for pw_math_in02(((((1*i2)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((260 + -1*i1)) >= 0)))
//   { ds[d0 = 0, d1] -> [0, 2 + 2d1, 2] : 0 <= d1 <= 129 }
// Condition for ds(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i2)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((260 + -1*i1)) >= 0)))
//   { soc[d0 = 0, d1] -> [0, 2 + d1, 1] : 0 <= d1 <= 258 }
// Condition for soc(((((-1 + 1*i2)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((260 + -1*i1)) >= 0)))

	// time range: { [0, i1, i2] : i1 <= 260 and i2 > 0 and floor((i1)/2) > 0 and 2*floor((i1)/2) >= -2 + i1 + i2; [0, i1, 0] : 0 <= i1 <= 260; [0, i1, 3] : (i1) mod 2 = 0 and 6 <= i1 <= 260 }
	// # sets: 1
	  int current_stmt = 0;int i0 = 0;
	  int i1 = 0;
	  while (i1 <= 260) {
	#pragma HLS pipeline II=1
	  if (current_stmt == 4) { current_stmt = 0; }
	
	      if (current_stmt == 0 && !(true)) {
	        current_stmt++;
	      } else if (current_stmt == 0 && (true && !(in.is_empty())) && (true)) {
	        pw_math_in02(in /* buf name */, ina, 0, ((1*i1)));
	        current_stmt++;
	      }
	      if (current_stmt == 1 && !(((((-2 + 1*i1)) >= 0)))) {
	        current_stmt++;
	      } else if (current_stmt == 1 && (true) && (((((-2 + 1*i1)) >= 0)))) {
	        soc(ina /* buf name */, so, 0, ((-2 + 1*i1)));
	        current_stmt++;
	      }
	      if (current_stmt == 2 && !(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0)))) {
	        current_stmt++;
	      } else if (current_stmt == 2 && (true) && (((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0)))) {
	        ds(so /* buf name */, sd, 0, ((-1 + (1*(((1*i1)) >> 1)))));
	        current_stmt++;
	      }
	      if (current_stmt == 3 && !(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-6 + 1*i1)) >= 0)))) {
	        current_stmt++;
	      } else if (current_stmt == 3 && (true) && (((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-6 + 1*i1)) >= 0)))) {
	        s1(sd /* buf name */, out, 0, ((-3 + (1*(((1*i1)) >> 1)))));
	        current_stmt++;
	      }
	    i1 = current_stmt == 4 ? i1 + 1 : i1;
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void oned_r_oc2_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    oned_r_oc2(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in02[root = 0, pw_math_in01] -> in[pw_math_in01] : 0 <= pw_math_in01 <= 260 }
const int pw_math_in02_read_pipe0_num_transfers = 261;
  // { s1[root = 0, y1] -> out[y1] : 0 <= y1 <= 127 }
const int s1_write_pipe0_num_transfers = 128;


extern "C" {

void oned_r_oc2_accel(hw_uint<32>* pw_math_in02_read_pipe0, hw_uint<32>* s1_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in02_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = s1_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in02_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = s1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in02_read_pipe0_channel;
  static HWStream<hw_uint<32> > s1_write_pipe0_channel;

  burst_read<32>(pw_math_in02_read_pipe0, pw_math_in02_read_pipe0_channel, pw_math_in02_read_pipe0_num_transfers*size);

  oned_r_oc2_wrapper(pw_math_in02_read_pipe0_channel, s1_write_pipe0_channel, size);

  burst_write<32>(s1_write_pipe0, s1_write_pipe0_channel, s1_write_pipe0_num_transfers*size);
}

}
extern "C" {

void oned_r_oc2_rdai(HWStream<hw_uint<32> >& pw_math_in02_read_pipe0, HWStream<hw_uint<32> >&  s1_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in02_read_pipe0
#pragma HLS INTERFACE axis register port = s1_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  oned_r_oc2(pw_math_in02_read_pipe0, s1_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

