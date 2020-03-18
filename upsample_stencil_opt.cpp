#include "upsample_stencil_opt_compute_units.h"

#include "hw_classes.h"

struct Img_Img_comp_write0_to_upsample_stencil_rd0_cache {
	// Capacity: 54
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 37) capacity = 36
	fifo<hw_uint<32> , 36> f1;
	// Parition [37, 38) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [38, 39) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [39, 40) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [40, 41) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [41, 42) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [42, 43) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [43, 44) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [44, 45) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [45, 46) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [46, 47) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [47, 48) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [48, 49) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [49, 50) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [50, 51) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [51, 52) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [52, 53) capacity = 1
	fifo<hw_uint<32> , 1> f32;
	// Parition [53, 53] capacity = 1
	fifo<hw_uint<32> , 1> f34;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_36() {
		return f1.back();
	}

	inline hw_uint<32>  peek_37() {
		return f2.back();
	}

	inline hw_uint<32>  peek_38() {
		return f4.back();
	}

	inline hw_uint<32>  peek_39() {
		return f6.back();
	}

	inline hw_uint<32>  peek_40() {
		return f8.back();
	}

	inline hw_uint<32>  peek_41() {
		return f10.back();
	}

	inline hw_uint<32>  peek_42() {
		return f12.back();
	}

	inline hw_uint<32>  peek_43() {
		return f14.back();
	}

	inline hw_uint<32>  peek_44() {
		return f16.back();
	}

	inline hw_uint<32>  peek_45() {
		return f18.back();
	}

	inline hw_uint<32>  peek_46() {
		return f20.back();
	}

	inline hw_uint<32>  peek_47() {
		return f22.back();
	}

	inline hw_uint<32>  peek_48() {
		return f24.back();
	}

	inline hw_uint<32>  peek_49() {
		return f26.back();
	}

	inline hw_uint<32>  peek_50() {
		return f28.back();
	}

	inline hw_uint<32>  peek_51() {
		return f30.back();
	}

	inline hw_uint<32>  peek_52() {
		return f32.back();
	}

	inline hw_uint<32>  peek_53() {
		return f34.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 36) {
			return f1.back();
		}
		if (offset == 37) {
			return f2.back();
		}
		if (offset == 38) {
			return f4.back();
		}
		if (offset == 39) {
			return f6.back();
		}
		if (offset == 40) {
			return f8.back();
		}
		if (offset == 41) {
			return f10.back();
		}
		if (offset == 42) {
			return f12.back();
		}
		if (offset == 43) {
			return f14.back();
		}
		if (offset == 44) {
			return f16.back();
		}
		if (offset == 45) {
			return f18.back();
		}
		if (offset == 46) {
			return f20.back();
		}
		if (offset == 47) {
			return f22.back();
		}
		if (offset == 48) {
			return f24.back();
		}
		if (offset == 49) {
			return f26.back();
		}
		if (offset == 50) {
			return f28.back();
		}
		if (offset == 51) {
			return f30.back();
		}
		if (offset == 52) {
			return f32.back();
		}
		if (offset == 53) {
			return f34.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_comp_write0_to_upsample_stencil_rd0_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f34.push(f32.back());
		f32.push(f30.back());
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct Img_Img_comp_write0_to_upsample_stencil_rd1_cache {
	// Capacity: 54
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 19) capacity = 18
	fifo<hw_uint<32> , 18> f1;
	// Parition [19, 20) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [20, 21) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [21, 22) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [22, 23) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [24, 25) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [25, 26) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [26, 27) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [27, 28) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [28, 29) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [29, 30) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [30, 31) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [31, 32) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [32, 33) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [33, 34) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [34, 35) capacity = 1
	fifo<hw_uint<32> , 1> f32;
	// Parition [35, 35] capacity = 1
	fifo<hw_uint<32> , 1> f34;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_18() {
		return f1.back();
	}

	inline hw_uint<32>  peek_19() {
		return f2.back();
	}

	inline hw_uint<32>  peek_20() {
		return f4.back();
	}

	inline hw_uint<32>  peek_21() {
		return f6.back();
	}

	inline hw_uint<32>  peek_22() {
		return f8.back();
	}

	inline hw_uint<32>  peek_23() {
		return f10.back();
	}

	inline hw_uint<32>  peek_24() {
		return f12.back();
	}

	inline hw_uint<32>  peek_25() {
		return f14.back();
	}

	inline hw_uint<32>  peek_26() {
		return f16.back();
	}

	inline hw_uint<32>  peek_27() {
		return f18.back();
	}

	inline hw_uint<32>  peek_28() {
		return f20.back();
	}

	inline hw_uint<32>  peek_29() {
		return f22.back();
	}

	inline hw_uint<32>  peek_30() {
		return f24.back();
	}

	inline hw_uint<32>  peek_31() {
		return f26.back();
	}

	inline hw_uint<32>  peek_32() {
		return f28.back();
	}

	inline hw_uint<32>  peek_33() {
		return f30.back();
	}

	inline hw_uint<32>  peek_34() {
		return f32.back();
	}

	inline hw_uint<32>  peek_35() {
		return f34.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 18) {
			return f1.back();
		}
		if (offset == 19) {
			return f2.back();
		}
		if (offset == 20) {
			return f4.back();
		}
		if (offset == 21) {
			return f6.back();
		}
		if (offset == 22) {
			return f8.back();
		}
		if (offset == 23) {
			return f10.back();
		}
		if (offset == 24) {
			return f12.back();
		}
		if (offset == 25) {
			return f14.back();
		}
		if (offset == 26) {
			return f16.back();
		}
		if (offset == 27) {
			return f18.back();
		}
		if (offset == 28) {
			return f20.back();
		}
		if (offset == 29) {
			return f22.back();
		}
		if (offset == 30) {
			return f24.back();
		}
		if (offset == 31) {
			return f26.back();
		}
		if (offset == 32) {
			return f28.back();
		}
		if (offset == 33) {
			return f30.back();
		}
		if (offset == 34) {
			return f32.back();
		}
		if (offset == 35) {
			return f34.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_comp_write0_to_upsample_stencil_rd1_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f34.push(f32.back());
		f32.push(f30.back());
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct Img_Img_comp_write0_to_upsample_stencil_rd2_cache {
	// Capacity: 54
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [9, 10) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [12, 13) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [13, 14) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [14, 15) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [15, 16) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<32> , 1> f32;
	// Parition [17, 17] capacity = 1
	fifo<hw_uint<32> , 1> f34;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}

	inline hw_uint<32>  peek_5() {
		return f10.back();
	}

	inline hw_uint<32>  peek_6() {
		return f12.back();
	}

	inline hw_uint<32>  peek_7() {
		return f14.back();
	}

	inline hw_uint<32>  peek_8() {
		return f16.back();
	}

	inline hw_uint<32>  peek_9() {
		return f18.back();
	}

	inline hw_uint<32>  peek_10() {
		return f20.back();
	}

	inline hw_uint<32>  peek_11() {
		return f22.back();
	}

	inline hw_uint<32>  peek_12() {
		return f24.back();
	}

	inline hw_uint<32>  peek_13() {
		return f26.back();
	}

	inline hw_uint<32>  peek_14() {
		return f28.back();
	}

	inline hw_uint<32>  peek_15() {
		return f30.back();
	}

	inline hw_uint<32>  peek_16() {
		return f32.back();
	}

	inline hw_uint<32>  peek_17() {
		return f34.back();
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
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
		if (offset == 5) {
			return f10.back();
		}
		if (offset == 6) {
			return f12.back();
		}
		if (offset == 7) {
			return f14.back();
		}
		if (offset == 8) {
			return f16.back();
		}
		if (offset == 9) {
			return f18.back();
		}
		if (offset == 10) {
			return f20.back();
		}
		if (offset == 11) {
			return f22.back();
		}
		if (offset == 12) {
			return f24.back();
		}
		if (offset == 13) {
			return f26.back();
		}
		if (offset == 14) {
			return f28.back();
		}
		if (offset == 15) {
			return f30.back();
		}
		if (offset == 16) {
			return f32.back();
		}
		if (offset == 17) {
			return f34.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_comp_write0_to_upsample_stencil_rd2_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f34.push(f32.back());
		f32.push(f30.back());
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct Img_Img_comp_write0_to_upsample_stencil_rd3_cache {
	// Capacity: 54
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 36) capacity = 35
	fifo<hw_uint<32> , 35> f1;
	// Parition [36, 37) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [37, 38) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [38, 39) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [39, 40) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [40, 41) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [41, 42) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [42, 43) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [43, 44) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [44, 45) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [45, 46) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [46, 47) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [47, 48) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [48, 49) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [49, 50) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [50, 51) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [51, 52) capacity = 1
	fifo<hw_uint<32> , 1> f32;
	// Parition [52, 52] capacity = 1
	fifo<hw_uint<32> , 1> f34;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_35() {
		return f1.back();
	}

	inline hw_uint<32>  peek_36() {
		return f2.back();
	}

	inline hw_uint<32>  peek_37() {
		return f4.back();
	}

	inline hw_uint<32>  peek_38() {
		return f6.back();
	}

	inline hw_uint<32>  peek_39() {
		return f8.back();
	}

	inline hw_uint<32>  peek_40() {
		return f10.back();
	}

	inline hw_uint<32>  peek_41() {
		return f12.back();
	}

	inline hw_uint<32>  peek_42() {
		return f14.back();
	}

	inline hw_uint<32>  peek_43() {
		return f16.back();
	}

	inline hw_uint<32>  peek_44() {
		return f18.back();
	}

	inline hw_uint<32>  peek_45() {
		return f20.back();
	}

	inline hw_uint<32>  peek_46() {
		return f22.back();
	}

	inline hw_uint<32>  peek_47() {
		return f24.back();
	}

	inline hw_uint<32>  peek_48() {
		return f26.back();
	}

	inline hw_uint<32>  peek_49() {
		return f28.back();
	}

	inline hw_uint<32>  peek_50() {
		return f30.back();
	}

	inline hw_uint<32>  peek_51() {
		return f32.back();
	}

	inline hw_uint<32>  peek_52() {
		return f34.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 35) {
			return f1.back();
		}
		if (offset == 36) {
			return f2.back();
		}
		if (offset == 37) {
			return f4.back();
		}
		if (offset == 38) {
			return f6.back();
		}
		if (offset == 39) {
			return f8.back();
		}
		if (offset == 40) {
			return f10.back();
		}
		if (offset == 41) {
			return f12.back();
		}
		if (offset == 42) {
			return f14.back();
		}
		if (offset == 43) {
			return f16.back();
		}
		if (offset == 44) {
			return f18.back();
		}
		if (offset == 45) {
			return f20.back();
		}
		if (offset == 46) {
			return f22.back();
		}
		if (offset == 47) {
			return f24.back();
		}
		if (offset == 48) {
			return f26.back();
		}
		if (offset == 49) {
			return f28.back();
		}
		if (offset == 50) {
			return f30.back();
		}
		if (offset == 51) {
			return f32.back();
		}
		if (offset == 52) {
			return f34.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_comp_write0_to_upsample_stencil_rd3_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f34.push(f32.back());
		f32.push(f30.back());
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct Img_Img_comp_write0_to_upsample_stencil_rd4_cache {
	// Capacity: 54
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 18) capacity = 17
	fifo<hw_uint<32> , 17> f1;
	// Parition [18, 19) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [19, 20) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [20, 21) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [21, 22) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [22, 23) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [24, 25) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [25, 26) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [26, 27) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [27, 28) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [28, 29) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [29, 30) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [30, 31) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [31, 32) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [32, 33) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [33, 34) capacity = 1
	fifo<hw_uint<32> , 1> f32;
	// Parition [34, 34] capacity = 1
	fifo<hw_uint<32> , 1> f34;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_17() {
		return f1.back();
	}

	inline hw_uint<32>  peek_18() {
		return f2.back();
	}

	inline hw_uint<32>  peek_19() {
		return f4.back();
	}

	inline hw_uint<32>  peek_20() {
		return f6.back();
	}

	inline hw_uint<32>  peek_21() {
		return f8.back();
	}

	inline hw_uint<32>  peek_22() {
		return f10.back();
	}

	inline hw_uint<32>  peek_23() {
		return f12.back();
	}

	inline hw_uint<32>  peek_24() {
		return f14.back();
	}

	inline hw_uint<32>  peek_25() {
		return f16.back();
	}

	inline hw_uint<32>  peek_26() {
		return f18.back();
	}

	inline hw_uint<32>  peek_27() {
		return f20.back();
	}

	inline hw_uint<32>  peek_28() {
		return f22.back();
	}

	inline hw_uint<32>  peek_29() {
		return f24.back();
	}

	inline hw_uint<32>  peek_30() {
		return f26.back();
	}

	inline hw_uint<32>  peek_31() {
		return f28.back();
	}

	inline hw_uint<32>  peek_32() {
		return f30.back();
	}

	inline hw_uint<32>  peek_33() {
		return f32.back();
	}

	inline hw_uint<32>  peek_34() {
		return f34.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 17) {
			return f1.back();
		}
		if (offset == 18) {
			return f2.back();
		}
		if (offset == 19) {
			return f4.back();
		}
		if (offset == 20) {
			return f6.back();
		}
		if (offset == 21) {
			return f8.back();
		}
		if (offset == 22) {
			return f10.back();
		}
		if (offset == 23) {
			return f12.back();
		}
		if (offset == 24) {
			return f14.back();
		}
		if (offset == 25) {
			return f16.back();
		}
		if (offset == 26) {
			return f18.back();
		}
		if (offset == 27) {
			return f20.back();
		}
		if (offset == 28) {
			return f22.back();
		}
		if (offset == 29) {
			return f24.back();
		}
		if (offset == 30) {
			return f26.back();
		}
		if (offset == 31) {
			return f28.back();
		}
		if (offset == 32) {
			return f30.back();
		}
		if (offset == 33) {
			return f32.back();
		}
		if (offset == 34) {
			return f34.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_comp_write0_to_upsample_stencil_rd4_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f34.push(f32.back());
		f32.push(f30.back());
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct Img_Img_comp_write0_to_upsample_stencil_rd5_cache {
	// Capacity: 54
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [9, 10) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [12, 13) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [13, 14) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [14, 15) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [15, 16) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [16, 16] capacity = 1
	fifo<hw_uint<32> , 1> f32;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}

	inline hw_uint<32>  peek_5() {
		return f10.back();
	}

	inline hw_uint<32>  peek_6() {
		return f12.back();
	}

	inline hw_uint<32>  peek_7() {
		return f14.back();
	}

	inline hw_uint<32>  peek_8() {
		return f16.back();
	}

	inline hw_uint<32>  peek_9() {
		return f18.back();
	}

	inline hw_uint<32>  peek_10() {
		return f20.back();
	}

	inline hw_uint<32>  peek_11() {
		return f22.back();
	}

	inline hw_uint<32>  peek_12() {
		return f24.back();
	}

	inline hw_uint<32>  peek_13() {
		return f26.back();
	}

	inline hw_uint<32>  peek_14() {
		return f28.back();
	}

	inline hw_uint<32>  peek_15() {
		return f30.back();
	}

	inline hw_uint<32>  peek_16() {
		return f32.back();
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
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
		if (offset == 5) {
			return f10.back();
		}
		if (offset == 6) {
			return f12.back();
		}
		if (offset == 7) {
			return f14.back();
		}
		if (offset == 8) {
			return f16.back();
		}
		if (offset == 9) {
			return f18.back();
		}
		if (offset == 10) {
			return f20.back();
		}
		if (offset == 11) {
			return f22.back();
		}
		if (offset == 12) {
			return f24.back();
		}
		if (offset == 13) {
			return f26.back();
		}
		if (offset == 14) {
			return f28.back();
		}
		if (offset == 15) {
			return f30.back();
		}
		if (offset == 16) {
			return f32.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_comp_write0_to_upsample_stencil_rd5_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f32.push(f30.back());
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct Img_Img_comp_write0_to_upsample_stencil_rd6_cache {
	// Capacity: 54
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 36) capacity = 35
	fifo<hw_uint<32> , 35> f1;
	// Parition [36, 37) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [37, 38) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [38, 39) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [39, 40) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [40, 41) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [41, 42) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [42, 43) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [43, 44) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [44, 45) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [45, 46) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [46, 47) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [47, 48) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [48, 49) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [49, 50) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [50, 51) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [51, 51] capacity = 1
	fifo<hw_uint<32> , 1> f32;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_35() {
		return f1.back();
	}

	inline hw_uint<32>  peek_36() {
		return f2.back();
	}

	inline hw_uint<32>  peek_37() {
		return f4.back();
	}

	inline hw_uint<32>  peek_38() {
		return f6.back();
	}

	inline hw_uint<32>  peek_39() {
		return f8.back();
	}

	inline hw_uint<32>  peek_40() {
		return f10.back();
	}

	inline hw_uint<32>  peek_41() {
		return f12.back();
	}

	inline hw_uint<32>  peek_42() {
		return f14.back();
	}

	inline hw_uint<32>  peek_43() {
		return f16.back();
	}

	inline hw_uint<32>  peek_44() {
		return f18.back();
	}

	inline hw_uint<32>  peek_45() {
		return f20.back();
	}

	inline hw_uint<32>  peek_46() {
		return f22.back();
	}

	inline hw_uint<32>  peek_47() {
		return f24.back();
	}

	inline hw_uint<32>  peek_48() {
		return f26.back();
	}

	inline hw_uint<32>  peek_49() {
		return f28.back();
	}

	inline hw_uint<32>  peek_50() {
		return f30.back();
	}

	inline hw_uint<32>  peek_51() {
		return f32.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 35) {
			return f1.back();
		}
		if (offset == 36) {
			return f2.back();
		}
		if (offset == 37) {
			return f4.back();
		}
		if (offset == 38) {
			return f6.back();
		}
		if (offset == 39) {
			return f8.back();
		}
		if (offset == 40) {
			return f10.back();
		}
		if (offset == 41) {
			return f12.back();
		}
		if (offset == 42) {
			return f14.back();
		}
		if (offset == 43) {
			return f16.back();
		}
		if (offset == 44) {
			return f18.back();
		}
		if (offset == 45) {
			return f20.back();
		}
		if (offset == 46) {
			return f22.back();
		}
		if (offset == 47) {
			return f24.back();
		}
		if (offset == 48) {
			return f26.back();
		}
		if (offset == 49) {
			return f28.back();
		}
		if (offset == 50) {
			return f30.back();
		}
		if (offset == 51) {
			return f32.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_comp_write0_to_upsample_stencil_rd6_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f32.push(f30.back());
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct Img_Img_comp_write0_to_upsample_stencil_rd7_cache {
	// Capacity: 54
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 18) capacity = 17
	fifo<hw_uint<32> , 17> f1;
	// Parition [18, 19) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [19, 20) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [20, 21) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [21, 22) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [22, 23) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [24, 25) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [25, 26) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [26, 27) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [27, 28) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [28, 29) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [29, 30) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [30, 31) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [31, 32) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [32, 33) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [33, 33] capacity = 1
	fifo<hw_uint<32> , 1> f32;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_17() {
		return f1.back();
	}

	inline hw_uint<32>  peek_18() {
		return f2.back();
	}

	inline hw_uint<32>  peek_19() {
		return f4.back();
	}

	inline hw_uint<32>  peek_20() {
		return f6.back();
	}

	inline hw_uint<32>  peek_21() {
		return f8.back();
	}

	inline hw_uint<32>  peek_22() {
		return f10.back();
	}

	inline hw_uint<32>  peek_23() {
		return f12.back();
	}

	inline hw_uint<32>  peek_24() {
		return f14.back();
	}

	inline hw_uint<32>  peek_25() {
		return f16.back();
	}

	inline hw_uint<32>  peek_26() {
		return f18.back();
	}

	inline hw_uint<32>  peek_27() {
		return f20.back();
	}

	inline hw_uint<32>  peek_28() {
		return f22.back();
	}

	inline hw_uint<32>  peek_29() {
		return f24.back();
	}

	inline hw_uint<32>  peek_30() {
		return f26.back();
	}

	inline hw_uint<32>  peek_31() {
		return f28.back();
	}

	inline hw_uint<32>  peek_32() {
		return f30.back();
	}

	inline hw_uint<32>  peek_33() {
		return f32.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 17) {
			return f1.back();
		}
		if (offset == 18) {
			return f2.back();
		}
		if (offset == 19) {
			return f4.back();
		}
		if (offset == 20) {
			return f6.back();
		}
		if (offset == 21) {
			return f8.back();
		}
		if (offset == 22) {
			return f10.back();
		}
		if (offset == 23) {
			return f12.back();
		}
		if (offset == 24) {
			return f14.back();
		}
		if (offset == 25) {
			return f16.back();
		}
		if (offset == 26) {
			return f18.back();
		}
		if (offset == 27) {
			return f20.back();
		}
		if (offset == 28) {
			return f22.back();
		}
		if (offset == 29) {
			return f24.back();
		}
		if (offset == 30) {
			return f26.back();
		}
		if (offset == 31) {
			return f28.back();
		}
		if (offset == 32) {
			return f30.back();
		}
		if (offset == 33) {
			return f32.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_comp_write0_to_upsample_stencil_rd7_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f32.push(f30.back());
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct Img_Img_comp_write0_to_upsample_stencil_rd8_cache {
	// Capacity: 54
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [9, 10) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [12, 13) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [13, 14) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [14, 15) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [15, 15] capacity = 1
	fifo<hw_uint<32> , 1> f30;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}

	inline hw_uint<32>  peek_5() {
		return f10.back();
	}

	inline hw_uint<32>  peek_6() {
		return f12.back();
	}

	inline hw_uint<32>  peek_7() {
		return f14.back();
	}

	inline hw_uint<32>  peek_8() {
		return f16.back();
	}

	inline hw_uint<32>  peek_9() {
		return f18.back();
	}

	inline hw_uint<32>  peek_10() {
		return f20.back();
	}

	inline hw_uint<32>  peek_11() {
		return f22.back();
	}

	inline hw_uint<32>  peek_12() {
		return f24.back();
	}

	inline hw_uint<32>  peek_13() {
		return f26.back();
	}

	inline hw_uint<32>  peek_14() {
		return f28.back();
	}

	inline hw_uint<32>  peek_15() {
		return f30.back();
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
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
		if (offset == 5) {
			return f10.back();
		}
		if (offset == 6) {
			return f12.back();
		}
		if (offset == 7) {
			return f14.back();
		}
		if (offset == 8) {
			return f16.back();
		}
		if (offset == 9) {
			return f18.back();
		}
		if (offset == 10) {
			return f20.back();
		}
		if (offset == 11) {
			return f22.back();
		}
		if (offset == 12) {
			return f24.back();
		}
		if (offset == 13) {
			return f26.back();
		}
		if (offset == 14) {
			return f28.back();
		}
		if (offset == 15) {
			return f30.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_comp_write0_to_upsample_stencil_rd8_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct Img_cache {
  Img_Img_comp_write0_to_upsample_stencil_rd0_cache bank_Img_Img_comp_write0_to_upsample_stencil_rd0;
  Img_Img_comp_write0_to_upsample_stencil_rd1_cache bank_Img_Img_comp_write0_to_upsample_stencil_rd1;
  Img_Img_comp_write0_to_upsample_stencil_rd2_cache bank_Img_Img_comp_write0_to_upsample_stencil_rd2;
  Img_Img_comp_write0_to_upsample_stencil_rd3_cache bank_Img_Img_comp_write0_to_upsample_stencil_rd3;
  Img_Img_comp_write0_to_upsample_stencil_rd4_cache bank_Img_Img_comp_write0_to_upsample_stencil_rd4;
  Img_Img_comp_write0_to_upsample_stencil_rd5_cache bank_Img_Img_comp_write0_to_upsample_stencil_rd5;
  Img_Img_comp_write0_to_upsample_stencil_rd6_cache bank_Img_Img_comp_write0_to_upsample_stencil_rd6;
  Img_Img_comp_write0_to_upsample_stencil_rd7_cache bank_Img_Img_comp_write0_to_upsample_stencil_rd7;
  Img_Img_comp_write0_to_upsample_stencil_rd8_cache bank_Img_Img_comp_write0_to_upsample_stencil_rd8;
};



inline void Img_Img_comp_write0_write(hw_uint<32> & Img_Img_comp_write0, Img_cache& Img, int d0, int d1) {
  Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd0.push(Img_Img_comp_write0);
  Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd1.push(Img_Img_comp_write0);
  Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd2.push(Img_Img_comp_write0);
  Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd3.push(Img_Img_comp_write0);
  Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd4.push(Img_Img_comp_write0);
  Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd5.push(Img_Img_comp_write0);
  Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd6.push(Img_Img_comp_write0);
  Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd7.push(Img_Img_comp_write0);
  Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd8.push(Img_Img_comp_write0);
}

inline hw_uint<32>  upsample_stencil_rd0_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_comp[d0, d1] -> Img_comp[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 <= d0' <= 16 and -3 + d0 <= 2d0' <= -2 + d0 and -1 <= d1' <= 16 and -3 + d1 <= 2d1' <= -2 + d1 }
  // upsample_stencil_rd0 read pattern: { upsample_stencil_comp[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and -3 + d1 <= 2o1 <= -2 + d1 }
  // Img_Img_comp_write0 stores range: { Img[i0, i1] : -1 <= i0 <= 16 and -1 <= i1 <= 16 }
    // overlap with reads : { Img[i0, i1] : -1 <= i0 <= 14 and -1 <= i1 <= 14 }
	auto value_Img_Img_comp_write0 = Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd0.peek(/* Needs general delay string */ ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 30 - d0 >= 0 && -2 + d1 >= 0 && 30 - d1 >= 0) ? (38) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 30 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (38) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && -2 + d1 >= 0 && 30 - d1 >= 0) ? (38) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (38) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && -2 + d1 >= 0 && 31 - d1 >= 0) ? ((53 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? ((53 - floord(d0, 2))) : 0);
	return value_Img_Img_comp_write0;
}

inline hw_uint<32>  upsample_stencil_rd1_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_comp[d0, d1] -> Img_comp[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 <= d0' <= 16 and -3 + d0 <= 2d0' <= -2 + d0 and -1 <= d1' <= 16 and -1 + d1 <= 2d1' <= d1 }
  // upsample_stencil_rd1 read pattern: { upsample_stencil_comp[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and -1 + d1 <= 2o1 <= d1 }
  // Img_Img_comp_write0 stores range: { Img[i0, i1] : -1 <= i0 <= 16 and -1 <= i1 <= 16 }
    // overlap with reads : { Img[i0, i1] : -1 <= i0 <= 14 and 0 <= i1 <= 15 }
	auto value_Img_Img_comp_write0 = Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd1.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && -1 + d1 >= 0 && 31 - d1 >= 0) ? ((35 - floord(d0, 2))) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 30 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (20) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (20) : 0);
	return value_Img_Img_comp_write0;
}

inline hw_uint<32>  upsample_stencil_rd2_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_comp[d0, d1] -> Img_comp[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2d0' <= -2 + d0 and d1 <= 2d1' <= 2 + d1 and (((d1) mod 2 = 0 and d1 <= 30 and 2d1' > d1) or ((1 + d1) mod 2 = 0 and 2d1' <= 1 + d1)) }
  // upsample_stencil_rd2 read pattern: { upsample_stencil_comp[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and d1 < 2o1 <= 2 + d1 }
  // Img_Img_comp_write0 stores range: { Img[i0, i1] : -1 <= i0 <= 16 and -1 <= i1 <= 16 }
    // overlap with reads : { Img[i0, i1] : -1 <= i0 <= 14 and 0 < i1 <= 16 }
	auto value_Img_Img_comp_write0 = Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd2.peek(/* Needs general delay string */ ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 30 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (2) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (((1 + d0) - 2 * floord(2*d0, 4))) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && -1 + d1 >= 0 && 31 - d1 >= 0) ? ((17 - floord(2*d0, 4))) : 0);
	return value_Img_Img_comp_write0;
}

inline hw_uint<32>  upsample_stencil_rd3_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_comp[d0, d1] -> Img_comp[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 <= d0' <= 16 and -1 + d0 <= 2d0' <= d0 and -1 <= d1' <= 16 and -3 + d1 <= 2d1' <= -2 + d1 }
  // upsample_stencil_rd3 read pattern: { upsample_stencil_comp[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and -3 + d1 <= 2o1 <= -2 + d1 }
  // Img_Img_comp_write0 stores range: { Img[i0, i1] : -1 <= i0 <= 16 and -1 <= i1 <= 16 }
    // overlap with reads : { Img[i0, i1] : 0 <= i0 <= 15 and -1 <= i1 <= 14 }
	auto value_Img_Img_comp_write0 = Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd3.peek(/* Needs general delay string */ ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 30 - d0 >= 0 && -2 + d1 >= 0 && 30 - d1 >= 0) ? (37) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 30 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (37) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && -2 + d1 >= 0 && 30 - d1 >= 0) ? (37) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (37) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && -2 + d1 >= 0 && 31 - d1 >= 0) ? ((52 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? ((52 - floord(d0, 2))) : 0);
	return value_Img_Img_comp_write0;
}

inline hw_uint<32>  upsample_stencil_rd4_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_comp[d0, d1] -> Img_comp[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 <= d0' <= 16 and -1 + d0 <= 2d0' <= d0 and -1 <= d1' <= 16 and -1 + d1 <= 2d1' <= d1 }
  // upsample_stencil_rd4 read pattern: { upsample_stencil_comp[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Img_Img_comp_write0 stores range: { Img[i0, i1] : -1 <= i0 <= 16 and -1 <= i1 <= 16 }
    // overlap with reads : { Img[i0, i1] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
	auto value_Img_Img_comp_write0 = Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd4.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && -1 + d1 >= 0 && 31 - d1 >= 0) ? ((34 - floord(d0, 2))) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 30 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (19) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (19) : 0);
	return value_Img_Img_comp_write0;
}

