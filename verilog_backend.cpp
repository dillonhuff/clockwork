#include "verilog_backend.h"
//SET SIM to 0 for vivado synthesis
#define SIM 0

string end_delay_with(ostream& out, const int width, const std::string& wire_in, prog& prg, const int delay) {
  vector<string> wires{wire_in};
  for (int d = 0; d < delay; d++) {
    string w = prg.un("end_delay_wire_");
    out << tab(1) << "logic [" << (width - 1) << ":0] " << w << ";" << endl;
    wires.push_back(w);
  }
  assert(wires.size() == delay + 1);
  reverse(wires);
  out << tab(1) << "always @(posedge clk) begin" << endl;
  for (int d = 1; d < delay + 1; d++) {
    out << tab(2) << wires.at(d) << " <= " << wires.at(d - 1) << ";" << endl;
  }
  out << tab(1) << "end" << endl;
  return wires.at(0);
}

string delay_wire(ostream& out, const int width, const std::string& wire_in, prog& prg, const int delay) {
  vector<string> wires{wire_in};
  for (int d = 0; d < delay; d++) {
    //string w = prg.un(wire_in);
    string w = prg.un("delay_wire_");
    out << tab(1) << "logic [" << (width - 1) << ":0] " << w << ";" << endl;
    wires.push_back(w);
  }
  assert(wires.size() == delay + 1);
  out << tab(1) << "always @(posedge clk) begin" << endl;
  for (int d = 1; d < delay + 1; d++) {
    out << tab(2) << wires.at(d) << " <= " << wires.at(d - 1) << ";" << endl;
  }
  out << tab(1) << "end" << endl;
  return wires.back();
}

void print_always_header(CodegenOptions& options, ostream& out) {
  if (options.rtl_options.global_signals.synchronous_reset) {
    out << tab(1) << "always @(posedge clk) begin" << endl;
  } else {
    out << tab(1) << "always @(posedge clk or negedge rst_n) begin" << endl;
  }
}

void print_reset_if(CodegenOptions& options, ostream& out) {
  if (options.rtl_options.global_signals.synchronous_reset) {
    out << tab(2) << "if (rst_n) begin" << endl;
  } else {
    out << tab(2) << "if (~rst_n) begin" << endl;
  }
}

std::string codegen_verilog(const std::string& ctrl_vars, isl_aff* const aff) {
  vector<string> terms;
  if (!is_zero(const_coeff(aff))) {
    terms.push_back(str(const_coeff(aff)));
  }
  for (int i = 0; i < num_in_dims(aff); i++) {
    if (!is_zero(get_coeff(aff, i))) {
      string cf = str(get_coeff(aff, i));
      string rn = ctrl_vars + brackets(str(i));
      terms.push_back(cf + "*" + rn);
    }
  }

  for (int d = 0; d < num_div_dims(aff); d++) {
    auto v = isl_aff_get_coefficient_val(aff, isl_dim_div, d);
    if (!is_zero(v)) {

      isl_aff * a = isl_aff_get_div(aff, d);
      isl_val * denom = isl_aff_get_denominator_val(a);
      int denom_int = to_int( denom);
      auto denom_str = str(denom);
      auto astr = codegen_verilog(ctrl_vars, isl_aff_scale_val(a, denom));

      assert(isl_val_is_int(v));

      if(ceil(log2(denom_int)) == log2(denom_int))
      {
      terms.push_back(parens(str(v) + "*" + "(" + astr + " >> " + str(log2(denom_int)) + ")"));


      } else{
      terms.push_back(parens(str(v) + "*" + "$rtoi($floor(" + astr + " / " + denom_str + "))"));

      }
    }
  }
  if (terms.size() == 0) {
    return "0";
  }
  string res_str = sep_list(terms, "(", ")", " + ");
  return parens(res_str);
}

vector<string> generate_verilog_addr_components(const std::string& pt, bank& bnk, UBuffer& buf) {
  string ctrl_vars = buf.container_bundle(pt) + "_ctrl_vars_fsm_out";

  vector<int> mins;
  for (int i = 0; i < buf.logical_dimension(); i++) {
    auto s = project_all_but(to_set(bnk.rddom), i);
    auto min = to_int(lexminval(s));
    mins.push_back(min);
  }


  isl_map* m = to_map(buf.access_map.at(pt));
  auto svec = isl_pw_multi_aff_from_map(m);
  vector<pair<isl_set*, isl_multi_aff*> > pieces =
    get_pieces(svec);
  assert(pieces.size() == 1);

  vector<string> domains;
  vector<string> addr_vec_out;
  for (auto piece : pieces) {
    vector<string> addr_vec;
    isl_multi_aff* ma = piece.second;
    for (int d = 0; d < isl_multi_aff_dim(ma, isl_dim_set); d++) {
      isl_aff* aff = isl_multi_aff_get_aff(ma, d);
      addr_vec.push_back(codegen_verilog(ctrl_vars, aff));
    }

    for (int i = 0; i < buf.logical_dimension(); i++) {
      string item = "(" + addr_vec.at(i) + " - " + str(mins.at(i)) + ")";
      addr_vec_out.push_back(item);
    }

    string addr = sep_list(addr_vec_out, "", "", " + ");
  }

  return addr_vec_out;
}

string generate_linearized_verilog_inner_bank_offset(const std::string& pt, vector<int>& banking, bank& bnk, UBuffer& buf) {
  auto comps = generate_verilog_addr_components(pt, bnk, buf);
  assert(comps.size() == banking.size());
  vector<int> lengths;
  for (int i = 0; i < buf.logical_dimension(); i++) {
    auto s = project_all_but(to_set(bnk.rddom), i);
    auto max = to_int(lexmaxval(s));
    auto min = to_int(lexminval(s));
    int length = max - min + 1;
    lengths.push_back(length);
  }
  auto strs = strides(lengths);

  vector<string> terms;
  for (int i = 0; i < comps.size(); i++) {
    string comp = "(" + comps.at(i) + " / " + str(banking.at(i)) + ")";
    string stride = str(strs.at(i));
    terms.push_back(parens(comp + "*" + stride));
  }
  return sep_list(terms, "(", ")", " + ");
}

