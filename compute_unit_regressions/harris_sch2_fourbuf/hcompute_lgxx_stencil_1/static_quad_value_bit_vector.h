#pragma once

#include <algorithm>
#include <bitset>
#include <cassert>
#include <iostream>
#include <stdint.h>
#include <type_traits>

// This is a comment

typedef int8_t  bv_sint8;
typedef int32_t  bv_sint32;

typedef uint8_t  bv_uint8;
typedef uint16_t bv_uint16;
typedef uint32_t bv_uint32;
typedef uint64_t bv_uint64;
typedef unsigned int uint;
//using uint = unsigned int;

#define QBV_UNKNOWN_VALUE 2
#define QBV_HIGH_IMPEDANCE_VALUE 3

namespace bsim {

  static inline std::string hex_digit_to_binary(const char hex_digit) {
    switch (hex_digit) {
    case '0':
      return "0000";
    case '1':
      return "0001";
    case '2':
      return "0010";
    case '3':
      return "0011";
    case '4':
      return "0100";
    case '5':
      return "0101";
    case '6':
      return "0110";
    case '7':
      return "0111";
    case '8':
      return "1000";
    case '9':
      return "1001";
    case 'a':
      return "1010";
    case 'b':
      return "1011";
    case 'c':
      return "1100";
    case 'd':
      return "1101";
    case 'e':
      return "1110";
    case 'f':
      return "1111";
    case 'x':
      return "xxxx";
    case 'z':
      return "zzzz";

    default:
      assert(false);
    }

    assert(false);
  }

  class quad_value {
  protected:
    unsigned char value;

  public:
    quad_value() : value(0) {}

    quad_value(unsigned char v) : value(v) {
      assert(v < 4);
    }

    bool same_representation(const quad_value other) const {
      return value == other.value;
    }

    unsigned char get_char() const {
      return value;
    }

    bool is_binary() const {
      return (value == 1) || (value == 0);
    }

    bool is_unknown() const {
      return (value == QBV_UNKNOWN_VALUE);
    }

    bool is_high_impedance() const {
      return (value == QBV_HIGH_IMPEDANCE_VALUE);
    }

    quad_value plus(const quad_value& other) const {
      assert(other.is_binary());
      assert(is_binary());

      return quad_value((other.binary_value() + binary_value()) & 0x01);
    }

    bool equals(const quad_value& other) const {
      if ((value == QBV_UNKNOWN_VALUE) ||
          (other.value == QBV_UNKNOWN_VALUE)) {
        return false;
      }

      // All high impedance values are equal
      return value == other.value;
    }

    unsigned char binary_value() const {
      assert((value == 1) || (value == 0));
      return value;
    }

    std::string binary_string() const {
      if (value == 1) {
        return "1";
      } else if (value == 0) {
        return "0";
      } else if (value == QBV_UNKNOWN_VALUE) {
        return "x";
      } else if (value == QBV_HIGH_IMPEDANCE_VALUE) {
        return "z";
      }
      assert(false);
    }

    void print(std::ostream& out) const {
      if (value == 1) {
        out << "1";
      } else if (value == 0) {
        out << "0";
      } else if (value == QBV_UNKNOWN_VALUE) {
        out << "x";
      } else if (value == QBV_HIGH_IMPEDANCE_VALUE) {
        out << "z";
      }
    }
  };

  static inline quad_value operator+(const quad_value& a,
                                     const quad_value& b) {
    assert(!a.is_high_impedance());
    assert(!b.is_high_impedance());

    return a.plus(b);
  }

  static inline quad_value operator&(const quad_value& a,
                                     const quad_value& b) {
    assert(!a.is_high_impedance());
    assert(!b.is_high_impedance());

    if (a.is_binary() && (a.binary_value() == 0)) {
      return quad_value(0);
    }

    if (b.is_binary() && (b.binary_value() == 0)) {
      return quad_value(0);
    }

    if (a.is_unknown() || b.is_unknown()) {
      return quad_value(QBV_UNKNOWN_VALUE);
    }

    assert(a.is_binary());
    assert(b.is_binary());

    return quad_value(a.binary_value() & b.binary_value());
  }

