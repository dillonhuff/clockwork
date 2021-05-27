#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: harris_compute.h
#include "harris_compute.h"

struct cim_output_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 57], [0, 57]}
  hw_uint<16> RAM[58][58];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct cim_output_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> cim_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
  // # of banks: 1
  cim_output_stencil_all_inputs_to_all_outputs_cache cim_output_stencil_all_inputs_to_all_outputs;
};



inline void cim_output_stencil_op_hcompute_cim_output_stencil_65_write(hw_uint<16>& cim_output_stencil_op_hcompute_cim_output_stencil_65, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  cim_output_stencil.cim_output_stencil_all_inputs_to_all_outputs.write(cim_output_stencil_op_hcompute_cim_output_stencil_65, ((1*cim_output_s0_y)) - 0, ((1*cim_output_s0_x)) - 0);
}

inline hw_uint<16> cim_output_stencil_op_hcompute_hw_output_stencil_46_select(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_output_stencil_op_hcompute_hw_output_stencil_46 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> cim_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
  auto value_cim_output_stencil_op_hcompute_cim_output_stencil_65 = cim_output_stencil.cim_output_stencil_all_inputs_to_all_outputs.read(((1*hw_output_s0_y_yi)) - 0, ((1*hw_output_s0_x_xi)) - 0);
  return value_cim_output_stencil_op_hcompute_cim_output_stencil_65;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_output_stencil_write
//	cim_output_stencil_op_hcompute_cim_output_stencil_65
inline void cim_output_stencil_op_hcompute_cim_output_stencil_write_bundle_write(hw_uint<16>& op_hcompute_cim_output_stencil_write, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
	hw_uint<16> cim_output_stencil_op_hcompute_cim_output_stencil_65_res = op_hcompute_cim_output_stencil_write.extract<0, 15>();
	cim_output_stencil_op_hcompute_cim_output_stencil_65_write(cim_output_stencil_op_hcompute_cim_output_stencil_65_res, cim_output_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	cim_output_stencil_op_hcompute_hw_output_stencil_46
inline hw_uint<16> cim_output_stencil_op_hcompute_hw_output_stencil_read_bundle_read(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // cim_output_stencil_op_hcompute_hw_output_stencil_46

	hw_uint<16> result;
	hw_uint<16> cim_output_stencil_op_hcompute_hw_output_stencil_46_res = cim_output_stencil_op_hcompute_hw_output_stencil_46_select(cim_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, cim_output_stencil_op_hcompute_hw_output_stencil_46_res);
	return result;
}

struct cim_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
  hw_uint<16> RAM[60][60];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct cim_stencil_cache {
  // Reader addrs...
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // # of banks: 1
  cim_stencil_all_inputs_to_all_outputs_cache cim_stencil_all_inputs_to_all_outputs;
};



inline void cim_stencil_op_hcompute_cim_stencil_61_write(hw_uint<16>& cim_stencil_op_hcompute_cim_stencil_61, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  cim_stencil.cim_stencil_all_inputs_to_all_outputs.write(cim_stencil_op_hcompute_cim_stencil_61, ((1*cim_s0_y)) - -1, ((1*cim_s0_x)) - -1);
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_66_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_op_hcompute_cim_output_stencil_66 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(((-1 + 1*cim_output_s0_y)) - -1, ((-1 + 1*cim_output_s0_x)) - -1);
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_67_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_op_hcompute_cim_output_stencil_67 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(((1*cim_output_s0_y)) - -1, ((1*cim_output_s0_x)) - -1);
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_68_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_op_hcompute_cim_output_stencil_68 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(((-1 + 1*cim_output_s0_y)) - -1, ((1*cim_output_s0_x)) - -1);
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_69_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_op_hcompute_cim_output_stencil_69 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(((-1 + 1*cim_output_s0_y)) - -1, ((1 + 1*cim_output_s0_x)) - -1);
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_70_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_op_hcompute_cim_output_stencil_70 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(((1*cim_output_s0_y)) - -1, ((-1 + 1*cim_output_s0_x)) - -1);
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_71_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_op_hcompute_cim_output_stencil_71 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(((1*cim_output_s0_y)) - -1, ((1 + 1*cim_output_s0_x)) - -1);
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_72_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_op_hcompute_cim_output_stencil_72 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(((1 + 1*cim_output_s0_y)) - -1, ((-1 + 1*cim_output_s0_x)) - -1);
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_73_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_op_hcompute_cim_output_stencil_73 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(((1 + 1*cim_output_s0_y)) - -1, ((1*cim_output_s0_x)) - -1);
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_74_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_op_hcompute_cim_output_stencil_74 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(((1 + 1*cim_output_s0_y)) - -1, ((1 + 1*cim_output_s0_x)) - -1);
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_output_stencil_read
//	cim_stencil_op_hcompute_cim_output_stencil_66
//	cim_stencil_op_hcompute_cim_output_stencil_67
//	cim_stencil_op_hcompute_cim_output_stencil_68
//	cim_stencil_op_hcompute_cim_output_stencil_69
//	cim_stencil_op_hcompute_cim_output_stencil_70
//	cim_stencil_op_hcompute_cim_output_stencil_71
//	cim_stencil_op_hcompute_cim_output_stencil_72
//	cim_stencil_op_hcompute_cim_output_stencil_73
//	cim_stencil_op_hcompute_cim_output_stencil_74
inline hw_uint<144> cim_stencil_op_hcompute_cim_output_stencil_read_bundle_read(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  // # of ports in bundle: 9
    // cim_stencil_op_hcompute_cim_output_stencil_66
    // cim_stencil_op_hcompute_cim_output_stencil_67
    // cim_stencil_op_hcompute_cim_output_stencil_68
    // cim_stencil_op_hcompute_cim_output_stencil_69
    // cim_stencil_op_hcompute_cim_output_stencil_70
    // cim_stencil_op_hcompute_cim_output_stencil_71
    // cim_stencil_op_hcompute_cim_output_stencil_72
    // cim_stencil_op_hcompute_cim_output_stencil_73
    // cim_stencil_op_hcompute_cim_output_stencil_74

	hw_uint<144> result;
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_66_res = cim_stencil_op_hcompute_cim_output_stencil_66_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<0, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_66_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_67_res = cim_stencil_op_hcompute_cim_output_stencil_67_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<16, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_67_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_68_res = cim_stencil_op_hcompute_cim_output_stencil_68_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<32, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_68_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_69_res = cim_stencil_op_hcompute_cim_output_stencil_69_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<48, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_69_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_70_res = cim_stencil_op_hcompute_cim_output_stencil_70_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<64, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_70_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_71_res = cim_stencil_op_hcompute_cim_output_stencil_71_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<80, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_71_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_72_res = cim_stencil_op_hcompute_cim_output_stencil_72_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<96, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_72_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_73_res = cim_stencil_op_hcompute_cim_output_stencil_73_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<112, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_73_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_74_res = cim_stencil_op_hcompute_cim_output_stencil_74_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<128, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_74_res);
	return result;
}

// op_hcompute_cim_stencil_write
//	cim_stencil_op_hcompute_cim_stencil_61
inline void cim_stencil_op_hcompute_cim_stencil_write_bundle_write(hw_uint<16>& op_hcompute_cim_stencil_write, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
	hw_uint<16> cim_stencil_op_hcompute_cim_stencil_61_res = op_hcompute_cim_stencil_write.extract<0, 15>();
	cim_stencil_op_hcompute_cim_stencil_61_write(cim_stencil_op_hcompute_cim_stencil_61_res, cim_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
}

struct grad_x_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
  hw_uint<16> RAM[62][62];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct grad_x_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> grad_x_stencil[lxx_s0_y, lxx_s0_x] : -2 <= lxx_s0_y <= 59 and -2 <= lxx_s0_x <= 59 }
    // { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_x_stencil[lxy_s0_y, lxy_s0_x] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59 }
  // # of banks: 1
  grad_x_stencil_all_inputs_to_all_outputs_cache grad_x_stencil_all_inputs_to_all_outputs;
};



inline void grad_x_stencil_op_hcompute_grad_x_stencil_54_write(hw_uint<16>& grad_x_stencil_op_hcompute_grad_x_stencil_54, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  grad_x_stencil.grad_x_stencil_all_inputs_to_all_outputs.write(grad_x_stencil_op_hcompute_grad_x_stencil_54, ((1*grad_x_s0_y)) - -2, ((1*grad_x_s0_x)) - -2);
}

inline hw_uint<16> grad_x_stencil_op_hcompute_lxx_stencil_8_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_stencil_op_hcompute_lxx_stencil_8 read pattern: { op_hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> grad_x_stencil[lxx_s0_y, lxx_s0_x] : -2 <= lxx_s0_y <= 59 and -2 <= lxx_s0_x <= 59 }
  auto value_grad_x_stencil_op_hcompute_grad_x_stencil_54 = grad_x_stencil.grad_x_stencil_all_inputs_to_all_outputs.read(((1*lxx_s0_y)) - -2, ((1*lxx_s0_x)) - -2);
  return value_grad_x_stencil_op_hcompute_grad_x_stencil_54;
  return 0;
}

inline hw_uint<16> grad_x_stencil_op_hcompute_lxy_stencil_5_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_stencil_op_hcompute_lxy_stencil_5 read pattern: { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_x_stencil[lxy_s0_y, lxy_s0_x] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59 }
  auto value_grad_x_stencil_op_hcompute_grad_x_stencil_54 = grad_x_stencil.grad_x_stencil_all_inputs_to_all_outputs.read(((1*lxy_s0_y)) - -2, ((1*lxy_s0_x)) - -2);
  return value_grad_x_stencil_op_hcompute_grad_x_stencil_54;
  return 0;
}

