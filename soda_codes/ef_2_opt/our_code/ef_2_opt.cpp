#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: ef_2_opt_compute_units.h
#include "ef_2_opt_compute_units.h"

struct bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 547
	// # of read delays: 547
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546
	fifo<hw_uint<16>, 547> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(546 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_bright_update_0_write1_to_bright_laplace_diff_0_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 547
	// # of read delays: 547
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546
	fifo<hw_uint<16>, 547> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(546 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_bright_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[-8, 1080], [-7, 1919]}
	// Capacity: 1092
	// # of read delays: 6
  // 0, 1, 545, 546, 1090, 1091
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 543> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 543> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_545() {
		return f4;
	}

	inline hw_uint<16> peek_546() {
		return f6;
	}

	inline hw_uint<16> peek_1089() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1090() {
		return f8;
	}

	inline hw_uint<16> peek_1091() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_bright_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[-7, 1081], [-7, 1919]}
	// Capacity: 1093
	// # of read delays: 7
  // 0, 1, 2, 546, 547, 1091, 1092
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 543> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 543> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_545() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_546() {
		return f6;
	}

	inline hw_uint<16> peek_547() {
		return f8;
	}

	inline hw_uint<16> peek_1090() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1091() {
		return f10;
	}

	inline hw_uint<16> peek_1092() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
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

struct bright_cache {
  // Reader addrs...
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[-1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[-1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[-1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_laplace_diff_0_update_0[d0, d1] -> bright[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { bright_laplace_diff_0_update_0[d0, d1] -> bright[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { bright_weights_update_0[d0, d1] -> bright[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
    // { bright_weights_update_0[d0, d1] -> bright[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // # of banks: 4
  bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_cache bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0;
  bright_bright_update_0_write1_to_bright_laplace_diff_0_rd1_cache bright_bright_update_0_write1_to_bright_laplace_diff_0_rd1;
  bright_bright_update_0_write0_merged_banks_10_cache bright_bright_update_0_write0_merged_banks_10;
  bright_bright_update_0_write1_merged_banks_10_cache bright_bright_update_0_write1_merged_banks_10;
};



inline void bright_bright_update_0_write0_write(hw_uint<16>& bright_bright_update_0_write0, bright_cache& bright, int d0, int d1, int dynamic_address) {
  bright.bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0.push(bright_bright_update_0_write0);
  bright.bright_bright_update_0_write0_merged_banks_10.push(bright_bright_update_0_write0);
}

inline void bright_bright_update_0_write1_write(hw_uint<16>& bright_bright_update_0_write1, bright_cache& bright, int d0, int d1, int dynamic_address) {
  bright.bright_bright_update_0_write1_to_bright_laplace_diff_0_rd1.push(bright_bright_update_0_write1);
  bright.bright_bright_update_0_write1_merged_banks_10.push(bright_bright_update_0_write1);
}

inline hw_uint<16> bright_gauss_blur_1_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[-1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_1092();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd1_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[-1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_547();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd10_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd10 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_546();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd11_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd11 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_1();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd12_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd12 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_1091();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd13_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd13 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_546();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd14_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd14 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_1();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd15_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd15 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_1090();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd16_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd16 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_545();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd17_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd17 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_0();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd2_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[-1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_2();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd3_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_1091();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd4_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_546();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd5_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_1();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd6_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_1091();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd7_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_546();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd8_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_1();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd9_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd9 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_1091();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 43] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0.peek(/* one reader or all rams */ (1918 - d1 >= 0) ? (546) : (-1919 + d1 == 0) ? ((540 - d0)) : 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_0_rd1_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd1 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 43] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_to_bright_laplace_diff_0_rd1.peek(/* one reader or all rams */ (1918 - d1 >= 0) ? (546) : (-1919 + d1 == 0) ? ((540 - d0)) : 0);
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_0();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_rd1_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd1 read pattern: { bright_weights_update_0[d0, d1] -> bright[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_10.peek_0();
  return value_bright_bright_update_0_write1;
  return 0;
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
//	bright_gauss_blur_1_rd9
//	bright_gauss_blur_1_rd10
//	bright_gauss_blur_1_rd11
//	bright_gauss_blur_1_rd12
//	bright_gauss_blur_1_rd13
//	bright_gauss_blur_1_rd14
//	bright_gauss_blur_1_rd15
//	bright_gauss_blur_1_rd16
//	bright_gauss_blur_1_rd17
inline hw_uint<288> bright_bright_gauss_blur_1_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // bright_gauss_blur_1_rd0
    // bright_gauss_blur_1_rd1
    // bright_gauss_blur_1_rd2
    // bright_gauss_blur_1_rd3
    // bright_gauss_blur_1_rd4
    // bright_gauss_blur_1_rd5
    // bright_gauss_blur_1_rd6
    // bright_gauss_blur_1_rd7
    // bright_gauss_blur_1_rd8
    // bright_gauss_blur_1_rd9
    // bright_gauss_blur_1_rd10
    // bright_gauss_blur_1_rd11
    // bright_gauss_blur_1_rd12
    // bright_gauss_blur_1_rd13
    // bright_gauss_blur_1_rd14
    // bright_gauss_blur_1_rd15
    // bright_gauss_blur_1_rd16
    // bright_gauss_blur_1_rd17

	hw_uint<288> result;
	hw_uint<16> bright_gauss_blur_1_rd0_res = bright_gauss_blur_1_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 288>(result, bright_gauss_blur_1_rd0_res);
	hw_uint<16> bright_gauss_blur_1_rd1_res = bright_gauss_blur_1_rd1_select(bright, d0, d1, dynamic_address);
	set_at<16, 288>(result, bright_gauss_blur_1_rd1_res);
	hw_uint<16> bright_gauss_blur_1_rd2_res = bright_gauss_blur_1_rd2_select(bright, d0, d1, dynamic_address);
	set_at<32, 288>(result, bright_gauss_blur_1_rd2_res);
	hw_uint<16> bright_gauss_blur_1_rd3_res = bright_gauss_blur_1_rd3_select(bright, d0, d1, dynamic_address);
	set_at<48, 288>(result, bright_gauss_blur_1_rd3_res);
	hw_uint<16> bright_gauss_blur_1_rd4_res = bright_gauss_blur_1_rd4_select(bright, d0, d1, dynamic_address);
	set_at<64, 288>(result, bright_gauss_blur_1_rd4_res);
	hw_uint<16> bright_gauss_blur_1_rd5_res = bright_gauss_blur_1_rd5_select(bright, d0, d1, dynamic_address);
	set_at<80, 288>(result, bright_gauss_blur_1_rd5_res);
	hw_uint<16> bright_gauss_blur_1_rd6_res = bright_gauss_blur_1_rd6_select(bright, d0, d1, dynamic_address);
	set_at<96, 288>(result, bright_gauss_blur_1_rd6_res);
	hw_uint<16> bright_gauss_blur_1_rd7_res = bright_gauss_blur_1_rd7_select(bright, d0, d1, dynamic_address);
	set_at<112, 288>(result, bright_gauss_blur_1_rd7_res);
	hw_uint<16> bright_gauss_blur_1_rd8_res = bright_gauss_blur_1_rd8_select(bright, d0, d1, dynamic_address);
	set_at<128, 288>(result, bright_gauss_blur_1_rd8_res);
	hw_uint<16> bright_gauss_blur_1_rd9_res = bright_gauss_blur_1_rd9_select(bright, d0, d1, dynamic_address);
	set_at<144, 288>(result, bright_gauss_blur_1_rd9_res);
	hw_uint<16> bright_gauss_blur_1_rd10_res = bright_gauss_blur_1_rd10_select(bright, d0, d1, dynamic_address);
	set_at<160, 288>(result, bright_gauss_blur_1_rd10_res);
	hw_uint<16> bright_gauss_blur_1_rd11_res = bright_gauss_blur_1_rd11_select(bright, d0, d1, dynamic_address);
	set_at<176, 288>(result, bright_gauss_blur_1_rd11_res);
	hw_uint<16> bright_gauss_blur_1_rd12_res = bright_gauss_blur_1_rd12_select(bright, d0, d1, dynamic_address);
	set_at<192, 288>(result, bright_gauss_blur_1_rd12_res);
	hw_uint<16> bright_gauss_blur_1_rd13_res = bright_gauss_blur_1_rd13_select(bright, d0, d1, dynamic_address);
	set_at<208, 288>(result, bright_gauss_blur_1_rd13_res);
	hw_uint<16> bright_gauss_blur_1_rd14_res = bright_gauss_blur_1_rd14_select(bright, d0, d1, dynamic_address);
	set_at<224, 288>(result, bright_gauss_blur_1_rd14_res);
	hw_uint<16> bright_gauss_blur_1_rd15_res = bright_gauss_blur_1_rd15_select(bright, d0, d1, dynamic_address);
	set_at<240, 288>(result, bright_gauss_blur_1_rd15_res);
	hw_uint<16> bright_gauss_blur_1_rd16_res = bright_gauss_blur_1_rd16_select(bright, d0, d1, dynamic_address);
	set_at<256, 288>(result, bright_gauss_blur_1_rd16_res);
	hw_uint<16> bright_gauss_blur_1_rd17_res = bright_gauss_blur_1_rd17_select(bright, d0, d1, dynamic_address);
	set_at<272, 288>(result, bright_gauss_blur_1_rd17_res);
	return result;
}

// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
//	bright_laplace_diff_0_rd1
inline hw_uint<32> bright_bright_laplace_diff_0_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_laplace_diff_0_rd0
    // bright_laplace_diff_0_rd1

	hw_uint<32> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_laplace_diff_0_rd0_res);
	hw_uint<16> bright_laplace_diff_0_rd1_res = bright_laplace_diff_0_rd1_select(bright, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_laplace_diff_0_rd1_res);
	return result;
}

// bright_update_0_write
//	bright_bright_update_0_write0
//	bright_bright_update_0_write1
inline void bright_bright_update_0_write_bundle_write(hw_uint<32>& bright_update_0_write, bright_cache& bright, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_bright_update_0_write0_res = bright_update_0_write.extract<0, 15>();
	bright_bright_update_0_write0_write(bright_bright_update_0_write0_res, bright, d0, d1, dynamic_address);
	hw_uint<16> bright_bright_update_0_write1_res = bright_update_0_write.extract<16, 31>();
	bright_bright_update_0_write1_write(bright_bright_update_0_write1_res, bright, d0, d1, dynamic_address);
}

// bright_weights_update_0_read
//	bright_weights_rd0
//	bright_weights_rd1
inline hw_uint<32> bright_bright_weights_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_weights_rd0
    // bright_weights_rd1

	hw_uint<32> result;
	hw_uint<16> bright_weights_rd0_res = bright_weights_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_weights_rd0_res);
	hw_uint<16> bright_weights_rd1_res = bright_weights_rd1_select(bright, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_weights_rd1_res);
	return result;
}

struct bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0_cache {
	// RAM Box: {[-6, 1078], [-6, 1918]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_gauss_blur_1_cache {
  // Reader addrs...
    // { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // # of banks: 1
  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0_cache bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0;
};



inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
  bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0.push(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0);
}

inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> bright_gauss_ds_1_rd0_select(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // Read schedule : { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // Write schedule: { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0 = bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_gauss_blur_1_update_0_write
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1
inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& bright_gauss_blur_1_update_0_write, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res = bright_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res, bright_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_res = bright_gauss_blur_1_update_0_write.extract<16, 31>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_res, bright_gauss_blur_1, d0, d1, dynamic_address);
}

// bright_gauss_ds_1_update_0_read
//	bright_gauss_ds_1_rd0
inline hw_uint<16> bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_1_rd0_res = bright_gauss_ds_1_rd0_select(bright_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_gauss_ds_1_rd0_res);
	return result;
}

struct bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0_cache {
	// RAM Box: {[-2, 538], [-2, 958]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_gauss_blur_2_cache {
  // Reader addrs...
    // { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // # of banks: 1
  bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0_cache bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0;
};



inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(hw_uint<16>& bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
  bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0.push(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> bright_gauss_ds_2_rd0_select(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // Read schedule : { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // Write schedule: { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  auto value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0 = bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_gauss_blur_2_update_0_write
//	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0
inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_2_update_0_write, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res = bright_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res, bright_gauss_blur_2, d0, d1, dynamic_address);
}

// bright_gauss_ds_2_update_0_read
//	bright_gauss_ds_2_rd0
inline hw_uint<16> bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_2_rd0_res = bright_gauss_ds_2_rd0_select(bright_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_gauss_ds_2_rd0_res);
	return result;
}

struct bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 268], [0, 478]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_gauss_blur_3_cache {
  // Reader addrs...
    // { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // # of banks: 1
  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0_cache bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0;
};



inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
  bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0.push(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> bright_gauss_ds_3_rd0_select(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Read schedule : { bright_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 29] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Write schedule: { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  auto value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0 = bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_gauss_blur_3_update_0_write
//	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0
inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_3_update_0_write, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res = bright_gauss_blur_3_update_0_write.extract<0, 15>();
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res, bright_gauss_blur_3, d0, d1, dynamic_address);
}

// bright_gauss_ds_3_update_0_read
//	bright_gauss_ds_3_rd0
inline hw_uint<16> bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_3_rd0_res = bright_gauss_ds_3_rd0_select(bright_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_gauss_ds_3_rd0_res);
	return result;
}

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 545
	// # of read delays: 545
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544
	fifo<hw_uint<16>, 545> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(544 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 540
	// # of read delays: 540
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539
	fifo<hw_uint<16>, 540> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(539 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 540
	// # of read delays: 540
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539
	fifo<hw_uint<16>, 540> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(539 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-3, 539], [-3, 959]}
	// Capacity: 1089
	// # of read delays: 9
  // 0, 1, 2, 543, 544, 545, 1086, 1087, 1088
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 540> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 540> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_543() {
		return f6;
	}

	inline hw_uint<16> peek_544() {
		return f8;
	}

	inline hw_uint<16> peek_545() {
		return f10;
	}

	inline hw_uint<16> peek_1085() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1086() {
		return f12;
	}

	inline hw_uint<16> peek_1087() {
		return f14;
	}

	inline hw_uint<16> peek_1088() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 540
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
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
    // cap: 1 reading from capacity: 540
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
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

struct bright_gauss_ds_1_cache {
  // Reader addrs...
    // { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
    // { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
    // { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // # of banks: 4
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9;
};



inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_2_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_1088();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_545();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd2_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd3_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_1087();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd4_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_544();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd5_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd6_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_1086();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd7_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_543();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd8_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 42] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0.peek(/* one reader or all rams */ (958 - d1 >= 0 && 538 - d0 >= 0) ? (544) : (-539 + d0 == 0 && 958 - d1 >= 0) ? (543) : (-959 + d1 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_us_0_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 40] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_us_0_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd1 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 40] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
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
inline hw_uint<144> bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_gauss_blur_2_rd0
    // bright_gauss_blur_2_rd1
    // bright_gauss_blur_2_rd2
    // bright_gauss_blur_2_rd3
    // bright_gauss_blur_2_rd4
    // bright_gauss_blur_2_rd5
    // bright_gauss_blur_2_rd6
    // bright_gauss_blur_2_rd7
    // bright_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_2_rd0_res = bright_gauss_blur_2_rd0_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_gauss_blur_2_rd0_res);
	hw_uint<16> bright_gauss_blur_2_rd1_res = bright_gauss_blur_2_rd1_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_gauss_blur_2_rd1_res);
	hw_uint<16> bright_gauss_blur_2_rd2_res = bright_gauss_blur_2_rd2_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_gauss_blur_2_rd2_res);
	hw_uint<16> bright_gauss_blur_2_rd3_res = bright_gauss_blur_2_rd3_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_gauss_blur_2_rd3_res);
	hw_uint<16> bright_gauss_blur_2_rd4_res = bright_gauss_blur_2_rd4_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_gauss_blur_2_rd4_res);
	hw_uint<16> bright_gauss_blur_2_rd5_res = bright_gauss_blur_2_rd5_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_gauss_blur_2_rd5_res);
	hw_uint<16> bright_gauss_blur_2_rd6_res = bright_gauss_blur_2_rd6_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_gauss_blur_2_rd6_res);
	hw_uint<16> bright_gauss_blur_2_rd7_res = bright_gauss_blur_2_rd7_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_gauss_blur_2_rd7_res);
	hw_uint<16> bright_gauss_blur_2_rd8_res = bright_gauss_blur_2_rd8_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_gauss_blur_2_rd8_res);
	return result;
}

// bright_gauss_ds_1_update_0_write
//	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0
inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_1_update_0_write, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res = bright_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res, bright_gauss_ds_1, d0, d1, dynamic_address);
}

// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<16> bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_read
//	bright_laplace_us_0_rd0
//	bright_laplace_us_0_rd1
inline hw_uint<32> bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_laplace_us_0_rd0
    // bright_laplace_us_0_rd1

	hw_uint<32> result;
	hw_uint<16> bright_laplace_us_0_rd0_res = bright_laplace_us_0_rd0_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_laplace_us_0_rd0_res);
	hw_uint<16> bright_laplace_us_0_rd1_res = bright_laplace_us_0_rd1_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_laplace_us_0_rd1_res);
	return result;
}

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 273
	// # of read delays: 273
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272
	fifo<hw_uint<16>, 273> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(272 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 270
	// # of read delays: 271
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269
	fifo<hw_uint<16>, 270> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(269 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-1, 269], [-1, 479]}
	// Capacity: 545
	// # of read delays: 9
  // 0, 1, 2, 271, 272, 273, 542, 543, 544
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 268> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 268> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_270() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_271() {
		return f6;
	}

	inline hw_uint<16> peek_272() {
		return f8;
	}

	inline hw_uint<16> peek_273() {
		return f10;
	}

	inline hw_uint<16> peek_541() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_542() {
		return f12;
	}

	inline hw_uint<16> peek_543() {
		return f14;
	}

	inline hw_uint<16> peek_544() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 268
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
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
    // cap: 1 reading from capacity: 268
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
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

struct bright_gauss_ds_2_cache {
  // Reader addrs...
    // { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
    // { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // # of banks: 3
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_3_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_544();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd1_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_273();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd2_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd3_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_543();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd4_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_272();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd5_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd6_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_542();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd7_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_271();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd8_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_2_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Read schedule : { bright_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 41] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ (478 - d1 >= 0 && 268 - d0 >= 0) ? (272) : (-269 + d0 == 0 && 478 - d1 >= 0) ? (271) : (-479 + d1 == 0 && 268 - d0 >= 0) ? ((269 - d0)) : 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_us_1_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 39] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 537 - d0 >= 0) ? ((269 - floord(2*d0, 4))) : 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
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
inline hw_uint<144> bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_gauss_blur_3_rd0
    // bright_gauss_blur_3_rd1
    // bright_gauss_blur_3_rd2
    // bright_gauss_blur_3_rd3
    // bright_gauss_blur_3_rd4
    // bright_gauss_blur_3_rd5
    // bright_gauss_blur_3_rd6
    // bright_gauss_blur_3_rd7
    // bright_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_3_rd0_res = bright_gauss_blur_3_rd0_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_gauss_blur_3_rd0_res);
	hw_uint<16> bright_gauss_blur_3_rd1_res = bright_gauss_blur_3_rd1_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_gauss_blur_3_rd1_res);
	hw_uint<16> bright_gauss_blur_3_rd2_res = bright_gauss_blur_3_rd2_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_gauss_blur_3_rd2_res);
	hw_uint<16> bright_gauss_blur_3_rd3_res = bright_gauss_blur_3_rd3_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_gauss_blur_3_rd3_res);
	hw_uint<16> bright_gauss_blur_3_rd4_res = bright_gauss_blur_3_rd4_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_gauss_blur_3_rd4_res);
	hw_uint<16> bright_gauss_blur_3_rd5_res = bright_gauss_blur_3_rd5_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_gauss_blur_3_rd5_res);
	hw_uint<16> bright_gauss_blur_3_rd6_res = bright_gauss_blur_3_rd6_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_gauss_blur_3_rd6_res);
	hw_uint<16> bright_gauss_blur_3_rd7_res = bright_gauss_blur_3_rd7_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_gauss_blur_3_rd7_res);
	hw_uint<16> bright_gauss_blur_3_rd8_res = bright_gauss_blur_3_rd8_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_gauss_blur_3_rd8_res);
	return result;
}

