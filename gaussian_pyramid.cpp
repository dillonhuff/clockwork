#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_0_cache {
	// Capacity: 67
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 32) capacity = 29
	fifo<int, 29> f5;
	// Parition [32, 33) capacity = 1
	fifo<int, 1> f6;
	// Parition [33, 34) capacity = 1
	fifo<int, 1> f8;
	// Parition [34, 35) capacity = 1
	fifo<int, 1> f10;
	// Parition [35, 64) capacity = 29
	fifo<int, 29> f11;
	// Parition [64, 65) capacity = 1
	fifo<int, 1> f12;
	// Parition [65, 66) capacity = 1
	fifo<int, 1> f14;
	// Parition [66, 66] capacity = 1
	fifo<int, 1> f16;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

	inline int peek_31() {
		return f5.back();
	}

	inline int peek_32() {
		return f6.back();
	}

	inline int peek_33() {
		return f8.back();
	}

	inline int peek_34() {
		return f10.back();
	}

	inline int peek_63() {
		return f11.back();
	}

	inline int peek_64() {
		return f12.back();
	}

	inline int peek_65() {
		return f14.back();
	}

	inline int peek_66() {
		return f16.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 31) {
			return f5.back();
		}
		if (offset == 32) {
			return f6.back();
		}
		if (offset == 33) {
			return f8.back();
		}
		if (offset == 34) {
			return f10.back();
		}
		if (offset == 63) {
			return f11.back();
		}
		if (offset == 64) {
			return f12.back();
		}
		if (offset == 65) {
			return f14.back();
		}
		if (offset == 66) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const int value) {
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



inline void I_store_I_from_in_0_write(int& I_store_I_from_in_0, I_store_I_from_in_0_cache& I_store_I_from_in_0_delay) {
	I_store_I_from_in_0_delay.push(I_store_I_from_in_0);
}

inline int I_I_blr_conv_3_30_10_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek_1();
	return value_I_store_I_from_in_0;
}

inline int I_I_blr_conv_3_30_11_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek_0();
	return value_I_store_I_from_in_0;
}

inline int I_I_blr_conv_3_30_3_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 66 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek_66();
	return value_I_store_I_from_in_0;
}

inline int I_I_blr_conv_3_30_4_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 65 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek_65();
	return value_I_store_I_from_in_0;
}

inline int I_I_blr_conv_3_30_5_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 64 }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c = 29] : 0 <= I_blr_r <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (35 + I_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek_64();
	return value_I_store_I_from_in_0;
}

inline int I_I_blr_conv_3_30_6_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 34 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek_34();
	return value_I_store_I_from_in_0;
}

inline int I_I_blr_conv_3_30_7_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 33 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek_33();
	return value_I_store_I_from_in_0;
}

inline int I_I_blr_conv_3_30_8_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 32 }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c = 29] : 0 <= I_blr_r <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (3 + I_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek_32();
	return value_I_store_I_from_in_0;
}

inline int I_I_blr_conv_3_30_9_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek_2();
	return value_I_store_I_from_in_0;
}

// Bundles...
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_3
//	I_I_blr_conv_3_30_4
//	I_I_blr_conv_3_30_5
//	I_I_blr_conv_3_30_6
//	I_I_blr_conv_3_30_7
//	I_I_blr_conv_3_30_8
//	I_I_blr_conv_3_30_9
//	I_I_blr_conv_3_30_10
//	I_I_blr_conv_3_30_11
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay, int root, int I_blr_r, int I_blr_c) {
	hw_uint<288> result;
	int I_I_blr_conv_3_30_3_res = I_I_blr_conv_3_30_3_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_3_res);
	int I_I_blr_conv_3_30_4_res = I_I_blr_conv_3_30_4_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_4_res);
	int I_I_blr_conv_3_30_5_res = I_I_blr_conv_3_30_5_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_5_res);
	int I_I_blr_conv_3_30_6_res = I_I_blr_conv_3_30_6_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_6_res);
	int I_I_blr_conv_3_30_7_res = I_I_blr_conv_3_30_7_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_7_res);
	int I_I_blr_conv_3_30_8_res = I_I_blr_conv_3_30_8_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_8_res);
	int I_I_blr_conv_3_30_9_res = I_I_blr_conv_3_30_9_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_9_res);
	int I_I_blr_conv_3_30_10_res = I_I_blr_conv_3_30_10_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_10_res);
	int I_I_blr_conv_3_30_11_res = I_I_blr_conv_3_30_11_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_11_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_0
inline void I_store_I_from_in_write_bundle_write(int& /* width = 32*/store_I_from_in_write, I_store_I_from_in_0_cache& I_store_I_from_in_0_delay) {
	I_store_I_from_in_0_write(store_I_from_in_write, I_store_I_from_in_0_delay);
}