  static inline quad_value operator|(const quad_value& a,
                                     const quad_value& b) {

    assert(!a.is_high_impedance());
    assert(!b.is_high_impedance());

    if (a.is_binary() && (a.binary_value() == 1)) {
      return quad_value(1);
    }
    if (b.is_binary() && (b.binary_value() == 1)) {
      return quad_value(1);
    }

    if (a.is_unknown() || b.is_unknown()) {
      return quad_value(QBV_UNKNOWN_VALUE);
    }

    assert(a.is_binary());
    assert(b.is_binary());
    return quad_value(a.binary_value() | b.binary_value());
  }

  static inline quad_value operator^(const quad_value& a,
                                     const quad_value& b) {
    assert(!a.is_high_impedance());
    assert(!b.is_high_impedance());

    if(a.is_unknown() || b.is_unknown()) {
      return quad_value(QBV_UNKNOWN_VALUE);
    }

    assert(a.is_binary());
    assert(b.is_binary());

    return quad_value(a.binary_value() ^ b.binary_value());

  }

  static inline bool operator>(const quad_value& a,
                               const quad_value& b) {

    assert(!a.is_high_impedance());
    assert(!b.is_high_impedance());

    assert(a.is_binary());
    assert(b.is_binary());

    return a.binary_value() > b.binary_value();
  }

  static inline bool operator<(const quad_value& a,
                               const quad_value& b) {
    assert(!a.is_high_impedance());
    assert(!b.is_high_impedance());

    assert(a.is_binary());
    assert(b.is_binary());

    return a.binary_value() < b.binary_value();
  }

  static inline quad_value operator~(const quad_value& a) {

    assert(!a.is_high_impedance());

    if(a.is_unknown()) {
      return quad_value(QBV_UNKNOWN_VALUE);
    }

    assert(a.is_binary());

    return quad_value((~a.binary_value()) & 0x01);
  }

  static inline bool operator==(const quad_value& a,
                                const quad_value& b) {
    assert(!a.is_high_impedance());
    assert(!b.is_high_impedance());

    return a.equals(b);
  }

  static inline bool operator!=(const quad_value& a,
                                const quad_value& b) {
    assert(!a.is_high_impedance());
    assert(!b.is_high_impedance());

    return !(a == b);
  }

  static inline std::ostream& operator<<(std::ostream& out,
					 const quad_value& a) {
    a.print(out);
    return out;
  }

  template<int N>
  class static_quad_value_bit_vector {
    quad_value bits[N];

  public:

    static_quad_value_bit_vector() {
      for (uint i = 0; i < ((uint) N); i++) {
	bits[i] = quad_value(0);
      }
    }