string generate_linearized_verilog_addr(
    const std::vector<int>& bank_factors,
    const std::string& pt,
    bank& bnk,
    UBuffer& buf) {

  isl_set* dom = to_set(bnk.rddom);

  string ctrl_vars = buf.container_bundle(pt) + "_ctrl_vars";

  isl_map* m = to_map(buf.access_map.at(pt));
  isl_aff* flattened = flatten(bank_factors, get_multi_aff(m), dom);

  return codegen_verilog(ctrl_vars, flattened);
}

string generate_linearized_verilog_addr(const std::string& pt, bank& bnk, UBuffer& buf) {
  isl_set* dom = to_set(bnk.rddom);

  string ctrl_vars = buf.container_bundle(pt) + "_ctrl_vars";

  isl_map* m = to_map(buf.access_map.at(pt));
  isl_aff* flattened = flatten(get_multi_aff(m), dom);

  return codegen_verilog(ctrl_vars, flattened);
}

void generate_verilog_for_bank_storage(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank) {

  auto name = bank.name;
  auto pt_type_string = bank.pt_type_string;
  auto read_delays = bank.read_delays;
  auto num_readers = bank.num_readers;
  auto maxdelay = bank.maxdelay;
  auto layout = bank.extract_layout();

  //out << "struct " << name << "_cache" <<  " {" << endl;
  out << "\t// RAM Box: " << layout << endl;

  //C array with read and write method
  if (bank.tp == INNER_BANK_OFFSET_LINEAR) {
    auto partitions =
      bank.get_partitions();
    int partition_size = partitions.size();
    //add a ram capacity compute pass is different from stack bank
    int capacity = 1;
    auto dsets = get_sets(bank.rddom);
    int dims = dsets.size() > 0 ? num_dims(pick(get_sets(bank.rddom))) : 0;
    for (int i = 0; i < dims; i++) {
      auto s = project_all_but(to_set(bank.rddom), i);
      auto min = to_int(lexminval(s));
      auto max = to_int(lexmaxval(s));
      int length = max - min + 1;
      capacity *= length;
    }

    out << "\t// Capacity: " << capacity << endl;
    out << tab(1) << "logic [15:0] " << " RAM [" << capacity - 1 << ":0];" << endl;

  } else {
    assert(false);
  }
}

void print_embarassing_banks_selector(std::ostream& out, const map<int, int>& partitioned_dimension_sizes, UBuffer& buf) {

  out << endl;
  vector<string> port_decls{"input logic [" + str(CONTROLPATH_WIDTH) + "*" + str(buf.logical_dimension()) + " - 1 :0] d", "output logic [" + str(CONTROLPATH_WIDTH - 1) + ":0] out"};
  out << "module " << buf.name << "_embarassing_bank_selector(" << comma_list(port_decls) << ");" << endl;

  map<int, string> bank_strides;
  int stride = 1;
  for (auto p : partitioned_dimension_sizes) {
    bank_strides[p.first] = (str(stride));
    stride *= p.second;
  }

  vector<string> terms{"0"};
  for (auto p : partitioned_dimension_sizes) {
    int i = p.first;
    string var = "d[" + str((i + 1)*CONTROLPATH_WIDTH - 1) + ":" + str(i*CONTROLPATH_WIDTH) + "]";
    out << tab(1) << "logic [" << CONTROLPATH_WIDTH - 1 << ":0] bank_index_" << i << ";" << endl;
    out << tab(1) << "assign " << "bank_index_" << i << " = " << "(" << var << ");" << endl;
    terms.push_back("bank_index_" + str(i) + "*" + map_find(i, bank_strides));
  }

  out << tab(1) << "assign out = " << sep_list(terms, "", "", "+") << ";" << endl << endl;

  out << "endmodule" << endl << endl;
}

void print_cyclic_banks_selector(std::ostream& out, const vector<int>& bank_factors, UBuffer& buf) {

  assert(bank_factors.size() == buf.logical_dimension());

  vector<string> vars = {};
  vector<string> vars1 = {};

  out << endl;
  vector<string> port_decls{"input logic [" + str(CONTROLPATH_WIDTH) + "*" + str(bank_factors.size()) + " - 1 :0] d", "output logic [" + str(CONTROLPATH_WIDTH - 1) + ":0] out"};
  out << "module " << buf.name << "_bank_selector(" << comma_list(port_decls) << ");" << endl;

  vector<string> bank_strides;
  int stride = 1;
  for (auto p : bank_factors) {
    bank_strides.push_back(str(stride));
    stride *= p;
  }
  int i = 0;
  vector<string> terms;
  for (auto p : bank_factors) {
    string var = "d[" + str((i + 1)*CONTROLPATH_WIDTH - 1) + ":" + str(i*CONTROLPATH_WIDTH) + "]";
    out << tab(1) << "logic [" << CONTROLPATH_WIDTH - 1 << ":0] bank_index_" << i << ";" << endl;
    out << tab(1) << "assign " << "bank_index_" << i << " = " << "(" << var << " % " << p << ");" << endl;
    terms.push_back("bank_index_" + str(i) + "*" + bank_strides.at(i));
    i++;
  }

  out << tab(1) << "assign out = " << sep_list(terms, "", "", "+") << ";" << endl << endl;

  out << "endmodule" << endl << endl;
}