inline hw_uint<32>  upsample_stencil_rd5_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_comp[d0, d1] -> Img_comp[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2d0' <= d0 and d1 <= 2d1' <= 2 + d1 and (((d1) mod 2 = 0 and d1 <= 30 and 2d1' > d1) or ((1 + d1) mod 2 = 0 and 2d1' <= 1 + d1)) }
  // upsample_stencil_rd5 read pattern: { upsample_stencil_comp[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and d1 < 2o1 <= 2 + d1 }
  // Img_Img_comp_write0 stores range: { Img[i0, i1] : -1 <= i0 <= 16 and -1 <= i1 <= 16 }
    // overlap with reads : { Img[i0, i1] : 0 <= i0 <= 15 and 0 < i1 <= 16 }
	auto value_Img_Img_comp_write0 = Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd5.peek(/* Needs general delay string */ ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && -1 + d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (1) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 30 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (1) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 31 - d0 >= 0 && -1 + d1 >= 0 && 31 - d1 >= 0) ? ((16 - floord(2*d0, 4))) : 0);
	return value_Img_Img_comp_write0;
}

inline hw_uint<32>  upsample_stencil_rd6_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_comp[d0, d1] -> Img_comp[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 <= d0' <= 16 and d0 < 2d0' <= 2 + d0 and -1 <= d1' <= 16 and -3 + d1 <= 2d1' <= -2 + d1 }
  // upsample_stencil_rd6 read pattern: { upsample_stencil_comp[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 < 2o0 <= 2 + d0 and -3 + d1 <= 2o1 <= -2 + d1 }
  // Img_Img_comp_write0 stores range: { Img[i0, i1] : -1 <= i0 <= 16 and -1 <= i1 <= 16 }
    // overlap with reads : { Img[i0, i1] : 0 < i0 <= 16 and -1 <= i1 <= 14 }
	auto value_Img_Img_comp_write0 = Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd6.peek(/* Needs general delay string */ ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && -2 + d1 >= 0 && 30 - d1 >= 0) ? (36) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (36) : ((-d1) % 2 == 0 && -30 + d0 == 0 && d1 >= 0 && 30 - d1 >= 0) ? (((42 + d0))/2) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && -2 + d1 >= 0 && 30 - d1 >= 0) ? (36) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (36) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && -30 + d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (((20 + d0) - floord(2*d0, 4))) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && -2 + d1 >= 0 && 31 - d1 >= 0) ? ((51 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? ((51 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && -30 + d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 31 - d1 >= 0) ? (((18 + 18 * d1) - 36 * floord(d1, 2))) : 0);
	return value_Img_Img_comp_write0;
}

inline hw_uint<32>  upsample_stencil_rd7_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_comp[d0, d1] -> Img_comp[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 <= d0' <= 16 and d0 < 2d0' <= 2 + d0 and -1 <= d1' <= 16 and -1 + d1 <= 2d1' <= d1 }
  // upsample_stencil_rd7 read pattern: { upsample_stencil_comp[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 < 2o0 <= 2 + d0 and -1 + d1 <= 2o1 <= d1 }
  // Img_Img_comp_write0 stores range: { Img[i0, i1] : -1 <= i0 <= 16 and -1 <= i1 <= 16 }
    // overlap with reads : { Img[i0, i1] : 0 < i0 <= 16 and 0 <= i1 <= 15 }
	auto value_Img_Img_comp_write0 = Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd7.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && -1 + d1 >= 0 && 31 - d1 >= 0) ? ((33 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && -30 + d0 >= 0 && 31 - d0 >= 0 && -1 + d1 >= 0 && 31 - d1 >= 0) ? (18) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (18) : ((-d1) % 2 == 0 && -30 + d0 == 0 && d1 >= 0 && 30 - d1 >= 0) ? (((6 + d0))/2) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (18) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && -30 + d0 >= 0 && 31 - d0 >= 0 && d1 >= 0 && 30 - d1 >= 0) ? (((2 + d0) - floord(2*d0, 4))) : 0);
	return value_Img_Img_comp_write0;
}

