#include "pyramid_synthetic_exposure_fusion_opt_compute_units.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 337
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_bright_update_0_write0_merged_banks_10_store[529];

#else
  hw_uint<32> * bright_bright_update_0_write0_merged_banks_10_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 23) capacity = 20
	fifo<hw_uint<32> , 20> f5;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [24, 25) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [25, 26) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [26, 46) capacity = 20
	fifo<hw_uint<32> , 20> f11;
	// Parition [46, 47) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [47, 48) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [48, 48] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_22() {
		return f5.back();
	}

	inline hw_uint<32>  peek_23() {
		return f6.back();
	}

	inline hw_uint<32>  peek_24() {
		return f8.back();
	}

	inline hw_uint<32>  peek_25() {
		return f10.back();
	}

	inline hw_uint<32>  peek_45() {
		return f11.back();
	}

	inline hw_uint<32>  peek_46() {
		return f12.back();
	}

	inline hw_uint<32>  peek_47() {
		return f14.back();
	}

	inline hw_uint<32>  peek_48() {
		return f16.back();
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
		if (offset == 22) {
			return f5.back();
		}
		if (offset == 23) {
			return f6.back();
		}
		if (offset == 24) {
			return f8.back();
		}
		if (offset == 25) {
			return f10.back();
		}
		if (offset == 45) {
			return f11.back();
		}
		if (offset == 46) {
			return f12.back();
		}
		if (offset == 47) {
			return f14.back();
		}
		if (offset == 48) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_bright_update_0_write0_merged_banks_10: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 337
	// # of read delays: 170
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_store[529];

#else
  hw_uint<32> * bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 337> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(336 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(73);
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(74);
	}

	inline hw_uint<32>  peek_75() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(75);
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(76);
	}

	inline hw_uint<32>  peek_77() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(77);
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(78);
	}

	inline hw_uint<32>  peek_79() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(79);
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(80);
	}

	inline hw_uint<32>  peek_81() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(81);
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(82);
	}

	inline hw_uint<32>  peek_83() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(83);
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(84);
	}

	inline hw_uint<32>  peek_85() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(85);
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(86);
	}

	inline hw_uint<32>  peek_87() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(87);
	}

	inline hw_uint<32>  peek_88() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(88);
	}

	inline hw_uint<32>  peek_89() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(89);
	}

	inline hw_uint<32>  peek_90() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(90);
	}

	inline hw_uint<32>  peek_91() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(91);
	}

	inline hw_uint<32>  peek_92() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(92);
	}

	inline hw_uint<32>  peek_93() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(93);
	}

	inline hw_uint<32>  peek_94() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(94);
	}

	inline hw_uint<32>  peek_95() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(95);
	}

	inline hw_uint<32>  peek_96() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(96);
	}

	inline hw_uint<32>  peek_97() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(97);
	}

	inline hw_uint<32>  peek_98() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(98);
	}

	inline hw_uint<32>  peek_99() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(99);
	}

	inline hw_uint<32>  peek_100() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(100);
	}

	inline hw_uint<32>  peek_101() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(101);
	}

	inline hw_uint<32>  peek_102() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(102);
	}

	inline hw_uint<32>  peek_103() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(103);
	}

	inline hw_uint<32>  peek_104() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(104);
	}

	inline hw_uint<32>  peek_105() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(105);
	}

	inline hw_uint<32>  peek_106() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(106);
	}

	inline hw_uint<32>  peek_107() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(107);
	}

	inline hw_uint<32>  peek_108() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(108);
	}

	inline hw_uint<32>  peek_109() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(109);
	}

	inline hw_uint<32>  peek_110() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(110);
	}

	inline hw_uint<32>  peek_111() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(111);
	}

	inline hw_uint<32>  peek_112() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(112);
	}

	inline hw_uint<32>  peek_113() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(113);
	}

	inline hw_uint<32>  peek_114() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(114);
	}

	inline hw_uint<32>  peek_115() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(115);
	}

	inline hw_uint<32>  peek_116() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(116);
	}

	inline hw_uint<32>  peek_117() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(117);
	}

	inline hw_uint<32>  peek_118() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(118);
	}

	inline hw_uint<32>  peek_119() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(119);
	}

	inline hw_uint<32>  peek_120() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(120);
	}

	inline hw_uint<32>  peek_121() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(121);
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(122);
	}

	inline hw_uint<32>  peek_123() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(123);
	}

	inline hw_uint<32>  peek_124() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(124);
	}

	inline hw_uint<32>  peek_125() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(125);
	}

	inline hw_uint<32>  peek_126() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(126);
	}

	inline hw_uint<32>  peek_127() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(127);
	}

	inline hw_uint<32>  peek_128() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(128);
	}

	inline hw_uint<32>  peek_129() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(129);
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(130);
	}

	inline hw_uint<32>  peek_131() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(131);
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(132);
	}

	inline hw_uint<32>  peek_133() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(133);
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(134);
	}

	inline hw_uint<32>  peek_135() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(135);
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(136);
	}

	inline hw_uint<32>  peek_137() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(137);
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(138);
	}

	inline hw_uint<32>  peek_139() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(139);
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(140);
	}

	inline hw_uint<32>  peek_141() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(141);
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(142);
	}

	inline hw_uint<32>  peek_143() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(143);
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(144);
	}

	inline hw_uint<32>  peek_145() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(145);
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(146);
	}

	inline hw_uint<32>  peek_147() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(147);
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(148);
	}

	inline hw_uint<32>  peek_149() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(149);
	}

	inline hw_uint<32>  peek_150() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(150);
	}

	inline hw_uint<32>  peek_151() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(151);
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(152);
	}

	inline hw_uint<32>  peek_153() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(153);
	}

	inline hw_uint<32>  peek_154() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(154);
	}

	inline hw_uint<32>  peek_155() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(155);
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(156);
	}

	inline hw_uint<32>  peek_157() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(157);
	}

	inline hw_uint<32>  peek_158() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(158);
	}

	inline hw_uint<32>  peek_159() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(159);
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(160);
	}

	inline hw_uint<32>  peek_161() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(161);
	}

	inline hw_uint<32>  peek_162() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(162);
	}

	inline hw_uint<32>  peek_163() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(163);
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(164);
	}

	inline hw_uint<32>  peek_165() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(165);
	}

	inline hw_uint<32>  peek_166() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(166);
	}

	inline hw_uint<32>  peek_167() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(167);
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(168);
	}

	inline hw_uint<32>  peek_169() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(169);
	}

	inline hw_uint<32>  peek_170() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(170);
	}

	inline hw_uint<32>  peek_171() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(171);
	}

	inline hw_uint<32>  peek_172() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(172);
	}

	inline hw_uint<32>  peek_173() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(173);
	}

	inline hw_uint<32>  peek_174() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(174);
	}

	inline hw_uint<32>  peek_175() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(175);
	}

	inline hw_uint<32>  peek_176() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(176);
	}

	inline hw_uint<32>  peek_177() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(177);
	}

	inline hw_uint<32>  peek_178() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(178);
	}

	inline hw_uint<32>  peek_179() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(179);
	}

	inline hw_uint<32>  peek_180() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(180);
	}

	inline hw_uint<32>  peek_181() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(181);
	}

	inline hw_uint<32>  peek_182() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(182);
	}

	inline hw_uint<32>  peek_183() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(183);
	}

	inline hw_uint<32>  peek_184() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(184);
	}

	inline hw_uint<32>  peek_185() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(185);
	}

	inline hw_uint<32>  peek_186() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(186);
	}

	inline hw_uint<32>  peek_187() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(187);
	}

	inline hw_uint<32>  peek_188() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(188);
	}

	inline hw_uint<32>  peek_189() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(189);
	}

	inline hw_uint<32>  peek_190() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(190);
	}

	inline hw_uint<32>  peek_191() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(191);
	}

	inline hw_uint<32>  peek_192() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(192);
	}

	inline hw_uint<32>  peek_193() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(193);
	}

	inline hw_uint<32>  peek_194() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(194);
	}

	inline hw_uint<32>  peek_195() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(195);
	}

	inline hw_uint<32>  peek_196() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(196);
	}

	inline hw_uint<32>  peek_197() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(197);
	}

	inline hw_uint<32>  peek_198() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(198);
	}

	inline hw_uint<32>  peek_199() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(199);
	}

	inline hw_uint<32>  peek_200() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(200);
	}

	inline hw_uint<32>  peek_201() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(201);
	}

	inline hw_uint<32>  peek_202() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(202);
	}

	inline hw_uint<32>  peek_203() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(203);
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(204);
	}

	inline hw_uint<32>  peek_205() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(205);
	}

	inline hw_uint<32>  peek_206() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(206);
	}

	inline hw_uint<32>  peek_207() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(207);
	}

	inline hw_uint<32>  peek_208() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(208);
	}

	inline hw_uint<32>  peek_209() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(209);
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(210);
	}

	inline hw_uint<32>  peek_211() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(211);
	}

	inline hw_uint<32>  peek_212() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(212);
	}

	inline hw_uint<32>  peek_213() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(213);
	}

	inline hw_uint<32>  peek_214() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(214);
	}

	inline hw_uint<32>  peek_215() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(215);
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(216);
	}

	inline hw_uint<32>  peek_217() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(217);
	}

	inline hw_uint<32>  peek_218() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(218);
	}

	inline hw_uint<32>  peek_219() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(219);
	}

	inline hw_uint<32>  peek_220() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(220);
	}

	inline hw_uint<32>  peek_221() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(221);
	}

	inline hw_uint<32>  peek_222() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(222);
	}

	inline hw_uint<32>  peek_223() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(223);
	}

	inline hw_uint<32>  peek_224() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(224);
	}

	inline hw_uint<32>  peek_225() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(225);
	}

	inline hw_uint<32>  peek_226() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(226);
	}

	inline hw_uint<32>  peek_227() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(227);
	}

	inline hw_uint<32>  peek_228() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(228);
	}

	inline hw_uint<32>  peek_229() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(229);
	}

	inline hw_uint<32>  peek_230() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(230);
	}

	inline hw_uint<32>  peek_231() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(231);
	}

	inline hw_uint<32>  peek_232() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(232);
	}

	inline hw_uint<32>  peek_233() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(233);
	}

	inline hw_uint<32>  peek_234() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(234);
	}

	inline hw_uint<32>  peek_235() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(235);
	}

	inline hw_uint<32>  peek_236() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(236);
	}

	inline hw_uint<32>  peek_237() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(237);
	}

	inline hw_uint<32>  peek_238() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(238);
	}

	inline hw_uint<32>  peek_239() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(239);
	}

	inline hw_uint<32>  peek_240() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(240);
	}

	inline hw_uint<32>  peek_241() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(241);
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(242);
	}

	inline hw_uint<32>  peek_243() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(243);
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(244);
	}

	inline hw_uint<32>  peek_245() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(245);
	}

	inline hw_uint<32>  peek_246() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(246);
	}

	inline hw_uint<32>  peek_247() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(247);
	}

	inline hw_uint<32>  peek_248() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(248);
	}

	inline hw_uint<32>  peek_249() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(249);
	}

	inline hw_uint<32>  peek_250() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(250);
	}

	inline hw_uint<32>  peek_251() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(251);
	}

	inline hw_uint<32>  peek_252() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(252);
	}

	inline hw_uint<32>  peek_253() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(253);
	}

	inline hw_uint<32>  peek_254() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(254);
	}

	inline hw_uint<32>  peek_255() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(255);
	}

	inline hw_uint<32>  peek_256() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(256);
	}

	inline hw_uint<32>  peek_257() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(257);
	}

	inline hw_uint<32>  peek_258() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(258);
	}

	inline hw_uint<32>  peek_259() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(259);
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(260);
	}

	inline hw_uint<32>  peek_261() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(261);
	}

	inline hw_uint<32>  peek_262() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(262);
	}

	inline hw_uint<32>  peek_263() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(263);
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(264);
	}

	inline hw_uint<32>  peek_265() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(265);
	}

	inline hw_uint<32>  peek_266() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(266);
	}

	inline hw_uint<32>  peek_267() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(267);
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(268);
	}

	inline hw_uint<32>  peek_269() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(269);
	}

	inline hw_uint<32>  peek_270() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(270);
	}

	inline hw_uint<32>  peek_271() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(271);
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(272);
	}

	inline hw_uint<32>  peek_273() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(273);
	}

	inline hw_uint<32>  peek_274() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(274);
	}

	inline hw_uint<32>  peek_275() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(275);
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(276);
	}

	inline hw_uint<32>  peek_277() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(277);
	}

	inline hw_uint<32>  peek_278() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(278);
	}

	inline hw_uint<32>  peek_279() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(279);
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(280);
	}

	inline hw_uint<32>  peek_281() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(281);
	}

	inline hw_uint<32>  peek_282() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(282);
	}

	inline hw_uint<32>  peek_283() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(283);
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(284);
	}

	inline hw_uint<32>  peek_285() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(285);
	}

	inline hw_uint<32>  peek_286() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(286);
	}

	inline hw_uint<32>  peek_287() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(287);
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(288);
	}

	inline hw_uint<32>  peek_289() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(289);
	}

	inline hw_uint<32>  peek_290() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(290);
	}

	inline hw_uint<32>  peek_291() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(291);
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(292);
	}

	inline hw_uint<32>  peek_293() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(293);
	}

	inline hw_uint<32>  peek_294() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(294);
	}

	inline hw_uint<32>  peek_295() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(295);
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(296);
	}

	inline hw_uint<32>  peek_297() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(297);
	}

	inline hw_uint<32>  peek_298() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(298);
	}

	inline hw_uint<32>  peek_299() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(299);
	}

	inline hw_uint<32>  peek_300() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(300);
	}

	inline hw_uint<32>  peek_301() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(301);
	}

	inline hw_uint<32>  peek_302() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(302);
	}

	inline hw_uint<32>  peek_303() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(303);
	}

	inline hw_uint<32>  peek_304() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(304);
	}

	inline hw_uint<32>  peek_305() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(305);
	}

	inline hw_uint<32>  peek_306() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(306);
	}

	inline hw_uint<32>  peek_307() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(307);
	}

	inline hw_uint<32>  peek_308() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(308);
	}

	inline hw_uint<32>  peek_309() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(309);
	}

	inline hw_uint<32>  peek_310() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(310);
	}

	inline hw_uint<32>  peek_311() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(311);
	}

	inline hw_uint<32>  peek_312() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(312);
	}

	inline hw_uint<32>  peek_313() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(313);
	}

	inline hw_uint<32>  peek_314() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(314);
	}

	inline hw_uint<32>  peek_315() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(315);
	}

	inline hw_uint<32>  peek_316() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(316);
	}

	inline hw_uint<32>  peek_317() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(317);
	}

	inline hw_uint<32>  peek_318() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(318);
	}

	inline hw_uint<32>  peek_319() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(319);
	}

	inline hw_uint<32>  peek_320() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(320);
	}

	inline hw_uint<32>  peek_321() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(321);
	}

	inline hw_uint<32>  peek_322() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(322);
	}

	inline hw_uint<32>  peek_323() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(323);
	}

	inline hw_uint<32>  peek_324() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(324);
	}

	inline hw_uint<32>  peek_325() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(325);
	}

	inline hw_uint<32>  peek_326() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(326);
	}

	inline hw_uint<32>  peek_327() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(327);
	}

	inline hw_uint<32>  peek_328() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(328);
	}

	inline hw_uint<32>  peek_329() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(329);
	}

	inline hw_uint<32>  peek_330() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(330);
	}

	inline hw_uint<32>  peek_331() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(331);
	}

	inline hw_uint<32>  peek_332() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(332);
	}

	inline hw_uint<32>  peek_333() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(333);
	}

	inline hw_uint<32>  peek_334() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(334);
	}

	inline hw_uint<32>  peek_335() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(335);
	}

	inline hw_uint<32>  peek_336() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(336);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_cache {
  bright_bright_update_0_write0_merged_banks_10_cache bright_bright_update_0_write0_merged_banks_10;
  bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_cache bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0;
};



inline void bright_bright_update_0_write0_write(hw_uint<32> & bright_bright_update_0_write0, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write0_merged_banks_10.push(bright_bright_update_0_write0);
  bright.bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0.push(bright_bright_update_0_write0);
}

inline hw_uint<32>  bright_gauss_blur_1_rd0_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_48();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd1_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_25();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd2_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_2();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd3_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_47();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd4_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_24();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd5_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_1();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd6_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_46();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd7_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_23();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd8_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_0();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_laplace_diff_0_rd0_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_0_update_0[d0, d1] -> bright_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 15 - d0 >= 0 && -10 + d1 >= 0 && 15 - d1 >= 0) ? (((528 - d0) - 23 * d1)) : (-10 + d0 >= 0 && 15 - d0 >= 0 && d1 >= 0 && 8 - d1 >= 0) ? ((344 - d0)) : (d0 >= 0 && 8 - d0 >= 0 && d1 >= 0 && 8 - d1 >= 0) ? (336) : (-9 + d0 == 0 && d1 >= 0 && 8 - d1 >= 0) ? (335) : ((-9 + d1 == 0 && -10 + d0 >= 0 && 15 - d0 >= 0) || (-9 + d1 == 0 && d0 >= 0 && 9 - d0 >= 0)) ? ((321 - d0)) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_weights_rd0_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_weights_update_0[d0, d1] -> bright_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_0();
	return value_bright_bright_update_0_write0;
}

// # of bundles = 4
// bright_gauss_blur_1_update_0_read
//	bright_gauss_blur_1_rd0
//	bright_gauss_blur_1_rd1
//	bright_gauss_blur_1_rd2
//	bright_gauss_blur_1_rd3
//	bright_gauss_blur_1_rd4
//	bright_gauss_blur_1_rd5
//	bright_gauss_blur_1_rd6
//	bright_gauss_blur_1_rd7
//	bright_gauss_blur_1_rd8
inline hw_uint<288> bright_bright_gauss_blur_1_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_gauss_blur_1_rd0_res = bright_gauss_blur_1_rd0_select(bright, d0, d1);
	set_at<0, 288>(result, bright_gauss_blur_1_rd0_res);
	hw_uint<32>  bright_gauss_blur_1_rd1_res = bright_gauss_blur_1_rd1_select(bright, d0, d1);
	set_at<32, 288>(result, bright_gauss_blur_1_rd1_res);
	hw_uint<32>  bright_gauss_blur_1_rd2_res = bright_gauss_blur_1_rd2_select(bright, d0, d1);
	set_at<64, 288>(result, bright_gauss_blur_1_rd2_res);
	hw_uint<32>  bright_gauss_blur_1_rd3_res = bright_gauss_blur_1_rd3_select(bright, d0, d1);
	set_at<96, 288>(result, bright_gauss_blur_1_rd3_res);
	hw_uint<32>  bright_gauss_blur_1_rd4_res = bright_gauss_blur_1_rd4_select(bright, d0, d1);
	set_at<128, 288>(result, bright_gauss_blur_1_rd4_res);
	hw_uint<32>  bright_gauss_blur_1_rd5_res = bright_gauss_blur_1_rd5_select(bright, d0, d1);
	set_at<160, 288>(result, bright_gauss_blur_1_rd5_res);
	hw_uint<32>  bright_gauss_blur_1_rd6_res = bright_gauss_blur_1_rd6_select(bright, d0, d1);
	set_at<192, 288>(result, bright_gauss_blur_1_rd6_res);
	hw_uint<32>  bright_gauss_blur_1_rd7_res = bright_gauss_blur_1_rd7_select(bright, d0, d1);
	set_at<224, 288>(result, bright_gauss_blur_1_rd7_res);
	hw_uint<32>  bright_gauss_blur_1_rd8_res = bright_gauss_blur_1_rd8_select(bright, d0, d1);
	set_at<256, 288>(result, bright_gauss_blur_1_rd8_res);
	return result;
}

// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
inline hw_uint<32> bright_bright_laplace_diff_0_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_0_rd0_res);
	return result;
}

// bright_update_0_write
//	bright_bright_update_0_write0
inline void bright_bright_update_0_write_bundle_write(hw_uint<32>& bright_update_0_write, bright_cache& bright, int d0, int d1) {
	hw_uint<32>  bright_bright_update_0_write0_res = bright_update_0_write.extract<0, 31>();
	bright_bright_update_0_write0_write(bright_bright_update_0_write0_res, bright, d0, d1);
}

// bright_weights_update_0_read
//	bright_weights_rd0
inline hw_uint<32> bright_bright_weights_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_rd0_res = bright_weights_rd0_select(bright, d0, d1);
	set_at<0, 32>(result, bright_weights_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 20], [0, 20]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_store[441];

#else
  hw_uint<32> * bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_blur_1_cache {
  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_cache bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(hw_uint<32> & bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1.push(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0);
}

inline hw_uint<32>  bright_gauss_ds_1_rd0_select(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	// lexmax events: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
	auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0 = bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1.peek_0();
	return value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0;
}

// # of bundles = 2
// bright_gauss_blur_1_update_0_write
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0
inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& bright_gauss_blur_1_update_0_write, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	hw_uint<32>  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res = bright_gauss_blur_1_update_0_write.extract<0, 31>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res, bright_gauss_blur_1, d0, d1);
}

// bright_gauss_ds_1_update_0_read
//	bright_gauss_ds_1_rd0
inline hw_uint<32> bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_gauss_ds_1_rd0_res = bright_gauss_ds_1_rd0_select(bright_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, bright_gauss_ds_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 8], [0, 8]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_store[81];

#else
  hw_uint<32> * bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_blur_2_cache {
  bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_cache bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(hw_uint<32> & bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
  bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1.push(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0);
}

inline hw_uint<32>  bright_gauss_ds_2_rd0_select(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	// lexmax events: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
	auto value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0 = bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1.peek_0();
	return value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0;
}

// # of bundles = 2
// bright_gauss_blur_2_update_0_write
//	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0
inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& bright_gauss_blur_2_update_0_write, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	hw_uint<32>  bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res = bright_gauss_blur_2_update_0_write.extract<0, 31>();
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res, bright_gauss_blur_2, d0, d1);
}

// bright_gauss_ds_2_update_0_read
//	bright_gauss_ds_2_rd0
inline hw_uint<32> bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_gauss_ds_2_rd0_res = bright_gauss_ds_2_rd0_select(bright_gauss_blur_2, d0, d1);
	set_at<0, 32>(result, bright_gauss_ds_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_store[9];

#else
  hw_uint<32> * bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_blur_3_cache {
  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_cache bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(hw_uint<32> & bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
  bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1.push(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0);
}

inline hw_uint<32>  bright_gauss_ds_3_rd0_select(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	// lexmax events: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
	auto value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0 = bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1.peek_0();
	return value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0;
}

// # of bundles = 2
// bright_gauss_blur_3_update_0_write
//	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0
inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& bright_gauss_blur_3_update_0_write, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	hw_uint<32>  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res = bright_gauss_blur_3_update_0_write.extract<0, 31>();
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res, bright_gauss_blur_3, d0, d1);
}