string print_embarassing_banks_inner_bank_offset_func(UBuffer& buf, vector<string> vars, vector<int> capacities, map<int, int> partitioned_dimension_extents)
{
 int capacity_prod = 1;
 vector<string> vars1;
  for(int i = 0; i < buf.logical_dimension(); i++) {
    if (!contains_key(i, partitioned_dimension_extents)) {
      vars1.push_back("(" + vars[i] + ")*" + to_string(capacity_prod));
      capacity_prod *= capacities[i];
    }
  }

  string func = sep_list(vars1,"(",")","+");
  cout << func << endl;
  return func;

}
string print_cyclic_banks_inner_bank_offset_func(UBuffer& buf, vector<string> vars, vector<int> capacities, vector<int> bank_factors)
{
 int capacity_prod = 1;
 vector<string> vars1;
  for(int i = 0; i < buf.logical_dimension(); i ++)
  {
      if(ceil(log2(bank_factors[i])) == log2(bank_factors[i]))
      {
          cout << vars[i] << endl;
      vars1.push_back("(" + vars[i] + ">>" + to_string((int)log2(bank_factors[i])) + ")*" + to_string(capacity_prod));
      } else{
      vars1.push_back("$rtoi($floor(" + vars[i] + "/ " + to_string(bank_factors[i]) + "))*" + to_string(capacity_prod));

      }
      capacity_prod *= capacities[i];
  }
          //assert(false);

    string func = sep_list(vars1,"(",")","+");
  cout << func << endl;
  //assert(false);
  return func;

}

void print_embarassing_banks(std::ostream& out, const map<int, int>& partitioned_dimension_extents, UBuffer& buf) {
  bank bnk = buf.compute_bank_info();
  int num_banks = 1;
  for (auto ent : partitioned_dimension_extents) {
    num_banks *= ent.second;
  }
  out << tab(1) << "// # of banks: " << num_banks << endl;

  int capacity = 1;
  auto dsets = get_sets(bnk.rddom);
  int dims = dsets.size() > 0 ? num_dims(pick(get_sets(bnk.rddom))) : 0;
  for (int i = 0; i < dims; i++) {
    if (!contains_key(i, partitioned_dimension_extents)) {
      auto s = project_all_but(to_set(bnk.rddom), i);
      auto min = to_int(lexminval(s));
      auto max = to_int(lexmaxval(s));
      int length = max - min + 1;
      capacity *= length;
    }
  }

  for (int i = 0; i < num_banks; i++) {
    out << tab(1) << "logic [" << CONTROLPATH_WIDTH - 1 << ":0] " << " bank_" << i << " [" << capacity << "];" << endl;
  }
}

vector<int> print_cyclic_banks(std::ostream& out, const vector<int>& bank_factors, bank& bnk) {
  int num_banks = card(bank_factors);
  out << tab(1) << "// # of banks: " << num_banks << endl;
  for (auto f : bank_factors) {
    cout << tab(1) << f << endl;
    assert(f > 0);
  }

  int capacity = 1;
  vector<int> capacities;
  auto dsets = get_sets(bnk.rddom);
  int dims = dsets.size() > 0 ? num_dims(pick(get_sets(bnk.rddom))) : 0;
  for (int i = 0; i < dims; i++) {
    auto s = project_all_but(to_set(bnk.rddom), i);
    auto min = to_int(lexminval(s));
    auto max = to_int(lexmaxval(s));
    int length = max - min + 1;
    length = ((length - 1) / bank_factors[i]) + 1;
    capacity *= length;
    capacities.push_back(length);
  }

  vector<int> current_index;

  for (int i = 0; i < num_banks; i++) {
    out << tab(1) << "logic [" << CONTROLPATH_WIDTH - 1 << ":0] " << "bank_" << i << " [" << capacity << "];" << endl;
  }

  return capacities;
}

vector<int> cyclic_banking(prog& prg, UBuffer& buf, schedule_info& info) {
  vector<int> bank_factors;
  for (int i = 0; i < buf.logical_dimension(); i++) {
    bank_factors.push_back(2);
  }

  return bank_factors;
}

int bank_folding_factor(const vector<int>& bank_factors, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  isl_map* bank_func = cyclic_function(buf.ctx, buf.name, bank_factors);

  bank bnk = buf.compute_bank_info();
  vector<int> lengths;
  for (int i = 0; i < buf.logical_dimension(); i++) {
    auto s = project_all_but(to_set(bnk.rddom), i);
    auto max = to_int(lexmaxval(s));
    auto min = to_int(lexminval(s));
    int length = max - min + 1;
    lengths.push_back(length);
  }
  auto strs = strides(lengths);

  cout << "Strides..." << endl;
  for (auto s : strs) {
    cout << tab(1) << s << endl;
  }

  cout << endl;
  cout << "Terms" << endl;
  vector<string> terms;
  for (int i = 0; i < buf.logical_dimension(); i++) {
    string var = "d" + str(i);
    string fold = "floor(" + var + " / "  + str(bank_factors.at(i)) + ")" + "*" + str(strs.at(i));
    cout << tab(1) << fold << endl;
    terms.push_back(fold);
  }
  vector<string> dvs;
  for (int i = 0; i < (int) bank_factors.size(); i++) {
    dvs.push_back("d" + str(i));
  }

  string aff_str = curlies("Bank" + sep_list(dvs, "[", "]", ", ") + " -> " + brackets(parens(sep_list(terms, "", "", " + "))));
  cout << "aff_str = " << aff_str << endl;
  cout << "Bank func        : " << str(bank_func) << endl;
  isl_map* aff = isl_map_read_from_str(buf.ctx, aff_str.c_str());
  cout << "Inner bank offset: " << str(aff) << endl;

  auto app = dot(bank_func, aff);
  cout << endl << "Application: " << str(app) << endl;
  //assert(false);
  return 100000;
}