inline hw_uint<32>  upsample_stencil_rd8_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_comp[d0, d1] -> Img_comp[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 <= 2d0' <= 2 + d0 and d1 <= 2d1' <= 2 + d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 <= 30 and d1 <= 30 and 2d0' > d0 and 2d1' > d1) or ((1 + d1) mod 2 = 0 and 2d0' > d0 and 2d1' <= 1 + d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d1 <= 30 and 2d0' <= 1 + d0 and 2d1' > d1)) }
  // upsample_stencil_rd8 read pattern: { upsample_stencil_comp[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 < 2o0 <= 2 + d0 and d1 < 2o1 <= 2 + d1 }
  // Img_Img_comp_write0 stores range: { Img[i0, i1] : -1 <= i0 <= 16 and -1 <= i1 <= 16 }
    // overlap with reads : { Img[i0, i1] : 0 < i0 <= 16 and 0 < i1 <= 16 }
	auto value_Img_Img_comp_write0 = Img.bank_Img_Img_comp_write0_to_upsample_stencil_rd8.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 29 - d0 >= 0 && -1 + d1 >= 0 && 31 - d1 >= 0) ? ((15 - floord(2*d0, 4))) : 0);
	return value_Img_Img_comp_write0;
}

// # of bundles = 2
// Img_comp_write
//	Img_Img_comp_write0
inline void Img_Img_comp_write_bundle_write(hw_uint<32>& Img_comp_write, Img_cache& Img, int d0, int d1) {
	hw_uint<32>  Img_Img_comp_write0_res = Img_comp_write.extract<0, 31>();
	Img_Img_comp_write0_write(Img_Img_comp_write0_res, Img, d0, d1);
}