// bright_gauss_ds_3_update_0_read
//	bright_gauss_ds_3_rd0
inline hw_uint<32> bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_gauss_ds_3_rd0_res = bright_gauss_ds_3_rd0_select(bright_gauss_blur_3, d0, d1);
	set_at<0, 32>(result, bright_gauss_ds_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 77
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_store[121];

#else
  hw_uint<32> * bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 11) capacity = 8
	fifo<hw_uint<32> , 8> f5;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [12, 13) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [13, 14) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [14, 22) capacity = 8
	fifo<hw_uint<32> , 8> f11;
	// Parition [22, 23) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [24, 24] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_10() {
		return f5.back();
	}

	inline hw_uint<32>  peek_11() {
		return f6.back();
	}

	inline hw_uint<32>  peek_12() {
		return f8.back();
	}

	inline hw_uint<32>  peek_13() {
		return f10.back();
	}

	inline hw_uint<32>  peek_21() {
		return f11.back();
	}

	inline hw_uint<32>  peek_22() {
		return f12.back();
	}

	inline hw_uint<32>  peek_23() {
		return f14.back();
	}

	inline hw_uint<32>  peek_24() {
		return f16.back();
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
		if (offset == 10) {
			return f5.back();
		}
		if (offset == 11) {
			return f6.back();
		}
		if (offset == 12) {
			return f8.back();
		}
		if (offset == 13) {
			return f10.back();
		}
		if (offset == 21) {
			return f11.back();
		}
		if (offset == 22) {
			return f12.back();
		}
		if (offset == 23) {
			return f14.back();
		}
		if (offset == 24) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 77
	// # of read delays: 38
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_store[121];

#else
  hw_uint<32> * bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 77> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(76 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(73);
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(74);
	}

	inline hw_uint<32>  peek_75() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(75);
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(76);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 77
	// # of read delays: 48
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_store[121];

#else
  hw_uint<32> * bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 77> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(76 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(73);
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(74);
	}

	inline hw_uint<32>  peek_75() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(75);
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(76);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_cache {
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0;
};



inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(hw_uint<32> & bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  bright_gauss_blur_2_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_24();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_13();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd2_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd3_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_23();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd4_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_12();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd5_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd6_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_22();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd7_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_11();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd8_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_laplace_diff_1_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 7 - d0 >= 0 && -6 + d1 >= 0 && 7 - d1 >= 0) ? (((120 - d0) - 11 * d1)) : (-6 + d0 >= 0 && 7 - d0 >= 0 && d1 >= 0 && 4 - d1 >= 0) ? ((76 - d0)) : (d0 >= 0 && 4 - d0 >= 0 && d1 >= 0 && 4 - d1 >= 0) ? (72) : (-5 + d0 == 0 && d1 >= 0 && 4 - d1 >= 0) ? (71) : ((-5 + d1 == 0 && -6 + d0 >= 0 && 7 - d0 >= 0) || (-5 + d1 == 0 && d0 >= 0 && 5 - d0 >= 0)) ? ((65 - d0)) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_laplace_us_0_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0', d1'] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and 0 <= d0' <= 10 and -1 + d0 <= 2d0' <= d0 and 0 <= d1' <= 10 and -1 + d1 <= 2d1' <= d1 }
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[o0, o1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 15 - d0 >= 0 && -10 + d1 >= 0 && 15 - d1 >= 0) ? (((120 - floord(d0, 2)) - 11 * floord(d1, 2))) : ((-d1) % 2 == 0 && -10 + d0 >= 0 && 15 - d0 >= 0 && -2 + d1 >= 0 && 8 - d1 >= 0) ? ((76 - floord(d0, 2))) : ((-d1) % 2 == 0 && -10 + d0 >= 0 && 15 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? ((76 - floord(d0, 2))) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 8 - d0 >= 0 && -2 + d1 >= 0 && 8 - d1 >= 0) ? (72) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 8 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (72) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 9 - d0 >= 0 && -2 + d1 >= 0 && 8 - d1 >= 0) ? (72) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 9 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (72) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 15 - d0 >= 0 && -2 + d1 >= 0 && 9 - d1 >= 0) ? ((76 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 15 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? ((76 - floord(d0, 2))) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

// # of bundles = 4
// bright_gauss_blur_2_update_0_read
//	bright_gauss_blur_2_rd0
//	bright_gauss_blur_2_rd1
//	bright_gauss_blur_2_rd2
//	bright_gauss_blur_2_rd3
//	bright_gauss_blur_2_rd4
//	bright_gauss_blur_2_rd5
//	bright_gauss_blur_2_rd6
//	bright_gauss_blur_2_rd7
//	bright_gauss_blur_2_rd8
inline hw_uint<288> bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_gauss_blur_2_rd0_res = bright_gauss_blur_2_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, bright_gauss_blur_2_rd0_res);
	hw_uint<32>  bright_gauss_blur_2_rd1_res = bright_gauss_blur_2_rd1_select(bright_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, bright_gauss_blur_2_rd1_res);
	hw_uint<32>  bright_gauss_blur_2_rd2_res = bright_gauss_blur_2_rd2_select(bright_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, bright_gauss_blur_2_rd2_res);
	hw_uint<32>  bright_gauss_blur_2_rd3_res = bright_gauss_blur_2_rd3_select(bright_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, bright_gauss_blur_2_rd3_res);
	hw_uint<32>  bright_gauss_blur_2_rd4_res = bright_gauss_blur_2_rd4_select(bright_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, bright_gauss_blur_2_rd4_res);
	hw_uint<32>  bright_gauss_blur_2_rd5_res = bright_gauss_blur_2_rd5_select(bright_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, bright_gauss_blur_2_rd5_res);
	hw_uint<32>  bright_gauss_blur_2_rd6_res = bright_gauss_blur_2_rd6_select(bright_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, bright_gauss_blur_2_rd6_res);
	hw_uint<32>  bright_gauss_blur_2_rd7_res = bright_gauss_blur_2_rd7_select(bright_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, bright_gauss_blur_2_rd7_res);
	hw_uint<32>  bright_gauss_blur_2_rd8_res = bright_gauss_blur_2_rd8_select(bright_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, bright_gauss_blur_2_rd8_res);
	return result;
}

// bright_gauss_ds_1_update_0_write
//	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0
inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& bright_gauss_ds_1_update_0_write, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<32>  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res = bright_gauss_ds_1_update_0_write.extract<0, 31>();
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res, bright_gauss_ds_1, d0, d1);
}

// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<32> bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_read
//	bright_laplace_us_0_rd0
inline hw_uint<32> bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_us_0_rd0_res = bright_laplace_us_0_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, bright_laplace_us_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_store[25];

#else
  hw_uint<32> * bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 5) capacity = 2
	fifo<hw_uint<32> , 2> f5;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [8, 10) capacity = 2
	fifo<hw_uint<32> , 2> f11;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [12, 12] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_4() {
		return f5.back();
	}

	inline hw_uint<32>  peek_5() {
		return f6.back();
	}

	inline hw_uint<32>  peek_6() {
		return f8.back();
	}

	inline hw_uint<32>  peek_7() {
		return f10.back();
	}

	inline hw_uint<32>  peek_9() {
		return f11.back();
	}

	inline hw_uint<32>  peek_10() {
		return f12.back();
	}

	inline hw_uint<32>  peek_11() {
		return f14.back();
	}

	inline hw_uint<32>  peek_12() {
		return f16.back();
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
		if (offset == 4) {
			return f5.back();
		}
		if (offset == 5) {
			return f6.back();
		}
		if (offset == 6) {
			return f8.back();
		}
		if (offset == 7) {
			return f10.back();
		}
		if (offset == 9) {
			return f11.back();
		}
		if (offset == 10) {
			return f12.back();
		}
		if (offset == 11) {
			return f14.back();
		}
		if (offset == 12) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 8
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_store[25];

#else
  hw_uint<32> * bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 15> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 11
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_store[25];

#else
  hw_uint<32> * bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 15> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_cache {
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0;
};



inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(hw_uint<32> & bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  bright_gauss_blur_3_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_12();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd1_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_7();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd2_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd3_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_11();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd4_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_6();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd5_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd6_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_10();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd7_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_5();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd8_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_laplace_diff_2_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 2 - d0 >= 0 && d1 >= 0 && 2 - d1 >= 0) ? (12) : (-3 + d0 == 0 && d1 >= 0 && 2 - d1 >= 0) ? (11) : (-3 + d1 == 0 && d0 >= 0 && 3 - d0 >= 0) ? ((9 - d0)) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_laplace_us_1_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0', d1'] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d0' <= 4 and -1 + d0 <= 2d0' <= d0 and 0 <= d1' <= 4 and -1 + d1 <= 2d1' <= d1 }
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 7 - d0 >= 0 && -6 + d1 >= 0 && 7 - d1 >= 0) ? ((9 - floord(d0, 2))) : ((-d1) % 2 == 0 && -6 + d0 >= 0 && 7 - d0 >= 0 && -2 + d1 >= 0 && 4 - d1 >= 0) ? (11) : ((-d1) % 2 == 0 && -6 + d0 >= 0 && 7 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (11) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 4 - d0 >= 0 && -2 + d1 >= 0 && 4 - d1 >= 0) ? (12) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 4 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (12) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 5 - d0 >= 0 && -2 + d1 >= 0 && 4 - d1 >= 0) ? (12) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 5 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (12) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 7 - d0 >= 0 && -2 + d1 >= 0 && 5 - d1 >= 0) ? ((14 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 7 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? ((14 - floord(d0, 2))) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

// # of bundles = 4
// bright_gauss_blur_3_update_0_read
//	bright_gauss_blur_3_rd0
//	bright_gauss_blur_3_rd1
//	bright_gauss_blur_3_rd2
//	bright_gauss_blur_3_rd3
//	bright_gauss_blur_3_rd4
//	bright_gauss_blur_3_rd5
//	bright_gauss_blur_3_rd6
//	bright_gauss_blur_3_rd7
//	bright_gauss_blur_3_rd8
inline hw_uint<288> bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_gauss_blur_3_rd0_res = bright_gauss_blur_3_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 288>(result, bright_gauss_blur_3_rd0_res);
	hw_uint<32>  bright_gauss_blur_3_rd1_res = bright_gauss_blur_3_rd1_select(bright_gauss_ds_2, d0, d1);
	set_at<32, 288>(result, bright_gauss_blur_3_rd1_res);
	hw_uint<32>  bright_gauss_blur_3_rd2_res = bright_gauss_blur_3_rd2_select(bright_gauss_ds_2, d0, d1);
	set_at<64, 288>(result, bright_gauss_blur_3_rd2_res);
	hw_uint<32>  bright_gauss_blur_3_rd3_res = bright_gauss_blur_3_rd3_select(bright_gauss_ds_2, d0, d1);
	set_at<96, 288>(result, bright_gauss_blur_3_rd3_res);
	hw_uint<32>  bright_gauss_blur_3_rd4_res = bright_gauss_blur_3_rd4_select(bright_gauss_ds_2, d0, d1);
	set_at<128, 288>(result, bright_gauss_blur_3_rd4_res);
	hw_uint<32>  bright_gauss_blur_3_rd5_res = bright_gauss_blur_3_rd5_select(bright_gauss_ds_2, d0, d1);
	set_at<160, 288>(result, bright_gauss_blur_3_rd5_res);
	hw_uint<32>  bright_gauss_blur_3_rd6_res = bright_gauss_blur_3_rd6_select(bright_gauss_ds_2, d0, d1);
	set_at<192, 288>(result, bright_gauss_blur_3_rd6_res);
	hw_uint<32>  bright_gauss_blur_3_rd7_res = bright_gauss_blur_3_rd7_select(bright_gauss_ds_2, d0, d1);
	set_at<224, 288>(result, bright_gauss_blur_3_rd7_res);
	hw_uint<32>  bright_gauss_blur_3_rd8_res = bright_gauss_blur_3_rd8_select(bright_gauss_ds_2, d0, d1);
	set_at<256, 288>(result, bright_gauss_blur_3_rd8_res);
	return result;
}

// bright_gauss_ds_2_update_0_write
//	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0
inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& bright_gauss_ds_2_update_0_write, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	hw_uint<32>  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res = bright_gauss_ds_2_update_0_write.extract<0, 31>();
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res, bright_gauss_ds_2, d0, d1);
}

// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<32> bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_read
//	bright_laplace_us_1_rd0
inline hw_uint<32> bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_us_1_rd0_res = bright_laplace_us_1_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, bright_laplace_us_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 2
	// # of read delays: 2
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_2_store[4];

#else
  hw_uint<32> * bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_gauss_ds_3_cache {
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_2_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_2;
};



inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(hw_uint<32> & bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_2.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  bright_laplace_us_2_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	// lexmax events: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3_update_0[d0', d1'] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -2 + d0 <= 2d0' <= d0 and -2 + d1 <= 2d1' <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 <= 2 and d1 <= 2 and 2d0' >= -1 + d0 and 2d1' >= -1 + d1) or ((1 + d1) mod 2 = 0 and d0 <= 2 and d1 > 0 and 2d0' >= -1 + d0 and 2d1' < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and d1 <= 2 and 2d0' < d0 and 2d1' >= -1 + d1)); bright_laplace_us_2_update_0[d0 = 3, d1] -> bright_gauss_ds_3_update_0[d0' = 1, d1'] : (1 + d1) mod 2 = 0 and 0 < d1 <= 3 and 0 <= d1' <= 1 and -2 + d1 <= 2d1' < d1 }
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 1 - d0 >= 0 && -1 + d1 >= 0 && 3 - d1 >= 0) ? (1) : 0);
	return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
}

inline hw_uint<32>  fused_level_3_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	// lexmax events: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
	auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_2.peek_0();
	return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
}

// # of bundles = 3
// bright_gauss_ds_3_update_0_write
//	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0
inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& bright_gauss_ds_3_update_0_write, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	hw_uint<32>  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res = bright_gauss_ds_3_update_0_write.extract<0, 31>();
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res, bright_gauss_ds_3, d0, d1);
}