#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_2_cache {
	// Capacity: 435
	fifo<int, 435> f;
	inline int peek(const int offset) {
		return f.peek(434 - offset);
	}

	inline int peek_0() {
		return f.peek(0);
	}

	inline int peek_1() {
		return f.peek(1);
	}

	inline int peek_2() {
		return f.peek(2);
	}

	inline int peek_3() {
		return f.peek(3);
	}

	inline int peek_4() {
		return f.peek(4);
	}

	inline int peek_5() {
		return f.peek(5);
	}

	inline int peek_6() {
		return f.peek(6);
	}

	inline int peek_7() {
		return f.peek(7);
	}

	inline int peek_8() {
		return f.peek(8);
	}

	inline int peek_9() {
		return f.peek(9);
	}

	inline int peek_10() {
		return f.peek(10);
	}

	inline int peek_11() {
		return f.peek(11);
	}

	inline int peek_12() {
		return f.peek(12);
	}

	inline int peek_13() {
		return f.peek(13);
	}

	inline int peek_14() {
		return f.peek(14);
	}

	inline int peek_15() {
		return f.peek(15);
	}

	inline int peek_16() {
		return f.peek(16);
	}

	inline int peek_17() {
		return f.peek(17);
	}

	inline int peek_18() {
		return f.peek(18);
	}

	inline int peek_19() {
		return f.peek(19);
	}

	inline int peek_20() {
		return f.peek(20);
	}

	inline int peek_21() {
		return f.peek(21);
	}

	inline int peek_22() {
		return f.peek(22);
	}

	inline int peek_23() {
		return f.peek(23);
	}

	inline int peek_24() {
		return f.peek(24);
	}

	inline int peek_25() {
		return f.peek(25);
	}

	inline int peek_26() {
		return f.peek(26);
	}

	inline int peek_27() {
		return f.peek(27);
	}

	inline int peek_28() {
		return f.peek(28);
	}

	inline int peek_29() {
		return f.peek(29);
	}

	inline int peek_30() {
		return f.peek(30);
	}

	inline int peek_31() {
		return f.peek(31);
	}

	inline int peek_32() {
		return f.peek(32);
	}

	inline int peek_33() {
		return f.peek(33);
	}

	inline int peek_34() {
		return f.peek(34);
	}

	inline int peek_35() {
		return f.peek(35);
	}

	inline int peek_36() {
		return f.peek(36);
	}

	inline int peek_37() {
		return f.peek(37);
	}

	inline int peek_38() {
		return f.peek(38);
	}

	inline int peek_39() {
		return f.peek(39);
	}

	inline int peek_40() {
		return f.peek(40);
	}

	inline int peek_41() {
		return f.peek(41);
	}

	inline int peek_42() {
		return f.peek(42);
	}

	inline int peek_43() {
		return f.peek(43);
	}

	inline int peek_44() {
		return f.peek(44);
	}

	inline int peek_45() {
		return f.peek(45);
	}

	inline int peek_46() {
		return f.peek(46);
	}

	inline int peek_47() {
		return f.peek(47);
	}

	inline int peek_48() {
		return f.peek(48);
	}

	inline int peek_49() {
		return f.peek(49);
	}

	inline int peek_50() {
		return f.peek(50);
	}

	inline int peek_51() {
		return f.peek(51);
	}

	inline int peek_52() {
		return f.peek(52);
	}

	inline int peek_53() {
		return f.peek(53);
	}

	inline int peek_54() {
		return f.peek(54);
	}

	inline int peek_55() {
		return f.peek(55);
	}

	inline int peek_56() {
		return f.peek(56);
	}

	inline int peek_57() {
		return f.peek(57);
	}

	inline int peek_58() {
		return f.peek(58);
	}

	inline int peek_59() {
		return f.peek(59);
	}

	inline int peek_60() {
		return f.peek(60);
	}

	inline int peek_61() {
		return f.peek(61);
	}

	inline int peek_62() {
		return f.peek(62);
	}

	inline int peek_63() {
		return f.peek(63);
	}

	inline int peek_64() {
		return f.peek(64);
	}

	inline int peek_65() {
		return f.peek(65);
	}

	inline int peek_66() {
		return f.peek(66);
	}

	inline int peek_67() {
		return f.peek(67);
	}

	inline int peek_68() {
		return f.peek(68);
	}

	inline int peek_69() {
		return f.peek(69);
	}

	inline int peek_70() {
		return f.peek(70);
	}

	inline int peek_71() {
		return f.peek(71);
	}

	inline int peek_72() {
		return f.peek(72);
	}

	inline int peek_73() {
		return f.peek(73);
	}

	inline int peek_74() {
		return f.peek(74);
	}

	inline int peek_75() {
		return f.peek(75);
	}

	inline int peek_76() {
		return f.peek(76);
	}

	inline int peek_77() {
		return f.peek(77);
	}

	inline int peek_78() {
		return f.peek(78);
	}

	inline int peek_79() {
		return f.peek(79);
	}

	inline int peek_80() {
		return f.peek(80);
	}

	inline int peek_81() {
		return f.peek(81);
	}

	inline int peek_82() {
		return f.peek(82);
	}

	inline int peek_83() {
		return f.peek(83);
	}

	inline int peek_84() {
		return f.peek(84);
	}

	inline int peek_85() {
		return f.peek(85);
	}

	inline int peek_86() {
		return f.peek(86);
	}

	inline int peek_87() {
		return f.peek(87);
	}

	inline int peek_88() {
		return f.peek(88);
	}

	inline int peek_89() {
		return f.peek(89);
	}

	inline int peek_90() {
		return f.peek(90);
	}

	inline int peek_91() {
		return f.peek(91);
	}

	inline int peek_92() {
		return f.peek(92);
	}

	inline int peek_93() {
		return f.peek(93);
	}

	inline int peek_94() {
		return f.peek(94);
	}

	inline int peek_95() {
		return f.peek(95);
	}

	inline int peek_96() {
		return f.peek(96);
	}

	inline int peek_97() {
		return f.peek(97);
	}

	inline int peek_98() {
		return f.peek(98);
	}

	inline int peek_99() {
		return f.peek(99);
	}

	inline int peek_100() {
		return f.peek(100);
	}

	inline int peek_101() {
		return f.peek(101);
	}

	inline int peek_102() {
		return f.peek(102);
	}

	inline int peek_103() {
		return f.peek(103);
	}

	inline int peek_104() {
		return f.peek(104);
	}

	inline int peek_105() {
		return f.peek(105);
	}

	inline int peek_106() {
		return f.peek(106);
	}

	inline int peek_107() {
		return f.peek(107);
	}

	inline int peek_108() {
		return f.peek(108);
	}

	inline int peek_109() {
		return f.peek(109);
	}

	inline int peek_110() {
		return f.peek(110);
	}

	inline int peek_111() {
		return f.peek(111);
	}

	inline int peek_112() {
		return f.peek(112);
	}

	inline int peek_113() {
		return f.peek(113);
	}

	inline int peek_114() {
		return f.peek(114);
	}

	inline int peek_115() {
		return f.peek(115);
	}

	inline int peek_116() {
		return f.peek(116);
	}

	inline int peek_117() {
		return f.peek(117);
	}

	inline int peek_118() {
		return f.peek(118);
	}

	inline int peek_119() {
		return f.peek(119);
	}

	inline int peek_120() {
		return f.peek(120);
	}

	inline int peek_121() {
		return f.peek(121);
	}

	inline int peek_122() {
		return f.peek(122);
	}

	inline int peek_123() {
		return f.peek(123);
	}

	inline int peek_124() {
		return f.peek(124);
	}

	inline int peek_125() {
		return f.peek(125);
	}

	inline int peek_126() {
		return f.peek(126);
	}

	inline int peek_127() {
		return f.peek(127);
	}

	inline int peek_128() {
		return f.peek(128);
	}

	inline int peek_129() {
		return f.peek(129);
	}

	inline int peek_130() {
		return f.peek(130);
	}

	inline int peek_131() {
		return f.peek(131);
	}

	inline int peek_132() {
		return f.peek(132);
	}

	inline int peek_133() {
		return f.peek(133);
	}

	inline int peek_134() {
		return f.peek(134);
	}

	inline int peek_135() {
		return f.peek(135);
	}

	inline int peek_136() {
		return f.peek(136);
	}

	inline int peek_137() {
		return f.peek(137);
	}

	inline int peek_138() {
		return f.peek(138);
	}

	inline int peek_139() {
		return f.peek(139);
	}

	inline int peek_140() {
		return f.peek(140);
	}

	inline int peek_141() {
		return f.peek(141);
	}

	inline int peek_142() {
		return f.peek(142);
	}

	inline int peek_143() {
		return f.peek(143);
	}

	inline int peek_144() {
		return f.peek(144);
	}

	inline int peek_145() {
		return f.peek(145);
	}

	inline int peek_146() {
		return f.peek(146);
	}

	inline int peek_147() {
		return f.peek(147);
	}

	inline int peek_148() {
		return f.peek(148);
	}

	inline int peek_149() {
		return f.peek(149);
	}

	inline int peek_150() {
		return f.peek(150);
	}

	inline int peek_151() {
		return f.peek(151);
	}

	inline int peek_152() {
		return f.peek(152);
	}

	inline int peek_153() {
		return f.peek(153);
	}

	inline int peek_154() {
		return f.peek(154);
	}

	inline int peek_155() {
		return f.peek(155);
	}

	inline int peek_156() {
		return f.peek(156);
	}

	inline int peek_157() {
		return f.peek(157);
	}

	inline int peek_158() {
		return f.peek(158);
	}

	inline int peek_159() {
		return f.peek(159);
	}

	inline int peek_160() {
		return f.peek(160);
	}

	inline int peek_161() {
		return f.peek(161);
	}

	inline int peek_162() {
		return f.peek(162);
	}

	inline int peek_163() {
		return f.peek(163);
	}

	inline int peek_164() {
		return f.peek(164);
	}

	inline int peek_165() {
		return f.peek(165);
	}

	inline int peek_166() {
		return f.peek(166);
	}

	inline int peek_167() {
		return f.peek(167);
	}

	inline int peek_168() {
		return f.peek(168);
	}

	inline int peek_169() {
		return f.peek(169);
	}

	inline int peek_170() {
		return f.peek(170);
	}

	inline int peek_171() {
		return f.peek(171);
	}

	inline int peek_172() {
		return f.peek(172);
	}

	inline int peek_173() {
		return f.peek(173);
	}

	inline int peek_174() {
		return f.peek(174);
	}

	inline int peek_175() {
		return f.peek(175);
	}

	inline int peek_176() {
		return f.peek(176);
	}

	inline int peek_177() {
		return f.peek(177);
	}

	inline int peek_178() {
		return f.peek(178);
	}

	inline int peek_179() {
		return f.peek(179);
	}

	inline int peek_180() {
		return f.peek(180);
	}

	inline int peek_181() {
		return f.peek(181);
	}

	inline int peek_182() {
		return f.peek(182);
	}

	inline int peek_183() {
		return f.peek(183);
	}

	inline int peek_184() {
		return f.peek(184);
	}

	inline int peek_185() {
		return f.peek(185);
	}

	inline int peek_186() {
		return f.peek(186);
	}

	inline int peek_187() {
		return f.peek(187);
	}

	inline int peek_188() {
		return f.peek(188);
	}

	inline int peek_189() {
		return f.peek(189);
	}

	inline int peek_190() {
		return f.peek(190);
	}

	inline int peek_191() {
		return f.peek(191);
	}

	inline int peek_192() {
		return f.peek(192);
	}

	inline int peek_193() {
		return f.peek(193);
	}

	inline int peek_194() {
		return f.peek(194);
	}

	inline int peek_195() {
		return f.peek(195);
	}

	inline int peek_196() {
		return f.peek(196);
	}

	inline int peek_197() {
		return f.peek(197);
	}

	inline int peek_198() {
		return f.peek(198);
	}

	inline int peek_199() {
		return f.peek(199);
	}

	inline int peek_200() {
		return f.peek(200);
	}

	inline int peek_201() {
		return f.peek(201);
	}

	inline int peek_202() {
		return f.peek(202);
	}

	inline int peek_203() {
		return f.peek(203);
	}

	inline int peek_204() {
		return f.peek(204);
	}

	inline int peek_205() {
		return f.peek(205);
	}

	inline int peek_206() {
		return f.peek(206);
	}

	inline int peek_207() {
		return f.peek(207);
	}

	inline int peek_208() {
		return f.peek(208);
	}

	inline int peek_209() {
		return f.peek(209);
	}

	inline int peek_210() {
		return f.peek(210);
	}

	inline int peek_211() {
		return f.peek(211);
	}

	inline int peek_212() {
		return f.peek(212);
	}

	inline int peek_213() {
		return f.peek(213);
	}

	inline int peek_214() {
		return f.peek(214);
	}

	inline int peek_215() {
		return f.peek(215);
	}

	inline int peek_216() {
		return f.peek(216);
	}

	inline int peek_217() {
		return f.peek(217);
	}

	inline int peek_218() {
		return f.peek(218);
	}

	inline int peek_219() {
		return f.peek(219);
	}

	inline int peek_220() {
		return f.peek(220);
	}

	inline int peek_221() {
		return f.peek(221);
	}

	inline int peek_222() {
		return f.peek(222);
	}

	inline int peek_223() {
		return f.peek(223);
	}

	inline int peek_224() {
		return f.peek(224);
	}

	inline int peek_225() {
		return f.peek(225);
	}

	inline int peek_226() {
		return f.peek(226);
	}

	inline int peek_227() {
		return f.peek(227);
	}

	inline int peek_228() {
		return f.peek(228);
	}

	inline int peek_229() {
		return f.peek(229);
	}

	inline int peek_230() {
		return f.peek(230);
	}

	inline int peek_231() {
		return f.peek(231);
	}

	inline int peek_232() {
		return f.peek(232);
	}

	inline int peek_233() {
		return f.peek(233);
	}

	inline int peek_234() {
		return f.peek(234);
	}

	inline int peek_235() {
		return f.peek(235);
	}

	inline int peek_236() {
		return f.peek(236);
	}

	inline int peek_237() {
		return f.peek(237);
	}

	inline int peek_238() {
		return f.peek(238);
	}

	inline int peek_239() {
		return f.peek(239);
	}

	inline int peek_240() {
		return f.peek(240);
	}

	inline int peek_241() {
		return f.peek(241);
	}

	inline int peek_242() {
		return f.peek(242);
	}

	inline int peek_243() {
		return f.peek(243);
	}

	inline int peek_244() {
		return f.peek(244);
	}

	inline int peek_245() {
		return f.peek(245);
	}

	inline int peek_246() {
		return f.peek(246);
	}

	inline int peek_247() {
		return f.peek(247);
	}

	inline int peek_248() {
		return f.peek(248);
	}

	inline int peek_249() {
		return f.peek(249);
	}

	inline int peek_250() {
		return f.peek(250);
	}

	inline int peek_251() {
		return f.peek(251);
	}

	inline int peek_252() {
		return f.peek(252);
	}

	inline int peek_253() {
		return f.peek(253);
	}

	inline int peek_254() {
		return f.peek(254);
	}

	inline int peek_255() {
		return f.peek(255);
	}

	inline int peek_256() {
		return f.peek(256);
	}

	inline int peek_257() {
		return f.peek(257);
	}

	inline int peek_258() {
		return f.peek(258);
	}

	inline int peek_259() {
		return f.peek(259);
	}

	inline int peek_260() {
		return f.peek(260);
	}

	inline int peek_261() {
		return f.peek(261);
	}

	inline int peek_262() {
		return f.peek(262);
	}

	inline int peek_263() {
		return f.peek(263);
	}

	inline int peek_264() {
		return f.peek(264);
	}

	inline int peek_265() {
		return f.peek(265);
	}

	inline int peek_266() {
		return f.peek(266);
	}

	inline int peek_267() {
		return f.peek(267);
	}

	inline int peek_268() {
		return f.peek(268);
	}

	inline int peek_269() {
		return f.peek(269);
	}

	inline int peek_270() {
		return f.peek(270);
	}

	inline int peek_271() {
		return f.peek(271);
	}

	inline int peek_272() {
		return f.peek(272);
	}

	inline int peek_273() {
		return f.peek(273);
	}

	inline int peek_274() {
		return f.peek(274);
	}

	inline int peek_275() {
		return f.peek(275);
	}

	inline int peek_276() {
		return f.peek(276);
	}

	inline int peek_277() {
		return f.peek(277);
	}

	inline int peek_278() {
		return f.peek(278);
	}

	inline int peek_279() {
		return f.peek(279);
	}

	inline int peek_280() {
		return f.peek(280);
	}

	inline int peek_281() {
		return f.peek(281);
	}

	inline int peek_282() {
		return f.peek(282);
	}

	inline int peek_283() {
		return f.peek(283);
	}

	inline int peek_284() {
		return f.peek(284);
	}

	inline int peek_285() {
		return f.peek(285);
	}

	inline int peek_286() {
		return f.peek(286);
	}

	inline int peek_287() {
		return f.peek(287);
	}

	inline int peek_288() {
		return f.peek(288);
	}

	inline int peek_289() {
		return f.peek(289);
	}

	inline int peek_290() {
		return f.peek(290);
	}

	inline int peek_291() {
		return f.peek(291);
	}

	inline int peek_292() {
		return f.peek(292);
	}

	inline int peek_293() {
		return f.peek(293);
	}

	inline int peek_294() {
		return f.peek(294);
	}

	inline int peek_295() {
		return f.peek(295);
	}

	inline int peek_296() {
		return f.peek(296);
	}

	inline int peek_297() {
		return f.peek(297);
	}

	inline int peek_298() {
		return f.peek(298);
	}

	inline int peek_299() {
		return f.peek(299);
	}

	inline int peek_300() {
		return f.peek(300);
	}

	inline int peek_301() {
		return f.peek(301);
	}

	inline int peek_302() {
		return f.peek(302);
	}

	inline int peek_303() {
		return f.peek(303);
	}

	inline int peek_304() {
		return f.peek(304);
	}

	inline int peek_305() {
		return f.peek(305);
	}

	inline int peek_306() {
		return f.peek(306);
	}

	inline int peek_307() {
		return f.peek(307);
	}

	inline int peek_308() {
		return f.peek(308);
	}

	inline int peek_309() {
		return f.peek(309);
	}

	inline int peek_310() {
		return f.peek(310);
	}

	inline int peek_311() {
		return f.peek(311);
	}

	inline int peek_312() {
		return f.peek(312);
	}

	inline int peek_313() {
		return f.peek(313);
	}

	inline int peek_314() {
		return f.peek(314);
	}

	inline int peek_315() {
		return f.peek(315);
	}

	inline int peek_316() {
		return f.peek(316);
	}

	inline int peek_317() {
		return f.peek(317);
	}

	inline int peek_318() {
		return f.peek(318);
	}

	inline int peek_319() {
		return f.peek(319);
	}

	inline int peek_320() {
		return f.peek(320);
	}

	inline int peek_321() {
		return f.peek(321);
	}

	inline int peek_322() {
		return f.peek(322);
	}

	inline int peek_323() {
		return f.peek(323);
	}

	inline int peek_324() {
		return f.peek(324);
	}

	inline int peek_325() {
		return f.peek(325);
	}

	inline int peek_326() {
		return f.peek(326);
	}

	inline int peek_327() {
		return f.peek(327);
	}

	inline int peek_328() {
		return f.peek(328);
	}

	inline int peek_329() {
		return f.peek(329);
	}

	inline int peek_330() {
		return f.peek(330);
	}

	inline int peek_331() {
		return f.peek(331);
	}

	inline int peek_332() {
		return f.peek(332);
	}

	inline int peek_333() {
		return f.peek(333);
	}

	inline int peek_334() {
		return f.peek(334);
	}

	inline int peek_335() {
		return f.peek(335);
	}

	inline int peek_336() {
		return f.peek(336);
	}

	inline int peek_337() {
		return f.peek(337);
	}

	inline int peek_338() {
		return f.peek(338);
	}

	inline int peek_339() {
		return f.peek(339);
	}

	inline int peek_340() {
		return f.peek(340);
	}

	inline int peek_341() {
		return f.peek(341);
	}

	inline int peek_342() {
		return f.peek(342);
	}

	inline int peek_343() {
		return f.peek(343);
	}

	inline int peek_344() {
		return f.peek(344);
	}

	inline int peek_345() {
		return f.peek(345);
	}

	inline int peek_346() {
		return f.peek(346);
	}

	inline int peek_347() {
		return f.peek(347);
	}

	inline int peek_348() {
		return f.peek(348);
	}

	inline int peek_349() {
		return f.peek(349);
	}

	inline int peek_350() {
		return f.peek(350);
	}

	inline int peek_351() {
		return f.peek(351);
	}

	inline int peek_352() {
		return f.peek(352);
	}

	inline int peek_353() {
		return f.peek(353);
	}

	inline int peek_354() {
		return f.peek(354);
	}

	inline int peek_355() {
		return f.peek(355);
	}

	inline int peek_356() {
		return f.peek(356);
	}

	inline int peek_357() {
		return f.peek(357);
	}

	inline int peek_358() {
		return f.peek(358);
	}

	inline int peek_359() {
		return f.peek(359);
	}

	inline int peek_360() {
		return f.peek(360);
	}

	inline int peek_361() {
		return f.peek(361);
	}

	inline int peek_362() {
		return f.peek(362);
	}

	inline int peek_363() {
		return f.peek(363);
	}

	inline int peek_364() {
		return f.peek(364);
	}

	inline int peek_365() {
		return f.peek(365);
	}

	inline int peek_366() {
		return f.peek(366);
	}

	inline int peek_367() {
		return f.peek(367);
	}

	inline int peek_368() {
		return f.peek(368);
	}

	inline int peek_369() {
		return f.peek(369);
	}

	inline int peek_370() {
		return f.peek(370);
	}

	inline int peek_371() {
		return f.peek(371);
	}

	inline int peek_372() {
		return f.peek(372);
	}

	inline int peek_373() {
		return f.peek(373);
	}

	inline int peek_374() {
		return f.peek(374);
	}

	inline int peek_375() {
		return f.peek(375);
	}

	inline int peek_376() {
		return f.peek(376);
	}

	inline int peek_377() {
		return f.peek(377);
	}

	inline int peek_378() {
		return f.peek(378);
	}

	inline int peek_379() {
		return f.peek(379);
	}

	inline int peek_380() {
		return f.peek(380);
	}

	inline int peek_381() {
		return f.peek(381);
	}

	inline int peek_382() {
		return f.peek(382);
	}

	inline int peek_383() {
		return f.peek(383);
	}

	inline int peek_384() {
		return f.peek(384);
	}

	inline int peek_385() {
		return f.peek(385);
	}

	inline int peek_386() {
		return f.peek(386);
	}

	inline int peek_387() {
		return f.peek(387);
	}

	inline int peek_388() {
		return f.peek(388);
	}

	inline int peek_389() {
		return f.peek(389);
	}

	inline int peek_390() {
		return f.peek(390);
	}

	inline int peek_391() {
		return f.peek(391);
	}

	inline int peek_392() {
		return f.peek(392);
	}

	inline int peek_393() {
		return f.peek(393);
	}

	inline int peek_394() {
		return f.peek(394);
	}

	inline int peek_395() {
		return f.peek(395);
	}

	inline int peek_396() {
		return f.peek(396);
	}

	inline int peek_397() {
		return f.peek(397);
	}

	inline int peek_398() {
		return f.peek(398);
	}

	inline int peek_399() {
		return f.peek(399);
	}

	inline int peek_400() {
		return f.peek(400);
	}

	inline int peek_401() {
		return f.peek(401);
	}

	inline int peek_402() {
		return f.peek(402);
	}

	inline int peek_403() {
		return f.peek(403);
	}

	inline int peek_404() {
		return f.peek(404);
	}

	inline int peek_405() {
		return f.peek(405);
	}

	inline int peek_406() {
		return f.peek(406);
	}

	inline int peek_407() {
		return f.peek(407);
	}

	inline int peek_408() {
		return f.peek(408);
	}

	inline int peek_409() {
		return f.peek(409);
	}

	inline int peek_410() {
		return f.peek(410);
	}

	inline int peek_411() {
		return f.peek(411);
	}

	inline int peek_412() {
		return f.peek(412);
	}

	inline int peek_413() {
		return f.peek(413);
	}

	inline int peek_414() {
		return f.peek(414);
	}

	inline int peek_415() {
		return f.peek(415);
	}

	inline int peek_416() {
		return f.peek(416);
	}

	inline int peek_417() {
		return f.peek(417);
	}

	inline int peek_418() {
		return f.peek(418);
	}

	inline int peek_419() {
		return f.peek(419);
	}

	inline int peek_420() {
		return f.peek(420);
	}

	inline int peek_421() {
		return f.peek(421);
	}

	inline int peek_422() {
		return f.peek(422);
	}

	inline int peek_423() {
		return f.peek(423);
	}

	inline int peek_424() {
		return f.peek(424);
	}

	inline int peek_425() {
		return f.peek(425);
	}

	inline int peek_426() {
		return f.peek(426);
	}

	inline int peek_427() {
		return f.peek(427);
	}

	inline int peek_428() {
		return f.peek(428);
	}

	inline int peek_429() {
		return f.peek(429);
	}

	inline int peek_430() {
		return f.peek(430);
	}

	inline int peek_431() {
		return f.peek(431);
	}

	inline int peek_432() {
		return f.peek(432);
	}

	inline int peek_433() {
		return f.peek(433);
	}

	inline int peek_434() {
		return f.peek(434);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_I_blr_conv_3_30_2_write(int& I_blr_I_blr_conv_3_30_2, I_blr_I_blr_conv_3_30_2_cache& I_blr_I_blr_conv_3_30_2_delay) {
	I_blr_I_blr_conv_3_30_2_delay.push(I_blr_I_blr_conv_3_30_2);
}

inline int I_blr_I_blr_ds_id0_13_select(I_blr_I_blr_conv_3_30_2_cache& I_blr_I_blr_conv_3_30_2_delay
, int root, int I_blr_ds_r, int I_blr_ds_c) {
// Pieces...
// { I_blr_ds_id0[root = 0, I_blr_ds_r = 14, I_blr_ds_c] : 0 <= I_blr_ds_c <= 12 } -> { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> (14 - I_blr_ds_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_id0[root = 0, I_blr_ds_r = 14, I_blr_ds_c = 13] } -> { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> 1 }
// 	is always true on iteration domain: 0
// { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] : 0 <= I_blr_ds_r <= 12 and 0 <= I_blr_ds_c <= 14 } -> { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> ((434 - 30 * I_blr_ds_r) - I_blr_ds_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_id0[root = 0, I_blr_ds_r = 13, I_blr_ds_c] : 0 <= I_blr_ds_c <= 14 } -> { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> (44 - I_blr_ds_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blr_I_blr_conv_3_30_2 = I_blr_I_blr_conv_3_30_2_delay.peek(((-14 + I_blr_ds_r == 0 && root == 0 && I_blr_ds_c >= 0 && 12 - I_blr_ds_c >= 0) ? ((14 - I_blr_ds_c)) : (-13 + I_blr_ds_c == 0 && -14 + I_blr_ds_r == 0 && root == 0) ? (1) : (root == 0 && I_blr_ds_r >= 0 && 12 - I_blr_ds_r >= 0 && I_blr_ds_c >= 0 && 14 - I_blr_ds_c >= 0) ? (((434 - 30 * I_blr_ds_r) - I_blr_ds_c)) : (-13 + I_blr_ds_r == 0 && root == 0 && I_blr_ds_c >= 0 && 14 - I_blr_ds_c >= 0) ? ((44 - I_blr_ds_c)) : 0));
	return value_I_blr_I_blr_conv_3_30_2;
}

// Bundles...
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_2
inline void I_blr_I_blr_conv_3_30_write_bundle_write(int& /* width = 32*/I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_2_cache& I_blr_I_blr_conv_3_30_2_delay) {
	I_blr_I_blr_conv_3_30_2_write(I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_2_delay);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_13
inline int I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_2_cache& I_blr_I_blr_conv_3_30_2_delay, int root, int I_blr_ds_r, int I_blr_ds_c) {
	int result;
	int I_blr_I_blr_ds_id0_13_res = I_blr_I_blr_ds_id0_13_select(I_blr_I_blr_conv_3_30_2_delay, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_13_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_12_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 15) capacity = 12
	fifo<int, 12> f5;
	// Parition [15, 16) capacity = 1
	fifo<int, 1> f6;
	// Parition [16, 17) capacity = 1
	fifo<int, 1> f8;
	// Parition [17, 18) capacity = 1
	fifo<int, 1> f10;
	// Parition [18, 30) capacity = 12
	fifo<int, 12> f11;
	// Parition [30, 31) capacity = 1
	fifo<int, 1> f12;
	// Parition [31, 32) capacity = 1
	fifo<int, 1> f14;
	// Parition [32, 32] capacity = 1
	fifo<int, 1> f16;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

	inline int peek_14() {
		return f5.back();
	}

	inline int peek_15() {
		return f6.back();
	}

	inline int peek_16() {
		return f8.back();
	}

	inline int peek_17() {
		return f10.back();
	}

	inline int peek_29() {
		return f11.back();
	}

	inline int peek_30() {
		return f12.back();
	}

	inline int peek_31() {
		return f14.back();
	}

	inline int peek_32() {
		return f16.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 14) {
			return f5.back();
		}
		if (offset == 15) {
			return f6.back();
		}
		if (offset == 16) {
			return f8.back();
		}
		if (offset == 17) {
			return f10.back();
		}
		if (offset == 29) {
			return f11.back();
		}
		if (offset == 30) {
			return f12.back();
		}
		if (offset == 31) {
			return f14.back();
		}
		if (offset == 32) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const int value) {
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



inline void I_blr_ds_I_blr_ds_id0_12_write(int& I_blr_ds_I_blr_ds_id0_12, I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay) {
	I_blr_ds_I_blr_ds_id0_12_delay.push(I_blr_ds_I_blr_ds_id0_12);
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_15_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 32 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_32();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_16_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 31 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_31();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 30 }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c = 12] : 0 <= I_blr_ds_blr_r <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (18 + I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_30();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 17 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_17();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 16 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_16();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 15 }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c = 12] : 0 <= I_blr_ds_blr_r <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (3 + I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_15();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_2();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_1();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline int I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	int value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek_0();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_15
//	I_blr_ds_I_blr_ds_blr_conv_3_30_16
//	I_blr_ds_I_blr_ds_blr_conv_3_30_17
//	I_blr_ds_I_blr_ds_blr_conv_3_30_18
//	I_blr_ds_I_blr_ds_blr_conv_3_30_19
//	I_blr_ds_I_blr_ds_blr_conv_3_30_20
//	I_blr_ds_I_blr_ds_blr_conv_3_30_21
//	I_blr_ds_I_blr_ds_blr_conv_3_30_22
//	I_blr_ds_I_blr_ds_blr_conv_3_30_23
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<288> result;
	int I_blr_ds_I_blr_ds_blr_conv_3_30_15_res = I_blr_ds_I_blr_ds_blr_conv_3_30_15_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_15_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_16_res = I_blr_ds_I_blr_ds_blr_conv_3_30_16_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_16_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_17_res = I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_17_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_18_res = I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_18_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_19_res = I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_19_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_20_res = I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_20_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_21_res = I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_21_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_22_res = I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_22_res);
	int I_blr_ds_I_blr_ds_blr_conv_3_30_23_res = I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_23_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_12
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(int& /* width = 32*/I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay) {
	I_blr_ds_I_blr_ds_id0_12_write(I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_12_delay);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache {
	// Capacity: 71
	fifo<int, 71> f;
	inline int peek(const int offset) {
		return f.peek(70 - offset);
	}

	inline int peek_0() {
		return f.peek(0);
	}

	inline int peek_1() {
		return f.peek(1);
	}

	inline int peek_2() {
		return f.peek(2);
	}

	inline int peek_3() {
		return f.peek(3);
	}

	inline int peek_4() {
		return f.peek(4);
	}

	inline int peek_5() {
		return f.peek(5);
	}

	inline int peek_6() {
		return f.peek(6);
	}

	inline int peek_7() {
		return f.peek(7);
	}

	inline int peek_8() {
		return f.peek(8);
	}

	inline int peek_9() {
		return f.peek(9);
	}

	inline int peek_10() {
		return f.peek(10);
	}

	inline int peek_11() {
		return f.peek(11);
	}

	inline int peek_12() {
		return f.peek(12);
	}

	inline int peek_13() {
		return f.peek(13);
	}

	inline int peek_14() {
		return f.peek(14);
	}

	inline int peek_15() {
		return f.peek(15);
	}

	inline int peek_16() {
		return f.peek(16);
	}

	inline int peek_17() {
		return f.peek(17);
	}

	inline int peek_18() {
		return f.peek(18);
	}

	inline int peek_19() {
		return f.peek(19);
	}

	inline int peek_20() {
		return f.peek(20);
	}

	inline int peek_21() {
		return f.peek(21);
	}

	inline int peek_22() {
		return f.peek(22);
	}

	inline int peek_23() {
		return f.peek(23);
	}

	inline int peek_24() {
		return f.peek(24);
	}

	inline int peek_25() {
		return f.peek(25);
	}

	inline int peek_26() {
		return f.peek(26);
	}

	inline int peek_27() {
		return f.peek(27);
	}

	inline int peek_28() {
		return f.peek(28);
	}

	inline int peek_29() {
		return f.peek(29);
	}

	inline int peek_30() {
		return f.peek(30);
	}

	inline int peek_31() {
		return f.peek(31);
	}

	inline int peek_32() {
		return f.peek(32);
	}

	inline int peek_33() {
		return f.peek(33);
	}

	inline int peek_34() {
		return f.peek(34);
	}

	inline int peek_35() {
		return f.peek(35);
	}

	inline int peek_36() {
		return f.peek(36);
	}

	inline int peek_37() {
		return f.peek(37);
	}

	inline int peek_38() {
		return f.peek(38);
	}

	inline int peek_39() {
		return f.peek(39);
	}

	inline int peek_40() {
		return f.peek(40);
	}

	inline int peek_41() {
		return f.peek(41);
	}

	inline int peek_42() {
		return f.peek(42);
	}

	inline int peek_43() {
		return f.peek(43);
	}

	inline int peek_44() {
		return f.peek(44);
	}

	inline int peek_45() {
		return f.peek(45);
	}

	inline int peek_46() {
		return f.peek(46);
	}

	inline int peek_47() {
		return f.peek(47);
	}

	inline int peek_48() {
		return f.peek(48);
	}

	inline int peek_49() {
		return f.peek(49);
	}

	inline int peek_50() {
		return f.peek(50);
	}

	inline int peek_51() {
		return f.peek(51);
	}

	inline int peek_52() {
		return f.peek(52);
	}

	inline int peek_53() {
		return f.peek(53);
	}

	inline int peek_54() {
		return f.peek(54);
	}

	inline int peek_55() {
		return f.peek(55);
	}

	inline int peek_56() {
		return f.peek(56);
	}

	inline int peek_57() {
		return f.peek(57);
	}

	inline int peek_58() {
		return f.peek(58);
	}

	inline int peek_59() {
		return f.peek(59);
	}

	inline int peek_60() {
		return f.peek(60);
	}

	inline int peek_61() {
		return f.peek(61);
	}

	inline int peek_62() {
		return f.peek(62);
	}

	inline int peek_63() {
		return f.peek(63);
	}

	inline int peek_64() {
		return f.peek(64);
	}

	inline int peek_65() {
		return f.peek(65);
	}

	inline int peek_66() {
		return f.peek(66);
	}

	inline int peek_67() {
		return f.peek(67);
	}

	inline int peek_68() {
		return f.peek(68);
	}

	inline int peek_69() {
		return f.peek(69);
	}

	inline int peek_70() {
		return f.peek(70);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_write(int& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_delay.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14);
}

inline int I_blr_ds_blr_I_blr_ds_blr_ds_id0_25_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_delay
, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
// Pieces...
// { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r = 5, I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_c <= 3 } -> { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (5 - I_blr_ds_blr_ds_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r = 5, I_blr_ds_blr_ds_c = 4] } -> { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> 1 }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_r <= 3 and 0 <= I_blr_ds_blr_ds_c <= 5 } -> { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> ((70 - 13 * I_blr_ds_blr_ds_r) - I_blr_ds_blr_ds_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r = 4, I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_c <= 5 } -> { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (18 - I_blr_ds_blr_ds_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14 = I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_delay.peek(((-5 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 3 - I_blr_ds_blr_ds_c >= 0) ? ((5 - I_blr_ds_blr_ds_c)) : (-4 + I_blr_ds_blr_ds_c == 0 && -5 + I_blr_ds_blr_ds_r == 0 && root == 0) ? (1) : (root == 0 && I_blr_ds_blr_ds_r >= 0 && 3 - I_blr_ds_blr_ds_r >= 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((70 - 13 * I_blr_ds_blr_ds_r) - I_blr_ds_blr_ds_c)) : (-4 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? ((18 - I_blr_ds_blr_ds_c)) : 0));
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(int& /* width = 32*/I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_write(I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_delay);
}

// I_blr_ds_blr_ds_id0_read
//	I_blr_ds_blr_I_blr_ds_blr_ds_id0_25
inline int I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_delay, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	int result;
	int I_blr_ds_blr_I_blr_ds_blr_ds_id0_25_res = I_blr_ds_blr_I_blr_ds_blr_ds_id0_25_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_delay, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	set_at<0, 32>(result, I_blr_ds_blr_I_blr_ds_blr_ds_id0_25_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_cache {
	// Capacity: 1
	fifo<int, 1> f;
	inline int peek(const int offset) {
		return f.peek(0 - offset);
	}

	inline int peek_0() {
		return f.peek(0);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_write(int& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_delay) {
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_delay.push(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24);
}

inline int I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_27_select(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_delay
, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	int value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24 = I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_delay.peek_0();
	return value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24;
}

// Bundles...
// I_blr_ds_blr_ds_id0_write
//	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24
inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(int& /* width = 32*/I_blr_ds_blr_ds_id0_write, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_delay) {
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_write(I_blr_ds_blr_ds_id0_write, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_delay);
}

// store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read
//	I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_27
inline int I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_delay, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	int result;
	int I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_27_res = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_27_select(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_delay, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_27_res);
	return result;
}





// Operation logic
inline void store_I_from_in(HWStream<int >& in, I_store_I_from_in_0_cache& I_store_I_from_in_0, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in
	// Possible ports...
		// I_store_I_from_in_0
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_0 /* output src_delay */);
}

inline void I_blr_conv_3_30(I_store_I_from_in_0_cache& I_store_I_from_in_0, I_blr_I_blr_conv_3_30_2_cache& I_blr_I_blr_conv_3_30_2, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_0/* source_delay */, root, I_blr_r, I_blr_c);
	// Apply function: conv_3_3
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__2_value
	// Arg buf: I
	 /* comma list args */ auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	// Buffer: I_blr, Op: I_blr_conv_3_30
	// Possible ports...
		// I_blr_I_blr_conv_3_30_2
	I_blr_I_blr_conv_3_30_write_bundle_write(compute_result, I_blr_I_blr_conv_3_30_2 /* output src_delay */);
}

inline void I_blr_ds_id0(I_blr_I_blr_conv_3_30_2_cache& I_blr_I_blr_conv_3_30_2, I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_2/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	// Apply function: id
	// Arg: I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value
	// Arg buf: I_blr
	 /* comma list args */ auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	// Buffer: I_blr_ds, Op: I_blr_ds_id0
	// Possible ports...
		// I_blr_ds_I_blr_ds_id0_12
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_I_blr_ds_id0_12 /* output src_delay */);
}

inline void I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_12/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	// Apply function: conv_3_3
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	 /* comma list args */ auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	// Buffer: I_blr_ds_blr, Op: I_blr_ds_blr_conv_3_30
	// Possible ports...
		// I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14 /* output src_delay */);
}