template <typename T>
void print_shift_registers(
    std::ostream& out,
    const T& shift_registered_outputs,
    CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo) {
  for (auto sr : shift_registered_outputs) {
    int delay = sr.second.second;

    if (!(delay >= 0)) {
      cout << "Error: Negative delay: " << delay << endl;
    }
    assert(delay >= 0);

    delay = delay - 1;

    vector<string> port_decls{"input clk", "input flush", "input rst_n", "input logic [" + str(DATAPATH_WIDTH - 1) + ":0] in", "output logic [" + str(DATAPATH_WIDTH - 1) + ":0] out"};
    out << "module " << buf.name << "_" << sr.first << "_to_" << sr.second.first << "_sr(" << comma_list(port_decls) << ");" << endl;

    if (delay >= 0) {
      //int addrwidth = ceil(log2(delay + 1));

      //out << tab(1) << "logic [15:0] storage [" << delay << ":0];" << endl << endl;

      //out << tab(1) << "reg [" + str(max(addrwidth - 1, 0)) + ":0] read_addr;" << endl;
      //out << tab(1) << "reg [" + str(max(addrwidth - 1, 0)) + ":0] write_addr;" << endl;

      //print_always_header(options, out);
      //print_reset_if(options, out);
      //out << tab(1) << "always @(posedge clk or negedge rst_n) begin" << endl;
      //out << tab(2) << "if (~rst_n) begin" << endl;
      //out << tab(1) << "always @(posedge clk or negedge rst_n) begin" << endl;
      //out << tab(2) << "if (~rst_n) begin" << endl;
      //out << tab(1) << "always @(posedge clk) begin" << endl;
      //out << tab(2) << "if (rst_n) begin" << endl;
      //out << tab(3) << "read_addr <= 0;" << endl;
      //out << tab(3) << "write_addr <= " << delay << ";" << endl;
      //out << tab(2) << "end else begin" << endl;
      //out << tab(3) << "storage[write_addr] <= in;" << endl;
      //out << tab(3) << "read_addr <= read_addr == " << delay << " ? 0 : read_addr + 1;" << endl;
      //out << tab(3) << "write_addr <= write_addr == " << delay << " ? 0 : write_addr + 1;" << endl;

      //out << tab(2) << "end" << endl << endl;
      //out << tab(1) << "end" << endl << endl;

      //out << tab(1) << "always @(*) begin" << endl;
      //out << tab(2) << "out = storage[read_addr];" << endl;
      //out << tab(1) << "end" << endl << endl;

      string out_reg = delay_wire(out, 16, "in", prg, delay + 1);
      out << tab(1) << "assign out = " << out_reg << ";" << endl;

    } else {
      out << tab(1) << "assign out = in;" << endl;
    }

    out << "endmodule" << endl << endl;
  }
}

vector<string> verilog_port_decls(CodegenOptions& options, UBuffer& buf) {
  vector<string> port_decls{"input clk", "input flush", "input rst_n"};

  for (auto b : buf.port_bundles) {
    int pt_width = buf.port_widths;
    int bd_width = buf.lanes_in_bundle(b.first);
    string name = b.first;
    string pt_rep = pick(b.second);
    auto acc_maps = get_maps(buf.access_map.at(pt_rep));
    assert(acc_maps.size() > 0);
    int control_dimension = num_in_dims(pick(acc_maps));
    if (buf.is_input_bundle(b.first)) {
      if (options.rtl_options.use_external_controllers) {
        port_decls.push_back("input " + name + "_wen");
        port_decls.push_back( "input [15:0] " + name + "_ctrl_vars [" + str(control_dimension - 1) + ":0] ");
      }
      port_decls.push_back( "input logic [" + str(pt_width - 1) + ":0] " + name + " [" + str(bd_width - 1) + ":0] ");
    } else {
      if (options.rtl_options.use_external_controllers) {
        port_decls.push_back("input " + name + "_ren");
        port_decls.push_back( "input [15:0] " + name + "_ctrl_vars [" + str(control_dimension - 1) + ":0] ");
      }
      port_decls.push_back( "output logic [" + str(pt_width - 1) + ":0] " + name + " [" + str(bd_width - 1) + ":0] ");
    }
  }

  return port_decls;
}