// bright_laplace_us_2_update_0_read
//	bright_laplace_us_2_rd0
inline hw_uint<32> bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_us_2_rd0_res = bright_laplace_us_2_rd0_select(bright_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, bright_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<32> bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_3_rd0_res = fused_level_3_rd0_select(bright_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, fused_level_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_store[256];

#else
  hw_uint<32> * bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_diff_0_cache {
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(hw_uint<32> & bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0);
}

inline hw_uint<32>  fused_level_0_rd0_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	// lexmax events: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1.peek_0();
	return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_write
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0
inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& bright_laplace_diff_0_update_0_write, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	hw_uint<32>  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res = bright_laplace_diff_0_update_0_write.extract<0, 31>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res, bright_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<32> bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_0_rd0_res = fused_level_0_rd0_select(bright_laplace_diff_0, d0, d1);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_store[64];

#else
  hw_uint<32> * bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_diff_1_cache {
  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_cache bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1;
};



inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(hw_uint<32> & bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1.push(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0);
}

inline hw_uint<32>  fused_level_1_rd0_select(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	// lexmax events: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
	auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0 = bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1.peek_0();
	return value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_write
//	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0
inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(hw_uint<32>& bright_laplace_diff_1_update_0_write, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	hw_uint<32>  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res = bright_laplace_diff_1_update_0_write.extract<0, 31>();
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res, bright_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<32> bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_1_rd0_res = fused_level_1_rd0_select(bright_laplace_diff_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_store[16];

#else
  hw_uint<32> * bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_diff_2_cache {
  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_cache bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1;
};



inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(hw_uint<32> & bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
  bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1.push(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0);
}

inline hw_uint<32>  fused_level_2_rd0_select(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	// lexmax events: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
	auto value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0 = bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1.peek_0();
	return value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_write
//	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0
inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(hw_uint<32>& bright_laplace_diff_2_update_0_write, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	hw_uint<32>  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res = bright_laplace_diff_2_update_0_write.extract<0, 31>();
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res, bright_laplace_diff_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<32> bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_2_rd0_res = fused_level_2_rd0_select(bright_laplace_diff_2, d0, d1);
	set_at<0, 32>(result, fused_level_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_store[256];

#else
  hw_uint<32> * bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_us_0_cache {
  bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1;
};



inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(hw_uint<32> & bright_laplace_us_0_bright_laplace_us_0_update_0_write0, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write0);
}

inline hw_uint<32>  bright_laplace_diff_0_rd0_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1.peek_0();
	return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
inline hw_uint<32> bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright_laplace_us_0, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_0_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_write
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write0
inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(hw_uint<32>& bright_laplace_us_0_update_0_write, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	hw_uint<32>  bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res = bright_laplace_us_0_update_0_write.extract<0, 31>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res, bright_laplace_us_0, d0, d1);
}



#include "hw_classes.h"

struct bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_store[64];

#else
  hw_uint<32> * bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_us_1_cache {
  bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_cache bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1;
};



inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(hw_uint<32> & bright_laplace_us_1_bright_laplace_us_1_update_0_write0, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1.push(bright_laplace_us_1_bright_laplace_us_1_update_0_write0);
}

inline hw_uint<32>  bright_laplace_diff_1_rd0_select(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
	auto value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0 = bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1.peek_0();
	return value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<32> bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_laplace_us_1, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_write
//	bright_laplace_us_1_bright_laplace_us_1_update_0_write0
inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(hw_uint<32>& bright_laplace_us_1_update_0_write, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	hw_uint<32>  bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res = bright_laplace_us_1_update_0_write.extract<0, 31>();
	bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res, bright_laplace_us_1, d0, d1);
}



#include "hw_classes.h"

struct bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_store[16];

#else
  hw_uint<32> * bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_us_2_cache {
  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_cache bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1;
};



inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(hw_uint<32> & bright_laplace_us_2_bright_laplace_us_2_update_0_write0, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
  bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1.push(bright_laplace_us_2_bright_laplace_us_2_update_0_write0);
}

inline hw_uint<32>  bright_laplace_diff_2_rd0_select(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
	auto value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0 = bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1.peek_0();
	return value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<32> bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_laplace_us_2, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_2_update_0_write
//	bright_laplace_us_2_bright_laplace_us_2_update_0_write0
inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(hw_uint<32>& bright_laplace_us_2_update_0_write, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	hw_uint<32>  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res = bright_laplace_us_2_update_0_write.extract<0, 31>();
	bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res, bright_laplace_us_2, d0, d1);
}



#include "hw_classes.h"

struct bright_weights_bright_weights_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_bright_weights_update_0_write0_merged_banks_2_store[529];

#else
  hw_uint<32> * bright_weights_bright_weights_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_weights_bright_weights_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct bright_weights_cache {
  bright_weights_bright_weights_update_0_write0_merged_banks_2_cache bright_weights_bright_weights_update_0_write0_merged_banks_2;
};



inline void bright_weights_bright_weights_update_0_write0_write(hw_uint<32> & bright_weights_bright_weights_update_0_write0, bright_weights_cache& bright_weights, int d0, int d1) {
  bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.push(bright_weights_bright_weights_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
	// lexmax events: { bright_weights_normed_update_0[d0, d1] -> bright_weights_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
	return value_bright_weights_bright_weights_update_0_write0;
}

inline hw_uint<32>  weight_sums_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
	// lexmax events: { weight_sums_update_0[d0, d1] -> bright_weights_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
	return value_bright_weights_bright_weights_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
inline hw_uint<32> bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(bright_weights, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_rd0_res);
	return result;
}

// bright_weights_update_0_write
//	bright_weights_bright_weights_update_0_write0
inline void bright_weights_bright_weights_update_0_write_bundle_write(hw_uint<32>& bright_weights_update_0_write, bright_weights_cache& bright_weights, int d0, int d1) {
	hw_uint<32>  bright_weights_bright_weights_update_0_write0_res = bright_weights_update_0_write.extract<0, 31>();
	bright_weights_bright_weights_update_0_write0_write(bright_weights_bright_weights_update_0_write0_res, bright_weights, d0, d1);
}

// weight_sums_update_0_read
//	weight_sums_rd0
inline hw_uint<32> bright_weights_weight_sums_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  weight_sums_rd0_res = weight_sums_rd0_select(bright_weights, d0, d1);
	set_at<0, 32>(result, weight_sums_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 337
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_store[529];

#else
  hw_uint<32> * bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 23) capacity = 20
	fifo<hw_uint<32> , 20> f5;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [24, 25) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [25, 26) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [26, 46) capacity = 20
	fifo<hw_uint<32> , 20> f11;
	// Parition [46, 47) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [47, 48) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [48, 48] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_22() {
		return f5.back();
	}

	inline hw_uint<32>  peek_23() {
		return f6.back();
	}

	inline hw_uint<32>  peek_24() {
		return f8.back();
	}

	inline hw_uint<32>  peek_25() {
		return f10.back();
	}

	inline hw_uint<32>  peek_45() {
		return f11.back();
	}

	inline hw_uint<32>  peek_46() {
		return f12.back();
	}

	inline hw_uint<32>  peek_47() {
		return f14.back();
	}

	inline hw_uint<32>  peek_48() {
		return f16.back();
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
		if (offset == 22) {
			return f5.back();
		}
		if (offset == 23) {
			return f6.back();
		}
		if (offset == 24) {
			return f8.back();
		}
		if (offset == 25) {
			return f10.back();
		}
		if (offset == 45) {
			return f11.back();
		}
		if (offset == 46) {
			return f12.back();
		}
		if (offset == 47) {
			return f14.back();
		}
		if (offset == 48) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 337
	// # of read delays: 170
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_store[529];

#else
  hw_uint<32> * bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 337> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(336 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(73);
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(74);
	}

	inline hw_uint<32>  peek_75() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(75);
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(76);
	}

	inline hw_uint<32>  peek_77() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(77);
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(78);
	}

	inline hw_uint<32>  peek_79() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(79);
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(80);
	}

	inline hw_uint<32>  peek_81() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(81);
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(82);
	}

	inline hw_uint<32>  peek_83() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(83);
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(84);
	}

	inline hw_uint<32>  peek_85() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(85);
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(86);
	}

	inline hw_uint<32>  peek_87() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(87);
	}

	inline hw_uint<32>  peek_88() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(88);
	}

	inline hw_uint<32>  peek_89() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(89);
	}

	inline hw_uint<32>  peek_90() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(90);
	}

	inline hw_uint<32>  peek_91() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(91);
	}

	inline hw_uint<32>  peek_92() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(92);
	}

	inline hw_uint<32>  peek_93() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(93);
	}

	inline hw_uint<32>  peek_94() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(94);
	}

	inline hw_uint<32>  peek_95() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(95);
	}

	inline hw_uint<32>  peek_96() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(96);
	}

	inline hw_uint<32>  peek_97() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(97);
	}

	inline hw_uint<32>  peek_98() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(98);
	}

	inline hw_uint<32>  peek_99() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(99);
	}

	inline hw_uint<32>  peek_100() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(100);
	}

	inline hw_uint<32>  peek_101() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(101);
	}

	inline hw_uint<32>  peek_102() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(102);
	}

	inline hw_uint<32>  peek_103() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(103);
	}

	inline hw_uint<32>  peek_104() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(104);
	}

	inline hw_uint<32>  peek_105() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(105);
	}

	inline hw_uint<32>  peek_106() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(106);
	}

	inline hw_uint<32>  peek_107() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(107);
	}

	inline hw_uint<32>  peek_108() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(108);
	}

	inline hw_uint<32>  peek_109() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(109);
	}

	inline hw_uint<32>  peek_110() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(110);
	}

	inline hw_uint<32>  peek_111() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(111);
	}

	inline hw_uint<32>  peek_112() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(112);
	}

	inline hw_uint<32>  peek_113() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(113);
	}

	inline hw_uint<32>  peek_114() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(114);
	}

	inline hw_uint<32>  peek_115() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(115);
	}

	inline hw_uint<32>  peek_116() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(116);
	}

	inline hw_uint<32>  peek_117() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(117);
	}

	inline hw_uint<32>  peek_118() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(118);
	}

	inline hw_uint<32>  peek_119() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(119);
	}

	inline hw_uint<32>  peek_120() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(120);
	}

	inline hw_uint<32>  peek_121() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(121);
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(122);
	}

	inline hw_uint<32>  peek_123() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(123);
	}

	inline hw_uint<32>  peek_124() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(124);
	}

	inline hw_uint<32>  peek_125() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(125);
	}

	inline hw_uint<32>  peek_126() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(126);
	}

	inline hw_uint<32>  peek_127() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(127);
	}

	inline hw_uint<32>  peek_128() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(128);
	}

	inline hw_uint<32>  peek_129() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(129);
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(130);
	}

	inline hw_uint<32>  peek_131() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(131);
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(132);
	}

	inline hw_uint<32>  peek_133() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(133);
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(134);
	}

	inline hw_uint<32>  peek_135() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(135);
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(136);
	}

	inline hw_uint<32>  peek_137() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(137);
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(138);
	}

	inline hw_uint<32>  peek_139() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(139);
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(140);
	}

	inline hw_uint<32>  peek_141() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(141);
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(142);
	}

	inline hw_uint<32>  peek_143() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(143);
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(144);
	}

	inline hw_uint<32>  peek_145() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(145);
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(146);
	}

	inline hw_uint<32>  peek_147() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(147);
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(148);
	}

	inline hw_uint<32>  peek_149() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(149);
	}

	inline hw_uint<32>  peek_150() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(150);
	}

	inline hw_uint<32>  peek_151() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(151);
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(152);
	}

	inline hw_uint<32>  peek_153() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(153);
	}

	inline hw_uint<32>  peek_154() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(154);
	}

	inline hw_uint<32>  peek_155() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(155);
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(156);
	}

	inline hw_uint<32>  peek_157() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(157);
	}

	inline hw_uint<32>  peek_158() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(158);
	}

	inline hw_uint<32>  peek_159() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(159);
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(160);
	}

	inline hw_uint<32>  peek_161() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(161);
	}

	inline hw_uint<32>  peek_162() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(162);
	}

	inline hw_uint<32>  peek_163() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(163);
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(164);
	}

	inline hw_uint<32>  peek_165() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(165);
	}

	inline hw_uint<32>  peek_166() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(166);
	}

	inline hw_uint<32>  peek_167() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(167);
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(168);
	}

	inline hw_uint<32>  peek_169() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(169);
	}

	inline hw_uint<32>  peek_170() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(170);
	}

	inline hw_uint<32>  peek_171() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(171);
	}

	inline hw_uint<32>  peek_172() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(172);
	}

	inline hw_uint<32>  peek_173() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(173);
	}

	inline hw_uint<32>  peek_174() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(174);
	}

	inline hw_uint<32>  peek_175() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(175);
	}

	inline hw_uint<32>  peek_176() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(176);
	}

	inline hw_uint<32>  peek_177() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(177);
	}

	inline hw_uint<32>  peek_178() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(178);
	}

	inline hw_uint<32>  peek_179() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(179);
	}

	inline hw_uint<32>  peek_180() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(180);
	}

	inline hw_uint<32>  peek_181() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(181);
	}

	inline hw_uint<32>  peek_182() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(182);
	}

	inline hw_uint<32>  peek_183() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(183);
	}

	inline hw_uint<32>  peek_184() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(184);
	}

	inline hw_uint<32>  peek_185() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(185);
	}

	inline hw_uint<32>  peek_186() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(186);
	}

	inline hw_uint<32>  peek_187() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(187);
	}

	inline hw_uint<32>  peek_188() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(188);
	}

	inline hw_uint<32>  peek_189() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(189);
	}

	inline hw_uint<32>  peek_190() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(190);
	}

	inline hw_uint<32>  peek_191() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(191);
	}

	inline hw_uint<32>  peek_192() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(192);
	}

	inline hw_uint<32>  peek_193() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(193);
	}

	inline hw_uint<32>  peek_194() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(194);
	}

	inline hw_uint<32>  peek_195() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(195);
	}

	inline hw_uint<32>  peek_196() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(196);
	}

	inline hw_uint<32>  peek_197() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(197);
	}

	inline hw_uint<32>  peek_198() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(198);
	}

	inline hw_uint<32>  peek_199() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(199);
	}

	inline hw_uint<32>  peek_200() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(200);
	}

	inline hw_uint<32>  peek_201() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(201);
	}

	inline hw_uint<32>  peek_202() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(202);
	}

	inline hw_uint<32>  peek_203() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(203);
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(204);
	}

	inline hw_uint<32>  peek_205() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(205);
	}

	inline hw_uint<32>  peek_206() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(206);
	}

	inline hw_uint<32>  peek_207() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(207);
	}

	inline hw_uint<32>  peek_208() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(208);
	}

	inline hw_uint<32>  peek_209() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(209);
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(210);
	}

	inline hw_uint<32>  peek_211() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(211);
	}

	inline hw_uint<32>  peek_212() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(212);
	}

	inline hw_uint<32>  peek_213() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(213);
	}

	inline hw_uint<32>  peek_214() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(214);
	}

	inline hw_uint<32>  peek_215() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(215);
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(216);
	}

	inline hw_uint<32>  peek_217() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(217);
	}

	inline hw_uint<32>  peek_218() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(218);
	}

	inline hw_uint<32>  peek_219() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(219);
	}

	inline hw_uint<32>  peek_220() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(220);
	}

	inline hw_uint<32>  peek_221() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(221);
	}

	inline hw_uint<32>  peek_222() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(222);
	}

	inline hw_uint<32>  peek_223() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(223);
	}

	inline hw_uint<32>  peek_224() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(224);
	}

	inline hw_uint<32>  peek_225() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(225);
	}

	inline hw_uint<32>  peek_226() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(226);
	}

	inline hw_uint<32>  peek_227() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(227);
	}

	inline hw_uint<32>  peek_228() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(228);
	}

	inline hw_uint<32>  peek_229() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(229);
	}

	inline hw_uint<32>  peek_230() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(230);
	}

	inline hw_uint<32>  peek_231() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(231);
	}

	inline hw_uint<32>  peek_232() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(232);
	}

	inline hw_uint<32>  peek_233() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(233);
	}

	inline hw_uint<32>  peek_234() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(234);
	}

	inline hw_uint<32>  peek_235() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(235);
	}

	inline hw_uint<32>  peek_236() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(236);
	}

	inline hw_uint<32>  peek_237() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(237);
	}

	inline hw_uint<32>  peek_238() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(238);
	}

	inline hw_uint<32>  peek_239() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(239);
	}

	inline hw_uint<32>  peek_240() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(240);
	}

	inline hw_uint<32>  peek_241() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(241);
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(242);
	}

	inline hw_uint<32>  peek_243() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(243);
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(244);
	}

	inline hw_uint<32>  peek_245() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(245);
	}

	inline hw_uint<32>  peek_246() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(246);
	}

	inline hw_uint<32>  peek_247() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(247);
	}

	inline hw_uint<32>  peek_248() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(248);
	}

	inline hw_uint<32>  peek_249() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(249);
	}

	inline hw_uint<32>  peek_250() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(250);
	}

	inline hw_uint<32>  peek_251() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(251);
	}

	inline hw_uint<32>  peek_252() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(252);
	}

	inline hw_uint<32>  peek_253() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(253);
	}

	inline hw_uint<32>  peek_254() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(254);
	}

	inline hw_uint<32>  peek_255() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(255);
	}

	inline hw_uint<32>  peek_256() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(256);
	}

	inline hw_uint<32>  peek_257() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(257);
	}

	inline hw_uint<32>  peek_258() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(258);
	}

	inline hw_uint<32>  peek_259() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(259);
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(260);
	}

	inline hw_uint<32>  peek_261() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(261);
	}

	inline hw_uint<32>  peek_262() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(262);
	}

	inline hw_uint<32>  peek_263() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(263);
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(264);
	}

	inline hw_uint<32>  peek_265() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(265);
	}

	inline hw_uint<32>  peek_266() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(266);
	}

	inline hw_uint<32>  peek_267() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(267);
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(268);
	}

	inline hw_uint<32>  peek_269() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(269);
	}

	inline hw_uint<32>  peek_270() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(270);
	}

	inline hw_uint<32>  peek_271() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(271);
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(272);
	}

	inline hw_uint<32>  peek_273() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(273);
	}

	inline hw_uint<32>  peek_274() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(274);
	}

	inline hw_uint<32>  peek_275() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(275);
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(276);
	}

	inline hw_uint<32>  peek_277() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(277);
	}

	inline hw_uint<32>  peek_278() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(278);
	}

	inline hw_uint<32>  peek_279() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(279);
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(280);
	}

	inline hw_uint<32>  peek_281() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(281);
	}

	inline hw_uint<32>  peek_282() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(282);
	}

	inline hw_uint<32>  peek_283() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(283);
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(284);
	}

	inline hw_uint<32>  peek_285() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(285);
	}

	inline hw_uint<32>  peek_286() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(286);
	}

	inline hw_uint<32>  peek_287() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(287);
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(288);
	}

	inline hw_uint<32>  peek_289() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(289);
	}

	inline hw_uint<32>  peek_290() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(290);
	}

	inline hw_uint<32>  peek_291() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(291);
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(292);
	}

	inline hw_uint<32>  peek_293() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(293);
	}

	inline hw_uint<32>  peek_294() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(294);
	}

	inline hw_uint<32>  peek_295() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(295);
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(296);
	}

	inline hw_uint<32>  peek_297() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(297);
	}

	inline hw_uint<32>  peek_298() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(298);
	}

	inline hw_uint<32>  peek_299() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(299);
	}

	inline hw_uint<32>  peek_300() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(300);
	}

	inline hw_uint<32>  peek_301() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(301);
	}

	inline hw_uint<32>  peek_302() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(302);
	}

	inline hw_uint<32>  peek_303() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(303);
	}

	inline hw_uint<32>  peek_304() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(304);
	}

	inline hw_uint<32>  peek_305() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(305);
	}

	inline hw_uint<32>  peek_306() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(306);
	}

	inline hw_uint<32>  peek_307() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(307);
	}

	inline hw_uint<32>  peek_308() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(308);
	}

	inline hw_uint<32>  peek_309() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(309);
	}

	inline hw_uint<32>  peek_310() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(310);
	}

	inline hw_uint<32>  peek_311() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(311);
	}

	inline hw_uint<32>  peek_312() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(312);
	}

	inline hw_uint<32>  peek_313() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(313);
	}

	inline hw_uint<32>  peek_314() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(314);
	}

	inline hw_uint<32>  peek_315() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(315);
	}

	inline hw_uint<32>  peek_316() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(316);
	}

	inline hw_uint<32>  peek_317() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(317);
	}

	inline hw_uint<32>  peek_318() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(318);
	}

	inline hw_uint<32>  peek_319() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(319);
	}

	inline hw_uint<32>  peek_320() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(320);
	}

	inline hw_uint<32>  peek_321() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(321);
	}

	inline hw_uint<32>  peek_322() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(322);
	}

	inline hw_uint<32>  peek_323() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(323);
	}

	inline hw_uint<32>  peek_324() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(324);
	}

	inline hw_uint<32>  peek_325() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(325);
	}

	inline hw_uint<32>  peek_326() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(326);
	}

	inline hw_uint<32>  peek_327() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(327);
	}

	inline hw_uint<32>  peek_328() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(328);
	}

	inline hw_uint<32>  peek_329() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(329);
	}

	inline hw_uint<32>  peek_330() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(330);
	}

	inline hw_uint<32>  peek_331() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(331);
	}

	inline hw_uint<32>  peek_332() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(332);
	}

	inline hw_uint<32>  peek_333() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(333);
	}

	inline hw_uint<32>  peek_334() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(334);
	}

	inline hw_uint<32>  peek_335() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(335);
	}

	inline hw_uint<32>  peek_336() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(336);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_cache {
  bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_cache bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<32> & bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0.push(bright_weights_normed_bright_weights_normed_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_48();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_25();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_2();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_47();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_24();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_1();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_46();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_23();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_0();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  fused_level_0_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { fused_level_0_update_0[d0, d1] -> bright_weights_normed_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 15 - d0 >= 0 && -10 + d1 >= 0 && 15 - d1 >= 0) ? (((528 - d0) - 23 * d1)) : (-10 + d0 >= 0 && 15 - d0 >= 0 && d1 >= 0 && 8 - d1 >= 0) ? ((344 - d0)) : (d0 >= 0 && 8 - d0 >= 0 && d1 >= 0 && 8 - d1 >= 0) ? (336) : (-9 + d0 == 0 && d1 >= 0 && 8 - d1 >= 0) ? (335) : ((-9 + d1 == 0 && -10 + d0 >= 0 && 15 - d0 >= 0) || (-9 + d1 == 0 && d0 >= 0 && 9 - d0 >= 0)) ? ((321 - d0)) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_1_update_0_read
//	bright_weights_normed_gauss_blur_1_rd0
//	bright_weights_normed_gauss_blur_1_rd1
//	bright_weights_normed_gauss_blur_1_rd2
//	bright_weights_normed_gauss_blur_1_rd3
//	bright_weights_normed_gauss_blur_1_rd4
//	bright_weights_normed_gauss_blur_1_rd5
//	bright_weights_normed_gauss_blur_1_rd6
//	bright_weights_normed_gauss_blur_1_rd7
//	bright_weights_normed_gauss_blur_1_rd8
inline hw_uint<288> bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd0_res = bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 288>(result, bright_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd1_res = bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed, d0, d1);
	set_at<32, 288>(result, bright_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd2_res = bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed, d0, d1);
	set_at<64, 288>(result, bright_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd3_res = bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed, d0, d1);
	set_at<96, 288>(result, bright_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd4_res = bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed, d0, d1);
	set_at<128, 288>(result, bright_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd5_res = bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed, d0, d1);
	set_at<160, 288>(result, bright_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd6_res = bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed, d0, d1);
	set_at<192, 288>(result, bright_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd7_res = bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed, d0, d1);
	set_at<224, 288>(result, bright_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd8_res = bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed, d0, d1);
	set_at<256, 288>(result, bright_weights_normed_gauss_blur_1_rd8_res);
	return result;
}

// bright_weights_normed_update_0_write
//	bright_weights_normed_bright_weights_normed_update_0_write0
inline void bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_update_0_write, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_bright_weights_normed_update_0_write0_res = bright_weights_normed_update_0_write.extract<0, 31>();
	bright_weights_normed_bright_weights_normed_update_0_write0_write(bright_weights_normed_bright_weights_normed_update_0_write0_res, bright_weights_normed, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<32> bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_0_rd0_res = fused_level_0_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 20], [0, 20]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store[441];

#else
  hw_uint<32> * bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_blur_1_cache {
  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
	auto value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0 = bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek_0();
	return value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_1_update_0_write
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0
inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_blur_1_update_0_write, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res, bright_weights_normed_gauss_blur_1, d0, d1);
}

// bright_weights_normed_gauss_ds_1_update_0_read
//	bright_weights_normed_gauss_ds_1_rd0
inline hw_uint<32> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_gauss_ds_1_rd0_res = bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_gauss_ds_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 8], [0, 8]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store[81];

#else
  hw_uint<32> * bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_blur_2_cache {
  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
  bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
	auto value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0 = bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.peek_0();
	return value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_2_update_0_write
//	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0
inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_blur_2_update_0_write, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res = bright_weights_normed_gauss_blur_2_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res, bright_weights_normed_gauss_blur_2, d0, d1);
}

// bright_weights_normed_gauss_ds_2_update_0_read
//	bright_weights_normed_gauss_ds_2_rd0
inline hw_uint<32> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_gauss_ds_2_rd0_res = bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_gauss_ds_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store[9];

#else
  hw_uint<32> * bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_blur_3_cache {
  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
  bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
	auto value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0 = bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.peek_0();
	return value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_3_update_0_write
//	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0
inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_blur_3_update_0_write, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res = bright_weights_normed_gauss_blur_3_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res, bright_weights_normed_gauss_blur_3, d0, d1);
}