// bright_gauss_ds_2_update_0_write
//	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0
inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_2_update_0_write, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res = bright_gauss_ds_2_update_0_write.extract<0, 15>();
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res, bright_gauss_ds_2, d0, d1, dynamic_address);
}

// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<16> bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_read
//	bright_laplace_us_1_rd0
inline hw_uint<16> bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_1_rd0_res = bright_laplace_us_1_rd0_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_us_1_rd0_res);
	return result;
}

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 134], [0, 239]}
	// Capacity: 135
	// # of read delays: 136
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134
	fifo<hw_uint<16>, 135> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(134 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 134], [0, 239]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_gauss_ds_3_cache {
  // Reader addrs...
    // { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
    // { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // # of banks: 2
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0;
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> bright_laplace_us_2_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 38] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { bright_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 29] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 267 - d0 >= 0) ? ((134 - floord(2*d0, 4))) : 0);
  return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_3_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 44] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Write schedule: { bright_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 29] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_gauss_ds_3_update_0_write
//	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0
inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_3_update_0_write, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res = bright_gauss_ds_3_update_0_write.extract<0, 15>();
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res, bright_gauss_ds_3, d0, d1, dynamic_address);
}

// bright_laplace_us_2_update_0_read
//	bright_laplace_us_2_rd0
inline hw_uint<16> bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_2_rd0_res = bright_laplace_us_2_rd0_select(bright_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(bright_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_laplace_diff_0_cache {
  // Reader addrs...
    // { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // # of banks: 2
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0;
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1;
};



inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0);
}

inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1);
}

inline hw_uint<16> fused_level_0_rd0_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 43] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd1_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 43] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_write
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1
inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& bright_laplace_diff_0_update_0_write, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res = bright_laplace_diff_0_update_0_write.extract<0, 15>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res, bright_laplace_diff_0, d0, d1, dynamic_address);
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_res = bright_laplace_diff_0_update_0_write.extract<16, 31>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_res, bright_laplace_diff_0, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
inline hw_uint<32> bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // fused_level_0_rd0
    // fused_level_0_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_laplace_diff_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(bright_laplace_diff_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, fused_level_0_rd1_res);
	return result;
}

struct bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_laplace_diff_1_cache {
  // Reader addrs...
    // { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // # of banks: 1
  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0;
};



inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(hw_uint<16>& bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.push(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 46] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { bright_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 42] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0 = bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_write
//	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0
inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_1_update_0_write, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res = bright_laplace_diff_1_update_0_write.extract<0, 15>();
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res, bright_laplace_diff_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_laplace_diff_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

struct bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_laplace_diff_2_cache {
  // Reader addrs...
    // { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // # of banks: 1
  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0;
};



inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(hw_uint<16>& bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.push(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 45] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { bright_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 41] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  auto value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0 = bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_write
//	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0
inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_2_update_0_write, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res = bright_laplace_diff_2_update_0_write.extract<0, 15>();
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res, bright_laplace_diff_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(bright_laplace_diff_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_laplace_us_0_cache {
  // Reader addrs...
    // { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // # of banks: 2
  bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0;
  bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1;
};



inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write0, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write0);
}

inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write1_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write1);
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 43] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 40] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_0_rd1_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd1 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 43] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 40] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write1 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
//	bright_laplace_diff_0_rd1
inline hw_uint<32> bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_laplace_diff_0_rd0
    // bright_laplace_diff_0_rd1

	hw_uint<32> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright_laplace_us_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_laplace_diff_0_rd0_res);
	hw_uint<16> bright_laplace_diff_0_rd1_res = bright_laplace_diff_0_rd1_select(bright_laplace_us_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_laplace_diff_0_rd1_res);
	return result;
}

// bright_laplace_us_0_update_0_write
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write0
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write1
inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(hw_uint<32>& bright_laplace_us_0_update_0_write, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res = bright_laplace_us_0_update_0_write.extract<0, 15>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res, bright_laplace_us_0, d0, d1, dynamic_address);
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write1_res = bright_laplace_us_0_update_0_write.extract<16, 31>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write1_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write1_res, bright_laplace_us_0, d0, d1, dynamic_address);
}

struct bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_laplace_us_1_cache {
  // Reader addrs...
    // { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // # of banks: 1
  bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0;
};



inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(hw_uint<16>& bright_laplace_us_1_bright_laplace_us_1_update_0_write0, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
  bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0.push(bright_laplace_us_1_bright_laplace_us_1_update_0_write0);
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 42] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { bright_laplace_us_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 39] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  auto value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0 = bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<16> bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_laplace_us_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_write
//	bright_laplace_us_1_bright_laplace_us_1_update_0_write0
inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_1_update_0_write, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res = bright_laplace_us_1_update_0_write.extract<0, 15>();
	bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res, bright_laplace_us_1, d0, d1, dynamic_address);
}

struct bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_laplace_us_2_cache {
  // Reader addrs...
    // { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // # of banks: 1
  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0;
};



inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(hw_uint<16>& bright_laplace_us_2_bright_laplace_us_2_update_0_write0, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
  bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_laplace_us_2_bright_laplace_us_2_update_0_write0);
}

inline hw_uint<16> bright_laplace_diff_2_rd0_select(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Read schedule : { bright_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 41] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { bright_laplace_us_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 38] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  auto value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0 = bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<16> bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_laplace_us_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_2_update_0_write
//	bright_laplace_us_2_bright_laplace_us_2_update_0_write0
inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_2_update_0_write, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res = bright_laplace_us_2_update_0_write.extract<0, 15>();
	bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res, bright_laplace_us_2, d0, d1, dynamic_address);
}

struct bright_weights_bright_weights_update_0_write0_to_bright_weights_normed_rd0_cache {
	// RAM Box: {[-8, 1080], [-7, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_weights_bright_weights_update_0_write1_to_bright_weights_normed_rd1_cache {
	// RAM Box: {[-7, 1081], [-7, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_weights_cache {
  // Reader addrs...
    // { bright_weights_normed_update_0[d0, d1] -> bright_weights[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
    // { bright_weights_normed_update_0[d0, d1] -> bright_weights[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // # of banks: 2
  bright_weights_bright_weights_update_0_write0_to_bright_weights_normed_rd0_cache bright_weights_bright_weights_update_0_write0_to_bright_weights_normed_rd0;
  bright_weights_bright_weights_update_0_write1_to_bright_weights_normed_rd1_cache bright_weights_bright_weights_update_0_write1_to_bright_weights_normed_rd1;
};



inline void bright_weights_bright_weights_update_0_write0_write(hw_uint<16>& bright_weights_bright_weights_update_0_write0, bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  bright_weights.bright_weights_bright_weights_update_0_write0_to_bright_weights_normed_rd0.push(bright_weights_bright_weights_update_0_write0);
}

inline void bright_weights_bright_weights_update_0_write1_write(hw_uint<16>& bright_weights_bright_weights_update_0_write1, bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  bright_weights.bright_weights_bright_weights_update_0_write1_to_bright_weights_normed_rd1.push(bright_weights_bright_weights_update_0_write1);
}

inline hw_uint<16> bright_weights_normed_rd0_select(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_to_bright_weights_normed_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_weights_bright_weights_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_rd1_select(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd1 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_bright_weights_update_0_write1 = bright_weights.bright_weights_bright_weights_update_0_write1_to_bright_weights_normed_rd1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_bright_weights_update_0_write1;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
//	bright_weights_normed_rd1
inline hw_uint<32> bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_weights_normed_rd0
    // bright_weights_normed_rd1

	hw_uint<32> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(bright_weights, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_weights_normed_rd0_res);
	hw_uint<16> bright_weights_normed_rd1_res = bright_weights_normed_rd1_select(bright_weights, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_weights_normed_rd1_res);
	return result;
}

// bright_weights_update_0_write
//	bright_weights_bright_weights_update_0_write0
//	bright_weights_bright_weights_update_0_write1
inline void bright_weights_bright_weights_update_0_write_bundle_write(hw_uint<32>& bright_weights_update_0_write, bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_bright_weights_update_0_write0_res = bright_weights_update_0_write.extract<0, 15>();
	bright_weights_bright_weights_update_0_write0_write(bright_weights_bright_weights_update_0_write0_res, bright_weights, d0, d1, dynamic_address);
	hw_uint<16> bright_weights_bright_weights_update_0_write1_res = bright_weights_update_0_write.extract<16, 31>();
	bright_weights_bright_weights_update_0_write1_write(bright_weights_bright_weights_update_0_write1_res, bright_weights, d0, d1, dynamic_address);
}

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 547
	// # of read delays: 547
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546
	fifo<hw_uint<16>, 547> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(546 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write1_to_fused_level_0_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 547
	// # of read delays: 547
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546
	fifo<hw_uint<16>, 547> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(546 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-6, 1080], [-7, 1919]}
	// Capacity: 1092
	// # of read delays: 6
  // 0, 1, 545, 546, 1090, 1091
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 543> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 543> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_545() {
		return f4;
	}

	inline hw_uint<16> peek_546() {
		return f6;
	}

	inline hw_uint<16> peek_1089() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1090() {
		return f8;
	}

	inline hw_uint<16> peek_1091() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-7, 1079], [-7, 1919]}
	// Capacity: 1093
	// # of read delays: 7
  // 0, 1, 2, 546, 547, 1091, 1092
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 543> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 543> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_545() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_546() {
		return f6;
	}

	inline hw_uint<16> peek_547() {
		return f8;
	}

	inline hw_uint<16> peek_1090() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1091() {
		return f10;
	}

	inline hw_uint<16> peek_1092() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
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

