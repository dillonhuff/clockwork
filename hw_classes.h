#pragma once

#include <cassert>
#include <deque>
#include <cmath>

#ifdef __VIVADO_SYNTH__

#include "hls_stream.h"

#else

#include "static_quad_value_bit_vector.h"
#include <iostream>

#endif

using namespace std;

#define MOD_INC(x, N) ((x) == ((N) - 1) ? 0 : (x) + 1)

template<int Depth>
class hw_mem {
  public:

    int vals[Depth];

    int read(const int addr) {
      return vals[addr];
    }

    void write(const int addr, const int val) {
      vals[addr] = val;
    }
};

template<typename T, int Depth>
class fifo {
  public:

    int write_addr;
    int read_addr;

    T vals[Depth];

    fifo() : read_addr(0), write_addr(0) {}

    T back() {
      int addr = write_addr + Depth;
      if (addr >= Depth) {
        // Wrap around
        int rem = (addr - Depth);
        addr = rem;
      }
      return vals[addr];
    }

    void push(const T& val) {
      vals[write_addr] = val;
      write_addr = MOD_INC(write_addr, Depth);
    }
};

template<int Depth>
class delay_sr {
  public:

    int write_addr;
    int read_addr;
    bool empty;

    int vals[Depth];

    delay_sr() : read_addr(0), write_addr(0), empty(true) {}

    int peek(const int offset) {
      int addr = read_addr - offset;
      if (addr < 0) {
        // Wrap around
        int rem = offset - read_addr;
        addr = Depth - rem;
      }
      int val = vals[addr];
      //abs(read_addr - offset) % Depth];
      //cout << "Reading data " << val << " at offset: " << offset << endl;
      return val;
    }

    void push(const int val) {
      empty = false;
      vals[write_addr] = val;
      read_addr = write_addr;
      write_addr = MOD_INC(write_addr, Depth);
      //cout << "------------------------------" << endl;
      //cout << "After write read_addr  = " << read_addr << endl;
      //cout << "After write write_addr = " << write_addr<< endl;
    }
};

template<int Depth>
class delay_fifo {
  public:

    int write_addr;
    int read_addr;
    bool empty;

    int vals[Depth];

    delay_fifo() : write_addr(0), read_addr(0), empty(true) {}

    int pop() {
      int val = vals[read_addr];
      read_addr = read_addr == (Depth - 1) ? 0 : read_addr + 1;
      if (read_addr == write_addr) {
        empty = true;
      }
      return val;
    }

    void push(const int val) {
      empty = false;
      vals[write_addr] = val;
      write_addr = write_addr == (Depth - 1) ? 0 : write_addr + 1;
    }
};

template<int Len>
class hw_uint {
  public:

#ifdef __VIVADO_SYNTH__
#else

    bsim::static_quad_value_bit_vector<Len> val;

    hw_uint(const int v) : val(v) {}
    hw_uint() : val(0) {}

    template<int S, int E_inclusive>
    hw_uint<E_inclusive - S + 1> extract() {
      hw_uint<E_inclusive - S + 1> extr;
      for (int i = S; i < E_inclusive + 1; i++) {
        assert(i < Len);
        extr.val.set(i - S, val.get(i));
      }
      return extr;
    }

    int to_int() {
      return val.template to_type<int>();
    }

    operator int() { return to_int(); }

#endif // __VIVADO_SYNTH__
};

template<int Len>
std::ostream& operator<<(std::ostream& out, hw_uint<Len>& v) {
  out << v.val;
  return out;
}

template<int Len>
hw_uint<Len> operator+(const hw_uint<Len>& a, const hw_uint<Len>& b) {
  hw_uint<Len> res;
  res.val = bsim::add_general_width_bv(a.val, b.val);
  return res;
}

template<int offset, int Len>
void set_at(hw_uint<Len>& i, const int value) {
  for (int v = offset; v < offset + 32; v++) {
    i.val.set(v, bsim::quad_value((value >> (v - offset)) & 1));
  }
}

template<int offset, int Len>
void set_at(hw_uint<Len>& i, const hw_uint<Len>& value) {
  assert(offset == 0);
  for (int v = offset; v < offset + Len; v++) {
    i.val.set(v, value.val.get(v - offset));
  }
}

template<int offset, int Len>
static inline
void set_at(int& i, const int value) {
  *(&i) = value;
}

template<typename T>
class HWStream {
  public:

#ifdef __VIVADO_SYNTH__

    hls::stream<T> values;

    void write(const int v) {
      return values.write(v);
    }

    T read() {
      return values.read();
    }

#else

    deque<T> values;

    void write(const T& v) {
      return values.push_front(v);
    }

    T read() {
      assert(values.size() > 0);
      int b = values.back();
      values.pop_back();
      return b;
    }


#endif // __VIVADO_SYNTH__
};

template<typename T>
using InputStream = HWStream<T>;

template<typename T>
using OutputStream = HWStream<T>;