// bright_weights_normed_gauss_ds_3_update_0_read
//	bright_weights_normed_gauss_ds_3_rd0
inline hw_uint<32> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_gauss_ds_3_rd0_res = bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_gauss_ds_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 73
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store[121];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 11) capacity = 8
	fifo<hw_uint<32> , 8> f5;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [12, 13) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [13, 14) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [14, 22) capacity = 8
	fifo<hw_uint<32> , 8> f11;
	// Parition [22, 23) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [24, 24] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_10() {
		return f5.back();
	}

	inline hw_uint<32>  peek_11() {
		return f6.back();
	}

	inline hw_uint<32>  peek_12() {
		return f8.back();
	}

	inline hw_uint<32>  peek_13() {
		return f10.back();
	}

	inline hw_uint<32>  peek_21() {
		return f11.back();
	}

	inline hw_uint<32>  peek_22() {
		return f12.back();
	}

	inline hw_uint<32>  peek_23() {
		return f14.back();
	}

	inline hw_uint<32>  peek_24() {
		return f16.back();
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
		if (offset == 10) {
			return f5.back();
		}
		if (offset == 11) {
			return f6.back();
		}
		if (offset == 12) {
			return f8.back();
		}
		if (offset == 13) {
			return f10.back();
		}
		if (offset == 21) {
			return f11.back();
		}
		if (offset == 22) {
			return f12.back();
		}
		if (offset == 23) {
			return f14.back();
		}
		if (offset == 24) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 73
	// # of read delays: 38
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store[121];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 73> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(72 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_1_cache {
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9;
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_24();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_13();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_23();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_12();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_22();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_11();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 7 - d0 >= 0 && -6 + d1 >= 0 && 7 - d1 >= 0) ? (((120 - d0) - 11 * d1)) : (-6 + d0 >= 0 && 7 - d0 >= 0 && d1 >= 0 && 4 - d1 >= 0) ? ((76 - d0)) : (d0 >= 0 && 4 - d0 >= 0 && d1 >= 0 && 4 - d1 >= 0) ? (72) : (-5 + d0 == 0 && d1 >= 0 && 4 - d1 >= 0) ? (71) : ((-5 + d1 == 0 && -6 + d0 >= 0 && 7 - d0 >= 0) || (-5 + d1 == 0 && d0 >= 0 && 5 - d0 >= 0)) ? ((65 - d0)) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_2_update_0_read
//	bright_weights_normed_gauss_blur_2_rd0
//	bright_weights_normed_gauss_blur_2_rd1
//	bright_weights_normed_gauss_blur_2_rd2
//	bright_weights_normed_gauss_blur_2_rd3
//	bright_weights_normed_gauss_blur_2_rd4
//	bright_weights_normed_gauss_blur_2_rd5
//	bright_weights_normed_gauss_blur_2_rd6
//	bright_weights_normed_gauss_blur_2_rd7
//	bright_weights_normed_gauss_blur_2_rd8
inline hw_uint<288> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd0_res = bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, bright_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd1_res = bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, bright_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd2_res = bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, bright_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd3_res = bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, bright_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd4_res = bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, bright_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd5_res = bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, bright_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd6_res = bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, bright_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd7_res = bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, bright_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd8_res = bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, bright_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_1_update_0_write
//	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0
inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_ds_1_update_0_write, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res = bright_weights_normed_gauss_ds_1_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res, bright_weights_normed_gauss_ds_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<32> bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_1_rd0_res = fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store[25];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 5) capacity = 2
	fifo<hw_uint<32> , 2> f5;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [8, 10) capacity = 2
	fifo<hw_uint<32> , 2> f11;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [12, 12] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_4() {
		return f5.back();
	}

	inline hw_uint<32>  peek_5() {
		return f6.back();
	}

	inline hw_uint<32>  peek_6() {
		return f8.back();
	}

	inline hw_uint<32>  peek_7() {
		return f10.back();
	}

	inline hw_uint<32>  peek_9() {
		return f11.back();
	}

	inline hw_uint<32>  peek_10() {
		return f12.back();
	}

	inline hw_uint<32>  peek_11() {
		return f14.back();
	}

	inline hw_uint<32>  peek_12() {
		return f16.back();
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
		if (offset == 4) {
			return f5.back();
		}
		if (offset == 5) {
			return f6.back();
		}
		if (offset == 6) {
			return f8.back();
		}
		if (offset == 7) {
			return f10.back();
		}
		if (offset == 9) {
			return f11.back();
		}
		if (offset == 10) {
			return f12.back();
		}
		if (offset == 11) {
			return f14.back();
		}
		if (offset == 12) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 8
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store[25];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 13> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(12 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_cache {
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
};



inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_12();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_7();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_11();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_6();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_10();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_5();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 2 - d0 >= 0 && d1 >= 0 && 2 - d1 >= 0) ? (12) : (-3 + d0 == 0 && d1 >= 0 && 2 - d1 >= 0) ? (11) : (-3 + d1 == 0 && d0 >= 0 && 3 - d0 >= 0) ? ((9 - d0)) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_3_update_0_read
//	bright_weights_normed_gauss_blur_3_rd0
//	bright_weights_normed_gauss_blur_3_rd1
//	bright_weights_normed_gauss_blur_3_rd2
//	bright_weights_normed_gauss_blur_3_rd3
//	bright_weights_normed_gauss_blur_3_rd4
//	bright_weights_normed_gauss_blur_3_rd5
//	bright_weights_normed_gauss_blur_3_rd6
//	bright_weights_normed_gauss_blur_3_rd7
//	bright_weights_normed_gauss_blur_3_rd8
inline hw_uint<288> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd0_res = bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 288>(result, bright_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd1_res = bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<32, 288>(result, bright_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd2_res = bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<64, 288>(result, bright_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd3_res = bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<96, 288>(result, bright_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd4_res = bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<128, 288>(result, bright_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd5_res = bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<160, 288>(result, bright_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd6_res = bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<192, 288>(result, bright_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd7_res = bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<224, 288>(result, bright_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd8_res = bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<256, 288>(result, bright_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_2_update_0_write
//	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0
inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_ds_2_update_0_write, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res = bright_weights_normed_gauss_ds_2_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res, bright_weights_normed_gauss_ds_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<32> bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_2_rd0_res = fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, fused_level_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store[4];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_3_cache {
  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	// lexmax events: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
	auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek_0();
	return value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0;
}

// # of bundles = 2
// bright_weights_normed_gauss_ds_3_update_0_write
//	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0
inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_ds_3_update_0_write, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res = bright_weights_normed_gauss_ds_3_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res, bright_weights_normed_gauss_ds_3, d0, d1);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<32> bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_3_rd0_res = fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, fused_level_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_dark_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 337
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_dark_update_0_write0_merged_banks_10_store[529];

#else
  hw_uint<32> * dark_dark_update_0_write0_merged_banks_10_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 23) capacity = 20
	fifo<hw_uint<32> , 20> f5;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [24, 25) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [25, 26) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [26, 46) capacity = 20
	fifo<hw_uint<32> , 20> f11;
	// Parition [46, 47) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [47, 48) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [48, 48] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_22() {
		return f5.back();
	}

	inline hw_uint<32>  peek_23() {
		return f6.back();
	}

	inline hw_uint<32>  peek_24() {
		return f8.back();
	}

	inline hw_uint<32>  peek_25() {
		return f10.back();
	}

	inline hw_uint<32>  peek_45() {
		return f11.back();
	}

	inline hw_uint<32>  peek_46() {
		return f12.back();
	}

	inline hw_uint<32>  peek_47() {
		return f14.back();
	}

	inline hw_uint<32>  peek_48() {
		return f16.back();
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
		if (offset == 22) {
			return f5.back();
		}
		if (offset == 23) {
			return f6.back();
		}
		if (offset == 24) {
			return f8.back();
		}
		if (offset == 25) {
			return f10.back();
		}
		if (offset == 45) {
			return f11.back();
		}
		if (offset == 46) {
			return f12.back();
		}
		if (offset == 47) {
			return f14.back();
		}
		if (offset == 48) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_dark_update_0_write0_merged_banks_10: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 337
	// # of read delays: 170
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_store[529];

#else
  hw_uint<32> * dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 337> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(336 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(73);
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(74);
	}

	inline hw_uint<32>  peek_75() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(75);
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(76);
	}

	inline hw_uint<32>  peek_77() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(77);
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(78);
	}

	inline hw_uint<32>  peek_79() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(79);
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(80);
	}

	inline hw_uint<32>  peek_81() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(81);
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(82);
	}

	inline hw_uint<32>  peek_83() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(83);
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(84);
	}

	inline hw_uint<32>  peek_85() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(85);
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(86);
	}

	inline hw_uint<32>  peek_87() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(87);
	}

	inline hw_uint<32>  peek_88() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(88);
	}

	inline hw_uint<32>  peek_89() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(89);
	}

	inline hw_uint<32>  peek_90() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(90);
	}

	inline hw_uint<32>  peek_91() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(91);
	}

	inline hw_uint<32>  peek_92() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(92);
	}

	inline hw_uint<32>  peek_93() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(93);
	}

	inline hw_uint<32>  peek_94() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(94);
	}

	inline hw_uint<32>  peek_95() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(95);
	}

	inline hw_uint<32>  peek_96() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(96);
	}

	inline hw_uint<32>  peek_97() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(97);
	}

	inline hw_uint<32>  peek_98() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(98);
	}

	inline hw_uint<32>  peek_99() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(99);
	}

	inline hw_uint<32>  peek_100() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(100);
	}

	inline hw_uint<32>  peek_101() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(101);
	}

	inline hw_uint<32>  peek_102() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(102);
	}

	inline hw_uint<32>  peek_103() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(103);
	}

	inline hw_uint<32>  peek_104() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(104);
	}

	inline hw_uint<32>  peek_105() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(105);
	}

	inline hw_uint<32>  peek_106() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(106);
	}

	inline hw_uint<32>  peek_107() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(107);
	}

	inline hw_uint<32>  peek_108() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(108);
	}

	inline hw_uint<32>  peek_109() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(109);
	}

	inline hw_uint<32>  peek_110() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(110);
	}

	inline hw_uint<32>  peek_111() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(111);
	}

	inline hw_uint<32>  peek_112() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(112);
	}

	inline hw_uint<32>  peek_113() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(113);
	}

	inline hw_uint<32>  peek_114() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(114);
	}

	inline hw_uint<32>  peek_115() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(115);
	}

	inline hw_uint<32>  peek_116() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(116);
	}

	inline hw_uint<32>  peek_117() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(117);
	}

	inline hw_uint<32>  peek_118() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(118);
	}

	inline hw_uint<32>  peek_119() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(119);
	}

	inline hw_uint<32>  peek_120() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(120);
	}

	inline hw_uint<32>  peek_121() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(121);
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(122);
	}

	inline hw_uint<32>  peek_123() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(123);
	}

	inline hw_uint<32>  peek_124() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(124);
	}

	inline hw_uint<32>  peek_125() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(125);
	}

	inline hw_uint<32>  peek_126() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(126);
	}

	inline hw_uint<32>  peek_127() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(127);
	}

	inline hw_uint<32>  peek_128() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(128);
	}

	inline hw_uint<32>  peek_129() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(129);
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(130);
	}

	inline hw_uint<32>  peek_131() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(131);
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(132);
	}

	inline hw_uint<32>  peek_133() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(133);
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(134);
	}

	inline hw_uint<32>  peek_135() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(135);
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(136);
	}

	inline hw_uint<32>  peek_137() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(137);
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(138);
	}

	inline hw_uint<32>  peek_139() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(139);
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(140);
	}

	inline hw_uint<32>  peek_141() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(141);
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(142);
	}

	inline hw_uint<32>  peek_143() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(143);
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(144);
	}

	inline hw_uint<32>  peek_145() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(145);
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(146);
	}

	inline hw_uint<32>  peek_147() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(147);
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(148);
	}

	inline hw_uint<32>  peek_149() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(149);
	}

	inline hw_uint<32>  peek_150() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(150);
	}

	inline hw_uint<32>  peek_151() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(151);
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(152);
	}

	inline hw_uint<32>  peek_153() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(153);
	}

	inline hw_uint<32>  peek_154() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(154);
	}

	inline hw_uint<32>  peek_155() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(155);
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(156);
	}

	inline hw_uint<32>  peek_157() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(157);
	}

	inline hw_uint<32>  peek_158() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(158);
	}

	inline hw_uint<32>  peek_159() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(159);
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(160);
	}

	inline hw_uint<32>  peek_161() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(161);
	}

	inline hw_uint<32>  peek_162() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(162);
	}

	inline hw_uint<32>  peek_163() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(163);
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(164);
	}

	inline hw_uint<32>  peek_165() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(165);
	}

	inline hw_uint<32>  peek_166() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(166);
	}

	inline hw_uint<32>  peek_167() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(167);
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(168);
	}

	inline hw_uint<32>  peek_169() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(169);
	}

	inline hw_uint<32>  peek_170() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(170);
	}

	inline hw_uint<32>  peek_171() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(171);
	}

	inline hw_uint<32>  peek_172() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(172);
	}

	inline hw_uint<32>  peek_173() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(173);
	}

	inline hw_uint<32>  peek_174() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(174);
	}

	inline hw_uint<32>  peek_175() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(175);
	}

	inline hw_uint<32>  peek_176() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(176);
	}

	inline hw_uint<32>  peek_177() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(177);
	}

	inline hw_uint<32>  peek_178() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(178);
	}

	inline hw_uint<32>  peek_179() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(179);
	}

	inline hw_uint<32>  peek_180() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(180);
	}

	inline hw_uint<32>  peek_181() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(181);
	}

	inline hw_uint<32>  peek_182() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(182);
	}

	inline hw_uint<32>  peek_183() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(183);
	}

	inline hw_uint<32>  peek_184() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(184);
	}

	inline hw_uint<32>  peek_185() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(185);
	}

	inline hw_uint<32>  peek_186() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(186);
	}

	inline hw_uint<32>  peek_187() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(187);
	}

	inline hw_uint<32>  peek_188() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(188);
	}

	inline hw_uint<32>  peek_189() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(189);
	}

	inline hw_uint<32>  peek_190() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(190);
	}

	inline hw_uint<32>  peek_191() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(191);
	}

	inline hw_uint<32>  peek_192() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(192);
	}

	inline hw_uint<32>  peek_193() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(193);
	}

	inline hw_uint<32>  peek_194() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(194);
	}

	inline hw_uint<32>  peek_195() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(195);
	}

	inline hw_uint<32>  peek_196() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(196);
	}

	inline hw_uint<32>  peek_197() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(197);
	}

	inline hw_uint<32>  peek_198() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(198);
	}

	inline hw_uint<32>  peek_199() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(199);
	}

	inline hw_uint<32>  peek_200() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(200);
	}

	inline hw_uint<32>  peek_201() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(201);
	}

	inline hw_uint<32>  peek_202() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(202);
	}

	inline hw_uint<32>  peek_203() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(203);
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(204);
	}

	inline hw_uint<32>  peek_205() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(205);
	}

	inline hw_uint<32>  peek_206() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(206);
	}

	inline hw_uint<32>  peek_207() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(207);
	}

	inline hw_uint<32>  peek_208() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(208);
	}

	inline hw_uint<32>  peek_209() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(209);
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(210);
	}

	inline hw_uint<32>  peek_211() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(211);
	}

	inline hw_uint<32>  peek_212() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(212);
	}

	inline hw_uint<32>  peek_213() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(213);
	}

	inline hw_uint<32>  peek_214() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(214);
	}

	inline hw_uint<32>  peek_215() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(215);
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(216);
	}

	inline hw_uint<32>  peek_217() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(217);
	}

	inline hw_uint<32>  peek_218() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(218);
	}

	inline hw_uint<32>  peek_219() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(219);
	}

	inline hw_uint<32>  peek_220() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(220);
	}

	inline hw_uint<32>  peek_221() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(221);
	}

	inline hw_uint<32>  peek_222() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(222);
	}

	inline hw_uint<32>  peek_223() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(223);
	}

	inline hw_uint<32>  peek_224() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(224);
	}

	inline hw_uint<32>  peek_225() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(225);
	}

	inline hw_uint<32>  peek_226() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(226);
	}

	inline hw_uint<32>  peek_227() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(227);
	}

	inline hw_uint<32>  peek_228() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(228);
	}

	inline hw_uint<32>  peek_229() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(229);
	}

	inline hw_uint<32>  peek_230() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(230);
	}

	inline hw_uint<32>  peek_231() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(231);
	}

	inline hw_uint<32>  peek_232() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(232);
	}

	inline hw_uint<32>  peek_233() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(233);
	}

	inline hw_uint<32>  peek_234() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(234);
	}

	inline hw_uint<32>  peek_235() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(235);
	}

	inline hw_uint<32>  peek_236() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(236);
	}

	inline hw_uint<32>  peek_237() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(237);
	}

	inline hw_uint<32>  peek_238() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(238);
	}

	inline hw_uint<32>  peek_239() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(239);
	}

	inline hw_uint<32>  peek_240() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(240);
	}

	inline hw_uint<32>  peek_241() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(241);
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(242);
	}

	inline hw_uint<32>  peek_243() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(243);
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(244);
	}

	inline hw_uint<32>  peek_245() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(245);
	}

	inline hw_uint<32>  peek_246() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(246);
	}

	inline hw_uint<32>  peek_247() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(247);
	}

	inline hw_uint<32>  peek_248() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(248);
	}

	inline hw_uint<32>  peek_249() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(249);
	}

	inline hw_uint<32>  peek_250() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(250);
	}

	inline hw_uint<32>  peek_251() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(251);
	}

	inline hw_uint<32>  peek_252() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(252);
	}

	inline hw_uint<32>  peek_253() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(253);
	}

	inline hw_uint<32>  peek_254() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(254);
	}

	inline hw_uint<32>  peek_255() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(255);
	}

	inline hw_uint<32>  peek_256() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(256);
	}

	inline hw_uint<32>  peek_257() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(257);
	}

	inline hw_uint<32>  peek_258() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(258);
	}

	inline hw_uint<32>  peek_259() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(259);
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(260);
	}

	inline hw_uint<32>  peek_261() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(261);
	}

	inline hw_uint<32>  peek_262() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(262);
	}

	inline hw_uint<32>  peek_263() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(263);
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(264);
	}

	inline hw_uint<32>  peek_265() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(265);
	}

	inline hw_uint<32>  peek_266() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(266);
	}

	inline hw_uint<32>  peek_267() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(267);
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(268);
	}

	inline hw_uint<32>  peek_269() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(269);
	}

	inline hw_uint<32>  peek_270() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(270);
	}

	inline hw_uint<32>  peek_271() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(271);
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(272);
	}

	inline hw_uint<32>  peek_273() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(273);
	}

	inline hw_uint<32>  peek_274() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(274);
	}

	inline hw_uint<32>  peek_275() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(275);
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(276);
	}

	inline hw_uint<32>  peek_277() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(277);
	}

	inline hw_uint<32>  peek_278() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(278);
	}

	inline hw_uint<32>  peek_279() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(279);
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(280);
	}

	inline hw_uint<32>  peek_281() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(281);
	}

	inline hw_uint<32>  peek_282() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(282);
	}

	inline hw_uint<32>  peek_283() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(283);
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(284);
	}

	inline hw_uint<32>  peek_285() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(285);
	}

	inline hw_uint<32>  peek_286() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(286);
	}

	inline hw_uint<32>  peek_287() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(287);
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(288);
	}

	inline hw_uint<32>  peek_289() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(289);
	}

	inline hw_uint<32>  peek_290() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(290);
	}

	inline hw_uint<32>  peek_291() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(291);
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(292);
	}

	inline hw_uint<32>  peek_293() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(293);
	}

	inline hw_uint<32>  peek_294() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(294);
	}

	inline hw_uint<32>  peek_295() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(295);
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(296);
	}

	inline hw_uint<32>  peek_297() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(297);
	}

	inline hw_uint<32>  peek_298() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(298);
	}

	inline hw_uint<32>  peek_299() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(299);
	}

	inline hw_uint<32>  peek_300() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(300);
	}

	inline hw_uint<32>  peek_301() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(301);
	}

	inline hw_uint<32>  peek_302() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(302);
	}

	inline hw_uint<32>  peek_303() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(303);
	}

	inline hw_uint<32>  peek_304() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(304);
	}

	inline hw_uint<32>  peek_305() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(305);
	}

	inline hw_uint<32>  peek_306() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(306);
	}

	inline hw_uint<32>  peek_307() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(307);
	}

	inline hw_uint<32>  peek_308() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(308);
	}

	inline hw_uint<32>  peek_309() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(309);
	}

	inline hw_uint<32>  peek_310() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(310);
	}

	inline hw_uint<32>  peek_311() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(311);
	}

	inline hw_uint<32>  peek_312() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(312);
	}

	inline hw_uint<32>  peek_313() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(313);
	}

	inline hw_uint<32>  peek_314() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(314);
	}

	inline hw_uint<32>  peek_315() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(315);
	}

	inline hw_uint<32>  peek_316() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(316);
	}

	inline hw_uint<32>  peek_317() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(317);
	}

	inline hw_uint<32>  peek_318() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(318);
	}

	inline hw_uint<32>  peek_319() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(319);
	}

	inline hw_uint<32>  peek_320() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(320);
	}

	inline hw_uint<32>  peek_321() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(321);
	}

	inline hw_uint<32>  peek_322() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(322);
	}

	inline hw_uint<32>  peek_323() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(323);
	}

	inline hw_uint<32>  peek_324() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(324);
	}

	inline hw_uint<32>  peek_325() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(325);
	}

	inline hw_uint<32>  peek_326() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(326);
	}

	inline hw_uint<32>  peek_327() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(327);
	}

	inline hw_uint<32>  peek_328() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(328);
	}

	inline hw_uint<32>  peek_329() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(329);
	}

	inline hw_uint<32>  peek_330() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(330);
	}

	inline hw_uint<32>  peek_331() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(331);
	}

	inline hw_uint<32>  peek_332() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(332);
	}

	inline hw_uint<32>  peek_333() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(333);
	}

	inline hw_uint<32>  peek_334() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(334);
	}

	inline hw_uint<32>  peek_335() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(335);
	}

	inline hw_uint<32>  peek_336() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(336);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_cache {
  dark_dark_update_0_write0_merged_banks_10_cache dark_dark_update_0_write0_merged_banks_10;
  dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_cache dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0;
};



inline void dark_dark_update_0_write0_write(hw_uint<32> & dark_dark_update_0_write0, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write0_merged_banks_10.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0.push(dark_dark_update_0_write0);
}

inline hw_uint<32>  dark_gauss_blur_1_rd0_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_48();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd1_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_25();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd2_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_2();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd3_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_47();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd4_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_24();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd5_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_1();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd6_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_46();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd7_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_23();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd8_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_0();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_laplace_diff_0_rd0_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_0_update_0[d0, d1] -> dark_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 15 - d0 >= 0 && -10 + d1 >= 0 && 15 - d1 >= 0) ? (((528 - d0) - 23 * d1)) : (-10 + d0 >= 0 && 15 - d0 >= 0 && d1 >= 0 && 8 - d1 >= 0) ? ((344 - d0)) : (d0 >= 0 && 8 - d0 >= 0 && d1 >= 0 && 8 - d1 >= 0) ? (336) : (-9 + d0 == 0 && d1 >= 0 && 8 - d1 >= 0) ? (335) : ((-9 + d1 == 0 && -10 + d0 >= 0 && 15 - d0 >= 0) || (-9 + d1 == 0 && d0 >= 0 && 9 - d0 >= 0)) ? ((321 - d0)) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_weights_rd0_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_weights_update_0[d0, d1] -> dark_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_0();
	return value_dark_dark_update_0_write0;
}

// # of bundles = 4
// dark_gauss_blur_1_update_0_read
//	dark_gauss_blur_1_rd0
//	dark_gauss_blur_1_rd1
//	dark_gauss_blur_1_rd2
//	dark_gauss_blur_1_rd3
//	dark_gauss_blur_1_rd4
//	dark_gauss_blur_1_rd5
//	dark_gauss_blur_1_rd6
//	dark_gauss_blur_1_rd7
//	dark_gauss_blur_1_rd8
inline hw_uint<288> dark_dark_gauss_blur_1_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_gauss_blur_1_rd0_res = dark_gauss_blur_1_rd0_select(dark, d0, d1);
	set_at<0, 288>(result, dark_gauss_blur_1_rd0_res);
	hw_uint<32>  dark_gauss_blur_1_rd1_res = dark_gauss_blur_1_rd1_select(dark, d0, d1);
	set_at<32, 288>(result, dark_gauss_blur_1_rd1_res);
	hw_uint<32>  dark_gauss_blur_1_rd2_res = dark_gauss_blur_1_rd2_select(dark, d0, d1);
	set_at<64, 288>(result, dark_gauss_blur_1_rd2_res);
	hw_uint<32>  dark_gauss_blur_1_rd3_res = dark_gauss_blur_1_rd3_select(dark, d0, d1);
	set_at<96, 288>(result, dark_gauss_blur_1_rd3_res);
	hw_uint<32>  dark_gauss_blur_1_rd4_res = dark_gauss_blur_1_rd4_select(dark, d0, d1);
	set_at<128, 288>(result, dark_gauss_blur_1_rd4_res);
	hw_uint<32>  dark_gauss_blur_1_rd5_res = dark_gauss_blur_1_rd5_select(dark, d0, d1);
	set_at<160, 288>(result, dark_gauss_blur_1_rd5_res);
	hw_uint<32>  dark_gauss_blur_1_rd6_res = dark_gauss_blur_1_rd6_select(dark, d0, d1);
	set_at<192, 288>(result, dark_gauss_blur_1_rd6_res);
	hw_uint<32>  dark_gauss_blur_1_rd7_res = dark_gauss_blur_1_rd7_select(dark, d0, d1);
	set_at<224, 288>(result, dark_gauss_blur_1_rd7_res);
	hw_uint<32>  dark_gauss_blur_1_rd8_res = dark_gauss_blur_1_rd8_select(dark, d0, d1);
	set_at<256, 288>(result, dark_gauss_blur_1_rd8_res);
	return result;
}

// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
inline hw_uint<32> dark_dark_laplace_diff_0_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_0_rd0_res);
	return result;
}

// dark_update_0_write
//	dark_dark_update_0_write0
inline void dark_dark_update_0_write_bundle_write(hw_uint<32>& dark_update_0_write, dark_cache& dark, int d0, int d1) {
	hw_uint<32>  dark_dark_update_0_write0_res = dark_update_0_write.extract<0, 31>();
	dark_dark_update_0_write0_write(dark_dark_update_0_write0_res, dark, d0, d1);
}

// dark_weights_update_0_read
//	dark_weights_rd0
inline hw_uint<32> dark_dark_weights_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_rd0_res = dark_weights_rd0_select(dark, d0, d1);
	set_at<0, 32>(result, dark_weights_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 20], [0, 20]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_store[441];

#else
  hw_uint<32> * dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_blur_1_cache {
  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_cache dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(hw_uint<32> & dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1.push(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0);
}

inline hw_uint<32>  dark_gauss_ds_1_rd0_select(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	// lexmax events: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
	auto value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0 = dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1.peek_0();
	return value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0;
}

// # of bundles = 2
// dark_gauss_blur_1_update_0_write
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0
inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& dark_gauss_blur_1_update_0_write, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	hw_uint<32>  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res = dark_gauss_blur_1_update_0_write.extract<0, 31>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res, dark_gauss_blur_1, d0, d1);
}

// dark_gauss_ds_1_update_0_read
//	dark_gauss_ds_1_rd0
inline hw_uint<32> dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_gauss_ds_1_rd0_res = dark_gauss_ds_1_rd0_select(dark_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, dark_gauss_ds_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 8], [0, 8]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_store[81];

#else
  hw_uint<32> * dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_blur_2_cache {
  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_cache dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(hw_uint<32> & dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
  dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1.push(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0);
}

inline hw_uint<32>  dark_gauss_ds_2_rd0_select(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	// lexmax events: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
	auto value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0 = dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1.peek_0();
	return value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0;
}

// # of bundles = 2
// dark_gauss_blur_2_update_0_write
//	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0
inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& dark_gauss_blur_2_update_0_write, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	hw_uint<32>  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res = dark_gauss_blur_2_update_0_write.extract<0, 31>();
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res, dark_gauss_blur_2, d0, d1);
}

// dark_gauss_ds_2_update_0_read
//	dark_gauss_ds_2_rd0
inline hw_uint<32> dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_gauss_ds_2_rd0_res = dark_gauss_ds_2_rd0_select(dark_gauss_blur_2, d0, d1);
	set_at<0, 32>(result, dark_gauss_ds_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_store[9];

#else
  hw_uint<32> * dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_blur_3_cache {
  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_cache dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(hw_uint<32> & dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
  dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1.push(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0);
}

inline hw_uint<32>  dark_gauss_ds_3_rd0_select(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	// lexmax events: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
	auto value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0 = dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1.peek_0();
	return value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0;
}

// # of bundles = 2
// dark_gauss_blur_3_update_0_write
//	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0
inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& dark_gauss_blur_3_update_0_write, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	hw_uint<32>  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res = dark_gauss_blur_3_update_0_write.extract<0, 31>();
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res, dark_gauss_blur_3, d0, d1);
}