inline void I_blr_ds_blr_ds_id0(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value = I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14/* source_delay */, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	// Apply function: id
	// Arg: I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value
	// Arg buf: I_blr_ds_blr
	 /* comma list args */ auto compute_result = id(I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value);
	// Produce: I_blr_ds_blr_ds
	// Buffer: I_blr_ds_blr_ds, Op: I_blr_ds_blr_ds_id0
	// Possible ports...
		// I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24 /* output src_delay */);
}

inline void store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_cache& I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24, HWStream<int >& I_blr_ds_blr_ds_out, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	// Consume: I_blr_ds_blr_ds
	auto I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24/* source_delay */, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	// Produce: I_blr_ds_blr_ds_out
	I_blr_ds_blr_ds_out.write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value);
}

// Driver function
void gaussian_pyramid(HWStream<int >& in, HWStream<int >& I_blr_ds_blr_ds_out) {
	I_store_I_from_in_0_cache I_store_I_from_in_0;
	I_blr_I_blr_conv_3_30_2_cache I_blr_I_blr_conv_3_30_2;
	I_blr_ds_I_blr_ds_id0_12_cache I_blr_ds_I_blr_ds_id0_12;
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14;
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24_cache I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24;
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    store_I_from_in(in, I_store_I_from_in_0, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      I_blr_conv_3_30(I_store_I_from_in_0, I_blr_I_blr_conv_3_30_2, 0, c0 - 2, c1 - 2);
	      if (c0 >= 16 && c0 <= 30 && c1 >= 16 && c1 <= 30) {
	        I_blr_ds_id0(I_blr_I_blr_conv_3_30_2, I_blr_ds_I_blr_ds_id0_12, 0, c0 - 16, c1 - 16);
	        if (c0 >= 18 && c1 >= 18) {
	          I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_12, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14, 0, c0 - 18, c1 - 18);
	          if (c0 >= 23 && c0 <= 28 && c1 >= 23 && c1 <= 28) {
	            I_blr_ds_blr_ds_id0(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14, I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24, 0, c0 - 23, c1 - 23);
	            store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_24, I_blr_ds_blr_ds_out, 0, c0 - 23, c1 - 23);
	          }
	        }
	      }
	    }
	  }
	
}
