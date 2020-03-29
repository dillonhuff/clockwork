#include "upsample_stencil_opt_compute_units.h"

#include "hw_classes.h"

struct Img_Img_update_0_write0_to_upsample_stencil_rd0_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd0_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd0_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd0_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd1_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd1_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd1_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd1_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd2_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd2_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd2_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd2_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd3_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd3_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd3_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd3_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd3_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd4_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd4_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd4_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd4_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd4_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd5_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd5_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd5_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd5_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd5_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd6_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 17
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd6_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd6_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd6_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd6_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd7_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 17
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd7_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd7_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd7_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd7_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd8_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 17
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd8_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd8_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd8_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd8_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_cache {
  Img_Img_update_0_write0_to_upsample_stencil_rd0_cache Img_Img_update_0_write0_to_upsample_stencil_rd0;
  Img_Img_update_0_write0_to_upsample_stencil_rd1_cache Img_Img_update_0_write0_to_upsample_stencil_rd1;
  Img_Img_update_0_write0_to_upsample_stencil_rd2_cache Img_Img_update_0_write0_to_upsample_stencil_rd2;
  Img_Img_update_0_write0_to_upsample_stencil_rd3_cache Img_Img_update_0_write0_to_upsample_stencil_rd3;
  Img_Img_update_0_write0_to_upsample_stencil_rd4_cache Img_Img_update_0_write0_to_upsample_stencil_rd4;
  Img_Img_update_0_write0_to_upsample_stencil_rd5_cache Img_Img_update_0_write0_to_upsample_stencil_rd5;
  Img_Img_update_0_write0_to_upsample_stencil_rd6_cache Img_Img_update_0_write0_to_upsample_stencil_rd6;
  Img_Img_update_0_write0_to_upsample_stencil_rd7_cache Img_Img_update_0_write0_to_upsample_stencil_rd7;
  Img_Img_update_0_write0_to_upsample_stencil_rd8_cache Img_Img_update_0_write0_to_upsample_stencil_rd8;
};



inline void Img_Img_update_0_write0_write(hw_uint<32> & Img_Img_update_0_write0, Img_cache& Img, int d0, int d1) {
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd0.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd1.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd2.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd3.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd4.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd5.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd6.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd7.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd8.push(Img_Img_update_0_write0);
}