struct bright_weights_normed_cache {
  // Reader addrs...
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[-1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[-1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[-1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { fused_level_0_update_0[d0, d1] -> bright_weights_normed[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { fused_level_0_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // # of banks: 4
  bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0;
  bright_weights_normed_bright_weights_normed_update_0_write1_to_fused_level_0_rd1_cache bright_weights_normed_bright_weights_normed_update_0_write1_to_fused_level_0_rd1;
  bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_cache bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9;
  bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9_cache bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.push(bright_weights_normed_bright_weights_normed_update_0_write0);
}

inline void bright_weights_normed_bright_weights_normed_update_0_write1_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write1, bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_to_fused_level_0_rd1.push(bright_weights_normed_bright_weights_normed_update_0_write1);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.push(bright_weights_normed_bright_weights_normed_update_0_write1);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[-1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.peek_1092();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[-1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.peek_547();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd10_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd10 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_546();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd11_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd11 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd12_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd12 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.peek_1091();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd13_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd13 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.peek_546();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd14_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd14 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd15_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd15 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_1090();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd16_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd16 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_545();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd17_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd17 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_0();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[-1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.peek_2();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_1091();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_546();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.peek_1091();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.peek_546();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_9.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd9_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd9 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_1091();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ (1918 - d1 >= 0) ? (546) : (-1919 + d1 == 0) ? ((540 - d0)) : 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_to_fused_level_0_rd1.peek(/* one reader or all rams */ (1918 - d1 >= 0) ? (546) : (-1919 + d1 == 0) ? ((540 - d0)) : 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
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
//	bright_weights_normed_gauss_blur_1_rd9
//	bright_weights_normed_gauss_blur_1_rd10
//	bright_weights_normed_gauss_blur_1_rd11
//	bright_weights_normed_gauss_blur_1_rd12
//	bright_weights_normed_gauss_blur_1_rd13
//	bright_weights_normed_gauss_blur_1_rd14
//	bright_weights_normed_gauss_blur_1_rd15
//	bright_weights_normed_gauss_blur_1_rd16
//	bright_weights_normed_gauss_blur_1_rd17
inline hw_uint<288> bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // bright_weights_normed_gauss_blur_1_rd0
    // bright_weights_normed_gauss_blur_1_rd1
    // bright_weights_normed_gauss_blur_1_rd2
    // bright_weights_normed_gauss_blur_1_rd3
    // bright_weights_normed_gauss_blur_1_rd4
    // bright_weights_normed_gauss_blur_1_rd5
    // bright_weights_normed_gauss_blur_1_rd6
    // bright_weights_normed_gauss_blur_1_rd7
    // bright_weights_normed_gauss_blur_1_rd8
    // bright_weights_normed_gauss_blur_1_rd9
    // bright_weights_normed_gauss_blur_1_rd10
    // bright_weights_normed_gauss_blur_1_rd11
    // bright_weights_normed_gauss_blur_1_rd12
    // bright_weights_normed_gauss_blur_1_rd13
    // bright_weights_normed_gauss_blur_1_rd14
    // bright_weights_normed_gauss_blur_1_rd15
    // bright_weights_normed_gauss_blur_1_rd16
    // bright_weights_normed_gauss_blur_1_rd17

	hw_uint<288> result;
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_res = bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<0, 288>(result, bright_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd1_res = bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<16, 288>(result, bright_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_res = bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<32, 288>(result, bright_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_res = bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<48, 288>(result, bright_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_res = bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<64, 288>(result, bright_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_res = bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<80, 288>(result, bright_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_res = bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<96, 288>(result, bright_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_res = bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<112, 288>(result, bright_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_res = bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<128, 288>(result, bright_weights_normed_gauss_blur_1_rd8_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd9_res = bright_weights_normed_gauss_blur_1_rd9_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<144, 288>(result, bright_weights_normed_gauss_blur_1_rd9_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd10_res = bright_weights_normed_gauss_blur_1_rd10_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<160, 288>(result, bright_weights_normed_gauss_blur_1_rd10_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd11_res = bright_weights_normed_gauss_blur_1_rd11_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<176, 288>(result, bright_weights_normed_gauss_blur_1_rd11_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd12_res = bright_weights_normed_gauss_blur_1_rd12_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<192, 288>(result, bright_weights_normed_gauss_blur_1_rd12_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd13_res = bright_weights_normed_gauss_blur_1_rd13_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<208, 288>(result, bright_weights_normed_gauss_blur_1_rd13_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd14_res = bright_weights_normed_gauss_blur_1_rd14_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<224, 288>(result, bright_weights_normed_gauss_blur_1_rd14_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd15_res = bright_weights_normed_gauss_blur_1_rd15_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<240, 288>(result, bright_weights_normed_gauss_blur_1_rd15_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd16_res = bright_weights_normed_gauss_blur_1_rd16_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<256, 288>(result, bright_weights_normed_gauss_blur_1_rd16_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd17_res = bright_weights_normed_gauss_blur_1_rd17_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<272, 288>(result, bright_weights_normed_gauss_blur_1_rd17_res);
	return result;
}

// bright_weights_normed_update_0_write
//	bright_weights_normed_bright_weights_normed_update_0_write0
//	bright_weights_normed_bright_weights_normed_update_0_write1
inline void bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_update_0_write, bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write0_res = bright_weights_normed_update_0_write.extract<0, 15>();
	bright_weights_normed_bright_weights_normed_update_0_write0_write(bright_weights_normed_bright_weights_normed_update_0_write0_res, bright_weights_normed, d0, d1, dynamic_address);
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write1_res = bright_weights_normed_update_0_write.extract<16, 31>();
	bright_weights_normed_bright_weights_normed_update_0_write1_write(bright_weights_normed_bright_weights_normed_update_0_write1_res, bright_weights_normed, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
inline hw_uint<32> bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // fused_level_0_rd0
    // fused_level_0_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<16, 32>(result, fused_level_0_rd1_res);
	return result;
}

struct bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0_cache {
	// RAM Box: {[-6, 1078], [-6, 1918]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_weights_normed_gauss_blur_1_cache {
  // Reader addrs...
    // { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // # of banks: 1
  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0_cache bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0;
};



inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0.push(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0);
}

inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // Read schedule : { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // Write schedule: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  auto value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0 = bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_1_update_0_write
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1
inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_blur_1_update_0_write, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res, bright_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<16, 31>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_res, bright_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
}

// bright_weights_normed_gauss_ds_1_update_0_read
//	bright_weights_normed_gauss_ds_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_res = bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_1_rd0_res);
	return result;
}

struct bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0_cache {
	// RAM Box: {[-2, 538], [-2, 958]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_weights_normed_gauss_blur_2_cache {
  // Reader addrs...
    // { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // # of banks: 1
  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0_cache bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0;
};



inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0.push(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // Read schedule : { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // Write schedule: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  auto value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0 = bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_2_update_0_write
//	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0
inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_update_0_write, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res = bright_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res, bright_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
}

// bright_weights_normed_gauss_ds_2_update_0_read
//	bright_weights_normed_gauss_ds_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_res = bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_2_rd0_res);
	return result;
}

struct bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 268], [0, 478]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_weights_normed_gauss_blur_3_cache {
  // Reader addrs...
    // { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // # of banks: 1
  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0_cache bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0;
};



inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0.push(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Read schedule : { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 37] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Write schedule: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  auto value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0 = bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_3_update_0_write
//	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0
inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_3_update_0_write, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res = bright_weights_normed_gauss_blur_3_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res, bright_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
}

// bright_weights_normed_gauss_ds_3_update_0_read
//	bright_weights_normed_gauss_ds_3_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_3_rd0_res = bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_3_rd0_res);
	return result;
}

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 545
	// # of read delays: 545
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544
	fifo<hw_uint<16>, 545> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(544 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-3, 539], [-3, 959]}
	// Capacity: 1089
	// # of read delays: 9
  // 0, 1, 2, 543, 544, 545, 1086, 1087, 1088
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 540> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 540> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_543() {
		return f6;
	}

	inline hw_uint<16> peek_544() {
		return f8;
	}

	inline hw_uint<16> peek_545() {
		return f10;
	}

	inline hw_uint<16> peek_1085() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1086() {
		return f12;
	}

	inline hw_uint<16> peek_1087() {
		return f14;
	}

	inline hw_uint<16> peek_1088() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 540
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
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
    // cap: 1 reading from capacity: 540
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
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

struct bright_weights_normed_gauss_ds_1_cache {
  // Reader addrs...
    // { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // # of banks: 2
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0;
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1088();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_545();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1087();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_544();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1086();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_543();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 46] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ (958 - d1 >= 0 && 538 - d0 >= 0) ? (544) : (-539 + d0 == 0 && 958 - d1 >= 0) ? (543) : (-959 + d1 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
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
inline hw_uint<144> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_2_rd0
    // bright_weights_normed_gauss_blur_2_rd1
    // bright_weights_normed_gauss_blur_2_rd2
    // bright_weights_normed_gauss_blur_2_rd3
    // bright_weights_normed_gauss_blur_2_rd4
    // bright_weights_normed_gauss_blur_2_rd5
    // bright_weights_normed_gauss_blur_2_rd6
    // bright_weights_normed_gauss_blur_2_rd7
    // bright_weights_normed_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_res = bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd1_res = bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_res = bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd3_res = bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_res = bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_res = bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_res = bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd7_res = bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd8_res = bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_1_update_0_write
//	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0
inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_update_0_write, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res = bright_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res, bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 273
	// # of read delays: 273
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272
	fifo<hw_uint<16>, 273> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(272 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-1, 269], [-1, 479]}
	// Capacity: 545
	// # of read delays: 9
  // 0, 1, 2, 271, 272, 273, 542, 543, 544
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 268> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 268> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_270() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_271() {
		return f6;
	}

	inline hw_uint<16> peek_272() {
		return f8;
	}

	inline hw_uint<16> peek_273() {
		return f10;
	}

	inline hw_uint<16> peek_541() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_542() {
		return f12;
	}

	inline hw_uint<16> peek_543() {
		return f14;
	}

	inline hw_uint<16> peek_544() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 268
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
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
    // cap: 1 reading from capacity: 268
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
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

struct bright_weights_normed_gauss_ds_2_cache {
  // Reader addrs...
    // { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // # of banks: 2
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_544();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_273();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_543();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_272();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_542();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_271();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 45] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (478 - d1 >= 0 && 268 - d0 >= 0) ? (272) : (-269 + d0 == 0 && 478 - d1 >= 0) ? (271) : (-479 + d1 == 0 && 268 - d0 >= 0) ? ((269 - d0)) : 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
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
inline hw_uint<144> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_3_rd0
    // bright_weights_normed_gauss_blur_3_rd1
    // bright_weights_normed_gauss_blur_3_rd2
    // bright_weights_normed_gauss_blur_3_rd3
    // bright_weights_normed_gauss_blur_3_rd4
    // bright_weights_normed_gauss_blur_3_rd5
    // bright_weights_normed_gauss_blur_3_rd6
    // bright_weights_normed_gauss_blur_3_rd7
    // bright_weights_normed_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_res = bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd1_res = bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd2_res = bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd3_res = bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd4_res = bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd5_res = bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd6_res = bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd7_res = bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd8_res = bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_2_update_0_write
//	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0
inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_update_0_write, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res = bright_weights_normed_gauss_ds_2_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res, bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

struct bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 134], [0, 239]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct bright_weights_normed_gauss_ds_3_cache {
  // Reader addrs...
    // { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // # of banks: 1
  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 44] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Write schedule: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 37] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_ds_3_update_0_write
//	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0
inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_update_0_write, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res = bright_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res, bright_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

struct dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 547
	// # of read delays: 547
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546
	fifo<hw_uint<16>, 547> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(546 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write1_to_dark_laplace_diff_0_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 547
	// # of read delays: 547
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546
	fifo<hw_uint<16>, 547> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(546 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[-8, 1080], [-7, 1919]}
	// Capacity: 1092
	// # of read delays: 6
  // 0, 1, 545, 546, 1090, 1091
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 543> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 543> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_545() {
		return f4;
	}

	inline hw_uint<16> peek_546() {
		return f6;
	}

	inline hw_uint<16> peek_1089() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1090() {
		return f8;
	}

	inline hw_uint<16> peek_1091() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_dark_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[-7, 1081], [-7, 1919]}
	// Capacity: 1093
	// # of read delays: 7
  // 0, 1, 2, 546, 547, 1091, 1092
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 543> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 543> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_545() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_546() {
		return f6;
	}

	inline hw_uint<16> peek_547() {
		return f8;
	}

	inline hw_uint<16> peek_1090() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1091() {
		return f10;
	}

	inline hw_uint<16> peek_1092() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
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

struct dark_cache {
  // Reader addrs...
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[-1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[-1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[-1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_laplace_diff_0_update_0[d0, d1] -> dark[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { dark_laplace_diff_0_update_0[d0, d1] -> dark[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { dark_weights_update_0[d0, d1] -> dark[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
    // { dark_weights_update_0[d0, d1] -> dark[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // # of banks: 4
  dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_cache dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0;
  dark_dark_update_0_write1_to_dark_laplace_diff_0_rd1_cache dark_dark_update_0_write1_to_dark_laplace_diff_0_rd1;
  dark_dark_update_0_write0_merged_banks_10_cache dark_dark_update_0_write0_merged_banks_10;
  dark_dark_update_0_write1_merged_banks_10_cache dark_dark_update_0_write1_merged_banks_10;
};



inline void dark_dark_update_0_write0_write(hw_uint<16>& dark_dark_update_0_write0, dark_cache& dark, int d0, int d1, int dynamic_address) {
  dark.dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_merged_banks_10.push(dark_dark_update_0_write0);
}

inline void dark_dark_update_0_write1_write(hw_uint<16>& dark_dark_update_0_write1, dark_cache& dark, int d0, int d1, int dynamic_address) {
  dark.dark_dark_update_0_write1_to_dark_laplace_diff_0_rd1.push(dark_dark_update_0_write1);
  dark.dark_dark_update_0_write1_merged_banks_10.push(dark_dark_update_0_write1);
}

inline hw_uint<16> dark_gauss_blur_1_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[-1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_1092();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd1_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[-1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_547();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd10_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd10 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_546();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd11_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd11 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_1();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd12_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd12 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_1091();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd13_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd13 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_546();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd14_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd14 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_1();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd15_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd15 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_1090();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd16_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd16 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_545();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd17_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd17 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_0();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd2_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[-1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_2();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd3_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_1091();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd4_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_546();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd5_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_1();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd6_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_1091();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd7_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_546();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd8_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_1();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd9_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd9 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_1091();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 36] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0.peek(/* one reader or all rams */ (1918 - d1 >= 0) ? (546) : (-1919 + d1 == 0) ? ((540 - d0)) : 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_0_rd1_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd1 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 36] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_to_dark_laplace_diff_0_rd1.peek(/* one reader or all rams */ (1918 - d1 >= 0) ? (546) : (-1919 + d1 == 0) ? ((540 - d0)) : 0);
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_0();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_rd1_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd1 read pattern: { dark_weights_update_0[d0, d1] -> dark[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_10.peek_0();
  return value_dark_dark_update_0_write1;
  return 0;
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
//	dark_gauss_blur_1_rd9
//	dark_gauss_blur_1_rd10
//	dark_gauss_blur_1_rd11
//	dark_gauss_blur_1_rd12
//	dark_gauss_blur_1_rd13
//	dark_gauss_blur_1_rd14
//	dark_gauss_blur_1_rd15
//	dark_gauss_blur_1_rd16
//	dark_gauss_blur_1_rd17
inline hw_uint<288> dark_dark_gauss_blur_1_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // dark_gauss_blur_1_rd0
    // dark_gauss_blur_1_rd1
    // dark_gauss_blur_1_rd2
    // dark_gauss_blur_1_rd3
    // dark_gauss_blur_1_rd4
    // dark_gauss_blur_1_rd5
    // dark_gauss_blur_1_rd6
    // dark_gauss_blur_1_rd7
    // dark_gauss_blur_1_rd8
    // dark_gauss_blur_1_rd9
    // dark_gauss_blur_1_rd10
    // dark_gauss_blur_1_rd11
    // dark_gauss_blur_1_rd12
    // dark_gauss_blur_1_rd13
    // dark_gauss_blur_1_rd14
    // dark_gauss_blur_1_rd15
    // dark_gauss_blur_1_rd16
    // dark_gauss_blur_1_rd17

	hw_uint<288> result;
	hw_uint<16> dark_gauss_blur_1_rd0_res = dark_gauss_blur_1_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 288>(result, dark_gauss_blur_1_rd0_res);
	hw_uint<16> dark_gauss_blur_1_rd1_res = dark_gauss_blur_1_rd1_select(dark, d0, d1, dynamic_address);
	set_at<16, 288>(result, dark_gauss_blur_1_rd1_res);
	hw_uint<16> dark_gauss_blur_1_rd2_res = dark_gauss_blur_1_rd2_select(dark, d0, d1, dynamic_address);
	set_at<32, 288>(result, dark_gauss_blur_1_rd2_res);
	hw_uint<16> dark_gauss_blur_1_rd3_res = dark_gauss_blur_1_rd3_select(dark, d0, d1, dynamic_address);
	set_at<48, 288>(result, dark_gauss_blur_1_rd3_res);
	hw_uint<16> dark_gauss_blur_1_rd4_res = dark_gauss_blur_1_rd4_select(dark, d0, d1, dynamic_address);
	set_at<64, 288>(result, dark_gauss_blur_1_rd4_res);
	hw_uint<16> dark_gauss_blur_1_rd5_res = dark_gauss_blur_1_rd5_select(dark, d0, d1, dynamic_address);
	set_at<80, 288>(result, dark_gauss_blur_1_rd5_res);
	hw_uint<16> dark_gauss_blur_1_rd6_res = dark_gauss_blur_1_rd6_select(dark, d0, d1, dynamic_address);
	set_at<96, 288>(result, dark_gauss_blur_1_rd6_res);
	hw_uint<16> dark_gauss_blur_1_rd7_res = dark_gauss_blur_1_rd7_select(dark, d0, d1, dynamic_address);
	set_at<112, 288>(result, dark_gauss_blur_1_rd7_res);
	hw_uint<16> dark_gauss_blur_1_rd8_res = dark_gauss_blur_1_rd8_select(dark, d0, d1, dynamic_address);
	set_at<128, 288>(result, dark_gauss_blur_1_rd8_res);
	hw_uint<16> dark_gauss_blur_1_rd9_res = dark_gauss_blur_1_rd9_select(dark, d0, d1, dynamic_address);
	set_at<144, 288>(result, dark_gauss_blur_1_rd9_res);
	hw_uint<16> dark_gauss_blur_1_rd10_res = dark_gauss_blur_1_rd10_select(dark, d0, d1, dynamic_address);
	set_at<160, 288>(result, dark_gauss_blur_1_rd10_res);
	hw_uint<16> dark_gauss_blur_1_rd11_res = dark_gauss_blur_1_rd11_select(dark, d0, d1, dynamic_address);
	set_at<176, 288>(result, dark_gauss_blur_1_rd11_res);
	hw_uint<16> dark_gauss_blur_1_rd12_res = dark_gauss_blur_1_rd12_select(dark, d0, d1, dynamic_address);
	set_at<192, 288>(result, dark_gauss_blur_1_rd12_res);
	hw_uint<16> dark_gauss_blur_1_rd13_res = dark_gauss_blur_1_rd13_select(dark, d0, d1, dynamic_address);
	set_at<208, 288>(result, dark_gauss_blur_1_rd13_res);
	hw_uint<16> dark_gauss_blur_1_rd14_res = dark_gauss_blur_1_rd14_select(dark, d0, d1, dynamic_address);
	set_at<224, 288>(result, dark_gauss_blur_1_rd14_res);
	hw_uint<16> dark_gauss_blur_1_rd15_res = dark_gauss_blur_1_rd15_select(dark, d0, d1, dynamic_address);
	set_at<240, 288>(result, dark_gauss_blur_1_rd15_res);
	hw_uint<16> dark_gauss_blur_1_rd16_res = dark_gauss_blur_1_rd16_select(dark, d0, d1, dynamic_address);
	set_at<256, 288>(result, dark_gauss_blur_1_rd16_res);
	hw_uint<16> dark_gauss_blur_1_rd17_res = dark_gauss_blur_1_rd17_select(dark, d0, d1, dynamic_address);
	set_at<272, 288>(result, dark_gauss_blur_1_rd17_res);
	return result;
}

// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
//	dark_laplace_diff_0_rd1
inline hw_uint<32> dark_dark_laplace_diff_0_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_laplace_diff_0_rd0
    // dark_laplace_diff_0_rd1

	hw_uint<32> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_laplace_diff_0_rd0_res);
	hw_uint<16> dark_laplace_diff_0_rd1_res = dark_laplace_diff_0_rd1_select(dark, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_laplace_diff_0_rd1_res);
	return result;
}

// dark_update_0_write
//	dark_dark_update_0_write0
//	dark_dark_update_0_write1
inline void dark_dark_update_0_write_bundle_write(hw_uint<32>& dark_update_0_write, dark_cache& dark, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_dark_update_0_write0_res = dark_update_0_write.extract<0, 15>();
	dark_dark_update_0_write0_write(dark_dark_update_0_write0_res, dark, d0, d1, dynamic_address);
	hw_uint<16> dark_dark_update_0_write1_res = dark_update_0_write.extract<16, 31>();
	dark_dark_update_0_write1_write(dark_dark_update_0_write1_res, dark, d0, d1, dynamic_address);
}

// dark_weights_update_0_read
//	dark_weights_rd0
//	dark_weights_rd1
inline hw_uint<32> dark_dark_weights_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_weights_rd0
    // dark_weights_rd1

	hw_uint<32> result;
	hw_uint<16> dark_weights_rd0_res = dark_weights_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_weights_rd0_res);
	hw_uint<16> dark_weights_rd1_res = dark_weights_rd1_select(dark, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_weights_rd1_res);
	return result;
}

struct dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0_cache {
	// RAM Box: {[-6, 1078], [-6, 1918]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_gauss_blur_1_cache {
  // Reader addrs...
    // { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // # of banks: 1
  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0_cache dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0;
};



inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
  dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0.push(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0);
}

inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> dark_gauss_ds_1_rd0_select(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // Read schedule : { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // Write schedule: { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  auto value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0 = dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_gauss_blur_1_update_0_write
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1
inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& dark_gauss_blur_1_update_0_write, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res = dark_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res, dark_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_res = dark_gauss_blur_1_update_0_write.extract<16, 31>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_res, dark_gauss_blur_1, d0, d1, dynamic_address);
}

// dark_gauss_ds_1_update_0_read
//	dark_gauss_ds_1_rd0
inline hw_uint<16> dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_1_rd0_res = dark_gauss_ds_1_rd0_select(dark_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_gauss_ds_1_rd0_res);
	return result;
}

struct dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0_cache {
	// RAM Box: {[-2, 538], [-2, 958]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_gauss_blur_2_cache {
  // Reader addrs...
    // { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // # of banks: 1
  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0_cache dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0;
};



inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
  dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0.push(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> dark_gauss_ds_2_rd0_select(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // Read schedule : { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // Write schedule: { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  auto value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0 = dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_gauss_blur_2_update_0_write
//	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0
inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_2_update_0_write, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res = dark_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res, dark_gauss_blur_2, d0, d1, dynamic_address);
}

// dark_gauss_ds_2_update_0_read
//	dark_gauss_ds_2_rd0
inline hw_uint<16> dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_2_rd0_res = dark_gauss_ds_2_rd0_select(dark_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_gauss_ds_2_rd0_res);
	return result;
}

struct dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 268], [0, 478]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_gauss_blur_3_cache {
  // Reader addrs...
    // { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // # of banks: 1
  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0_cache dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0;
};



inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
  dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0.push(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> dark_gauss_ds_3_rd0_select(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Read schedule : { dark_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 26] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Write schedule: { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  auto value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0 = dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_gauss_blur_3_update_0_write
//	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0
inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_3_update_0_write, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res = dark_gauss_blur_3_update_0_write.extract<0, 15>();
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res, dark_gauss_blur_3, d0, d1, dynamic_address);
}

// dark_gauss_ds_3_update_0_read
//	dark_gauss_ds_3_rd0
inline hw_uint<16> dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_3_rd0_res = dark_gauss_ds_3_rd0_select(dark_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_gauss_ds_3_rd0_res);
	return result;
}

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 545
	// # of read delays: 545
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544
	fifo<hw_uint<16>, 545> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(544 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 540
	// # of read delays: 540
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539
	fifo<hw_uint<16>, 540> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(539 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 540
	// # of read delays: 540
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539
	fifo<hw_uint<16>, 540> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(539 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-3, 539], [-3, 959]}
	// Capacity: 1089
	// # of read delays: 9
  // 0, 1, 2, 543, 544, 545, 1086, 1087, 1088
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 540> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 540> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_543() {
		return f6;
	}

	inline hw_uint<16> peek_544() {
		return f8;
	}

	inline hw_uint<16> peek_545() {
		return f10;
	}

	inline hw_uint<16> peek_1085() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1086() {
		return f12;
	}

	inline hw_uint<16> peek_1087() {
		return f14;
	}

	inline hw_uint<16> peek_1088() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 540
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
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
    // cap: 1 reading from capacity: 540
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
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

struct dark_gauss_ds_1_cache {
  // Reader addrs...
    // { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
    // { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
    // { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // # of banks: 4
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9;
};



inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_2_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_1088();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_545();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd2_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd3_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_1087();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd4_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_544();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd5_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd6_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_1086();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd7_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_543();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd8_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 35] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0.peek(/* one reader or all rams */ (958 - d1 >= 0 && 538 - d0 >= 0) ? (544) : (-539 + d0 == 0 && 958 - d1 >= 0) ? (543) : (-959 + d1 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_us_0_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 33] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_us_0_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd1 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 33] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
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
inline hw_uint<144> dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_gauss_blur_2_rd0
    // dark_gauss_blur_2_rd1
    // dark_gauss_blur_2_rd2
    // dark_gauss_blur_2_rd3
    // dark_gauss_blur_2_rd4
    // dark_gauss_blur_2_rd5
    // dark_gauss_blur_2_rd6
    // dark_gauss_blur_2_rd7
    // dark_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_2_rd0_res = dark_gauss_blur_2_rd0_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_gauss_blur_2_rd0_res);
	hw_uint<16> dark_gauss_blur_2_rd1_res = dark_gauss_blur_2_rd1_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_gauss_blur_2_rd1_res);
	hw_uint<16> dark_gauss_blur_2_rd2_res = dark_gauss_blur_2_rd2_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_gauss_blur_2_rd2_res);
	hw_uint<16> dark_gauss_blur_2_rd3_res = dark_gauss_blur_2_rd3_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_gauss_blur_2_rd3_res);
	hw_uint<16> dark_gauss_blur_2_rd4_res = dark_gauss_blur_2_rd4_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_gauss_blur_2_rd4_res);
	hw_uint<16> dark_gauss_blur_2_rd5_res = dark_gauss_blur_2_rd5_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_gauss_blur_2_rd5_res);
	hw_uint<16> dark_gauss_blur_2_rd6_res = dark_gauss_blur_2_rd6_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_gauss_blur_2_rd6_res);
	hw_uint<16> dark_gauss_blur_2_rd7_res = dark_gauss_blur_2_rd7_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_gauss_blur_2_rd7_res);
	hw_uint<16> dark_gauss_blur_2_rd8_res = dark_gauss_blur_2_rd8_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_gauss_blur_2_rd8_res);
	return result;
}

// dark_gauss_ds_1_update_0_write
//	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0
inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_1_update_0_write, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res = dark_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res, dark_gauss_ds_1, d0, d1, dynamic_address);
}

// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<16> dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_read
//	dark_laplace_us_0_rd0
//	dark_laplace_us_0_rd1
inline hw_uint<32> dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_laplace_us_0_rd0
    // dark_laplace_us_0_rd1

	hw_uint<32> result;
	hw_uint<16> dark_laplace_us_0_rd0_res = dark_laplace_us_0_rd0_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_laplace_us_0_rd0_res);
	hw_uint<16> dark_laplace_us_0_rd1_res = dark_laplace_us_0_rd1_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_laplace_us_0_rd1_res);
	return result;
}

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 273
	// # of read delays: 273
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272
	fifo<hw_uint<16>, 273> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(272 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 270
	// # of read delays: 271
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269
	fifo<hw_uint<16>, 270> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(269 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-1, 269], [-1, 479]}
	// Capacity: 545
	// # of read delays: 9
  // 0, 1, 2, 271, 272, 273, 542, 543, 544
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 268> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 268> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_270() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_271() {
		return f6;
	}

	inline hw_uint<16> peek_272() {
		return f8;
	}

	inline hw_uint<16> peek_273() {
		return f10;
	}

	inline hw_uint<16> peek_541() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_542() {
		return f12;
	}

	inline hw_uint<16> peek_543() {
		return f14;
	}

	inline hw_uint<16> peek_544() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 268
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
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
    // cap: 1 reading from capacity: 268
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
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

struct dark_gauss_ds_2_cache {
  // Reader addrs...
    // { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
    // { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // # of banks: 3
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_3_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_544();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd1_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_273();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd2_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd3_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_543();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd4_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_272();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd5_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd6_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_542();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd7_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_271();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd8_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_2_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Read schedule : { dark_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 34] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ (478 - d1 >= 0 && 268 - d0 >= 0) ? (272) : (-269 + d0 == 0 && 478 - d1 >= 0) ? (271) : (-479 + d1 == 0 && 268 - d0 >= 0) ? ((269 - d0)) : 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_us_1_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 32] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 537 - d0 >= 0) ? ((269 - floord(2*d0, 4))) : 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
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
inline hw_uint<144> dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_gauss_blur_3_rd0
    // dark_gauss_blur_3_rd1
    // dark_gauss_blur_3_rd2
    // dark_gauss_blur_3_rd3
    // dark_gauss_blur_3_rd4
    // dark_gauss_blur_3_rd5
    // dark_gauss_blur_3_rd6
    // dark_gauss_blur_3_rd7
    // dark_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_3_rd0_res = dark_gauss_blur_3_rd0_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_gauss_blur_3_rd0_res);
	hw_uint<16> dark_gauss_blur_3_rd1_res = dark_gauss_blur_3_rd1_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_gauss_blur_3_rd1_res);
	hw_uint<16> dark_gauss_blur_3_rd2_res = dark_gauss_blur_3_rd2_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_gauss_blur_3_rd2_res);
	hw_uint<16> dark_gauss_blur_3_rd3_res = dark_gauss_blur_3_rd3_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_gauss_blur_3_rd3_res);
	hw_uint<16> dark_gauss_blur_3_rd4_res = dark_gauss_blur_3_rd4_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_gauss_blur_3_rd4_res);
	hw_uint<16> dark_gauss_blur_3_rd5_res = dark_gauss_blur_3_rd5_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_gauss_blur_3_rd5_res);
	hw_uint<16> dark_gauss_blur_3_rd6_res = dark_gauss_blur_3_rd6_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_gauss_blur_3_rd6_res);
	hw_uint<16> dark_gauss_blur_3_rd7_res = dark_gauss_blur_3_rd7_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_gauss_blur_3_rd7_res);
	hw_uint<16> dark_gauss_blur_3_rd8_res = dark_gauss_blur_3_rd8_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_gauss_blur_3_rd8_res);
	return result;
}