    static_quad_value_bit_vector(const std::string& str_raw) {
      std::string bv_size = "";
      int ind = 0;
      while (str_raw[ind] != '\'') {
        assert(isdigit(str_raw[ind]));
        bv_size += str_raw[ind];
        ind++;
      }

      assert (str_raw[ind] == '\'');

      ind++;

      char format = str_raw[ind];

      assert((format == 'b') ||
             (format == 'h') ||
             (format == 'd'));

      ind++;

      std::string digits = "";
      while (ind < ((int) str_raw.size())) {
        digits += str_raw[ind];
        ind++;
      }

      int num_bits = stoi(bv_size);
      assert(num_bits == N);

      //bits.resize(NUM_BYTES(num_bits));
      //bits.resize(num_bits);
      for (int i = 0; i < ((int) N); i++) {
        bits[i] = 0;
      }

      // TODO: Check that digits are not too long

      assert(format == 'h');

      int bit_ind = 0;
      for (int i = digits.size() - 1; i >= 0; i--) {
        char hex_digit = digits[i];
        std::string hex_to_binary = hex_digit_to_binary(hex_digit);

        assert(hex_to_binary.size() == 4);

        int k = 0;
        for (int j = hex_to_binary.size() - 1; j >= 0; j--) {
          // Dont add past the end
          if ((bit_ind + k) < bitLength()) {
            //std::cout << "setting digit = " << hex_to_binary[j] << std::endl;
            if (hex_to_binary[j] == '1') {
              set(bit_ind + k, quad_value(1));
            } else if (hex_to_binary[j] == '0') {
              set(bit_ind + k, quad_value(0));
            } else if (hex_to_binary[j] == 'x') {
              set(bit_ind + k, quad_value(QBV_UNKNOWN_VALUE));
            } else if (hex_to_binary[j] == 'z') {
              set(bit_ind + k, quad_value(QBV_HIGH_IMPEDANCE_VALUE));
            } else {
              assert(false);
            }
            k++;
          } else {
            //assert(hex_to_binary[j] == '0');
          }
        }
        bit_ind += 4;
      }

    }

    // static_quad_value_bit_vector(const std::string& str_raw) {
    //   int num_digits = 0;
    //   std::string str;
    //   for (int i = 0; i < ((int) str_raw.size()); i++) {
    //     if (isdigit(str_raw[i])) {
    //       num_digits++;
    //       str += str_raw[i];
    //     } else if (str_raw[i] == 'z') {
    //       str += str_raw[i];
    //     } else if (str_raw[i] == 'x') {
    //       str += str_raw[i];
    //     } else {
    //       assert(str_raw[i] == '_');
    //     }
    //   }
    //   assert(num_digits <= N);

    //   int len = str.size();

    //   //bits.resize(N);
    //   for (int i = len - 1; i >= 0; i--) {
    //     unsigned char val = (str[i] == '0') ? 0 : 1;
    //     if (str[i] == 'x') {
    //       val = QBV_UNKNOWN_VALUE;
    //     }
    //     if (str[i] == 'z') {
    //       val = QBV_HIGH_IMPEDANCE_VALUE;
    //     }

    //     int ind = len - i - 1;
    //     set(ind, val);
    //   }
    //   for (int i = N - 1; i >= len; i--) {
    //     set(i,0);
    //   }
    // }

    static_quad_value_bit_vector(const int val) {
      //bits.resize(NUM_BYTES(N));
      //bits.resize(N);

      for (int i = 0; i < N; i++) {
        if (i < ((int) sizeof(int)*8)) {
          set(i, quad_value((val >> i) & 0x01));
        } else {
          set(i, quad_value(0));
        }
      }
    }


    //Note: Need to check that all digits in each clump that
    //contain 'x' or 'z' values are 'x' or 'z' values
    std::string hex_string() {
      std::string hex = std::to_string(N) + "'h";

      std::string hex_digits = "";

      for (int i = 0; i < ((int) bits.size()); i += 4) {
        unsigned char bit_l = 0;
        bool found_abnormal = false;

        for (int j = 0; j < 4; j++) {
          int index = i + j;
          if (index >= ((int) bits.size())) {
          } else {
            if (bits[index].is_binary()) {
              bit_l |= (bits[index].binary_value() & 0x01) << j;
            } else if (bits[index].is_unknown()) {
              bit_l = 'x';
              found_abnormal = true;
              break;
            } else {
              assert(bits[index].is_high_impedance());
              bit_l = 'z';
              found_abnormal = true;
              break;
            }
          }
        }

        if (!found_abnormal) {
          hex_digits += bit_l > 9 ? bit_l + 87 : bit_l + 48;
        } else {
          hex_digits += bit_l;
        }

      }

      std::reverse(std::begin(hex_digits), std::end(hex_digits));
      return hex + hex_digits;
    }