// dark_gauss_ds_3_update_0_read
//	dark_gauss_ds_3_rd0
inline hw_uint<32> dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_gauss_ds_3_rd0_res = dark_gauss_ds_3_rd0_select(dark_gauss_blur_3, d0, d1);
	set_at<0, 32>(result, dark_gauss_ds_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 77
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_store[121];

#else
  hw_uint<32> * dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 11) capacity = 8
	fifo<hw_uint<32> , 8> f5;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [12, 13) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [13, 14) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [14, 22) capacity = 8
	fifo<hw_uint<32> , 8> f11;
	// Parition [22, 23) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [24, 24] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_10() {
		return f5.back();
	}

	inline hw_uint<32>  peek_11() {
		return f6.back();
	}

	inline hw_uint<32>  peek_12() {
		return f8.back();
	}

	inline hw_uint<32>  peek_13() {
		return f10.back();
	}

	inline hw_uint<32>  peek_21() {
		return f11.back();
	}

	inline hw_uint<32>  peek_22() {
		return f12.back();
	}

	inline hw_uint<32>  peek_23() {
		return f14.back();
	}

	inline hw_uint<32>  peek_24() {
		return f16.back();
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
		if (offset == 10) {
			return f5.back();
		}
		if (offset == 11) {
			return f6.back();
		}
		if (offset == 12) {
			return f8.back();
		}
		if (offset == 13) {
			return f10.back();
		}
		if (offset == 21) {
			return f11.back();
		}
		if (offset == 22) {
			return f12.back();
		}
		if (offset == 23) {
			return f14.back();
		}
		if (offset == 24) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 77
	// # of read delays: 38
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_store[121];

#else
  hw_uint<32> * dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 77> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(76 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(73);
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(74);
	}

	inline hw_uint<32>  peek_75() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(75);
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(76);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 77
	// # of read delays: 48
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_store[121];

#else
  hw_uint<32> * dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 77> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(76 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(73);
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(74);
	}

	inline hw_uint<32>  peek_75() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(75);
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(76);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_cache {
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0;
};



inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(hw_uint<32> & dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  dark_gauss_blur_2_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_24();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_13();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd2_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd3_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_23();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd4_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_12();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd5_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd6_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_22();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd7_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_11();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd8_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_laplace_diff_1_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 7 - d0 >= 0 && -6 + d1 >= 0 && 7 - d1 >= 0) ? (((120 - d0) - 11 * d1)) : (-6 + d0 >= 0 && 7 - d0 >= 0 && d1 >= 0 && 4 - d1 >= 0) ? ((76 - d0)) : (d0 >= 0 && 4 - d0 >= 0 && d1 >= 0 && 4 - d1 >= 0) ? (72) : (-5 + d0 == 0 && d1 >= 0 && 4 - d1 >= 0) ? (71) : ((-5 + d1 == 0 && -6 + d0 >= 0 && 7 - d0 >= 0) || (-5 + d1 == 0 && d0 >= 0 && 5 - d0 >= 0)) ? ((65 - d0)) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_laplace_us_0_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0', d1'] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and 0 <= d0' <= 10 and -1 + d0 <= 2d0' <= d0 and 0 <= d1' <= 10 and -1 + d1 <= 2d1' <= d1 }
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[o0, o1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 15 - d0 >= 0 && -10 + d1 >= 0 && 15 - d1 >= 0) ? (((120 - floord(d0, 2)) - 11 * floord(d1, 2))) : ((-d1) % 2 == 0 && -10 + d0 >= 0 && 15 - d0 >= 0 && -2 + d1 >= 0 && 8 - d1 >= 0) ? ((76 - floord(d0, 2))) : ((-d1) % 2 == 0 && -10 + d0 >= 0 && 15 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? ((76 - floord(d0, 2))) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 8 - d0 >= 0 && -2 + d1 >= 0 && 8 - d1 >= 0) ? (72) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 8 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (72) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 9 - d0 >= 0 && -2 + d1 >= 0 && 8 - d1 >= 0) ? (72) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 9 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (72) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 15 - d0 >= 0 && -2 + d1 >= 0 && 9 - d1 >= 0) ? ((76 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 15 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? ((76 - floord(d0, 2))) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

// # of bundles = 4
// dark_gauss_blur_2_update_0_read
//	dark_gauss_blur_2_rd0
//	dark_gauss_blur_2_rd1
//	dark_gauss_blur_2_rd2
//	dark_gauss_blur_2_rd3
//	dark_gauss_blur_2_rd4
//	dark_gauss_blur_2_rd5
//	dark_gauss_blur_2_rd6
//	dark_gauss_blur_2_rd7
//	dark_gauss_blur_2_rd8
inline hw_uint<288> dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_gauss_blur_2_rd0_res = dark_gauss_blur_2_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, dark_gauss_blur_2_rd0_res);
	hw_uint<32>  dark_gauss_blur_2_rd1_res = dark_gauss_blur_2_rd1_select(dark_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, dark_gauss_blur_2_rd1_res);
	hw_uint<32>  dark_gauss_blur_2_rd2_res = dark_gauss_blur_2_rd2_select(dark_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, dark_gauss_blur_2_rd2_res);
	hw_uint<32>  dark_gauss_blur_2_rd3_res = dark_gauss_blur_2_rd3_select(dark_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, dark_gauss_blur_2_rd3_res);
	hw_uint<32>  dark_gauss_blur_2_rd4_res = dark_gauss_blur_2_rd4_select(dark_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, dark_gauss_blur_2_rd4_res);
	hw_uint<32>  dark_gauss_blur_2_rd5_res = dark_gauss_blur_2_rd5_select(dark_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, dark_gauss_blur_2_rd5_res);
	hw_uint<32>  dark_gauss_blur_2_rd6_res = dark_gauss_blur_2_rd6_select(dark_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, dark_gauss_blur_2_rd6_res);
	hw_uint<32>  dark_gauss_blur_2_rd7_res = dark_gauss_blur_2_rd7_select(dark_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, dark_gauss_blur_2_rd7_res);
	hw_uint<32>  dark_gauss_blur_2_rd8_res = dark_gauss_blur_2_rd8_select(dark_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, dark_gauss_blur_2_rd8_res);
	return result;
}

// dark_gauss_ds_1_update_0_write
//	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0
inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& dark_gauss_ds_1_update_0_write, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<32>  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res = dark_gauss_ds_1_update_0_write.extract<0, 31>();
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res, dark_gauss_ds_1, d0, d1);
}

// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<32> dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_read
//	dark_laplace_us_0_rd0
inline hw_uint<32> dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_us_0_rd0_res = dark_laplace_us_0_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, dark_laplace_us_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_store[25];

#else
  hw_uint<32> * dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 5) capacity = 2
	fifo<hw_uint<32> , 2> f5;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [8, 10) capacity = 2
	fifo<hw_uint<32> , 2> f11;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [12, 12] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_4() {
		return f5.back();
	}

	inline hw_uint<32>  peek_5() {
		return f6.back();
	}

	inline hw_uint<32>  peek_6() {
		return f8.back();
	}

	inline hw_uint<32>  peek_7() {
		return f10.back();
	}

	inline hw_uint<32>  peek_9() {
		return f11.back();
	}

	inline hw_uint<32>  peek_10() {
		return f12.back();
	}

	inline hw_uint<32>  peek_11() {
		return f14.back();
	}

	inline hw_uint<32>  peek_12() {
		return f16.back();
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
		if (offset == 4) {
			return f5.back();
		}
		if (offset == 5) {
			return f6.back();
		}
		if (offset == 6) {
			return f8.back();
		}
		if (offset == 7) {
			return f10.back();
		}
		if (offset == 9) {
			return f11.back();
		}
		if (offset == 10) {
			return f12.back();
		}
		if (offset == 11) {
			return f14.back();
		}
		if (offset == 12) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 8
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_store[25];

#else
  hw_uint<32> * dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 15> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 11
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_store[25];

#else
  hw_uint<32> * dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 15> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_cache {
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0;
};



inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(hw_uint<32> & dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  dark_gauss_blur_3_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_12();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd1_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_7();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd2_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd3_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_11();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd4_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_6();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd5_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd6_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_10();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd7_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_5();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd8_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_laplace_diff_2_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 2 - d0 >= 0 && d1 >= 0 && 2 - d1 >= 0) ? (12) : (-3 + d0 == 0 && d1 >= 0 && 2 - d1 >= 0) ? (11) : (-3 + d1 == 0 && d0 >= 0 && 3 - d0 >= 0) ? ((9 - d0)) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_laplace_us_1_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0', d1'] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and 0 <= d0' <= 4 and -1 + d0 <= 2d0' <= d0 and 0 <= d1' <= 4 and -1 + d1 <= 2d1' <= d1 }
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 7 - d0 >= 0 && -6 + d1 >= 0 && 7 - d1 >= 0) ? ((9 - floord(d0, 2))) : ((-d1) % 2 == 0 && -6 + d0 >= 0 && 7 - d0 >= 0 && -2 + d1 >= 0 && 4 - d1 >= 0) ? (11) : ((-d1) % 2 == 0 && -6 + d0 >= 0 && 7 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (11) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 4 - d0 >= 0 && -2 + d1 >= 0 && 4 - d1 >= 0) ? (12) : ((-d1) % 2 == 0 && (-d0) % 2 == 0 && d0 >= 0 && 4 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (12) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 5 - d0 >= 0 && -2 + d1 >= 0 && 4 - d1 >= 0) ? (12) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0 && d0 >= 0 && 5 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? (12) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 7 - d0 >= 0 && -2 + d1 >= 0 && 5 - d1 >= 0) ? ((14 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && d0 >= 0 && 7 - d0 >= 0 && d1 >= 0 && 1 - d1 >= 0) ? ((14 - floord(d0, 2))) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

// # of bundles = 4
// dark_gauss_blur_3_update_0_read
//	dark_gauss_blur_3_rd0
//	dark_gauss_blur_3_rd1
//	dark_gauss_blur_3_rd2
//	dark_gauss_blur_3_rd3
//	dark_gauss_blur_3_rd4
//	dark_gauss_blur_3_rd5
//	dark_gauss_blur_3_rd6
//	dark_gauss_blur_3_rd7
//	dark_gauss_blur_3_rd8
inline hw_uint<288> dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_gauss_blur_3_rd0_res = dark_gauss_blur_3_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 288>(result, dark_gauss_blur_3_rd0_res);
	hw_uint<32>  dark_gauss_blur_3_rd1_res = dark_gauss_blur_3_rd1_select(dark_gauss_ds_2, d0, d1);
	set_at<32, 288>(result, dark_gauss_blur_3_rd1_res);
	hw_uint<32>  dark_gauss_blur_3_rd2_res = dark_gauss_blur_3_rd2_select(dark_gauss_ds_2, d0, d1);
	set_at<64, 288>(result, dark_gauss_blur_3_rd2_res);
	hw_uint<32>  dark_gauss_blur_3_rd3_res = dark_gauss_blur_3_rd3_select(dark_gauss_ds_2, d0, d1);
	set_at<96, 288>(result, dark_gauss_blur_3_rd3_res);
	hw_uint<32>  dark_gauss_blur_3_rd4_res = dark_gauss_blur_3_rd4_select(dark_gauss_ds_2, d0, d1);
	set_at<128, 288>(result, dark_gauss_blur_3_rd4_res);
	hw_uint<32>  dark_gauss_blur_3_rd5_res = dark_gauss_blur_3_rd5_select(dark_gauss_ds_2, d0, d1);
	set_at<160, 288>(result, dark_gauss_blur_3_rd5_res);
	hw_uint<32>  dark_gauss_blur_3_rd6_res = dark_gauss_blur_3_rd6_select(dark_gauss_ds_2, d0, d1);
	set_at<192, 288>(result, dark_gauss_blur_3_rd6_res);
	hw_uint<32>  dark_gauss_blur_3_rd7_res = dark_gauss_blur_3_rd7_select(dark_gauss_ds_2, d0, d1);
	set_at<224, 288>(result, dark_gauss_blur_3_rd7_res);
	hw_uint<32>  dark_gauss_blur_3_rd8_res = dark_gauss_blur_3_rd8_select(dark_gauss_ds_2, d0, d1);
	set_at<256, 288>(result, dark_gauss_blur_3_rd8_res);
	return result;
}

// dark_gauss_ds_2_update_0_write
//	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0
inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& dark_gauss_ds_2_update_0_write, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	hw_uint<32>  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res = dark_gauss_ds_2_update_0_write.extract<0, 31>();
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res, dark_gauss_ds_2, d0, d1);
}

// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<32> dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_read
//	dark_laplace_us_1_rd0
inline hw_uint<32> dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_us_1_rd0_res = dark_laplace_us_1_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, dark_laplace_us_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 2
	// # of read delays: 2
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_2_store[4];

#else
  hw_uint<32> * dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_gauss_ds_3_cache {
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_2_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_2;
};



inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(hw_uint<32> & dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_2.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  dark_laplace_us_2_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	// lexmax events: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3_update_0[d0', d1'] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -2 + d0 <= 2d0' <= d0 and -2 + d1 <= 2d1' <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 <= 2 and d1 <= 2 and 2d0' >= -1 + d0 and 2d1' >= -1 + d1) or ((1 + d1) mod 2 = 0 and d0 <= 2 and d1 > 0 and 2d0' >= -1 + d0 and 2d1' < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and d1 <= 2 and 2d0' < d0 and 2d1' >= -1 + d1)); dark_laplace_us_2_update_0[d0 = 3, d1] -> dark_gauss_ds_3_update_0[d0' = 1, d1'] : (1 + d1) mod 2 = 0 and 0 < d1 <= 3 and 0 <= d1' <= 1 and -2 + d1 <= 2d1' < d1 }
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 1 - d0 >= 0 && -1 + d1 >= 0 && 3 - d1 >= 0) ? (1) : 0);
	return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
}

inline hw_uint<32>  fused_level_3_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	// lexmax events: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
	auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_2.peek_0();
	return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
}

// # of bundles = 3
// dark_gauss_ds_3_update_0_write
//	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0
inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& dark_gauss_ds_3_update_0_write, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	hw_uint<32>  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res = dark_gauss_ds_3_update_0_write.extract<0, 31>();
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res, dark_gauss_ds_3, d0, d1);
}

