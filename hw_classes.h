#pragma once

#include <cassert>
#include <deque>
#include <iostream>
#include <cmath>

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

    std::deque<int> values;

    //int write_addr;
    //int read_addr;
    //bool empty;

    //int vals[Depth];

    //fifo() : read_addr(0), write_addr(0), empty(true) {}

    //int peek() {
      //int val = vals[read_addr];
      //if (!empty) {
        //read_addr = MOD_INC(read_addr, Depth);
      //}
      //empty = read_addr == write_addr;
      //return val;
    //}

    int back() {
      if (values.size() == Depth) {
        return values.back();
      }
      return -212;
    }

    void push(const int val) {
      values.push_front(val);
      if (values.size() == Depth + 1) {
        values.pop_back();
      }

      //vals[write_addr] = val;
      //write_addr = MOD_INC(write_addr, Depth);
      //empty = false;
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

class HWStream {
  public:

    deque<int> values;

    void write(const int v) {
      return values.push_front(v);
    }

    int read() {
      assert(values.size() > 0);
      int b = values.back();
      values.pop_back();
      return b;
    }
};

typedef HWStream InputStream;
typedef HWStream OutputStream;