void generate_fsm(
        ostream& out,
    CodegenOptions& options,
    const std::string& module_name,
    const std::string& ctrl_vars,
    const std::string& enable,
    isl_aff* aff,
    isl_set* dom) {

  cout << "Generating fsm for " << str(aff) << " over " << str(dom) << endl;
  isl_point* pt = lexminpt(dom);
  isl_val* min_time = eval(aff, pt);
  assert(to_int(min_time) >= 0);

  out << "// " << str(aff) << endl;
  cout << to_int(const_coeff(aff)) << endl;
  int dims = num_in_dims(aff);
  for(int i = 0; i < dims; i ++)
  {
    cout << str(get_coeff(aff,i)) << endl;
  }


  out << "module " << module_name << "(input clk, input flush, input rst_n, output logic [15:0] " << ctrl_vars << "[" << dims-1 << ":0], output " << enable << " );" << endl;
  out << tab(1) << "logic [15:0] counter[" << dims << ":0];" << endl;
  out << tab(1) << "logic on;" << endl;
  out << tab(1) << "logic on2;" << endl;
  out << tab(1) << "integer i;" << endl;
  out << tab(1) << "integer dims = " << dims << ";" << endl;

  string condition = "assign " + enable + " =(on && on2 && " + ctrl_vars + brackets(str(0)) + "==0";
  cout << "And condition" << endl;
  for(int i = 1; i < dims; i ++) {
    cout << tab(1) << "i = " << i << endl;
    condition += " && " + ctrl_vars + brackets(str(i)) + "<=" + str(get_dim_max(dom,i));
  }
  condition += ");";
  cout << "Got condition" << endl;
  out << tab(1) << condition << endl;

  print_always_header(options, out);
  print_reset_if(options, out);
  for(int i = 0; i < dims; i++) {
    out << tab(3) <<  ctrl_vars << brackets(str(i)) << "<= 16'b1010101010101010;" << endl;
    out << tab(3) <<  "counter" << brackets(str(i)) << " <= 16'b0;" << endl;
  }
  out << tab(3) << "on <=0;" << endl;
  out << tab(3) << "on2 <= 0;" << endl;
  out << tab(2) <<  "end else begin" << endl;
  out << tab(3) <<   "if(counter[0] ==" << to_int(const_coeff(aff)) - 1 << ") begin" << endl;
  out << tab(4) << "on <=1;" << endl;
  out << tab(4) << "on2 <= 1;" << endl;
  out << tab(4) <<  ctrl_vars << brackets(str(0)) << "<= 16'b0;" << endl;
  out << tab(4) <<  "counter" << brackets(str(0)) << " <= counter" << brackets(str(0)) << "+1;" << endl;
  for(int i = 1; i < dims ;i ++) {
    out << tab(4) <<  ctrl_vars << brackets(str(i)) << "<= 16'b0;" << endl;
    out << tab(4) <<  "counter " << brackets(str(i)) << " <= 16'b0;" << endl;
  }

  out << tab(3) <<  "end else begin" << endl;
  out << tab(4) << "counter[0] <= counter[0] + 1;" << endl;
  out << tab(4) << "if(counter[1] == " << to_int(get_coeff(aff,1)) - 1 << ") begin" << endl;
  for(int i = 1; i < dims; i ++ ) {
    out << tab(5) << "counter" << brackets(str(i)) << "<= 0;" << endl;
  }
  for(int i = 2; i < dims; i ++ ){
    out << tab(5) << ctrl_vars << brackets(str(i)) << "<= 0;" << endl;
  }
  out << tab(5) << ctrl_vars << "[1] <= " << ctrl_vars << "[1] + 1;" << endl;
  out << tab(5) << "on2 <= 1;" <<endl;
  for(int i = 2; i < dims; i ++)
  {
    out << tab(4) << "end else if(counter[" << i << "] == " << to_int(get_coeff(aff,i)) - 1 << ") begin" << endl;
    for(int j = 1; j< i; j ++ ) {
      out << tab(5) << "counter" << brackets(str(j)) << " <= counter" << brackets(str(j)) << " + 1;" << endl;
    }
    for(int j = i; j < dims; j ++ ) {
      out << tab(5) << "counter" << brackets(str(j)) << " <= 0;" << endl;
    }
    for(int j = i + 1; j < dims; j ++ ) {
      out << tab(5) << ctrl_vars << brackets(str(j)) << "<= 0;" << endl;
    }
    out << tab(5) << ctrl_vars << "[" << i << "] <= " << ctrl_vars << "[" << i << "] + 1;" << endl;
    out << tab(5) << "on2 <= 1;" << endl;
  }
  out << tab(4) << "end else begin" << endl;
  for(int i = 1; i < dims; i ++ ) {
    out << tab(5) << "counter" << brackets(str(i)) << " <= counter" << brackets(str(i)) << " + 1;" << endl;
  }
  out << tab(5) << "on2 <= 0;" << endl;
  out << tab(4) << "end" << endl;
  out << tab(3) << "end" << endl;
  out << tab(2) << "end" << endl;
  out << tab(1) << "end" << endl;
  out << "endmodule" << endl;
}

void generate_fsms(
    ostream& out,
    CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo
    )
{
  unordered_set<string> done_ctrl_vars;
  auto adjusted_buf = write_latency_adjusted_buffer(options, prg, buf, hwinfo);

  for(auto pt : buf.get_all_ports()){
    string name = buf.container_bundle(pt);
    string ctrl_vars = name + "_ctrl_vars";
    if(done_ctrl_vars.find(ctrl_vars) != done_ctrl_vars.end()) {
      continue;
    }

    assert(get_maps(adjusted_buf.schedule.at(pt)).size()==1);

    auto aff = get_aff(get_maps(adjusted_buf.schedule.at(pt))[0]);
    int dims = num_in_dims(aff);
    isl_set * dom = domain(get_maps(adjusted_buf.schedule.at(pt))[0]);

    string enable = (name.find("write") != string::npos) ? name + "_wen" : name + "_ren";
    string module_name = adjusted_buf.name + "_" + adjusted_buf.container_bundle(pt) + "_fsm";
    generate_fsm(out, options, module_name, ctrl_vars, enable, aff, dom);
    done_ctrl_vars.insert(ctrl_vars);
  }
}

unordered_set<string> instantiate_shift_regs(
    ostream & out,
    UBuffer& buf,
    map<string,pair<string,int>>& shift_registered_outputs ,
    vector<pair<string,pair<string,int>>>& shift_registered_outputs_to_outputs)
{
  unordered_set<string> done_outpt;
  //map<string, string> pt_to_pt;
  for (auto pt : shift_registered_outputs_to_outputs) {

    if(done_outpt.find(pt.second.first) != done_outpt.end()) {
      continue;
    }
    if(done_outpt.find(pt.first)!=done_outpt.end())
    {
      continue;
    } else{
      done_outpt.insert(pt.first);
    }

    string dst = buf.container_bundle(pt.first) + brackets(str(buf.bundle_offset(pt.first)));
    //pt_to_pt[pt.first] = pt.second.first;

    string src = buf.container_bundle(pt.second.first) + brackets(str(buf.bundle_offset(pt.second.first)));
    out << tab(2) << buf.name << "_" << pt.first << "_to_" << pt.second.first << "_sr " << pt.first << "_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(" + src + "), .out(" + dst + "));" << endl << endl;
  }

  for (auto in : buf.get_in_ports()) {
    string src = buf.container_bundle(in) + brackets(str(buf.bundle_offset(in)));
    for (auto pt : shift_registered_outputs) {
      string dst = buf.container_bundle(pt.first) + brackets(str(buf.bundle_offset(pt.first)));
      if (pt.second.first == in) {
        if(done_outpt.find(pt.first)!=done_outpt.end()) {
          continue;
        } else
        {
          done_outpt.insert(pt.first);
          out << tab(2) << buf.name << "_" << pt.first << "_to_" << pt.second.first << "_sr " << pt.first << "_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(" + src + "), .out(" + dst + "));" << endl << endl;
        }
      }
    }
  }

  out << endl;
  return done_outpt;
}