// dark_laplace_us_2_update_0_read
//	dark_laplace_us_2_rd0
inline hw_uint<32> dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_us_2_rd0_res = dark_laplace_us_2_rd0_select(dark_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, dark_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<32> dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_3_rd0_res = fused_level_3_rd0_select(dark_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, fused_level_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_store[256];

#else
  hw_uint<32> * dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_diff_0_cache {
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(hw_uint<32> & dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0);
}

inline hw_uint<32>  fused_level_0_rd0_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	// lexmax events: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1.peek_0();
	return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_write
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0
inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& dark_laplace_diff_0_update_0_write, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	hw_uint<32>  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res = dark_laplace_diff_0_update_0_write.extract<0, 31>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res, dark_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<32> dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_0_rd0_res = fused_level_0_rd0_select(dark_laplace_diff_0, d0, d1);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_store[64];

#else
  hw_uint<32> * dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_diff_1_cache {
  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_cache dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1;
};



inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(hw_uint<32> & dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1.push(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0);
}

inline hw_uint<32>  fused_level_1_rd0_select(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	// lexmax events: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
	auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0 = dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1.peek_0();
	return value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_write
//	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0
inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(hw_uint<32>& dark_laplace_diff_1_update_0_write, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	hw_uint<32>  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res = dark_laplace_diff_1_update_0_write.extract<0, 31>();
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res, dark_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<32> dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_1_rd0_res = fused_level_1_rd0_select(dark_laplace_diff_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_store[16];

#else
  hw_uint<32> * dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_diff_2_cache {
  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_cache dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1;
};



inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(hw_uint<32> & dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
  dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1.push(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0);
}

inline hw_uint<32>  fused_level_2_rd0_select(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	// lexmax events: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
	auto value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0 = dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1.peek_0();
	return value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_write
//	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0
inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(hw_uint<32>& dark_laplace_diff_2_update_0_write, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	hw_uint<32>  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res = dark_laplace_diff_2_update_0_write.extract<0, 31>();
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res, dark_laplace_diff_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<32> dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_2_rd0_res = fused_level_2_rd0_select(dark_laplace_diff_2, d0, d1);
	set_at<0, 32>(result, fused_level_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_store[256];

#else
  hw_uint<32> * dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_us_0_cache {
  dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1;
};



inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(hw_uint<32> & dark_laplace_us_0_dark_laplace_us_0_update_0_write0, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write0);
}

inline hw_uint<32>  dark_laplace_diff_0_rd0_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1.peek_0();
	return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
inline hw_uint<32> dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark_laplace_us_0, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_0_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_write
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write0
inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(hw_uint<32>& dark_laplace_us_0_update_0_write, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	hw_uint<32>  dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res = dark_laplace_us_0_update_0_write.extract<0, 31>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res, dark_laplace_us_0, d0, d1);
}



#include "hw_classes.h"

struct dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_store[64];

#else
  hw_uint<32> * dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_us_1_cache {
  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_cache dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1;
};



inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(hw_uint<32> & dark_laplace_us_1_dark_laplace_us_1_update_0_write0, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1.push(dark_laplace_us_1_dark_laplace_us_1_update_0_write0);
}

inline hw_uint<32>  dark_laplace_diff_1_rd0_select(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
	auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0 = dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1.peek_0();
	return value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<32> dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_laplace_us_1, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_write
//	dark_laplace_us_1_dark_laplace_us_1_update_0_write0
inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(hw_uint<32>& dark_laplace_us_1_update_0_write, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	hw_uint<32>  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res = dark_laplace_us_1_update_0_write.extract<0, 31>();
	dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res, dark_laplace_us_1, d0, d1);
}



#include "hw_classes.h"

struct dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_store[16];

#else
  hw_uint<32> * dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_us_2_cache {
  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_cache dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1;
};



inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(hw_uint<32> & dark_laplace_us_2_dark_laplace_us_2_update_0_write0, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
  dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1.push(dark_laplace_us_2_dark_laplace_us_2_update_0_write0);
}

inline hw_uint<32>  dark_laplace_diff_2_rd0_select(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
	auto value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0 = dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1.peek_0();
	return value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<32> dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_laplace_us_2, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_2_update_0_write
//	dark_laplace_us_2_dark_laplace_us_2_update_0_write0
inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(hw_uint<32>& dark_laplace_us_2_update_0_write, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	hw_uint<32>  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res = dark_laplace_us_2_update_0_write.extract<0, 31>();
	dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res, dark_laplace_us_2, d0, d1);
}



#include "hw_classes.h"

struct dark_weights_dark_weights_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_dark_weights_update_0_write0_merged_banks_2_store[529];

#else
  hw_uint<32> * dark_weights_dark_weights_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_weights_dark_weights_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct dark_weights_cache {
  dark_weights_dark_weights_update_0_write0_merged_banks_2_cache dark_weights_dark_weights_update_0_write0_merged_banks_2;
};



inline void dark_weights_dark_weights_update_0_write0_write(hw_uint<32> & dark_weights_dark_weights_update_0_write0, dark_weights_cache& dark_weights, int d0, int d1) {
  dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.push(dark_weights_dark_weights_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
	// lexmax events: { dark_weights_normed_update_0[d0, d1] -> dark_weights_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
	return value_dark_weights_dark_weights_update_0_write0;
}

inline hw_uint<32>  weight_sums_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
	// lexmax events: { weight_sums_update_0[d0, d1] -> dark_weights_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
	return value_dark_weights_dark_weights_update_0_write0;
}

// # of bundles = 3
// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
inline hw_uint<32> dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(dark_weights, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_rd0_res);
	return result;
}

// dark_weights_update_0_write
//	dark_weights_dark_weights_update_0_write0
inline void dark_weights_dark_weights_update_0_write_bundle_write(hw_uint<32>& dark_weights_update_0_write, dark_weights_cache& dark_weights, int d0, int d1) {
	hw_uint<32>  dark_weights_dark_weights_update_0_write0_res = dark_weights_update_0_write.extract<0, 31>();
	dark_weights_dark_weights_update_0_write0_write(dark_weights_dark_weights_update_0_write0_res, dark_weights, d0, d1);
}

// weight_sums_update_0_read
//	weight_sums_rd0
inline hw_uint<32> dark_weights_weight_sums_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  weight_sums_rd0_res = weight_sums_rd0_select(dark_weights, d0, d1);
	set_at<0, 32>(result, weight_sums_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 337
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_store[529];

#else
  hw_uint<32> * dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 23) capacity = 20
	fifo<hw_uint<32> , 20> f5;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [24, 25) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [25, 26) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [26, 46) capacity = 20
	fifo<hw_uint<32> , 20> f11;
	// Parition [46, 47) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [47, 48) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [48, 48] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_22() {
		return f5.back();
	}

	inline hw_uint<32>  peek_23() {
		return f6.back();
	}

	inline hw_uint<32>  peek_24() {
		return f8.back();
	}

	inline hw_uint<32>  peek_25() {
		return f10.back();
	}

	inline hw_uint<32>  peek_45() {
		return f11.back();
	}

	inline hw_uint<32>  peek_46() {
		return f12.back();
	}

	inline hw_uint<32>  peek_47() {
		return f14.back();
	}

	inline hw_uint<32>  peek_48() {
		return f16.back();
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
		if (offset == 22) {
			return f5.back();
		}
		if (offset == 23) {
			return f6.back();
		}
		if (offset == 24) {
			return f8.back();
		}
		if (offset == 25) {
			return f10.back();
		}
		if (offset == 45) {
			return f11.back();
		}
		if (offset == 46) {
			return f12.back();
		}
		if (offset == 47) {
			return f14.back();
		}
		if (offset == 48) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 337
	// # of read delays: 170
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_store[529];

#else
  hw_uint<32> * dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 337> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(336 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(73);
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(74);
	}

	inline hw_uint<32>  peek_75() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(75);
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(76);
	}

	inline hw_uint<32>  peek_77() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(77);
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(78);
	}

	inline hw_uint<32>  peek_79() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(79);
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(80);
	}

	inline hw_uint<32>  peek_81() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(81);
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(82);
	}

	inline hw_uint<32>  peek_83() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(83);
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(84);
	}

	inline hw_uint<32>  peek_85() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(85);
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(86);
	}

	inline hw_uint<32>  peek_87() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(87);
	}

	inline hw_uint<32>  peek_88() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(88);
	}

	inline hw_uint<32>  peek_89() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(89);
	}

	inline hw_uint<32>  peek_90() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(90);
	}

	inline hw_uint<32>  peek_91() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(91);
	}

	inline hw_uint<32>  peek_92() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(92);
	}

	inline hw_uint<32>  peek_93() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(93);
	}

	inline hw_uint<32>  peek_94() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(94);
	}

	inline hw_uint<32>  peek_95() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(95);
	}

	inline hw_uint<32>  peek_96() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(96);
	}

	inline hw_uint<32>  peek_97() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(97);
	}

	inline hw_uint<32>  peek_98() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(98);
	}

	inline hw_uint<32>  peek_99() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(99);
	}

	inline hw_uint<32>  peek_100() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(100);
	}

	inline hw_uint<32>  peek_101() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(101);
	}

	inline hw_uint<32>  peek_102() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(102);
	}

	inline hw_uint<32>  peek_103() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(103);
	}

	inline hw_uint<32>  peek_104() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(104);
	}

	inline hw_uint<32>  peek_105() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(105);
	}

	inline hw_uint<32>  peek_106() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(106);
	}

	inline hw_uint<32>  peek_107() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(107);
	}

	inline hw_uint<32>  peek_108() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(108);
	}

	inline hw_uint<32>  peek_109() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(109);
	}

	inline hw_uint<32>  peek_110() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(110);
	}

	inline hw_uint<32>  peek_111() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(111);
	}

	inline hw_uint<32>  peek_112() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(112);
	}

	inline hw_uint<32>  peek_113() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(113);
	}

	inline hw_uint<32>  peek_114() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(114);
	}

	inline hw_uint<32>  peek_115() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(115);
	}

	inline hw_uint<32>  peek_116() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(116);
	}

	inline hw_uint<32>  peek_117() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(117);
	}

	inline hw_uint<32>  peek_118() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(118);
	}

	inline hw_uint<32>  peek_119() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(119);
	}

	inline hw_uint<32>  peek_120() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(120);
	}

	inline hw_uint<32>  peek_121() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(121);
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(122);
	}

	inline hw_uint<32>  peek_123() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(123);
	}

	inline hw_uint<32>  peek_124() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(124);
	}

	inline hw_uint<32>  peek_125() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(125);
	}

	inline hw_uint<32>  peek_126() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(126);
	}

	inline hw_uint<32>  peek_127() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(127);
	}

	inline hw_uint<32>  peek_128() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(128);
	}

	inline hw_uint<32>  peek_129() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(129);
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(130);
	}

	inline hw_uint<32>  peek_131() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(131);
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(132);
	}

	inline hw_uint<32>  peek_133() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(133);
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(134);
	}

	inline hw_uint<32>  peek_135() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(135);
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(136);
	}

	inline hw_uint<32>  peek_137() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(137);
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(138);
	}

	inline hw_uint<32>  peek_139() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(139);
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(140);
	}

	inline hw_uint<32>  peek_141() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(141);
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(142);
	}

	inline hw_uint<32>  peek_143() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(143);
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(144);
	}

	inline hw_uint<32>  peek_145() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(145);
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(146);
	}

	inline hw_uint<32>  peek_147() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(147);
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(148);
	}

	inline hw_uint<32>  peek_149() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(149);
	}

	inline hw_uint<32>  peek_150() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(150);
	}

	inline hw_uint<32>  peek_151() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(151);
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(152);
	}

	inline hw_uint<32>  peek_153() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(153);
	}

	inline hw_uint<32>  peek_154() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(154);
	}

	inline hw_uint<32>  peek_155() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(155);
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(156);
	}

	inline hw_uint<32>  peek_157() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(157);
	}

	inline hw_uint<32>  peek_158() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(158);
	}

	inline hw_uint<32>  peek_159() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(159);
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(160);
	}

	inline hw_uint<32>  peek_161() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(161);
	}

	inline hw_uint<32>  peek_162() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(162);
	}

	inline hw_uint<32>  peek_163() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(163);
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(164);
	}

	inline hw_uint<32>  peek_165() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(165);
	}

	inline hw_uint<32>  peek_166() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(166);
	}

	inline hw_uint<32>  peek_167() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(167);
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(168);
	}

	inline hw_uint<32>  peek_169() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(169);
	}

	inline hw_uint<32>  peek_170() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(170);
	}

	inline hw_uint<32>  peek_171() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(171);
	}

	inline hw_uint<32>  peek_172() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(172);
	}

	inline hw_uint<32>  peek_173() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(173);
	}

	inline hw_uint<32>  peek_174() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(174);
	}

	inline hw_uint<32>  peek_175() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(175);
	}

	inline hw_uint<32>  peek_176() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(176);
	}

	inline hw_uint<32>  peek_177() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(177);
	}

	inline hw_uint<32>  peek_178() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(178);
	}

	inline hw_uint<32>  peek_179() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(179);
	}

	inline hw_uint<32>  peek_180() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(180);
	}

	inline hw_uint<32>  peek_181() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(181);
	}

	inline hw_uint<32>  peek_182() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(182);
	}

	inline hw_uint<32>  peek_183() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(183);
	}

	inline hw_uint<32>  peek_184() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(184);
	}

	inline hw_uint<32>  peek_185() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(185);
	}

	inline hw_uint<32>  peek_186() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(186);
	}

	inline hw_uint<32>  peek_187() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(187);
	}

	inline hw_uint<32>  peek_188() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(188);
	}

	inline hw_uint<32>  peek_189() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(189);
	}

	inline hw_uint<32>  peek_190() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(190);
	}

	inline hw_uint<32>  peek_191() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(191);
	}

	inline hw_uint<32>  peek_192() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(192);
	}

	inline hw_uint<32>  peek_193() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(193);
	}

	inline hw_uint<32>  peek_194() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(194);
	}

	inline hw_uint<32>  peek_195() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(195);
	}

	inline hw_uint<32>  peek_196() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(196);
	}

	inline hw_uint<32>  peek_197() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(197);
	}

	inline hw_uint<32>  peek_198() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(198);
	}

	inline hw_uint<32>  peek_199() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(199);
	}

	inline hw_uint<32>  peek_200() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(200);
	}

	inline hw_uint<32>  peek_201() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(201);
	}

	inline hw_uint<32>  peek_202() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(202);
	}

	inline hw_uint<32>  peek_203() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(203);
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(204);
	}

	inline hw_uint<32>  peek_205() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(205);
	}

	inline hw_uint<32>  peek_206() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(206);
	}

	inline hw_uint<32>  peek_207() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(207);
	}

	inline hw_uint<32>  peek_208() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(208);
	}

	inline hw_uint<32>  peek_209() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(209);
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(210);
	}

	inline hw_uint<32>  peek_211() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(211);
	}

	inline hw_uint<32>  peek_212() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(212);
	}

	inline hw_uint<32>  peek_213() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(213);
	}

	inline hw_uint<32>  peek_214() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(214);
	}

	inline hw_uint<32>  peek_215() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(215);
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(216);
	}

	inline hw_uint<32>  peek_217() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(217);
	}

	inline hw_uint<32>  peek_218() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(218);
	}

	inline hw_uint<32>  peek_219() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(219);
	}

	inline hw_uint<32>  peek_220() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(220);
	}

	inline hw_uint<32>  peek_221() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(221);
	}

	inline hw_uint<32>  peek_222() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(222);
	}

	inline hw_uint<32>  peek_223() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(223);
	}

	inline hw_uint<32>  peek_224() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(224);
	}

	inline hw_uint<32>  peek_225() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(225);
	}

	inline hw_uint<32>  peek_226() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(226);
	}

	inline hw_uint<32>  peek_227() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(227);
	}

	inline hw_uint<32>  peek_228() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(228);
	}

	inline hw_uint<32>  peek_229() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(229);
	}

	inline hw_uint<32>  peek_230() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(230);
	}

	inline hw_uint<32>  peek_231() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(231);
	}

	inline hw_uint<32>  peek_232() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(232);
	}

	inline hw_uint<32>  peek_233() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(233);
	}

	inline hw_uint<32>  peek_234() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(234);
	}

	inline hw_uint<32>  peek_235() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(235);
	}

	inline hw_uint<32>  peek_236() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(236);
	}

	inline hw_uint<32>  peek_237() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(237);
	}

	inline hw_uint<32>  peek_238() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(238);
	}

	inline hw_uint<32>  peek_239() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(239);
	}

	inline hw_uint<32>  peek_240() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(240);
	}

	inline hw_uint<32>  peek_241() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(241);
	}

	inline hw_uint<32>  peek_242() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(242);
	}

	inline hw_uint<32>  peek_243() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(243);
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(244);
	}

	inline hw_uint<32>  peek_245() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(245);
	}

	inline hw_uint<32>  peek_246() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(246);
	}

	inline hw_uint<32>  peek_247() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(247);
	}

	inline hw_uint<32>  peek_248() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(248);
	}

	inline hw_uint<32>  peek_249() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(249);
	}

	inline hw_uint<32>  peek_250() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(250);
	}

	inline hw_uint<32>  peek_251() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(251);
	}

	inline hw_uint<32>  peek_252() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(252);
	}

	inline hw_uint<32>  peek_253() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(253);
	}

	inline hw_uint<32>  peek_254() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(254);
	}

	inline hw_uint<32>  peek_255() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(255);
	}

	inline hw_uint<32>  peek_256() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(256);
	}

	inline hw_uint<32>  peek_257() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(257);
	}

	inline hw_uint<32>  peek_258() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(258);
	}

	inline hw_uint<32>  peek_259() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(259);
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(260);
	}

	inline hw_uint<32>  peek_261() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(261);
	}

	inline hw_uint<32>  peek_262() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(262);
	}

	inline hw_uint<32>  peek_263() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(263);
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(264);
	}

	inline hw_uint<32>  peek_265() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(265);
	}

	inline hw_uint<32>  peek_266() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(266);
	}

	inline hw_uint<32>  peek_267() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(267);
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(268);
	}

	inline hw_uint<32>  peek_269() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(269);
	}

	inline hw_uint<32>  peek_270() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(270);
	}

	inline hw_uint<32>  peek_271() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(271);
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(272);
	}

	inline hw_uint<32>  peek_273() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(273);
	}

	inline hw_uint<32>  peek_274() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(274);
	}

	inline hw_uint<32>  peek_275() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(275);
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(276);
	}

	inline hw_uint<32>  peek_277() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(277);
	}

	inline hw_uint<32>  peek_278() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(278);
	}

	inline hw_uint<32>  peek_279() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(279);
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(280);
	}

	inline hw_uint<32>  peek_281() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(281);
	}

	inline hw_uint<32>  peek_282() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(282);
	}

	inline hw_uint<32>  peek_283() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(283);
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(284);
	}

	inline hw_uint<32>  peek_285() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(285);
	}

	inline hw_uint<32>  peek_286() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(286);
	}

	inline hw_uint<32>  peek_287() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(287);
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(288);
	}

	inline hw_uint<32>  peek_289() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(289);
	}

	inline hw_uint<32>  peek_290() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(290);
	}

	inline hw_uint<32>  peek_291() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(291);
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(292);
	}

	inline hw_uint<32>  peek_293() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(293);
	}

	inline hw_uint<32>  peek_294() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(294);
	}

	inline hw_uint<32>  peek_295() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(295);
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(296);
	}

	inline hw_uint<32>  peek_297() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(297);
	}

	inline hw_uint<32>  peek_298() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(298);
	}

	inline hw_uint<32>  peek_299() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(299);
	}

	inline hw_uint<32>  peek_300() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(300);
	}

	inline hw_uint<32>  peek_301() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(301);
	}

	inline hw_uint<32>  peek_302() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(302);
	}

	inline hw_uint<32>  peek_303() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(303);
	}

	inline hw_uint<32>  peek_304() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(304);
	}

	inline hw_uint<32>  peek_305() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(305);
	}

	inline hw_uint<32>  peek_306() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(306);
	}

	inline hw_uint<32>  peek_307() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(307);
	}

	inline hw_uint<32>  peek_308() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(308);
	}

	inline hw_uint<32>  peek_309() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(309);
	}

	inline hw_uint<32>  peek_310() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(310);
	}

	inline hw_uint<32>  peek_311() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(311);
	}

	inline hw_uint<32>  peek_312() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(312);
	}

	inline hw_uint<32>  peek_313() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(313);
	}

	inline hw_uint<32>  peek_314() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(314);
	}

	inline hw_uint<32>  peek_315() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(315);
	}

	inline hw_uint<32>  peek_316() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(316);
	}

	inline hw_uint<32>  peek_317() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(317);
	}

	inline hw_uint<32>  peek_318() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(318);
	}

	inline hw_uint<32>  peek_319() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(319);
	}

	inline hw_uint<32>  peek_320() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(320);
	}

	inline hw_uint<32>  peek_321() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(321);
	}

	inline hw_uint<32>  peek_322() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(322);
	}

	inline hw_uint<32>  peek_323() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(323);
	}

	inline hw_uint<32>  peek_324() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(324);
	}

	inline hw_uint<32>  peek_325() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(325);
	}

	inline hw_uint<32>  peek_326() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(326);
	}

	inline hw_uint<32>  peek_327() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(327);
	}

	inline hw_uint<32>  peek_328() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(328);
	}

	inline hw_uint<32>  peek_329() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(329);
	}

	inline hw_uint<32>  peek_330() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(330);
	}

	inline hw_uint<32>  peek_331() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(331);
	}

	inline hw_uint<32>  peek_332() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(332);
	}

	inline hw_uint<32>  peek_333() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(333);
	}

	inline hw_uint<32>  peek_334() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(334);
	}

	inline hw_uint<32>  peek_335() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(335);
	}

	inline hw_uint<32>  peek_336() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(336);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_cache {
  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_cache dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9;
  dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_cache dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<32> & dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.push(dark_weights_normed_dark_weights_normed_update_0_write0);
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0.push(dark_weights_normed_dark_weights_normed_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_48();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_25();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_2();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_47();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_24();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_1();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_46();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_23();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_0();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  fused_level_0_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { fused_level_0_update_0[d0, d1] -> dark_weights_normed_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 15 - d0 >= 0 && -10 + d1 >= 0 && 15 - d1 >= 0) ? (((528 - d0) - 23 * d1)) : (-10 + d0 >= 0 && 15 - d0 >= 0 && d1 >= 0 && 8 - d1 >= 0) ? ((344 - d0)) : (d0 >= 0 && 8 - d0 >= 0 && d1 >= 0 && 8 - d1 >= 0) ? (336) : (-9 + d0 == 0 && d1 >= 0 && 8 - d1 >= 0) ? (335) : ((-9 + d1 == 0 && -10 + d0 >= 0 && 15 - d0 >= 0) || (-9 + d1 == 0 && d0 >= 0 && 9 - d0 >= 0)) ? ((321 - d0)) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_1_update_0_read
//	dark_weights_normed_gauss_blur_1_rd0
//	dark_weights_normed_gauss_blur_1_rd1
//	dark_weights_normed_gauss_blur_1_rd2
//	dark_weights_normed_gauss_blur_1_rd3
//	dark_weights_normed_gauss_blur_1_rd4
//	dark_weights_normed_gauss_blur_1_rd5
//	dark_weights_normed_gauss_blur_1_rd6
//	dark_weights_normed_gauss_blur_1_rd7
//	dark_weights_normed_gauss_blur_1_rd8
inline hw_uint<288> dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd0_res = dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 288>(result, dark_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd1_res = dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed, d0, d1);
	set_at<32, 288>(result, dark_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd2_res = dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed, d0, d1);
	set_at<64, 288>(result, dark_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd3_res = dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed, d0, d1);
	set_at<96, 288>(result, dark_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd4_res = dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed, d0, d1);
	set_at<128, 288>(result, dark_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd5_res = dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed, d0, d1);
	set_at<160, 288>(result, dark_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd6_res = dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed, d0, d1);
	set_at<192, 288>(result, dark_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd7_res = dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed, d0, d1);
	set_at<224, 288>(result, dark_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd8_res = dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed, d0, d1);
	set_at<256, 288>(result, dark_weights_normed_gauss_blur_1_rd8_res);
	return result;
}

// dark_weights_normed_update_0_write
//	dark_weights_normed_dark_weights_normed_update_0_write0
inline void dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_update_0_write, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_dark_weights_normed_update_0_write0_res = dark_weights_normed_update_0_write.extract<0, 31>();
	dark_weights_normed_dark_weights_normed_update_0_write0_write(dark_weights_normed_dark_weights_normed_update_0_write0_res, dark_weights_normed, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<32> dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_0_rd0_res = fused_level_0_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 20], [0, 20]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store[441];

#else
  hw_uint<32> * dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_blur_1_cache {
  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
	auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek_0();
	return value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_1_update_0_write
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0
inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_blur_1_update_0_write, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res, dark_weights_normed_gauss_blur_1, d0, d1);
}

// dark_weights_normed_gauss_ds_1_update_0_read
//	dark_weights_normed_gauss_ds_1_rd0
inline hw_uint<32> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_gauss_ds_1_rd0_res = dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_gauss_ds_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 8], [0, 8]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store[81];

#else
  hw_uint<32> * dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_blur_2_cache {
  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
  dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
	auto value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0 = dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.peek_0();
	return value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_2_update_0_write
//	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0
inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_blur_2_update_0_write, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res = dark_weights_normed_gauss_blur_2_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res, dark_weights_normed_gauss_blur_2, d0, d1);
}

// dark_weights_normed_gauss_ds_2_update_0_read
//	dark_weights_normed_gauss_ds_2_rd0
inline hw_uint<32> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_gauss_ds_2_rd0_res = dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_gauss_ds_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store[9];

#else
  hw_uint<32> * dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_blur_3_cache {
  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
  dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3_update_0[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
	auto value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0 = dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.peek_0();
	return value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_3_update_0_write
//	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0
inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_blur_3_update_0_write, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res = dark_weights_normed_gauss_blur_3_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res, dark_weights_normed_gauss_blur_3, d0, d1);
}