// upsample_stencil_comp_read
//	upsample_stencil_rd0
//	upsample_stencil_rd1
//	upsample_stencil_rd2
//	upsample_stencil_rd3
//	upsample_stencil_rd4
//	upsample_stencil_rd5
//	upsample_stencil_rd6
//	upsample_stencil_rd7
//	upsample_stencil_rd8
inline hw_uint<288> Img_upsample_stencil_comp_read_bundle_read(Img_cache& Img, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  upsample_stencil_rd0_res = upsample_stencil_rd0_select(Img, d0, d1);
	set_at<0, 288>(result, upsample_stencil_rd0_res);
	hw_uint<32>  upsample_stencil_rd1_res = upsample_stencil_rd1_select(Img, d0, d1);
	set_at<32, 288>(result, upsample_stencil_rd1_res);
	hw_uint<32>  upsample_stencil_rd2_res = upsample_stencil_rd2_select(Img, d0, d1);
	set_at<64, 288>(result, upsample_stencil_rd2_res);
	hw_uint<32>  upsample_stencil_rd3_res = upsample_stencil_rd3_select(Img, d0, d1);
	set_at<96, 288>(result, upsample_stencil_rd3_res);
	hw_uint<32>  upsample_stencil_rd4_res = upsample_stencil_rd4_select(Img, d0, d1);
	set_at<128, 288>(result, upsample_stencil_rd4_res);
	hw_uint<32>  upsample_stencil_rd5_res = upsample_stencil_rd5_select(Img, d0, d1);
	set_at<160, 288>(result, upsample_stencil_rd5_res);
	hw_uint<32>  upsample_stencil_rd6_res = upsample_stencil_rd6_select(Img, d0, d1);
	set_at<192, 288>(result, upsample_stencil_rd6_res);
	hw_uint<32>  upsample_stencil_rd7_res = upsample_stencil_rd7_select(Img, d0, d1);
	set_at<224, 288>(result, upsample_stencil_rd7_res);
	hw_uint<32>  upsample_stencil_rd8_res = upsample_stencil_rd8_select(Img, d0, d1);
	set_at<256, 288>(result, upsample_stencil_rd8_res);
	return result;
}