// dark_gauss_ds_2_update_0_write
//	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0
inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_2_update_0_write, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res = dark_gauss_ds_2_update_0_write.extract<0, 15>();
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res, dark_gauss_ds_2, d0, d1, dynamic_address);
}

// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<16> dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_read
//	dark_laplace_us_1_rd0
inline hw_uint<16> dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_1_rd0_res = dark_laplace_us_1_rd0_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_us_1_rd0_res);
	return result;
}

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 134], [0, 239]}
	// Capacity: 135
	// # of read delays: 136
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134
	fifo<hw_uint<16>, 135> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(134 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 134], [0, 239]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_gauss_ds_3_cache {
  // Reader addrs...
    // { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
    // { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // # of banks: 2
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0;
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> dark_laplace_us_2_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 31] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { dark_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 26] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 267 - d0 >= 0) ? ((134 - floord(2*d0, 4))) : 0);
  return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_3_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 44] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Write schedule: { dark_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 26] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 3
// dark_gauss_ds_3_update_0_write
//	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0
inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_3_update_0_write, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res = dark_gauss_ds_3_update_0_write.extract<0, 15>();
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res, dark_gauss_ds_3, d0, d1, dynamic_address);
}

// dark_laplace_us_2_update_0_read
//	dark_laplace_us_2_rd0
inline hw_uint<16> dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_2_rd0_res = dark_laplace_us_2_rd0_select(dark_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(dark_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_laplace_diff_0_cache {
  // Reader addrs...
    // { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // # of banks: 2
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0;
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1;
};



inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0);
}

inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1);
}

inline hw_uint<16> fused_level_0_rd0_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 36] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd1_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 36] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_write
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1
inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& dark_laplace_diff_0_update_0_write, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res = dark_laplace_diff_0_update_0_write.extract<0, 15>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res, dark_laplace_diff_0, d0, d1, dynamic_address);
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_res = dark_laplace_diff_0_update_0_write.extract<16, 31>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_res, dark_laplace_diff_0, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
inline hw_uint<32> dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // fused_level_0_rd0
    // fused_level_0_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_laplace_diff_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(dark_laplace_diff_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, fused_level_0_rd1_res);
	return result;
}

struct dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_laplace_diff_1_cache {
  // Reader addrs...
    // { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // # of banks: 1
  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0;
};



inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(hw_uint<16>& dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.push(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 46] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { dark_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 35] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0 = dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_write
//	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0
inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_1_update_0_write, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res = dark_laplace_diff_1_update_0_write.extract<0, 15>();
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res, dark_laplace_diff_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_laplace_diff_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

struct dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_laplace_diff_2_cache {
  // Reader addrs...
    // { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // # of banks: 1
  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0;
};



inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(hw_uint<16>& dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.push(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 45] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { dark_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 34] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  auto value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0 = dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_write
//	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0
inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_2_update_0_write, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res = dark_laplace_diff_2_update_0_write.extract<0, 15>();
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res, dark_laplace_diff_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(dark_laplace_diff_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_laplace_us_0_cache {
  // Reader addrs...
    // { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // # of banks: 2
  dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0;
  dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1;
};



inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write0, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write0);
}

inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write1_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write1);
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 36] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 33] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_0_rd1_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd1 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 36] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 33] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write1 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
//	dark_laplace_diff_0_rd1
inline hw_uint<32> dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_laplace_diff_0_rd0
    // dark_laplace_diff_0_rd1

	hw_uint<32> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark_laplace_us_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_laplace_diff_0_rd0_res);
	hw_uint<16> dark_laplace_diff_0_rd1_res = dark_laplace_diff_0_rd1_select(dark_laplace_us_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_laplace_diff_0_rd1_res);
	return result;
}

// dark_laplace_us_0_update_0_write
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write0
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write1
inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(hw_uint<32>& dark_laplace_us_0_update_0_write, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res = dark_laplace_us_0_update_0_write.extract<0, 15>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res, dark_laplace_us_0, d0, d1, dynamic_address);
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write1_res = dark_laplace_us_0_update_0_write.extract<16, 31>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write1_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write1_res, dark_laplace_us_0, d0, d1, dynamic_address);
}

struct dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_laplace_us_1_cache {
  // Reader addrs...
    // { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // # of banks: 1
  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0;
};



inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(hw_uint<16>& dark_laplace_us_1_dark_laplace_us_1_update_0_write0, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
  dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0.push(dark_laplace_us_1_dark_laplace_us_1_update_0_write0);
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 35] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { dark_laplace_us_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 32] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0 = dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<16> dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_laplace_us_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_write
//	dark_laplace_us_1_dark_laplace_us_1_update_0_write0
inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_1_update_0_write, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res = dark_laplace_us_1_update_0_write.extract<0, 15>();
	dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res, dark_laplace_us_1, d0, d1, dynamic_address);
}

struct dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_laplace_us_2_cache {
  // Reader addrs...
    // { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // # of banks: 1
  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0;
};



inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(hw_uint<16>& dark_laplace_us_2_dark_laplace_us_2_update_0_write0, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
  dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_laplace_us_2_dark_laplace_us_2_update_0_write0);
}

inline hw_uint<16> dark_laplace_diff_2_rd0_select(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Read schedule : { dark_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 34] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { dark_laplace_us_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 31] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  auto value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0 = dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<16> dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_laplace_us_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_2_update_0_write
//	dark_laplace_us_2_dark_laplace_us_2_update_0_write0
inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_2_update_0_write, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res = dark_laplace_us_2_update_0_write.extract<0, 15>();
	dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res, dark_laplace_us_2, d0, d1, dynamic_address);
}

struct dark_weights_dark_weights_update_0_write0_to_dark_weights_normed_rd0_cache {
	// RAM Box: {[-8, 1080], [-7, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_weights_dark_weights_update_0_write1_to_dark_weights_normed_rd1_cache {
	// RAM Box: {[-7, 1081], [-7, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_weights_cache {
  // Reader addrs...
    // { dark_weights_normed_update_0[d0, d1] -> dark_weights[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
    // { dark_weights_normed_update_0[d0, d1] -> dark_weights[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // # of banks: 2
  dark_weights_dark_weights_update_0_write0_to_dark_weights_normed_rd0_cache dark_weights_dark_weights_update_0_write0_to_dark_weights_normed_rd0;
  dark_weights_dark_weights_update_0_write1_to_dark_weights_normed_rd1_cache dark_weights_dark_weights_update_0_write1_to_dark_weights_normed_rd1;
};



inline void dark_weights_dark_weights_update_0_write0_write(hw_uint<16>& dark_weights_dark_weights_update_0_write0, dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  dark_weights.dark_weights_dark_weights_update_0_write0_to_dark_weights_normed_rd0.push(dark_weights_dark_weights_update_0_write0);
}

inline void dark_weights_dark_weights_update_0_write1_write(hw_uint<16>& dark_weights_dark_weights_update_0_write1, dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  dark_weights.dark_weights_dark_weights_update_0_write1_to_dark_weights_normed_rd1.push(dark_weights_dark_weights_update_0_write1);
}

inline hw_uint<16> dark_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_to_dark_weights_normed_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_weights_dark_weights_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_rd1_select(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd1 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_dark_weights_update_0_write1 = dark_weights.dark_weights_dark_weights_update_0_write1_to_dark_weights_normed_rd1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_dark_weights_update_0_write1;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
//	dark_weights_normed_rd1
inline hw_uint<32> dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_weights_normed_rd0
    // dark_weights_normed_rd1

	hw_uint<32> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(dark_weights, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_weights_normed_rd0_res);
	hw_uint<16> dark_weights_normed_rd1_res = dark_weights_normed_rd1_select(dark_weights, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_weights_normed_rd1_res);
	return result;
}

// dark_weights_update_0_write
//	dark_weights_dark_weights_update_0_write0
//	dark_weights_dark_weights_update_0_write1
inline void dark_weights_dark_weights_update_0_write_bundle_write(hw_uint<32>& dark_weights_update_0_write, dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_dark_weights_update_0_write0_res = dark_weights_update_0_write.extract<0, 15>();
	dark_weights_dark_weights_update_0_write0_write(dark_weights_dark_weights_update_0_write0_res, dark_weights, d0, d1, dynamic_address);
	hw_uint<16> dark_weights_dark_weights_update_0_write1_res = dark_weights_update_0_write.extract<16, 31>();
	dark_weights_dark_weights_update_0_write1_write(dark_weights_dark_weights_update_0_write1_res, dark_weights, d0, d1, dynamic_address);
}

struct dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 547
	// # of read delays: 547
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546
	fifo<hw_uint<16>, 547> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(546 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_dark_weights_normed_update_0_write1_to_fused_level_0_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 547
	// # of read delays: 547
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546
	fifo<hw_uint<16>, 547> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(546 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-6, 1080], [-7, 1919]}
	// Capacity: 1092
	// # of read delays: 6
  // 0, 1, 545, 546, 1090, 1091
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 543> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 543> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_545() {
		return f4;
	}

	inline hw_uint<16> peek_546() {
		return f6;
	}

	inline hw_uint<16> peek_1089() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1090() {
		return f8;
	}

	inline hw_uint<16> peek_1091() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-7, 1079], [-7, 1919]}
	// Capacity: 1093
	// # of read delays: 7
  // 0, 1, 2, 546, 547, 1091, 1092
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 543> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 543> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_545() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_546() {
		return f6;
	}

	inline hw_uint<16> peek_547() {
		return f8;
	}

	inline hw_uint<16> peek_1090() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1091() {
		return f10;
	}

	inline hw_uint<16> peek_1092() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
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