// dark_weights_normed_gauss_ds_3_update_0_read
//	dark_weights_normed_gauss_ds_3_rd0
inline hw_uint<32> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_gauss_ds_3_rd0_res = dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_gauss_ds_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 73
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store[121];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 11) capacity = 8
	fifo<hw_uint<32> , 8> f5;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [12, 13) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [13, 14) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [14, 22) capacity = 8
	fifo<hw_uint<32> , 8> f11;
	// Parition [22, 23) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [24, 24] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_10() {
		return f5.back();
	}

	inline hw_uint<32>  peek_11() {
		return f6.back();
	}

	inline hw_uint<32>  peek_12() {
		return f8.back();
	}

	inline hw_uint<32>  peek_13() {
		return f10.back();
	}

	inline hw_uint<32>  peek_21() {
		return f11.back();
	}

	inline hw_uint<32>  peek_22() {
		return f12.back();
	}

	inline hw_uint<32>  peek_23() {
		return f14.back();
	}

	inline hw_uint<32>  peek_24() {
		return f16.back();
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
		if (offset == 10) {
			return f5.back();
		}
		if (offset == 11) {
			return f6.back();
		}
		if (offset == 12) {
			return f8.back();
		}
		if (offset == 13) {
			return f10.back();
		}
		if (offset == 21) {
			return f11.back();
		}
		if (offset == 22) {
			return f12.back();
		}
		if (offset == 23) {
			return f14.back();
		}
		if (offset == 24) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 73
	// # of read delays: 38
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store[121];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 73> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(72 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(53);
	}

	inline hw_uint<32>  peek_54() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(61);
	}

	inline hw_uint<32>  peek_62() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(62);
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(63);
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(64);
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(65);
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(66);
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(67);
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(68);
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(69);
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(70);
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(71);
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(72);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_cache {
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_24();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_13();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_23();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_12();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_22();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_11();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 7 - d0 >= 0 && -6 + d1 >= 0 && 7 - d1 >= 0) ? (((120 - d0) - 11 * d1)) : (-6 + d0 >= 0 && 7 - d0 >= 0 && d1 >= 0 && 4 - d1 >= 0) ? ((76 - d0)) : (d0 >= 0 && 4 - d0 >= 0 && d1 >= 0 && 4 - d1 >= 0) ? (72) : (-5 + d0 == 0 && d1 >= 0 && 4 - d1 >= 0) ? (71) : ((-5 + d1 == 0 && -6 + d0 >= 0 && 7 - d0 >= 0) || (-5 + d1 == 0 && d0 >= 0 && 5 - d0 >= 0)) ? ((65 - d0)) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_2_update_0_read
//	dark_weights_normed_gauss_blur_2_rd0
//	dark_weights_normed_gauss_blur_2_rd1
//	dark_weights_normed_gauss_blur_2_rd2
//	dark_weights_normed_gauss_blur_2_rd3
//	dark_weights_normed_gauss_blur_2_rd4
//	dark_weights_normed_gauss_blur_2_rd5
//	dark_weights_normed_gauss_blur_2_rd6
//	dark_weights_normed_gauss_blur_2_rd7
//	dark_weights_normed_gauss_blur_2_rd8
inline hw_uint<288> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd0_res = dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, dark_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd1_res = dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, dark_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd2_res = dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, dark_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd3_res = dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, dark_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd4_res = dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, dark_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd5_res = dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, dark_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd6_res = dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, dark_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd7_res = dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, dark_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd8_res = dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, dark_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_1_update_0_write
//	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0
inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_ds_1_update_0_write, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res = dark_weights_normed_gauss_ds_1_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res, dark_weights_normed_gauss_ds_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<32> dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_1_rd0_res = fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store[25];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 5) capacity = 2
	fifo<hw_uint<32> , 2> f5;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [8, 10) capacity = 2
	fifo<hw_uint<32> , 2> f11;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [12, 12] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_4() {
		return f5.back();
	}

	inline hw_uint<32>  peek_5() {
		return f6.back();
	}

	inline hw_uint<32>  peek_6() {
		return f8.back();
	}

	inline hw_uint<32>  peek_7() {
		return f10.back();
	}

	inline hw_uint<32>  peek_9() {
		return f11.back();
	}

	inline hw_uint<32>  peek_10() {
		return f12.back();
	}

	inline hw_uint<32>  peek_11() {
		return f14.back();
	}

	inline hw_uint<32>  peek_12() {
		return f16.back();
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
		if (offset == 4) {
			return f5.back();
		}
		if (offset == 5) {
			return f6.back();
		}
		if (offset == 6) {
			return f8.back();
		}
		if (offset == 7) {
			return f10.back();
		}
		if (offset == 9) {
			return f11.back();
		}
		if (offset == 10) {
			return f12.back();
		}
		if (offset == 11) {
			return f14.back();
		}
		if (offset == 12) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 8
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store[25];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 13> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(12 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(12);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_cache {
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
};



inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_12();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_7();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_11();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = 1 + d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_6();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = 1 + d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = 2 + d0, d1' = d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_10();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = 2 + d0, d1' = 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_5();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = 2 + d0, d1' = 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 2 - d0 >= 0 && d1 >= 0 && 2 - d1 >= 0) ? (12) : (-3 + d0 == 0 && d1 >= 0 && 2 - d1 >= 0) ? (11) : (-3 + d1 == 0 && d0 >= 0 && 3 - d0 >= 0) ? ((9 - d0)) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_3_update_0_read
//	dark_weights_normed_gauss_blur_3_rd0
//	dark_weights_normed_gauss_blur_3_rd1
//	dark_weights_normed_gauss_blur_3_rd2
//	dark_weights_normed_gauss_blur_3_rd3
//	dark_weights_normed_gauss_blur_3_rd4
//	dark_weights_normed_gauss_blur_3_rd5
//	dark_weights_normed_gauss_blur_3_rd6
//	dark_weights_normed_gauss_blur_3_rd7
//	dark_weights_normed_gauss_blur_3_rd8
inline hw_uint<288> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd0_res = dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 288>(result, dark_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd1_res = dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<32, 288>(result, dark_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd2_res = dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<64, 288>(result, dark_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd3_res = dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<96, 288>(result, dark_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd4_res = dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<128, 288>(result, dark_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd5_res = dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<160, 288>(result, dark_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd6_res = dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<192, 288>(result, dark_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd7_res = dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<224, 288>(result, dark_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd8_res = dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<256, 288>(result, dark_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_2_update_0_write
//	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0
inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_ds_2_update_0_write, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res = dark_weights_normed_gauss_ds_2_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res, dark_weights_normed_gauss_ds_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<32> dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_2_rd0_res = fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, fused_level_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store[4];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_3_cache {
  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	// lexmax events: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
	auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek_0();
	return value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0;
}

// # of bundles = 2
// dark_weights_normed_gauss_ds_3_update_0_write
//	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0
inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_ds_3_update_0_write, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res = dark_weights_normed_gauss_ds_3_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res, dark_weights_normed_gauss_ds_3, d0, d1);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<32> dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_3_rd0_res = fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, fused_level_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct final_merged_0_final_merged_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  final_merged_0_final_merged_0_update_0_write0_merged_banks_1_store[256];

#else
  hw_uint<32> * final_merged_0_final_merged_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_0_cache {
  final_merged_0_final_merged_0_update_0_write0_merged_banks_1_cache final_merged_0_final_merged_0_update_0_write0_merged_banks_1;
};



inline void final_merged_0_final_merged_0_update_0_write0_write(hw_uint<32> & final_merged_0_final_merged_0_update_0_write0, final_merged_0_cache& final_merged_0, int d0, int d1) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write0_merged_banks_1.push(final_merged_0_final_merged_0_update_0_write0);
}

inline hw_uint<32>  pyramid_synthetic_exposure_fusion_rd0_select(final_merged_0_cache& final_merged_0, int d0, int d1) {
	// lexmax events: { pyramid_synthetic_exposure_fusion_update_0[d0, d1] -> final_merged_0_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // pyramid_synthetic_exposure_fusion_rd0 read pattern: { pyramid_synthetic_exposure_fusion_update_0[d0, d1] -> final_merged_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_final_merged_0_final_merged_0_update_0_write0 = final_merged_0.final_merged_0_final_merged_0_update_0_write0_merged_banks_1.peek_0();
	return value_final_merged_0_final_merged_0_update_0_write0;
}

// # of bundles = 2
// final_merged_0_update_0_write
//	final_merged_0_final_merged_0_update_0_write0
inline void final_merged_0_final_merged_0_update_0_write_bundle_write(hw_uint<32>& final_merged_0_update_0_write, final_merged_0_cache& final_merged_0, int d0, int d1) {
	hw_uint<32>  final_merged_0_final_merged_0_update_0_write0_res = final_merged_0_update_0_write.extract<0, 31>();
	final_merged_0_final_merged_0_update_0_write0_write(final_merged_0_final_merged_0_update_0_write0_res, final_merged_0, d0, d1);
}

// pyramid_synthetic_exposure_fusion_update_0_read
//	pyramid_synthetic_exposure_fusion_rd0
inline hw_uint<32> final_merged_0_pyramid_synthetic_exposure_fusion_update_0_read_bundle_read(final_merged_0_cache& final_merged_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  pyramid_synthetic_exposure_fusion_rd0_res = pyramid_synthetic_exposure_fusion_rd0_select(final_merged_0, d0, d1);
	set_at<0, 32>(result, pyramid_synthetic_exposure_fusion_rd0_res);
	return result;
}



#include "hw_classes.h"

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 8
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_store[64];

#else
  hw_uint<32> * final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 8> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(7 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(7);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_1_cache {
  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0;
};



inline void final_merged_1_final_merged_1_update_0_write0_write(hw_uint<32> & final_merged_1_final_merged_1_update_0_write0, final_merged_1_cache& final_merged_1, int d0, int d1) {
  final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.push(final_merged_1_final_merged_1_update_0_write0);
}

inline hw_uint<32>  final_merged_0_rd0_select(final_merged_1_cache& final_merged_1, int d0, int d1) {
	// lexmax events: { final_merged_0_update_0[d0, d1] -> final_merged_1_update_0[d0', d1'] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and -2 + d0 <= 2d0' <= d0 and -2 + d1 <= 2d1' <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 <= 14 and d1 <= 14 and 2d0' >= -1 + d0 and 2d1' >= -1 + d1) or ((1 + d1) mod 2 = 0 and d0 <= 14 and d1 > 0 and 2d0' >= -1 + d0 and 2d1' < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and d1 <= 14 and 2d0' < d0 and 2d1' >= -1 + d1)); final_merged_0_update_0[d0 = 15, d1] -> final_merged_1_update_0[d0' = 7, d1'] : (1 + d1) mod 2 = 0 and 0 < d1 <= 15 and 0 <= d1' <= 7 and -2 + d1 <= 2d1' < d1 }
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[o0, o1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 13 - d0 >= 0 && -1 + d1 >= 0 && 15 - d1 >= 0) ? ((7 - floord(2*d0, 4))) : 0);
	return value_final_merged_1_final_merged_1_update_0_write0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
inline hw_uint<32> final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1_cache& final_merged_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_0_rd0_res = final_merged_0_rd0_select(final_merged_1, d0, d1);
	set_at<0, 32>(result, final_merged_0_rd0_res);
	return result;
}

// final_merged_1_update_0_write
//	final_merged_1_final_merged_1_update_0_write0
inline void final_merged_1_final_merged_1_update_0_write_bundle_write(hw_uint<32>& final_merged_1_update_0_write, final_merged_1_cache& final_merged_1, int d0, int d1) {
	hw_uint<32>  final_merged_1_final_merged_1_update_0_write0_res = final_merged_1_update_0_write.extract<0, 31>();
	final_merged_1_final_merged_1_update_0_write0_write(final_merged_1_final_merged_1_update_0_write0_res, final_merged_1, d0, d1);
}



#include "hw_classes.h"

struct final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 4
	// # of read delays: 5
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_store[16];

#else
  hw_uint<32> * final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 4> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(3);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_2_cache {
  final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0;
};



inline void final_merged_2_final_merged_2_update_0_write0_write(hw_uint<32> & final_merged_2_final_merged_2_update_0_write0, final_merged_2_cache& final_merged_2, int d0, int d1) {
  final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.push(final_merged_2_final_merged_2_update_0_write0);
}

inline hw_uint<32>  final_merged_1_rd0_select(final_merged_2_cache& final_merged_2, int d0, int d1) {
	// lexmax events: { final_merged_1_update_0[d0, d1] -> final_merged_2_update_0[d0', d1'] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and -2 + d0 <= 2d0' <= d0 and -2 + d1 <= 2d1' <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 <= 6 and d1 <= 6 and 2d0' >= -1 + d0 and 2d1' >= -1 + d1) or ((1 + d1) mod 2 = 0 and d0 <= 6 and d1 > 0 and 2d0' >= -1 + d0 and 2d1' < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and d1 <= 6 and 2d0' < d0 and 2d1' >= -1 + d1)); final_merged_1_update_0[d0 = 7, d1] -> final_merged_2_update_0[d0' = 3, d1'] : (1 + d1) mod 2 = 0 and 0 < d1 <= 7 and 0 <= d1' <= 3 and -2 + d1 <= 2d1' < d1 }
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 5 - d0 >= 0 && -1 + d1 >= 0 && 7 - d1 >= 0) ? ((3 - floord(2*d0, 4))) : 0);
	return value_final_merged_2_final_merged_2_update_0_write0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<32> final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2_cache& final_merged_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_1_rd0_res = final_merged_1_rd0_select(final_merged_2, d0, d1);
	set_at<0, 32>(result, final_merged_1_rd0_res);
	return result;
}

// final_merged_2_update_0_write
//	final_merged_2_final_merged_2_update_0_write0
inline void final_merged_2_final_merged_2_update_0_write_bundle_write(hw_uint<32>& final_merged_2_update_0_write, final_merged_2_cache& final_merged_2, int d0, int d1) {
	hw_uint<32>  final_merged_2_final_merged_2_update_0_write0_res = final_merged_2_update_0_write.extract<0, 31>();
	final_merged_2_final_merged_2_update_0_write0_write(final_merged_2_final_merged_2_update_0_write0_res, final_merged_2, d0, d1);
}



#include "hw_classes.h"

struct fused_level_0_fused_level_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  fused_level_0_fused_level_0_update_0_write0_merged_banks_1_store[256];

#else
  hw_uint<32> * fused_level_0_fused_level_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_cache {
  fused_level_0_fused_level_0_update_0_write0_merged_banks_1_cache fused_level_0_fused_level_0_update_0_write0_merged_banks_1;
};



inline void fused_level_0_fused_level_0_update_0_write0_write(hw_uint<32> & fused_level_0_fused_level_0_update_0_write0, fused_level_0_cache& fused_level_0, int d0, int d1) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write0_merged_banks_1.push(fused_level_0_fused_level_0_update_0_write0);
}

inline hw_uint<32>  final_merged_0_rd0_select(fused_level_0_cache& fused_level_0, int d0, int d1) {
	// lexmax events: { final_merged_0_update_0[d0, d1] -> fused_level_0_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
	auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_fused_level_0_update_0_write0_merged_banks_1.peek_0();
	return value_fused_level_0_fused_level_0_update_0_write0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
inline hw_uint<32> fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0_cache& fused_level_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_0_rd0_res = final_merged_0_rd0_select(fused_level_0, d0, d1);
	set_at<0, 32>(result, final_merged_0_rd0_res);
	return result;
}

// fused_level_0_update_0_write
//	fused_level_0_fused_level_0_update_0_write0
inline void fused_level_0_fused_level_0_update_0_write_bundle_write(hw_uint<32>& fused_level_0_update_0_write, fused_level_0_cache& fused_level_0, int d0, int d1) {
	hw_uint<32>  fused_level_0_fused_level_0_update_0_write0_res = fused_level_0_update_0_write.extract<0, 31>();
	fused_level_0_fused_level_0_update_0_write0_write(fused_level_0_fused_level_0_update_0_write0_res, fused_level_0, d0, d1);
}



#include "hw_classes.h"

struct fused_level_1_fused_level_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  fused_level_1_fused_level_1_update_0_write0_merged_banks_1_store[64];

#else
  hw_uint<32> * fused_level_1_fused_level_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_1_cache {
  fused_level_1_fused_level_1_update_0_write0_merged_banks_1_cache fused_level_1_fused_level_1_update_0_write0_merged_banks_1;
};



inline void fused_level_1_fused_level_1_update_0_write0_write(hw_uint<32> & fused_level_1_fused_level_1_update_0_write0, fused_level_1_cache& fused_level_1, int d0, int d1) {
  fused_level_1.fused_level_1_fused_level_1_update_0_write0_merged_banks_1.push(fused_level_1_fused_level_1_update_0_write0);
}

inline hw_uint<32>  final_merged_1_rd0_select(fused_level_1_cache& fused_level_1, int d0, int d1) {
	// lexmax events: { final_merged_1_update_0[d0, d1] -> fused_level_1_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
	auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_fused_level_1_update_0_write0_merged_banks_1.peek_0();
	return value_fused_level_1_fused_level_1_update_0_write0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<32> fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1_cache& fused_level_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_1_rd0_res = final_merged_1_rd0_select(fused_level_1, d0, d1);
	set_at<0, 32>(result, final_merged_1_rd0_res);
	return result;
}

// fused_level_1_update_0_write
//	fused_level_1_fused_level_1_update_0_write0
inline void fused_level_1_fused_level_1_update_0_write_bundle_write(hw_uint<32>& fused_level_1_update_0_write, fused_level_1_cache& fused_level_1, int d0, int d1) {
	hw_uint<32>  fused_level_1_fused_level_1_update_0_write0_res = fused_level_1_update_0_write.extract<0, 31>();
	fused_level_1_fused_level_1_update_0_write0_write(fused_level_1_fused_level_1_update_0_write0_res, fused_level_1, d0, d1);
}



#include "hw_classes.h"

struct fused_level_2_fused_level_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  fused_level_2_fused_level_2_update_0_write0_merged_banks_1_store[16];

#else
  hw_uint<32> * fused_level_2_fused_level_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_2_cache {
  fused_level_2_fused_level_2_update_0_write0_merged_banks_1_cache fused_level_2_fused_level_2_update_0_write0_merged_banks_1;
};



inline void fused_level_2_fused_level_2_update_0_write0_write(hw_uint<32> & fused_level_2_fused_level_2_update_0_write0, fused_level_2_cache& fused_level_2, int d0, int d1) {
  fused_level_2.fused_level_2_fused_level_2_update_0_write0_merged_banks_1.push(fused_level_2_fused_level_2_update_0_write0);
}

inline hw_uint<32>  final_merged_2_rd0_select(fused_level_2_cache& fused_level_2, int d0, int d1) {
	// lexmax events: { final_merged_2_update_0[d0, d1] -> fused_level_2_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
	auto value_fused_level_2_fused_level_2_update_0_write0 = fused_level_2.fused_level_2_fused_level_2_update_0_write0_merged_banks_1.peek_0();
	return value_fused_level_2_fused_level_2_update_0_write0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<32> fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2_cache& fused_level_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_2, d0, d1);
	set_at<0, 32>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_2_update_0_write
//	fused_level_2_fused_level_2_update_0_write0
inline void fused_level_2_fused_level_2_update_0_write_bundle_write(hw_uint<32>& fused_level_2_update_0_write, fused_level_2_cache& fused_level_2, int d0, int d1) {
	hw_uint<32>  fused_level_2_fused_level_2_update_0_write0_res = fused_level_2_update_0_write.extract<0, 31>();
	fused_level_2_fused_level_2_update_0_write0_write(fused_level_2_fused_level_2_update_0_write0_res, fused_level_2, d0, d1);
}



#include "hw_classes.h"

struct fused_level_3_fused_level_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 2
	// # of read delays: 2
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  fused_level_3_fused_level_3_update_0_write0_merged_banks_1_store[4];

#else
  hw_uint<32> * fused_level_3_fused_level_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	fifo<hw_uint<32> , 2> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }

	inline hw_uint<32>  peek_0() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		return f.peek(1);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_3_cache {
  fused_level_3_fused_level_3_update_0_write0_merged_banks_1_cache fused_level_3_fused_level_3_update_0_write0_merged_banks_1;
};



inline void fused_level_3_fused_level_3_update_0_write0_write(hw_uint<32> & fused_level_3_fused_level_3_update_0_write0, fused_level_3_cache& fused_level_3, int d0, int d1) {
  fused_level_3.fused_level_3_fused_level_3_update_0_write0_merged_banks_1.push(fused_level_3_fused_level_3_update_0_write0);
}

inline hw_uint<32>  final_merged_2_rd0_select(fused_level_3_cache& fused_level_3, int d0, int d1) {
	// lexmax events: { final_merged_2_update_0[d0, d1] -> fused_level_3_update_0[d0', d1'] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -2 + d0 <= 2d0' <= d0 and -2 + d1 <= 2d1' <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 <= 2 and d1 <= 2 and 2d0' >= -1 + d0 and 2d1' >= -1 + d1) or ((1 + d1) mod 2 = 0 and d0 <= 2 and d1 > 0 and 2d0' >= -1 + d0 and 2d1' < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and d1 <= 2 and 2d0' < d0 and 2d1' >= -1 + d1)); final_merged_2_update_0[d0 = 3, d1] -> fused_level_3_update_0[d0' = 1, d1'] : (1 + d1) mod 2 = 0 and 0 < d1 <= 3 and 0 <= d1' <= 1 and -2 + d1 <= 2d1' < d1 }
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_fused_level_3_fused_level_3_update_0_write0 = fused_level_3.fused_level_3_fused_level_3_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 1 - d0 >= 0 && -1 + d1 >= 0 && 3 - d1 >= 0) ? (1) : 0);
	return value_fused_level_3_fused_level_3_update_0_write0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<32> fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3_cache& fused_level_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_3, d0, d1);
	set_at<0, 32>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_3_update_0_write
//	fused_level_3_fused_level_3_update_0_write0
inline void fused_level_3_fused_level_3_update_0_write_bundle_write(hw_uint<32>& fused_level_3_update_0_write, fused_level_3_cache& fused_level_3, int d0, int d1) {
	hw_uint<32>  fused_level_3_fused_level_3_update_0_write0_res = fused_level_3_update_0_write.extract<0, 31>();
	fused_level_3_fused_level_3_update_0_write0_write(fused_level_3_fused_level_3_update_0_write0_res, fused_level_3, d0, d1);
}



#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  in_in_update_0_write0_merged_banks_2_store[529];

#else
  hw_uint<32> * in_in_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct in_cache {
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline hw_uint<32>  bright_rd0_select(in_cache& in, int d0, int d1) {
	// lexmax events: { bright_update_0[d0, d1] -> in_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
	return value_in_in_update_0_write0;
}

inline hw_uint<32>  dark_rd0_select(in_cache& in, int d0, int d1) {
	// lexmax events: { dark_update_0[d0, d1] -> in_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
	return value_in_in_update_0_write0;
}

// # of bundles = 3
// bright_update_0_read
//	bright_rd0
inline hw_uint<32> in_bright_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_rd0_res = bright_rd0_select(in, d0, d1);
	set_at<0, 32>(result, bright_rd0_res);
	return result;
}

// dark_update_0_read
//	dark_rd0
inline hw_uint<32> in_dark_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_rd0_res = dark_rd0_select(in, d0, d1);
	set_at<0, 32>(result, dark_rd0_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<32>& in_update_0_write, in_cache& in, int d0, int d1) {
	hw_uint<32>  in_in_update_0_write0_res = in_update_0_write.extract<0, 31>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1);
}



#include "hw_classes.h"

struct weight_sums_weight_sums_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  weight_sums_weight_sums_update_0_write0_merged_banks_2_store[529];

#else
  hw_uint<32> * weight_sums_weight_sums_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return 0;  }

  void write(hw_uint<32> & value, int d0, int d1) { }

	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in weight_sums_weight_sums_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct weight_sums_cache {
  weight_sums_weight_sums_update_0_write0_merged_banks_2_cache weight_sums_weight_sums_update_0_write0_merged_banks_2;
};



inline void weight_sums_weight_sums_update_0_write0_write(hw_uint<32> & weight_sums_weight_sums_update_0_write0, weight_sums_cache& weight_sums, int d0, int d1) {
  weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.push(weight_sums_weight_sums_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
	// lexmax events: { bright_weights_normed_update_0[d0, d1] -> weight_sums_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
	return value_weight_sums_weight_sums_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
	// lexmax events: { dark_weights_normed_update_0[d0, d1] -> weight_sums_update_0[d0' = d0, d1' = d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
	auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
	return value_weight_sums_weight_sums_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
inline hw_uint<32> weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(weight_sums, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_rd0_res);
	return result;
}

// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
inline hw_uint<32> weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(weight_sums, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_rd0_res);
	return result;
}

// weight_sums_update_0_write
//	weight_sums_weight_sums_update_0_write0
inline void weight_sums_weight_sums_update_0_write_bundle_write(hw_uint<32>& weight_sums_update_0_write, weight_sums_cache& weight_sums, int d0, int d1) {
	hw_uint<32>  weight_sums_weight_sums_update_0_write0_res = weight_sums_update_0_write.extract<0, 31>();
	weight_sums_weight_sums_update_0_write0_write(weight_sums_weight_sums_update_0_write0_res, weight_sums, d0, d1);
}





// Operation logic
inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
	auto compute_result = exposure_weight(dark_0_c__0_value);
	// Produce: dark_weights
	dark_weights_dark_weights_update_0_write_bundle_write(compute_result, dark_weights, d0, d1);
}

inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, weight_sums_cache& weight_sums, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);
	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);
	auto compute_result = f_divide(dark_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(compute_result, dark_weights_normed, d0, d1);
}

inline void bright_gauss_blur_2_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_gauss_blur_2
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_gauss_blur_2, d0, d1);
}

inline void dark_gauss_blur_2_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_gauss_blur_2
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_gauss_blur_2, d0, d1);
}

inline void bright_gauss_blur_1_update_0(bright_cache& bright, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_gauss_blur_1_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_0_c__0_value);
	// Produce: bright_gauss_blur_1
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_gauss_blur_1, d0, d1);
}

inline void dark_gauss_ds_2_update_0(dark_gauss_blur_2_cache& dark_gauss_blur_2, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// Consume: dark_gauss_blur_2
	auto dark_gauss_blur_2_0_c__0_value = dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_blur_2_0_c__0_value);
	// Produce: dark_gauss_ds_2
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_gauss_ds_2, d0, d1);
}

inline void bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_2
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_2, d0, d1);
}

inline void dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_2
	auto dark_weights_normed_gauss_blur_2_0_c__0_value = dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2/* source_delay */, d0, d1);
	auto compute_result = id(dark_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_2
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_2, d0, d1);
}

inline void bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_3
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_3, d0, d1);
}

inline void bright_laplace_diff_1_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_1_cache& bright_laplace_us_1, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);
	// Consume: bright_laplace_us_1
	auto bright_laplace_us_1_0_c__0_value = bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1/* source_delay */, d0, d1);
	auto compute_result = diff(bright_gauss_ds_1_0_c__0_value, bright_laplace_us_1_0_c__0_value);
	// Produce: bright_laplace_diff_1
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(compute_result, bright_laplace_diff_1, d0, d1);
}

inline void fused_level_3_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, fused_level_3_cache& fused_level_3, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);
	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);
	// Consume: bright_weights_normed_gauss_ds_3
	auto bright_weights_normed_gauss_ds_3_0_c__0_value = bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3/* source_delay */, d0, d1);
	// Consume: dark_weights_normed_gauss_ds_3
	auto dark_weights_normed_gauss_ds_3_0_c__0_value = dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3/* source_delay */, d0, d1);
	auto compute_result = merge_exposures(bright_gauss_ds_3_0_c__0_value, dark_gauss_ds_3_0_c__0_value, bright_weights_normed_gauss_ds_3_0_c__0_value, dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: fused_level_3
	fused_level_3_fused_level_3_update_0_write_bundle_write(compute_result, fused_level_3, d0, d1);
}

inline void bright_laplace_diff_0_update_0(bright_cache& bright, bright_laplace_us_0_cache& bright_laplace_us_0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_laplace_diff_0_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
	// Consume: bright_laplace_us_0
	auto bright_laplace_us_0_0_c__0_value = bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0/* source_delay */, d0, d1);
	auto compute_result = diff(bright_0_c__0_value, bright_laplace_us_0_0_c__0_value);
	// Produce: bright_laplace_diff_0
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(compute_result, bright_laplace_diff_0, d0, d1);
}

inline void fused_level_2_update_0(bright_laplace_diff_2_cache& bright_laplace_diff_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, fused_level_2_cache& fused_level_2, int d0, int d1) {
	// Consume: bright_laplace_diff_2
	auto bright_laplace_diff_2_0_c__0_value = bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2/* source_delay */, d0, d1);
	// Consume: dark_laplace_diff_2
	auto dark_laplace_diff_2_0_c__0_value = dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2/* source_delay */, d0, d1);
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = merge_exposures(bright_laplace_diff_2_0_c__0_value, dark_laplace_diff_2_0_c__0_value, bright_weights_normed_gauss_ds_2_0_c__0_value, dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: fused_level_2
	fused_level_2_fused_level_2_update_0_write_bundle_write(compute_result, fused_level_2, d0, d1);
}

inline void bright_weights_update_0(bright_cache& bright, bright_weights_cache& bright_weights, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_weights_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
	auto compute_result = exposure_weight(bright_0_c__0_value);
	// Produce: bright_weights
	bright_weights_bright_weights_update_0_write_bundle_write(compute_result, bright_weights, d0, d1);
}

inline void bright_update_0(in_cache& in, bright_cache& bright, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_bright_update_0_read_bundle_read(in/* source_delay */, d0, d1);
	auto compute_result = id(in_0_c__0_value);
	// Produce: bright
	bright_bright_update_0_write_bundle_write(compute_result, bright, d0, d1);
}

inline void weight_sums_update_0(dark_weights_cache& dark_weights, bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_weight_sums_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);
	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_weight_sums_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);
	auto compute_result = add(dark_weights_0_c__0_value, bright_weights_0_c__0_value);
	// Produce: weight_sums
	weight_sums_weight_sums_update_0_write_bundle_write(compute_result, weight_sums, d0, d1);
}

inline void dark_gauss_blur_1_update_0(dark_cache& dark, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_gauss_blur_1_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_0_c__0_value);
	// Produce: dark_gauss_blur_1
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_gauss_blur_1, d0, d1);
}

inline void bright_weights_normed_update_0(bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);
	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);
	auto compute_result = f_divide(bright_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: bright_weights_normed
	bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(compute_result, bright_weights_normed, d0, d1);
}

inline void dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed_cache& dark_weights_normed, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_weights_normed_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_1
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_1, d0, d1);
}

inline void dark_gauss_ds_1_update_0(dark_gauss_blur_1_cache& dark_gauss_blur_1, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// Consume: dark_gauss_blur_1
	auto dark_gauss_blur_1_0_c__0_value = dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_blur_1_0_c__0_value);
	// Produce: dark_gauss_ds_1
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_gauss_ds_1, d0, d1);
}

inline void bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed_cache& bright_weights_normed, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_weights_normed_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_1
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_1, d0, d1);
}

inline void bright_gauss_ds_1_update_0(bright_gauss_blur_1_cache& bright_gauss_blur_1, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// Consume: bright_gauss_blur_1
	auto bright_gauss_blur_1_0_c__0_value = bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_blur_1_0_c__0_value);
	// Produce: bright_gauss_ds_1
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_gauss_ds_1, d0, d1);
}

inline void dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_1
	auto dark_weights_normed_gauss_blur_1_0_c__0_value = dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1/* source_delay */, d0, d1);
	auto compute_result = id(dark_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_1
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_1, d0, d1);
}

inline void dark_laplace_us_1_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_laplace_us_1
	dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(compute_result, dark_laplace_us_1, d0, d1);
}

inline void dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_2
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_2, d0, d1);
}

inline void dark_gauss_blur_3_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_gauss_blur_3
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_gauss_blur_3, d0, d1);
}

inline void bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_1
	auto bright_weights_normed_gauss_blur_1_0_c__0_value = bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1/* source_delay */, d0, d1);
	auto compute_result = id(bright_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_1
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_1, d0, d1);
}

inline void bright_gauss_ds_2_update_0(bright_gauss_blur_2_cache& bright_gauss_blur_2, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// Consume: bright_gauss_blur_2
	auto bright_gauss_blur_2_0_c__0_value = bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_blur_2_0_c__0_value);
	// Produce: bright_gauss_ds_2
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_gauss_ds_2, d0, d1);
}

inline void bright_gauss_blur_3_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_gauss_blur_3
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_gauss_blur_3, d0, d1);
}

inline void dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_3
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_3, d0, d1);
}

inline void dark_gauss_ds_3_update_0(dark_gauss_blur_3_cache& dark_gauss_blur_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	// Consume: dark_gauss_blur_3
	auto dark_gauss_blur_3_0_c__0_value = dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_blur_3_0_c__0_value);
	// Produce: dark_gauss_ds_3
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_gauss_ds_3, d0, d1);
}

inline void bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_2
	auto bright_weights_normed_gauss_blur_2_0_c__0_value = bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2/* source_delay */, d0, d1);
	auto compute_result = id(bright_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_2
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_2, d0, d1);
}