void instantiate_control_fsms(ostream& out, UBuffer& buf) {
  unordered_set<string> done_ctrl_vars;
  for(auto pt : buf.get_all_ports())
  {
    string name = buf.container_bundle(pt);
    string ctrl_vars = name + "_ctrl_vars";
    string enable = (name.find("write") != string::npos) ? name + "_wen" : name + "_ren";
    if(done_ctrl_vars.find(ctrl_vars) != done_ctrl_vars.end())
    {
      continue;
    }
    done_ctrl_vars.insert(ctrl_vars);
    auto aff = get_aff(get_maps(buf.schedule.at(pt))[0]);
    int dims = num_in_dims(aff);

    out << tab(1) << "logic [15:0]" << ctrl_vars << "_fsm_out[" << dims -1 << ":0];" << endl;
    out << tab(1) << "logic " << enable << "_fsm_out;" << endl;

    out << tab(1) << buf.name << "_" <<  buf.container_bundle(pt) << "_fsm " <<
      buf.name << "_" <<  buf.container_bundle(pt) << "_fsm_inst "
      << "(.clk(clk), .flush(flush), .rst_n(rst_n), ." << ctrl_vars << "( " + ctrl_vars << "_fsm_out), ." << enable << "("
      << enable << "_fsm_out));" << endl;


  }
}

void instantiate_variable_checks(std::ostream& out, UBuffer& buf) {
  std::set<string> done_ctrl_vars;
  for(auto pt: buf.get_all_ports())
  {
    string name = buf.container_bundle(pt);

    string ctrl_vars = name + "_ctrl_vars";
    string enable = (name.find("write") == string::npos) ? name + "_ren" : name + "_wen";
    if(done_ctrl_vars.find(ctrl_vars) != done_ctrl_vars.end())
    {
      continue;
    }
    done_ctrl_vars.insert(ctrl_vars);
    auto aff = get_aff(get_maps(buf.schedule.at(pt))[0]);
    int dims = num_in_dims(aff);
    string gen_ctrl_vars = ctrl_vars + "_fsm_out";
#if SIM
    out << tab(2) << "if(" << enable << ")begin" << endl;
    out << tab(3) << "if(" << ctrl_vars << "!=" << gen_ctrl_vars << ") begin" << endl;
    out << tab(4) << "$display(\"Different\");" << endl;
    out << tab(4) << "$finish(-1);" << endl;
    out << tab(3) << "end" << endl;
    out << tab(2) << "end" << endl;
#endif


    if (buf.is_out_pt(pt)) {
      string bundle_ren = buf.container_bundle(pt) + "_ren";
#if SIM
      out << tab(2) << "if (" << bundle_ren << "!=" << bundle_ren << "_fsm_out) begin" << endl;
      out << tab(4)<< "$display(" << bundle_ren << ");" << endl;
      out << tab(4) << "$display("<< bundle_ren << "_fsm_out);" << endl;
      out << tab(3) << "$finish(-1);" << endl;
      out << tab(2) << "end" << endl;
#endif
    }

    if (buf.is_in_pt(pt)) {
      string bundle_wen = buf.container_bundle(pt) + "_wen";
#if SIM
      out << tab(2) << "if (" << bundle_wen << "!=" << bundle_wen << "_fsm_out) begin" << endl;
      out << tab(4)<< "$display(" << bundle_wen << ");" << endl;
      out << tab(4) << "$display("<< bundle_wen << "_fsm_out);" << endl;
      out << tab(3) << "$finish(-1);" << endl;
      out << tab(2) << "end" << endl;
#endif
    }
  }
}

