#include "codegen.h"

using namespace minihls;

module_type* sr_buffer(block& blk, const int width, const int depth) {
  string name = "sr_buffer_" + to_string(width) + "_" + str(depth);
  if (blk.has_module_type(name)) {
    return blk.get_module_type(name);
  }

  int addr_width = clog2(depth);
  vector<port> pts{
    inpt("raddr", addr_width),
    inpt("wen", 1),
    inpt("wdata", width),
    inpt("clk", 1),
    inpt("rst", 1),
    outpt("rdata", width)};

  ostringstream ss;
  ss << tab(1) << "localparam DEPTH = " + str(depth) + ";" << endl << endl;

  ss << tab(1) << "reg [" << width - 1 << ":0] data [" << depth - 1 << ":0];" << endl << endl;
  ss << tab(1) << "reg [" << width - 1 << ":0] rdata_d;" << endl << endl;
  ss << tab(1) << "reg [" << addr_width - 1 << ":0] waddr;" << endl << endl;

  ss << tab(1) << "assign rdata = rdata_d;" << endl << endl;
  ss << tab(1) << "always @(posedge clk) begin" << endl;

  ss << tab(2) << "if (rst) begin" << endl;
  ss << tab(3) << "waddr <= 0;" << endl;
  ss << tab(2) << "end else begin" << endl;

  ss << tab(3) << "if (wen) begin" << endl;
  ss << tab(4) << "data[waddr] <= wdata;" << endl;
  ss << tab(4) << "waddr <= (waddr + 1) % DEPTH;" << endl;
  ss << tab(3) << "end" << endl << endl;

  ss << tab(3) << "rdata_d <= data[(waddr + raddr) % DEPTH];" << endl;

  ss << tab(2) << "end" << endl;
  ss << tab(1) << "end" << endl;

  string body = ss.str();

  return blk.add_module_type(name, pts, body);
}