inline hw_uint<32>  upsample_stencil_rd0_select(Img_cache& Img, int d0, int d1) {
  // upsample_stencil_rd0 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and -3 + d1 <= 2o1 <= -2 + d1 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd0.peek(/* Needs general delay string */ (-1 + d1 == 0) ? ((53 - floord(d0, 2))) : (d1 == 0) ? (38) : ((-1 - d1) % 2 == 0 && -3 + d1 >= 0) ? ((53 - floord(d0, 2))) : ((-d1) % 2 == 0 && -2 + d1 >= 0) ? (38) : 0);
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  upsample_stencil_rd1_select(Img_cache& Img, int d0, int d1) {
  // upsample_stencil_rd1 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd1.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0) ? ((35 - floord(d0, 2))) : ((-d1) % 2 == 0) ? (20) : 0);
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  upsample_stencil_rd2_select(Img_cache& Img, int d0, int d1) {
  // upsample_stencil_rd2 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and d1 < 2o1 <= 2 + d1 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd2.peek(/* Needs general delay string */ ((-d1) % 2 == 0 && (-d0) % 2 == 0) ? (2) : ((-1 - d1) % 2 == 0) ? ((17 - floord(2*d0, 4))) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0) ? (2) : 0);
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  upsample_stencil_rd3_select(Img_cache& Img, int d0, int d1) {
  // upsample_stencil_rd3 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and -3 + d1 <= 2o1 <= -2 + d1 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd3.peek(/* Needs general delay string */ (-1 + d1 == 0) ? ((52 - floord(d0, 2))) : (d1 == 0) ? (37) : ((-1 - d1) % 2 == 0 && -3 + d1 >= 0) ? ((52 - floord(d0, 2))) : ((-d1) % 2 == 0 && -2 + d1 >= 0) ? (37) : 0);
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  upsample_stencil_rd4_select(Img_cache& Img, int d0, int d1) {
  // upsample_stencil_rd4 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd4.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0) ? ((34 - floord(d0, 2))) : ((-d1) % 2 == 0) ? (19) : 0);
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  upsample_stencil_rd5_select(Img_cache& Img, int d0, int d1) {
  // upsample_stencil_rd5 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and d1 < 2o1 <= 2 + d1 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd5.peek(/* Needs general delay string */ ((-d1) % 2 == 0) ? (1) : ((-1 - d1) % 2 == 0) ? ((16 - floord(2*d0, 4))) : 0);
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  upsample_stencil_rd6_select(Img_cache& Img, int d0, int d1) {
  // upsample_stencil_rd6 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 < 2o0 <= 2 + d0 and -3 + d1 <= 2o1 <= -2 + d1 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd6.peek(/* Needs general delay string */ (-1 + d1 == 0 && 29 - d0 >= 0) ? ((51 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && -30 + d0 >= 0) ? (36) : (d1 == 0 && 29 - d0 >= 0) ? (36) : ((-1 - d1) % 2 == 0 && 29 - d0 >= 0 && -3 + d1 >= 0) ? ((51 - floord(d0, 2))) : ((-d1) % 2 == 0 && -30 + d0 == 0) ? (36) : ((-d1) % 2 == 0 && -31 + d0 == 0) ? (36) : ((-d1) % 2 == 0 && 29 - d0 >= 0 && -2 + d1 >= 0) ? (36) : 0);
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  upsample_stencil_rd7_select(Img_cache& Img, int d0, int d1) {
  // upsample_stencil_rd7 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 < 2o0 <= 2 + d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd7.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && -30 + d0 >= 0) ? (18) : ((-1 - d1) % 2 == 0 && 29 - d0 >= 0) ? ((33 - floord(d0, 2))) : ((-d1) % 2 == 0 && -30 + d0 == 0) ? (18) : ((-d1) % 2 == 0 && -31 + d0 == 0) ? (18) : ((-d1) % 2 == 0 && 29 - d0 >= 0) ? (18) : 0);
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  upsample_stencil_rd8_select(Img_cache& Img, int d0, int d1) {
  // upsample_stencil_rd8 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 < 2o0 <= 2 + d0 and d1 < 2o1 <= 2 + d1 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd8.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && 29 - d0 >= 0) ? ((15 - floord(2*d0, 4))) : 0);
	return value_Img_Img_update_0_write0;
}

// # of bundles = 2
// Img_update_0_write
//	Img_Img_update_0_write0
inline void Img_Img_update_0_write_bundle_write(hw_uint<32>& Img_update_0_write, Img_cache& Img, int d0, int d1) {
	hw_uint<32>  Img_Img_update_0_write0_res = Img_update_0_write.extract<0, 31>();
	Img_Img_update_0_write0_write(Img_Img_update_0_write0_res, Img, d0, d1);
}

// upsample_stencil_update_0_read
//	upsample_stencil_rd0
//	upsample_stencil_rd1
//	upsample_stencil_rd2
//	upsample_stencil_rd3
//	upsample_stencil_rd4
//	upsample_stencil_rd5
//	upsample_stencil_rd6
//	upsample_stencil_rd7
//	upsample_stencil_rd8
inline hw_uint<288> Img_upsample_stencil_update_0_read_bundle_read(Img_cache& Img, int d0, int d1) {
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
inline void upsample_stencil_update_0(Img_cache& Img, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */upsample_stencil, int d0, int d1) {
	// Consume: Img
	auto Img_0_c__0_value = Img_upsample_stencil_update_0_read_bundle_read(Img/* source_delay */, d0, d1);
	auto compute_result = conv_3_3(Img_0_c__0_value);
	// Produce: upsample_stencil
	upsample_stencil.write(compute_result);
}

inline void Img_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */Img_off, Img_cache& Img, int d0, int d1) {
	// Consume: Img_off
	auto Img_off_0_c__0_value = Img_off.read();
	auto compute_result = id(Img_off_0_c__0_value);
	// Produce: Img
	Img_Img_update_0_write_bundle_write(compute_result, Img, d0, d1);
}

#ifndef __SYSTEMC_SYNTH__
// Driver function
void upsample_stencil_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */Img_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */upsample_stencil) {
  Img_cache Img;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=Img inter false
#endif // __VIVADO_SYNTH__

	  int c0 = -2;
	  int c1 = -2;
	  int global_time = 0;
	#ifdef __VIVADO_SYNTH__
	  while(true) {
	#else
	  while(global_time < 1296) {
	#endif // __VIVADO_SYNTH__
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS dependence inter false
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((-2 <= c1 && c1 <= 32) && ((c1 - 0) % 2 == 0) && (-2 <= c0 && c0 <= 32) && ((c0 - 0) % 2 == 0)) {
	Img_update_0(Img_off, Img, (c1 - 0) / 2, (c0 - 0) / 2);
	      }
	
	      if ((2 <= c1 && c1 <= 33) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 33) && ((c0 - 2) % 1 == 0)) {
	upsample_stencil_update_0(Img, upsample_stencil, (c1 - 2) / 1, (c0 - 2) / 1);
	      }
	
	    bool c0_at_max = c0 == 33;
	    bool c1_at_max = c1 == 33;
	    if (1 && c1_at_max) {
	      if (c0_at_max) {
	        c0 = -2;
	      } else {
	        c0++;
	      }
	    }
	#ifndef __VIVADO_SYNTH__
	    cout << "c0 = " << c0 << endl;
	#endif //__VIVADO_SYNTH__
	    if (1) {
	      if (c1_at_max) {
	        c1 = -2;
	      } else {
	        c1++;
	      }
	    }
	#ifndef __VIVADO_SYNTH__
	    cout << "c1 = " << c1 << endl;
	#endif //__VIVADO_SYNTH__
	    global_time++;
	  }
	
}
#else // __SYSTEMC_SYNTH__

#endif //__SYSTEMC_SYNTH__