void instantiate_banks(
    ostream& out,
    CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo,
    const std::unordered_set<string>& shift_registered) {

  vector<int> bank_factors = analyze_memory_demands(prg, buf, hwinfo);
  //vector<int> bank_factors = cyclic_banking(prg, buf, hwinfo);
  maybe<std::set<int> > embarassing_banking =
    embarassing_partition(buf);
  bool has_embarassing_partition = embarassing_banking.has_value();

  //bool has_embarassing_partition = false;

  bank bnk = buf.compute_bank_info();
  vector<int> capacities;
  int num_banks = card(bank_factors);
  vector<int> extents;
  map<int, int> partitioned_dimension_extents;
  if (has_embarassing_partition)  {
    std::set<int> partition_dims = embarassing_banking.get_value();
    extents = extents_by_dimension(buf);
    for (auto d : partition_dims) {
      partitioned_dimension_extents[d] = extents.at(d);
    }
    num_banks = 1;
    for (auto ent : partitioned_dimension_extents) {
      num_banks *= ent.second;
    }
    capacities = extents;
    print_embarassing_banks(out, partitioned_dimension_extents, buf);
  } else {
    capacities = print_cyclic_banks(out, bank_factors, bnk);
  }

  for (auto in : buf.get_all_ports()) {
    auto comps_raw =
      generate_verilog_addr_components(in, bnk, buf);

    vector<string> comps;
    int i = 0;
    for (auto c : comps_raw) {
      out << tab(1) << "logic [15:0] " << buf.name << "_" << in << "_" << i << ";" << endl;
      out << tab(1) << "assign " << buf.name << "_" << in << "_" << i << " = " << c << ";" << endl;
      comps.push_back(buf.name + "_" + in + "_" + str(i));
      i++;
    }
    reverse(comps);
    if (has_embarassing_partition) {
      out << buf.name << "_embarassing_bank_selector " << buf.name << "_" << in << "_bank_selector(.d(" << sep_list(comps, "{", "}", ",") << "));" << endl;
    } else {
      out << buf.name << "_bank_selector " << buf.name << "_" << in << "_bank_selector(.d(" << sep_list(comps, "{", "}", ",") << "));" << endl;
    }
  }

  out << endl;

  int counter = 0;
  map<string, string> port_inner_bank_offsets;
  map<string, string> port_enables;
  map<string, string> port_bank_selectors;
  map<string, string> port_data;
  for (auto outpt : buf.get_all_ports()) {
    if (shift_registered.find(outpt) == shift_registered.end()) {
       string addr;
      if (has_embarassing_partition) {
        addr =
          print_embarassing_banks_inner_bank_offset_func(buf, generate_verilog_addr_components(outpt, bnk, buf), capacities, partitioned_dimension_extents);
      } else
      {
        addr =
        print_cyclic_banks_inner_bank_offset_func(buf, generate_verilog_addr_components(outpt, bnk, buf), capacities, bank_factors);
      }
      out << tab(1) << "logic [15:0] addr" << counter << ";" << endl;
      if (addr == "()") {
        out << tab(1) << "assign addr" << counter << " = " << "0" << ";" << endl;
      } else {
        out << tab(1) << "assign addr" << counter << " = " << addr << ";" << endl;
      }

      string bundle_wen = buf.container_bundle(outpt) + (buf.is_in_pt(outpt) ? "_wen" : "_ren");
      string bundle_wen_fsm = bundle_wen + "_fsm_out";
      string bank_selector = buf.name + "_" + outpt + "_bank_selector.out";

      int delay = buf.is_out_pt(outpt) ? hwinfo.load_latency(buf.name) : hwinfo.store_latency(buf.name);
      assert(delay >= 0);
      if (delay == 0) {
        port_inner_bank_offsets[outpt] = "addr" + str(counter);
        port_bank_selectors[outpt] = bank_selector;
        port_enables[outpt] = bundle_wen_fsm;
        port_data[outpt] =
          buf.container_bundle(outpt) + "[" + str(buf.bundle_offset(outpt)) + "]";
      } else {
        delay = delay - 1;
        assert(delay >= 0);

        if (buf.is_in_pt(outpt)) {
          port_inner_bank_offsets[outpt] = delay_wire(out, 16, "addr" + str(counter), prg, delay);
          port_bank_selectors[outpt] = delay_wire(out, 16, bank_selector, prg, delay);
          port_enables[outpt] = delay_wire(out, 16, bundle_wen_fsm, prg, delay);
          port_data[outpt] =
            delay_wire(out, 16, buf.container_bundle(outpt) + "[" + str(buf.bundle_offset(outpt)) + "]", prg, delay);
        } else {
          port_inner_bank_offsets[outpt] = "addr" + str(counter);
          port_bank_selectors[outpt] = bank_selector;
          port_enables[outpt] = bundle_wen_fsm;
          port_data[outpt] =
            end_delay_with(out, 16, buf.container_bundle(outpt) + "[" + str(buf.bundle_offset(outpt)) + "]", prg, delay);
        }

      }

      counter ++;
    }
  }

  if (!has_embarassing_partition || (prg.name != "resnet")) {
    int store_latency = hwinfo.store_latency(buf.name);
    assert(store_latency <= 2);
    out << tab(1) << "always @(posedge clk) begin" << endl;

    instantiate_variable_checks(out, buf);

    for (auto in : buf.get_in_ports()) {
      string bundle_wen_fsm = map_find(in, port_enables);
      string bank_selector = map_find(in, port_bank_selectors);
      string addr = map_find(in, port_inner_bank_offsets);
      string input_wire = map_find(in, port_data);

      out << tab(2) << "if (" << bundle_wen_fsm << ") begin" << endl;
      out << tab(3) << "case( " << bank_selector << ")" << endl;
      string last_ram = "";
      for (int b = 0; b < num_banks; b++) {
        string source_ram = "bank_" + str(b);
        out << tab(4) << b << ":" << source_ram << "[" << addr << "]" << " <= " << input_wire << ";" << endl;
        last_ram = source_ram;
      }
#if SIM
      out << tab(4) << "default: $finish(-1);" << endl;
#else
      assert(last_ram != "");
      out << tab(4) << "default" << ":" << last_ram << "[" << addr << "]" << " <= " << input_wire << ";" << endl;
#endif
      out << tab(3) << "endcase" << endl;
      out << tab(2) << "end" << endl;
    }
    out << tab(1) << "end" << endl;

    int load_latency = hwinfo.load_latency(buf.name);
    assert(load_latency >= 0);
    assert(load_latency <= 2);

    if (load_latency == 0) {
      out << tab(1) << "always @(*) begin" << endl;
    } else {
      out << tab(1) << "always @(posedge clk) begin" << endl;
    }
    counter = 0;
    for (auto outpt : buf.get_out_ports()) {
      string bundle_ren = buf.container_bundle(outpt) + "_ren";

      if (shift_registered.find(outpt) == shift_registered.end()) {
        string bundle_ren_fsm = map_find(outpt, port_enables);
        string bank_selector = map_find(outpt, port_bank_selectors);
        string inner_bank_offset = map_find(outpt, port_inner_bank_offsets);
        string out_wire = map_find(outpt, port_data);
        string assign_str = load_latency == 0 ? " = " : " <= ";

        out << tab(2) << "if (" << bundle_ren_fsm << ") begin" << endl;
        out << tab(3) << "case( " << bank_selector << ")" << endl;
        for (int b = 0; b < num_banks; b++) {
          string source_ram = "bank_" + str(b);
          out << tab(4) << b << ":" << out_wire << assign_str << source_ram << "[" << inner_bank_offset << "];" << endl;
        }
        counter++;
#if SIM
        out << tab(4) << "default: $finish(-1);" << endl;
#else
        out << tab(4) << "default" << ":" << out_wire << assign_str << "327;" << endl;
#endif
        out << tab(3) << "endcase" << endl;
        out << tab(2) << "end" << endl;
      }
    }

    out << tab(1) << "end" << endl;

    out << endl;
  } else {
    int store_latency = hwinfo.store_latency(buf.name);
    assert(store_latency <= 2);
    out << tab(1) << "always @(posedge clk) begin" << endl;

    instantiate_variable_checks(out, buf);
    for (int b = 0; b < num_banks; b++) {
      int counter_ports = 0;
      for (auto in : buf.get_in_ports()) {
        string bundle_wen_fsm = map_find(in, port_enables);
        string bank_selector = map_find(in, port_bank_selectors);
        string addr = map_find(in, port_inner_bank_offsets);
        string input_wire = map_find(in, port_data);

        out << tab(2) << (counter_ports == 0 ? "if (" : "else if (") << bundle_wen_fsm << " &&" << bank_selector << "==" << b << ") begin" << endl;
        string source_ram = "bank_" + str(b);
        out << tab(4) << source_ram << "[" << addr << "]" << " <= " << input_wire << ";" << endl;

        out << tab(2) << "end" << endl;
        counter_ports ++;

      }
    }
    out << tab(1) << "end" << endl;

    int load_latency = hwinfo.load_latency(buf.name);
    assert(load_latency >= 0);
    assert(load_latency <= 2);

    if (load_latency == 0) {
      out << tab(1) << "always @(*) begin" << endl;
    } else {
      out << tab(1) << "always @(posedge clk) begin" << endl;
    }
    counter = 0;
    for (int b = 0; b < num_banks; b++) {
      int counter_ports = 0;
      for (auto outpt : buf.get_out_ports()) {
        string bundle_ren = buf.container_bundle(outpt) + "_ren";

        if (shift_registered.find(outpt) == shift_registered.end()) {
          string bundle_ren_fsm = map_find(outpt, port_enables);
          string bank_selector = map_find(outpt, port_bank_selectors);
          string inner_bank_offset = map_find(outpt, port_inner_bank_offsets);
          string out_wire = map_find(outpt, port_data);
          out << tab(2) << (counter_ports == 0 ? "if (" : "else if (") << bundle_ren_fsm << " &&" << bank_selector << "==" << b << ") begin" << endl;

          string source_ram = "bank_" + str(b);
          string assign_str = load_latency == 0 ? " = " : " <= ";
          out << tab(4) << out_wire << assign_str << source_ram << "[" << inner_bank_offset << "];" << endl;
          counter_ports ++;
          out << tab(2) << "end" << endl;
        }
          counter++;

        }
  }

  out << tab(1) << "end" << endl;

  out << endl;

  }
}