inline void final_merged_0_update_0(final_merged_1_cache& final_merged_1, fused_level_0_cache& fused_level_0, final_merged_0_cache& final_merged_0, int d0, int d1) {
	// Consume: final_merged_1
	auto final_merged_1_0_c__0_value = final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1/* source_delay */, d0, d1);
	// Consume: fused_level_0
	auto fused_level_0_0_c__0_value = fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0/* source_delay */, d0, d1);
	auto compute_result = add(final_merged_1_0_c__0_value, fused_level_0_0_c__0_value);
	// Produce: final_merged_0
	final_merged_0_final_merged_0_update_0_write_bundle_write(compute_result, final_merged_0, d0, d1);
}

inline void pyramid_synthetic_exposure_fusion_update_0(final_merged_0_cache& final_merged_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */pyramid_synthetic_exposure_fusion, int d0, int d1) {
	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_pyramid_synthetic_exposure_fusion_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1);
	auto compute_result = id(final_merged_0_0_c__0_value);
	// Produce: pyramid_synthetic_exposure_fusion
	pyramid_synthetic_exposure_fusion.write(compute_result);
}

inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1);
	auto compute_result = scale_exposure(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(compute_result, dark, d0, d1);
}

inline void final_merged_1_update_0(final_merged_2_cache& final_merged_2, fused_level_1_cache& fused_level_1, final_merged_1_cache& final_merged_1, int d0, int d1) {
	// Consume: final_merged_2
	auto final_merged_2_0_c__0_value = final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2/* source_delay */, d0, d1);
	// Consume: fused_level_1
	auto fused_level_1_0_c__0_value = fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1/* source_delay */, d0, d1);
	auto compute_result = add(final_merged_2_0_c__0_value, fused_level_1_0_c__0_value);
	// Produce: final_merged_1
	final_merged_1_final_merged_1_update_0_write_bundle_write(compute_result, final_merged_1, d0, d1);
}

inline void in_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1);
}

inline void dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_3
	auto dark_weights_normed_gauss_blur_3_0_c__0_value = dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3/* source_delay */, d0, d1);
	auto compute_result = id(dark_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_3
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_3, d0, d1);
}

inline void dark_laplace_us_2_update_0(dark_gauss_ds_3_cache& dark_gauss_ds_3, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_ds_3_0_c__0_value);
	// Produce: dark_laplace_us_2
	dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(compute_result, dark_laplace_us_2, d0, d1);
}

inline void dark_laplace_us_0_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_laplace_us_0
	dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(compute_result, dark_laplace_us_0, d0, d1);
}

inline void dark_laplace_diff_2_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_2_cache& dark_laplace_us_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);
	// Consume: dark_laplace_us_2
	auto dark_laplace_us_2_0_c__0_value = dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2/* source_delay */, d0, d1);
	auto compute_result = diff(dark_gauss_ds_2_0_c__0_value, dark_laplace_us_2_0_c__0_value);
	// Produce: dark_laplace_diff_2
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(compute_result, dark_laplace_diff_2, d0, d1);
}

inline void dark_laplace_diff_1_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_1_cache& dark_laplace_us_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);
	// Consume: dark_laplace_us_1
	auto dark_laplace_us_1_0_c__0_value = dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1/* source_delay */, d0, d1);
	auto compute_result = diff(dark_gauss_ds_1_0_c__0_value, dark_laplace_us_1_0_c__0_value);
	// Produce: dark_laplace_diff_1
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(compute_result, dark_laplace_diff_1, d0, d1);
}

inline void dark_laplace_diff_0_update_0(dark_cache& dark, dark_laplace_us_0_cache& dark_laplace_us_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_laplace_diff_0_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
	// Consume: dark_laplace_us_0
	auto dark_laplace_us_0_0_c__0_value = dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0/* source_delay */, d0, d1);
	auto compute_result = diff(dark_0_c__0_value, dark_laplace_us_0_0_c__0_value);
	// Produce: dark_laplace_diff_0
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(compute_result, dark_laplace_diff_0, d0, d1);
}

inline void bright_laplace_us_2_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_ds_3_0_c__0_value);
	// Produce: bright_laplace_us_2
	bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(compute_result, bright_laplace_us_2, d0, d1);
}

inline void bright_gauss_ds_3_update_0(bright_gauss_blur_3_cache& bright_gauss_blur_3, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	// Consume: bright_gauss_blur_3
	auto bright_gauss_blur_3_0_c__0_value = bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_blur_3_0_c__0_value);
	// Produce: bright_gauss_ds_3
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_gauss_ds_3, d0, d1);
}

inline void bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_3
	auto bright_weights_normed_gauss_blur_3_0_c__0_value = bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3/* source_delay */, d0, d1);
	auto compute_result = id(bright_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_3
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_3, d0, d1);
}

inline void bright_laplace_us_1_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_laplace_us_1
	bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(compute_result, bright_laplace_us_1, d0, d1);
}

inline void bright_laplace_us_0_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_laplace_us_0
	bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(compute_result, bright_laplace_us_0, d0, d1);
}

inline void bright_laplace_diff_2_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_2_cache& bright_laplace_us_2, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);
	// Consume: bright_laplace_us_2
	auto bright_laplace_us_2_0_c__0_value = bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2/* source_delay */, d0, d1);
	auto compute_result = diff(bright_gauss_ds_2_0_c__0_value, bright_laplace_us_2_0_c__0_value);
	// Produce: bright_laplace_diff_2
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(compute_result, bright_laplace_diff_2, d0, d1);
}

inline void fused_level_1_update_0(bright_laplace_diff_1_cache& bright_laplace_diff_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, fused_level_1_cache& fused_level_1, int d0, int d1) {
	// Consume: bright_laplace_diff_1
	auto bright_laplace_diff_1_0_c__0_value = bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1/* source_delay */, d0, d1);
	// Consume: dark_laplace_diff_1
	auto dark_laplace_diff_1_0_c__0_value = dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1/* source_delay */, d0, d1);
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = merge_exposures(bright_laplace_diff_1_0_c__0_value, dark_laplace_diff_1_0_c__0_value, bright_weights_normed_gauss_ds_1_0_c__0_value, dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: fused_level_1
	fused_level_1_fused_level_1_update_0_write_bundle_write(compute_result, fused_level_1, d0, d1);
}

inline void fused_level_0_update_0(bright_laplace_diff_0_cache& bright_laplace_diff_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, bright_weights_normed_cache& bright_weights_normed, dark_weights_normed_cache& dark_weights_normed, fused_level_0_cache& fused_level_0, int d0, int d1) {
	// Consume: bright_laplace_diff_0
	auto bright_laplace_diff_0_0_c__0_value = bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0/* source_delay */, d0, d1);
	// Consume: dark_laplace_diff_0
	auto dark_laplace_diff_0_0_c__0_value = dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0/* source_delay */, d0, d1);
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);
	auto compute_result = merge_exposures(bright_laplace_diff_0_0_c__0_value, dark_laplace_diff_0_0_c__0_value, bright_weights_normed_0_c__0_value, dark_weights_normed_0_c__0_value);
	// Produce: fused_level_0
	fused_level_0_fused_level_0_update_0_write_bundle_write(compute_result, fused_level_0, d0, d1);
}

inline void final_merged_2_update_0(fused_level_3_cache& fused_level_3, fused_level_2_cache& fused_level_2, final_merged_2_cache& final_merged_2, int d0, int d1) {
	// Consume: fused_level_3
	auto fused_level_3_0_c__0_value = fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3/* source_delay */, d0, d1);
	// Consume: fused_level_2
	auto fused_level_2_0_c__0_value = fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2/* source_delay */, d0, d1);
	auto compute_result = add(fused_level_3_0_c__0_value, fused_level_2_0_c__0_value);
	// Produce: final_merged_2
	final_merged_2_final_merged_2_update_0_write_bundle_write(compute_result, final_merged_2, d0, d1);
}

// Driver function
void pyramid_synthetic_exposure_fusion_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */pyramid_synthetic_exposure_fusion) {
  bright_cache bright;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_blur_1_cache bright_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_blur_1 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_blur_2_cache bright_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_blur_2 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_blur_3_cache bright_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_blur_3 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_ds_1_cache bright_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_ds_1 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_ds_2_cache bright_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_ds_2 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_ds_3_cache bright_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_ds_3 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_diff_0_cache bright_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_diff_0 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_diff_1_cache bright_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_diff_1 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_diff_2_cache bright_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_diff_2 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_us_0_cache bright_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_us_0 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_us_1_cache bright_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_us_1 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_us_2_cache bright_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_us_2 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_cache bright_weights;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_cache bright_weights_normed;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_blur_1_cache bright_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_blur_1 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_blur_2_cache bright_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_blur_2 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_blur_3_cache bright_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_blur_3 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_ds_1_cache bright_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_ds_1 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_ds_2_cache bright_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_ds_2 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_ds_3_cache bright_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_ds_3 inter false
#endif // __VIVADO_SYNTH__

  dark_cache dark;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_blur_1_cache dark_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_blur_1 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_blur_2_cache dark_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_blur_2 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_blur_3_cache dark_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_blur_3 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_ds_1_cache dark_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_ds_1 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_ds_2_cache dark_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_ds_2 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_ds_3_cache dark_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_ds_3 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_diff_0_cache dark_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_diff_0 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_diff_1_cache dark_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_diff_1 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_diff_2_cache dark_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_diff_2 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_us_0_cache dark_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_us_0 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_us_1_cache dark_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_us_1 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_us_2_cache dark_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_us_2 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_cache dark_weights;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_cache dark_weights_normed;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_blur_1_cache dark_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_blur_1 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_blur_2_cache dark_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_blur_2 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_blur_3_cache dark_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_blur_3 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_ds_1_cache dark_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_ds_1 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_ds_2_cache dark_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_ds_2 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_ds_3_cache dark_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_ds_3 inter false
#endif // __VIVADO_SYNTH__

  final_merged_0_cache final_merged_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=final_merged_0 inter false
#endif // __VIVADO_SYNTH__

  final_merged_1_cache final_merged_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=final_merged_1 inter false
#endif // __VIVADO_SYNTH__

  final_merged_2_cache final_merged_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=final_merged_2 inter false
#endif // __VIVADO_SYNTH__

  fused_level_0_cache fused_level_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_0 inter false
#endif // __VIVADO_SYNTH__

  fused_level_1_cache fused_level_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_1 inter false
#endif // __VIVADO_SYNTH__

  fused_level_2_cache fused_level_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_2 inter false
#endif // __VIVADO_SYNTH__

  fused_level_3_cache fused_level_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_3 inter false
#endif // __VIVADO_SYNTH__

  in_cache in;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif // __VIVADO_SYNTH__

  weight_sums_cache weight_sums;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=weight_sums inter false
#endif // __VIVADO_SYNTH__

// arg list for dark_weights_update_0 = dark, dark_weights
// arg list for dark_weights_normed_update_0 = dark_weights, weight_sums, dark_weights_normed
// arg list for bright_gauss_blur_2_update_0 = bright_gauss_ds_1, bright_gauss_blur_2
// arg list for dark_gauss_blur_2_update_0 = dark_gauss_ds_1, dark_gauss_blur_2
// arg list for bright_gauss_blur_1_update_0 = bright, bright_gauss_blur_1
// arg list for dark_gauss_ds_2_update_0 = dark_gauss_blur_2, dark_gauss_ds_2
// arg list for bright_weights_normed_gauss_blur_2_update_0 = bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2
// arg list for dark_weights_normed_gauss_ds_2_update_0 = dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2
// arg list for bright_weights_normed_gauss_blur_3_update_0 = bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3
// arg list for bright_laplace_diff_1_update_0 = bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1
// arg list for fused_level_3_update_0 = bright_gauss_ds_3, dark_gauss_ds_3, bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3, fused_level_3
// arg list for bright_laplace_diff_0_update_0 = bright, bright_laplace_us_0, bright_laplace_diff_0
// arg list for fused_level_2_update_0 = bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2
// arg list for bright_weights_update_0 = bright, bright_weights
// arg list for bright_update_0 = in, bright
// arg list for weight_sums_update_0 = dark_weights, bright_weights, weight_sums
// arg list for dark_gauss_blur_1_update_0 = dark, dark_gauss_blur_1
// arg list for bright_weights_normed_update_0 = bright_weights, weight_sums, bright_weights_normed
// arg list for dark_weights_normed_gauss_blur_1_update_0 = dark_weights_normed, dark_weights_normed_gauss_blur_1
// arg list for dark_gauss_ds_1_update_0 = dark_gauss_blur_1, dark_gauss_ds_1
// arg list for bright_weights_normed_gauss_blur_1_update_0 = bright_weights_normed, bright_weights_normed_gauss_blur_1
// arg list for bright_gauss_ds_1_update_0 = bright_gauss_blur_1, bright_gauss_ds_1
// arg list for dark_weights_normed_gauss_ds_1_update_0 = dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1
// arg list for dark_laplace_us_1_update_0 = dark_gauss_ds_2, dark_laplace_us_1
// arg list for dark_weights_normed_gauss_blur_2_update_0 = dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2
// arg list for dark_gauss_blur_3_update_0 = dark_gauss_ds_2, dark_gauss_blur_3
// arg list for bright_weights_normed_gauss_ds_1_update_0 = bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1
// arg list for bright_gauss_ds_2_update_0 = bright_gauss_blur_2, bright_gauss_ds_2
// arg list for bright_gauss_blur_3_update_0 = bright_gauss_ds_2, bright_gauss_blur_3
// arg list for dark_weights_normed_gauss_blur_3_update_0 = dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3
// arg list for dark_gauss_ds_3_update_0 = dark_gauss_blur_3, dark_gauss_ds_3
// arg list for bright_weights_normed_gauss_ds_2_update_0 = bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2
// arg list for final_merged_0_update_0 = final_merged_1, fused_level_0, final_merged_0
// arg list for pyramid_synthetic_exposure_fusion_update_0 = final_merged_0, pyramid_synthetic_exposure_fusion
// arg list for dark_update_0 = in, dark
// arg list for final_merged_1_update_0 = final_merged_2, fused_level_1, final_merged_1
// arg list for in_update_0 = in_off_chip, in
// arg list for dark_weights_normed_gauss_ds_3_update_0 = dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3
// arg list for dark_laplace_us_2_update_0 = dark_gauss_ds_3, dark_laplace_us_2
// arg list for dark_laplace_us_0_update_0 = dark_gauss_ds_1, dark_laplace_us_0
// arg list for dark_laplace_diff_2_update_0 = dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2
// arg list for dark_laplace_diff_1_update_0 = dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1
// arg list for dark_laplace_diff_0_update_0 = dark, dark_laplace_us_0, dark_laplace_diff_0
// arg list for bright_laplace_us_2_update_0 = bright_gauss_ds_3, bright_laplace_us_2
// arg list for bright_gauss_ds_3_update_0 = bright_gauss_blur_3, bright_gauss_ds_3
// arg list for bright_weights_normed_gauss_ds_3_update_0 = bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3
// arg list for bright_laplace_us_1_update_0 = bright_gauss_ds_2, bright_laplace_us_1
// arg list for bright_laplace_us_0_update_0 = bright_gauss_ds_1, bright_laplace_us_0
// arg list for bright_laplace_diff_2_update_0 = bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2
// arg list for fused_level_1_update_0 = bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1
// arg list for fused_level_0_update_0 = bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0
// arg list for final_merged_2_update_0 = fused_level_3, fused_level_2, final_merged_2
/* ISL CODE STRING
for (int c0 = 0; c0 <= 29; c0++) {
  for (int c1 = 0; c1 <= 29; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      dark_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      bright_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      dark_weights_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      bright_weights_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      weight_sums_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      dark_weights_normed_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
      dark_gauss_blur_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      bright_weights_normed_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
      bright_gauss_blur_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
      dark_weights_normed_gauss_blur_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
      dark_gauss_ds_1_update_0((c1 - 2) / 2, (c0 - 2) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
      dark_gauss_blur_2_update_0((c1 - 6) / 2, (c0 - 6) / 2);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
      bright_weights_normed_gauss_blur_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
      bright_gauss_ds_1_update_0((c1 - 2) / 2, (c0 - 2) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
      bright_gauss_blur_2_update_0((c1 - 6) / 2, (c0 - 6) / 2);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
      dark_weights_normed_gauss_ds_1_update_0((c1 - 2) / 2, (c0 - 2) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
      dark_weights_normed_gauss_blur_2_update_0((c1 - 6) / 2, (c0 - 6) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
      dark_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
      dark_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
      bright_weights_normed_gauss_ds_1_update_0((c1 - 2) / 2, (c0 - 2) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
      bright_weights_normed_gauss_blur_2_update_0((c1 - 6) / 2, (c0 - 6) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
      bright_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
      bright_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
      dark_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
      dark_weights_normed_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      dark_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
      bright_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
      bright_weights_normed_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      bright_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      dark_weights_normed_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      dark_laplace_us_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      dark_laplace_us_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      dark_laplace_us_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      dark_laplace_diff_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      dark_laplace_diff_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      dark_laplace_diff_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      bright_weights_normed_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      bright_laplace_us_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      bright_laplace_us_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      bright_laplace_us_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      bright_laplace_diff_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      bright_laplace_diff_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      bright_laplace_diff_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      fused_level_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      fused_level_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      fused_level_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      fused_level_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      final_merged_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      final_merged_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      final_merged_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      pyramid_synthetic_exposure_fusion_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

  }
}

*/
/* CUSTOM CODE STRING
for (int c0 = 0; c0 <= 29; c0++) {
  for (int c1 = 0; c1 <= 29; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      dark_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      bright_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      dark_weights_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      bright_weights_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      weight_sums_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      dark_weights_normed_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
      dark_gauss_blur_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
      bright_weights_normed_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
      bright_gauss_blur_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
      dark_weights_normed_gauss_blur_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
      dark_gauss_ds_1_update_0((c1 - 2) / 2, (c0 - 2) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
      dark_gauss_blur_2_update_0((c1 - 6) / 2, (c0 - 6) / 2);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
      bright_weights_normed_gauss_blur_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
      bright_gauss_ds_1_update_0((c1 - 2) / 2, (c0 - 2) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
      bright_gauss_blur_2_update_0((c1 - 6) / 2, (c0 - 6) / 2);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
      dark_weights_normed_gauss_ds_1_update_0((c1 - 2) / 2, (c0 - 2) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
      dark_weights_normed_gauss_blur_2_update_0((c1 - 6) / 2, (c0 - 6) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
      dark_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
      dark_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
      bright_weights_normed_gauss_ds_1_update_0((c1 - 2) / 2, (c0 - 2) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
      bright_weights_normed_gauss_blur_2_update_0((c1 - 6) / 2, (c0 - 6) / 2);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
      bright_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
      bright_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
      dark_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
      dark_weights_normed_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      dark_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
      bright_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
      bright_weights_normed_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      bright_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      dark_weights_normed_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      dark_laplace_us_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      dark_laplace_us_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      dark_laplace_us_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      dark_laplace_diff_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      dark_laplace_diff_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      dark_laplace_diff_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      bright_weights_normed_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      bright_laplace_us_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      bright_laplace_us_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      bright_laplace_us_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      bright_laplace_diff_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      bright_laplace_diff_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      bright_laplace_diff_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
      fused_level_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      fused_level_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      fused_level_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      fused_level_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
      final_merged_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
    }

    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
      final_merged_1_update_0((c1 - 14) / 2, (c0 - 14) / 2);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      final_merged_0_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
      pyramid_synthetic_exposure_fusion_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

  }
}

*/
	for (int c0 = 0; c0 <= 29; c0++) {
	  for (int c1 = 0; c1 <= 29; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
	in_update_0(in_off_chip, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
	dark_update_0(in, dark, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
	bright_update_0(in, bright, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
	dark_weights_update_0(dark, dark_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
	bright_weights_update_0(bright, bright_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
	weight_sums_update_0(dark_weights, bright_weights, weight_sums, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
	dark_weights_normed_update_0(dark_weights, weight_sums, dark_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
	dark_gauss_blur_1_update_0(dark, dark_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 22) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 22) && ((c0 - 0) % 1 == 0)) {
	bright_weights_normed_update_0(bright_weights, weight_sums, bright_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
	bright_gauss_blur_1_update_0(bright, bright_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
	dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed, dark_weights_normed_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
	dark_gauss_ds_1_update_0(dark_gauss_blur_1, dark_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
	dark_gauss_blur_2_update_0(dark_gauss_ds_1, dark_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 1 == 0)) {
	bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed, bright_weights_normed_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
	bright_gauss_ds_1_update_0(bright_gauss_blur_1, bright_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
	bright_gauss_blur_2_update_0(bright_gauss_ds_1, bright_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
	dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
	dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
	dark_gauss_ds_2_update_0(dark_gauss_blur_2, dark_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
	dark_gauss_blur_3_update_0(dark_gauss_ds_2, dark_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 22) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 22) && ((c0 - 2) % 2 == 0)) {
	bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 2 == 0)) {
	bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
	bright_gauss_ds_2_update_0(bright_gauss_blur_2, bright_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
	bright_gauss_blur_3_update_0(bright_gauss_ds_2, bright_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
	dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
	dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
	dark_gauss_ds_3_update_0(dark_gauss_blur_3, dark_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((6 <= c1 && c1 <= 22) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 22) && ((c0 - 6) % 4 == 0)) {
	bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 4 == 0)) {
	bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
	bright_gauss_ds_3_update_0(bright_gauss_blur_3, bright_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
	dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
	dark_laplace_us_2_update_0(dark_gauss_ds_3, dark_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
	dark_laplace_us_1_update_0(dark_gauss_ds_2, dark_laplace_us_1, (c1 - 14) / 2, (c0 - 14) / 2);
	    }
	
	    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
	dark_laplace_us_0_update_0(dark_gauss_ds_1, dark_laplace_us_0, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
	dark_laplace_diff_2_update_0(dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
	dark_laplace_diff_1_update_0(dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1, (c1 - 14) / 2, (c0 - 14) / 2);
	    }
	
	    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
	dark_laplace_diff_0_update_0(dark, dark_laplace_us_0, dark_laplace_diff_0, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
	bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
	bright_laplace_us_2_update_0(bright_gauss_ds_3, bright_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
	bright_laplace_us_1_update_0(bright_gauss_ds_2, bright_laplace_us_1, (c1 - 14) / 2, (c0 - 14) / 2);
	    }
	
	    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
	bright_laplace_us_0_update_0(bright_gauss_ds_1, bright_laplace_us_0, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
	bright_laplace_diff_2_update_0(bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
	bright_laplace_diff_1_update_0(bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1, (c1 - 14) / 2, (c0 - 14) / 2);
	    }
	
	    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
	bright_laplace_diff_0_update_0(bright, bright_laplace_us_0, bright_laplace_diff_0, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 22) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 22) && ((c0 - 14) % 8 == 0)) {
	fused_level_3_update_0(bright_gauss_ds_3, dark_gauss_ds_3, bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3, fused_level_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
	fused_level_2_update_0(bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
	fused_level_1_update_0(bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1, (c1 - 14) / 2, (c0 - 14) / 2);
	    }
	
	    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
	fused_level_0_update_0(bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 26) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 26) && ((c0 - 14) % 4 == 0)) {
	final_merged_2_update_0(fused_level_3, fused_level_2, final_merged_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 28) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 28) && ((c0 - 14) % 2 == 0)) {
	final_merged_1_update_0(final_merged_2, fused_level_1, final_merged_1, (c1 - 14) / 2, (c0 - 14) / 2);
	    }
	
	    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
	final_merged_0_update_0(final_merged_1, fused_level_0, final_merged_0, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 29) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 29) && ((c0 - 14) % 1 == 0)) {
	pyramid_synthetic_exposure_fusion_update_0(final_merged_0, pyramid_synthetic_exposure_fusion, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	  }
	}
	
}
