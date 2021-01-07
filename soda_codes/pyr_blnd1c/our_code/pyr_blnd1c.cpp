#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h_merged_compute_units.h
#include "local_laplacian_filters_compute.h_merged_compute_units.h"

struct gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_merged_banks_2_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct gp_in_on_chip_1_buf4_cache {
  // Is register ? 1
  // # of banks: 1
  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_merged_banks_2_cache gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_merged_banks_2;
};



inline void gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_write(hw_uint<32> & gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
  gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_merged_banks_2.push(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_56063_38_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld62, int gp_in_on_chip_1_buf4_ld61, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_56063_38 read pattern: { load_to_gp_in_on_chip_1_buf4_to_gp_56063[root = 0, gp_in_on_chip_1_buf4_ld62, gp_in_on_chip_1_buf4_ld61] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld61, gp_in_on_chip_1_buf4_ld62] : 0 <= gp_in_on_chip_1_buf4_ld62 <= 31 and 0 <= gp_in_on_chip_1_buf4_ld61 <= 31 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_to_gp_56063[root = 0, gp_in_on_chip_1_buf4_ld62, gp_in_on_chip_1_buf4_ld61] -> [2 + 2gp_in_on_chip_1_buf4_ld62, 2 + 2gp_in_on_chip_1_buf4_ld61, 6] : 0 <= gp_in_on_chip_1_buf4_ld62 <= 31 and 0 <= gp_in_on_chip_1_buf4_ld61 <= 31 }
  // Write schedule: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_merged_banks_2.peek_0();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_66467_36_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld66, int gp_in_on_chip_1_buf4_ld65, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_66467_36 read pattern: { load_to_gp_in_on_chip_1_buf4_to_gp_66467[root = 0, gp_in_on_chip_1_buf4_ld66, gp_in_on_chip_1_buf4_ld65] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld65, gp_in_on_chip_1_buf4_ld66] : 0 <= gp_in_on_chip_1_buf4_ld66 <= 31 and 0 <= gp_in_on_chip_1_buf4_ld65 <= 31 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_to_gp_66467[root = 0, gp_in_on_chip_1_buf4_ld66, gp_in_on_chip_1_buf4_ld65] -> [2 + 2gp_in_on_chip_1_buf4_ld66, 2 + 2gp_in_on_chip_1_buf4_ld65, 4] : 0 <= gp_in_on_chip_1_buf4_ld66 <= 31 and 0 <= gp_in_on_chip_1_buf4_ld65 <= 31 }
  // Write schedule: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_merged_banks_2.peek_0();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43;
  return 0;
}

// # of bundles = 3
// gp_in_on_chip_16_merged59_write
//	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43
inline void gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_write_bundle_write(hw_uint<32>& gp_in_on_chip_16_merged59_write, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_res = gp_in_on_chip_16_merged59_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_write(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_43_res, gp_in_on_chip_1_buf4, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
}

// load_to_gp_in_on_chip_1_buf4_to_gp_56063_read
//	gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_56063_38
inline hw_uint<32> gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_56063_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld62, int gp_in_on_chip_1_buf4_ld61, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_56063_38

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_56063_38_res = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_56063_38_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_1_buf4_ld62, gp_in_on_chip_1_buf4_ld61, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_56063_38_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_to_gp_66467_read
//	gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_66467_36
inline hw_uint<32> gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_66467_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld66, int gp_in_on_chip_1_buf4_ld65, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_66467_36

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_66467_36_res = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_66467_36_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_1_buf4_ld66, gp_in_on_chip_1_buf4_ld65, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_66467_36_res);
	return result;
}