void generate_platonic_ubuffer(
    std::ostream& out,
    CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo) {

  prg.pretty_print();

  vector<int> bank_factors = analyze_memory_demands(prg, buf, hwinfo);
  //vector<int> bank_factors = cyclic_banking(prg, buf, hwinfo);
  maybe<std::set<int> > embarassing_banking =
    embarassing_partition(buf);
  bool has_embarassing_partition = embarassing_banking.has_value();

  out << "// " << buf.name << " has embarassing partition: " << has_embarassing_partition << endl;

  //bool has_embarassing_partition = false;

  int num_banks = card(bank_factors);
  vector<int> extents;
  map<int, int> partitioned_dimension_extents;
  if (has_embarassing_partition)  {
    std::set<int> partition_dims = embarassing_banking.get_value();
    extents = extents_by_dimension(buf);
    for (auto d : partition_dims) {
      partitioned_dimension_extents[d] = extents.at(d);
    }

    print_embarassing_banks_selector(out, partitioned_dimension_extents, buf);
    num_banks = 1;
    for (auto ent : partitioned_dimension_extents) {
      num_banks *= ent.second;
    }
  } else {
    print_cyclic_banks_selector(out, bank_factors, buf);
  }

  map<string,pair<string,int>> shift_registered_outputs = determine_shift_reg_map(prg, buf, hwinfo);
  vector<pair<string,pair<string,int>>> shift_registered_outputs_to_outputs = determine_output_shift_reg_map(prg, buf,hwinfo);

  //map<string,pair<string,int>> shift_registered_outputs;
  //vector<pair<string,pair<string,int>>> shift_registered_outputs_to_outputs;

  print_shift_registers(out, shift_registered_outputs, options, prg, buf, hwinfo);
  print_shift_registers(out, shift_registered_outputs_to_outputs, options, prg, buf, hwinfo);

  // print the fsm modules that get the ctrl_variables
  generate_fsms(out, options, prg, buf, hwinfo);

  vector<string> port_decls = verilog_port_decls(options, buf);

  out << "module " << buf.name << "_ub" << "(" << sep_list(port_decls, "\n\t", "", ",\n\t") << ");" << endl;
  out << endl;

  auto done_outpt =
    instantiate_shift_regs(out, buf, shift_registered_outputs ,shift_registered_outputs_to_outputs);

  out << tab(1) << "// Storage capacity pre-banking: " << total_capacity(buf) << endl;

  instantiate_control_fsms(out, buf);

  instantiate_banks(out, options, prg, buf, hwinfo, done_outpt);

  out << "endmodule" << endl << endl;
}