// # of bundles = 3
// op_hcompute_grad_x_stencil_write
//	grad_x_stencil_op_hcompute_grad_x_stencil_54
inline void grad_x_stencil_op_hcompute_grad_x_stencil_write_bundle_write(hw_uint<16>& op_hcompute_grad_x_stencil_write, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
	hw_uint<16> grad_x_stencil_op_hcompute_grad_x_stencil_54_res = op_hcompute_grad_x_stencil_write.extract<0, 15>();
	grad_x_stencil_op_hcompute_grad_x_stencil_54_write(grad_x_stencil_op_hcompute_grad_x_stencil_54_res, grad_x_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
}

// op_hcompute_lxx_stencil_read
//	grad_x_stencil_op_hcompute_lxx_stencil_8
inline hw_uint<16> grad_x_stencil_op_hcompute_lxx_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_op_hcompute_lxx_stencil_8

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_op_hcompute_lxx_stencil_8_res = grad_x_stencil_op_hcompute_lxx_stencil_8_select(grad_x_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_op_hcompute_lxx_stencil_8_res);
	return result;
}

// op_hcompute_lxy_stencil_read
//	grad_x_stencil_op_hcompute_lxy_stencil_5
inline hw_uint<16> grad_x_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_op_hcompute_lxy_stencil_5

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_op_hcompute_lxy_stencil_5_res = grad_x_stencil_op_hcompute_lxy_stencil_5_select(grad_x_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_op_hcompute_lxy_stencil_5_res);
	return result;
}

struct grad_y_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
  hw_uint<16> RAM[62][62];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct grad_y_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_y_stencil[lxy_s0_y, lxy_s0_x] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59 }
    // { op_hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> grad_y_stencil[lyy_s0_y, lyy_s0_x] : -2 <= lyy_s0_y <= 59 and -2 <= lyy_s0_x <= 59 }
  // # of banks: 1
  grad_y_stencil_all_inputs_to_all_outputs_cache grad_y_stencil_all_inputs_to_all_outputs;
};



inline void grad_y_stencil_op_hcompute_grad_y_stencil_47_write(hw_uint<16>& grad_y_stencil_op_hcompute_grad_y_stencil_47, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  grad_y_stencil.grad_y_stencil_all_inputs_to_all_outputs.write(grad_y_stencil_op_hcompute_grad_y_stencil_47, ((1*grad_y_s0_y)) - -2, ((1*grad_y_s0_x)) - -2);
}

inline hw_uint<16> grad_y_stencil_op_hcompute_lxy_stencil_6_select(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_stencil_op_hcompute_lxy_stencil_6 read pattern: { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_y_stencil[lxy_s0_y, lxy_s0_x] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59 }
  auto value_grad_y_stencil_op_hcompute_grad_y_stencil_47 = grad_y_stencil.grad_y_stencil_all_inputs_to_all_outputs.read(((1*lxy_s0_y)) - -2, ((1*lxy_s0_x)) - -2);
  return value_grad_y_stencil_op_hcompute_grad_y_stencil_47;
  return 0;
}

inline hw_uint<16> grad_y_stencil_op_hcompute_lyy_stencil_3_select(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_stencil_op_hcompute_lyy_stencil_3 read pattern: { op_hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> grad_y_stencil[lyy_s0_y, lyy_s0_x] : -2 <= lyy_s0_y <= 59 and -2 <= lyy_s0_x <= 59 }
  auto value_grad_y_stencil_op_hcompute_grad_y_stencil_47 = grad_y_stencil.grad_y_stencil_all_inputs_to_all_outputs.read(((1*lyy_s0_y)) - -2, ((1*lyy_s0_x)) - -2);
  return value_grad_y_stencil_op_hcompute_grad_y_stencil_47;
  return 0;
}

// # of bundles = 3
// op_hcompute_grad_y_stencil_write
//	grad_y_stencil_op_hcompute_grad_y_stencil_47
inline void grad_y_stencil_op_hcompute_grad_y_stencil_write_bundle_write(hw_uint<16>& op_hcompute_grad_y_stencil_write, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
	hw_uint<16> grad_y_stencil_op_hcompute_grad_y_stencil_47_res = op_hcompute_grad_y_stencil_write.extract<0, 15>();
	grad_y_stencil_op_hcompute_grad_y_stencil_47_write(grad_y_stencil_op_hcompute_grad_y_stencil_47_res, grad_y_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
}

// op_hcompute_lxy_stencil_read
//	grad_y_stencil_op_hcompute_lxy_stencil_6
inline hw_uint<16> grad_y_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_op_hcompute_lxy_stencil_6

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_op_hcompute_lxy_stencil_6_res = grad_y_stencil_op_hcompute_lxy_stencil_6_select(grad_y_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_op_hcompute_lxy_stencil_6_res);
	return result;
}

// op_hcompute_lyy_stencil_read
//	grad_y_stencil_op_hcompute_lyy_stencil_3
inline hw_uint<16> grad_y_stencil_op_hcompute_lyy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_op_hcompute_lyy_stencil_3

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_op_hcompute_lyy_stencil_3_res = grad_y_stencil_op_hcompute_lyy_stencil_3_select(grad_y_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_op_hcompute_lyy_stencil_3_res);
	return result;
}

struct lgxx_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
  hw_uint<16> RAM[60][60];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct lgxx_stencil_cache {
  // Reader addrs...
    // { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxx_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  // # of banks: 1
  lgxx_stencil_all_inputs_to_all_outputs_cache lgxx_stencil_all_inputs_to_all_outputs;
};



inline void lgxx_stencil_op_hcompute_lgxx_stencil_1_33_write(hw_uint<16>& lgxx_stencil_op_hcompute_lgxx_stencil_1_33, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_all_inputs_to_all_outputs.write(lgxx_stencil_op_hcompute_lgxx_stencil_1_33, ((1*lgxx_s1_y)) - -1, ((1*lgxx_s1_x)) - -1);
}