// Operation logic
inline void Img_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */Img_off, Img_cache& Img, int d0, int d1) {
	// Consume: Img_off
	auto Img_off_0_c__0_value = Img_off.read();
	auto compute_result = id(Img_off_0_c__0_value);
	// Produce: Img
	Img_Img_comp_write_bundle_write(compute_result, Img, d0, d1);
}

inline void upsample_stencil_comp(Img_cache& Img, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */upsample_stencil, int d0, int d1) {
	// Consume: Img
	auto Img_0_c__0_value = Img_upsample_stencil_comp_read_bundle_read(Img/* source_delay */, d0, d1);
	auto compute_result = conv_3_3(Img_0_c__0_value);
	// Produce: upsample_stencil
	upsample_stencil.write(compute_result);
}

// Driver function
void upsample_stencil_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */Img_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */upsample_stencil) {
  Img_cache Img;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=Img inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING
for (int c0 = -2; c0 <= 33; c0++) {
  for (int c1 = -2; c1 <= 33; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-2 <= c1 && c1 <= 32) && ((c1 - 0) % 2 == 0) && (-2 <= c0 && c0 <= 32) && ((c0 - 0) % 2 == 0)) {
      Img_comp((c1 - 0) / 2, (c0 - 0) / 2);
    }

    if ((2 <= c1 && c1 <= 33) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 33) && ((c0 - 2) % 1 == 0)) {
      upsample_stencil_comp((c1 - 2) / 1, (c0 - 2) / 1);
    }

  }
}

*/
	for (int c0 = -2; c0 <= 33; c0 += 1) {
	  if (c0 >= 2) {
	    if (c0 % 2 == 0)
	      for (int c1 = -1; c1 <= 0; c1 += 1)
	        Img_comp(Img_off, Img, c1, c0 / 2);
	    for (int c1 = 2; c1 <= 33; c1 += 1) {
	      if (c0 % 2 == 0 && c1 % 2 == 0)
	        Img_comp(Img_off, Img, c1 / 2, c0 / 2);
	      upsample_stencil_comp(Img, upsample_stencil, c1 - 2, c0 - 2);
	    }
	  } else if (c0 % 2 == 0) {
	    for (int c1 = -1; c1 <= 16; c1 += 1)
	      Img_comp(Img_off, Img, c1, c0 / 2);
	  }
	}
	
}