    static_quad_value_bit_vector(const static_quad_value_bit_vector<N>& other) {
      //bits.resize(other.bits.size());
      //N = other.bitLength();

      for (int i = 0; i < other.bitLength(); i++) {
        bits[i] = other.bits[i];
      }
    }

    static_quad_value_bit_vector<N>& operator=(const static_quad_value_bit_vector<N>& other) {
      if (&other == this) {
    	return *this;
      }

      //bits.resize(other.bits.size());

      //N = other.bitLength();

      for (int i = 0; i < other.bitLength(); i++) {
        bits[i] = other.bits[i];
      }

      return *this;
    }

    bool is_binary() const {
      for (int i = 0; i < ((int) bitLength()); i++) {
        if (!get(i).is_binary()) {
          return false;
        }
      }
      return true;
    }

    std::string binary_string() const {
      std::string str = "";
      for (int i = N - 1; i >= 0; i--) {
        str += get(i).binary_string();
      }

      return str;
    }

    inline void set(const int ind, const int v) {
      // if ((v != 0) && (v != 1)) {
      //   std::cout << "\tv = " << (int) v << std::endl;
      // }
      // assert((v == 0) || (v == 1));

      bits[ind] = quad_value(v);
    }

    inline void set(const int ind, const quad_value val) {
      //const unsigned char val) {
      // int byte_num = ind / 8;
      // int bit_num = ind % 8;

      // unsigned char old = bits[byte_num];
      // // The & 0x01 only seems to be needed for logical not
      // old ^= (-(val & 0x01) ^ old) & (1 << bit_num);

      //bits[byte_num] = old;
      bits[ind] = val;
    }

    quad_value get(const int ind) const {
      return bits[ind];
      // int byte_num = ind / 8;
      // int bit_num = ind % 8;

      // unsigned char target_byte = bits[byte_num];
      // return 0x01 & (target_byte >> bit_num);
    }

    inline bool equals(const static_quad_value_bit_vector<N>& other) const {

      if (other.bitLength() != this->bitLength()) {
        return false;
      }

      for (int i = 0; i < N; i++) {
        if (get(i) != other.get(i)) {
          return false;
        }
      }

      return true;
    }

    template<typename ConvType>
    ConvType to_type() const {
      ConvType tmp = 0;
      ConvType exp = 1;
      for (int i = 0; i < bitLength(); i++) {
        tmp += exp*get(i).binary_value();
        exp *= 2;
      }
      return tmp;
      // ConvType tmp = *(const_cast<ConvType*>((const ConvType*) (&(bits[0]))));
      // //TODO FIXME I am a sketchy hack.
      // ConvType mask = sizeof(ConvType) > bits.size() ? (1<<N)-1 : -1;
      // return tmp & mask;
    }

    inline bv_uint64 as_native_int32() const {
      return to_type<bv_sint32>();
    }

    inline bv_uint64 as_native_uint64() const {
      return to_type<bv_uint64>();
    }

    inline bv_uint32 as_native_uint32() const {
      return to_type<bv_uint32>();
    }

    inline bv_uint16 as_native_uint16() const {
      return to_type<bv_uint16>();
    }

    inline bv_uint8 as_native_uint8() const {
      return to_type<bv_uint8>();
    }

    inline int bitLength() const {
      return N;
    }

  };

  // static inline bool same_representation(const static_quad_value_bit_vector<N>& a,
  //                          const static_quad_value_bit_vector<N>& b) {
  //   if (a.bitLength() != b.bitLength()) {
  //     return false;
  //   }

  //   for (int i = 0; i < ((int) a.bitLength()); i++) {
  //     quad_value av = a.get(i);
  //     quad_value bv = b.get(i);
  //     if (!av.same_representation(bv)) {
  //       return false;
  //     }
  //   }
  //   return true;
  // }

  template<int N>
  static inline static_quad_value_bit_vector<N> unknown_bv() {
    static_quad_value_bit_vector<N> res;

    for (int i = 0; i < N; i++) {
      res.set(i, QBV_UNKNOWN_VALUE);
    }
    return res;
  }