inline hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_62_select(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_stencil_op_hcompute_cim_stencil_62 read pattern: { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxx_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  auto value_lgxx_stencil_op_hcompute_lgxx_stencil_1_33 = lgxx_stencil.lgxx_stencil_all_inputs_to_all_outputs.read(((1*cim_s0_y)) - -1, ((1*cim_s0_x)) - -1);
  return value_lgxx_stencil_op_hcompute_lgxx_stencil_1_33;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_stencil_read
//	lgxx_stencil_op_hcompute_cim_stencil_62
inline hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_op_hcompute_cim_stencil_62

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_62_res = lgxx_stencil_op_hcompute_cim_stencil_62_select(lgxx_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_op_hcompute_cim_stencil_62_res);
	return result;
}

// op_hcompute_lgxx_stencil_1_write
//	lgxx_stencil_op_hcompute_lgxx_stencil_1_33
inline void lgxx_stencil_op_hcompute_lgxx_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lgxx_stencil_1_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_op_hcompute_lgxx_stencil_1_33_res = op_hcompute_lgxx_stencil_1_write.extract<0, 15>();
	lgxx_stencil_op_hcompute_lgxx_stencil_1_33_write(lgxx_stencil_op_hcompute_lgxx_stencil_1_33_res, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
}

struct lgxx_stencil_clkwrk_dsa0_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
  hw_uint<16> RAM[60][60];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct lgxx_stencil_clkwrk_dsa0_cache {
  // Reader addrs...
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lgxx_stencil_clkwrk_dsa0[lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // # of banks: 1
  lgxx_stencil_clkwrk_dsa0_all_inputs_to_all_outputs_cache lgxx_stencil_clkwrk_dsa0_all_inputs_to_all_outputs;
};



inline void lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_write(hw_uint<16>& lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44, lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
  lgxx_stencil_clkwrk_dsa0.lgxx_stencil_clkwrk_dsa0_all_inputs_to_all_outputs.write(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44, ((1*lgxx_s0_y)) - -1, ((1*lgxx_s0_x)) - -1);
}

inline hw_uint<16> lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_select(lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lgxx_stencil_clkwrk_dsa0[lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44 = lgxx_stencil_clkwrk_dsa0.lgxx_stencil_clkwrk_dsa0_all_inputs_to_all_outputs.read(((1*lgxx_s1_y)) - -1, ((1*lgxx_s1_x)) - -1);
  return value_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgxx_stencil_1_read
//	lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34
inline hw_uint<16> lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_bundle_read(lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_res = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_select(lgxx_stencil_clkwrk_dsa0, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_res);
	return result;
}

// op_hcompute_lgxx_stencil_write
//	lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44
inline void lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lgxx_stencil_write, lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_res = op_hcompute_lgxx_stencil_write.extract<0, 15>();
	lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_write(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_res, lgxx_stencil_clkwrk_dsa0, root, lgxx_s0_y, lgxx_s0_x, dynamic_address);
}

struct lgxy_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
  hw_uint<16> RAM[60][60];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct lgxy_stencil_cache {
  // Reader addrs...
    // { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxy_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  // # of banks: 1
  lgxy_stencil_all_inputs_to_all_outputs_cache lgxy_stencil_all_inputs_to_all_outputs;
};



inline void lgxy_stencil_op_hcompute_lgxy_stencil_1_21_write(hw_uint<16>& lgxy_stencil_op_hcompute_lgxy_stencil_1_21, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_all_inputs_to_all_outputs.write(lgxy_stencil_op_hcompute_lgxy_stencil_1_21, ((1*lgxy_s1_y)) - -1, ((1*lgxy_s1_x)) - -1);
}

inline hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_63_select(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_stencil_op_hcompute_cim_stencil_63 read pattern: { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxy_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  auto value_lgxy_stencil_op_hcompute_lgxy_stencil_1_21 = lgxy_stencil.lgxy_stencil_all_inputs_to_all_outputs.read(((1*cim_s0_y)) - -1, ((1*cim_s0_x)) - -1);
  return value_lgxy_stencil_op_hcompute_lgxy_stencil_1_21;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_stencil_read
//	lgxy_stencil_op_hcompute_cim_stencil_63
inline hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_op_hcompute_cim_stencil_63

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_63_res = lgxy_stencil_op_hcompute_cim_stencil_63_select(lgxy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_op_hcompute_cim_stencil_63_res);
	return result;
}

// op_hcompute_lgxy_stencil_1_write
//	lgxy_stencil_op_hcompute_lgxy_stencil_1_21
inline void lgxy_stencil_op_hcompute_lgxy_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lgxy_stencil_1_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_op_hcompute_lgxy_stencil_1_21_res = op_hcompute_lgxy_stencil_1_write.extract<0, 15>();
	lgxy_stencil_op_hcompute_lgxy_stencil_1_21_write(lgxy_stencil_op_hcompute_lgxy_stencil_1_21_res, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
}

struct lgxy_stencil_clkwrk_dsa1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
  hw_uint<16> RAM[60][60];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct lgxy_stencil_clkwrk_dsa1_cache {
  // Reader addrs...
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lgxy_stencil_clkwrk_dsa1[lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // # of banks: 1
  lgxy_stencil_clkwrk_dsa1_all_inputs_to_all_outputs_cache lgxy_stencil_clkwrk_dsa1_all_inputs_to_all_outputs;
};



inline void lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_write(hw_uint<16>& lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32, lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
  lgxy_stencil_clkwrk_dsa1.lgxy_stencil_clkwrk_dsa1_all_inputs_to_all_outputs.write(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32, ((1*lgxy_s0_y)) - -1, ((1*lgxy_s0_x)) - -1);
}

inline hw_uint<16> lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_select(lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lgxy_stencil_clkwrk_dsa1[lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32 = lgxy_stencil_clkwrk_dsa1.lgxy_stencil_clkwrk_dsa1_all_inputs_to_all_outputs.read(((1*lgxy_s1_y)) - -1, ((1*lgxy_s1_x)) - -1);
  return value_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgxy_stencil_1_read
//	lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22
inline hw_uint<16> lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_bundle_read(lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_res = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_select(lgxy_stencil_clkwrk_dsa1, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_res);
	return result;
}

// op_hcompute_lgxy_stencil_write
//	lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32
inline void lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lgxy_stencil_write, lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_res = op_hcompute_lgxy_stencil_write.extract<0, 15>();
	lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_write(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_res, lgxy_stencil_clkwrk_dsa1, root, lgxy_s0_y, lgxy_s0_x, dynamic_address);
}

struct lgyy_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
  hw_uint<16> RAM[60][60];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct lgyy_stencil_cache {
  // Reader addrs...
    // { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgyy_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  // # of banks: 1
  lgyy_stencil_all_inputs_to_all_outputs_cache lgyy_stencil_all_inputs_to_all_outputs;
};



inline void lgyy_stencil_op_hcompute_lgyy_stencil_1_9_write(hw_uint<16>& lgyy_stencil_op_hcompute_lgyy_stencil_1_9, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_all_inputs_to_all_outputs.write(lgyy_stencil_op_hcompute_lgyy_stencil_1_9, ((1*lgyy_s1_y)) - -1, ((1*lgyy_s1_x)) - -1);
}

inline hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_64_select(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_stencil_op_hcompute_cim_stencil_64 read pattern: { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgyy_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  auto value_lgyy_stencil_op_hcompute_lgyy_stencil_1_9 = lgyy_stencil.lgyy_stencil_all_inputs_to_all_outputs.read(((1*cim_s0_y)) - -1, ((1*cim_s0_x)) - -1);
  return value_lgyy_stencil_op_hcompute_lgyy_stencil_1_9;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_stencil_read
//	lgyy_stencil_op_hcompute_cim_stencil_64
inline hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_op_hcompute_cim_stencil_64

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_64_res = lgyy_stencil_op_hcompute_cim_stencil_64_select(lgyy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_op_hcompute_cim_stencil_64_res);
	return result;
}

// op_hcompute_lgyy_stencil_1_write
//	lgyy_stencil_op_hcompute_lgyy_stencil_1_9
inline void lgyy_stencil_op_hcompute_lgyy_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lgyy_stencil_1_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_op_hcompute_lgyy_stencil_1_9_res = op_hcompute_lgyy_stencil_1_write.extract<0, 15>();
	lgyy_stencil_op_hcompute_lgyy_stencil_1_9_write(lgyy_stencil_op_hcompute_lgyy_stencil_1_9_res, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
}

struct lgyy_stencil_clkwrk_dsa2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
  hw_uint<16> RAM[60][60];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct lgyy_stencil_clkwrk_dsa2_cache {
  // Reader addrs...
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lgyy_stencil_clkwrk_dsa2[lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // # of banks: 1
  lgyy_stencil_clkwrk_dsa2_all_inputs_to_all_outputs_cache lgyy_stencil_clkwrk_dsa2_all_inputs_to_all_outputs;
};



inline void lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_write(hw_uint<16>& lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20, lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
  lgyy_stencil_clkwrk_dsa2.lgyy_stencil_clkwrk_dsa2_all_inputs_to_all_outputs.write(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20, ((1*lgyy_s0_y)) - -1, ((1*lgyy_s0_x)) - -1);
}

inline hw_uint<16> lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_select(lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lgyy_stencil_clkwrk_dsa2[lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20 = lgyy_stencil_clkwrk_dsa2.lgyy_stencil_clkwrk_dsa2_all_inputs_to_all_outputs.read(((1*lgyy_s1_y)) - -1, ((1*lgyy_s1_x)) - -1);
  return value_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgyy_stencil_1_read
//	lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10
inline hw_uint<16> lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_bundle_read(lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_res = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_select(lgyy_stencil_clkwrk_dsa2, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_res);
	return result;
}

// op_hcompute_lgyy_stencil_write
//	lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20
inline void lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lgyy_stencil_write, lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_res = op_hcompute_lgyy_stencil_write.extract<0, 15>();
	lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_write(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_res, lgyy_stencil_clkwrk_dsa2, root, lgyy_s0_y, lgyy_s0_x, dynamic_address);
}

struct lxx_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
  hw_uint<16> RAM[62][62];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct lxx_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // # of banks: 1
  lxx_stencil_all_inputs_to_all_outputs_cache lxx_stencil_all_inputs_to_all_outputs;
};



inline void lxx_stencil_op_hcompute_lxx_stencil_7_write(hw_uint<16>& lxx_stencil_op_hcompute_lxx_stencil_7, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.write(lxx_stencil_op_hcompute_lxx_stencil_7, ((1*lxx_s0_y)) - -2, ((1*lxx_s0_x)) - -2);
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_35_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_35 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(((-1 + 1*lgxx_s1_y)) - -2, ((-1 + 1*lgxx_s1_x)) - -2);
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_36_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_36 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(((-1 + 1*lgxx_s1_y)) - -2, ((1*lgxx_s1_x)) - -2);
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_37_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_37 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(((-1 + 1*lgxx_s1_y)) - -2, ((1 + 1*lgxx_s1_x)) - -2);
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_38_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_38 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(((1*lgxx_s1_y)) - -2, ((-1 + 1*lgxx_s1_x)) - -2);
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_39_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_39 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(((1*lgxx_s1_y)) - -2, ((1*lgxx_s1_x)) - -2);
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_40_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_40 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(((1*lgxx_s1_y)) - -2, ((1 + 1*lgxx_s1_x)) - -2);
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_41_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_41 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(((1 + 1*lgxx_s1_y)) - -2, ((-1 + 1*lgxx_s1_x)) - -2);
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_42_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_42 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(((1 + 1*lgxx_s1_y)) - -2, ((1 + 1*lgxx_s1_x)) - -2);
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_43_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_43 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(((1 + 1*lgxx_s1_y)) - -2, ((1*lgxx_s1_x)) - -2);
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgxx_stencil_1_read
//	lxx_stencil_op_hcompute_lgxx_stencil_1_35
//	lxx_stencil_op_hcompute_lgxx_stencil_1_36
//	lxx_stencil_op_hcompute_lgxx_stencil_1_37
//	lxx_stencil_op_hcompute_lgxx_stencil_1_38
//	lxx_stencil_op_hcompute_lgxx_stencil_1_39
//	lxx_stencil_op_hcompute_lgxx_stencil_1_40
//	lxx_stencil_op_hcompute_lgxx_stencil_1_41
//	lxx_stencil_op_hcompute_lgxx_stencil_1_42
//	lxx_stencil_op_hcompute_lgxx_stencil_1_43
inline hw_uint<144> lxx_stencil_op_hcompute_lgxx_stencil_1_read_bundle_read(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxx_stencil_op_hcompute_lgxx_stencil_1_35
    // lxx_stencil_op_hcompute_lgxx_stencil_1_36
    // lxx_stencil_op_hcompute_lgxx_stencil_1_37
    // lxx_stencil_op_hcompute_lgxx_stencil_1_38
    // lxx_stencil_op_hcompute_lgxx_stencil_1_39
    // lxx_stencil_op_hcompute_lgxx_stencil_1_40
    // lxx_stencil_op_hcompute_lgxx_stencil_1_41
    // lxx_stencil_op_hcompute_lgxx_stencil_1_42
    // lxx_stencil_op_hcompute_lgxx_stencil_1_43

	hw_uint<144> result;
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_35_res = lxx_stencil_op_hcompute_lgxx_stencil_1_35_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_35_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_36_res = lxx_stencil_op_hcompute_lgxx_stencil_1_36_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<16, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_36_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_37_res = lxx_stencil_op_hcompute_lgxx_stencil_1_37_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<32, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_37_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_38_res = lxx_stencil_op_hcompute_lgxx_stencil_1_38_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<48, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_38_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_39_res = lxx_stencil_op_hcompute_lgxx_stencil_1_39_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<64, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_39_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_40_res = lxx_stencil_op_hcompute_lgxx_stencil_1_40_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<80, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_40_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_41_res = lxx_stencil_op_hcompute_lgxx_stencil_1_41_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<96, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_41_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_42_res = lxx_stencil_op_hcompute_lgxx_stencil_1_42_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<112, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_42_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_43_res = lxx_stencil_op_hcompute_lgxx_stencil_1_43_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<128, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_43_res);
	return result;
}

// op_hcompute_lxx_stencil_write
//	lxx_stencil_op_hcompute_lxx_stencil_7
inline void lxx_stencil_op_hcompute_lxx_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lxx_stencil_write, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
	hw_uint<16> lxx_stencil_op_hcompute_lxx_stencil_7_res = op_hcompute_lxx_stencil_write.extract<0, 15>();
	lxx_stencil_op_hcompute_lxx_stencil_7_write(lxx_stencil_op_hcompute_lxx_stencil_7_res, lxx_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
}

struct lxy_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
  hw_uint<16> RAM[62][62];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct lxy_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // # of banks: 1
  lxy_stencil_all_inputs_to_all_outputs_cache lxy_stencil_all_inputs_to_all_outputs;
};



inline void lxy_stencil_op_hcompute_lxy_stencil_4_write(hw_uint<16>& lxy_stencil_op_hcompute_lxy_stencil_4, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.write(lxy_stencil_op_hcompute_lxy_stencil_4, ((1*lxy_s0_y)) - -2, ((1*lxy_s0_x)) - -2);
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_23_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_23 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(((-1 + 1*lgxy_s1_y)) - -2, ((-1 + 1*lgxy_s1_x)) - -2);
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_24_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_24 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(((-1 + 1*lgxy_s1_y)) - -2, ((1*lgxy_s1_x)) - -2);
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_25_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_25 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(((-1 + 1*lgxy_s1_y)) - -2, ((1 + 1*lgxy_s1_x)) - -2);
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_26_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_26 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(((1*lgxy_s1_y)) - -2, ((-1 + 1*lgxy_s1_x)) - -2);
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_27_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_27 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(((1*lgxy_s1_y)) - -2, ((1*lgxy_s1_x)) - -2);
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_28_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_28 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(((1*lgxy_s1_y)) - -2, ((1 + 1*lgxy_s1_x)) - -2);
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_29_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_29 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(((1 + 1*lgxy_s1_y)) - -2, ((-1 + 1*lgxy_s1_x)) - -2);
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_30_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_30 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(((1 + 1*lgxy_s1_y)) - -2, ((1 + 1*lgxy_s1_x)) - -2);
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_31_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_31 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(((1 + 1*lgxy_s1_y)) - -2, ((1*lgxy_s1_x)) - -2);
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgxy_stencil_1_read
//	lxy_stencil_op_hcompute_lgxy_stencil_1_23
//	lxy_stencil_op_hcompute_lgxy_stencil_1_24
//	lxy_stencil_op_hcompute_lgxy_stencil_1_25
//	lxy_stencil_op_hcompute_lgxy_stencil_1_26
//	lxy_stencil_op_hcompute_lgxy_stencil_1_27
//	lxy_stencil_op_hcompute_lgxy_stencil_1_28
//	lxy_stencil_op_hcompute_lgxy_stencil_1_29
//	lxy_stencil_op_hcompute_lgxy_stencil_1_30
//	lxy_stencil_op_hcompute_lgxy_stencil_1_31
inline hw_uint<144> lxy_stencil_op_hcompute_lgxy_stencil_1_read_bundle_read(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxy_stencil_op_hcompute_lgxy_stencil_1_23
    // lxy_stencil_op_hcompute_lgxy_stencil_1_24
    // lxy_stencil_op_hcompute_lgxy_stencil_1_25
    // lxy_stencil_op_hcompute_lgxy_stencil_1_26
    // lxy_stencil_op_hcompute_lgxy_stencil_1_27
    // lxy_stencil_op_hcompute_lgxy_stencil_1_28
    // lxy_stencil_op_hcompute_lgxy_stencil_1_29
    // lxy_stencil_op_hcompute_lgxy_stencil_1_30
    // lxy_stencil_op_hcompute_lgxy_stencil_1_31

	hw_uint<144> result;
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_23_res = lxy_stencil_op_hcompute_lgxy_stencil_1_23_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_23_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_24_res = lxy_stencil_op_hcompute_lgxy_stencil_1_24_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<16, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_24_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_25_res = lxy_stencil_op_hcompute_lgxy_stencil_1_25_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<32, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_25_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_26_res = lxy_stencil_op_hcompute_lgxy_stencil_1_26_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<48, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_26_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_27_res = lxy_stencil_op_hcompute_lgxy_stencil_1_27_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<64, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_27_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_28_res = lxy_stencil_op_hcompute_lgxy_stencil_1_28_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<80, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_28_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_29_res = lxy_stencil_op_hcompute_lgxy_stencil_1_29_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<96, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_29_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_30_res = lxy_stencil_op_hcompute_lgxy_stencil_1_30_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<112, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_30_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_31_res = lxy_stencil_op_hcompute_lgxy_stencil_1_31_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<128, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_31_res);
	return result;
}

// op_hcompute_lxy_stencil_write
//	lxy_stencil_op_hcompute_lxy_stencil_4
inline void lxy_stencil_op_hcompute_lxy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lxy_stencil_write, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
	hw_uint<16> lxy_stencil_op_hcompute_lxy_stencil_4_res = op_hcompute_lxy_stencil_write.extract<0, 15>();
	lxy_stencil_op_hcompute_lxy_stencil_4_write(lxy_stencil_op_hcompute_lxy_stencil_4_res, lxy_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
}

struct lyy_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
  hw_uint<16> RAM[62][62];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct lyy_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // # of banks: 1
  lyy_stencil_all_inputs_to_all_outputs_cache lyy_stencil_all_inputs_to_all_outputs;
};



inline void lyy_stencil_op_hcompute_lyy_stencil_2_write(hw_uint<16>& lyy_stencil_op_hcompute_lyy_stencil_2, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.write(lyy_stencil_op_hcompute_lyy_stencil_2, ((1*lyy_s0_y)) - -2, ((1*lyy_s0_x)) - -2);
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_11_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_11 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(((-1 + 1*lgyy_s1_y)) - -2, ((-1 + 1*lgyy_s1_x)) - -2);
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_12_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_12 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(((-1 + 1*lgyy_s1_y)) - -2, ((1*lgyy_s1_x)) - -2);
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_13_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_13 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(((-1 + 1*lgyy_s1_y)) - -2, ((1 + 1*lgyy_s1_x)) - -2);
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_14_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_14 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(((1*lgyy_s1_y)) - -2, ((-1 + 1*lgyy_s1_x)) - -2);
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_15_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_15 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(((1*lgyy_s1_y)) - -2, ((1*lgyy_s1_x)) - -2);
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_16_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_16 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(((1*lgyy_s1_y)) - -2, ((1 + 1*lgyy_s1_x)) - -2);
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_17_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_17 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(((1 + 1*lgyy_s1_y)) - -2, ((-1 + 1*lgyy_s1_x)) - -2);
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_18_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_18 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(((1 + 1*lgyy_s1_y)) - -2, ((1 + 1*lgyy_s1_x)) - -2);
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_19_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_19 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(((1 + 1*lgyy_s1_y)) - -2, ((1*lgyy_s1_x)) - -2);
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgyy_stencil_1_read
//	lyy_stencil_op_hcompute_lgyy_stencil_1_11
//	lyy_stencil_op_hcompute_lgyy_stencil_1_12
//	lyy_stencil_op_hcompute_lgyy_stencil_1_13
//	lyy_stencil_op_hcompute_lgyy_stencil_1_14
//	lyy_stencil_op_hcompute_lgyy_stencil_1_15
//	lyy_stencil_op_hcompute_lgyy_stencil_1_16
//	lyy_stencil_op_hcompute_lgyy_stencil_1_17
//	lyy_stencil_op_hcompute_lgyy_stencil_1_18
//	lyy_stencil_op_hcompute_lgyy_stencil_1_19
inline hw_uint<144> lyy_stencil_op_hcompute_lgyy_stencil_1_read_bundle_read(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lyy_stencil_op_hcompute_lgyy_stencil_1_11
    // lyy_stencil_op_hcompute_lgyy_stencil_1_12
    // lyy_stencil_op_hcompute_lgyy_stencil_1_13
    // lyy_stencil_op_hcompute_lgyy_stencil_1_14
    // lyy_stencil_op_hcompute_lgyy_stencil_1_15
    // lyy_stencil_op_hcompute_lgyy_stencil_1_16
    // lyy_stencil_op_hcompute_lgyy_stencil_1_17
    // lyy_stencil_op_hcompute_lgyy_stencil_1_18
    // lyy_stencil_op_hcompute_lgyy_stencil_1_19

	hw_uint<144> result;
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_11_res = lyy_stencil_op_hcompute_lgyy_stencil_1_11_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_11_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_12_res = lyy_stencil_op_hcompute_lgyy_stencil_1_12_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<16, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_12_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_13_res = lyy_stencil_op_hcompute_lgyy_stencil_1_13_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<32, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_13_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_14_res = lyy_stencil_op_hcompute_lgyy_stencil_1_14_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<48, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_14_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_15_res = lyy_stencil_op_hcompute_lgyy_stencil_1_15_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<64, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_15_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_16_res = lyy_stencil_op_hcompute_lgyy_stencil_1_16_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<80, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_16_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_17_res = lyy_stencil_op_hcompute_lgyy_stencil_1_17_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<96, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_17_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_18_res = lyy_stencil_op_hcompute_lgyy_stencil_1_18_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<112, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_18_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_19_res = lyy_stencil_op_hcompute_lgyy_stencil_1_19_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<128, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_19_res);
	return result;
}

// op_hcompute_lyy_stencil_write
//	lyy_stencil_op_hcompute_lyy_stencil_2
inline void lyy_stencil_op_hcompute_lyy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lyy_stencil_write, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
	hw_uint<16> lyy_stencil_op_hcompute_lyy_stencil_2_res = op_hcompute_lyy_stencil_write.extract<0, 15>();
	lyy_stencil_op_hcompute_lyy_stencil_2_write(lyy_stencil_op_hcompute_lyy_stencil_2_res, lyy_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
}

struct padded16_global_wrapper_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-3, 60], [-3, 60]}
  hw_uint<16> RAM[64][64];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct padded16_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[1 + grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[1 + grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, -1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, 1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, -1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, 1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  // # of banks: 1
  padded16_global_wrapper_stencil_all_inputs_to_all_outputs_cache padded16_global_wrapper_stencil_all_inputs_to_all_outputs;
};



inline void padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_write(hw_uint<16>& padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0, padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int padded16_global_wrapper_s0_y, int padded16_global_wrapper_s0_x, int dynamic_address) {
  padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.write(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0, ((1*padded16_global_wrapper_s0_y)) - -3, ((1*padded16_global_wrapper_s0_x)) - -3);
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((-1 + 1*grad_x_s0_y)) - -3, ((1 + 1*grad_x_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[1 + grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1 + 1*grad_x_s0_y)) - -3, ((1 + 1*grad_x_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*grad_x_s0_y)) - -3, ((1 + 1*grad_x_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((-1 + 1*grad_x_s0_y)) - -3, ((-1 + 1*grad_x_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*grad_x_s0_y)) - -3, ((-1 + 1*grad_x_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[1 + grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1 + 1*grad_x_s0_y)) - -3, ((-1 + 1*grad_x_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, -1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((-1 + 1*grad_y_s0_y)) - -3, ((-1 + 1*grad_y_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((-1 + 1*grad_y_s0_y)) - -3, ((1*grad_y_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, 1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((-1 + 1*grad_y_s0_y)) - -3, ((1 + 1*grad_y_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, -1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1 + 1*grad_y_s0_y)) - -3, ((-1 + 1*grad_y_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, 1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1 + 1*grad_y_s0_y)) - -3, ((1 + 1*grad_y_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1 + 1*grad_y_s0_y)) - -3, ((1*grad_y_s0_x)) - -3);
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

// # of bundles = 3
// op_hcompute_grad_x_stencil_read
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60
inline hw_uint<96> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_bundle_read(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60

	hw_uint<96> result;
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_res);
	return result;
}

// op_hcompute_grad_y_stencil_read
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53
inline hw_uint<96> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_bundle_read(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53

	hw_uint<96> result;
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_res);
	return result;
}

// op_hcompute_padded16_global_wrapper_stencil_write
//	padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0
inline void padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_padded16_global_wrapper_stencil_write, padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int padded16_global_wrapper_s0_y, int padded16_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_res = op_hcompute_padded16_global_wrapper_stencil_write.extract<0, 15>();
	padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_write(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_res, padded16_global_wrapper_stencil, root, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 830080 bits


// Operation logic
inline void op_hcompute_grad_y_stencil(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x) {
  // Dynamic address computation

	// Consume: padded16_global_wrapper_stencil
	auto padded16_global_wrapper_stencil__lp_grad_y_s0_y__p___m_1_rp__c___lp_grad_y_s0_x__p___m_1_rp__value = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_bundle_read(padded16_global_wrapper_stencil/* source_delay */, root, grad_y_s0_y, grad_y_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_grad_y_stencil(padded16_global_wrapper_stencil__lp_grad_y_s0_y__p___m_1_rp__c___lp_grad_y_s0_x__p___m_1_rp__value);
	// Produce: grad_y_stencil
	grad_y_stencil_op_hcompute_grad_y_stencil_write_bundle_write(/* arg names */compute_result, grad_y_stencil, root, grad_y_s0_y, grad_y_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_lgxx_stencil_1(lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, lxx_stencil_cache& lxx_stencil, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil_clkwrk_dsa0
	auto lgxx_stencil_clkwrk_dsa0_lgxx_s1_y_c__lgxx_s1_x_value = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_bundle_read(lgxx_stencil_clkwrk_dsa0/* source_delay */, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lxx_stencil
	auto lxx_stencil__lp_lgxx_s1_y__p___m_1_rp__c___lp_lgxx_s1_x__p___m_1_rp__value = lxx_stencil_op_hcompute_lgxx_stencil_1_read_bundle_read(lxx_stencil/* source_delay */, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lgxx_stencil_1(lgxx_stencil_clkwrk_dsa0_lgxx_s1_y_c__lgxx_s1_x_value, lxx_stencil__lp_lgxx_s1_y__p___m_1_rp__c___lp_lgxx_s1_x__p___m_1_rp__value);
	// Produce: lgxx_stencil
	lgxx_stencil_op_hcompute_lgxx_stencil_1_write_bundle_write(/* arg names */compute_result, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_lgyy_stencil_1(lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, lyy_stencil_cache& lyy_stencil, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x) {
  // Dynamic address computation

	// Consume: lgyy_stencil_clkwrk_dsa2
	auto lgyy_stencil_clkwrk_dsa2_lgyy_s1_y_c__lgyy_s1_x_value = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_bundle_read(lgyy_stencil_clkwrk_dsa2/* source_delay */, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lyy_stencil
	auto lyy_stencil__lp_lgyy_s1_y__p___m_1_rp__c___lp_lgyy_s1_x__p___m_1_rp__value = lyy_stencil_op_hcompute_lgyy_stencil_1_read_bundle_read(lyy_stencil/* source_delay */, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lgyy_stencil_1(lgyy_stencil_clkwrk_dsa2_lgyy_s1_y_c__lgyy_s1_x_value, lyy_stencil__lp_lgyy_s1_y__p___m_1_rp__c___lp_lgyy_s1_x__p___m_1_rp__value);
	// Produce: lgyy_stencil
	lgyy_stencil_op_hcompute_lgyy_stencil_1_write_bundle_write(/* arg names */compute_result, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_lgxx_stencil(lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s0_y, int lgxx_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxx_stencil();
	// Produce: lgxx_stencil_clkwrk_dsa0
	lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_bundle_write(/* arg names */compute_result, lgxx_stencil_clkwrk_dsa0, root, lgxx_s0_y, lgxx_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(cim_output_stencil_cache& cim_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: cim_output_stencil
	auto cim_output_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = cim_output_stencil_op_hcompute_hw_output_stencil_read_bundle_read(cim_output_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(cim_output_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_lgxy_stencil(lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s0_y, int lgxy_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxy_stencil();
	// Produce: lgxy_stencil_clkwrk_dsa1
	lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_bundle_write(/* arg names */compute_result, lgxy_stencil_clkwrk_dsa1, root, lgxy_s0_y, lgxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_lgxy_stencil_1(lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, lxy_stencil_cache& lxy_stencil, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x) {
  // Dynamic address computation

	// Consume: lgxy_stencil_clkwrk_dsa1
	auto lgxy_stencil_clkwrk_dsa1_lgxy_s1_y_c__lgxy_s1_x_value = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_bundle_read(lgxy_stencil_clkwrk_dsa1/* source_delay */, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lxy_stencil
	auto lxy_stencil__lp_lgxy_s1_y__p___m_1_rp__c___lp_lgxy_s1_x__p___m_1_rp__value = lxy_stencil_op_hcompute_lgxy_stencil_1_read_bundle_read(lxy_stencil/* source_delay */, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lgxy_stencil_1(lgxy_stencil_clkwrk_dsa1_lgxy_s1_y_c__lgxy_s1_x_value, lxy_stencil__lp_lgxy_s1_y__p___m_1_rp__c___lp_lgxy_s1_x__p___m_1_rp__value);
	// Produce: lgxy_stencil
	lgxy_stencil_op_hcompute_lgxy_stencil_1_write_bundle_write(/* arg names */compute_result, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_lxx_stencil(grad_x_stencil_cache& grad_x_stencil, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x) {
  // Dynamic address computation

	// Consume: grad_x_stencil
	auto grad_x_stencil_lxx_s0_y_c__lxx_s0_x_value = grad_x_stencil_op_hcompute_lxx_stencil_read_bundle_read(grad_x_stencil/* source_delay */, root, lxx_s0_y, lxx_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lxx_stencil(grad_x_stencil_lxx_s0_y_c__lxx_s0_x_value);
	// Produce: lxx_stencil
	lxx_stencil_op_hcompute_lxx_stencil_write_bundle_write(/* arg names */compute_result, lxx_stencil, root, lxx_s0_y, lxx_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_cim_output_stencil(cim_stencil_cache& cim_stencil, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x) {
  // Dynamic address computation

	// Consume: cim_stencil
	auto cim_stencil__lp_cim_output_s0_y__p___m_1_rp__c___lp_cim_output_s0_x__p___m_1_rp__value = cim_stencil_op_hcompute_cim_output_stencil_read_bundle_read(cim_stencil/* source_delay */, root, cim_output_s0_y, cim_output_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_cim_output_stencil(cim_stencil__lp_cim_output_s0_y__p___m_1_rp__c___lp_cim_output_s0_x__p___m_1_rp__value);
	// Produce: cim_output_stencil
	cim_output_stencil_op_hcompute_cim_output_stencil_write_bundle_write(/* arg names */compute_result, cim_output_stencil, root, cim_output_s0_y, cim_output_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_cim_stencil(lgxx_stencil_cache& lgxx_stencil, lgxy_stencil_cache& lgxy_stencil, lgyy_stencil_cache& lgyy_stencil, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil
	auto lgxx_stencil_cim_s0_y_c__cim_s0_x_value = lgxx_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxx_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lgxy_stencil
	auto lgxy_stencil_cim_s0_y_c__cim_s0_x_value = lgxy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lgyy_stencil
	auto lgyy_stencil_cim_s0_y_c__cim_s0_x_value = lgyy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgyy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_cim_stencil(lgxx_stencil_cim_s0_y_c__cim_s0_x_value, lgxy_stencil_cim_s0_y_c__cim_s0_x_value, lgyy_stencil_cim_s0_y_c__cim_s0_x_value);
	// Produce: cim_stencil
	cim_stencil_op_hcompute_cim_stencil_write_bundle_write(/* arg names */compute_result, cim_stencil, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_lgyy_stencil(lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s0_y, int lgyy_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgyy_stencil();
	// Produce: lgyy_stencil_clkwrk_dsa2
	lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_bundle_write(/* arg names */compute_result, lgyy_stencil_clkwrk_dsa2, root, lgyy_s0_y, lgyy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_lyy_stencil(grad_y_stencil_cache& grad_y_stencil, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x) {
  // Dynamic address computation

	// Consume: grad_y_stencil
	auto grad_y_stencil_lyy_s0_y_c__lyy_s0_x_value = grad_y_stencil_op_hcompute_lyy_stencil_read_bundle_read(grad_y_stencil/* source_delay */, root, lyy_s0_y, lyy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lyy_stencil(grad_y_stencil_lyy_s0_y_c__lyy_s0_x_value);
	// Produce: lyy_stencil
	lyy_stencil_op_hcompute_lyy_stencil_write_bundle_write(/* arg names */compute_result, lyy_stencil, root, lyy_s0_y, lyy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_lxy_stencil(grad_x_stencil_cache& grad_x_stencil, grad_y_stencil_cache& grad_y_stencil, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x) {
  // Dynamic address computation

	// Consume: grad_x_stencil
	auto grad_x_stencil_lxy_s0_y_c__lxy_s0_x_value = grad_x_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_x_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: grad_y_stencil
	auto grad_y_stencil_lxy_s0_y_c__lxy_s0_x_value = grad_y_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_y_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lxy_stencil(grad_x_stencil_lxy_s0_y_c__lxy_s0_x_value, grad_y_stencil_lxy_s0_y_c__lxy_s0_x_value);
	// Produce: lxy_stencil
	lxy_stencil_op_hcompute_lxy_stencil_write_bundle_write(/* arg names */compute_result, lxy_stencil, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_padded16_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */padded16_stencil, padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int padded16_global_wrapper_s0_y, int padded16_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: padded16_stencil
	auto padded16_stencil_padded16_global_wrapper_s0_y_c__padded16_global_wrapper_s0_x_value = padded16_stencil.read();
	auto compute_result = hcompute_padded16_global_wrapper_stencil(padded16_stencil_padded16_global_wrapper_s0_y_c__padded16_global_wrapper_s0_x_value);
	// Produce: padded16_global_wrapper_stencil
	padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, padded16_global_wrapper_stencil, root, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_grad_x_stencil(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x) {
  // Dynamic address computation

	// Consume: padded16_global_wrapper_stencil
	auto padded16_global_wrapper_stencil__lp_grad_x_s0_y__p___m_1_rp__c___lp_grad_x_s0_x__p__1_rp__value = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_bundle_read(padded16_global_wrapper_stencil/* source_delay */, root, grad_x_s0_y, grad_x_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_grad_x_stencil(padded16_global_wrapper_stencil__lp_grad_x_s0_y__p___m_1_rp__c___lp_grad_x_s0_x__p__1_rp__value);
	// Produce: grad_x_stencil
	grad_x_stencil_op_hcompute_grad_x_stencil_write_bundle_write(/* arg names */compute_result, grad_x_stencil, root, grad_x_s0_y, grad_x_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_harris(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */padded16_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_harris_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  cim_output_stencil_cache cim_output_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  cim_stencil_cache cim_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  grad_x_stencil_cache grad_x_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  grad_y_stencil_cache grad_y_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxx_stencil_cache lgxx_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxx_stencil_clkwrk_dsa0_cache lgxx_stencil_clkwrk_dsa0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxy_stencil_cache lgxy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgxy_stencil_clkwrk_dsa1_cache lgxy_stencil_clkwrk_dsa1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgyy_stencil_cache lgyy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lgyy_stencil_clkwrk_dsa2_cache lgyy_stencil_clkwrk_dsa2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lxx_stencil_cache lxx_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lxy_stencil_cache lxy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lyy_stencil_cache lyy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  padded16_global_wrapper_stencil_cache padded16_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 14, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57; op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> [0, 0, 8, lgxy_s1_y, 0, lgxy_s1_x, 0] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58; op_hcompute_padded16_global_wrapper_stencil[root = 0, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] -> [0, 0, 0, padded16_global_wrapper_s0_y, 0, padded16_global_wrapper_s0_x, 0] : -3 <= padded16_global_wrapper_s0_y <= 60 and -3 <= padded16_global_wrapper_s0_x <= 60; op_hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> [0, 0, 2, lxx_s0_y, 0, lxx_s0_x, 0] : -2 <= lxx_s0_y <= 59 and -2 <= lxx_s0_x <= 59; op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> [0, 0, 4, lgxx_s1_y, 0, lgxx_s1_x, 0] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58; op_hcompute_lgyy_stencil[root = 0, lgyy_s0_y, lgyy_s0_x] -> [0, 0, 10, lgyy_s0_y, 0, lgyy_s0_x, 0] : -1 <= lgyy_s0_y <= 58 and -1 <= lgyy_s0_x <= 58; op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> [0, 0, 5, grad_y_s0_y, 0, grad_y_s0_x, 0] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59; op_hcompute_lgxx_stencil[root = 0, lgxx_s0_y, lgxx_s0_x] -> [0, 0, 3, lgxx_s0_y, 0, lgxx_s0_x, 0] : -1 <= lgxx_s0_y <= 58 and -1 <= lgxx_s0_x <= 58; op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> [0, 0, 11, lgyy_s1_y, 0, lgyy_s1_x, 0] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58; op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> [0, 0, 1, grad_x_s0_y, 0, grad_x_s0_x, 0] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59; op_hcompute_lgxy_stencil[root = 0, lgxy_s0_y, lgxy_s0_x] -> [0, 0, 7, lgxy_s0_y, 0, lgxy_s0_x, 0] : -1 <= lgxy_s0_y <= 58 and -1 <= lgxy_s0_x <= 58; op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> [0, 0, 6, lxy_s0_y, 0, lxy_s0_x, 0] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59; op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> [0, 0, 13, cim_output_s0_y, 0, cim_output_s0_x, 0] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57; op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> [0, 0, 12, cim_s0_y, 0, cim_s0_x, 0] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58; op_hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> [0, 0, 9, lyy_s0_y, 0, lyy_s0_x, 0] : -2 <= lyy_s0_y <= 59 and -2 <= lyy_s0_x <= 59 }
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 14, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
// Condition for op_hcompute_hw_output_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-14 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((57 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((57 + -1*i5)) >= 0)))
//   { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> [0, 0, 8, lgxy_s1_y, 0, lgxy_s1_x, 0] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
// Condition for op_hcompute_lgxy_stencil_1(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-8 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1 + 1*i3)) >= 0) && (((58 + -1*i3)) >= 0) && (((1 + 1*i5)) >= 0) && (((58 + -1*i5)) >= 0)))
//   { op_hcompute_padded16_global_wrapper_stencil[root = 0, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] -> [0, 0, 0, padded16_global_wrapper_s0_y, 0, padded16_global_wrapper_s0_x, 0] : -3 <= padded16_global_wrapper_s0_y <= 60 and -3 <= padded16_global_wrapper_s0_x <= 60 }
// Condition for op_hcompute_padded16_global_wrapper_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((3 + 1*i3)) >= 0) && (((60 + -1*i3)) >= 0) && (((3 + 1*i5)) >= 0) && (((60 + -1*i5)) >= 0)))
//   { op_hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> [0, 0, 2, lxx_s0_y, 0, lxx_s0_x, 0] : -2 <= lxx_s0_y <= 59 and -2 <= lxx_s0_x <= 59 }
// Condition for op_hcompute_lxx_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((2 + 1*i3)) >= 0) && (((59 + -1*i3)) >= 0) && (((2 + 1*i5)) >= 0) && (((59 + -1*i5)) >= 0)))
//   { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> [0, 0, 4, lgxx_s1_y, 0, lgxx_s1_x, 0] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
// Condition for op_hcompute_lgxx_stencil_1(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-4 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1 + 1*i3)) >= 0) && (((58 + -1*i3)) >= 0) && (((1 + 1*i5)) >= 0) && (((58 + -1*i5)) >= 0)))
//   { op_hcompute_lgyy_stencil[root = 0, lgyy_s0_y, lgyy_s0_x] -> [0, 0, 10, lgyy_s0_y, 0, lgyy_s0_x, 0] : -1 <= lgyy_s0_y <= 58 and -1 <= lgyy_s0_x <= 58 }
// Condition for op_hcompute_lgyy_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-10 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1 + 1*i3)) >= 0) && (((58 + -1*i3)) >= 0) && (((1 + 1*i5)) >= 0) && (((58 + -1*i5)) >= 0)))
//   { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> [0, 0, 5, grad_y_s0_y, 0, grad_y_s0_x, 0] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
// Condition for op_hcompute_grad_y_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-5 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((2 + 1*i3)) >= 0) && (((59 + -1*i3)) >= 0) && (((2 + 1*i5)) >= 0) && (((59 + -1*i5)) >= 0)))
//   { op_hcompute_lgxx_stencil[root = 0, lgxx_s0_y, lgxx_s0_x] -> [0, 0, 3, lgxx_s0_y, 0, lgxx_s0_x, 0] : -1 <= lgxx_s0_y <= 58 and -1 <= lgxx_s0_x <= 58 }
// Condition for op_hcompute_lgxx_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1 + 1*i3)) >= 0) && (((58 + -1*i3)) >= 0) && (((1 + 1*i5)) >= 0) && (((58 + -1*i5)) >= 0)))
//   { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> [0, 0, 11, lgyy_s1_y, 0, lgyy_s1_x, 0] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
// Condition for op_hcompute_lgyy_stencil_1(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-11 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1 + 1*i3)) >= 0) && (((58 + -1*i3)) >= 0) && (((1 + 1*i5)) >= 0) && (((58 + -1*i5)) >= 0)))
//   { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> [0, 0, 1, grad_x_s0_y, 0, grad_x_s0_x, 0] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
// Condition for op_hcompute_grad_x_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-1 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((2 + 1*i3)) >= 0) && (((59 + -1*i3)) >= 0) && (((2 + 1*i5)) >= 0) && (((59 + -1*i5)) >= 0)))
//   { op_hcompute_lgxy_stencil[root = 0, lgxy_s0_y, lgxy_s0_x] -> [0, 0, 7, lgxy_s0_y, 0, lgxy_s0_x, 0] : -1 <= lgxy_s0_y <= 58 and -1 <= lgxy_s0_x <= 58 }
// Condition for op_hcompute_lgxy_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-7 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1 + 1*i3)) >= 0) && (((58 + -1*i3)) >= 0) && (((1 + 1*i5)) >= 0) && (((58 + -1*i5)) >= 0)))
//   { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> [0, 0, 6, lxy_s0_y, 0, lxy_s0_x, 0] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59 }
// Condition for op_hcompute_lxy_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-6 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((2 + 1*i3)) >= 0) && (((59 + -1*i3)) >= 0) && (((2 + 1*i5)) >= 0) && (((59 + -1*i5)) >= 0)))
//   { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> [0, 0, 13, cim_output_s0_y, 0, cim_output_s0_x, 0] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
// Condition for op_hcompute_cim_output_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-13 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((57 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((57 + -1*i5)) >= 0)))
//   { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> [0, 0, 12, cim_s0_y, 0, cim_s0_x, 0] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
// Condition for op_hcompute_cim_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-12 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1 + 1*i3)) >= 0) && (((58 + -1*i3)) >= 0) && (((1 + 1*i5)) >= 0) && (((58 + -1*i5)) >= 0)))
//   { op_hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> [0, 0, 9, lyy_s0_y, 0, lyy_s0_x, 0] : -2 <= lyy_s0_y <= 59 and -2 <= lyy_s0_x <= 59 }
// Condition for op_hcompute_lyy_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-9 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((2 + 1*i3)) >= 0) && (((59 + -1*i3)) >= 0) && (((2 + 1*i5)) >= 0) && (((59 + -1*i5)) >= 0)))

	{
	  for (int c3 = -3; c3 <= 60; c3 += 1)
	    for (int c5 = -3; c5 <= 60; c5 += 1)
	      op_hcompute_padded16_global_wrapper_stencil(padded16_stencil /* buf name */, padded16_global_wrapper_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 59; c3 += 1)
	    for (int c5 = -2; c5 <= 59; c5 += 1)
	      op_hcompute_grad_x_stencil(padded16_global_wrapper_stencil /* buf name */, grad_x_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 59; c3 += 1)
	    for (int c5 = -2; c5 <= 59; c5 += 1)
	      op_hcompute_lxx_stencil(grad_x_stencil /* buf name */, lxx_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 58; c3 += 1)
	    for (int c5 = -1; c5 <= 58; c5 += 1)
	      op_hcompute_lgxx_stencil(lgxx_stencil_clkwrk_dsa0, 0, c3, c5);
	  for (int c3 = -1; c3 <= 58; c3 += 1)
	    for (int c5 = -1; c5 <= 58; c5 += 1)
	      op_hcompute_lgxx_stencil_1(lgxx_stencil_clkwrk_dsa0 /* buf name */, lxx_stencil /* buf name */, lgxx_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 59; c3 += 1)
	    for (int c5 = -2; c5 <= 59; c5 += 1)
	      op_hcompute_grad_y_stencil(padded16_global_wrapper_stencil /* buf name */, grad_y_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 59; c3 += 1)
	    for (int c5 = -2; c5 <= 59; c5 += 1)
	      op_hcompute_lxy_stencil(grad_x_stencil /* buf name */, grad_y_stencil /* buf name */, lxy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 58; c3 += 1)
	    for (int c5 = -1; c5 <= 58; c5 += 1)
	      op_hcompute_lgxy_stencil(lgxy_stencil_clkwrk_dsa1, 0, c3, c5);
	  for (int c3 = -1; c3 <= 58; c3 += 1)
	    for (int c5 = -1; c5 <= 58; c5 += 1)
	      op_hcompute_lgxy_stencil_1(lgxy_stencil_clkwrk_dsa1 /* buf name */, lxy_stencil /* buf name */, lgxy_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 59; c3 += 1)
	    for (int c5 = -2; c5 <= 59; c5 += 1)
	      op_hcompute_lyy_stencil(grad_y_stencil /* buf name */, lyy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 58; c3 += 1)
	    for (int c5 = -1; c5 <= 58; c5 += 1)
	      op_hcompute_lgyy_stencil(lgyy_stencil_clkwrk_dsa2, 0, c3, c5);
	  for (int c3 = -1; c3 <= 58; c3 += 1)
	    for (int c5 = -1; c5 <= 58; c5 += 1)
	      op_hcompute_lgyy_stencil_1(lgyy_stencil_clkwrk_dsa2 /* buf name */, lyy_stencil /* buf name */, lgyy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 58; c3 += 1)
	    for (int c5 = -1; c5 <= 58; c5 += 1)
	      op_hcompute_cim_stencil(lgxx_stencil /* buf name */, lgxy_stencil /* buf name */, lgyy_stencil /* buf name */, cim_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 57; c3 += 1)
	    for (int c5 = 0; c5 <= 57; c5 += 1)
	      op_hcompute_cim_output_stencil(cim_stencil /* buf name */, cim_output_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 57; c3 += 1)
	    for (int c5 = 0; c5 <= 57; c5 += 1)
	      op_hcompute_hw_output_stencil(cim_output_stencil /* buf name */, hw_output_stencil, 0, c3, c5);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_harris_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */padded16_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_harris(padded16_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 3364;
  // { op_hcompute_padded16_global_wrapper_stencil[root = 0, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] -> padded16_stencil[padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] : -3 <= padded16_global_wrapper_s0_y <= 60 and -3 <= padded16_global_wrapper_s0_x <= 60 }
const int op_hcompute_padded16_global_wrapper_stencil_read_pipe0_num_transfers = 4096;


extern "C" {

void unoptimized_harris_accel(hw_uint<16>* op_hcompute_padded16_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_padded16_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = op_hcompute_padded16_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_padded16_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_padded16_global_wrapper_stencil_read_pipe0, op_hcompute_padded16_global_wrapper_stencil_read_pipe0_channel, op_hcompute_padded16_global_wrapper_stencil_read_pipe0_num_transfers*size);

  unoptimized_harris_wrapper(op_hcompute_padded16_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_harris_rdai(HWStream<hw_uint<16> >& op_hcompute_padded16_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_padded16_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_harris(op_hcompute_padded16_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

