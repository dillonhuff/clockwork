#pragma once

#include <cassert>
#include <deque>
#include <cmath>

#ifdef __VIVADO_SYNTH__

#include "hls_stream.h"
#include "ap_int.h"

#else

#include "static_quad_value_bit_vector.h"
#include <iostream>

#endif

using namespace std;

#define MOD_INC(x, N) ((x) == ((N) - 1) ? 0 : (x) + 1)

#define floord(x, d) ((x) / (d))

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

    T peek(int offset) {
      assert(offset >= 0);
      //cout << "Getting offset from top: " << offset << endl;
      //int top_addr = (write_addr + Depth) % Depth;
      //cout << "\t" << "Top at: " << top_addr << endl;
      // Note: This works
      //return vals[(write_addr + Depth + offset) % Depth];

      int addr = write_addr + Depth + offset;
      if (addr >= Depth) {
        // Wrap around
        int rem = (addr - Depth);
        addr = rem;
      }
      if (addr >= Depth) {
        int rem = (addr - Depth);
        addr = rem;
      }
      assert(addr < Depth);
      return vals[addr];
    }

    T back() {
      int addr = write_addr + Depth;
      if (addr >= Depth) {
        // Wrap around
        int rem = (addr - Depth);
        addr = rem;
      }
      assert(addr < Depth);
      return vals[addr];
    }

    void push(const T& val) {
      assert(write_addr < Depth);
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
    ap_int<Len> val;

    hw_uint(const int v) : val(v) {}
    hw_uint() : val(0) {}

    template<int S, int E_inclusive>
    hw_uint<E_inclusive - S + 1> extract() {
      hw_uint<E_inclusive - S + 1> extr;
      for (int i = S; i < E_inclusive + 1; i++) {
#pragma HLS unroll
        assert(i < Len);
        extr.val[i - S] = val[i];
      }
      return extr;
    }

    int to_int() {
      return val;
    }
    
    operator int() { return to_int(); }

#else

    bsim::static_quad_value_bit_vector<Len> val;

    hw_uint(const int v) : val(v) {}
    hw_uint() : val(0) {}

    template<int S, int E_inclusive>
      inline
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

#ifndef __VIVADO_SYNTH__
template<int Len>
std::ostream& operator<<(std::ostream& out, hw_uint<Len>& v) {
  out << v.val;
  return out;
}
#endif

template<int Len>
hw_uint<Len> operator/(const hw_uint<Len>& a, const hw_uint<Len>& b) {
#ifdef __VIVADO_SYNTH__
  hw_uint<Len> v;
  v.val = a.val + b.val;
  return v;
#else
  hw_uint<Len> res;
  res.val = bsim::add_general_width_bv(a.val, b.val);
  return res;
#endif
}
template<int Len>
hw_uint<Len> operator+(const hw_uint<Len>& a, const hw_uint<Len>& b) {
#ifdef __VIVADO_SYNTH__
  hw_uint<Len> v;
  v.val = a.val + b.val;
  return v;
#else
  hw_uint<Len> res;
  res.val = bsim::add_general_width_bv(a.val, b.val);
  return res;
#endif
}

template<int offset, int Len>
void set_at(hw_uint<Len>& i, const int value) {
#ifdef __VIVADO_SYNTH__
  for (int v = offset; v < offset + 32; v++) {
#pragma HLS unroll
    i.val[v] = ((value >> (v - offset)) & 1);
  }
#else
  for (int v = offset; v < offset + 32; v++) {
    i.val.set(v, bsim::quad_value((value >> (v - offset)) & 1));
  }
#endif
}

template<int offset, int Len>
void set_at(hw_uint<Len>& i, const hw_uint<Len>& value) {
#ifdef __VIVADO_SYNTH__
  for (int v = offset; v < offset + Len; v++) {
#pragma HLS unroll
    i.val[v] = value.val[v - offset];
  }
#else
  for (int v = offset; v < offset + Len; v++) {
    i.val.set(v, value.val.get(v - offset));
  }
#endif
}

template<int offset, int Len>
static inline
void set_at(int& i, const int value) {
#ifdef __VIVADO_SYNTH__

  *(&i) = value;
#else

  *(&i) = value;

#endif
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

    bool is_empty() const {
      return values.empty();
    }

#else

    deque<T> values;

    bool is_empty() const {
      return values.size() == 0;
    }

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