  template<int N>
  static inline std::ostream& operator<<(std::ostream& out,
        				 const static_quad_value_bit_vector<N>& a) {
    out << a.binary_string();

    return out;
  }

  template<int N>
  static inline bool operator==(const static_quad_value_bit_vector<N>& a,
        			const static_quad_value_bit_vector<N>& b) {

    // if (!a.is_binary() || !b.is_binary()) {
    //   return false;
    // }

    return a.equals(b);
  }

  // static inline quad_value highBit(const static_quad_value_bit_vector<N>& a) {
  //   return a.get(a.bitLength() - 1);
  // }

  template<int N>
  static inline
  static_quad_value_bit_vector<N>
  add_general_width_bv(const static_quad_value_bit_vector<N>& a,
  		       const static_quad_value_bit_vector<N>& b) {

    static_quad_value_bit_vector<N> res;
    unsigned char carry = 0;
    for (int i = 0; i < ((int) a.bitLength()); i++) {

      if (!a.get(i).is_binary() ||
          !b.get(i).is_binary()) {
        return unknown_bv<N>();
      }

      unsigned char sum = a.get(i).binary_value() + b.get(i).binary_value() + carry;

      carry = 0;

      unsigned char z_i = sum & 0x01;
      res.set(i, quad_value(z_i));

      if (sum >= 2) {
  	carry = 1;
      }

    }

    return res;
  }

  template<int N>
  static inline
  static_quad_value_bit_vector<N>
  sub_general_width_bv(const static_quad_value_bit_vector<N>& a,
  		       const static_quad_value_bit_vector<N>& b) {
    int Width = a.bitLength();
    static_quad_value_bit_vector<N> diff;
    static_quad_value_bit_vector<N> a_cpy = a;

    for (int i = 0; i < Width; i++) {

      if ((a_cpy.get(i) == 0) &&
  	  (b.get(i) == 1)) {

  	int j = i + 1;

  	diff.set(i, 1);

  	// Modify to carry
  	while ((j < Width) && (a_cpy.get(j) != 1)) {
  	  a_cpy.set(j, 1);
  	  j++;
  	}

  	if (j >= Width) {
  	} else {
  	  a_cpy.set(j, 0);
  	}

      } else if (a_cpy.get(i) == b.get(i)) {
  	diff.set(i, 0);
      } else if ((a_cpy.get(i) == 1) &&
  		 (b.get(i) == 0)) {
  	diff.set(i, 1);
      } else {
        return unknown_bv<N>();
      }
    }

    return diff;
  }

  template<int N>
  static inline
  static_quad_value_bit_vector<N>
  mul_general_width_bv(const static_quad_value_bit_vector<N>& a,
  		       const static_quad_value_bit_vector<N>& b) {
    int Width = a.bitLength();
    static_quad_value_bit_vector<N + N> full_len;

    for (int i = 0; i < Width; i++) {
      if (b.get(i) == 1) {

  	static_quad_value_bit_vector<N + N> shifted_a;

  	for (int j = 0; j < Width; j++) {
  	  shifted_a.set(j + i, a.get(j));
  	}

  	full_len =
  	  add_general_width_bv(full_len, shifted_a);
      }
    }

    static_quad_value_bit_vector<N> res;
    for (int i = 0; i < Width; i++) {
      res.set(i, full_len.get(i));
    }

    return res;
  }

  template<int N>
  class static_quad_value_bit_vector_operations {
  public:

    static inline
    static_quad_value_bit_vector<N>
    land(const static_quad_value_bit_vector<N>& a,
  	 const static_quad_value_bit_vector<N>& b) {
      static_quad_value_bit_vector<N> a_and_b;
      for (int i = 0; i < a.bitLength(); i++) {
  	a_and_b.set(i, a.get(i) & b.get(i));
      }
      return a_and_b;

    }

