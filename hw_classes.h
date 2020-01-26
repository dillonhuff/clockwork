#pragma once

#include <cassert>
#include <deque>
#include <iostream>
#include <cmath>

#ifdef __VIVADO_SYNTH__
#include "hls_stream.h"
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

template<int Depth>
class fifo {
  public:

    int write_addr;
    int read_addr;

    int vals[Depth];

    fifo() : read_addr(0), write_addr(0) {}

    int back() {
      int addr = write_addr + Depth;
      if (addr >= Depth) {
        // Wrap around
        int rem = (addr - Depth);
        addr = rem;
      }
      return vals[addr];
    }

    void push(const int val) {
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

    deque<int> values;

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
//typedef HWStream InputStream;
//typedef HWStream OutputStream;

