#include "codegen.h"

using namespace minihls;

#define US + "_" + 

module_type* sr_buffer(block& blk, const int width, const int depth) {
  string name = "sr_buffer_" + to_string(width) + "_" + minihls::str(depth);
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
  ss << minihls::tab(1) << "localparam DEPTH = " + minihls::str(depth) + ";" << endl << endl;

  ss << minihls::tab(1) << "reg [" << width - 1 << ":0] data [" << depth - 1 << ":0];" << endl << endl;
  ss << minihls::tab(1) << "reg [" << width - 1 << ":0] rdata_d;" << endl << endl;
  ss << minihls::tab(1) << "reg [" << addr_width - 1 << ":0] waddr;" << endl << endl;

  ss << minihls::tab(1) << "assign rdata = rdata_d;" << endl << endl;
  ss << minihls::tab(1) << "always @(posedge clk) begin" << endl;

  ss << minihls::tab(2) << "if (rst) begin" << endl;
  ss << minihls::tab(3) << "waddr <= 0;" << endl;
  ss << minihls::tab(2) << "end else begin" << endl;

  ss << minihls::tab(3) << "if (wen) begin" << endl;
  ss << minihls::tab(4) << "data[waddr] <= wdata;" << endl;
  ss << minihls::tab(4) << "waddr <= (waddr + 1) % DEPTH;" << endl;
  ss << minihls::tab(3) << "end" << endl << endl;

  ss << minihls::tab(3) << "rdata_d <= data[(waddr + raddr) % DEPTH];" << endl;

  ss << minihls::tab(2) << "end" << endl;
  ss << minihls::tab(1) << "end" << endl;

  string body = ss.str();

  // Instructions to write front and read back
  auto sr_type = blk.add_module_type(name, pts, body);
  string write_back = name US "write_back" US "instr";
  auto wb = blk.add_instruction_type(write_back);

  string wb_binding_name = name US "write_back_binding";
  auto write_back_binding =
    blk.add_instruction_binding(name,
        wb,
        sr_type,
        "",
        {{0, "wdata"}});
  write_back_binding->latency = 1;
  write_back_binding->en = "wen";

  return sr_type;
}

minihls::module_type* gen_bank(minihls::block& blk, const bank& bnk) {

  int depth = bnk.maxdelay + 1;
  int width = 32;

  string name = "bank_" + to_string(width) + "_" + minihls::str(depth);
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
  ss << minihls::tab(1) << "localparam DEPTH = " + minihls::str(depth) + ";" << endl << endl;

  ss << minihls::tab(1) << "reg [" << width - 1 << ":0] data [" << depth - 1 << ":0];" << endl << endl;
  ss << minihls::tab(1) << "reg [" << width - 1 << ":0] rdata_d;" << endl << endl;
  ss << minihls::tab(1) << "reg [" << addr_width - 1 << ":0] waddr;" << endl << endl;

  ss << minihls::tab(1) << "assign rdata = rdata_d;" << endl << endl;
  ss << minihls::tab(1) << "always @(posedge clk) begin" << endl;

  ss << minihls::tab(2) << "if (rst) begin" << endl;
  ss << minihls::tab(3) << "waddr <= 0;" << endl;
  ss << minihls::tab(2) << "end else begin" << endl;

  ss << minihls::tab(3) << "if (wen) begin" << endl;
  ss << minihls::tab(4) << "data[waddr] <= wdata;" << endl;
  ss << minihls::tab(4) << "waddr <= (waddr + 1) % DEPTH;" << endl;
  ss << minihls::tab(3) << "end" << endl << endl;

  ss << minihls::tab(3) << "rdata_d <= data[(waddr + raddr) % DEPTH];" << endl;

  ss << minihls::tab(2) << "end" << endl;
  ss << minihls::tab(1) << "end" << endl;

  string body = ss.str();

  return blk.add_module_type(name, pts, body);
}

minihls::instruction_type* reduce(minihls::context& c,
    map<string, module_type*>& buffers,
    vector<string>& index_variables) {
  assert(false);
  return nullptr;
}