    static inline static_quad_value_bit_vector<N> lnot(const static_quad_value_bit_vector<N>& a) {
      static_quad_value_bit_vector<N> not_a(a.bitLength());
      for (int i = 0; i < a.bitLength(); i++) {
  	not_a.set(i, ~a.get(i));
      }
      return not_a;

    }

    static inline static_quad_value_bit_vector<N> lor(const static_quad_value_bit_vector<N>& a,
        				 const static_quad_value_bit_vector<N>& b) {
      static_quad_value_bit_vector<N> a_or_b(a.bitLength());
      for (int i = 0; i < a.bitLength(); i++) {
  	a_or_b.set(i, a.get(i) | b.get(i));
      }
      return a_or_b;
    }

    static inline
    static_quad_value_bit_vector<N>
    lxor(const static_quad_value_bit_vector<N>& a,
  	 const static_quad_value_bit_vector<N>& b) {
      static_quad_value_bit_vector<N> a_or_b(a.bitLength());
      for (int i = 0; i < a.bitLength(); i++) {
  	a_or_b.set(i, a.get(i) ^ b.get(i));
      }
      return a_or_b;

    }

  };

  template<int N>
  static inline
  static_quad_value_bit_vector<N>
  negate_general_width_bv(const static_quad_value_bit_vector<N>& a) {
    static_quad_value_bit_vector<N> zero(0);
    return sub_general_width_bv(zero, a);
  }

  template<int N>
  static inline static_quad_value_bit_vector<N> operator~(const static_quad_value_bit_vector<N>& a) {
    return static_quad_value_bit_vector_operations<N>::lnot(a);
  }

  template<int N>
  static inline
  static_quad_value_bit_vector<N>
  operator&(const static_quad_value_bit_vector<N>& a,
            const static_quad_value_bit_vector<N>& b) {
    return static_quad_value_bit_vector_operations<N>::land(a, b);
  }

  template<int N>
  static inline static_quad_value_bit_vector<N> operator|(const static_quad_value_bit_vector<N>& a,
        				     const static_quad_value_bit_vector<N>& b) {
    return static_quad_value_bit_vector_operations<N>::lor(a, b);
  }

  template<int N>
  static inline static_quad_value_bit_vector<N> operator^(const static_quad_value_bit_vector<N>& a,
        				     const static_quad_value_bit_vector<N>& b) {
    return static_quad_value_bit_vector_operations<N>::lxor(a, b);
  }

  template<int N>
  static inline bool operator!=(const static_quad_value_bit_vector<N>& a,
  				const static_quad_value_bit_vector<N>& b) {
    // if (!a.is_binary() || !b.is_binary()) {
    //   return false;
    // }

    return !a.equals(b);
  }

  template<int N>
  static inline bool operator>(const static_quad_value_bit_vector<N>& a,
  			       const static_quad_value_bit_vector<N>& b) {
    if (!a.is_binary() || !b.is_binary()) {
      return false;
    }

    //int    int N = a.bitLength();
    for (int i = N - 1; i >= 0; i--) {
      if (a.get(i) > b.get(i)) {
  	return true;
      }

      if (a.get(i) < b.get(i)) {
  	return false;
      }
    }

    return false;
  }

  template<int N>
  static inline bool operator>=(const static_quad_value_bit_vector<N>& a,
        			const static_quad_value_bit_vector<N>& b) {
    if (!a.is_binary() || !b.is_binary()) {
      return false;
    }

    return (a > b) || (a == b);
  }

  template<int N>
  static inline bool operator<(const static_quad_value_bit_vector<N>& a,
  			       const static_quad_value_bit_vector<N>& b) {
    if (!a.is_binary() || !b.is_binary()) {
      return false;
    }

    if (a == b) { return false; }

    return !(a > b);
  }

