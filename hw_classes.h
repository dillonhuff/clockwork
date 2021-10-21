#pragma once

#include <cassert>
#include <deque>
#include <cmath>
#include <stdint.h>

#ifdef __VIVADO_SYNTH__

// WARNING: Enabling this flag (AP_INT_MAX_W)
// can make Vivado HLS take a *very* long
// time even for tiny designs. Avoid it
// unless absolutely necessary.
//#define AP_INT_MAX_W 16384
#include "ap_int.h"

#include "hls_stream.h"

#else

#include "static_quad_value_bit_vector.h"
#include <iostream>

#endif

using namespace std;

#define MOD_INC(x, N) ((x) == ((N) - 1) ? 0 : (x) + 1)

static inline
int int_floor_div(const int num, const int denom) {
  if (num >= 0) {
    return num / denom;
  } else {
    return -1*(-num / denom);
  }
}

// TODO: Replace this with something more sound
//#define floord(x, d) ((int) floor((x) / (float) (d)))
#define floord(x, d) int_floor_div((x), (d))
//#define floord(x, d) ((x) / (d))

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

#ifdef __VIVADO_SYNTH__
    T vals[Depth];
#else
    T* vals;
#endif // __VIVADO_SYNTH__

    fifo() : read_addr(0), write_addr(0) {
#ifdef __VIVADO_SYNTH__
#else
      vals = (T*)malloc(sizeof(T)*Depth);
      for (int i = 0; i < Depth; i++) {
        vals[i] = 0;
      }
#endif // __VIVADO_SYNTH__
    }

    ~fifo() {
    }

    T peek(int offset) {
//#ifdef __VIVADO_SYNTH__
//#pragma HLS dependence array inter false
//#endif //__VIVADO_SYNTH__

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
//#ifdef __VIVADO_SYNTH__
//#pragma HLS dependence array inter false
//#endif //__VIVADO_SYNTH__
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
//#ifdef __VIVADO_SYNTH__
//#pragma HLS dependence array inter false
//#endif //__VIVADO_SYNTH__
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

    template<int width, int index>
      hw_uint<width> get() const {
        return extract<width*index, width*(index + 1) - 1>();
      }

#ifdef __VIVADO_SYNTH__
    ap_uint<Len> val;

    hw_uint(const hw_uint<Len>& v) : val(v.val) {}
    hw_uint(const int v) : val(v) {}
    hw_uint() {}
    //hw_uint() : val(0) {}

    template<int S, int E_inclusive>
    hw_uint<E_inclusive - S + 1> extract() const {
      hw_uint<E_inclusive - S + 1> extr;
      for (int i = S; i < E_inclusive + 1; i++) {
#pragma HLS unroll
        assert(i < Len);
        extr.val[i - S] = val[i];
      }
      return extr;
    }

    int to_int() const {
      return val;
    }

    operator int() const { return to_int(); }

#else

    bsim::static_quad_value_bit_vector<Len> val;

    hw_uint(const hw_uint<Len>& v) : val(v.val) {}
    hw_uint(const int v) : val(v) {}
    hw_uint(const string& v) : val(v) {}
    hw_uint() {}
    //hw_uint() : val(0) {}

    template<int S, int E_inclusive>
      //inline
    hw_uint<E_inclusive - S + 1> extract() const {
      hw_uint<E_inclusive - S + 1> extr;
      for (int i = S; i < E_inclusive + 1; i++) {
        assert(i < Len);
        extr.val.set(i - S, val.get(i));
      }
      return extr;
    }

    int to_int() const {
      return val.template to_type<int>();
    }

    operator int() const { return to_int(); }

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
hw_uint<Len> operator*(const hw_uint<Len>& a, const hw_uint<Len>& b) {
#ifdef __VIVADO_SYNTH__
  hw_uint<Len> v;
  v.val = a.val * b.val;
  return v;
#else
  hw_uint<Len> res;
  res.val = bsim::mul_general_width_bv(a.val, b.val);
  return res;
#endif
}

template<int Len>
hw_uint<Len> operator/(const hw_uint<Len>& a, const hw_uint<Len>& b) {
#ifdef __VIVADO_SYNTH__
  hw_uint<Len> v;
  v.val = a.val / b.val;
  return v;
#else
  hw_uint<Len> res;
  // TODO: Fix this!!!
  res.val = bsim::add_general_width_bv(a.val, b.val);
  return res;
#endif
}

template<int Len>
bool operator==(const hw_uint<Len>& a, const hw_uint<Len>& b) {
#ifdef __VIVADO_SYNTH__
  return a.val == b.val;
#else
  //hw_uint<Len> res;
  //res.val = a.val == b.val;
  return a.val == b.val;
#endif
}

template<int Len>
hw_uint<Len> operator-(const hw_uint<Len>& a, const hw_uint<Len>& b) {
#ifdef __VIVADO_SYNTH__
  hw_uint<Len> v;
  v.val = a.val - b.val;
  return v;
#else
  hw_uint<Len> res;
  res.val = bsim::sub_general_width_bv(a.val, b.val);
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

//template<int offset, int Len>
//void set_at(hw_uint<Len>& i, const int value) {
//#ifdef __VIVADO_SYNTH__
  //for (int v = offset; v < offset + 32; v++) {
//#pragma HLS unroll
    //i.val[v] = ((value >> (v - offset)) & 1);
  //}
//#else
  ////cout << "Setting " << i << " to be " << value << " at: " << offset << endl;
  //for (int v = offset; v < offset + 32; v++) {
    //i.val.set(v, bsim::quad_value((value >> (v - offset)) & 1));
  //}
//#endif
//}

template<int offset, int Len, int OtherLen>
void set_at(hw_uint<Len>& i, const hw_uint<OtherLen>& value) {
#ifdef __VIVADO_SYNTH__
  for (int v = offset; v < offset + OtherLen; v++) {
#pragma HLS unroll
    i.val[v] = value.val[v - offset];
  }
#else
  //assert(false);
  for (int v = offset; v < offset + OtherLen; v++) {
    i.val.set(v, value.val.get(v - offset));
  }
#endif
}

template<int offset, int Len>
static
//inline
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

    void write(const T& v) {
      return values.write(v);
    }

    T read() {
      return values.read();
    }

    bool is_empty() {
      return values.empty();
    }

#else


    std::string name;
    int reads, writes;

    deque<T> values;

    int num_waiting() const {
      return values.size();
    }

    bool is_empty() const {
      return values.size() == 0;
    }

    void write(const T& v) {
      //cout << "Inserting: " << (hw_uint<64>) v << " into hwstream" << endl;
      writes++;
      return values.push_front(v);
    }

    T read() {
      if (values.size() == 0) {
        std::cout << "Error: " << name << " is empty during read" << std::endl;
        std::cout << "\tReads : " << reads << endl;
        std::cout << "\tWrites: " << writes << endl;
      }
      assert(values.size() > 0);
      T b = values.back();
      values.pop_back();
      reads++;
      return b;
    }


#endif // __VIVADO_SYNTH__
};

template<int T>
hw_uint<T> int8(const hw_uint<T>& in) {
  return in;
}

template<int T>
hw_uint<T> uint8(const hw_uint<T>& in) {
  return in;
}
template<int T>
hw_uint<T> int32(const hw_uint<T>& in) {
  return in;
}

template<int burst_width>
void burst_read(hw_uint<burst_width>* input,
    HWStream<hw_uint<burst_width> >& v,
    const int num_transfers) {

  hw_uint<burst_width> burst_reg;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

template<int burst_width>
void burst_write(hw_uint<burst_width>* output,
    HWStream<hw_uint<burst_width> >& v,
    const int num_transfers) {

  hw_uint<burst_width> burst_reg;

  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