struct gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41_to_gp_in_on_chip_1_buf4_FIFO_buf92_us15_3_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 32
	// # of read delays: 33
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31
	fifo<hw_uint<32> , 32> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(31 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_1_buf4_FIFO_buf92_cache {
  // Is register ? 0
  // # of banks: 1
  gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41_to_gp_in_on_chip_1_buf4_FIFO_buf92_us15_3_cache gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41_to_gp_in_on_chip_1_buf4_FIFO_buf92_us15_3;
};



inline void gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41_write(hw_uint<32> & gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41, gp_in_on_chip_1_buf4_FIFO_buf92_cache& gp_in_on_chip_1_buf4_FIFO_buf92, int root, int gp_in_on_chip_1_buf4_to_gp_560_ld94, int gp_in_on_chip_1_buf4_to_gp_560_ld93, int dynamic_address) {
  gp_in_on_chip_1_buf4_FIFO_buf92.gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41_to_gp_in_on_chip_1_buf4_FIFO_buf92_us15_3.push(gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf92_us15_3_select(gp_in_on_chip_1_buf4_FIFO_buf92_cache& gp_in_on_chip_1_buf4_FIFO_buf92, int root, int us_gp_in_on_chip_1_buf413, int us_gp_in_on_chip_1_buf414, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf92_us15_3 read pattern: { us15[root = 0, us_gp_in_on_chip_1_buf413, us_gp_in_on_chip_1_buf414] -> gp_in_on_chip_1_buf4_FIFO_buf92[o0, o1] : 0 <= us_gp_in_on_chip_1_buf413 <= 63 and 0 <= us_gp_in_on_chip_1_buf414 <= 63 and -1 + us_gp_in_on_chip_1_buf414 <= 2o0 <= us_gp_in_on_chip_1_buf414 and -1 + us_gp_in_on_chip_1_buf413 <= 2o1 <= us_gp_in_on_chip_1_buf413 }
  // Read schedule : { us15[root = 0, us_gp_in_on_chip_1_buf413, us_gp_in_on_chip_1_buf414] -> [2 + us_gp_in_on_chip_1_buf413, 2 + us_gp_in_on_chip_1_buf414, 8] : 0 <= us_gp_in_on_chip_1_buf413 <= 63 and 0 <= us_gp_in_on_chip_1_buf414 <= 63 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf9295[root = 0, gp_in_on_chip_1_buf4_to_gp_560_ld94, gp_in_on_chip_1_buf4_to_gp_560_ld93] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_560_ld94, 2 + 2gp_in_on_chip_1_buf4_to_gp_560_ld93, 7] : 0 <= gp_in_on_chip_1_buf4_to_gp_560_ld94 <= 31 and 0 <= gp_in_on_chip_1_buf4_to_gp_560_ld93 <= 31 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41 = gp_in_on_chip_1_buf4_FIFO_buf92.gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41_to_gp_in_on_chip_1_buf4_FIFO_buf92_us15_3.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_1_buf413) % 2 == 0 && 61 - us_gp_in_on_chip_1_buf414 >= 0) ? ((31 - floord(2*us_gp_in_on_chip_1_buf414, 4))) : 0);
  return value_gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_write
//	gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41
inline void gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_write, gp_in_on_chip_1_buf4_FIFO_buf92_cache& gp_in_on_chip_1_buf4_FIFO_buf92, int root, int gp_in_on_chip_1_buf4_to_gp_560_ld94, int gp_in_on_chip_1_buf4_to_gp_560_ld93, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41_res = load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41_write(gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_41_res, gp_in_on_chip_1_buf4_FIFO_buf92, root, gp_in_on_chip_1_buf4_to_gp_560_ld94, gp_in_on_chip_1_buf4_to_gp_560_ld93, dynamic_address);
}

// us15_read
//	gp_in_on_chip_1_buf4_FIFO_buf92_us15_3
inline hw_uint<32> gp_in_on_chip_1_buf4_FIFO_buf92_us15_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf92_cache& gp_in_on_chip_1_buf4_FIFO_buf92, int root, int us_gp_in_on_chip_1_buf413, int us_gp_in_on_chip_1_buf414, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_FIFO_buf92_us15_3

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf92_us15_3_res = gp_in_on_chip_1_buf4_FIFO_buf92_us15_3_select(gp_in_on_chip_1_buf4_FIFO_buf92, root, us_gp_in_on_chip_1_buf413, us_gp_in_on_chip_1_buf414, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_FIFO_buf92_us15_3_res);
	return result;
}

struct gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39_to_gp_in_on_chip_1_buf4_FIFO_buf96_us27_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 32
	// # of read delays: 33
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31
	fifo<hw_uint<32> , 32> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(31 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_1_buf4_FIFO_buf96_cache {
  // Is register ? 0
  // # of banks: 1
  gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39_to_gp_in_on_chip_1_buf4_FIFO_buf96_us27_1_cache gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39_to_gp_in_on_chip_1_buf4_FIFO_buf96_us27_1;
};



inline void gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39_write(hw_uint<32> & gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39, gp_in_on_chip_1_buf4_FIFO_buf96_cache& gp_in_on_chip_1_buf4_FIFO_buf96, int root, int gp_in_on_chip_1_buf4_to_gp_664_ld98, int gp_in_on_chip_1_buf4_to_gp_664_ld97, int dynamic_address) {
  gp_in_on_chip_1_buf4_FIFO_buf96.gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39_to_gp_in_on_chip_1_buf4_FIFO_buf96_us27_1.push(gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf96_us27_1_select(gp_in_on_chip_1_buf4_FIFO_buf96_cache& gp_in_on_chip_1_buf4_FIFO_buf96, int root, int us_gp_in_on_chip_1_buf425, int us_gp_in_on_chip_1_buf426, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf96_us27_1 read pattern: { us27[root = 0, us_gp_in_on_chip_1_buf425, us_gp_in_on_chip_1_buf426] -> gp_in_on_chip_1_buf4_FIFO_buf96[o0, o1] : 0 <= us_gp_in_on_chip_1_buf425 <= 63 and 0 <= us_gp_in_on_chip_1_buf426 <= 63 and -1 + us_gp_in_on_chip_1_buf426 <= 2o0 <= us_gp_in_on_chip_1_buf426 and -1 + us_gp_in_on_chip_1_buf425 <= 2o1 <= us_gp_in_on_chip_1_buf425 }
  // Read schedule : { us27[root = 0, us_gp_in_on_chip_1_buf425, us_gp_in_on_chip_1_buf426] -> [2 + us_gp_in_on_chip_1_buf425, 2 + us_gp_in_on_chip_1_buf426, 14] : 0 <= us_gp_in_on_chip_1_buf425 <= 63 and 0 <= us_gp_in_on_chip_1_buf426 <= 63 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf9699[root = 0, gp_in_on_chip_1_buf4_to_gp_664_ld98, gp_in_on_chip_1_buf4_to_gp_664_ld97] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_664_ld98, 2 + 2gp_in_on_chip_1_buf4_to_gp_664_ld97, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_664_ld98 <= 31 and 0 <= gp_in_on_chip_1_buf4_to_gp_664_ld97 <= 31 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39 = gp_in_on_chip_1_buf4_FIFO_buf96.gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39_to_gp_in_on_chip_1_buf4_FIFO_buf96_us27_1.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_1_buf425) % 2 == 0 && 61 - us_gp_in_on_chip_1_buf426 >= 0) ? ((31 - floord(2*us_gp_in_on_chip_1_buf426, 4))) : 0);
  return value_gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_write
//	gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39
inline void gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_write, gp_in_on_chip_1_buf4_FIFO_buf96_cache& gp_in_on_chip_1_buf4_FIFO_buf96, int root, int gp_in_on_chip_1_buf4_to_gp_664_ld98, int gp_in_on_chip_1_buf4_to_gp_664_ld97, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39_res = load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39_write(gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_39_res, gp_in_on_chip_1_buf4_FIFO_buf96, root, gp_in_on_chip_1_buf4_to_gp_664_ld98, gp_in_on_chip_1_buf4_to_gp_664_ld97, dynamic_address);
}

// us27_read
//	gp_in_on_chip_1_buf4_FIFO_buf96_us27_1
inline hw_uint<32> gp_in_on_chip_1_buf4_FIFO_buf96_us27_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf96_cache& gp_in_on_chip_1_buf4_FIFO_buf96, int root, int us_gp_in_on_chip_1_buf425, int us_gp_in_on_chip_1_buf426, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_FIFO_buf96_us27_1

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf96_us27_1_res = gp_in_on_chip_1_buf4_FIFO_buf96_us27_1_select(gp_in_on_chip_1_buf4_FIFO_buf96, root, us_gp_in_on_chip_1_buf425, us_gp_in_on_chip_1_buf426, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_FIFO_buf96_us27_1_res);
	return result;
}

struct gp_in_on_chip_1_buf4_us12_us15_2_to_gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct gp_in_on_chip_1_buf4_us12_cache {
  // Is register ? 1
  // # of banks: 1
  gp_in_on_chip_1_buf4_us12_us15_2_to_gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32_cache gp_in_on_chip_1_buf4_us12_us15_2_to_gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32;
};



inline void gp_in_on_chip_1_buf4_us12_us15_2_write(hw_uint<32> & gp_in_on_chip_1_buf4_us12_us15_2, gp_in_on_chip_1_buf4_us12_cache& gp_in_on_chip_1_buf4_us12, int root, int us_gp_in_on_chip_1_buf413, int us_gp_in_on_chip_1_buf414, int dynamic_address) {
  gp_in_on_chip_1_buf4_us12.gp_in_on_chip_1_buf4_us12_us15_2_to_gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32.push(gp_in_on_chip_1_buf4_us12_us15_2);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32_select(gp_in_on_chip_1_buf4_us12_cache& gp_in_on_chip_1_buf4_us12, int root, int gp_in_on_chip_1_buf4_us12_ld70, int gp_in_on_chip_1_buf4_us12_ld69, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32 read pattern: { load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871[root = 0, gp_in_on_chip_1_buf4_us12_ld70, gp_in_on_chip_1_buf4_us12_ld69] -> gp_in_on_chip_1_buf4_us12[gp_in_on_chip_1_buf4_us12_ld69, gp_in_on_chip_1_buf4_us12_ld70] : 0 <= gp_in_on_chip_1_buf4_us12_ld70 <= 63 and 0 <= gp_in_on_chip_1_buf4_us12_ld69 <= 63 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871[root = 0, gp_in_on_chip_1_buf4_us12_ld70, gp_in_on_chip_1_buf4_us12_ld69] -> [2 + gp_in_on_chip_1_buf4_us12_ld70, 2 + gp_in_on_chip_1_buf4_us12_ld69, 9] : 0 <= gp_in_on_chip_1_buf4_us12_ld70 <= 63 and 0 <= gp_in_on_chip_1_buf4_us12_ld69 <= 63 }
  // Write schedule: { us15[root = 0, us_gp_in_on_chip_1_buf413, us_gp_in_on_chip_1_buf414] -> [2 + us_gp_in_on_chip_1_buf413, 2 + us_gp_in_on_chip_1_buf414, 8] : 0 <= us_gp_in_on_chip_1_buf413 <= 63 and 0 <= us_gp_in_on_chip_1_buf414 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us12_us15_2 = gp_in_on_chip_1_buf4_us12.gp_in_on_chip_1_buf4_us12_us15_2_to_gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_us12_us15_2;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_read
//	gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32
inline hw_uint<32> gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_read_bundle_read(gp_in_on_chip_1_buf4_us12_cache& gp_in_on_chip_1_buf4_us12, int root, int gp_in_on_chip_1_buf4_us12_ld70, int gp_in_on_chip_1_buf4_us12_ld69, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32_res = gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32_select(gp_in_on_chip_1_buf4_us12, root, gp_in_on_chip_1_buf4_us12_ld70, gp_in_on_chip_1_buf4_us12_ld69, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_32_res);
	return result;
}

// us15_write
//	gp_in_on_chip_1_buf4_us12_us15_2
inline void gp_in_on_chip_1_buf4_us12_us15_write_bundle_write(hw_uint<32>& us15_write, gp_in_on_chip_1_buf4_us12_cache& gp_in_on_chip_1_buf4_us12, int root, int us_gp_in_on_chip_1_buf413, int us_gp_in_on_chip_1_buf414, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us12_us15_2_res = us15_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us12_us15_2_write(gp_in_on_chip_1_buf4_us12_us15_2_res, gp_in_on_chip_1_buf4_us12, root, us_gp_in_on_chip_1_buf413, us_gp_in_on_chip_1_buf414, dynamic_address);
}

struct gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct gp_in_on_chip_1_buf4_us12_FIFO_buf100_cache {
  // Is register ? 1
  // # of banks: 1
  gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55_cache gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55;
};



inline void gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33_write(hw_uint<32> & gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33, gp_in_on_chip_1_buf4_us12_FIFO_buf100_cache& gp_in_on_chip_1_buf4_us12_FIFO_buf100, int root, int gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, int gp_in_on_chip_1_buf4_us12_to_gp_168_ld101, int dynamic_address) {
  gp_in_on_chip_1_buf4_us12_FIFO_buf100.gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55.push(gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55_select(gp_in_on_chip_1_buf4_us12_FIFO_buf100_cache& gp_in_on_chip_1_buf4_us12_FIFO_buf100, int root, int lp_in_on_chip_017, int lp_in_on_chip_018, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55 read pattern: { diff19[root = 0, lp_in_on_chip_017, lp_in_on_chip_018] -> gp_in_on_chip_1_buf4_us12_FIFO_buf100[lp_in_on_chip_018, lp_in_on_chip_017] : 0 <= lp_in_on_chip_017 <= 63 and 0 <= lp_in_on_chip_018 <= 63 }
  // Read schedule : { diff19[root = 0, lp_in_on_chip_017, lp_in_on_chip_018] -> [2 + lp_in_on_chip_017, 2 + lp_in_on_chip_018, 11] : 0 <= lp_in_on_chip_017 <= 63 and 0 <= lp_in_on_chip_018 <= 63 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103[root = 0, gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, gp_in_on_chip_1_buf4_us12_to_gp_168_ld101] -> [2 + gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, 2 + gp_in_on_chip_1_buf4_us12_to_gp_168_ld101, 10] : 0 <= gp_in_on_chip_1_buf4_us12_to_gp_168_ld102 <= 63 and 0 <= gp_in_on_chip_1_buf4_us12_to_gp_168_ld101 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33 = gp_in_on_chip_1_buf4_us12_FIFO_buf100.gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33;
  return 0;
}

// # of bundles = 2
// diff19_read
//	gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55
inline hw_uint<32> gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_read_bundle_read(gp_in_on_chip_1_buf4_us12_FIFO_buf100_cache& gp_in_on_chip_1_buf4_us12_FIFO_buf100, int root, int lp_in_on_chip_017, int lp_in_on_chip_018, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55_res = gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55_select(gp_in_on_chip_1_buf4_us12_FIFO_buf100, root, lp_in_on_chip_017, lp_in_on_chip_018, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_55_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_write
//	gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33
inline void gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_write, gp_in_on_chip_1_buf4_us12_FIFO_buf100_cache& gp_in_on_chip_1_buf4_us12_FIFO_buf100, int root, int gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, int gp_in_on_chip_1_buf4_us12_to_gp_168_ld101, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33_res = load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33_write(gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_33_res, gp_in_on_chip_1_buf4_us12_FIFO_buf100, root, gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, gp_in_on_chip_1_buf4_us12_to_gp_168_ld101, dynamic_address);
}

struct gp_in_on_chip_1_buf4_us24_us27_0_to_gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct gp_in_on_chip_1_buf4_us24_cache {
  // Is register ? 1
  // # of banks: 1
  gp_in_on_chip_1_buf4_us24_us27_0_to_gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28_cache gp_in_on_chip_1_buf4_us24_us27_0_to_gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28;
};



inline void gp_in_on_chip_1_buf4_us24_us27_0_write(hw_uint<32> & gp_in_on_chip_1_buf4_us24_us27_0, gp_in_on_chip_1_buf4_us24_cache& gp_in_on_chip_1_buf4_us24, int root, int us_gp_in_on_chip_1_buf425, int us_gp_in_on_chip_1_buf426, int dynamic_address) {
  gp_in_on_chip_1_buf4_us24.gp_in_on_chip_1_buf4_us24_us27_0_to_gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28.push(gp_in_on_chip_1_buf4_us24_us27_0);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28_select(gp_in_on_chip_1_buf4_us24_cache& gp_in_on_chip_1_buf4_us24, int root, int gp_in_on_chip_1_buf4_us24_ld74, int gp_in_on_chip_1_buf4_us24_ld73, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28 read pattern: { load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275[root = 0, gp_in_on_chip_1_buf4_us24_ld74, gp_in_on_chip_1_buf4_us24_ld73] -> gp_in_on_chip_1_buf4_us24[gp_in_on_chip_1_buf4_us24_ld73, gp_in_on_chip_1_buf4_us24_ld74] : 0 <= gp_in_on_chip_1_buf4_us24_ld74 <= 63 and 0 <= gp_in_on_chip_1_buf4_us24_ld73 <= 63 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275[root = 0, gp_in_on_chip_1_buf4_us24_ld74, gp_in_on_chip_1_buf4_us24_ld73] -> [2 + gp_in_on_chip_1_buf4_us24_ld74, 2 + gp_in_on_chip_1_buf4_us24_ld73, 15] : 0 <= gp_in_on_chip_1_buf4_us24_ld74 <= 63 and 0 <= gp_in_on_chip_1_buf4_us24_ld73 <= 63 }
  // Write schedule: { us27[root = 0, us_gp_in_on_chip_1_buf425, us_gp_in_on_chip_1_buf426] -> [2 + us_gp_in_on_chip_1_buf425, 2 + us_gp_in_on_chip_1_buf426, 14] : 0 <= us_gp_in_on_chip_1_buf425 <= 63 and 0 <= us_gp_in_on_chip_1_buf426 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us24_us27_0 = gp_in_on_chip_1_buf4_us24.gp_in_on_chip_1_buf4_us24_us27_0_to_gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_us24_us27_0;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_read
//	gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28
inline hw_uint<32> gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_read_bundle_read(gp_in_on_chip_1_buf4_us24_cache& gp_in_on_chip_1_buf4_us24, int root, int gp_in_on_chip_1_buf4_us24_ld74, int gp_in_on_chip_1_buf4_us24_ld73, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28_res = gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28_select(gp_in_on_chip_1_buf4_us24, root, gp_in_on_chip_1_buf4_us24_ld74, gp_in_on_chip_1_buf4_us24_ld73, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_28_res);
	return result;
}

// us27_write
//	gp_in_on_chip_1_buf4_us24_us27_0
inline void gp_in_on_chip_1_buf4_us24_us27_write_bundle_write(hw_uint<32>& us27_write, gp_in_on_chip_1_buf4_us24_cache& gp_in_on_chip_1_buf4_us24, int root, int us_gp_in_on_chip_1_buf425, int us_gp_in_on_chip_1_buf426, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us24_us27_0_res = us27_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us24_us27_0_write(gp_in_on_chip_1_buf4_us24_us27_0_res, gp_in_on_chip_1_buf4_us24, root, us_gp_in_on_chip_1_buf425, us_gp_in_on_chip_1_buf426, dynamic_address);
}

struct gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct gp_in_on_chip_1_buf4_us24_FIFO_buf104_cache {
  // Is register ? 1
  // # of banks: 1
  gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6_cache gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6;
};



inline void gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29_write(hw_uint<32> & gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29, gp_in_on_chip_1_buf4_us24_FIFO_buf104_cache& gp_in_on_chip_1_buf4_us24_FIFO_buf104, int root, int gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, int gp_in_on_chip_1_buf4_us24_to_gp_272_ld105, int dynamic_address) {
  gp_in_on_chip_1_buf4_us24_FIFO_buf104.gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6.push(gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6_select(gp_in_on_chip_1_buf4_us24_FIFO_buf104_cache& gp_in_on_chip_1_buf4_us24_FIFO_buf104, int root, int lp_in_on_chip_0_buf16_reconstruct_lp2021, int lp_in_on_chip_0_buf16_reconstruct_lp2022, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6 read pattern: { rc28[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022] -> gp_in_on_chip_1_buf4_us24_FIFO_buf104[lp_in_on_chip_0_buf16_reconstruct_lp2022, lp_in_on_chip_0_buf16_reconstruct_lp2021] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2021 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2022 <= 63 }
  // Read schedule : { rc28[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp2021, 2 + lp_in_on_chip_0_buf16_reconstruct_lp2022, 17] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2021 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2022 <= 63 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107[root = 0, gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, gp_in_on_chip_1_buf4_us24_to_gp_272_ld105] -> [2 + gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, 2 + gp_in_on_chip_1_buf4_us24_to_gp_272_ld105, 16] : 0 <= gp_in_on_chip_1_buf4_us24_to_gp_272_ld106 <= 63 and 0 <= gp_in_on_chip_1_buf4_us24_to_gp_272_ld105 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29 = gp_in_on_chip_1_buf4_us24_FIFO_buf104.gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_write
//	gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29
inline void gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_write, gp_in_on_chip_1_buf4_us24_FIFO_buf104_cache& gp_in_on_chip_1_buf4_us24_FIFO_buf104, int root, int gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, int gp_in_on_chip_1_buf4_us24_to_gp_272_ld105, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29_res = load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29_write(gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_29_res, gp_in_on_chip_1_buf4_us24_FIFO_buf104, root, gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, gp_in_on_chip_1_buf4_us24_to_gp_272_ld105, dynamic_address);
}

// rc28_read
//	gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6
inline hw_uint<32> gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_read_bundle_read(gp_in_on_chip_1_buf4_us24_FIFO_buf104_cache& gp_in_on_chip_1_buf4_us24_FIFO_buf104, int root, int lp_in_on_chip_0_buf16_reconstruct_lp2021, int lp_in_on_chip_0_buf16_reconstruct_lp2022, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6_res = gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6_select(gp_in_on_chip_1_buf4_us24_FIFO_buf104, root, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_6_res);
	return result;
}

struct in_on_chip_pw_math_in03_9_merged_banks_2_cache {
	// RAM Box: {[0, 64], [0, 64]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct in_on_chip_cache {
  // Is register ? 1
  // # of banks: 1
  in_on_chip_pw_math_in03_9_merged_banks_2_cache in_on_chip_pw_math_in03_9_merged_banks_2;
};



inline void in_on_chip_pw_math_in03_9_write(hw_uint<32> & in_on_chip_pw_math_in03_9, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
  in_on_chip.in_on_chip_pw_math_in03_9_merged_banks_2.push(in_on_chip_pw_math_in03_9);
}

inline hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_07679_22_select(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld78, int in_on_chip_ld77, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_load_to_in_on_chip_to_gp_07679_22 read pattern: { load_to_in_on_chip_to_gp_07679[root = 0, in_on_chip_ld78, in_on_chip_ld77] -> in_on_chip[in_on_chip_ld77, in_on_chip_ld78] : 0 <= in_on_chip_ld78 <= 64 and 0 <= in_on_chip_ld77 <= 64 }
  // Read schedule : { load_to_in_on_chip_to_gp_07679[root = 0, in_on_chip_ld78, in_on_chip_ld77] -> [in_on_chip_ld78, in_on_chip_ld77, 1] : 0 <= in_on_chip_ld78 <= 64 and 0 <= in_on_chip_ld77 <= 64 }
  // Write schedule: { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> [pw_math_in01, pw_math_in02, 0] : 0 <= pw_math_in01 <= 64 and 0 <= pw_math_in02 <= 64 }
  auto value_in_on_chip_pw_math_in03_9 = in_on_chip.in_on_chip_pw_math_in03_9_merged_banks_2.peek_0();
  return value_in_on_chip_pw_math_in03_9;
  return 0;
}

inline hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_18083_20_select(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld82, int in_on_chip_ld81, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_load_to_in_on_chip_to_gp_18083_20 read pattern: { load_to_in_on_chip_to_gp_18083[root = 0, in_on_chip_ld82, in_on_chip_ld81] -> in_on_chip[in_on_chip_ld81, in_on_chip_ld82] : 0 < in_on_chip_ld82 <= 64 and 0 < in_on_chip_ld81 <= 64 }
  // Read schedule : { load_to_in_on_chip_to_gp_18083[root = 0, in_on_chip_ld82, in_on_chip_ld81] -> [in_on_chip_ld82, in_on_chip_ld81, 21] : 0 < in_on_chip_ld82 <= 64 and 0 < in_on_chip_ld81 <= 64 }
  // Write schedule: { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> [pw_math_in01, pw_math_in02, 0] : 0 <= pw_math_in01 <= 64 and 0 <= pw_math_in02 <= 64 }
  auto value_in_on_chip_pw_math_in03_9 = in_on_chip.in_on_chip_pw_math_in03_9_merged_banks_2.peek_0();
  return value_in_on_chip_pw_math_in03_9;
  return 0;
}

// # of bundles = 3
// load_to_in_on_chip_to_gp_07679_read
//	in_on_chip_load_to_in_on_chip_to_gp_07679_22
inline hw_uint<32> in_on_chip_load_to_in_on_chip_to_gp_07679_read_bundle_read(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld78, int in_on_chip_ld77, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_load_to_in_on_chip_to_gp_07679_22

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_07679_22_res = in_on_chip_load_to_in_on_chip_to_gp_07679_22_select(in_on_chip, root, in_on_chip_ld78, in_on_chip_ld77, dynamic_address);
	set_at<0, 32>(result, in_on_chip_load_to_in_on_chip_to_gp_07679_22_res);
	return result;
}

// load_to_in_on_chip_to_gp_18083_read
//	in_on_chip_load_to_in_on_chip_to_gp_18083_20
inline hw_uint<32> in_on_chip_load_to_in_on_chip_to_gp_18083_read_bundle_read(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld82, int in_on_chip_ld81, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_load_to_in_on_chip_to_gp_18083_20

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_18083_20_res = in_on_chip_load_to_in_on_chip_to_gp_18083_20_select(in_on_chip, root, in_on_chip_ld82, in_on_chip_ld81, dynamic_address);
	set_at<0, 32>(result, in_on_chip_load_to_in_on_chip_to_gp_18083_20_res);
	return result;
}

// pw_math_in03_write
//	in_on_chip_pw_math_in03_9
inline void in_on_chip_pw_math_in03_write_bundle_write(hw_uint<32>& pw_math_in03_write, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
	hw_uint<32>  in_on_chip_pw_math_in03_9_res = pw_math_in03_write.extract<0, 31>();
	in_on_chip_pw_math_in03_9_write(in_on_chip_pw_math_in03_9_res, in_on_chip, root, pw_math_in01, pw_math_in02, dynamic_address);
}

struct in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9_cache {
	// RAM Box: {[0, 64], [0, 64]}
	// Capacity: 133
	// # of read delays: 9
  // 0, 1, 2, 65, 66, 67, 130, 131, 132
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 62> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 62> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_65() {
		return f6;
	}

	inline hw_uint<32>  peek_66() {
		return f8;
	}

	inline hw_uint<32>  peek_67() {
		return f10;
	}

	inline hw_uint<32>  peek_129() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_130() {
		return f12;
	}

	inline hw_uint<32>  peek_131() {
		return f14;
	}

	inline hw_uint<32>  peek_132() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 62
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 62 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 62
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 62 reading from capacity: 1
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

struct in_on_chip_FIFO_buf108_cache {
  // Is register ? 0
  // # of banks: 1
  in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9_cache in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9;
};



inline void in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_write(hw_uint<32> & in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25, in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int in_on_chip_to_gp_076_ld110, int in_on_chip_to_gp_076_ld109, int dynamic_address) {
  in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.push(in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25);
}

inline hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_44_select(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_44 read pattern: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf108[2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Read schedule : { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
  auto value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25 = in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.peek_2();
  return value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_45_select(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_45 read pattern: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf108[1 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Read schedule : { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
  auto value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25 = in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.peek_1();
  return value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_46_select(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_46 read pattern: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf108[2 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Read schedule : { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
  auto value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25 = in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.peek_0();
  return value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_47_select(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_47 read pattern: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf108[2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Read schedule : { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
  auto value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25 = in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.peek_67();
  return value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_48_select(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_48 read pattern: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf108[1 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Read schedule : { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
  auto value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25 = in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.peek_66();
  return value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_49_select(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_49 read pattern: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf108[2 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Read schedule : { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
  auto value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25 = in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.peek_65();
  return value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_50_select(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_50 read pattern: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf108[2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Read schedule : { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
  auto value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25 = in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.peek_132();
  return value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_51_select(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_51 read pattern: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf108[1 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Read schedule : { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
  auto value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25 = in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.peek_131();
  return value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_52_select(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_52 read pattern: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf108[2 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Read schedule : { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
  auto value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25 = in_on_chip_FIFO_buf108.in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_merged_banks_9.peek_130();
  return value_in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25;
  return 0;
}

// # of bundles = 2
// gp_in_on_chip_16_merged59_read
//	in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_44
//	in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_45
//	in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_46
//	in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_47
//	in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_48
//	in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_49
//	in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_50
//	in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_51
//	in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_52
inline hw_uint<288> in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_read_bundle_read(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
  // # of ports in bundle: 9
    // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_44
    // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_45
    // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_46
    // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_47
    // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_48
    // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_49
    // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_50
    // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_51
    // in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_52

	hw_uint<288> result;
	hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_44_res = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_44_select(in_on_chip_FIFO_buf108, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<0, 288>(result, in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_44_res);
	hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_45_res = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_45_select(in_on_chip_FIFO_buf108, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<32, 288>(result, in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_45_res);
	hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_46_res = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_46_select(in_on_chip_FIFO_buf108, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<64, 288>(result, in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_46_res);
	hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_47_res = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_47_select(in_on_chip_FIFO_buf108, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<96, 288>(result, in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_47_res);
	hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_48_res = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_48_select(in_on_chip_FIFO_buf108, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<128, 288>(result, in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_48_res);
	hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_49_res = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_49_select(in_on_chip_FIFO_buf108, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<160, 288>(result, in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_49_res);
	hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_50_res = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_50_select(in_on_chip_FIFO_buf108, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<192, 288>(result, in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_50_res);
	hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_51_res = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_51_select(in_on_chip_FIFO_buf108, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<224, 288>(result, in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_51_res);
	hw_uint<32>  in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_52_res = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_52_select(in_on_chip_FIFO_buf108, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<256, 288>(result, in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_52_res);
	return result;
}

// load_to_in_on_chip_FIFO_buf108111_write
//	in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25
inline void in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_write_bundle_write(hw_uint<32>& load_to_in_on_chip_FIFO_buf108111_write, in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int in_on_chip_to_gp_076_ld110, int in_on_chip_to_gp_076_ld109, int dynamic_address) {
	hw_uint<32>  in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_res = load_to_in_on_chip_FIFO_buf108111_write.extract<0, 31>();
	in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_write(in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_25_res, in_on_chip_FIFO_buf108, root, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, dynamic_address);
}

struct in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23_to_in_on_chip_FIFO_buf112_diff19_54_cache {
	// RAM Box: {[1, 64], [1, 64]}
	// Capacity: 65
	// # of read delays: 65
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64
	fifo<hw_uint<32> , 65> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(64 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_on_chip_FIFO_buf112_cache {
  // Is register ? 0
  // # of banks: 1
  in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23_to_in_on_chip_FIFO_buf112_diff19_54_cache in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23_to_in_on_chip_FIFO_buf112_diff19_54;
};



inline void in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23_write(hw_uint<32> & in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23, in_on_chip_FIFO_buf112_cache& in_on_chip_FIFO_buf112, int root, int in_on_chip_to_gp_180_ld114, int in_on_chip_to_gp_180_ld113, int dynamic_address) {
  in_on_chip_FIFO_buf112.in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23_to_in_on_chip_FIFO_buf112_diff19_54.push(in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23);
}

inline hw_uint<32>  in_on_chip_FIFO_buf112_diff19_54_select(in_on_chip_FIFO_buf112_cache& in_on_chip_FIFO_buf112, int root, int lp_in_on_chip_017, int lp_in_on_chip_018, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf112_diff19_54 read pattern: { diff19[root = 0, lp_in_on_chip_017, lp_in_on_chip_018] -> in_on_chip_FIFO_buf112[1 + lp_in_on_chip_018, 1 + lp_in_on_chip_017] : 0 <= lp_in_on_chip_017 <= 63 and 0 <= lp_in_on_chip_018 <= 63 }
  // Read schedule : { diff19[root = 0, lp_in_on_chip_017, lp_in_on_chip_018] -> [2 + lp_in_on_chip_017, 2 + lp_in_on_chip_018, 11] : 0 <= lp_in_on_chip_017 <= 63 and 0 <= lp_in_on_chip_018 <= 63 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf112115[root = 0, in_on_chip_to_gp_180_ld114, in_on_chip_to_gp_180_ld113] -> [in_on_chip_to_gp_180_ld114, in_on_chip_to_gp_180_ld113, 22] : 0 < in_on_chip_to_gp_180_ld114 <= 64 and 0 < in_on_chip_to_gp_180_ld113 <= 64 }
  auto value_in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23 = in_on_chip_FIFO_buf112.in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23_to_in_on_chip_FIFO_buf112_diff19_54.peek(/* one reader or all rams */ (62 - lp_in_on_chip_018 >= 0 && 62 - lp_in_on_chip_017 >= 0) ? (64) : (-63 + lp_in_on_chip_018 == 0 && 62 - lp_in_on_chip_017 >= 0) ? (64) : (-63 + lp_in_on_chip_017 == 0 && 62 - lp_in_on_chip_018 >= 0) ? ((63 - lp_in_on_chip_018)) : 0);
  return value_in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23;
  return 0;
}

// # of bundles = 2
// diff19_read
//	in_on_chip_FIFO_buf112_diff19_54
inline hw_uint<32> in_on_chip_FIFO_buf112_diff19_read_bundle_read(in_on_chip_FIFO_buf112_cache& in_on_chip_FIFO_buf112, int root, int lp_in_on_chip_017, int lp_in_on_chip_018, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_FIFO_buf112_diff19_54

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_FIFO_buf112_diff19_54_res = in_on_chip_FIFO_buf112_diff19_54_select(in_on_chip_FIFO_buf112, root, lp_in_on_chip_017, lp_in_on_chip_018, dynamic_address);
	set_at<0, 32>(result, in_on_chip_FIFO_buf112_diff19_54_res);
	return result;
}

// load_to_in_on_chip_FIFO_buf112115_write
//	in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23
inline void in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_write_bundle_write(hw_uint<32>& load_to_in_on_chip_FIFO_buf112115_write, in_on_chip_FIFO_buf112_cache& in_on_chip_FIFO_buf112, int root, int in_on_chip_to_gp_180_ld114, int in_on_chip_to_gp_180_ld113, int dynamic_address) {
	hw_uint<32>  in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23_res = load_to_in_on_chip_FIFO_buf112115_write.extract<0, 31>();
	in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23_write(in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_23_res, in_on_chip_FIFO_buf112, root, in_on_chip_to_gp_180_ld114, in_on_chip_to_gp_180_ld113, dynamic_address);
}

struct lp_in_on_chip_0_buf16_diff19_53_to_lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf16_cache {
  // Is register ? 1
  // # of banks: 1
  lp_in_on_chip_0_buf16_diff19_53_to_lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12_cache lp_in_on_chip_0_buf16_diff19_53_to_lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12;
};



inline void lp_in_on_chip_0_buf16_diff19_53_write(hw_uint<32> & lp_in_on_chip_0_buf16_diff19_53, lp_in_on_chip_0_buf16_cache& lp_in_on_chip_0_buf16, int root, int lp_in_on_chip_017, int lp_in_on_chip_018, int dynamic_address) {
  lp_in_on_chip_0_buf16.lp_in_on_chip_0_buf16_diff19_53_to_lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12.push(lp_in_on_chip_0_buf16_diff19_53);
}

inline hw_uint<32>  lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12_select(lp_in_on_chip_0_buf16_cache& lp_in_on_chip_0_buf16, int root, int lp_in_on_chip_0_buf16_ld86, int lp_in_on_chip_0_buf16_ld85, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12 read pattern: { load_to_lp_in_on_chip_0_buf16_to_gp_28487[root = 0, lp_in_on_chip_0_buf16_ld86, lp_in_on_chip_0_buf16_ld85] -> lp_in_on_chip_0_buf16[lp_in_on_chip_0_buf16_ld85, lp_in_on_chip_0_buf16_ld86] : 0 <= lp_in_on_chip_0_buf16_ld86 <= 63 and 0 <= lp_in_on_chip_0_buf16_ld85 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_0_buf16_to_gp_28487[root = 0, lp_in_on_chip_0_buf16_ld86, lp_in_on_chip_0_buf16_ld85] -> [2 + lp_in_on_chip_0_buf16_ld86, 2 + lp_in_on_chip_0_buf16_ld85, 12] : 0 <= lp_in_on_chip_0_buf16_ld86 <= 63 and 0 <= lp_in_on_chip_0_buf16_ld85 <= 63 }
  // Write schedule: { diff19[root = 0, lp_in_on_chip_017, lp_in_on_chip_018] -> [2 + lp_in_on_chip_017, 2 + lp_in_on_chip_018, 11] : 0 <= lp_in_on_chip_017 <= 63 and 0 <= lp_in_on_chip_018 <= 63 }
  auto value_lp_in_on_chip_0_buf16_diff19_53 = lp_in_on_chip_0_buf16.lp_in_on_chip_0_buf16_diff19_53_to_lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf16_diff19_53;
  return 0;
}

// # of bundles = 2
// diff19_write
//	lp_in_on_chip_0_buf16_diff19_53
inline void lp_in_on_chip_0_buf16_diff19_write_bundle_write(hw_uint<32>& diff19_write, lp_in_on_chip_0_buf16_cache& lp_in_on_chip_0_buf16, int root, int lp_in_on_chip_017, int lp_in_on_chip_018, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf16_diff19_53_res = diff19_write.extract<0, 31>();
	lp_in_on_chip_0_buf16_diff19_53_write(lp_in_on_chip_0_buf16_diff19_53_res, lp_in_on_chip_0_buf16, root, lp_in_on_chip_017, lp_in_on_chip_018, dynamic_address);
}

// load_to_lp_in_on_chip_0_buf16_to_gp_28487_read
//	lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12
inline hw_uint<32> lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_read_bundle_read(lp_in_on_chip_0_buf16_cache& lp_in_on_chip_0_buf16, int root, int lp_in_on_chip_0_buf16_ld86, int lp_in_on_chip_0_buf16_ld85, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12_res = lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12_select(lp_in_on_chip_0_buf16, root, lp_in_on_chip_0_buf16_ld86, lp_in_on_chip_0_buf16_ld85, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_12_res);
	return result;
}

struct lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17_to_lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf16_FIFO_buf116_cache {
  // Is register ? 1
  // # of banks: 1
  lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17_to_lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5_cache lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17_to_lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5;
};



inline void lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17_write(hw_uint<32> & lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17, lp_in_on_chip_0_buf16_FIFO_buf116_cache& lp_in_on_chip_0_buf16_FIFO_buf116, int root, int lp_in_on_chip_0_buf16_to_gp_284_ld118, int lp_in_on_chip_0_buf16_to_gp_284_ld117, int dynamic_address) {
  lp_in_on_chip_0_buf16_FIFO_buf116.lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17_to_lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5.push(lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17);
}

inline hw_uint<32>  lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5_select(lp_in_on_chip_0_buf16_FIFO_buf116_cache& lp_in_on_chip_0_buf16_FIFO_buf116, int root, int lp_in_on_chip_0_buf16_reconstruct_lp2021, int lp_in_on_chip_0_buf16_reconstruct_lp2022, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5 read pattern: { rc28[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022] -> lp_in_on_chip_0_buf16_FIFO_buf116[lp_in_on_chip_0_buf16_reconstruct_lp2022, lp_in_on_chip_0_buf16_reconstruct_lp2021] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2021 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2022 <= 63 }
  // Read schedule : { rc28[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp2021, 2 + lp_in_on_chip_0_buf16_reconstruct_lp2022, 17] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2021 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2022 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_0_buf16_FIFO_buf116119[root = 0, lp_in_on_chip_0_buf16_to_gp_284_ld118, lp_in_on_chip_0_buf16_to_gp_284_ld117] -> [2 + lp_in_on_chip_0_buf16_to_gp_284_ld118, 2 + lp_in_on_chip_0_buf16_to_gp_284_ld117, 13] : 0 <= lp_in_on_chip_0_buf16_to_gp_284_ld118 <= 63 and 0 <= lp_in_on_chip_0_buf16_to_gp_284_ld117 <= 63 }
  auto value_lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17 = lp_in_on_chip_0_buf16_FIFO_buf116.lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17_to_lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_write
//	lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17
inline void lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_write, lp_in_on_chip_0_buf16_FIFO_buf116_cache& lp_in_on_chip_0_buf16_FIFO_buf116, int root, int lp_in_on_chip_0_buf16_to_gp_284_ld118, int lp_in_on_chip_0_buf16_to_gp_284_ld117, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17_res = load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_write.extract<0, 31>();
	lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17_write(lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_17_res, lp_in_on_chip_0_buf16_FIFO_buf116, root, lp_in_on_chip_0_buf16_to_gp_284_ld118, lp_in_on_chip_0_buf16_to_gp_284_ld117, dynamic_address);
}

// rc28_read
//	lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5
inline hw_uint<32> lp_in_on_chip_0_buf16_FIFO_buf116_rc28_read_bundle_read(lp_in_on_chip_0_buf16_FIFO_buf116_cache& lp_in_on_chip_0_buf16_FIFO_buf116, int root, int lp_in_on_chip_0_buf16_reconstruct_lp2021, int lp_in_on_chip_0_buf16_reconstruct_lp2022, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5_res = lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5_select(lp_in_on_chip_0_buf16_FIFO_buf116, root, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf16_FIFO_buf116_rc28_5_res);
	return result;
}

struct lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_cache {
  // Is register ? 1
  // # of banks: 1
  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14_cache lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14;
};



inline void lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4_write(hw_uint<32> & lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, int root, int lp_in_on_chip_0_buf16_reconstruct_lp2021, int lp_in_on_chip_0_buf16_reconstruct_lp2022, int dynamic_address) {
  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23.lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14.push(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4);
}

inline hw_uint<32>  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14_select(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, int root, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14 read pattern: { load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89] -> lp_in_on_chip_0_buf16_reconstruct_lp20_buf23[lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, 2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89, 18] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89 <= 63 }
  // Write schedule: { rc28[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp2021, 2 + lp_in_on_chip_0_buf16_reconstruct_lp2022, 17] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2021 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2022 <= 63 }
  auto value_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4 = lp_in_on_chip_0_buf16_reconstruct_lp20_buf23.lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_read
//	lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14
inline hw_uint<32> lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_read_bundle_read(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, int root, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14_res = lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14_select(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, root, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_14_res);
	return result;
}

// rc28_write
//	lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4
inline void lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_write_bundle_write(hw_uint<32>& rc28_write, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, int root, int lp_in_on_chip_0_buf16_reconstruct_lp2021, int lp_in_on_chip_0_buf16_reconstruct_lp2022, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4_res = rc28_write.extract<0, 31>();
	lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4_write(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_4_res, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, root, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022, dynamic_address);
}

struct lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_cache {
  // Is register ? 1
  // # of banks: 1
  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8_cache lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8;
};



inline void lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15_write(hw_uint<32> & lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, int root, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121, int dynamic_address) {
  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120.lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8.push(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15);
}

inline hw_uint<32>  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8_select(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, int root, int pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, int pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8 read pattern: { pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932[root = 0, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931] -> lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120[pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930] : 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931 <= 63 }
  // Read schedule : { pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932[root = 0, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931] -> [2 + pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, 2 + pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931, 20] : 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, 2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121, 19] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121 <= 63 }
  auto value_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15 = lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120.lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_write
//	lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15
inline void lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_write, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, int root, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15_res = load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_write.extract<0, 31>();
	lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15_write(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_15_res, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, root, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121, dynamic_address);
}

// pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_read
//	lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8
inline hw_uint<32> lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_read_bundle_read(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, int root, int pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, int pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8_res = lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8_select(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, root, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_8_res);
	return result;
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_to_gp_56063(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_560, int root, int gp_in_on_chip_1_buf4_ld62, int gp_in_on_chip_1_buf4_ld61) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld61_c__gp_in_on_chip_1_buf4_ld62_value = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_56063_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, root, gp_in_on_chip_1_buf4_ld62, gp_in_on_chip_1_buf4_ld61, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_to_gp_560
	gp_in_on_chip_1_buf4_to_gp_560.write(gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld61_c__gp_in_on_chip_1_buf4_ld62_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_FIFO_buf108111(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_076, in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, int root, int in_on_chip_to_gp_076_ld110, int in_on_chip_to_gp_076_ld109) {
  // Dynamic address computation

	// Consume: in_on_chip_to_gp_076
	auto in_on_chip_to_gp_076_in_on_chip_to_gp_076_ld109_c__in_on_chip_to_gp_076_ld110_value = in_on_chip_to_gp_076.read();
	// Produce: in_on_chip_FIFO_buf108
	in_on_chip_FIFO_buf108_load_to_in_on_chip_FIFO_buf108111_write_bundle_write(/* arg names */in_on_chip_to_gp_076_in_on_chip_to_gp_076_ld109_c__in_on_chip_to_gp_076_ld110_value, in_on_chip_FIFO_buf108, root, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in_on_chip_16_merged59(in_on_chip_FIFO_buf108_cache& in_on_chip_FIFO_buf108, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16) {
  // Dynamic address computation

	// Consume: in_on_chip_FIFO_buf108
	auto in_on_chip_FIFO_buf108_2_m_gp_in_on_chip_16__p___m_1_p_1_c_____2_m_gp_in_on_chip_15__p__1_p_1_value = in_on_chip_FIFO_buf108_gp_in_on_chip_16_merged59_read_bundle_read(in_on_chip_FIFO_buf108/* source_delay */, root, gp_in_on_chip_15, gp_in_on_chip_16, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in_on_chip_16_cu57(in_on_chip_FIFO_buf108_2_m_gp_in_on_chip_16__p___m_1_p_1_c_____2_m_gp_in_on_chip_15__p__1_p_1_value);
	// Produce: gp_in_on_chip_1_buf4
	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged59_write_bundle_write(/* arg names */compute_result, gp_in_on_chip_1_buf4, root, gp_in_on_chip_15, gp_in_on_chip_16, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_to_gp_66467(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_664, int root, int gp_in_on_chip_1_buf4_ld66, int gp_in_on_chip_1_buf4_ld65) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld65_c__gp_in_on_chip_1_buf4_ld66_value = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_66467_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, root, gp_in_on_chip_1_buf4_ld66, gp_in_on_chip_1_buf4_ld65, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_to_gp_664
	gp_in_on_chip_1_buf4_to_gp_664.write(gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld65_c__gp_in_on_chip_1_buf4_ld66_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld62_gp_in_on_chip_1_buf4_ld66_in_on_chip_to_gp_076_ld110_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_076, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_560, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_664) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld62_gp_in_on_chip_1_buf4_ld66_in_on_chip_to_gp_076_ld110__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_cache gp_in_on_chip_1_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_on_chip_FIFO_buf108_cache in_on_chip_FIFO_buf108;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31; load_to_gp_in_on_chip_1_buf4_to_gp_66467[root = 0, gp_in_on_chip_1_buf4_ld66, gp_in_on_chip_1_buf4_ld65] -> [2 + 2gp_in_on_chip_1_buf4_ld66, 2 + 2gp_in_on_chip_1_buf4_ld65, 4] : 0 <= gp_in_on_chip_1_buf4_ld66 <= 31 and 0 <= gp_in_on_chip_1_buf4_ld65 <= 31; load_to_gp_in_on_chip_1_buf4_to_gp_56063[root = 0, gp_in_on_chip_1_buf4_ld62, gp_in_on_chip_1_buf4_ld61] -> [2 + 2gp_in_on_chip_1_buf4_ld62, 2 + 2gp_in_on_chip_1_buf4_ld61, 6] : 0 <= gp_in_on_chip_1_buf4_ld62 <= 31 and 0 <= gp_in_on_chip_1_buf4_ld61 <= 31; load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
//   { gp_in_on_chip_16_merged59[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 31 and 0 <= gp_in_on_chip_16 <= 31 }
// Condition for gp_in_on_chip_16_merged59(((-i0 + 2*floor((i0)/2) == 0) && (-i1 + 2*floor((i1)/2) == 0) && (-3 + i2 == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_to_gp_66467[root = 0, gp_in_on_chip_1_buf4_ld66, gp_in_on_chip_1_buf4_ld65] -> [2 + 2gp_in_on_chip_1_buf4_ld66, 2 + 2gp_in_on_chip_1_buf4_ld65, 4] : 0 <= gp_in_on_chip_1_buf4_ld66 <= 31 and 0 <= gp_in_on_chip_1_buf4_ld65 <= 31 }
// Condition for load_to_gp_in_on_chip_1_buf4_to_gp_66467(((-i0 + 2*floor((i0)/2) == 0) && (-i1 + 2*floor((i1)/2) == 0) && (-4 + i2 == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_to_gp_56063[root = 0, gp_in_on_chip_1_buf4_ld62, gp_in_on_chip_1_buf4_ld61] -> [2 + 2gp_in_on_chip_1_buf4_ld62, 2 + 2gp_in_on_chip_1_buf4_ld61, 6] : 0 <= gp_in_on_chip_1_buf4_ld62 <= 31 and 0 <= gp_in_on_chip_1_buf4_ld61 <= 31 }
// Condition for load_to_gp_in_on_chip_1_buf4_to_gp_56063(((-i0 + 2*floor((i0)/2) == 0) && (-i1 + 2*floor((i1)/2) == 0) && (-6 + i2 == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))
//   { load_to_in_on_chip_FIFO_buf108111[root = 0, in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109] -> [in_on_chip_to_gp_076_ld110, in_on_chip_to_gp_076_ld109, 2] : 0 <= in_on_chip_to_gp_076_ld110 <= 64 and 0 <= in_on_chip_to_gp_076_ld109 <= 64 }
// Condition for load_to_in_on_chip_FIFO_buf108111(((-2 + i2 == 0) && (i0 >= 0) && (64 - i0 >= 0) && (i1 >= 0) && (64 - i1 >= 0)))

  /*
// time range: { [i0, i1, i2] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 and 3 <= i2 <= 4; [i0, i1, 6] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64; [i0, i1, 2] : 0 <= i0 <= 64 and 0 <= i1 <= 64 }
// # sets: 1
for (int i0 = 0; i0 <= 64; i0++) {
  for (int i1 = 0; i1 <= 64; i1++) {
#pragma HLS pipeline II=1
      // { [i0, i1] : 0 <= i0 <= 64 and 0 <= i1 <= 64 }
      if ((((i0 >= 0) && (64 - i0 >= 0) && (i1 >= 0) && (64 - i1 >= 0)))) {
        load_to_in_on_chip_FIFO_buf108111((0), (i0), (i1));
      }
      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
        gp_in_on_chip_16_merged59((0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
      }
      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
        load_to_gp_in_on_chip_1_buf4_to_gp_66467((0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
      }
      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
        load_to_gp_in_on_chip_1_buf4_to_gp_56063((0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
      }
    }
  }

  */
	// time range: { [i0, i1, i2] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 and 3 <= i2 <= 4; [i0, i1, 6] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64; [i0, i1, 2] : 0 <= i0 <= 64 and 0 <= i1 <= 64 }
	// # sets: 1
	for (int i0 = 0; i0 <= 64; i0++) {
	  for (int i1 = 0; i1 <= 64; i1++) {
	#pragma HLS pipeline II=1
	      // { [i0, i1] : 0 <= i0 <= 64 and 0 <= i1 <= 64 }
	      if ((((i0 >= 0) && (64 - i0 >= 0) && (i1 >= 0) && (64 - i1 >= 0)))) {
	        load_to_in_on_chip_FIFO_buf108111(in_on_chip_to_gp_076 /* buf name */, in_on_chip_FIFO_buf108, (0), (i0), (i1));
	      }
	      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
	      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
	        gp_in_on_chip_16_merged59(in_on_chip_FIFO_buf108 /* buf name */, gp_in_on_chip_1_buf4, (0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
	      }
	      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
	      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
	        load_to_gp_in_on_chip_1_buf4_to_gp_66467(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_to_gp_664, (0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
	      }
	      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
	      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
	        load_to_gp_in_on_chip_1_buf4_to_gp_56063(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_to_gp_560, (0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_in_on_chip_FIFO_buf112115(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_180, in_on_chip_FIFO_buf112_cache& in_on_chip_FIFO_buf112, int root, int in_on_chip_to_gp_180_ld114, int in_on_chip_to_gp_180_ld113) {
  // Dynamic address computation

	// Consume: in_on_chip_to_gp_180
	auto in_on_chip_to_gp_180_in_on_chip_to_gp_180_ld113_c__in_on_chip_to_gp_180_ld114_value = in_on_chip_to_gp_180.read();
	// Produce: in_on_chip_FIFO_buf112
	in_on_chip_FIFO_buf112_load_to_in_on_chip_FIFO_buf112115_write_bundle_write(/* arg names */in_on_chip_to_gp_180_in_on_chip_to_gp_180_ld113_c__in_on_chip_to_gp_180_ld114_value, in_on_chip_FIFO_buf112, root, in_on_chip_to_gp_180_ld114, in_on_chip_to_gp_180_ld113, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_0_buf16_to_gp_28487(lp_in_on_chip_0_buf16_cache& lp_in_on_chip_0_buf16, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf16_to_gp_284, int root, int lp_in_on_chip_0_buf16_ld86, int lp_in_on_chip_0_buf16_ld85) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf16
	auto lp_in_on_chip_0_buf16_lp_in_on_chip_0_buf16_ld85_c__lp_in_on_chip_0_buf16_ld86_value = lp_in_on_chip_0_buf16_load_to_lp_in_on_chip_0_buf16_to_gp_28487_read_bundle_read(lp_in_on_chip_0_buf16/* source_delay */, root, lp_in_on_chip_0_buf16_ld86, lp_in_on_chip_0_buf16_ld85, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_0_buf16_to_gp_284
	lp_in_on_chip_0_buf16_to_gp_284.write(lp_in_on_chip_0_buf16_lp_in_on_chip_0_buf16_ld85_c__lp_in_on_chip_0_buf16_ld86_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us12_to_gp_168, gp_in_on_chip_1_buf4_us12_FIFO_buf100_cache& gp_in_on_chip_1_buf4_us12_FIFO_buf100, int root, int gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, int gp_in_on_chip_1_buf4_us12_to_gp_168_ld101) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us12_to_gp_168
	auto gp_in_on_chip_1_buf4_us12_to_gp_168_gp_in_on_chip_1_buf4_us12_to_gp_168_ld101_c__gp_in_on_chip_1_buf4_us12_to_gp_168_ld102_value = gp_in_on_chip_1_buf4_us12_to_gp_168.read();
	// Produce: gp_in_on_chip_1_buf4_us12_FIFO_buf100
	gp_in_on_chip_1_buf4_us12_FIFO_buf100_load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_us12_to_gp_168_gp_in_on_chip_1_buf4_us12_to_gp_168_ld101_c__gp_in_on_chip_1_buf4_us12_to_gp_168_ld102_value, gp_in_on_chip_1_buf4_us12_FIFO_buf100, root, gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, gp_in_on_chip_1_buf4_us12_to_gp_168_ld101, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff19(in_on_chip_FIFO_buf112_cache& in_on_chip_FIFO_buf112, gp_in_on_chip_1_buf4_us12_FIFO_buf100_cache& gp_in_on_chip_1_buf4_us12_FIFO_buf100, lp_in_on_chip_0_buf16_cache& lp_in_on_chip_0_buf16, int root, int lp_in_on_chip_017, int lp_in_on_chip_018) {
  // Dynamic address computation

	// Consume: in_on_chip_FIFO_buf112
	auto in_on_chip_FIFO_buf112_lp_in_on_chip_018_p_1_c___lp_in_on_chip_017_p_1_value = in_on_chip_FIFO_buf112_diff19_read_bundle_read(in_on_chip_FIFO_buf112/* source_delay */, root, lp_in_on_chip_017, lp_in_on_chip_018, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_1_buf4_us12_FIFO_buf100
	auto gp_in_on_chip_1_buf4_us12_FIFO_buf100_lp_in_on_chip_018_p_0_c___lp_in_on_chip_017_p_0_value = gp_in_on_chip_1_buf4_us12_FIFO_buf100_diff19_read_bundle_read(gp_in_on_chip_1_buf4_us12_FIFO_buf100/* source_delay */, root, lp_in_on_chip_017, lp_in_on_chip_018, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(in_on_chip_FIFO_buf112_lp_in_on_chip_018_p_1_c___lp_in_on_chip_017_p_1_value, gp_in_on_chip_1_buf4_us12_FIFO_buf100_lp_in_on_chip_018_p_0_c___lp_in_on_chip_017_p_0_value);
	// Produce: lp_in_on_chip_0_buf16
	lp_in_on_chip_0_buf16_diff19_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_0_buf16, root, lp_in_on_chip_017, lp_in_on_chip_018, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_us12_to_gp_168_ld102_in_on_chip_to_gp_180_ld114_lp_in_on_chip_017_lp_in_on_chip_0_buf16_ld86_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us12_to_gp_168, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_180, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf16_to_gp_284) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_us12_to_gp_168_ld102_in_on_chip_to_gp_180_ld114_lp_in_on_chip_017_lp_in_on_chip_0_buf16_ld86__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us12_FIFO_buf100_cache gp_in_on_chip_1_buf4_us12_FIFO_buf100;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_on_chip_FIFO_buf112_cache in_on_chip_FIFO_buf112;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf16_cache lp_in_on_chip_0_buf16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_in_on_chip_FIFO_buf112115[root = 0, in_on_chip_to_gp_180_ld114, in_on_chip_to_gp_180_ld113] -> [in_on_chip_to_gp_180_ld114, in_on_chip_to_gp_180_ld113, 22] : 0 < in_on_chip_to_gp_180_ld114 <= 64 and 0 < in_on_chip_to_gp_180_ld113 <= 64; load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103[root = 0, gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, gp_in_on_chip_1_buf4_us12_to_gp_168_ld101] -> [2 + gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, 2 + gp_in_on_chip_1_buf4_us12_to_gp_168_ld101, 10] : 0 <= gp_in_on_chip_1_buf4_us12_to_gp_168_ld102 <= 63 and 0 <= gp_in_on_chip_1_buf4_us12_to_gp_168_ld101 <= 63; diff19[root = 0, lp_in_on_chip_017, lp_in_on_chip_018] -> [2 + lp_in_on_chip_017, 2 + lp_in_on_chip_018, 11] : 0 <= lp_in_on_chip_017 <= 63 and 0 <= lp_in_on_chip_018 <= 63; load_to_lp_in_on_chip_0_buf16_to_gp_28487[root = 0, lp_in_on_chip_0_buf16_ld86, lp_in_on_chip_0_buf16_ld85] -> [2 + lp_in_on_chip_0_buf16_ld86, 2 + lp_in_on_chip_0_buf16_ld85, 12] : 0 <= lp_in_on_chip_0_buf16_ld86 <= 63 and 0 <= lp_in_on_chip_0_buf16_ld85 <= 63 }
//   { load_to_in_on_chip_FIFO_buf112115[root = 0, in_on_chip_to_gp_180_ld114, in_on_chip_to_gp_180_ld113] -> [in_on_chip_to_gp_180_ld114, in_on_chip_to_gp_180_ld113, 22] : 0 < in_on_chip_to_gp_180_ld114 <= 64 and 0 < in_on_chip_to_gp_180_ld113 <= 64 }
// Condition for load_to_in_on_chip_FIFO_buf112115(((-22 + i2 == 0) && (-1 + i0 >= 0) && (64 - i0 >= 0) && (-1 + i1 >= 0) && (64 - i1 >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103[root = 0, gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, gp_in_on_chip_1_buf4_us12_to_gp_168_ld101] -> [2 + gp_in_on_chip_1_buf4_us12_to_gp_168_ld102, 2 + gp_in_on_chip_1_buf4_us12_to_gp_168_ld101, 10] : 0 <= gp_in_on_chip_1_buf4_us12_to_gp_168_ld102 <= 63 and 0 <= gp_in_on_chip_1_buf4_us12_to_gp_168_ld101 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103(((-10 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))
//   { diff19[root = 0, lp_in_on_chip_017, lp_in_on_chip_018] -> [2 + lp_in_on_chip_017, 2 + lp_in_on_chip_018, 11] : 0 <= lp_in_on_chip_017 <= 63 and 0 <= lp_in_on_chip_018 <= 63 }
// Condition for diff19(((-11 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))
//   { load_to_lp_in_on_chip_0_buf16_to_gp_28487[root = 0, lp_in_on_chip_0_buf16_ld86, lp_in_on_chip_0_buf16_ld85] -> [2 + lp_in_on_chip_0_buf16_ld86, 2 + lp_in_on_chip_0_buf16_ld85, 12] : 0 <= lp_in_on_chip_0_buf16_ld86 <= 63 and 0 <= lp_in_on_chip_0_buf16_ld85 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf16_to_gp_28487(((-12 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))

  /*
// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and 2 <= i1 <= 65 and 10 <= i2 <= 12; [i0, i1, 22] : 0 < i0 <= 64 and 0 < i1 <= 64 }
// # sets: 1
for (int i0 = 1; i0 <= 65; i0++) {
  for (int i1 = 1; i1 <= 65; i1++) {
#pragma HLS pipeline II=1
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103((0), (-2 + i0), (-2 + i1));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        diff19((0), (-2 + i0), (-2 + i1));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        load_to_lp_in_on_chip_0_buf16_to_gp_28487((0), (-2 + i0), (-2 + i1));
      }
      // { [i0, i1] : 0 < i0 <= 64 and 0 < i1 <= 64 }
      if ((((-1 + i0 >= 0) && (64 - i0 >= 0) && (-1 + i1 >= 0) && (64 - i1 >= 0)))) {
        load_to_in_on_chip_FIFO_buf112115((0), (i0), (i1));
      }
    }
  }

  */
	// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and 2 <= i1 <= 65 and 10 <= i2 <= 12; [i0, i1, 22] : 0 < i0 <= 64 and 0 < i1 <= 64 }
	// # sets: 1
	for (int i0 = 1; i0 <= 65; i0++) {
	  for (int i1 = 1; i1 <= 65; i1++) {
	#pragma HLS pipeline II=1
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        load_to_gp_in_on_chip_1_buf4_us12_FIFO_buf100103(gp_in_on_chip_1_buf4_us12_to_gp_168 /* buf name */, gp_in_on_chip_1_buf4_us12_FIFO_buf100, (0), (-2 + i0), (-2 + i1));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        diff19(in_on_chip_FIFO_buf112 /* buf name */, gp_in_on_chip_1_buf4_us12_FIFO_buf100 /* buf name */, lp_in_on_chip_0_buf16, (0), (-2 + i0), (-2 + i1));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        load_to_lp_in_on_chip_0_buf16_to_gp_28487(lp_in_on_chip_0_buf16 /* buf name */, lp_in_on_chip_0_buf16_to_gp_284, (0), (-2 + i0), (-2 + i1));
	      }
	      // { [i0, i1] : 0 < i0 <= 64 and 0 < i1 <= 64 }
	      if ((((-1 + i0 >= 0) && (64 - i0 >= 0) && (-1 + i1 >= 0) && (64 - i1 >= 0)))) {
	        load_to_in_on_chip_FIFO_buf112115(in_on_chip_to_gp_180 /* buf name */, in_on_chip_FIFO_buf112, (0), (i0), (i1));
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_0_buf16_FIFO_buf116119(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf16_to_gp_284, lp_in_on_chip_0_buf16_FIFO_buf116_cache& lp_in_on_chip_0_buf16_FIFO_buf116, int root, int lp_in_on_chip_0_buf16_to_gp_284_ld118, int lp_in_on_chip_0_buf16_to_gp_284_ld117) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf16_to_gp_284
	auto lp_in_on_chip_0_buf16_to_gp_284_lp_in_on_chip_0_buf16_to_gp_284_ld117_c__lp_in_on_chip_0_buf16_to_gp_284_ld118_value = lp_in_on_chip_0_buf16_to_gp_284.read();
	// Produce: lp_in_on_chip_0_buf16_FIFO_buf116
	lp_in_on_chip_0_buf16_FIFO_buf116_load_to_lp_in_on_chip_0_buf16_FIFO_buf116119_write_bundle_write(/* arg names */lp_in_on_chip_0_buf16_to_gp_284_lp_in_on_chip_0_buf16_to_gp_284_ld117_c__lp_in_on_chip_0_buf16_to_gp_284_ld118_value, lp_in_on_chip_0_buf16_FIFO_buf116, root, lp_in_on_chip_0_buf16_to_gp_284_ld118, lp_in_on_chip_0_buf16_to_gp_284_ld117, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488, int root, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf16_reconstruct_lp20_buf23
	auto lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89_c__lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90_value = lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891_read_bundle_read(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23/* source_delay */, root, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488
	lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488.write(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89_c__lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc28(lp_in_on_chip_0_buf16_FIFO_buf116_cache& lp_in_on_chip_0_buf16_FIFO_buf116, gp_in_on_chip_1_buf4_us24_FIFO_buf104_cache& gp_in_on_chip_1_buf4_us24_FIFO_buf104, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, int root, int lp_in_on_chip_0_buf16_reconstruct_lp2021, int lp_in_on_chip_0_buf16_reconstruct_lp2022) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf16_FIFO_buf116
	auto lp_in_on_chip_0_buf16_FIFO_buf116_lp_in_on_chip_0_buf16_reconstruct_lp2022_p_0_c___lp_in_on_chip_0_buf16_reconstruct_lp2021_p_0_value = lp_in_on_chip_0_buf16_FIFO_buf116_rc28_read_bundle_read(lp_in_on_chip_0_buf16_FIFO_buf116/* source_delay */, root, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_1_buf4_us24_FIFO_buf104
	auto gp_in_on_chip_1_buf4_us24_FIFO_buf104_lp_in_on_chip_0_buf16_reconstruct_lp2022_p_0_c___lp_in_on_chip_0_buf16_reconstruct_lp2021_p_0_value = gp_in_on_chip_1_buf4_us24_FIFO_buf104_rc28_read_bundle_read(gp_in_on_chip_1_buf4_us24_FIFO_buf104/* source_delay */, root, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(lp_in_on_chip_0_buf16_FIFO_buf116_lp_in_on_chip_0_buf16_reconstruct_lp2022_p_0_c___lp_in_on_chip_0_buf16_reconstruct_lp2021_p_0_value, gp_in_on_chip_1_buf4_us24_FIFO_buf104_lp_in_on_chip_0_buf16_reconstruct_lp2022_p_0_c___lp_in_on_chip_0_buf16_reconstruct_lp2021_p_0_value);
	// Produce: lp_in_on_chip_0_buf16_reconstruct_lp20_buf23
	lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_rc28_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, root, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us24_to_gp_272, gp_in_on_chip_1_buf4_us24_FIFO_buf104_cache& gp_in_on_chip_1_buf4_us24_FIFO_buf104, int root, int gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, int gp_in_on_chip_1_buf4_us24_to_gp_272_ld105) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us24_to_gp_272
	auto gp_in_on_chip_1_buf4_us24_to_gp_272_gp_in_on_chip_1_buf4_us24_to_gp_272_ld105_c__gp_in_on_chip_1_buf4_us24_to_gp_272_ld106_value = gp_in_on_chip_1_buf4_us24_to_gp_272.read();
	// Produce: gp_in_on_chip_1_buf4_us24_FIFO_buf104
	gp_in_on_chip_1_buf4_us24_FIFO_buf104_load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_us24_to_gp_272_gp_in_on_chip_1_buf4_us24_to_gp_272_ld105_c__gp_in_on_chip_1_buf4_us24_to_gp_272_ld106_value, gp_in_on_chip_1_buf4_us24_FIFO_buf104, root, gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, gp_in_on_chip_1_buf4_us24_to_gp_272_ld105, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_us24_to_gp_272_ld106_lp_in_on_chip_0_buf16_reconstruct_lp2021_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90_lp_in_on_chip_0_buf16_to_gp_284_ld118_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us24_to_gp_272, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf16_to_gp_284, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_us24_to_gp_272_ld106_lp_in_on_chip_0_buf16_reconstruct_lp2021_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90_lp_in_on_chip_0_buf16_to_gp_284_ld118__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us24_FIFO_buf104_cache gp_in_on_chip_1_buf4_us24_FIFO_buf104;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf16_FIFO_buf116_cache lp_in_on_chip_0_buf16_FIFO_buf116;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_cache lp_in_on_chip_0_buf16_reconstruct_lp20_buf23;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { rc28[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp2021, 2 + lp_in_on_chip_0_buf16_reconstruct_lp2022, 17] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2021 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2022 <= 63; load_to_lp_in_on_chip_0_buf16_FIFO_buf116119[root = 0, lp_in_on_chip_0_buf16_to_gp_284_ld118, lp_in_on_chip_0_buf16_to_gp_284_ld117] -> [2 + lp_in_on_chip_0_buf16_to_gp_284_ld118, 2 + lp_in_on_chip_0_buf16_to_gp_284_ld117, 13] : 0 <= lp_in_on_chip_0_buf16_to_gp_284_ld118 <= 63 and 0 <= lp_in_on_chip_0_buf16_to_gp_284_ld117 <= 63; load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107[root = 0, gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, gp_in_on_chip_1_buf4_us24_to_gp_272_ld105] -> [2 + gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, 2 + gp_in_on_chip_1_buf4_us24_to_gp_272_ld105, 16] : 0 <= gp_in_on_chip_1_buf4_us24_to_gp_272_ld106 <= 63 and 0 <= gp_in_on_chip_1_buf4_us24_to_gp_272_ld105 <= 63; load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, 2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89, 18] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89 <= 63 }
//   { rc28[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp2021, lp_in_on_chip_0_buf16_reconstruct_lp2022] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp2021, 2 + lp_in_on_chip_0_buf16_reconstruct_lp2022, 17] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2021 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp2022 <= 63 }
// Condition for rc28(((-17 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))
//   { load_to_lp_in_on_chip_0_buf16_FIFO_buf116119[root = 0, lp_in_on_chip_0_buf16_to_gp_284_ld118, lp_in_on_chip_0_buf16_to_gp_284_ld117] -> [2 + lp_in_on_chip_0_buf16_to_gp_284_ld118, 2 + lp_in_on_chip_0_buf16_to_gp_284_ld117, 13] : 0 <= lp_in_on_chip_0_buf16_to_gp_284_ld118 <= 63 and 0 <= lp_in_on_chip_0_buf16_to_gp_284_ld117 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf16_FIFO_buf116119(((-13 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107[root = 0, gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, gp_in_on_chip_1_buf4_us24_to_gp_272_ld105] -> [2 + gp_in_on_chip_1_buf4_us24_to_gp_272_ld106, 2 + gp_in_on_chip_1_buf4_us24_to_gp_272_ld105, 16] : 0 <= gp_in_on_chip_1_buf4_us24_to_gp_272_ld106 <= 63 and 0 <= gp_in_on_chip_1_buf4_us24_to_gp_272_ld105 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107(((-16 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))
//   { load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90, 2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89, 18] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld89 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891(((-18 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))

  /*
// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and 2 <= i1 <= 65 and 16 <= i2 <= 18; [i0, i1, 13] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
// # sets: 1
for (int i0 = 2; i0 <= 65; i0++) {
  for (int i1 = 2; i1 <= 65; i1++) {
#pragma HLS pipeline II=1
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        load_to_lp_in_on_chip_0_buf16_FIFO_buf116119((0), (-2 + i0), (-2 + i1));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107((0), (-2 + i0), (-2 + i1));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        rc28((0), (-2 + i0), (-2 + i1));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891((0), (-2 + i0), (-2 + i1));
      }
    }
  }

  */
	// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and 2 <= i1 <= 65 and 16 <= i2 <= 18; [i0, i1, 13] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	// # sets: 1
	for (int i0 = 2; i0 <= 65; i0++) {
	  for (int i1 = 2; i1 <= 65; i1++) {
	#pragma HLS pipeline II=1
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        load_to_lp_in_on_chip_0_buf16_FIFO_buf116119(lp_in_on_chip_0_buf16_to_gp_284 /* buf name */, lp_in_on_chip_0_buf16_FIFO_buf116, (0), (-2 + i0), (-2 + i1));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        load_to_gp_in_on_chip_1_buf4_us24_FIFO_buf104107(gp_in_on_chip_1_buf4_us24_to_gp_272 /* buf name */, gp_in_on_chip_1_buf4_us24_FIFO_buf104, (0), (-2 + i0), (-2 + i1));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        rc28(lp_in_on_chip_0_buf16_FIFO_buf116 /* buf name */, gp_in_on_chip_1_buf4_us24_FIFO_buf104 /* buf name */, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23, (0), (-2 + i0), (-2 + i1));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_48891(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23 /* buf name */, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488, (0), (-2 + i0), (-2 + i1));
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_in_on_chip_to_gp_18083(in_on_chip_cache& in_on_chip, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_180, int root, int in_on_chip_ld82, int in_on_chip_ld81) {
  // Dynamic address computation

	// Consume: in_on_chip
	auto in_on_chip_in_on_chip_ld81_c__in_on_chip_ld82_value = in_on_chip_load_to_in_on_chip_to_gp_18083_read_bundle_read(in_on_chip/* source_delay */, root, in_on_chip_ld82, in_on_chip_ld81, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_on_chip_to_gp_180
	in_on_chip_to_gp_180.write(in_on_chip_in_on_chip_ld81_c__in_on_chip_ld82_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_to_gp_07679(in_on_chip_cache& in_on_chip, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_076, int root, int in_on_chip_ld78, int in_on_chip_ld77) {
  // Dynamic address computation

	// Consume: in_on_chip
	auto in_on_chip_in_on_chip_ld77_c__in_on_chip_ld78_value = in_on_chip_load_to_in_on_chip_to_gp_07679_read_bundle_read(in_on_chip/* source_delay */, root, in_on_chip_ld78, in_on_chip_ld77, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_on_chip_to_gp_076
	in_on_chip_to_gp_076.write(in_on_chip_in_on_chip_ld77_c__in_on_chip_ld78_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_pw_math_in02__p___m_1_rp__p_1_c______lp_pw_math_in01__p___m_1_rp__p_1_value = in.read();
	auto compute_result = id(in__lp_pw_math_in02__p___m_1_rp__p_1_c______lp_pw_math_in01__p___m_1_rp__p_1_value);
	// Produce: in_on_chip
	in_on_chip_pw_math_in03_write_bundle_write(/* arg names */compute_result, in_on_chip, root, pw_math_in01, pw_math_in02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_on_chip_ld78_in_on_chip_ld82_pw_math_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_076, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_180) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_on_chip_ld78_in_on_chip_ld82_pw_math_in01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_on_chip_cache in_on_chip;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> [pw_math_in01, pw_math_in02, 0] : 0 <= pw_math_in01 <= 64 and 0 <= pw_math_in02 <= 64; load_to_in_on_chip_to_gp_07679[root = 0, in_on_chip_ld78, in_on_chip_ld77] -> [in_on_chip_ld78, in_on_chip_ld77, 1] : 0 <= in_on_chip_ld78 <= 64 and 0 <= in_on_chip_ld77 <= 64; load_to_in_on_chip_to_gp_18083[root = 0, in_on_chip_ld82, in_on_chip_ld81] -> [in_on_chip_ld82, in_on_chip_ld81, 21] : 0 < in_on_chip_ld82 <= 64 and 0 < in_on_chip_ld81 <= 64 }
//   { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> [pw_math_in01, pw_math_in02, 0] : 0 <= pw_math_in01 <= 64 and 0 <= pw_math_in02 <= 64 }
// Condition for pw_math_in03(((i2 == 0) && (i0 >= 0) && (64 - i0 >= 0) && (i1 >= 0) && (64 - i1 >= 0)))
//   { load_to_in_on_chip_to_gp_07679[root = 0, in_on_chip_ld78, in_on_chip_ld77] -> [in_on_chip_ld78, in_on_chip_ld77, 1] : 0 <= in_on_chip_ld78 <= 64 and 0 <= in_on_chip_ld77 <= 64 }
// Condition for load_to_in_on_chip_to_gp_07679(((-1 + i2 == 0) && (i0 >= 0) && (64 - i0 >= 0) && (i1 >= 0) && (64 - i1 >= 0)))
//   { load_to_in_on_chip_to_gp_18083[root = 0, in_on_chip_ld82, in_on_chip_ld81] -> [in_on_chip_ld82, in_on_chip_ld81, 21] : 0 < in_on_chip_ld82 <= 64 and 0 < in_on_chip_ld81 <= 64 }
// Condition for load_to_in_on_chip_to_gp_18083(((-21 + i2 == 0) && (-1 + i0 >= 0) && (64 - i0 >= 0) && (-1 + i1 >= 0) && (64 - i1 >= 0)))

  /*
// time range: { [i0, i1, i2] : 0 <= i0 <= 64 and 0 <= i1 <= 64 and 0 <= i2 <= 1; [i0, i1, 21] : 0 < i0 <= 64 and 0 < i1 <= 64 }
// # sets: 1
for (int i0 = 0; i0 <= 64; i0++) {
  for (int i1 = 0; i1 <= 64; i1++) {
#pragma HLS pipeline II=1
      // { [i0, i1] : 0 <= i0 <= 64 and 0 <= i1 <= 64 }
      if ((((i0 >= 0) && (64 - i0 >= 0) && (i1 >= 0) && (64 - i1 >= 0)))) {
        pw_math_in03((0), (i0), (i1));
      }
      // { [i0, i1] : 0 <= i0 <= 64 and 0 <= i1 <= 64 }
      if ((((i0 >= 0) && (64 - i0 >= 0) && (i1 >= 0) && (64 - i1 >= 0)))) {
        load_to_in_on_chip_to_gp_07679((0), (i0), (i1));
      }
      // { [i0, i1] : 0 < i0 <= 64 and 0 < i1 <= 64 }
      if ((((-1 + i0 >= 0) && (64 - i0 >= 0) && (-1 + i1 >= 0) && (64 - i1 >= 0)))) {
        load_to_in_on_chip_to_gp_18083((0), (i0), (i1));
      }
    }
  }

  */
	// time range: { [i0, i1, i2] : 0 <= i0 <= 64 and 0 <= i1 <= 64 and 0 <= i2 <= 1; [i0, i1, 21] : 0 < i0 <= 64 and 0 < i1 <= 64 }
	// # sets: 1
	for (int i0 = 0; i0 <= 64; i0++) {
	  for (int i1 = 0; i1 <= 64; i1++) {
	#pragma HLS pipeline II=1
	      // { [i0, i1] : 0 <= i0 <= 64 and 0 <= i1 <= 64 }
	      if ((((i0 >= 0) && (64 - i0 >= 0) && (i1 >= 0) && (64 - i1 >= 0)))) {
	        pw_math_in03(in /* buf name */, in_on_chip, (0), (i0), (i1));
	      }
	      // { [i0, i1] : 0 <= i0 <= 64 and 0 <= i1 <= 64 }
	      if ((((i0 >= 0) && (64 - i0 >= 0) && (i1 >= 0) && (64 - i1 >= 0)))) {
	        load_to_in_on_chip_to_gp_07679(in_on_chip /* buf name */, in_on_chip_to_gp_076, (0), (i0), (i1));
	      }
	      // { [i0, i1] : 0 < i0 <= 64 and 0 < i1 <= 64 }
	      if ((((-1 + i0 >= 0) && (64 - i0 >= 0) && (-1 + i1 >= 0) && (64 - i1 >= 0)))) {
	        load_to_in_on_chip_to_gp_18083(in_on_chip /* buf name */, in_on_chip_to_gp_180, (0), (i0), (i1));
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, int root, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, int lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488
	auto lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121_c__lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122_value = lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488.read();
	// Produce: lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120
	lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123_write_bundle_write(/* arg names */lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121_c__lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122_value, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, root, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_cache& lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, int pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120
	auto lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931_p_0_c___pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930_p_0_value = lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_read_bundle_read(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120/* source_delay */, root, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931_p_0_c___pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120_cache lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, 2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121, 19] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121 <= 63; pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932[root = 0, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931] -> [2 + pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, 2 + pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931, 20] : 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931 <= 63 }
//   { load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123[root = 0, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121] -> [2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122, 2 + lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121, 19] : 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122 <= 63 and 0 <= lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld121 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123(((-19 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))
//   { pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932[root = 0, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931] -> [2 + pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, 2 + pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931, 20] : 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931 <= 63 }
// Condition for pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932(((-20 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))

  /*
// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and 2 <= i1 <= 65 and 19 <= i2 <= 20 }
// # sets: 1
for (int i0 = 2; i0 <= 65; i0++) {
  for (int i1 = 2; i1 <= 65; i1++) {
#pragma HLS pipeline II=1
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123((0), (-2 + i0), (-2 + i1));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932((0), (-2 + i0), (-2 + i1));
      }
    }
  }

  */
	// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and 2 <= i1 <= 65 and 19 <= i2 <= 20 }
	// # sets: 1
	for (int i0 = 2; i0 <= 65; i0++) {
	  for (int i1 = 2; i1 <= 65; i1++) {
	#pragma HLS pipeline II=1
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        load_to_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120123(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488 /* buf name */, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120, (0), (-2 + i0), (-2 + i1));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_FIFO_buf120 /* buf name */, out, (0), (-2 + i0), (-2 + i1));
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void us15(gp_in_on_chip_1_buf4_FIFO_buf92_cache& gp_in_on_chip_1_buf4_FIFO_buf92, gp_in_on_chip_1_buf4_us12_cache& gp_in_on_chip_1_buf4_us12, int root, int us_gp_in_on_chip_1_buf413, int us_gp_in_on_chip_1_buf414) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_FIFO_buf92
	auto gp_in_on_chip_1_buf4_FIFO_buf92_floor_lp_us_gp_in_on_chip_1_buf414__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_1_buf413__div__2_rp__p_0_value = gp_in_on_chip_1_buf4_FIFO_buf92_us15_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf92/* source_delay */, root, us_gp_in_on_chip_1_buf413, us_gp_in_on_chip_1_buf414, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us12
	gp_in_on_chip_1_buf4_us12_us15_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_FIFO_buf92_floor_lp_us_gp_in_on_chip_1_buf414__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_1_buf413__div__2_rp__p_0_value, gp_in_on_chip_1_buf4_us12, root, us_gp_in_on_chip_1_buf413, us_gp_in_on_chip_1_buf414, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_FIFO_buf9295(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_560, gp_in_on_chip_1_buf4_FIFO_buf92_cache& gp_in_on_chip_1_buf4_FIFO_buf92, int root, int gp_in_on_chip_1_buf4_to_gp_560_ld94, int gp_in_on_chip_1_buf4_to_gp_560_ld93) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_to_gp_560
	auto gp_in_on_chip_1_buf4_to_gp_560_gp_in_on_chip_1_buf4_to_gp_560_ld93_c__gp_in_on_chip_1_buf4_to_gp_560_ld94_value = gp_in_on_chip_1_buf4_to_gp_560.read();
	// Produce: gp_in_on_chip_1_buf4_FIFO_buf92
	gp_in_on_chip_1_buf4_FIFO_buf92_load_to_gp_in_on_chip_1_buf4_FIFO_buf9295_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_to_gp_560_gp_in_on_chip_1_buf4_to_gp_560_ld93_c__gp_in_on_chip_1_buf4_to_gp_560_ld94_value, gp_in_on_chip_1_buf4_FIFO_buf92, root, gp_in_on_chip_1_buf4_to_gp_560_ld94, gp_in_on_chip_1_buf4_to_gp_560_ld93, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871(gp_in_on_chip_1_buf4_us12_cache& gp_in_on_chip_1_buf4_us12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us12_to_gp_168, int root, int gp_in_on_chip_1_buf4_us12_ld70, int gp_in_on_chip_1_buf4_us12_ld69) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us12
	auto gp_in_on_chip_1_buf4_us12_gp_in_on_chip_1_buf4_us12_ld69_c__gp_in_on_chip_1_buf4_us12_ld70_value = gp_in_on_chip_1_buf4_us12_load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871_read_bundle_read(gp_in_on_chip_1_buf4_us12/* source_delay */, root, gp_in_on_chip_1_buf4_us12_ld70, gp_in_on_chip_1_buf4_us12_ld69, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us12_to_gp_168
	gp_in_on_chip_1_buf4_us12_to_gp_168.write(gp_in_on_chip_1_buf4_us12_gp_in_on_chip_1_buf4_us12_ld69_c__gp_in_on_chip_1_buf4_us12_ld70_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_to_gp_560_ld94_gp_in_on_chip_1_buf4_us12_ld70_us_gp_in_on_chip_1_buf413_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_560, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us12_to_gp_168) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_to_gp_560_ld94_gp_in_on_chip_1_buf4_us12_ld70_us_gp_in_on_chip_1_buf413__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_FIFO_buf92_cache gp_in_on_chip_1_buf4_FIFO_buf92;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us12_cache gp_in_on_chip_1_buf4_us12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf9295[root = 0, gp_in_on_chip_1_buf4_to_gp_560_ld94, gp_in_on_chip_1_buf4_to_gp_560_ld93] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_560_ld94, 2 + 2gp_in_on_chip_1_buf4_to_gp_560_ld93, 7] : 0 <= gp_in_on_chip_1_buf4_to_gp_560_ld94 <= 31 and 0 <= gp_in_on_chip_1_buf4_to_gp_560_ld93 <= 31; us15[root = 0, us_gp_in_on_chip_1_buf413, us_gp_in_on_chip_1_buf414] -> [2 + us_gp_in_on_chip_1_buf413, 2 + us_gp_in_on_chip_1_buf414, 8] : 0 <= us_gp_in_on_chip_1_buf413 <= 63 and 0 <= us_gp_in_on_chip_1_buf414 <= 63; load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871[root = 0, gp_in_on_chip_1_buf4_us12_ld70, gp_in_on_chip_1_buf4_us12_ld69] -> [2 + gp_in_on_chip_1_buf4_us12_ld70, 2 + gp_in_on_chip_1_buf4_us12_ld69, 9] : 0 <= gp_in_on_chip_1_buf4_us12_ld70 <= 63 and 0 <= gp_in_on_chip_1_buf4_us12_ld69 <= 63 }
//   { load_to_gp_in_on_chip_1_buf4_FIFO_buf9295[root = 0, gp_in_on_chip_1_buf4_to_gp_560_ld94, gp_in_on_chip_1_buf4_to_gp_560_ld93] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_560_ld94, 2 + 2gp_in_on_chip_1_buf4_to_gp_560_ld93, 7] : 0 <= gp_in_on_chip_1_buf4_to_gp_560_ld94 <= 31 and 0 <= gp_in_on_chip_1_buf4_to_gp_560_ld93 <= 31 }
// Condition for load_to_gp_in_on_chip_1_buf4_FIFO_buf9295(((-i0 + 2*floor((i0)/2) == 0) && (-i1 + 2*floor((i1)/2) == 0) && (-7 + i2 == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))
//   { us15[root = 0, us_gp_in_on_chip_1_buf413, us_gp_in_on_chip_1_buf414] -> [2 + us_gp_in_on_chip_1_buf413, 2 + us_gp_in_on_chip_1_buf414, 8] : 0 <= us_gp_in_on_chip_1_buf413 <= 63 and 0 <= us_gp_in_on_chip_1_buf414 <= 63 }
// Condition for us15(((-8 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871[root = 0, gp_in_on_chip_1_buf4_us12_ld70, gp_in_on_chip_1_buf4_us12_ld69] -> [2 + gp_in_on_chip_1_buf4_us12_ld70, 2 + gp_in_on_chip_1_buf4_us12_ld69, 9] : 0 <= gp_in_on_chip_1_buf4_us12_ld70 <= 63 and 0 <= gp_in_on_chip_1_buf4_us12_ld69 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871(((-9 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))

  /*
// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and i1 <= 65 and i2 <= 9 and 2*floor((i0)/2) >= 7 + i0 - i2 and floor((i1)/2) > 0 and 2*floor((i1)/2) >= 7 + i1 - i2 }
// # sets: 1
for (int i0 = 2; i0 <= 65; i0++) {
  for (int i1 = 2; i1 <= 65; i1++) {
#pragma HLS pipeline II=1
      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
        load_to_gp_in_on_chip_1_buf4_FIFO_buf9295((0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        us15((0), (-2 + i0), (-2 + i1));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871((0), (-2 + i0), (-2 + i1));
      }
    }
  }

  */
	// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and i1 <= 65 and i2 <= 9 and 2*floor((i0)/2) >= 7 + i0 - i2 and floor((i1)/2) > 0 and 2*floor((i1)/2) >= 7 + i1 - i2 }
	// # sets: 1
	for (int i0 = 2; i0 <= 65; i0++) {
	  for (int i1 = 2; i1 <= 65; i1++) {
	#pragma HLS pipeline II=1
	      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
	      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
	        load_to_gp_in_on_chip_1_buf4_FIFO_buf9295(gp_in_on_chip_1_buf4_to_gp_560 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf92, (0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        us15(gp_in_on_chip_1_buf4_FIFO_buf92 /* buf name */, gp_in_on_chip_1_buf4_us12, (0), (-2 + i0), (-2 + i1));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        load_to_gp_in_on_chip_1_buf4_us12_to_gp_16871(gp_in_on_chip_1_buf4_us12 /* buf name */, gp_in_on_chip_1_buf4_us12_to_gp_168, (0), (-2 + i0), (-2 + i1));
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275(gp_in_on_chip_1_buf4_us24_cache& gp_in_on_chip_1_buf4_us24, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us24_to_gp_272, int root, int gp_in_on_chip_1_buf4_us24_ld74, int gp_in_on_chip_1_buf4_us24_ld73) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us24
	auto gp_in_on_chip_1_buf4_us24_gp_in_on_chip_1_buf4_us24_ld73_c__gp_in_on_chip_1_buf4_us24_ld74_value = gp_in_on_chip_1_buf4_us24_load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275_read_bundle_read(gp_in_on_chip_1_buf4_us24/* source_delay */, root, gp_in_on_chip_1_buf4_us24_ld74, gp_in_on_chip_1_buf4_us24_ld73, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us24_to_gp_272
	gp_in_on_chip_1_buf4_us24_to_gp_272.write(gp_in_on_chip_1_buf4_us24_gp_in_on_chip_1_buf4_us24_ld73_c__gp_in_on_chip_1_buf4_us24_ld74_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us27(gp_in_on_chip_1_buf4_FIFO_buf96_cache& gp_in_on_chip_1_buf4_FIFO_buf96, gp_in_on_chip_1_buf4_us24_cache& gp_in_on_chip_1_buf4_us24, int root, int us_gp_in_on_chip_1_buf425, int us_gp_in_on_chip_1_buf426) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_FIFO_buf96
	auto gp_in_on_chip_1_buf4_FIFO_buf96_floor_lp_us_gp_in_on_chip_1_buf426__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_1_buf425__div__2_rp__p_0_value = gp_in_on_chip_1_buf4_FIFO_buf96_us27_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf96/* source_delay */, root, us_gp_in_on_chip_1_buf425, us_gp_in_on_chip_1_buf426, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us24
	gp_in_on_chip_1_buf4_us24_us27_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_FIFO_buf96_floor_lp_us_gp_in_on_chip_1_buf426__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_1_buf425__div__2_rp__p_0_value, gp_in_on_chip_1_buf4_us24, root, us_gp_in_on_chip_1_buf425, us_gp_in_on_chip_1_buf426, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_FIFO_buf9699(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_664, gp_in_on_chip_1_buf4_FIFO_buf96_cache& gp_in_on_chip_1_buf4_FIFO_buf96, int root, int gp_in_on_chip_1_buf4_to_gp_664_ld98, int gp_in_on_chip_1_buf4_to_gp_664_ld97) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_to_gp_664
	auto gp_in_on_chip_1_buf4_to_gp_664_gp_in_on_chip_1_buf4_to_gp_664_ld97_c__gp_in_on_chip_1_buf4_to_gp_664_ld98_value = gp_in_on_chip_1_buf4_to_gp_664.read();
	// Produce: gp_in_on_chip_1_buf4_FIFO_buf96
	gp_in_on_chip_1_buf4_FIFO_buf96_load_to_gp_in_on_chip_1_buf4_FIFO_buf9699_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_to_gp_664_gp_in_on_chip_1_buf4_to_gp_664_ld97_c__gp_in_on_chip_1_buf4_to_gp_664_ld98_value, gp_in_on_chip_1_buf4_FIFO_buf96, root, gp_in_on_chip_1_buf4_to_gp_664_ld98, gp_in_on_chip_1_buf4_to_gp_664_ld97, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_to_gp_664_ld98_gp_in_on_chip_1_buf4_us24_ld74_us_gp_in_on_chip_1_buf425_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_664, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us24_to_gp_272) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_to_gp_664_ld98_gp_in_on_chip_1_buf4_us24_ld74_us_gp_in_on_chip_1_buf425__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_FIFO_buf96_cache gp_in_on_chip_1_buf4_FIFO_buf96;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us24_cache gp_in_on_chip_1_buf4_us24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275[root = 0, gp_in_on_chip_1_buf4_us24_ld74, gp_in_on_chip_1_buf4_us24_ld73] -> [2 + gp_in_on_chip_1_buf4_us24_ld74, 2 + gp_in_on_chip_1_buf4_us24_ld73, 15] : 0 <= gp_in_on_chip_1_buf4_us24_ld74 <= 63 and 0 <= gp_in_on_chip_1_buf4_us24_ld73 <= 63; load_to_gp_in_on_chip_1_buf4_FIFO_buf9699[root = 0, gp_in_on_chip_1_buf4_to_gp_664_ld98, gp_in_on_chip_1_buf4_to_gp_664_ld97] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_664_ld98, 2 + 2gp_in_on_chip_1_buf4_to_gp_664_ld97, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_664_ld98 <= 31 and 0 <= gp_in_on_chip_1_buf4_to_gp_664_ld97 <= 31; us27[root = 0, us_gp_in_on_chip_1_buf425, us_gp_in_on_chip_1_buf426] -> [2 + us_gp_in_on_chip_1_buf425, 2 + us_gp_in_on_chip_1_buf426, 14] : 0 <= us_gp_in_on_chip_1_buf425 <= 63 and 0 <= us_gp_in_on_chip_1_buf426 <= 63 }
//   { load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275[root = 0, gp_in_on_chip_1_buf4_us24_ld74, gp_in_on_chip_1_buf4_us24_ld73] -> [2 + gp_in_on_chip_1_buf4_us24_ld74, 2 + gp_in_on_chip_1_buf4_us24_ld73, 15] : 0 <= gp_in_on_chip_1_buf4_us24_ld74 <= 63 and 0 <= gp_in_on_chip_1_buf4_us24_ld73 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275(((-15 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_FIFO_buf9699[root = 0, gp_in_on_chip_1_buf4_to_gp_664_ld98, gp_in_on_chip_1_buf4_to_gp_664_ld97] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_664_ld98, 2 + 2gp_in_on_chip_1_buf4_to_gp_664_ld97, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_664_ld98 <= 31 and 0 <= gp_in_on_chip_1_buf4_to_gp_664_ld97 <= 31 }
// Condition for load_to_gp_in_on_chip_1_buf4_FIFO_buf9699(((-i0 + 2*floor((i0)/2) == 0) && (-i1 + 2*floor((i1)/2) == 0) && (-5 + i2 == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))
//   { us27[root = 0, us_gp_in_on_chip_1_buf425, us_gp_in_on_chip_1_buf426] -> [2 + us_gp_in_on_chip_1_buf425, 2 + us_gp_in_on_chip_1_buf426, 14] : 0 <= us_gp_in_on_chip_1_buf425 <= 63 and 0 <= us_gp_in_on_chip_1_buf426 <= 63 }
// Condition for us27(((-14 + i2 == 0) && (-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))

  /*
// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and 2 <= i1 <= 65 and 14 <= i2 <= 15; [i0, i1, 5] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
// # sets: 1
for (int i0 = 2; i0 <= 65; i0++) {
  for (int i1 = 2; i1 <= 65; i1++) {
#pragma HLS pipeline II=1
      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
        load_to_gp_in_on_chip_1_buf4_FIFO_buf9699((0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        us27((0), (-2 + i0), (-2 + i1));
      }
      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
        load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275((0), (-2 + i0), (-2 + i1));
      }
    }
  }

  */
	// time range: { [i0, i1, i2] : 2 <= i0 <= 65 and 2 <= i1 <= 65 and 14 <= i2 <= 15; [i0, i1, 5] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
	// # sets: 1
	for (int i0 = 2; i0 <= 65; i0++) {
	  for (int i1 = 2; i1 <= 65; i1++) {
	#pragma HLS pipeline II=1
	      // { [i0, i1] : (i0) mod 2 = 0 and (i1) mod 2 = 0 and 2 <= i0 <= 64 and 2 <= i1 <= 64 }
	      if ((((-i1 + 2*floor((i1)/2) == 0) && (-i0 + 2*floor((i0)/2) == 0) && (-2 + i0 >= 0) && (64 - i0 >= 0) && (-2 + i1 >= 0) && (64 - i1 >= 0)))) {
	        load_to_gp_in_on_chip_1_buf4_FIFO_buf9699(gp_in_on_chip_1_buf4_to_gp_664 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf96, (0), (-1 + floor((i0)/2)), (-1 + floor((i1)/2)));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        us27(gp_in_on_chip_1_buf4_FIFO_buf96 /* buf name */, gp_in_on_chip_1_buf4_us24, (0), (-2 + i0), (-2 + i1));
	      }
	      // { [i0, i1] : 2 <= i0 <= 65 and 2 <= i1 <= 65 }
	      if ((((-2 + i0 >= 0) && (65 - i0 >= 0) && (-2 + i1 >= 0) && (65 - i1 >= 0)))) {
	        load_to_gp_in_on_chip_1_buf4_us24_to_gp_27275(gp_in_on_chip_1_buf4_us24 /* buf name */, gp_in_on_chip_1_buf4_us24_to_gp_272, (0), (-2 + i0), (-2 + i1));
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void pyr_blnd1c(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("pyr_blnd1c_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<32> > in_on_chip_to_gp_076;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_on_chip_to_gp_076.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_to_gp_560;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_to_gp_560.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_to_gp_664;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_to_gp_664.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_us12_to_gp_168;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_us12_to_gp_168.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > in_on_chip_to_gp_180;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_on_chip_to_gp_180.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_0_buf16_to_gp_284;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_0_buf16_to_gp_284.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_us24_to_gp_272;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_us24_to_gp_272.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488.values depth=1
#endif //__VIVADO_SYNTH__


  Extracted_in_on_chip_ld78_in_on_chip_ld82_pw_math_in01_(in, in_on_chip_to_gp_076, in_on_chip_to_gp_180);
  Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld62_gp_in_on_chip_1_buf4_ld66_in_on_chip_to_gp_076_ld110_(in_on_chip_to_gp_076, gp_in_on_chip_1_buf4_to_gp_560, gp_in_on_chip_1_buf4_to_gp_664);
  Extracted_gp_in_on_chip_1_buf4_to_gp_560_ld94_gp_in_on_chip_1_buf4_us12_ld70_us_gp_in_on_chip_1_buf413_(gp_in_on_chip_1_buf4_to_gp_560, gp_in_on_chip_1_buf4_us12_to_gp_168);
  Extracted_gp_in_on_chip_1_buf4_to_gp_664_ld98_gp_in_on_chip_1_buf4_us24_ld74_us_gp_in_on_chip_1_buf425_(gp_in_on_chip_1_buf4_to_gp_664, gp_in_on_chip_1_buf4_us24_to_gp_272);
  Extracted_gp_in_on_chip_1_buf4_us12_to_gp_168_ld102_in_on_chip_to_gp_180_ld114_lp_in_on_chip_017_lp_in_on_chip_0_buf16_ld86_(gp_in_on_chip_1_buf4_us12_to_gp_168, in_on_chip_to_gp_180, lp_in_on_chip_0_buf16_to_gp_284);
  Extracted_gp_in_on_chip_1_buf4_us24_to_gp_272_ld106_lp_in_on_chip_0_buf16_reconstruct_lp2021_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_ld90_lp_in_on_chip_0_buf16_to_gp_284_ld118_(gp_in_on_chip_1_buf4_us24_to_gp_272, lp_in_on_chip_0_buf16_to_gp_284, lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488);
  Extracted_lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488_ld122_pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930_(lp_in_on_chip_0_buf16_reconstruct_lp20_buf23_to_gp_488, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void pyr_blnd1c_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    pyr_blnd1c(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> in[pw_math_in02, pw_math_in01] : 0 <= pw_math_in01 <= 64 and 0 <= pw_math_in02 <= 64 }
const int pw_math_in03_read_pipe0_num_transfers = 4225;
  // { pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932[root = 0, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931] -> out[pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930] : 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232930 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232931 <= 63 }
const int pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0_num_transfers = 4096;


extern "C" {

void pyr_blnd1c_accel(hw_uint<32>* pw_math_in03_read_pipe0, hw_uint<32>* pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0_channel;

  burst_read<32>(pw_math_in03_read_pipe0, pw_math_in03_read_pipe0_channel, pw_math_in03_read_pipe0_num_transfers*size);

  pyr_blnd1c_wrapper(pw_math_in03_read_pipe0_channel, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0_channel, size);

  burst_write<32>(pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0_channel, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0_num_transfers*size);
}

}
extern "C" {

void pyr_blnd1c_rdai(HWStream<hw_uint<32> >& pw_math_in03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  pyr_blnd1c(pw_math_in03_read_pipe0, pw_math_lp_in_on_chip_0_buf16_reconstruct_lp20_buf232932_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