  template<int N>
  static inline static_quad_value_bit_vector<1>
  andr(const static_quad_value_bit_vector<N>& a) {
    for (int i = 0; i < a.bitLength(); i++) {
      if (a.get(i) != 1) {
        return static_quad_value_bit_vector<1>(0);
      }
    }

    return static_quad_value_bit_vector<1>(1);
  }

  template<int N>
  static inline static_quad_value_bit_vector<1>
  orr(const static_quad_value_bit_vector<N>& a) {
    for (int i = 0; i < a.bitLength(); i++) {
      if (a.get(i) == 1) {
        return static_quad_value_bit_vector<1>(1);
      }
    }

    return static_quad_value_bit_vector<1>(0);
  }

  // static inline static_quad_value_bit_vector<N>
  // xorr(const static_quad_value_bit_vector<N>& a) {
  //   int numSet = 0;
  //   for (int i = 0; i < a.bitLength(); i++) {
  //     if (a.get(i) == 1) {
  //       numSet++;
  //     }
  //   }

  //   if ((numSet % 2) == 0) {
  //     return static_quad_value_bit_vector<N>(1, "0");
  //   }

  //   return static_quad_value_bit_vector<N>(1, "1");
  // }

  // static inline bool
  // signed_gt(const static_quad_value_bit_vector<N>& a,
  //           const static_quad_value_bit_vector<N>& b) {

  //   if (!a.is_binary() || !b.is_binary()) {
  //     return false;
  //   }

  //   assert(a.bitLength() == b.bitLength());

  //   int N = a.bitLength();

  //   // a negative b non-negative
  //   if ((a.get(N - 1) == 1) && (b.get(N - 1) == 0)) {
  //     return false;
  //   }

  //   // b negative a non-negative
  //   if ((b.get(N - 1) == 1) && (a.get(N - 1) == 0)) {
  //     return true;
  //   }

  //   // Both negative or both non-negative
  //   //if ((a.get(N - 1) == 1) && (b.get(N - 1) == 1)) {

  //   for (int i = N - 2; i >= 0; i--) {
  //     if (a.get(i) > b.get(i)) {
  // 	return true;
  //     }

  //     if (a.get(i) < b.get(i)) {
  // 	return false;
  //     }
  //   }

  //   return false;

  // }

  // static inline bool signed_gte(const static_quad_value_bit_vector<N>& a,
  // 				const static_quad_value_bit_vector<N>& b) {
  //   return (signed_gt(a, b)) || (a == b);
  // }

  // static inline
  // bv_uint64 get_shift_int(const static_quad_value_bit_vector<N>& shift_amount) {
  //   bv_uint64 shift_int = 0;
  //   if (shift_amount.bitLength() > 64) {
  //     assert(false);
  //   }

  //   else if (shift_amount.bitLength() > 32) {
  //     shift_int = shift_amount.to_type<bv_uint64>();
  //   }

  //   else if (shift_amount.bitLength() > 16) {
  //     shift_int = (bv_uint64) (shift_amount.to_type<bv_uint32>());
  //   }

  //   else if (shift_amount.bitLength() > 8) {
  //     shift_int = (bv_uint64) (shift_amount.to_type<bv_uint16>());
  //   } else {
  //     shift_int = (bv_uint64) (shift_amount.to_type<bv_uint8>());
  //   }

  //   //std::cout << "shift_int = " << shift_int << std::endl;
  //   assert(shift_int < 65);

  //   return shift_int;
  // }

  // static inline static_quad_value_bit_vector<N>
  // lshr(const static_quad_value_bit_vector<N>& a,
  //      const static_quad_value_bit_vector<N>& shift_amount) {

  //   if (!a.is_binary() || !shift_amount.is_binary()) {
  //     return unknown_bv(a.bitLength());
  //   }

  //   static_quad_value_bit_vector<N> res(a.bitLength());

  //   bv_uint64 shift_int = get_shift_int(shift_amount);

  //   if (shift_int == 0) {
  //     return a;
  //   }