struct dark_weights_normed_cache {
  // Reader addrs...
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[-1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[-1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[-1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
    // { fused_level_0_update_0[d0, d1] -> dark_weights_normed[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { fused_level_0_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // # of banks: 4
  dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_cache dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0;
  dark_weights_normed_dark_weights_normed_update_0_write1_to_fused_level_0_rd1_cache dark_weights_normed_dark_weights_normed_update_0_write1_to_fused_level_0_rd1;
  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_cache dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9;
  dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9_cache dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0.push(dark_weights_normed_dark_weights_normed_update_0_write0);
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.push(dark_weights_normed_dark_weights_normed_update_0_write0);
}

inline void dark_weights_normed_dark_weights_normed_update_0_write1_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write1, dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_to_fused_level_0_rd1.push(dark_weights_normed_dark_weights_normed_update_0_write1);
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.push(dark_weights_normed_dark_weights_normed_update_0_write1);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[-1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.peek_1092();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[-1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.peek_547();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd10_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd10 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_546();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd11_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd11 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd12_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd12 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.peek_1091();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd13_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd13 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.peek_546();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd14_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd14 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd15_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd15 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_1090();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd16_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd16 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_545();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd17_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd17 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_0();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[-1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.peek_2();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_1091();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_546();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.peek_1091();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.peek_546();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, 1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_9.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd9_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd9 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, -1 + d1] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_1091();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ (1918 - d1 >= 0) ? (546) : (-1919 + d1 == 0) ? ((540 - d0)) : 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_to_fused_level_0_rd1.peek(/* one reader or all rams */ (1918 - d1 >= 0) ? (546) : (-1919 + d1 == 0) ? ((540 - d0)) : 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
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
//	dark_weights_normed_gauss_blur_1_rd9
//	dark_weights_normed_gauss_blur_1_rd10
//	dark_weights_normed_gauss_blur_1_rd11
//	dark_weights_normed_gauss_blur_1_rd12
//	dark_weights_normed_gauss_blur_1_rd13
//	dark_weights_normed_gauss_blur_1_rd14
//	dark_weights_normed_gauss_blur_1_rd15
//	dark_weights_normed_gauss_blur_1_rd16
//	dark_weights_normed_gauss_blur_1_rd17
inline hw_uint<288> dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // dark_weights_normed_gauss_blur_1_rd0
    // dark_weights_normed_gauss_blur_1_rd1
    // dark_weights_normed_gauss_blur_1_rd2
    // dark_weights_normed_gauss_blur_1_rd3
    // dark_weights_normed_gauss_blur_1_rd4
    // dark_weights_normed_gauss_blur_1_rd5
    // dark_weights_normed_gauss_blur_1_rd6
    // dark_weights_normed_gauss_blur_1_rd7
    // dark_weights_normed_gauss_blur_1_rd8
    // dark_weights_normed_gauss_blur_1_rd9
    // dark_weights_normed_gauss_blur_1_rd10
    // dark_weights_normed_gauss_blur_1_rd11
    // dark_weights_normed_gauss_blur_1_rd12
    // dark_weights_normed_gauss_blur_1_rd13
    // dark_weights_normed_gauss_blur_1_rd14
    // dark_weights_normed_gauss_blur_1_rd15
    // dark_weights_normed_gauss_blur_1_rd16
    // dark_weights_normed_gauss_blur_1_rd17

	hw_uint<288> result;
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_res = dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<0, 288>(result, dark_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd1_res = dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<16, 288>(result, dark_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_res = dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<32, 288>(result, dark_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_res = dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<48, 288>(result, dark_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_res = dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<64, 288>(result, dark_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_res = dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<80, 288>(result, dark_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_res = dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<96, 288>(result, dark_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_res = dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<112, 288>(result, dark_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_res = dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<128, 288>(result, dark_weights_normed_gauss_blur_1_rd8_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd9_res = dark_weights_normed_gauss_blur_1_rd9_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<144, 288>(result, dark_weights_normed_gauss_blur_1_rd9_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd10_res = dark_weights_normed_gauss_blur_1_rd10_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<160, 288>(result, dark_weights_normed_gauss_blur_1_rd10_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd11_res = dark_weights_normed_gauss_blur_1_rd11_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<176, 288>(result, dark_weights_normed_gauss_blur_1_rd11_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd12_res = dark_weights_normed_gauss_blur_1_rd12_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<192, 288>(result, dark_weights_normed_gauss_blur_1_rd12_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd13_res = dark_weights_normed_gauss_blur_1_rd13_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<208, 288>(result, dark_weights_normed_gauss_blur_1_rd13_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd14_res = dark_weights_normed_gauss_blur_1_rd14_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<224, 288>(result, dark_weights_normed_gauss_blur_1_rd14_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd15_res = dark_weights_normed_gauss_blur_1_rd15_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<240, 288>(result, dark_weights_normed_gauss_blur_1_rd15_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd16_res = dark_weights_normed_gauss_blur_1_rd16_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<256, 288>(result, dark_weights_normed_gauss_blur_1_rd16_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd17_res = dark_weights_normed_gauss_blur_1_rd17_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<272, 288>(result, dark_weights_normed_gauss_blur_1_rd17_res);
	return result;
}

// dark_weights_normed_update_0_write
//	dark_weights_normed_dark_weights_normed_update_0_write0
//	dark_weights_normed_dark_weights_normed_update_0_write1
inline void dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_update_0_write, dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write0_res = dark_weights_normed_update_0_write.extract<0, 15>();
	dark_weights_normed_dark_weights_normed_update_0_write0_write(dark_weights_normed_dark_weights_normed_update_0_write0_res, dark_weights_normed, d0, d1, dynamic_address);
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write1_res = dark_weights_normed_update_0_write.extract<16, 31>();
	dark_weights_normed_dark_weights_normed_update_0_write1_write(dark_weights_normed_dark_weights_normed_update_0_write1_res, dark_weights_normed, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
inline hw_uint<32> dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // fused_level_0_rd0
    // fused_level_0_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<16, 32>(result, fused_level_0_rd1_res);
	return result;
}

struct dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0_cache {
	// RAM Box: {[-6, 1078], [-6, 1918]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_weights_normed_gauss_blur_1_cache {
  // Reader addrs...
    // { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // # of banks: 1
  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0_cache dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0;
};



inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0.push(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0);
}

inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // Read schedule : { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  // Write schedule: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
  auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_1_update_0_write
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1
inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_blur_1_update_0_write, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res, dark_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<16, 31>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_res, dark_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
}

// dark_weights_normed_gauss_ds_1_update_0_read
//	dark_weights_normed_gauss_ds_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_res = dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_1_rd0_res);
	return result;
}

struct dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0_cache {
	// RAM Box: {[-2, 538], [-2, 958]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_weights_normed_gauss_blur_2_cache {
  // Reader addrs...
    // { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // # of banks: 1
  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0_cache dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0;
};



inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0.push(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // Read schedule : { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  // Write schedule: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  auto value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0 = dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_2_update_0_write
//	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0
inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_update_0_write, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res = dark_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res, dark_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
}

// dark_weights_normed_gauss_ds_2_update_0_read
//	dark_weights_normed_gauss_ds_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_res = dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_2_rd0_res);
	return result;
}

struct dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 268], [0, 478]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_weights_normed_gauss_blur_3_cache {
  // Reader addrs...
    // { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // # of banks: 1
  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0_cache dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0;
};



inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0.push(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Read schedule : { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 30] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Write schedule: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  auto value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0 = dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_3_update_0_write
//	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0
inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_3_update_0_write, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res = dark_weights_normed_gauss_blur_3_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res, dark_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
}

// dark_weights_normed_gauss_ds_3_update_0_read
//	dark_weights_normed_gauss_ds_3_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_3_rd0_res = dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_3_rd0_res);
	return result;
}

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 545
	// # of read delays: 545
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544
	fifo<hw_uint<16>, 545> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(544 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-3, 539], [-3, 959]}
	// Capacity: 1089
	// # of read delays: 9
  // 0, 1, 2, 543, 544, 545, 1086, 1087, 1088
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 540> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 540> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_543() {
		return f6;
	}

	inline hw_uint<16> peek_544() {
		return f8;
	}

	inline hw_uint<16> peek_545() {
		return f10;
	}

	inline hw_uint<16> peek_1085() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1086() {
		return f12;
	}

	inline hw_uint<16> peek_1087() {
		return f14;
	}

	inline hw_uint<16> peek_1088() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 540
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
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
    // cap: 1 reading from capacity: 540
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
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

struct dark_weights_normed_gauss_ds_1_cache {
  // Reader addrs...
    // { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
    // { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // # of banks: 2
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1088();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_545();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1087();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_544();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1086();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_543();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 46] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ (958 - d1 >= 0 && 538 - d0 >= 0) ? (544) : (-539 + d0 == 0 && 958 - d1 >= 0) ? (543) : (-959 + d1 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
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
inline hw_uint<144> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_2_rd0
    // dark_weights_normed_gauss_blur_2_rd1
    // dark_weights_normed_gauss_blur_2_rd2
    // dark_weights_normed_gauss_blur_2_rd3
    // dark_weights_normed_gauss_blur_2_rd4
    // dark_weights_normed_gauss_blur_2_rd5
    // dark_weights_normed_gauss_blur_2_rd6
    // dark_weights_normed_gauss_blur_2_rd7
    // dark_weights_normed_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_res = dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd1_res = dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_res = dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd3_res = dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_res = dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_res = dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_res = dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd7_res = dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd8_res = dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_1_update_0_write
//	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0
inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_update_0_write, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res = dark_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res, dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 273
	// # of read delays: 273
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272
	fifo<hw_uint<16>, 273> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(272 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-1, 269], [-1, 479]}
	// Capacity: 545
	// # of read delays: 9
  // 0, 1, 2, 271, 272, 273, 542, 543, 544
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 268> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 268> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_270() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_271() {
		return f6;
	}

	inline hw_uint<16> peek_272() {
		return f8;
	}

	inline hw_uint<16> peek_273() {
		return f10;
	}

	inline hw_uint<16> peek_541() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_542() {
		return f12;
	}

	inline hw_uint<16> peek_543() {
		return f14;
	}

	inline hw_uint<16> peek_544() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 268
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
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
    // cap: 1 reading from capacity: 268
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
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

struct dark_weights_normed_gauss_ds_2_cache {
  // Reader addrs...
    // { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
    // { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // # of banks: 2
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_544();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_273();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_543();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_272();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_542();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_271();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 45] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (478 - d1 >= 0 && 268 - d0 >= 0) ? (272) : (-269 + d0 == 0 && 478 - d1 >= 0) ? (271) : (-479 + d1 == 0 && 268 - d0 >= 0) ? ((269 - d0)) : 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
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
inline hw_uint<144> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_3_rd0
    // dark_weights_normed_gauss_blur_3_rd1
    // dark_weights_normed_gauss_blur_3_rd2
    // dark_weights_normed_gauss_blur_3_rd3
    // dark_weights_normed_gauss_blur_3_rd4
    // dark_weights_normed_gauss_blur_3_rd5
    // dark_weights_normed_gauss_blur_3_rd6
    // dark_weights_normed_gauss_blur_3_rd7
    // dark_weights_normed_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_res = dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd1_res = dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd2_res = dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd3_res = dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd4_res = dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd5_res = dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd6_res = dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd7_res = dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd8_res = dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_2_update_0_write
//	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0
inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_update_0_write, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res = dark_weights_normed_gauss_ds_2_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res, dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

struct dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 134], [0, 239]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct dark_weights_normed_gauss_ds_3_cache {
  // Reader addrs...
    // { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // # of banks: 1
  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 44] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  // Write schedule: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 30] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_ds_3_update_0_write
//	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0
inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_update_0_write, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res = dark_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res, dark_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

struct final_merged_0_final_merged_0_update_0_write0_to_ef_2_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct final_merged_0_final_merged_0_update_0_write1_to_ef_2_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct final_merged_0_cache {
  // Reader addrs...
    // { ef_2_update_0[d0, d1] -> final_merged_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { ef_2_update_0[d0, d1] -> final_merged_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // # of banks: 2
  final_merged_0_final_merged_0_update_0_write0_to_ef_2_rd0_cache final_merged_0_final_merged_0_update_0_write0_to_ef_2_rd0;
  final_merged_0_final_merged_0_update_0_write1_to_ef_2_rd1_cache final_merged_0_final_merged_0_update_0_write1_to_ef_2_rd1;
};



inline void final_merged_0_final_merged_0_update_0_write0_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write0, final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write0_to_ef_2_rd0.push(final_merged_0_final_merged_0_update_0_write0);
}

inline void final_merged_0_final_merged_0_update_0_write1_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write1, final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write1_to_ef_2_rd1.push(final_merged_0_final_merged_0_update_0_write1);
}

inline hw_uint<16> ef_2_rd0_select(final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ef_2_rd0 read pattern: { ef_2_update_0[d0, d1] -> final_merged_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { ef_2_update_0[d0, d1] -> [7 + d1, 4 + d0, 51] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_0_update_0[d0, d1] -> [7 + d1, 4 + d0, 50] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_final_merged_0_final_merged_0_update_0_write0 = final_merged_0.final_merged_0_final_merged_0_update_0_write0_to_ef_2_rd0.peek(/* one reader or all rams */ 0);
  return value_final_merged_0_final_merged_0_update_0_write0;
  return 0;
}

inline hw_uint<16> ef_2_rd1_select(final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ef_2_rd1 read pattern: { ef_2_update_0[d0, d1] -> final_merged_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { ef_2_update_0[d0, d1] -> [7 + d1, 4 + d0, 51] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_0_update_0[d0, d1] -> [7 + d1, 4 + d0, 50] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_final_merged_0_final_merged_0_update_0_write1 = final_merged_0.final_merged_0_final_merged_0_update_0_write1_to_ef_2_rd1.peek(/* one reader or all rams */ 0);
  return value_final_merged_0_final_merged_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// ef_2_update_0_read
//	ef_2_rd0
//	ef_2_rd1
inline hw_uint<32> final_merged_0_ef_2_update_0_read_bundle_read(final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // ef_2_rd0
    // ef_2_rd1

	hw_uint<32> result;
	hw_uint<16> ef_2_rd0_res = ef_2_rd0_select(final_merged_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, ef_2_rd0_res);
	hw_uint<16> ef_2_rd1_res = ef_2_rd1_select(final_merged_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, ef_2_rd1_res);
	return result;
}

// final_merged_0_update_0_write
//	final_merged_0_final_merged_0_update_0_write0
//	final_merged_0_final_merged_0_update_0_write1
inline void final_merged_0_final_merged_0_update_0_write_bundle_write(hw_uint<32>& final_merged_0_update_0_write, final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_merged_0_final_merged_0_update_0_write0_res = final_merged_0_update_0_write.extract<0, 15>();
	final_merged_0_final_merged_0_update_0_write0_write(final_merged_0_final_merged_0_update_0_write0_res, final_merged_0, d0, d1, dynamic_address);
	hw_uint<16> final_merged_0_final_merged_0_update_0_write1_res = final_merged_0_update_0_write.extract<16, 31>();
	final_merged_0_final_merged_0_update_0_write1_write(final_merged_0_final_merged_0_update_0_write1_res, final_merged_0, d0, d1, dynamic_address);
}

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 540
	// # of read delays: 540
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539
	fifo<hw_uint<16>, 540> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(539 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 540
	// # of read delays: 540
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539
	fifo<hw_uint<16>, 540> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(539 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_1_cache {
  // Reader addrs...
    // { final_merged_0_update_0[d0, d1] -> final_merged_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
    // { final_merged_0_update_0[d0, d1] -> final_merged_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // # of banks: 2
  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0;
  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1_cache final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1;
};



inline void final_merged_1_final_merged_1_update_0_write0_write(hw_uint<16>& final_merged_1_final_merged_1_update_0_write0, final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
  final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.push(final_merged_1_final_merged_1_update_0_write0);
  final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1.push(final_merged_1_final_merged_1_update_0_write0);
}

inline hw_uint<16> final_merged_0_rd0_select(final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [7 + d1, 4 + d0, 50] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_1_update_0[d0, d1] -> [7 + 2d1, 4 + d0, 49] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_final_merged_1_final_merged_1_update_0_write0;
  return 0;
}

inline hw_uint<16> final_merged_0_rd1_select(final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd1 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[d0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [7 + d1, 4 + d0, 50] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_1_update_0[d0, d1] -> [7 + 2d1, 4 + d0, 49] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : 0);
  return value_final_merged_1_final_merged_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
//	final_merged_0_rd1
inline hw_uint<32> final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // final_merged_0_rd0
    // final_merged_0_rd1

	hw_uint<32> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(final_merged_1, d0, d1, dynamic_address);
	set_at<0, 32>(result, final_merged_0_rd0_res);
	hw_uint<16> final_merged_0_rd1_res = final_merged_0_rd1_select(final_merged_1, d0, d1, dynamic_address);
	set_at<16, 32>(result, final_merged_0_rd1_res);
	return result;
}

// final_merged_1_update_0_write
//	final_merged_1_final_merged_1_update_0_write0
inline void final_merged_1_final_merged_1_update_0_write_bundle_write(hw_uint<16>& final_merged_1_update_0_write, final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_merged_1_final_merged_1_update_0_write0_res = final_merged_1_update_0_write.extract<0, 15>();
	final_merged_1_final_merged_1_update_0_write0_write(final_merged_1_final_merged_1_update_0_write0_res, final_merged_1, d0, d1, dynamic_address);
}

struct final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 270
	// # of read delays: 271
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269
	fifo<hw_uint<16>, 270> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(269 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_2_cache {
  // Reader addrs...
    // { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // # of banks: 1
  final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0;
};



inline void final_merged_2_final_merged_2_update_0_write0_write(hw_uint<16>& final_merged_2_final_merged_2_update_0_write0, final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
  final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.push(final_merged_2_final_merged_2_update_0_write0);
}

inline hw_uint<16> final_merged_1_rd0_select(final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [7 + 2d1, 4 + d0, 49] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { final_merged_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 48] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 537 - d0 >= 0) ? ((269 - floord(2*d0, 4))) : 0);
  return value_final_merged_2_final_merged_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<16> final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_1_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(final_merged_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_1_rd0_res);
	return result;
}

// final_merged_2_update_0_write
//	final_merged_2_final_merged_2_update_0_write0
inline void final_merged_2_final_merged_2_update_0_write_bundle_write(hw_uint<16>& final_merged_2_update_0_write, final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_merged_2_final_merged_2_update_0_write0_res = final_merged_2_update_0_write.extract<0, 15>();
	final_merged_2_final_merged_2_update_0_write0_write(final_merged_2_final_merged_2_update_0_write0_res, final_merged_2, d0, d1, dynamic_address);
}

struct fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
	// Capacity: 3244
	// # of read delays: 3244
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2053, 2054, 2055, 2056, 2057, 2058, 2059, 2060, 2061, 2062, 2063, 2064, 2065, 2066, 2067, 2068, 2069, 2070, 2071, 2072, 2073, 2074, 2075, 2076, 2077, 2078, 2079, 2080, 2081, 2082, 2083, 2084, 2085, 2086, 2087, 2088, 2089, 2090, 2091, 2092, 2093, 2094, 2095, 2096, 2097, 2098, 2099, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148, 2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179, 2180, 2181, 2182, 2183, 2184, 2185, 2186, 2187, 2188, 2189, 2190, 2191, 2192, 2193, 2194, 2195, 2196, 2197, 2198, 2199, 2200, 2201, 2202, 2203, 2204, 2205, 2206, 2207, 2208, 2209, 2210, 2211, 2212, 2213, 2214, 2215, 2216, 2217, 2218, 2219, 2220, 2221, 2222, 2223, 2224, 2225, 2226, 2227, 2228, 2229, 2230, 2231, 2232, 2233, 2234, 2235, 2236, 2237, 2238, 2239, 2240, 2241, 2242, 2243, 2244, 2245, 2246, 2247, 2248, 2249, 2250, 2251, 2252, 2253, 2254, 2255, 2256, 2257, 2258, 2259, 2260, 2261, 2262, 2263, 2264, 2265, 2266, 2267, 2268, 2269, 2270, 2271, 2272, 2273, 2274, 2275, 2276, 2277, 2278, 2279, 2280, 2281, 2282, 2283, 2284, 2285, 2286, 2287, 2288, 2289, 2290, 2291, 2292, 2293, 2294, 2295, 2296, 2297, 2298, 2299, 2300, 2301, 2302, 2303, 2304, 2305, 2306, 2307, 2308, 2309, 2310, 2311, 2312, 2313, 2314, 2315, 2316, 2317, 2318, 2319, 2320, 2321, 2322, 2323, 2324, 2325, 2326, 2327, 2328, 2329, 2330, 2331, 2332, 2333, 2334, 2335, 2336, 2337, 2338, 2339, 2340, 2341, 2342, 2343, 2344, 2345, 2346, 2347, 2348, 2349, 2350, 2351, 2352, 2353, 2354, 2355, 2356, 2357, 2358, 2359, 2360, 2361, 2362, 2363, 2364, 2365, 2366, 2367, 2368, 2369, 2370, 2371, 2372, 2373, 2374, 2375, 2376, 2377, 2378, 2379, 2380, 2381, 2382, 2383, 2384, 2385, 2386, 2387, 2388, 2389, 2390, 2391, 2392, 2393, 2394, 2395, 2396, 2397, 2398, 2399, 2400, 2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410, 2411, 2412, 2413, 2414, 2415, 2416, 2417, 2418, 2419, 2420, 2421, 2422, 2423, 2424, 2425, 2426, 2427, 2428, 2429, 2430, 2431, 2432, 2433, 2434, 2435, 2436, 2437, 2438, 2439, 2440, 2441, 2442, 2443, 2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2490, 2491, 2492, 2493, 2494, 2495, 2496, 2497, 2498, 2499, 2500, 2501, 2502, 2503, 2504, 2505, 2506, 2507, 2508, 2509, 2510, 2511, 2512, 2513, 2514, 2515, 2516, 2517, 2518, 2519, 2520, 2521, 2522, 2523, 2524, 2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536, 2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548, 2549, 2550, 2551, 2552, 2553, 2554, 2555, 2556, 2557, 2558, 2559, 2560, 2561, 2562, 2563, 2564, 2565, 2566, 2567, 2568, 2569, 2570, 2571, 2572, 2573, 2574, 2575, 2576, 2577, 2578, 2579, 2580, 2581, 2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603, 2604, 2605, 2606, 2607, 2608, 2609, 2610, 2611, 2612, 2613, 2614, 2615, 2616, 2617, 2618, 2619, 2620, 2621, 2622, 2623, 2624, 2625, 2626, 2627, 2628, 2629, 2630, 2631, 2632, 2633, 2634, 2635, 2636, 2637, 2638, 2639, 2640, 2641, 2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653, 2654, 2655, 2656, 2657, 2658, 2659, 2660, 2661, 2662, 2663, 2664, 2665, 2666, 2667, 2668, 2669, 2670, 2671, 2672, 2673, 2674, 2675, 2676, 2677, 2678, 2679, 2680, 2681, 2682, 2683, 2684, 2685, 2686, 2687, 2688, 2689, 2690, 2691, 2692, 2693, 2694, 2695, 2696, 2697, 2698, 2699, 2700, 2701, 2702, 2703, 2704, 2705, 2706, 2707, 2708, 2709, 2710, 2711, 2712, 2713, 2714, 2715, 2716, 2717, 2718, 2719, 2720, 2721, 2722, 2723, 2724, 2725, 2726, 2727, 2728, 2729, 2730, 2731, 2732, 2733, 2734, 2735, 2736, 2737, 2738, 2739, 2740, 2741, 2742, 2743, 2744, 2745, 2746, 2747, 2748, 2749, 2750, 2751, 2752, 2753, 2754, 2755, 2756, 2757, 2758, 2759, 2760, 2761, 2762, 2763, 2764, 2765, 2766, 2767, 2768, 2769, 2770, 2771, 2772, 2773, 2774, 2775, 2776, 2777, 2778, 2779, 2780, 2781, 2782, 2783, 2784, 2785, 2786, 2787, 2788, 2789, 2790, 2791, 2792, 2793, 2794, 2795, 2796, 2797, 2798, 2799, 2800, 2801, 2802, 2803, 2804, 2805, 2806, 2807, 2808, 2809, 2810, 2811, 2812, 2813, 2814, 2815, 2816, 2817, 2818, 2819, 2820, 2821, 2822, 2823, 2824, 2825, 2826, 2827, 2828, 2829, 2830, 2831, 2832, 2833, 2834, 2835, 2836, 2837, 2838, 2839, 2840, 2841, 2842, 2843, 2844, 2845, 2846, 2847, 2848, 2849, 2850, 2851, 2852, 2853, 2854, 2855, 2856, 2857, 2858, 2859, 2860, 2861, 2862, 2863, 2864, 2865, 2866, 2867, 2868, 2869, 2870, 2871, 2872, 2873, 2874, 2875, 2876, 2877, 2878, 2879, 2880, 2881, 2882, 2883, 2884, 2885, 2886, 2887, 2888, 2889, 2890, 2891, 2892, 2893, 2894, 2895, 2896, 2897, 2898, 2899, 2900, 2901, 2902, 2903, 2904, 2905, 2906, 2907, 2908, 2909, 2910, 2911, 2912, 2913, 2914, 2915, 2916, 2917, 2918, 2919, 2920, 2921, 2922, 2923, 2924, 2925, 2926, 2927, 2928, 2929, 2930, 2931, 2932, 2933, 2934, 2935, 2936, 2937, 2938, 2939, 2940, 2941, 2942, 2943, 2944, 2945, 2946, 2947, 2948, 2949, 2950, 2951, 2952, 2953, 2954, 2955, 2956, 2957, 2958, 2959, 2960, 2961, 2962, 2963, 2964, 2965, 2966, 2967, 2968, 2969, 2970, 2971, 2972, 2973, 2974, 2975, 2976, 2977, 2978, 2979, 2980, 2981, 2982, 2983, 2984, 2985, 2986, 2987, 2988, 2989, 2990, 2991, 2992, 2993, 2994, 2995, 2996, 2997, 2998, 2999, 3000, 3001, 3002, 3003, 3004, 3005, 3006, 3007, 3008, 3009, 3010, 3011, 3012, 3013, 3014, 3015, 3016, 3017, 3018, 3019, 3020, 3021, 3022, 3023, 3024, 3025, 3026, 3027, 3028, 3029, 3030, 3031, 3032, 3033, 3034, 3035, 3036, 3037, 3038, 3039, 3040, 3041, 3042, 3043, 3044, 3045, 3046, 3047, 3048, 3049, 3050, 3051, 3052, 3053, 3054, 3055, 3056, 3057, 3058, 3059, 3060, 3061, 3062, 3063, 3064, 3065, 3066, 3067, 3068, 3069, 3070, 3071, 3072, 3073, 3074, 3075, 3076, 3077, 3078, 3079, 3080, 3081, 3082, 3083, 3084, 3085, 3086, 3087, 3088, 3089, 3090, 3091, 3092, 3093, 3094, 3095, 3096, 3097, 3098, 3099, 3100, 3101, 3102, 3103, 3104, 3105, 3106, 3107, 3108, 3109, 3110, 3111, 3112, 3113, 3114, 3115, 3116, 3117, 3118, 3119, 3120, 3121, 3122, 3123, 3124, 3125, 3126, 3127, 3128, 3129, 3130, 3131, 3132, 3133, 3134, 3135, 3136, 3137, 3138, 3139, 3140, 3141, 3142, 3143, 3144, 3145, 3146, 3147, 3148, 3149, 3150, 3151, 3152, 3153, 3154, 3155, 3156, 3157, 3158, 3159, 3160, 3161, 3162, 3163, 3164, 3165, 3166, 3167, 3168, 3169, 3170, 3171, 3172, 3173, 3174, 3175, 3176, 3177, 3178, 3179, 3180, 3181, 3182, 3183, 3184, 3185, 3186, 3187, 3188, 3189, 3190, 3191, 3192, 3193, 3194, 3195, 3196, 3197, 3198, 3199, 3200, 3201, 3202, 3203, 3204, 3205, 3206, 3207, 3208, 3209, 3210, 3211, 3212, 3213, 3214, 3215, 3216, 3217, 3218, 3219, 3220, 3221, 3222, 3223, 3224, 3225, 3226, 3227, 3228, 3229, 3230, 3231, 3232, 3233, 3234, 3235, 3236, 3237, 3238, 3239, 3240, 3241, 3242, 3243
	fifo<hw_uint<16>, 3244> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3243 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
	// Capacity: 3244
	// # of read delays: 3244
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2053, 2054, 2055, 2056, 2057, 2058, 2059, 2060, 2061, 2062, 2063, 2064, 2065, 2066, 2067, 2068, 2069, 2070, 2071, 2072, 2073, 2074, 2075, 2076, 2077, 2078, 2079, 2080, 2081, 2082, 2083, 2084, 2085, 2086, 2087, 2088, 2089, 2090, 2091, 2092, 2093, 2094, 2095, 2096, 2097, 2098, 2099, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148, 2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179, 2180, 2181, 2182, 2183, 2184, 2185, 2186, 2187, 2188, 2189, 2190, 2191, 2192, 2193, 2194, 2195, 2196, 2197, 2198, 2199, 2200, 2201, 2202, 2203, 2204, 2205, 2206, 2207, 2208, 2209, 2210, 2211, 2212, 2213, 2214, 2215, 2216, 2217, 2218, 2219, 2220, 2221, 2222, 2223, 2224, 2225, 2226, 2227, 2228, 2229, 2230, 2231, 2232, 2233, 2234, 2235, 2236, 2237, 2238, 2239, 2240, 2241, 2242, 2243, 2244, 2245, 2246, 2247, 2248, 2249, 2250, 2251, 2252, 2253, 2254, 2255, 2256, 2257, 2258, 2259, 2260, 2261, 2262, 2263, 2264, 2265, 2266, 2267, 2268, 2269, 2270, 2271, 2272, 2273, 2274, 2275, 2276, 2277, 2278, 2279, 2280, 2281, 2282, 2283, 2284, 2285, 2286, 2287, 2288, 2289, 2290, 2291, 2292, 2293, 2294, 2295, 2296, 2297, 2298, 2299, 2300, 2301, 2302, 2303, 2304, 2305, 2306, 2307, 2308, 2309, 2310, 2311, 2312, 2313, 2314, 2315, 2316, 2317, 2318, 2319, 2320, 2321, 2322, 2323, 2324, 2325, 2326, 2327, 2328, 2329, 2330, 2331, 2332, 2333, 2334, 2335, 2336, 2337, 2338, 2339, 2340, 2341, 2342, 2343, 2344, 2345, 2346, 2347, 2348, 2349, 2350, 2351, 2352, 2353, 2354, 2355, 2356, 2357, 2358, 2359, 2360, 2361, 2362, 2363, 2364, 2365, 2366, 2367, 2368, 2369, 2370, 2371, 2372, 2373, 2374, 2375, 2376, 2377, 2378, 2379, 2380, 2381, 2382, 2383, 2384, 2385, 2386, 2387, 2388, 2389, 2390, 2391, 2392, 2393, 2394, 2395, 2396, 2397, 2398, 2399, 2400, 2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410, 2411, 2412, 2413, 2414, 2415, 2416, 2417, 2418, 2419, 2420, 2421, 2422, 2423, 2424, 2425, 2426, 2427, 2428, 2429, 2430, 2431, 2432, 2433, 2434, 2435, 2436, 2437, 2438, 2439, 2440, 2441, 2442, 2443, 2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2490, 2491, 2492, 2493, 2494, 2495, 2496, 2497, 2498, 2499, 2500, 2501, 2502, 2503, 2504, 2505, 2506, 2507, 2508, 2509, 2510, 2511, 2512, 2513, 2514, 2515, 2516, 2517, 2518, 2519, 2520, 2521, 2522, 2523, 2524, 2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536, 2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548, 2549, 2550, 2551, 2552, 2553, 2554, 2555, 2556, 2557, 2558, 2559, 2560, 2561, 2562, 2563, 2564, 2565, 2566, 2567, 2568, 2569, 2570, 2571, 2572, 2573, 2574, 2575, 2576, 2577, 2578, 2579, 2580, 2581, 2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603, 2604, 2605, 2606, 2607, 2608, 2609, 2610, 2611, 2612, 2613, 2614, 2615, 2616, 2617, 2618, 2619, 2620, 2621, 2622, 2623, 2624, 2625, 2626, 2627, 2628, 2629, 2630, 2631, 2632, 2633, 2634, 2635, 2636, 2637, 2638, 2639, 2640, 2641, 2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653, 2654, 2655, 2656, 2657, 2658, 2659, 2660, 2661, 2662, 2663, 2664, 2665, 2666, 2667, 2668, 2669, 2670, 2671, 2672, 2673, 2674, 2675, 2676, 2677, 2678, 2679, 2680, 2681, 2682, 2683, 2684, 2685, 2686, 2687, 2688, 2689, 2690, 2691, 2692, 2693, 2694, 2695, 2696, 2697, 2698, 2699, 2700, 2701, 2702, 2703, 2704, 2705, 2706, 2707, 2708, 2709, 2710, 2711, 2712, 2713, 2714, 2715, 2716, 2717, 2718, 2719, 2720, 2721, 2722, 2723, 2724, 2725, 2726, 2727, 2728, 2729, 2730, 2731, 2732, 2733, 2734, 2735, 2736, 2737, 2738, 2739, 2740, 2741, 2742, 2743, 2744, 2745, 2746, 2747, 2748, 2749, 2750, 2751, 2752, 2753, 2754, 2755, 2756, 2757, 2758, 2759, 2760, 2761, 2762, 2763, 2764, 2765, 2766, 2767, 2768, 2769, 2770, 2771, 2772, 2773, 2774, 2775, 2776, 2777, 2778, 2779, 2780, 2781, 2782, 2783, 2784, 2785, 2786, 2787, 2788, 2789, 2790, 2791, 2792, 2793, 2794, 2795, 2796, 2797, 2798, 2799, 2800, 2801, 2802, 2803, 2804, 2805, 2806, 2807, 2808, 2809, 2810, 2811, 2812, 2813, 2814, 2815, 2816, 2817, 2818, 2819, 2820, 2821, 2822, 2823, 2824, 2825, 2826, 2827, 2828, 2829, 2830, 2831, 2832, 2833, 2834, 2835, 2836, 2837, 2838, 2839, 2840, 2841, 2842, 2843, 2844, 2845, 2846, 2847, 2848, 2849, 2850, 2851, 2852, 2853, 2854, 2855, 2856, 2857, 2858, 2859, 2860, 2861, 2862, 2863, 2864, 2865, 2866, 2867, 2868, 2869, 2870, 2871, 2872, 2873, 2874, 2875, 2876, 2877, 2878, 2879, 2880, 2881, 2882, 2883, 2884, 2885, 2886, 2887, 2888, 2889, 2890, 2891, 2892, 2893, 2894, 2895, 2896, 2897, 2898, 2899, 2900, 2901, 2902, 2903, 2904, 2905, 2906, 2907, 2908, 2909, 2910, 2911, 2912, 2913, 2914, 2915, 2916, 2917, 2918, 2919, 2920, 2921, 2922, 2923, 2924, 2925, 2926, 2927, 2928, 2929, 2930, 2931, 2932, 2933, 2934, 2935, 2936, 2937, 2938, 2939, 2940, 2941, 2942, 2943, 2944, 2945, 2946, 2947, 2948, 2949, 2950, 2951, 2952, 2953, 2954, 2955, 2956, 2957, 2958, 2959, 2960, 2961, 2962, 2963, 2964, 2965, 2966, 2967, 2968, 2969, 2970, 2971, 2972, 2973, 2974, 2975, 2976, 2977, 2978, 2979, 2980, 2981, 2982, 2983, 2984, 2985, 2986, 2987, 2988, 2989, 2990, 2991, 2992, 2993, 2994, 2995, 2996, 2997, 2998, 2999, 3000, 3001, 3002, 3003, 3004, 3005, 3006, 3007, 3008, 3009, 3010, 3011, 3012, 3013, 3014, 3015, 3016, 3017, 3018, 3019, 3020, 3021, 3022, 3023, 3024, 3025, 3026, 3027, 3028, 3029, 3030, 3031, 3032, 3033, 3034, 3035, 3036, 3037, 3038, 3039, 3040, 3041, 3042, 3043, 3044, 3045, 3046, 3047, 3048, 3049, 3050, 3051, 3052, 3053, 3054, 3055, 3056, 3057, 3058, 3059, 3060, 3061, 3062, 3063, 3064, 3065, 3066, 3067, 3068, 3069, 3070, 3071, 3072, 3073, 3074, 3075, 3076, 3077, 3078, 3079, 3080, 3081, 3082, 3083, 3084, 3085, 3086, 3087, 3088, 3089, 3090, 3091, 3092, 3093, 3094, 3095, 3096, 3097, 3098, 3099, 3100, 3101, 3102, 3103, 3104, 3105, 3106, 3107, 3108, 3109, 3110, 3111, 3112, 3113, 3114, 3115, 3116, 3117, 3118, 3119, 3120, 3121, 3122, 3123, 3124, 3125, 3126, 3127, 3128, 3129, 3130, 3131, 3132, 3133, 3134, 3135, 3136, 3137, 3138, 3139, 3140, 3141, 3142, 3143, 3144, 3145, 3146, 3147, 3148, 3149, 3150, 3151, 3152, 3153, 3154, 3155, 3156, 3157, 3158, 3159, 3160, 3161, 3162, 3163, 3164, 3165, 3166, 3167, 3168, 3169, 3170, 3171, 3172, 3173, 3174, 3175, 3176, 3177, 3178, 3179, 3180, 3181, 3182, 3183, 3184, 3185, 3186, 3187, 3188, 3189, 3190, 3191, 3192, 3193, 3194, 3195, 3196, 3197, 3198, 3199, 3200, 3201, 3202, 3203, 3204, 3205, 3206, 3207, 3208, 3209, 3210, 3211, 3212, 3213, 3214, 3215, 3216, 3217, 3218, 3219, 3220, 3221, 3222, 3223, 3224, 3225, 3226, 3227, 3228, 3229, 3230, 3231, 3232, 3233, 3234, 3235, 3236, 3237, 3238, 3239, 3240, 3241, 3242, 3243
	fifo<hw_uint<16>, 3244> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3243 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_cache {
  // Reader addrs...
    // { final_merged_0_update_0[d0, d1] -> fused_level_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
    // { final_merged_0_update_0[d0, d1] -> fused_level_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // # of banks: 2
  fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0_cache fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0;
  fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1_cache fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1;
};



inline void fused_level_0_fused_level_0_update_0_write0_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write0, fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.push(fused_level_0_fused_level_0_update_0_write0);
}

inline void fused_level_0_fused_level_0_update_0_write1_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write1, fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1.push(fused_level_0_fused_level_0_update_0_write1);
}

inline hw_uint<16> final_merged_0_rd0_select(fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [7 + d1, 4 + d0, 50] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ (-1914 + d1 == 0 && -539 + d0 == 0) ? (2700) : (-539 + d0 == 0 && 1913 - d1 >= 0) ? (3240) : (-538 + d0 == 0 && 1913 - d1 >= 0) ? (3241) : (-537 + d0 == 0 && 1913 - d1 >= 0) ? (3242) : (1913 - d1 >= 0 && 536 - d0 >= 0) ? (3243) : (-1919 + d1 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : (-1914 + d1 == 0 && 538 - d0 >= 0) ? ((3239 - d0)) : (-539 + d0 == 0 && -1915 + d1 >= 0 && 1918 - d1 >= 0) ? ((1036260 - 540 * d1)) : (1918 - d1 >= 0 && 538 - d0 >= 0 && -1915 + d1 >= 0) ? (((1036799 - d0) - 540 * d1)) : 0);
  return value_fused_level_0_fused_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> final_merged_0_rd1_select(fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd1 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[1 + 2d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [7 + d1, 4 + d0, 50] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  // Write schedule: { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
  auto value_fused_level_0_fused_level_0_update_0_write1 = fused_level_0.fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1.peek(/* one reader or all rams */ (-1914 + d1 == 0 && -539 + d0 == 0) ? (2700) : (-539 + d0 == 0 && 1913 - d1 >= 0) ? (3240) : (-538 + d0 == 0 && 1913 - d1 >= 0) ? (3241) : (-537 + d0 == 0 && 1913 - d1 >= 0) ? (3242) : (1913 - d1 >= 0 && 536 - d0 >= 0) ? (3243) : (-1919 + d1 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : (-1914 + d1 == 0 && 538 - d0 >= 0) ? ((3239 - d0)) : (-539 + d0 == 0 && -1915 + d1 >= 0 && 1918 - d1 >= 0) ? ((1036260 - 540 * d1)) : (1918 - d1 >= 0 && 538 - d0 >= 0 && -1915 + d1 >= 0) ? (((1036799 - d0) - 540 * d1)) : 0);
  return value_fused_level_0_fused_level_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
//	final_merged_0_rd1
inline hw_uint<32> fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // final_merged_0_rd0
    // final_merged_0_rd1

	hw_uint<32> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(fused_level_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, final_merged_0_rd0_res);
	hw_uint<16> final_merged_0_rd1_res = final_merged_0_rd1_select(fused_level_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, final_merged_0_rd1_res);
	return result;
}

// fused_level_0_update_0_write
//	fused_level_0_fused_level_0_update_0_write0
//	fused_level_0_fused_level_0_update_0_write1
inline void fused_level_0_fused_level_0_update_0_write_bundle_write(hw_uint<32>& fused_level_0_update_0_write, fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_0_fused_level_0_update_0_write0_res = fused_level_0_update_0_write.extract<0, 15>();
	fused_level_0_fused_level_0_update_0_write0_write(fused_level_0_fused_level_0_update_0_write0_res, fused_level_0, d0, d1, dynamic_address);
	hw_uint<16> fused_level_0_fused_level_0_update_0_write1_res = fused_level_0_update_0_write.extract<16, 31>();
	fused_level_0_fused_level_0_update_0_write1_write(fused_level_0_fused_level_0_update_0_write1_res, fused_level_0, d0, d1, dynamic_address);
}

struct fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache {
	// RAM Box: {[0, 539], [0, 959]}
	// Capacity: 1083
	// # of read delays: 1083
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082
	fifo<hw_uint<16>, 1083> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1082 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_1_cache {
  // Reader addrs...
    // { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // # of banks: 1
  fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0;
};



inline void fused_level_1_fused_level_1_update_0_write0_write(hw_uint<16>& fused_level_1_fused_level_1_update_0_write0, fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
  fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.push(fused_level_1_fused_level_1_update_0_write0);
}

inline hw_uint<16> final_merged_1_rd0_select(fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [7 + 2d1, 4 + d0, 49] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  // Write schedule: { fused_level_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 46] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
  auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ (-958 + d1 == 0 && -539 + d0 == 0) ? (540) : (-539 + d0 == 0 && 957 - d1 >= 0) ? (1080) : (-538 + d0 == 0 && 957 - d1 >= 0) ? (1081) : (957 - d1 >= 0 && 537 - d0 >= 0) ? (1082) : (-959 + d1 == 0 && 538 - d0 >= 0) ? ((539 - d0)) : (-958 + d1 == 0 && 538 - d0 >= 0) ? ((1079 - d0)) : 0);
  return value_fused_level_1_fused_level_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<16> fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_1_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(fused_level_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_1_rd0_res);
	return result;
}

// fused_level_1_update_0_write
//	fused_level_1_fused_level_1_update_0_write0
inline void fused_level_1_fused_level_1_update_0_write_bundle_write(hw_uint<16>& fused_level_1_update_0_write, fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_1_fused_level_1_update_0_write0_res = fused_level_1_update_0_write.extract<0, 15>();
	fused_level_1_fused_level_1_update_0_write0_write(fused_level_1_fused_level_1_update_0_write0_res, fused_level_1, d0, d1, dynamic_address);
}

struct fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0_cache {
	// RAM Box: {[0, 269], [0, 479]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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

struct fused_level_2_cache {
  // Reader addrs...
    // { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // # of banks: 1
  fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0_cache fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0;
};



inline void fused_level_2_fused_level_2_update_0_write0_write(hw_uint<16>& fused_level_2_fused_level_2_update_0_write0, fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
  fused_level_2.fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0.push(fused_level_2_fused_level_2_update_0_write0);
}

inline hw_uint<16> final_merged_2_rd0_select(fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Read schedule : { final_merged_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 48] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { fused_level_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 45] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  auto value_fused_level_2_fused_level_2_update_0_write0 = fused_level_2.fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0.peek(/* one reader or all rams */ 0);
  return value_fused_level_2_fused_level_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<16> fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_2_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_2_update_0_write
//	fused_level_2_fused_level_2_update_0_write0
inline void fused_level_2_fused_level_2_update_0_write_bundle_write(hw_uint<16>& fused_level_2_update_0_write, fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_2_fused_level_2_update_0_write0_res = fused_level_2_update_0_write.extract<0, 15>();
	fused_level_2_fused_level_2_update_0_write0_write(fused_level_2_fused_level_2_update_0_write0_res, fused_level_2, d0, d1, dynamic_address);
}

struct fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_cache {
	// RAM Box: {[0, 134], [0, 239]}
	// Capacity: 135
	// # of read delays: 136
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134
	fifo<hw_uint<16>, 135> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(134 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_3_cache {
  // Reader addrs...
    // { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // # of banks: 1
  fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_cache fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0;
};



inline void fused_level_3_fused_level_3_update_0_write0_write(hw_uint<16>& fused_level_3_fused_level_3_update_0_write0, fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
  fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.push(fused_level_3_fused_level_3_update_0_write0);
}

inline hw_uint<16> final_merged_2_rd0_select(fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 269 and 0 <= d1 <= 479 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 48] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
  // Write schedule: { fused_level_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 44] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
  auto value_fused_level_3_fused_level_3_update_0_write0 = fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 267 - d0 >= 0) ? ((134 - floord(2*d0, 4))) : 0);
  return value_fused_level_3_fused_level_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<16> fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_2_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_3_update_0_write
//	fused_level_3_fused_level_3_update_0_write0
inline void fused_level_3_fused_level_3_update_0_write_bundle_write(hw_uint<16>& fused_level_3_update_0_write, fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_3_fused_level_3_update_0_write0_res = fused_level_3_update_0_write.extract<0, 15>();
	fused_level_3_fused_level_3_update_0_write0_write(fused_level_3_fused_level_3_update_0_write0_res, fused_level_3, d0, d1, dynamic_address);
}

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[-8, 1080], [-7, 1919]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_in_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[-7, 1081], [-7, 1919]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_cache {
  // Reader addrs...
    // { bright_update_0[d0, d1] -> in[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
    // { bright_update_0[d0, d1] -> in[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
    // { dark_update_0[d0, d1] -> in[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
    // { dark_update_0[d0, d1] -> in[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // # of banks: 2
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
  in_in_update_0_write1_merged_banks_2_cache in_in_update_0_write1_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_2.push(in_in_update_0_write1);
}

inline hw_uint<16> bright_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd1 read pattern: { bright_update_0[d0, d1] -> in[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd1 read pattern: { dark_update_0[d0, d1] -> in[1 + 2d0, d1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

// # of bundles = 3
// bright_update_0_read
//	bright_rd0
//	bright_rd1
inline hw_uint<32> in_bright_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_rd0
    // bright_rd1

	hw_uint<32> result;
	hw_uint<16> bright_rd0_res = bright_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_rd0_res);
	hw_uint<16> bright_rd1_res = bright_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_rd1_res);
	return result;
}

// dark_update_0_read
//	dark_rd0
//	dark_rd1
inline hw_uint<32> in_dark_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_rd0
    // dark_rd1

	hw_uint<32> result;
	hw_uint<16> dark_rd0_res = dark_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_rd0_res);
	hw_uint<16> dark_rd1_res = dark_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_rd1_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
inline void in_in_update_0_write_bundle_write(hw_uint<32>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write1_res = in_update_0_write.extract<16, 31>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 558448 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_2(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = scale_exposure_unrolled_2(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(/* arg names */compute_result, dark, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_update_0(in_cache& in, bright_cache& bright, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_bright_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(in_0_c__0_value);
	// Produce: bright
	bright_bright_update_0_write_bundle_write(/* arg names */compute_result, bright, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weight_unrolled_2(dark_0_c__0_value);
	// Produce: dark_weights
	dark_weights_dark_weights_update_0_write_bundle_write(/* arg names */compute_result, dark_weights, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_update_0(bright_cache& bright, bright_weights_cache& bright_weights, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_bright_weights_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weight_unrolled_2(bright_0_c__0_value);
	// Produce: bright_weights
	bright_weights_bright_weights_update_0_write_bundle_write(/* arg names */compute_result, bright_weights, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_normalize_weights_unrolled_2(dark_weights_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_1_update_0(dark_cache& dark, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark
	auto dark_0_c__0_value = dark_dark_gauss_blur_1_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(dark_0_c__0_value);
	// Produce: dark_gauss_blur_1
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_update_0(bright_weights_cache& bright_weights, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_normalize_weights_unrolled_2(bright_weights_0_c__0_value);
	// Produce: bright_weights_normed
	bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_1_update_0(bright_cache& bright, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_bright_gauss_blur_1_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(bright_0_c__0_value);
	// Produce: bright_gauss_blur_1
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed_cache& dark_weights_normed, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(dark_weights_normed_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_1
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_1_update_0(dark_gauss_blur_1_cache& dark_gauss_blur_1, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_blur_1
	auto dark_gauss_blur_1_0_c__0_value = dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_1_0_c__0_value);
	// Produce: dark_gauss_ds_1
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_2_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_gauss_blur_2
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed_cache& bright_weights_normed, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(bright_weights_normed_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_1
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_1_update_0(bright_gauss_blur_1_cache& bright_gauss_blur_1, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_blur_1
	auto bright_gauss_blur_1_0_c__0_value = bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_1_0_c__0_value);
	// Produce: bright_gauss_ds_1
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_2_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_gauss_blur_2
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_blur_1
	auto dark_weights_normed_gauss_blur_1_0_c__0_value = dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_1
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_2
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_2_update_0(dark_gauss_blur_2_cache& dark_gauss_blur_2, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_blur_2
	auto dark_gauss_blur_2_0_c__0_value = dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_2_0_c__0_value);
	// Produce: dark_gauss_ds_2
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_3_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_gauss_blur_3
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_blur_1
	auto bright_weights_normed_gauss_blur_1_0_c__0_value = bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_1
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_2
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_2_update_0(bright_gauss_blur_2_cache& bright_gauss_blur_2, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_blur_2
	auto bright_gauss_blur_2_0_c__0_value = bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_2_0_c__0_value);
	// Produce: bright_gauss_ds_2
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_3_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_gauss_blur_3
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_blur_2
	auto dark_weights_normed_gauss_blur_2_0_c__0_value = dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_2
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_3
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_3_update_0(dark_gauss_blur_3_cache& dark_gauss_blur_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_blur_3
	auto dark_gauss_blur_3_0_c__0_value = dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_3_0_c__0_value);
	// Produce: dark_gauss_ds_3
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_blur_2
	auto bright_weights_normed_gauss_blur_2_0_c__0_value = bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_2
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_3
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_3_update_0(bright_gauss_blur_3_cache& bright_gauss_blur_3, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_blur_3
	auto bright_gauss_blur_3_0_c__0_value = bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_3_0_c__0_value);
	// Produce: bright_gauss_ds_3
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_blur_3
	auto dark_weights_normed_gauss_blur_3_0_c__0_value = dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_3
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_2_update_0(dark_gauss_ds_3_cache& dark_gauss_ds_3, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_3_0_c__0_value);
	// Produce: dark_laplace_us_2
	dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_us_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_1_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_laplace_us_1
	dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_us_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_0_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_laplace_us_0
	dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_us_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_2_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_2_cache& dark_laplace_us_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_2
	auto dark_laplace_us_2_0_c__0_value = dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_gauss_ds_2_0_c__0_value, dark_laplace_us_2_0_c__0_value);
	// Produce: dark_laplace_diff_2
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_diff_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_1_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_1_cache& dark_laplace_us_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_1
	auto dark_laplace_us_1_0_c__0_value = dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_gauss_ds_1_0_c__0_value, dark_laplace_us_1_0_c__0_value);
	// Produce: dark_laplace_diff_1
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_diff_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_0_update_0(dark_cache& dark, dark_laplace_us_0_cache& dark_laplace_us_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark
	auto dark_0_c__0_value = dark_dark_laplace_diff_0_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_0
	auto dark_laplace_us_0_0_c__0_value = dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_2(dark_0_c__0_value, dark_laplace_us_0_0_c__0_value);
	// Produce: dark_laplace_diff_0
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_diff_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_blur_3
	auto bright_weights_normed_gauss_blur_3_0_c__0_value = bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_3
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_2_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_3_0_c__0_value);
	// Produce: bright_laplace_us_2
	bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_us_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_1_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_laplace_us_1
	bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_us_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_0_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_laplace_us_0
	bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_us_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_2_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_2_cache& bright_laplace_us_2, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_2
	auto bright_laplace_us_2_0_c__0_value = bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_gauss_ds_2_0_c__0_value, bright_laplace_us_2_0_c__0_value);
	// Produce: bright_laplace_diff_2
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_diff_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_1_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_1_cache& bright_laplace_us_1, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_1
	auto bright_laplace_us_1_0_c__0_value = bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_gauss_ds_1_0_c__0_value, bright_laplace_us_1_0_c__0_value);
	// Produce: bright_laplace_diff_1
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_diff_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_0_update_0(bright_cache& bright, bright_laplace_us_0_cache& bright_laplace_us_0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_bright_laplace_diff_0_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_0
	auto bright_laplace_us_0_0_c__0_value = bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_2(bright_0_c__0_value, bright_laplace_us_0_0_c__0_value);
	// Produce: bright_laplace_diff_0
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_diff_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_3_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, fused_level_3_cache& fused_level_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_3
	auto bright_weights_normed_gauss_ds_3_0_c__0_value = bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_3
	auto dark_weights_normed_gauss_ds_3_0_c__0_value = dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weighted_merge_unrolled_1(bright_gauss_ds_3_0_c__0_value, dark_gauss_ds_3_0_c__0_value, bright_weights_normed_gauss_ds_3_0_c__0_value, dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: fused_level_3
	fused_level_3_fused_level_3_update_0_write_bundle_write(/* arg names */compute_result, fused_level_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_2_update_0(bright_laplace_diff_2_cache& bright_laplace_diff_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, fused_level_2_cache& fused_level_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_laplace_diff_2
	auto bright_laplace_diff_2_0_c__0_value = bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_2
	auto dark_laplace_diff_2_0_c__0_value = dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weighted_merge_unrolled_1(bright_laplace_diff_2_0_c__0_value, dark_laplace_diff_2_0_c__0_value, bright_weights_normed_gauss_ds_2_0_c__0_value, dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: fused_level_2
	fused_level_2_fused_level_2_update_0_write_bundle_write(/* arg names */compute_result, fused_level_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_1_update_0(bright_laplace_diff_1_cache& bright_laplace_diff_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, fused_level_1_cache& fused_level_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_laplace_diff_1
	auto bright_laplace_diff_1_0_c__0_value = bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_1
	auto dark_laplace_diff_1_0_c__0_value = dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weighted_merge_unrolled_1(bright_laplace_diff_1_0_c__0_value, dark_laplace_diff_1_0_c__0_value, bright_weights_normed_gauss_ds_1_0_c__0_value, dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: fused_level_1
	fused_level_1_fused_level_1_update_0_write_bundle_write(/* arg names */compute_result, fused_level_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_0_update_0(bright_laplace_diff_0_cache& bright_laplace_diff_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, bright_weights_normed_cache& bright_weights_normed, dark_weights_normed_cache& dark_weights_normed, fused_level_0_cache& fused_level_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_laplace_diff_0
	auto bright_laplace_diff_0_0_c__0_value = bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_0
	auto dark_laplace_diff_0_0_c__0_value = dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weighted_merge_unrolled_2(bright_laplace_diff_0_0_c__0_value, dark_laplace_diff_0_0_c__0_value, bright_weights_normed_0_c__0_value, dark_weights_normed_0_c__0_value);
	// Produce: fused_level_0
	fused_level_0_fused_level_0_update_0_write_bundle_write(/* arg names */compute_result, fused_level_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_2_update_0(fused_level_3_cache& fused_level_3, fused_level_2_cache& fused_level_2, final_merged_2_cache& final_merged_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: fused_level_3
	auto fused_level_3_0_c__0_value = fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_2
	auto fused_level_2_0_c__0_value = fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(fused_level_3_0_c__0_value, fused_level_2_0_c__0_value);
	// Produce: final_merged_2
	final_merged_2_final_merged_2_update_0_write_bundle_write(/* arg names */compute_result, final_merged_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_1_update_0(final_merged_2_cache& final_merged_2, fused_level_1_cache& fused_level_1, final_merged_1_cache& final_merged_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: final_merged_2
	auto final_merged_2_0_c__0_value = final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_1
	auto fused_level_1_0_c__0_value = fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(final_merged_2_0_c__0_value, fused_level_1_0_c__0_value);
	// Produce: final_merged_1
	final_merged_1_final_merged_1_update_0_write_bundle_write(/* arg names */compute_result, final_merged_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_0_update_0(final_merged_1_cache& final_merged_1, fused_level_0_cache& fused_level_0, final_merged_0_cache& final_merged_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: final_merged_1
	auto final_merged_1_0_c__0_value = final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_0
	auto fused_level_0_0_c__0_value = fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_2(final_merged_1_0_c__0_value, fused_level_0_0_c__0_value);
	// Produce: final_merged_0
	final_merged_0_final_merged_0_update_0_write_bundle_write(/* arg names */compute_result, final_merged_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ef_2_update_0(final_merged_0_cache& final_merged_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */ef_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_ef_2_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(final_merged_0_0_c__0_value);
	// Produce: ef_2
	ef_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void ef_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 2 */ef_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("ef_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  bright_cache bright;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_1_cache bright_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_2_cache bright_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_3_cache bright_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_1_cache bright_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_2_cache bright_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_3_cache bright_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_0_cache bright_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_1_cache bright_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_2_cache bright_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_0_cache bright_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_1_cache bright_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_2_cache bright_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_cache bright_weights;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_cache bright_weights_normed;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_1_cache bright_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_2_cache bright_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_3_cache bright_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_1_cache bright_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_2_cache bright_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_3_cache bright_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_cache dark;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_1_cache dark_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_2_cache dark_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_3_cache dark_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_1_cache dark_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_2_cache dark_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_3_cache dark_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_0_cache dark_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_1_cache dark_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_2_cache dark_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_0_cache dark_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_1_cache dark_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_2_cache dark_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_cache dark_weights;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_cache dark_weights_normed;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_1_cache dark_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_2_cache dark_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_3_cache dark_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_1_cache dark_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_2_cache dark_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_3_cache dark_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_0_cache final_merged_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_1_cache final_merged_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_2_cache final_merged_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_0_cache fused_level_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_1_cache fused_level_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_2_cache fused_level_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_3_cache fused_level_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919; dark_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 35] : 0 <= d0 <= 539 and 0 <= d1 <= 959; dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959; bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958; ef_2_update_0[d0, d1] -> [7 + d1, 4 + d0, 51] : 0 <= d0 <= 539 and 0 <= d1 <= 1919; bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959; in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919; dark_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 26] : 0 <= d0 <= 134 and 0 <= d1 <= 239; dark_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 33] : 0 <= d0 <= 539 and 0 <= d1 <= 1919; fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919; bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478; bright_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 43] : 0 <= d0 <= 539 and 0 <= d1 <= 1919; dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958; bright_laplace_us_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 38] : 0 <= d0 <= 269 and 0 <= d1 <= 479; bright_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 40] : 0 <= d0 <= 539 and 0 <= d1 <= 1919; dark_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 36] : 0 <= d0 <= 539 and 0 <= d1 <= 1919; bright_laplace_us_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 39] : 0 <= d0 <= 539 and 0 <= d1 <= 959; bright_weights_update_0[d0, d1] -> [d1, d0, 5] : -4 <= d0 <= 540 and -7 <= d1 <= 1919; dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918; dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478; final_merged_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 48] : 0 <= d0 <= 269 and 0 <= d1 <= 479; dark_laplace_us_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 32] : 0 <= d0 <= 539 and 0 <= d1 <= 959; final_merged_1_update_0[d0, d1] -> [7 + 2d1, 4 + d0, 49] : 0 <= d0 <= 539 and 0 <= d1 <= 959; dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478; bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479; dark_weights_update_0[d0, d1] -> [d1, d0, 4] : -4 <= d0 <= 540 and -7 <= d1 <= 1919; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958; dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 30] : 0 <= d0 <= 134 and 0 <= d1 <= 239; bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918; dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919; bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918; bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919; bright_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 41] : 0 <= d0 <= 269 and 0 <= d1 <= 479; bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 37] : 0 <= d0 <= 134 and 0 <= d1 <= 239; fused_level_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 44] : 0 <= d0 <= 134 and 0 <= d1 <= 239; dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479; final_merged_0_update_0[d0, d1] -> [7 + d1, 4 + d0, 50] : 0 <= d0 <= 539 and 0 <= d1 <= 1919; bright_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 42] : 0 <= d0 <= 539 and 0 <= d1 <= 959; bright_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 29] : 0 <= d0 <= 134 and 0 <= d1 <= 239; dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959; fused_level_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 45] : 0 <= d0 <= 269 and 0 <= d1 <= 479; bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919; dark_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 34] : 0 <= d0 <= 269 and 0 <= d1 <= 479; fused_level_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 46] : 0 <= d0 <= 539 and 0 <= d1 <= 959; bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479; dark_laplace_us_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 31] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
//   { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
// Condition for dark_weights_normed_update_0(((((-6 + 1*i2)) == 0) && (((4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 35] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
// Condition for dark_laplace_diff_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-35 + 1*i2)) == 0) && (((-2 + 1*i1)) >= 0) && (((541 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1921 + -1*i0)) >= 0)))
//   { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 16] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
// Condition for dark_weights_normed_gauss_ds_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-16 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 15] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
// Condition for bright_gauss_blur_2_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-15 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { ef_2_update_0[d0, d1] -> [7 + d1, 4 + d0, 51] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
// Condition for ef_2_update_0(((((-51 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((543 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1926 + -1*i0)) >= 0)))
//   { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 20] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
// Condition for bright_weights_normed_gauss_ds_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-20 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
// Condition for in_update_0(((((-1 + 1*i2)) == 0) && (((4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 26] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
// Condition for dark_gauss_ds_3_update_0(((((-1 + -1*i0 + (8*(((1 + 1*i0)) >> 3)))) == 0) && (((-1*i1 + (4*(((1*i1)) >> 2)))) == 0) && (((-26 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 33] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
// Condition for dark_laplace_us_0_update_0(((((-33 + 1*i2)) == 0) && (((-1 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1920 + -1*i0)) >= 0)))
//   { fused_level_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 47] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
// Condition for fused_level_0_update_0(((((-47 + 1*i2)) == 0) && (((-1 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1920 + -1*i0)) >= 0)))
//   { bright_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 23] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
// Condition for bright_gauss_blur_3_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-23 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 28] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
// Condition for bright_weights_normed_gauss_blur_3_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-28 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 43] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
// Condition for bright_laplace_diff_0_update_0(((((-43 + 1*i2)) == 0) && (((-1 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1920 + -1*i0)) >= 0)))
//   { dark_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 12] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
// Condition for dark_gauss_blur_2_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-12 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_laplace_us_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 38] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
// Condition for bright_laplace_us_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-38 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((542 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1923 + -1*i0)) >= 0)))
//   { bright_laplace_us_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 40] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
// Condition for bright_laplace_us_0_update_0(((((-40 + 1*i2)) == 0) && (((-1 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1920 + -1*i0)) >= 0)))
//   { dark_laplace_diff_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 36] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
// Condition for dark_laplace_diff_0_update_0(((((-36 + 1*i2)) == 0) && (((-1 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1920 + -1*i0)) >= 0)))
//   { bright_laplace_us_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 39] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
// Condition for bright_laplace_us_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-39 + 1*i2)) == 0) && (((-2 + 1*i1)) >= 0) && (((541 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1921 + -1*i0)) >= 0)))
//   { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
// Condition for bright_weights_update_0(((((-5 + 1*i2)) == 0) && (((4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 18] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
// Condition for dark_gauss_ds_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-18 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
// Condition for dark_weights_normed_gauss_blur_1_update_0(((((-10 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
// Condition for dark_gauss_blur_1_update_0(((((-7 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 25] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
// Condition for dark_weights_normed_gauss_blur_3_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-25 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { final_merged_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 48] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
// Condition for final_merged_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-48 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((542 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1923 + -1*i0)) >= 0)))
//   { dark_laplace_us_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 32] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
// Condition for dark_laplace_us_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-32 + 1*i2)) == 0) && (((-2 + 1*i1)) >= 0) && (((541 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1921 + -1*i0)) >= 0)))
//   { final_merged_1_update_0[d0, d1] -> [7 + 2d1, 4 + d0, 49] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
// Condition for final_merged_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-49 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((543 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1925 + -1*i0)) >= 0)))
//   { dark_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 19] : 0 <= d0 <= 268 and 0 <= d1 <= 478 }
// Condition for dark_gauss_blur_3_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-19 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 27] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
// Condition for bright_weights_normed_gauss_ds_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-27 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
// Condition for dark_weights_update_0(((((-4 + 1*i2)) == 0) && (((4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 17] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
// Condition for dark_weights_normed_gauss_blur_2_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-17 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 30] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
// Condition for dark_weights_normed_gauss_ds_3_update_0(((((-1 + -1*i0 + (8*(((1 + 1*i0)) >> 3)))) == 0) && (((-1*i1 + (4*(((1*i1)) >> 2)))) == 0) && (((-30 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 14] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
// Condition for bright_gauss_ds_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-14 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 21] : -2 <= d0 <= 538 and -2 <= d1 <= 958 }
// Condition for bright_weights_normed_gauss_blur_2_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-21 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 13] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
// Condition for bright_weights_normed_gauss_blur_1_update_0(((((-13 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_update_0[d0, d1] -> [d1, d0, 2] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
// Condition for dark_update_0(((((-2 + 1*i2)) == 0) && (((4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : -3 <= d0 <= 539 and -6 <= d1 <= 1918 }
// Condition for bright_gauss_blur_1_update_0(((((-9 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 8] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
// Condition for bright_weights_normed_update_0(((((-8 + 1*i2)) == 0) && (((4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { bright_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 41] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
// Condition for bright_laplace_diff_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-41 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((542 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1923 + -1*i0)) >= 0)))
//   { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 37] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
// Condition for bright_weights_normed_gauss_ds_3_update_0(((((-1 + -1*i0 + (8*(((1 + 1*i0)) >> 3)))) == 0) && (((-1*i1 + (4*(((1*i1)) >> 2)))) == 0) && (((-37 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { fused_level_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 44] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
// Condition for fused_level_3_update_0(((((-1 + -1*i0 + (8*(((1 + 1*i0)) >> 3)))) == 0) && (((-1*i1 + (4*(((1*i1)) >> 2)))) == 0) && (((-44 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 24] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
// Condition for dark_weights_normed_gauss_ds_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-24 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { final_merged_0_update_0[d0, d1] -> [7 + d1, 4 + d0, 50] : 0 <= d0 <= 539 and 0 <= d1 <= 1919 }
// Condition for final_merged_0_update_0(((((-50 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((543 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1926 + -1*i0)) >= 0)))
//   { bright_laplace_diff_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 42] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
// Condition for bright_laplace_diff_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-42 + 1*i2)) == 0) && (((-2 + 1*i1)) >= 0) && (((541 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1921 + -1*i0)) >= 0)))
//   { bright_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 29] : 0 <= d0 <= 134 and 0 <= d1 <= 239 }
// Condition for bright_gauss_ds_3_update_0(((((-1 + -1*i0 + (8*(((1 + 1*i0)) >> 3)))) == 0) && (((-1*i1 + (4*(((1*i1)) >> 2)))) == 0) && (((-29 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 11] : -3 <= d0 <= 539 and -3 <= d1 <= 959 }
// Condition for dark_gauss_ds_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-11 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { fused_level_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 45] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
// Condition for fused_level_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-45 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((542 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1923 + -1*i0)) >= 0)))
//   { bright_update_0[d0, d1] -> [d1, d0, 3] : -4 <= d0 <= 540 and -7 <= d1 <= 1919 }
// Condition for bright_update_0(((((-3 + 1*i2)) == 0) && (((4 + 1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((7 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_laplace_diff_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 34] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
// Condition for dark_laplace_diff_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-34 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((542 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1923 + -1*i0)) >= 0)))
//   { fused_level_1_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 46] : 0 <= d0 <= 539 and 0 <= d1 <= 959 }
// Condition for fused_level_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-46 + 1*i2)) == 0) && (((-2 + 1*i1)) >= 0) && (((541 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1921 + -1*i0)) >= 0)))
//   { bright_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 22] : -1 <= d0 <= 269 and -1 <= d1 <= 479 }
// Condition for bright_gauss_ds_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-22 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((540 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1919 + -1*i0)) >= 0)))
//   { dark_laplace_us_2_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 31] : 0 <= d0 <= 269 and 0 <= d1 <= 479 }
// Condition for dark_laplace_us_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-31 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((542 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1923 + -1*i0)) >= 0)))

	  // Schedules...
	    // bright_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*9]
	    // bright_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*15]
	    // bright_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*23]
	    // bright_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*1 + 1*1,1*14]
	    // bright_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*2 + 1*2,1*22]
	    // bright_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*4 + 1*4,1*29]
	    // bright_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*43]
	    // bright_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*42]
	    // bright_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*41]
	    // bright_laplace_us_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*40]
	    // bright_laplace_us_1_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*39]
	    // bright_laplace_us_2_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*38]
	    // bright_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
	    // bright_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*13]
	    // bright_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*21]
	    // bright_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*28]
	    // bright_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*1 + 1*1,1*20]
	    // bright_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*2 + 1*2,1*27]
	    // bright_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*4 + 1*4,1*37]
	    // bright_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*8]
	    // bright_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*5]
	    // dark_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*7]
	    // dark_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*12]
	    // dark_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*19]
	    // dark_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*1 + 1*1,1*11]
	    // dark_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*2 + 1*2,1*18]
	    // dark_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*4 + 1*4,1*26]
	    // dark_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*36]
	    // dark_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*35]
	    // dark_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*34]
	    // dark_laplace_us_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*33]
	    // dark_laplace_us_1_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*32]
	    // dark_laplace_us_2_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*31]
	    // dark_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // dark_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*10]
	    // dark_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*17]
	    // dark_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*25]
	    // dark_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*1 + 1*1,1*16]
	    // dark_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*2 + 1*2,1*24]
	    // dark_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*4 + 1*4,1*30]
	    // dark_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*6]
	    // dark_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*4]
	    // ef_2_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*4,1*51]
	    // final_merged_0_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*4,1*50]
	    // final_merged_1_update_0 -> [1*d1*1*2 + 1*7,1*d0*1*1 + 1*4,1*49]
	    // final_merged_2_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*48]
	    // fused_level_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*47]
	    // fused_level_1_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*46]
	    // fused_level_2_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*45]
	    // fused_level_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*4 + 1*4,1*44]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -7; c0 <= 1926; c0++) {
	  for (int c1 = -4; c1 <= 543; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-4 <= c1 && c1 <= 540) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1919) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 540) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1919) && ((c0 - 0) % 1 == 0)) {
	      dark_update_0(in /* buf name */, dark, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 540) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1919) && ((c0 - 0) % 1 == 0)) {
	      bright_update_0(in /* buf name */, bright, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 540) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1919) && ((c0 - 0) % 1 == 0)) {
	      dark_weights_update_0(dark /* buf name */, dark_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 540) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1919) && ((c0 - 0) % 1 == 0)) {
	      bright_weights_update_0(bright /* buf name */, bright_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 540) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1919) && ((c0 - 0) % 1 == 0)) {
	      dark_weights_normed_update_0(dark_weights /* buf name */, dark_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1919) && ((c0 - 1) % 1 == 0)) {
	      dark_gauss_blur_1_update_0(dark /* buf name */, dark_gauss_blur_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 540) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1919) && ((c0 - 0) % 1 == 0)) {
	      bright_weights_normed_update_0(bright_weights /* buf name */, bright_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1919) && ((c0 - 1) % 1 == 0)) {
	      bright_gauss_blur_1_update_0(bright /* buf name */, bright_gauss_blur_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1919) && ((c0 - 1) % 1 == 0)) {
	      dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed /* buf name */, dark_weights_normed_gauss_blur_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1919) && ((c0 - 1) % 2 == 0)) {
	      dark_gauss_ds_1_update_0(dark_gauss_blur_1 /* buf name */, dark_gauss_ds_1, (c1 - 1) / 1, (c0 - 1) / 2);
	    }
	
	    if ((0 <= c1 && c1 <= 540) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1919) && ((c0 - 3) % 2 == 0)) {
	      dark_gauss_blur_2_update_0(dark_gauss_ds_1 /* buf name */, dark_gauss_blur_2, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((-2 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1919) && ((c0 - 1) % 1 == 0)) {
	      bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed /* buf name */, bright_weights_normed_gauss_blur_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1919) && ((c0 - 1) % 2 == 0)) {
	      bright_gauss_ds_1_update_0(bright_gauss_blur_1 /* buf name */, bright_gauss_ds_1, (c1 - 1) / 1, (c0 - 1) / 2);
	    }
	
	    if ((0 <= c1 && c1 <= 540) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1919) && ((c0 - 3) % 2 == 0)) {
	      bright_gauss_blur_2_update_0(bright_gauss_ds_1 /* buf name */, bright_gauss_blur_2, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((-2 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1919) && ((c0 - 1) % 2 == 0)) {
	      dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1 /* buf name */, dark_weights_normed_gauss_ds_1, (c1 - 1) / 1, (c0 - 1) / 2);
	    }
	
	    if ((0 <= c1 && c1 <= 540) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1919) && ((c0 - 3) % 2 == 0)) {
	      dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1 /* buf name */, dark_weights_normed_gauss_blur_2, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((0 <= c1 && c1 <= 540) && ((c1 - 2) % 2 == 0) && (-1 <= c0 && c0 <= 1919) && ((c0 - 3) % 4 == 0)) {
	      dark_gauss_ds_2_update_0(dark_gauss_blur_2 /* buf name */, dark_gauss_ds_2, (c1 - 2) / 2, (c0 - 3) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 540) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1919) && ((c0 - 7) % 4 == 0)) {
	      dark_gauss_blur_3_update_0(dark_gauss_ds_2 /* buf name */, dark_gauss_blur_3, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((-2 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1919) && ((c0 - 1) % 2 == 0)) {
	      bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1 /* buf name */, bright_weights_normed_gauss_ds_1, (c1 - 1) / 1, (c0 - 1) / 2);
	    }
	
	    if ((0 <= c1 && c1 <= 540) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1919) && ((c0 - 3) % 2 == 0)) {
	      bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1 /* buf name */, bright_weights_normed_gauss_blur_2, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((0 <= c1 && c1 <= 540) && ((c1 - 2) % 2 == 0) && (-1 <= c0 && c0 <= 1919) && ((c0 - 3) % 4 == 0)) {
	      bright_gauss_ds_2_update_0(bright_gauss_blur_2 /* buf name */, bright_gauss_ds_2, (c1 - 2) / 2, (c0 - 3) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 540) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1919) && ((c0 - 7) % 4 == 0)) {
	      bright_gauss_blur_3_update_0(bright_gauss_ds_2 /* buf name */, bright_gauss_blur_3, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((0 <= c1 && c1 <= 540) && ((c1 - 2) % 2 == 0) && (-1 <= c0 && c0 <= 1919) && ((c0 - 3) % 4 == 0)) {
	      dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2 /* buf name */, dark_weights_normed_gauss_ds_2, (c1 - 2) / 2, (c0 - 3) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 540) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1919) && ((c0 - 7) % 4 == 0)) {
	      dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2 /* buf name */, dark_weights_normed_gauss_blur_3, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 540) && ((c1 - 4) % 4 == 0) && (7 <= c0 && c0 <= 1919) && ((c0 - 7) % 8 == 0)) {
	      dark_gauss_ds_3_update_0(dark_gauss_blur_3 /* buf name */, dark_gauss_ds_3, (c1 - 4) / 4, (c0 - 7) / 8);
	    }
	
	    if ((0 <= c1 && c1 <= 540) && ((c1 - 2) % 2 == 0) && (-1 <= c0 && c0 <= 1919) && ((c0 - 3) % 4 == 0)) {
	      bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2 /* buf name */, bright_weights_normed_gauss_ds_2, (c1 - 2) / 2, (c0 - 3) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 540) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1919) && ((c0 - 7) % 4 == 0)) {
	      bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2 /* buf name */, bright_weights_normed_gauss_blur_3, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 540) && ((c1 - 4) % 4 == 0) && (7 <= c0 && c0 <= 1919) && ((c0 - 7) % 8 == 0)) {
	      bright_gauss_ds_3_update_0(bright_gauss_blur_3 /* buf name */, bright_gauss_ds_3, (c1 - 4) / 4, (c0 - 7) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 540) && ((c1 - 4) % 4 == 0) && (7 <= c0 && c0 <= 1919) && ((c0 - 7) % 8 == 0)) {
	      dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3 /* buf name */, dark_weights_normed_gauss_ds_3, (c1 - 4) / 4, (c0 - 7) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 542) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1923) && ((c0 - 7) % 4 == 0)) {
	      dark_laplace_us_2_update_0(dark_gauss_ds_3 /* buf name */, dark_laplace_us_2, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 541) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1921) && ((c0 - 3) % 2 == 0)) {
	      dark_laplace_us_1_update_0(dark_gauss_ds_2 /* buf name */, dark_laplace_us_1, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1920) && ((c0 - 1) % 1 == 0)) {
	      dark_laplace_us_0_update_0(dark_gauss_ds_1 /* buf name */, dark_laplace_us_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 542) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1923) && ((c0 - 7) % 4 == 0)) {
	      dark_laplace_diff_2_update_0(dark_gauss_ds_2 /* buf name */, dark_laplace_us_2 /* buf name */, dark_laplace_diff_2, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 541) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1921) && ((c0 - 3) % 2 == 0)) {
	      dark_laplace_diff_1_update_0(dark_gauss_ds_1 /* buf name */, dark_laplace_us_1 /* buf name */, dark_laplace_diff_1, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1920) && ((c0 - 1) % 1 == 0)) {
	      dark_laplace_diff_0_update_0(dark /* buf name */, dark_laplace_us_0 /* buf name */, dark_laplace_diff_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 540) && ((c1 - 4) % 4 == 0) && (7 <= c0 && c0 <= 1919) && ((c0 - 7) % 8 == 0)) {
	      bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3 /* buf name */, bright_weights_normed_gauss_ds_3, (c1 - 4) / 4, (c0 - 7) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 542) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1923) && ((c0 - 7) % 4 == 0)) {
	      bright_laplace_us_2_update_0(bright_gauss_ds_3 /* buf name */, bright_laplace_us_2, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 541) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1921) && ((c0 - 3) % 2 == 0)) {
	      bright_laplace_us_1_update_0(bright_gauss_ds_2 /* buf name */, bright_laplace_us_1, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1920) && ((c0 - 1) % 1 == 0)) {
	      bright_laplace_us_0_update_0(bright_gauss_ds_1 /* buf name */, bright_laplace_us_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 542) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1923) && ((c0 - 7) % 4 == 0)) {
	      bright_laplace_diff_2_update_0(bright_gauss_ds_2 /* buf name */, bright_laplace_us_2 /* buf name */, bright_laplace_diff_2, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 541) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1921) && ((c0 - 3) % 2 == 0)) {
	      bright_laplace_diff_1_update_0(bright_gauss_ds_1 /* buf name */, bright_laplace_us_1 /* buf name */, bright_laplace_diff_1, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1920) && ((c0 - 1) % 1 == 0)) {
	      bright_laplace_diff_0_update_0(bright /* buf name */, bright_laplace_us_0 /* buf name */, bright_laplace_diff_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 540) && ((c1 - 4) % 4 == 0) && (7 <= c0 && c0 <= 1919) && ((c0 - 7) % 8 == 0)) {
	      fused_level_3_update_0(bright_gauss_ds_3 /* buf name */, dark_gauss_ds_3 /* buf name */, bright_weights_normed_gauss_ds_3 /* buf name */, dark_weights_normed_gauss_ds_3 /* buf name */, fused_level_3, (c1 - 4) / 4, (c0 - 7) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 542) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1923) && ((c0 - 7) % 4 == 0)) {
	      fused_level_2_update_0(bright_laplace_diff_2 /* buf name */, dark_laplace_diff_2 /* buf name */, bright_weights_normed_gauss_ds_2 /* buf name */, dark_weights_normed_gauss_ds_2 /* buf name */, fused_level_2, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 541) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1921) && ((c0 - 3) % 2 == 0)) {
	      fused_level_1_update_0(bright_laplace_diff_1 /* buf name */, dark_laplace_diff_1 /* buf name */, bright_weights_normed_gauss_ds_1 /* buf name */, dark_weights_normed_gauss_ds_1 /* buf name */, fused_level_1, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 540) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1920) && ((c0 - 1) % 1 == 0)) {
	      fused_level_0_update_0(bright_laplace_diff_0 /* buf name */, dark_laplace_diff_0 /* buf name */, bright_weights_normed /* buf name */, dark_weights_normed /* buf name */, fused_level_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 542) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1923) && ((c0 - 7) % 4 == 0)) {
	      final_merged_2_update_0(fused_level_3 /* buf name */, fused_level_2 /* buf name */, final_merged_2, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 543) && ((c1 - 4) % 1 == 0) && (7 <= c0 && c0 <= 1925) && ((c0 - 7) % 2 == 0)) {
	      final_merged_1_update_0(final_merged_2 /* buf name */, fused_level_1 /* buf name */, final_merged_1, (c1 - 4) / 1, (c0 - 7) / 2);
	    }
	
	    if ((4 <= c1 && c1 <= 543) && ((c1 - 4) % 1 == 0) && (7 <= c0 && c0 <= 1926) && ((c0 - 7) % 1 == 0)) {
	      final_merged_0_update_0(final_merged_1 /* buf name */, fused_level_0 /* buf name */, final_merged_0, (c1 - 4) / 1, (c0 - 7) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 543) && ((c1 - 4) % 1 == 0) && (7 <= c0 && c0 <= 1926) && ((c0 - 7) % 1 == 0)) {
	      ef_2_update_0(final_merged_0 /* buf name */, ef_2, (c1 - 4) / 1, (c0 - 7) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void ef_2_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 2 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 2 */ef_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    ef_2_opt(in_off_chip, ef_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { ef_2_update_0[root = 0, ef_2_0, ef_2_1] -> ef_2[0, 0] : 0 <= ef_2_0 <= 539 and 0 <= ef_2_1 <= 1919 }
const int ef_2_update_0_write_pipe0_num_transfers = 1036800;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -4 <= in_0 <= 540 and -7 <= in_1 <= 1919 }
const int in_update_0_read_pipe0_num_transfers = 1050215;


extern "C" {

void ef_2_opt_accel(hw_uint<32>* in_update_0_read_pipe0, hw_uint<32>* ef_2_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = ef_2_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = ef_2_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > ef_2_update_0_write_pipe0_channel;

  burst_read<32>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  ef_2_opt_wrapper(in_update_0_read_pipe0_channel, ef_2_update_0_write_pipe0_channel, size);

  burst_write<32>(ef_2_update_0_write_pipe0, ef_2_update_0_write_pipe0_channel, ef_2_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void ef_2_opt_rdai(HWStream<hw_uint<32> >& in_update_0_read_pipe0, HWStream<hw_uint<32> >&  ef_2_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = ef_2_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  ef_2_opt(in_update_0_read_pipe0, ef_2_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__
