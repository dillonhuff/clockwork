#pragma once

#include <cassert>
#include <deque>

using namespace std;

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
class delay_sr {
  public:

    int write_addr;
    bool empty;

    int vals[Depth];

    delay_sr() : write_addr(0), empty(true) {}

    int pop(const int offset) {
      int val = vals[(write_addr - offset) % Depth];
      return val;
    }

    void push(const int val) {
      empty = false;
      vals[write_addr] = val;
      write_addr = write_addr == (Depth - 1) ? 0 : write_addr + 1;
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