  //   //unsigned char sign_bit = a.get(a.bitLength() - 1);
  //   for (uint i = a.bitLength() - 1; i >= shift_int; i--) {
  //     res.set(i - shift_int, a.get(i));
  //   }

  //   for (uint i = a.bitLength() - 1; i >= (a.bitLength() - shift_int); i--) {
  //     res.set(i, 0);
  //   }

  //   return res;
  // }

  // // Arithmetic shift right
  // static inline
  // static_quad_value_bit_vector<N>
  // ashr(const static_quad_value_bit_vector<N>& a,
  //      const static_quad_value_bit_vector<N>& shift_amount) {

  //   if (!a.is_binary() || !shift_amount.is_binary()) {
  //     return unknown_bv(a.bitLength());
  //   }

  //   if (shift_amount == static_quad_value_bit_vector<N>(shift_amount.bitLength(), 0)) {
  //     return a;
  //   }

  //   static_quad_value_bit_vector<N> res(a.bitLength());

  //   bv_uint64 shift_int = get_shift_int(shift_amount);

  //   quad_value sign_bit = a.get(a.bitLength() - 1);
  //   for (uint i = a.bitLength() - 1; i >= shift_int; i--) {
  //     res.set(i - shift_int, a.get(i));
  //   }

  //   int last_index = (int)a.bitLength() - shift_int;
  //   for (int i = a.bitLength() - 1; i >= last_index && i >= 0; i--) {
  //     res.set(i, sign_bit);
  //   }

  //   return res;
  // }

  // static inline
  // static_quad_value_bit_vector<N>
  // shl(const static_quad_value_bit_vector<N>& a,
  //     const static_quad_value_bit_vector<N>& shift_amount) {

  //   if (!a.is_binary() || !shift_amount.is_binary()) {
  //     return unknown_bv(a.bitLength());
  //   }

  //   static_quad_value_bit_vector<N> res(a.bitLength());

  //   bv_uint64 shift_int = get_shift_int(shift_amount);
  //   for (int i = shift_int; i < a.bitLength(); i++) {
  //     res.set(i, a.get(i - shift_int));
  //   }

  //   return res;
  // }

  // static inline
  // static_quad_value_bit_vector<N>
  // concat(const static_quad_value_bit_vector<N>& a,
  //        const static_quad_value_bit_vector<N>& b) {
  //   static_quad_value_bit_vector<N> res(a.bitLength() + b.bitLength());
  //   for (int i = 0; i < a.bitLength(); i++) {
  //     res.set(i, a.get(i));
  //   }
  //   for (int i = 0; i < ((int) b.bitLength()); i++) {
  //     res.set(i + a.bitLength(), b.get(i));
  //   }

  //   return res;
  // }

  // static inline
  // static_quad_value_bit_vector<N>
  // slice(const static_quad_value_bit_vector<N>& a,
  //       const int start,
  //       const int end) {
  //   static_quad_value_bit_vector<N> res(end - start);

  //   for (int i = 0; i < res.bitLength(); i++) {
  //     res.set(i, a.get(i + start));
  //   }
  //   return res;
  // }


  // static inline
  // static_quad_value_bit_vector<N>
  // extend(const static_quad_value_bit_vector<N>& a, const int extra_bits) {
  //   static_quad_value_bit_vector<N> res(a.bitLength() + extra_bits);
  //   for (int i = 0; i < a.bitLength(); i++) {
  //     res.set(i, a.get(i));
  //   }

  //   return res;
  // }

  template<int InWidth, int OutWidth>
  static inline
  static_quad_value_bit_vector<OutWidth>
  zero_extend(const int outWidth,
              const static_quad_value_bit_vector<InWidth>& in) {
    static_quad_value_bit_vector<OutWidth> res(0);
    for (uint i = 0; i < in.bitLength(); i++) {
      res.set(i, in.get(i));
    }

    return res;
  }

}
