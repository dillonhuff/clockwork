#include "ubuffer.h"
#include "codegen.h"
#ifdef COREIR
#include "cwlib.h"
#include "coreir_backend.h"
#include "lake_target.h"

using CoreIR::Instance;
using CoreIR::Wireable;
using CoreIR::CoreIRType;
using CoreIR::ArrayType;
using CoreIR::Context;
using CoreIR::Const;
using CoreIR::Params;
using CoreIR::ModuleDef;
using CoreIR::Generator;
using CoreIR::TypeGen;
using CoreIR::Type;
using CoreIR::Values;

#endif
#include "coreir_backend.h"
typedef std::unordered_map<std::string, std::vector<int>> ConfigMap;

isl_map* bank_map(isl_ctx* ctx, const std::string& src_name, banking_strategy& banking) {
  vector<string> dvs;
  vector<string> addrs;
  int num_banks = 1;
  for (int i = 0; i < (int) banking.cycle_factors.size(); i++) {
    assert(banking.cycle_factors.at(i) > 0);
    dvs.push_back("a_" + str(i));
    addrs.push_back("a_" + str(i) + " % " + str(banking.cycle_factors.at(i)));
    num_banks *= banking.cycle_factors.at(i);
  }

  string bank_func =
    curlies(bracket_list(dvs) + " -> " + bracket_list(addrs));

  cout << "bank func = " << bank_func << endl;
  auto bank_map = isl_map_read_from_str(ctx, bank_func.c_str());
  set_domain_name(bank_map, src_name);
  return bank_map;
}

std::string read_addrgen_name(const std::string& n) {
  return n + "_read_addrgen";
}

std::string write_addrgen_name(const std::string& n) {
  return n + "_write_addrgen";
}

map<string, isl_set*> input_ports_to_conditions(const std::string& outpt, UBuffer& buf) {
  cout << "Getting input port conditions for " << outpt << " on buffer: " << buf.name << endl;
  map<string, isl_set*> in_ports_to_conditions;
  umap* reads_to_sources = buf.get_lexmax_events(outpt);
  cout << "reads to source for " << outpt << ": " << str(reads_to_sources) << endl;
  uset* producers_for_outpt = range(reads_to_sources);

  vector<string> possible_ports;
  for (auto pt : buf.get_in_ports()) {
    if (buf.has_bank_between(pt, outpt)) {
      possible_ports.push_back(pt);
    }
  }

  auto read_map = buf.access_map.at(outpt);
  cout << "read map = " << str(read_map) << endl;

  auto read_space = get_space(read_map);
  for (auto inpt : possible_ports) {
    auto write_map = buf.access_map.at(inpt);
    cout << inpt << " write map = " << str(write_map) << endl;

    auto data_written = range(write_map);

    auto common_write_ops =
      domain(its_range(read_map, data_written));

    auto write_ops =
      domain(buf.access_map.at(inpt));
    auto op_overlap = domain(its_range(reads_to_sources, write_ops));

    auto overlap = its(op_overlap, common_write_ops);

    auto read_ops =
      domain(buf.access_map.at(outpt));

    auto readers_that_use_this_port =
      gist(overlap, read_ops);
    cout << "Readers that use " << inpt << " -> outpt: " << str(readers_that_use_this_port) << endl;
    if (!empty(readers_that_use_this_port)) {
      in_ports_to_conditions[inpt] =
        to_set(simplify(readers_that_use_this_port));
    }

    release(readers_that_use_this_port);
    release(read_ops);
    release(overlap);
    release(op_overlap);
    release(write_ops);
    release(common_write_ops);
    release(data_written);
  }

  release(reads_to_sources);
  release(producers_for_outpt);
  return in_ports_to_conditions;
}

//This is assuming read after write if they are scheduled
//for the same hardware cycle
umap* schedule_guard(umap* sched, bool is_rd) {
  if (num_out_dims(to_map(sched))  == 1) {
    int index = is_rd ? 1 : 0;
    return pad_one_more_dim_to_sched_map_innermost(sched, index);
  } else {
    return sched;
  }
}

umap* get_lexmax_events(const std::string& outpt, UBuffer& buf) {
  umap* src_map = nullptr;
  for (auto inpt : buf.get_in_ports()) {
    auto beforeAcc = lex_gt(schedule_guard(buf.schedule.at(outpt), true),
            schedule_guard(buf.schedule.at(inpt),false));
    if (src_map == nullptr) {
      auto outmap = buf.access_map.at(outpt);
      auto inmap = buf.access_map.at(inpt);
      src_map =
        its(dot(outmap,
              inv(inmap)), beforeAcc);
    } else {
      auto a =
        its(dot(buf.access_map.at(outpt), inv(buf.access_map.at(inpt))), beforeAcc);
      src_map =
        unn(src_map, a);

      release(a);
      //src_map =
        //unn(src_map, ((its(dot(buf.access_map.at(outpt), inv(buf.access_map.at(inpt))), beforeAcc))));
    }

    release(beforeAcc);
  }
  assert(src_map != nullptr);

  auto sched = buf.global_schedule_with_guard();
  auto after = lex_gt(sched, sched);

  src_map = its(src_map, after);
  src_map = lexmax(src_map);

  auto time_to_event = inv(sched);

  auto lex_max_events =
    dot(lexmax(dot(src_map, sched)), time_to_event);

  assert(lex_max_events != nullptr);

  release(time_to_event);
  release(src_map);
  release(after);

  return lex_max_events;
}

//umap* last_reads(const string& inpt, UBuffer& buf) {
  //auto sched = buf.global_schedule();
  ////cout << "Port: " << inpt << endl;
  //auto writes = buf.access_map.at(inpt);
  ////cout << "Access map: " << str(writes) << endl;
  //auto writers = inv(writes);
  ////cout << "Writer map: " << str(writers) << endl;
  //uset* written_values = (range(writes));
  //isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
  //for (auto outpt : buf.get_out_ports()) {
    //reads_from_fifo =
      //unn(reads_from_fifo, (buf.access_map.at(outpt)));
  //}
  //reads_from_fifo = its_range(reads_from_fifo, written_values);
  ////cout << "Reads: " << str(reads_from_fifo) << endl;

  //auto write_sched = its(sched, domain(writes));
  ////cout << "Write schedule: " << str(write_sched) << endl;

  //auto read_sched = its(sched, domain(reads_from_fifo));
  ////cout << "Read schedule: " << str(read_sched) << endl;
  //auto vals_to_reads = inv(reads_from_fifo);

  ////cout << "vals to reads: " << str(reads_from_fifo) << endl;
  //// TODO: Should be lexmax in the schedule
  //auto last_read = lexmax(vals_to_reads);
  //return last_read;

//}

isl_union_pw_qpolynomial* compute_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {

  isl_union_map* sched = buf.schedule.at(write_port);
  assert(sched != nullptr);

  auto WritesAfterWrite = lex_lt(sched, sched);

  assert(WritesAfterWrite != nullptr);

  umap* rdsched = buf.schedule.at(read_port);
  umap* wrsched = buf.schedule.at(write_port);
  auto WritesBeforeRead =
    lex_gt(rdsched, wrsched);

  auto WriteThatProducesReadData =
    get_lexmax_events(read_port, buf);

  auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

  auto WritesBtwn = its_range((its(WritesAfterProduction, WritesBeforeRead)),
      to_uset(buf.domain.at(write_port)));


  auto c = card(WritesBtwn);

  release(sched);
  release(WritesBtwn);
  release(WritesAfterProduction);
  release(WriteThatProducesReadData);
  release(WritesBeforeRead);
  release(WritesAfterWrite);
  return c;
}

int compute_dd_lower_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_min, b);
  return bnd_int(bound);
}

int compute_dd_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_max, b);
  return bnd_int(bound);
}

string evaluate_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  c = coalesce(c);
  auto out_domain = buf.domain.at(read_port);
  c = isl_union_pw_qpolynomial_gist(c, to_uset(out_domain));

  auto folds  = get_polynomials(c);
  if (folds.size() == 1) {
    return codegen_c(folds[0]);
  }

  assert(folds.size() == 0);
  return "0";
}

int compute_max_dd(UBuffer& buf, const string& inpt) {
  int maxdelay = 0;
  for (auto outpt : buf.get_out_ports()) {
    int r0 = compute_dd_bound(buf, outpt, inpt);
    if (r0 > maxdelay) {
      maxdelay = r0;
    }
  }
  return maxdelay;
}

vector<string> generate_multilinear_address_components(const std::string& pt, bank& bnk, UBuffer& buf) {
  vector<int> lengths;
  vector<int> mins;
  for (int i = 0; i < buf.logical_dimension(); i++) {
    auto s = project_all_but(to_set(bnk.rddom), i);
    auto min = to_int(lexminval(s));
    mins.push_back(min);
    auto max = to_int(lexmaxval(s));
    int length = max - min + 1;
    lengths.push_back(length);
  }

  isl_map* m = to_map(buf.access_map.at(pt));
  auto svec = isl_pw_multi_aff_from_map(m);
  vector<pair<isl_set*, isl_multi_aff*> > pieces =
    get_pieces(svec);
  assert(pieces.size() == 1);

  vector<string> domains;
  vector<string> offsets;
  vector<string> addr_vec_out;
  for (auto piece : pieces) {
    vector<string> addr_vec;
    isl_multi_aff* ma = piece.second;
    for (int d = 0; d < isl_multi_aff_dim(ma, isl_dim_set); d++) {
      isl_aff* aff = isl_multi_aff_get_aff(ma, d);
      addr_vec.push_back(codegen_c(aff));
    }

    for (int i = 0; i < buf.logical_dimension(); i++) {
      string item = addr_vec.at(i) + " - " + str(mins.at(i));
      addr_vec_out.push_back(item);
    }

    string addr = sep_list(addr_vec_out, "", "", ", ");
    offsets.push_back(addr);
    domains.push_back(codegen_c(piece.first));
  }

  return addr_vec_out;
}

string generate_multilinear_ram_addr(const std::string& pt, bank& bnk, UBuffer& buf) {
  vector<int> lengths;
  vector<int> mins;
  for (int i = 0; i < buf.logical_dimension(); i++) {
    auto s = project_all_but(to_set(bnk.rddom), i);
    auto min = to_int(lexminval(s));
    mins.push_back(min);
    auto max = to_int(lexmaxval(s));
    int length = max - min + 1;
    lengths.push_back(length);
  }

  isl_map* m = to_map(buf.access_map.at(pt));
  auto svec = isl_pw_multi_aff_from_map(m);
  vector<pair<isl_set*, isl_multi_aff*> > pieces =
    get_pieces(svec);
  vector<string> domains;
  vector<string> offsets;
  for (auto piece : pieces) {
    vector<string> addr_vec;
    isl_multi_aff* ma = piece.second;
    for (int d = 0; d < isl_multi_aff_dim(ma, isl_dim_set); d++) {
      isl_aff* aff = isl_multi_aff_get_aff(ma, d);
      addr_vec.push_back(codegen_c(aff));
    }

    vector<string> addr_vec_out;
    for (int i = 0; i < buf.logical_dimension(); i++) {
      string item = addr_vec.at(i) + " - " + str(mins.at(i));
      addr_vec_out.push_back(item);
    }

    //string addr = sep_list(addr_vec_out, "", "", " + ");
    string addr = sep_list(addr_vec_out, "", "", ", ");
    offsets.push_back(addr);
    domains.push_back(codegen_c(piece.first));
  }

  assert(offsets.size() == 1);
  return offsets.at(0);

  //assert(offsets.size() > 0);
  //assert(domains.size() == offsets.size());

  //string base = offsets.at(0);
  //for (int d = 1; d < offsets.size(); d++) {
    //base = parens(parens(domains.at(d)) + " ? " + offsets.at(d) + " : " + base);
  //}

  //return base;
}

void generate_multilinear_bank(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank) {

  auto pt_type_string = bank.pt_type_string;
  auto partitions =
    bank.get_partitions();
  int partition_size = partitions.size();
  isl_set* rddom = to_set(bank.rddom);
  vector<int> ranges;
  vector<int> mins;
  vector<int> maxs;
  for (int d = 0; d < num_dims(rddom); d++) {
    auto ps = project_all_but(rddom, d);
    int minv = to_int(lexminval(ps));
    int maxv = to_int(lexmaxval(ps));

    mins.push_back(minv);
    maxs.push_back(maxv);
    ranges.push_back(maxv - minv + 1);
  }

  vector<string> decls =
    space_var_decls(get_space(rddom));
  vector<string> vars =
    space_var_args(get_space(rddom));
  vector<string> args;
  for (auto v : vars) {
    args.push_back("[" + v + "]");
  }

  vector<string> range_strs;
  for (auto r : ranges) {
    range_strs.push_back("[" + str(r) + "]");
  }

  out << tab(1) << pt_type_string << " RAM" << sep_list(range_strs, "", "", "") << ";" << endl;

  out << tab(1) << "inline " + pt_type_string + " read(" << comma_list(decls) << ") {" << endl;

  out << tab(2) << "return RAM" << sep_list(args, "", "", "") << ";" << endl;
  out << tab(1) << "}" << endl << endl;

  out << endl << endl;

  out << "\tinline void write(const " + pt_type_string + " value, " << comma_list(decls) << ") {" << endl;
  out << tab(2) << "RAM" << sep_list(args, "", "", "") << " = value;" << endl;
  out << tab(1) << "}" << endl << endl;

  out << "};" << endl << endl;

}

void generate_bank(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank) {

  auto name = bank.name;
  auto pt_type_string = bank.pt_type_string;
  auto read_delays = bank.read_delays;
  auto num_readers = bank.num_readers;
  auto maxdelay = bank.maxdelay;
  auto layout = bank.extract_layout();

  out << "struct " << name << "_cache" <<  " {" << endl;
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

    //int_upper_bound(card(bank.rddom));
    out << "\t// Capacity: " << capacity << endl;
    open_synth_scope(out);
    out << tab(1) << pt_type_string << " RAM[" << capacity << "];" << endl;
    close_synth_scope(out);

    open_debug_scope(out);
    out << tab(1) << pt_type_string << "* RAM;" << endl;
    out << tab(1) << name << "_cache()" <<  " {" << endl;
    out << tab(2) << "RAM = (" << pt_type_string << "*) malloc(sizeof(" << pt_type_string << ")*" << capacity << ");" << endl;
    out << tab(1) << "}" << endl;

    out << tab(1) << "~" << name << "_cache()" <<  " {" << endl;
    out << tab(2) << "free(RAM);" << endl;
    out << tab(1) << "}" << endl;
    close_debug_scope(out);

    out << tab(1) << "inline " + pt_type_string + " read(const int addr) {" << endl;

    open_debug_scope(out);
    out << tab(2) << "if (addr < 0 || !(addr < " << capacity << ")) {" << endl;
    out << tab(2) << "cout << \"Read error: Address \" << addr << \" is out of bounds\" << endl;" << endl;
    out << tab(2) << "}" << endl;
    out << tab(2) << "assert(addr < " << capacity << ");" << endl;
    out << tab(2) << "assert(addr >= " << (int) 0 << ");" << endl;
    close_debug_scope(out);

    ignore_inter_deps(out, "RAM");
    out << tab(2) << "return RAM[addr];" << endl;
    out << tab(1) << "}" << endl << endl;

    out << endl << endl;

    out << "\tinline void write(const " + pt_type_string + " value, const int addr) {" << endl;
    open_debug_scope(out);
    out << tab(2) << "if (addr < 0 || !(addr < " << capacity << ")) {" << endl;
    out << tab(2) << "cout << \"Write error: Address \" << addr << \" is out of bounds\" << endl;" << endl;
    out << tab(2) << "}" << endl;
    out << tab(2) << "assert(addr < " << capacity << ");" << endl;
    out << tab(2) << "assert(addr >= " << (int) 0 << ");" << endl;
    close_debug_scope(out);

    if (options.add_dependence_pragmas) {
      ignore_inter_deps(out, "RAM");
    }
    out << tab(2) << "RAM[addr] = value;" << endl;
    out << tab(1) << "}" << endl << endl;

    out << "};" << endl << endl;

  } else if (bank.tp == INNER_BANK_OFFSET_MULTILINEAR) {
    generate_multilinear_bank(options, out, bank);
  } else {
    assert(bank.tp == INNER_BANK_OFFSET_STACK);

    out << "\t// Capacity: " << maxdelay + 1 << endl;
    out << "\t// # of read delays: " << read_delays.size() << endl;
    out << tab(1) << "// " << comma_list(read_delays) << endl;

    read_delays = sort_unique(read_delays);

    if (num_readers == 1 || options.all_rams) {
      int partition_capacity = 1 + maxdelay;
      out << "\tfifo<" << pt_type_string << ", " << partition_capacity << "> f" << ";" << endl;
      out << "\tinline " + pt_type_string + " peek(const int offset) {" << endl;
      ignore_inter_deps(out, "f");
      out << tab(2) << "return f.peek(" << partition_capacity - 1 << " - offset);" << endl;
      out << tab(1) << "}" << endl << endl;

      out << endl << endl;
      out << "\tinline void push(const " + pt_type_string + " value) {" << endl;
      if (options.add_dependence_pragmas) {
        ignore_inter_deps(out, "f");
      }
      out << tab(2) << "return f.push(value);" << endl;
      out << tab(1) << "}" << endl << endl;
    } else {
      auto break_points = bank.get_break_points();
      read_delays = break_points;

      auto partitions =
        bank.get_partitions();
      vector<int> end_inds =
        bank.get_end_inds();

      for (auto p : partitions) {

        auto partition_capacity = p.second;
        //out << "\t// Parition [" << current.first << ", " << next.first << ") capacity = " << partition_capacity << endl;
        if (partition_capacity > 1) {
          out << "\tfifo<" << pt_type_string << ", " << partition_capacity << "> " << p.first << ";" << endl;
        } else {
          out << "\t" << pt_type_string << " " << p.first << ";" << endl;
        }
      }

      out << endl << endl;
      int nind = 0;
      for (auto p : partitions) {
        int dv = end_inds[nind];
        //int capacity = capacities.at(nind);
        int capacity = p.second;
        assert(dv >= 0);
        out << "\tinline " << pt_type_string << " peek_" << to_string(dv) << "() {" << endl;
        if (capacity > 1) {
          ignore_inter_deps(out, p.first);
          out << "\t\treturn " << p.first << ".back();" << endl;
        } else {
          out << "\t\treturn " << p.first << ";" << endl;
        }
        out << "\t}" << endl << endl;
        nind++;
      }
      out << endl << endl;

      out << "\tinline void push(const " + pt_type_string + " value) {" << endl;
      for (size_t i = partitions.size() - 1; i >= 1; i--) {
        auto current = partitions[i];
        auto prior = partitions[i - 1];
        auto last_capacity = prior.second;
        auto capacity = current.second;

        if (options.add_dependence_pragmas) {
          ignore_inter_deps(out, current.first);
        }

        out << tab(2) << "// cap: " << capacity << " reading from capacity: " << last_capacity << endl;
        out << tab(2) << write_partition(current.first, capacity, read_partition(prior.first, last_capacity)) << ";" << endl;
      }
      out << tab(2) << "// cap: " << partitions.at(0).second << endl;
      out << tab(2) << write_partition(partitions.at(0).first, partitions.at(0).second, "value") << ";" << endl;
      out << "\t}" << endl << endl;
    }
    out << "};" << endl << endl;
  }
}


vector<string> dimension_var_args(const std::string& pt, UBuffer& buf) {
  isl_space* s = get_space(buf.domain.at(pt));
  assert(isl_space_is_set(s));

  vector<string> dim_decls;
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(buf.ctx, dn);
      assert(new_id != nullptr);
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }

    assert(isl_space_has_dim_name(s, isl_dim_set, i));
    assert(isl_space_has_dim_id(s, isl_dim_set, i));
    dim_decls.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
  }
  return dim_decls;
}

vector<string> dimension_var_decls(const std::string& pt, UBuffer& buf) {
  isl_space* s = get_space(buf.domain.at(pt));
  assert(isl_space_is_set(s));

  vector<string> dim_decls;
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(buf.ctx, dn);
      assert(new_id != nullptr);
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }

    assert(isl_space_has_dim_name(s, isl_dim_set, i));
    assert(isl_space_has_dim_id(s, isl_dim_set, i));
    dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
  }
  return dim_decls;
}

void generate_vivado_tcl(UBuffer& buf) {
  generate_vivado_tcl(buf.name);
}

//Post processing get the ubuffer for each bank
map<string, UBuffer> UBuffer::generate_ubuffer(CodegenOptions& options) {
  print_bank_info();
  map<string, UBuffer> buffers;
  for (auto b : get_banks_and_sort()) {
    cout << "Bank: " << b.name << " has max delay: " << b.maxdelay << endl;
    if (get_bank_outputs(b.name).size() == 0 ||
        get_bank_inputs(b.name).size() == 0) {
      continue;
    }
    //fiter out those node will implemented as a shift register and wire
    if (options.conditional_merge) {
      if (b.maxdelay <= options.merge_threshold) {
        continue;
      }
    }
    //if (b.maxdelay == 1) {
    //  //TODO: find a better way to filter out shift register
    //  continue;
    //}
    if (is_bank_SR(b.name)) {
        continue;
    }
    UBuffer buf;
    string bname = b.name + "_ubuf";
    buf.name = bname;
    buf.ctx = ctx;
    buf.port_widths = port_widths;
    auto inpts = get_bank_inputs(b.name);
    auto outpts = get_bank_outputs(b.name);

    //add a sort of output make sure we have positive stride when coalesce
    vector<string> pt_vec(outpts.begin(), outpts.end());
    sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
              auto l_start = lexminpt(range(access_map.at(l)));
              auto r_start = lexminpt(range(access_map.at(r)));
              return lex_lt_pt(l_start, r_start);
              });

    int usuffix = 0;
    for (auto inpt: inpts) {
      auto acc_map = to_map(access_map.at(inpt));
      acc_map = set_range_name(acc_map, bname);
      auto dom = domain.at(inpt);
      string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);
      buf.port_bundles[::name(dom) + "_write"].push_back(pt_name);
      buf.add_in_pt(pt_name, dom, acc_map, schedule.at(inpt));
      usuffix ++;
    }

    for (auto outpt: pt_vec) {
      auto acc_map = to_map(access_map.at(outpt));
      acc_map = set_range_name(acc_map, bname);
      auto dom = domain.at(outpt);
      string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);
      buf.port_bundles[::name(dom) + "_read"].push_back(pt_name);
      buf.add_out_pt(pt_name, dom, acc_map, schedule.at(outpt));
      if (sv_map.count(outpt)) {
        buf.sv_map[pt_name] = sv_map.at(outpt);
      }
      usuffix ++;
    }
    buffers[bname] = buf;
    cout << "\t\tNeed for vectorization: \n" << buf << endl;
  }
  return buffers;
}

isl_union_map* global_schedule_from_buffers(const map<string, UBuffer> &buffers) {
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_map* global_sched = isl_union_map_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        auto buf = it.second;
        global_sched = unn(buf.global_schedule(), global_sched);
    }
    cout << "Global schedule: " << str(global_sched) << endl;
    return global_sched;
}


isl_union_map* global_access_map_from_buffers(const map<string, UBuffer> &buffers) {
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_map* global_acc_map = isl_union_map_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        auto buf = it.second;
        global_acc_map = unn(buf.producer_map(), global_acc_map);
        global_acc_map = unn(buf.consumer_map(), global_acc_map);
    }
    cout << "Global access map: " << str(global_acc_map) << endl;
    return global_acc_map;
}

isl_union_set* global_domain_from_buffers(const map<string, UBuffer> &buffers) {
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_set* global_dom = isl_union_set_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        auto buf = it.second;
        global_dom = unn(buf.global_domain(), global_dom);
    }
    cout << "Global domain: " << str(global_dom) << endl;
    return global_dom;
}

isl_union_set* retrive_domain_from_buffers(const map<string, UBuffer> &buffers) {
    isl_ctx* ctx = pick(buffers).second.ctx;
    isl_union_set* global_dom = isl_union_set_read_from_str(ctx, "{}");
    for (auto it : buffers) {
        auto buf = it.second;
        global_dom = unn(buf.global_retrive_domain(), global_dom);
    }
    cout << "Global retrive domain: " << str(global_dom) << endl;
    return global_dom;
}

#ifdef COREIR


void UBuffer::generate_coreir(CodegenOptions& options, CoreIR::ModuleDef* def) {
  schedule_info info;
  generate_coreir(options, def, info);
}

void UBuffer::generate_coreir_without_ctrl(CodegenOptions& options, CoreIR::ModuleDef* def) {
  schedule_info info;
  generate_coreir(options, def, info, false);
}

ConfigMap emit_lake_controller_config(isl_set* write_domain, isl_aff* write_sched) {
  //cout << str(write_sched) << endl;
  int dimensionality = num_dims(write_domain);
  cout << "\"dimensionality\"," << num_dims(write_domain) << ",0" << endl;
  vector<int> start_addr = {to_int(const_coeff(write_sched))};
  cout << "\"cycle_starting_addr\"," << to_int(const_coeff(write_sched)) << ",0" << endl;
  vector<int> extent, cycle_stride;
  for (int d = 0; d < num_dims(write_domain); d++) {
    auto ds = project_all_but(write_domain, d);
    int extent_d = to_int(lexmaxval(ds)) - to_int(lexminval(ds)) + 1;
    int ldim = num_dims(write_domain) - d - 1;
    extent.push_back(extent_d);
    cycle_stride.push_back(to_int(get_coeff(write_sched, d)));
    cout << "\"extent_" << ldim << "\"," << extent_d << ",0" << endl;
    cout << "\"cycle_stride_" << ldim << "\"," << to_int(get_coeff(write_sched, d)) << ",0" << endl;
  }
  std::reverse(extent.begin(), extent.end());
  std::reverse(cycle_stride.begin(), cycle_stride.end());
  return {{"extent", extent}, {"cycle_starting_addr", start_addr}, {"cycle_stride", cycle_stride}};

  //return MemConnSch({dimensionality, {}, "", "", ""});
}

ConfigMap generate_config_from_aff_expr(isl_aff* addr, bool is_read, bool is_mux, int word_width, int capacity, int port_width) {
    ConfigMap vals;

    string prefix = is_mux ? "mux_" : "";
    prefix += is_read ? "read_" : "write_";
    //cout << "\""+prefix+"\"," << "\"" << buf_name << "\"" << endl;
    cout << "\""+prefix+"data_starting_addr\"," <<
        to_int(const_coeff(addr))/port_width  << ",0" << endl;
    vals[prefix + "data_starting_addr"] = {to_int(const_coeff(addr))/port_width};
    for (int d = 0; d < num_in_dims(addr); d++) {
      int ldim = num_in_dims(addr) - d - 1;
      cout << "\""+prefix+"data_stride_" << ldim << "\"," <<
          to_int(get_coeff(addr, d))% capacity /port_width << ",0" << endl;
      map_insert(vals, prefix+"data_stride", to_int(get_coeff(addr, d))% capacity/port_width) ;
    }
    std::reverse(vals.at(prefix+"data_stride").begin(), vals.at(prefix+"data_stride").end());
    return vals;
}

vector<ConfigMap> emit_lake_addrgen_config(CodegenOptions options, string op_name, bool is_read,
        UBuffer buf, umap* tmp, map<string, isl_set*> & retrive_dom_map) {

    vector<ConfigMap> ret;
    for (auto map: get_maps(tmp)) {
        cout << "access map: " << str(map) << endl;

        //TODO: remove this in the future, this is a trick that make isl work
        //if we did not rely on isl, we do not need this trick
        if (retrive_dom_map.count(op_name))
            map = retrive_map_domain_with_dim(map, retrive_dom_map.at(op_name));

        string buf_name = range_name(map);
        string micro_buf_name = split_at(buf_name, "_").back();
        auto bmap_vec = get_basic_maps(map);
        int port_width = bmap_vec.size();

        //get pt number, take the lake information
        int bk_num;
        if (is_read) {
            bk_num = port_width / options.mem_tile.out_port_width.at(micro_buf_name);
        } else {
            bk_num = port_width / options.mem_tile.in_port_width.at(micro_buf_name);
        }
        cout << "basic map vector size: " << port_width << endl;
        for (auto bmap: bmap_vec) {
            cout << str(bmap) << endl;
        }
        cout << "Bank number: " << bk_num << endl;
        cout << "mem tile component:" << micro_buf_name
            <<", Bank constraint: : " << options.mem_tile.bank_num.at(micro_buf_name)<< endl;

        //check if violate bank number
        assert(bk_num <= options.mem_tile.bank_num.at(micro_buf_name));

        //get the reduce map for this subbuffer structure
        isl_set* range_per_bank = isl_set_empty(get_space(range(map)));
        for(int i = 0; i < port_width / bk_num; i ++) {
            range_per_bank = unn(range_per_bank, range(to_map(bmap_vec.at(i))));
        }
        //A processing pass for remove starting address in multiple bank cases
        int project_dim;
        if (is_read){
          project_dim = buf.get_consumer_bank_dim_id();
        } else {
          project_dim = buf.get_producer_bank_dim_id();
        }
        if (project_dim != -1) {
          cout << "before project: " << str(range_per_bank) << endl;
          range_per_bank = project_out(range_per_bank, project_dim);

          cout << "after project: " << str(range_per_bank) << endl;
        }
        auto reduce_map = linear_address_map_lake(range_per_bank);

        for (int i = 0; i < bk_num; i ++)
        {
            //pick the corresponding basic map
            auto bmap = bmap_vec.at(i);
            ConfigMap vals;
            bool need_mux = false;
            if (is_read) {
                need_mux = (bk_num < (buf.num_in_ports() / options.mem_tile.in_port_width.at(micro_buf_name)));
            } else {
                need_mux = (bk_num < (buf.num_out_ports() / options.mem_tile.out_port_width.at(micro_buf_name)));
            }

            if (need_mux) {
                vector<int> mux_index;
                vector<int> addr_index;
                int bank_dim_id = buf.get_consumer_bank_dim_id();
                assert(bank_dim_id == num_out_dims(map) - 2);
                cout << "Auto Select bank id: " << bank_dim_id << "Hardcode: " << num_out_dims(map) - 2 << endl;
                for (int i = num_out_dims(map)-1; i >= 0; i--) {
                    //FIXME: this is hardcoded
                    if (i == bank_dim_id) {
                        mux_index.push_back(i);
                    } else {
                        addr_index.push_back(i);
                    }
                }

                //rewrite the address gen
                reduce_map = linear_address_map_with_index(range(map), addr_index);

                auto mux_reduce_map = linear_address_map_with_index(range(map), mux_index);
                auto mux_addr_expr = dot(to_map(bmap), mux_reduce_map);
                isl_aff* addr = get_aff(mux_addr_expr);
                cout << "mux addr aff: " << str(addr) << endl;
                int ww = options.mem_tile.word_width.at(micro_buf_name);
                int capacity = options.mem_tile.capacity.at(micro_buf_name);

                //mux always has port width = 1
                vals.merge(generate_config_from_aff_expr(addr, is_read, true, ww, capacity, 1));
                //string prefix = is_read ? "mux_read" : "mux_write";
                //cout << "\""+prefix+"\"," << "\"" << buf_name << "\"" << endl;
                //cout << "\""+prefix+"_data_starting_addr\"," <<
                //    to_int(const_coeff(addr))/ww  << ",0" << endl;
                //for (int d = 0; d < num_in_dims(addr); d++) {
                //  int ldim = num_in_dims(addr) - d - 1;
                //  cout << "\""+prefix+"_data_stride_" << ldim << "\"," <<
                //      to_int(get_coeff(addr, d))/ww  << ",0" << endl;
                //}
            }

            //TODO: use word width to fix kavya's request
            int ww = options.mem_tile.word_width.at(micro_buf_name);
            int pw = is_read ? options.mem_tile.out_port_width.at(micro_buf_name) :
                options.mem_tile.in_port_width.at(micro_buf_name);
            int capacity = options.mem_tile.capacity.at(micro_buf_name);
            //int ww = is_read ?options.mem_tile.out_port_width.at(micro_buf_name)
            //    : options.mem_tile.in_port_width.at(micro_buf_name);

            isl_map* project_access_map;
            if (project_dim != -1) {
              project_access_map = project_out(to_map(bmap), project_dim);
            } else {
              project_access_map = to_map(bmap);
            }

            auto addr_expr_map = dot(project_access_map, reduce_map);
            cout << str(reduce_map) << endl << str(addr_expr_map) << endl;
            auto addr = get_aff(addr_expr_map);
            cout << str(addr) << endl;
            vals.merge(generate_config_from_aff_expr(addr, is_read, false, ww, capacity, pw));
            //string prefix = is_read ? "read" : "write";
            //cout << prefix + "_data_starting_addr, " << to_int(const_coeff(addr))/ww << endl;
            //for (int d = 0; d < num_in_dims(addr); d++) {
            //    cout << prefix + "_data_stride, " << to_int(get_coeff(addr, d))/ww << endl;
            //}
            ret.push_back(vals);
        }
    }
    return ret;
}


Json create_lake_config(unordered_map<string, MemConnSch> mem_conxs) {
  Json jdata;
  for (auto& map_pair : mem_conxs) {
    auto name = map_pair.first;
    auto data = map_pair.second;
    jdata[name]["dimensionality"] = data.dimensionality;
    if (data.read != "") { jdata[name]["read"] = data.read; }
    if (data.mux_write != "") { jdata[name]["mux_write"] = data.mux_write; }
    if (data.write != "") { jdata[name]["write"] = data.write; }

    for (auto& data_vec : data.vals) {
      jdata[name][data_vec.first] = data_vec.second;
    }
  }
  return jdata;
}

void add_lake_config(Json& jdata, ConfigMap data, int dimensionality, string domain_name) {
    jdata[domain_name]["dimensionality"] = dimensionality;
    for (auto it: data) {
        jdata[domain_name][it.first] = it.second;
    }
}

Json UBuffer::generate_ubuf_args(CodegenOptions& options, map<string, UBuffer> rewrite_buffer) {
    auto hardware_schedule = global_schedule_from_buffers(rewrite_buffer);
    auto glb_access_map = global_access_map_from_buffers(rewrite_buffer);

    /*build a map from OP schedule name to input access map, to output access map
    for each op name generate accessor config and also address generator
    */

    map<string, isl_map*>  op2sched;
    map<string, vector<umap*>> op2write_map, op2read_map;
    map<string, string> op2write_buf, op2read_buf;
    auto retrive_dom_map = get_sets_in_map(retrive_domain_from_buffers(rewrite_buffer));
    for (auto m : get_maps(hardware_schedule)) {
        string op_name = domain_name(m);
        if (retrive_dom_map.count(op_name))
            m = retrive_map_domain_with_dim(m, retrive_dom_map.at(op_name));
        op2sched[op_name] = m;
        for ( auto it: rewrite_buffer) {
            auto buf = it.second;
            auto out_acc_map = buf.producer_map();
            if (domain_name(out_acc_map) == op_name) {
                op2write_buf[op_name] = it.first;
                map_insert(op2write_map, op_name, out_acc_map);
            }
            auto in_acc_map = buf.consumer_map();
            if (domain_name(in_acc_map) == op_name) {
                op2read_buf[op_name] = it.first;
                map_insert(op2read_map, op_name, in_acc_map);
            }
        }
    }
    //cout << "read map:" << endl;
    //for (auto it : op2read_map) {
    //    string op_name = it.first;
    //    string buf_name = op2read_buf.at(op_name);
    //    cout <<"\t opname: " << it.first <<  endl;
    //    for (auto tmp: it.second) {
    //        emit_lake_addrgen_config(options, op_name, true, rewrite_buffer.at(buf_name), tmp, retrive_dom_map);
    //    }
    //}
    //cout << "write map:" << endl;
    //map<string, vector<isl_map*> > write_map;
    //for (auto it : op2write_map) {
    //    cout <<"\t opname: " << it.first << endl;
    //    string op_name = it.first;
    //    string buf_name = op2write_buf.at(op_name);
    //    for (auto tmp: it.second) {
    //        emit_lake_addrgen_config(options, op_name, false, rewrite_buffer.at(buf_name) , tmp, retrive_dom_map);
    //    }
    //}
    unordered_map<string, MemConnSch> data;
    for (auto it : op2sched) {
        cout <<"\n\n\tEmit config for opname: " << it.first << str(it.second) << endl;
        auto sched = get_aff(it.second);
        string op_name = it.first;
        string key = split_at(op_name, "_").back();
        MemConnSch tmp;
        tmp.dimensionality = num_in_dims(sched);
        tmp.vals.merge(emit_lake_controller_config(::domain(it.second), sched));

        vector<ConfigMap> read_addr_config, write_addr_config;

        if (op2read_map.count(op_name)) {
            auto read_map = op2read_map.at(it.first);
            string producer_buf_name = op2read_buf.at(it.first);
            //tmp.read = producer_buf_name;
            for (auto tmp: read_map) {
                concat( read_addr_config,
                        emit_lake_addrgen_config(options, op_name, true,
                            rewrite_buffer.at(producer_buf_name), tmp, retrive_dom_map));
            }
        }

        if (op2write_map.count(op_name)) {
            auto write_map = op2write_map.at(it.first);
            string consumer_buf_name = op2write_buf.at(it.first);
            //tmp.write = consumer_buf_name;
            for (auto tmp: write_map) {
                concat( write_addr_config,
                        emit_lake_addrgen_config(options, op_name, false,
                            rewrite_buffer.at(consumer_buf_name), tmp, retrive_dom_map));
            }
        }
        int cnt = 0;
        if (read_addr_config.size() == 0) {
            for (auto write_config: write_addr_config) {
                string config_key = "in2agg_" + to_string(cnt);
                auto cpy = tmp;
                cpy.vals.merge(write_config);
                data[config_key] = cpy;
                cnt ++;
            }
        } else if(write_addr_config.size() == 0) {
            for (auto read_config: read_addr_config) {
                string config_key = "tb2out_" + to_string(cnt);
                auto cpy = tmp;
                cpy.vals.merge(read_config);
                data[config_key] = cpy;
                cnt ++;
            }
        } else {
            for (auto read_config: read_addr_config) {
                for (auto write_config: write_addr_config) {
                    string config_key = key;
                    auto cpy = tmp;
                    cpy.vals.merge(read_config);
                    cpy.vals.merge(write_config);
                    data[config_key] = cpy;
                }
            }
        }
    }
    return create_lake_config(data);
}

CoreIR::Instance* affine_controller_use_lake_tile(
        ModuleDef* def,
        CoreIR::Context* context,
        isl_set* dom,
        isl_aff* aff,
        string ub_ins_name) {

  CoreIR::Instance* buf;
  CoreIR::Values genargs = {
    {"width", CoreIR::Const::make(context, 16)},
    {"num_inputs", CoreIR::Const::make(context, 0)},
    {"num_outputs", CoreIR::Const::make(context, 0)},
    {"has_stencil_valid", CoreIR::Const::make(context, true)},
    {"ID", CoreIR::Const::make(context, context->getUnique())},
    {"has_flush",  CoreIR::Const::make(context, true)}
  };
  auto stencil_valid = emit_lake_controller_config(dom, aff);
  //FIXME:possible bug if one ubuffer contains more than one tile
  json config_file;
  add_lake_config(config_file, stencil_valid, num_in_dims(aff), "stencil_valid");
  cout << "Add ub node to be aff ctrl"  << endl;

  buf = def->addInstance(ub_ins_name, "cgralib.Mem_amber", genargs);
  buf->getMetaData()["config"] = config_file;
  buf->getMetaData()["mode"] = "lake";

  auto clk_en_const = def->addInstance(ub_ins_name+"_clk_en_const", "corebit.const",
          {{"value", CoreIR::Const::make(context, true)}});

  //garnet wire reset to flush of memory
  def->connect(buf->sel("flush"), def->sel("self.reset"));
  //def->connect(buf->sel("flush"), def->sel("self.flush"));
  //def->connect(buf->sel("rst_n"), def->sel("self.rst_n"));
  def->connect(buf->sel("clk"), def->sel("self.clk"));
  def->connect(buf->sel("clk_en"), clk_en_const->sel("out"));
  def->connect(buf->sel("rst_n"), clk_en_const->sel("out"));

  return buf;
}

CoreIR::Instance* UBuffer::generate_lake_tile_instance(
        ModuleDef* def,
        CodegenOptions options,
        string ub_ins_name,
        size_t input_num, size_t output_num,
        bool has_stencil_valid, bool has_flush) {

  auto context = def->getContext();
  CoreIR::Instance* buf;
  CoreIR::Values genargs = {
    {"width", CoreIR::Const::make(context, port_widths)},
    {"num_inputs", CoreIR::Const::make(context, input_num)},
    {"num_outputs", CoreIR::Const::make(context, output_num)},
    {"has_stencil_valid", CoreIR::Const::make(context, has_stencil_valid)},
    {"ID", CoreIR::Const::make(context, context->getUnique())},
    {"has_flush",  CoreIR::Const::make(context, has_flush)}
  };
  CoreIR::Values modargs = {
    {"mode", CoreIR::Const::make(context, "lake")}
  };
  if (has_stencil_valid) {
    generate_stencil_valid_config(options);
  }
  cout << "Add ub node with input_num = " << input_num
      << ", output_num = " << output_num << endl;
  if (options.pass_through_valid) {
    //modargs["config"] = CoreIR::Const::make(context, config_file);
    buf = def->addInstance(ub_ins_name, "cgralib.Mem_amber", genargs);
    buf->getMetaData()["config"] = config_file;
    buf->getMetaData()["mode"] = string("lake");
  } else {
    //TODO: remove cwlib in the future
    genargs["config"] = CoreIR::Const::make(context, config_file);
    buf = def->addInstance(ub_ins_name, "cwlib.Mem", genargs, modargs);
  }

  auto clk_en_const = def->addInstance(ub_ins_name+"_clk_en_const", "corebit.const",
          {{"value", CoreIR::Const::make(context, true)}});

  //garnet wire reset to flush of memory
  def->connect(buf->sel("flush"), def->sel("self.reset"));
  //def->connect(buf->sel("flush"), def->sel("self.flush"));
  //def->connect(buf->sel("rst_n"), def->sel("self.rst_n"));
  def->connect(buf->sel("clk"), def->sel("self.clk"));
  def->connect(buf->sel("clk_en"), clk_en_const->sel("out"));
  def->connect(buf->sel("rst_n"), clk_en_const->sel("out"));

  //Wire stencil valid
  //if (options.pass_through_valid) {
  //  if (has_stencil_valid) {
  //    def->connect(buf->sel("stencil_valid"), def->sel("self."+get_bundle(pick(outpts)) + "_extra_ctrl"));
  //    use_memtile_gen_stencil_valid = true;
  //  }
  //}
  return buf;
}

void UBuffer::generate_stencil_valid_config(CodegenOptions& options) {
  auto outpt_sched = get_stencil_valid_sched(pick(bank_list).name);
  cout << "original outpt schedule: " << str(get_outpt_sched()) << endl;
  assert(isl_union_map_is_single_valued(outpt_sched));

  auto outpt_sched_1D = linear_schedule(to_map(outpt_sched), options.iis, 0, false);
  cout << "Stencil Valid signal 1D: " << str(outpt_sched_1D) << endl;
  auto sched = get_aff(outpt_sched_1D);
  auto stencil_valid = emit_lake_controller_config(::domain(outpt_sched_1D), sched);
  //FIXME:possible bug if one ubuffer contains more than one tile
  add_lake_config(config_file, stencil_valid, num_in_dims(sched), "stencil_valid");
}

void lattice_schedule_buf(UBuffer& buffer, umap* opt_sched) {

  //compute the bound of the schedule
  cout << str(lexmin(range(opt_sched))) << endl << str(lexmax(range(opt_sched))) <<endl;
  auto bound = Box(opt_sched);
  isl_set* sched_set = bound.to_set(buffer.ctx, "");
  auto bset_vec = constraints(sched_set);
  for (auto bset: bset_vec) {
      cout << "constraints: " << str(bset) << endl;
  }

  //Initialize the variable for lattice count
  size_t cycle = 0;
  cout << str(sched_set) << endl;
  auto point_vec = get_points(sched_set);
  std::sort(point_vec.begin(), point_vec.end(), lex_lt_pt);
  auto & buf = buffer;
  for (auto point : point_vec) {
    //cout << str(point) << endl;
    //auto input_sched = op2sched.at("input");
    //auto isExeQP = card(its_range(input_sched, to_uset(isl_set_from_point(cpy(point)))));
    //cout <<"Card Expr: " << str(isExeQP) << endl;
    //bool isExe = int_lower_bound(isExeQP) == 1;
    //cout << "input OP execute in this point = " << isExe << endl;
    //cout << "Buffer: " << buf.name << endl;
    //cout << str(point) << " read = " << buf.is_rd(point) << endl;
    //cout << str(point) << " write = " << buf.is_wr(point) << endl;
    //tcout << endl;


    if (buf.is_wr(point) ) {
      auto pt = pick(buf.get_in_ports());
      auto rd_sched = to_map(buf.schedule.at(pt));
      auto iter_set = domain(its_range(rd_sched, isl_set_from_point(point)));
      buf.mark_write(cycle, iter_set);

      cout << "Buffer: " << buf.name << endl;
      //cout << str(point) << " read = " << buf.is_rd(point) << endl;
      cout << str(point) << " write = " << buf.is_wr(point) << " at cycle:" << cycle << endl;
      cout << endl;

    }
    if (buf.is_rd(point)) {
      auto pt = pick(buf.get_out_ports());
      auto rd_sched = to_map(buf.schedule.at(pt));
      auto iter_set = domain(its_range(rd_sched, isl_set_from_point(point)));
      buf.mark_read(cycle, iter_set);
      cout << "read at iter: " << str(iter_set) << endl;

      cout << "Buffer: " << buf.name << endl;
      cout << str(point) << " read = " << buf.is_rd(point) << " at cycle:" << cycle << endl;
      //cout << str(point) << " write = " << buf.is_wr(point) << " at cycle:" << cycle << endl;
      cout << endl;
    }
    cycle ++;
  }
}

void generate_lake_stream(CodegenOptions & options,
        map<string, UBuffer>& buffers_opt,
        umap* hardware_schedule) {
  for (auto & it : buffers_opt) {
    lattice_schedule_buf(it.second, hardware_schedule);
  }
  string dir = options.dir + "lake_stream/";
  cout << "Generating lake smt stream!" << endl;
  cmd("mkdir -p " + dir);
  emit_lake_address_stream2file(buffers_opt, dir);
}

void emit_lake_address_stream2file(map<string, UBuffer> buffers_opt, string dir) {
  map<string, pair<lakeStream, lakeStream> > top_stream;
  for (auto it: buffers_opt) {
    string buf_name = it.first;
    UBuffer buf = it.second;
    if (buf.get_in_ports().size() == 0 || buf.get_out_ports().size() == 0) {
      continue;
    }
    vector<int> sram_read = buf.read_cycle;
    vector<int> sram_write = buf.write_cycle;
    auto read_addr = buf.read_addr;
    auto write_addr = buf.write_addr;
    lakeStream stream_data = emit_top_address_stream(dir + "/" + buf_name , sram_read, sram_write, read_addr, write_addr);
    if (contains(buf_name, "agg")) {
        string tile_name = take_until_str(buf_name, "_agg");
        top_stream[tile_name].first = stream_data;
    } else if (contains(buf_name, "tb")) {
        string tile_name = take_until_str(buf_name, "_tb");
        top_stream[tile_name].second = stream_data;
    }
  }
  for (auto it: top_stream) {
    auto agg_tb_pair = it.second;
    lakeStream top(agg_tb_pair.first, agg_tb_pair.second);
    top.emit_csv(dir + "/" + it.first + "_top");
  }
}

lakeStream emit_top_address_stream(string fname, vector<int> read_cycle, vector<int> write_cycle,
        vector<vector<int> > read_addr, vector<vector<int> > write_addr) {
  ofstream out(fname+"_SMT.csv");
  cout << "fname: " << fname << endl;

  lakeStream ret;

  //TODO: put this into a tile constraint file
  int input_width = pick(write_addr).size();
  int output_width = pick(read_addr).size();
  ret.in_width = input_width;
  ret.out_width = output_width;

  int cycle = 0;
  size_t rd_itr = 0;
  size_t wr_itr = 0;
  out << "data_in, valid_in, data_out, valid_out" << endl;
  auto addr_out = vector<int>(output_width, 0);
  while (rd_itr < read_cycle.size() || wr_itr < write_cycle.size()) {
    bool valid_in = false, valid_out = false;
    auto addr_in = vector<int>(input_width, 0);
    if (rd_itr < read_cycle.size()) {
      if (read_cycle.at(rd_itr) == cycle) {
        valid_out = true;
        for (size_t i = 0; i < read_addr.at(rd_itr).size(); i ++)
          addr_out.at(i) = read_addr.at(rd_itr).at(i);

        //cout << cycle << tab(1) << "rd" << tab(1) << addr_out << endl;
        //out << "rd@" << cycle << tab(1) << ",data=" <<sep_list(addr_out, "[", "]", " ") << endl;
        rd_itr ++;
      }
    }
    if (wr_itr < write_cycle.size()) {
      if (write_cycle.at(wr_itr) == cycle) {
        valid_in = true;
        for (size_t i = 0; i < write_addr.at(wr_itr).size(); i ++)
          addr_in.at(i) = write_addr.at(wr_itr).at(i);
        //cout << cycle << tab(1) << "wr" << tab(1) << addr_in << endl;
        //out << "wr@" << cycle << tab(1) << ",data="<< sep_list(addr_in, "[", "]", " ") << endl;
        //out << cycle << tab(1) << "wr"  << endl;
        wr_itr ++;
      }
    }

    int out_width = pick(read_addr).size();
    int in_width = pick(write_addr).size();
    int mul_out = pow(2, out_width) - 1;
    int mul_in = pow(2, in_width) - 1;

    //Some fix for the output format
    //string l_in = addr_in.size() > 1 ? "[[" : "";
    //string l_out = addr_out.size() > 1 ? "[[" : "";
    //string r_in = addr_in.size() > 1 ? "]]" : "";
    //string r_out = addr_out.size() > 1 ? "]]" : "";

    //out << sep_list(addr_in, l_in, r_in, "],[") << ", " << sep_list(addr_out, l_out, r_out, "],[") << endl;
    out << sep_list(addr_in, "[", "]", " ") << ", "
        << valid_in << ", "
        << sep_list(addr_out, "[", "]", " ") << ", "
        << valid_out << endl;
    ret.append_data(addr_in, addr_out, valid_in, valid_out);

    cycle ++;
  }
  out.close();
  return ret;
}


//generate/realize the rewrite structure inside ubuffer node
void UBuffer::generate_coreir(CodegenOptions& options,
        CoreIR::ModuleDef* def,
        schedule_info& info,
        bool with_ctrl) {
  auto context = def->getContext();
  //for (auto it : get_banks()) {
    //auto connection = it.first;
    //auto bk = it.second;
    ////cout << "[inpt: " << connection.first << "] -> [bk: " << bk.name << ", delay = " << bk.maxdelay <<  "] -> [outpt:" << connection.second <<  "]\n";
  //}

  //map save the register
  map<string, CoreIR::Instance*> pt2psth;
  map<string, CoreIR::Wireable*> wire2out;
  map<string, CoreIR::Wireable*> pt2wire;
  map<string, std::vector<CoreIR::Wireable*>> outpt_bank_rd, outpt_bank_valid;
  map<string, CoreIR::Wireable*> reg_in;
  //define the map save valid output using customized comparator
  auto valid_out = std::map<string, CoreIR::Wireable*,
       std::function<bool(const string&, const string&)>>{
        [this](const string& l, const string& r) {
            auto l_start = lexminpt(range(access_map.at(l)));
            auto r_start = lexminpt(range(access_map.at(r)));
            return lex_lt_pt(l_start, r_start);
            }
  };

  //TODO: possible bug, the sequence may not be correct
  for (auto b : get_in_bundles()) {
    int pix_width = port_widths;
    int pt_cnt = 0;
    auto inpt_bd_wire = def->sel("self." + b);
    for (auto inpt : port_bundles.at(b)) {
      pt2wire[inpt] = inpt_bd_wire->sel(pt_cnt);
      cout << "add input: " << inpt << " to pt2wire" << endl;
      pt_cnt ++;
    }
  }
  for (auto b : get_out_bundles()) {
    int pix_width = port_widths;
    int pt_cnt = 0;
    auto outpt_bd_wire = def->sel("self." + b);
    for (auto outpt : port_bundles.at(b)) {
      pt2wire[outpt] = outpt_bd_wire->sel(pt_cnt);
      cout << "add output: " << outpt << " to pt2wire" << endl;
      pt_cnt ++;
    }
  }

  //sort the bank by delay first
  auto bank_list = get_banks_and_sort();
  //sort(bank_list.begin(), bank_list.end(), [](const bank l, const bank r) {
  //          return l.maxdelay > r.maxdelay;
  //        } );

  //generate all the ubuffer for internal vectorization
  auto rewrite_buffer = generate_ubuffer(options);

  //Some control signal for stencil valid signal
  bool has_stencil_valid = false;
  bool use_memtile_gen_stencil_valid = false;

  //Judge if stencil valid is needed from the very beginning
  if (options.pass_through_valid) {
    //generate stencil valid
    cout << "ubuffer global schedule: " << str(global_schedule()) << endl;
    cout << "ubuffer output schedule: " << str(get_outpt_sched()) << endl;
    if (!equal(global_outpt_sched(), get_outpt_sched())) {
      has_stencil_valid = true;
      use_memtile_gen_stencil_valid = false;
    }
  }
  for (auto bk : bank_list) {
    //assert(false);
    std::set<string> inpts = get_bank_inputs(bk.name);
    std::set<string> outpts = get_bank_outputs(bk.name);
    auto buf_inpts = get_in_ports();
    cout << "Bank:" << bk.name << " has max_delay: " << bk.maxdelay << endl;
    if (bk.maxdelay == 0) {
      //this is a wire
      assert(inpts.size() == 1);

      //broadcast the input port to a series of output port
      if (isIn.at(pick(inpts))) {
        for (auto outpt: outpts) {
          def->connect(pt2wire.at(pick(inpts)), pt2wire.at(outpt));
          wire2out[outpt] = pt2wire.at(pick(inpts));
        }
      } else {
        for (auto outpt: outpts) {
          if (wire2out.count(pick(inpts))) {
            //if (pt2psth.count(outpt)) {
            //  auto psth = pt2psth.at(outpt);
            //  def->connect(psth->sel("out"), wire2out.at(pick(inpts)));
            //} else {
              def->connect(wire2out.at(pick(inpts)), pt2wire.at(outpt));
              wire2out[outpt] = wire2out.at(pick(inpts));
            //}
          } else {
            //auto psth = CoreIR::addPassthrough(pt2wire.at(outpt), outpt + "_psth");
            //def->connect(psth->sel("in"), pt2wire.at(outpt));
            //pt2psth[outpt] = psth;
          }
        }
      }
    } else if (bk.maxdelay <= options.merge_threshold) {
      //TODO: support dilation conv, register information is in maxdelay
      //add register, wire valid from ubuffer
      CoreIR::Wireable* last_out;
      for (size_t i = 0; i < bk.maxdelay; i ++) {
        auto reg = def->addInstance("d_reg_"+context->getUnique(), "mantle.reg",
            {{"width", CoreIR::Const::make(context, port_widths)},
            {"has_en", CoreIR::Const::make(context, false)}});
        assert(inpts.size() == 1);
        assert(outpts.size() == 1);
        //do not wire input for the first pass
        //Wire the shift register chain
        if (i == 0) {
          if (isIn.at(pick(inpts))) {
            def->connect(reg->sel("in"), pt2wire.at(pick(inpts)));
          } else {
            reg_in[pick(inpts)] = reg->sel("in");
            wire2out[pick(outpts)] = reg->sel("out");
          }
        } else {
          def->connect(reg->sel("in"), last_out);
        }
        if (i == bk.maxdelay - 1) {
          def->connect(reg->sel("out"), pt2wire.at(pick(outpts)));
        } else {
          last_out = reg->sel("out");
        }
      }
    } else {
      //generate a memory for this ubuffer
      contain_memory_tile = true;

      string ub_ins_name = "ub_"+bk.name;

      //vectorization pass for lake tile
      if (options.rtl_options.target_tile == TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN) {
        buffer_vectorization(options.iis, bk.name + "_ubuf", 1, 4, rewrite_buffer);
        config_file = generate_ubuf_args(options, rewrite_buffer);
      }

      //Generate SMT stream if needed
      if (options.emit_smt_stream) {
        generate_lake_stream(options, rewrite_buffer, global_schedule_from_buffers(rewrite_buffer));
      }

      //create the tile instance
      CoreIR::Instance* buf = generate_lake_tile_instance(def, options, ub_ins_name,
        banks_to_inputs.at(bk.name).size(), banks_to_outputs.at(bk.name).size(),
        has_stencil_valid & (!use_memtile_gen_stencil_valid), true);

      //Wire stencil valid
      if (options.pass_through_valid) {
        if (has_stencil_valid & (!use_memtile_gen_stencil_valid)) {
          def->connect(buf->sel("stencil_valid"), def->sel("self."+get_bundle(pick(outpts)) + "_extra_ctrl"));
          use_memtile_gen_stencil_valid = true;
        }
      }

      int inpt_cnt = 0, outpt_cnt = 0;
      if (inpts.size() == 1) {
        //line buffer case
        string  inpt = pick(inpts);
        if (isIn.at(inpt)){
          def->connect(buf->sel("data_in_" + to_string(inpt_cnt)), pt2wire.at(inpt));

          //There is no control signal
          if (with_ctrl) {
            def->connect(buf->sel("wen_" + to_string(inpt_cnt)), def->sel("self."+get_bundle(inpt)+"_en"));
            //also connect ren
            for (size_t out_i = 0; out_i < outpts.size(); out_i ++ ) {
              def->connect(buf->sel("ren_" + to_string(out_i)), def->sel("self."+get_bundle(inpt)+"_en"));
            }
          }
        } else {
          def->connect(buf->sel("data_in_" + to_string(inpt_cnt)), wire2out.at(inpt));
          cout << "Input port: " << inpt << endl;
          if (with_ctrl) {
            def->connect(buf->sel("wen_" + to_string(inpt_cnt)), wire2out.at(inpt + "_valid"));
            //also connect ren
            for (size_t out_i = 0; out_i < outpts.size(); out_i ++ ) {
              def->connect(buf->sel("ren_" + to_string(out_i)), wire2out.at(inpt + "_valid"));
            }
          }
        }
        for (auto it: bk.delay_map) {
            cout << "Bank delay map: "  <<it.first << ", " << it.second << endl;
        }

        vector<string> pt_vec(outpts.begin(), outpts.end());
        sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
              auto l_start = lexminpt(range(access_map.at(l)));
              auto r_start = lexminpt(range(access_map.at(r)));
              return lex_lt_pt(l_start, r_start);
              });
        for (auto outpt: pt_vec) {
          //need a second pass push all wire into a list
          //def->connect(buf->sel("dataout_"+to_string(outpt_cnt)), pt2wire.at(outpt));
          CoreIR::Wireable* tmp = buf->sel("data_out_"+to_string(outpt_cnt));
          CoreIR::map_insert(outpt_bank_rd, outpt, tmp);

          wire2out[outpt] = buf->sel("data_out_" + to_string(outpt_cnt));
          //wire2out[outpt + "_valid"] = buf->sel("valid_" + to_string(outpt_cnt));
          //TODO: figure out valid wiring strategy
          //Wire the bank with the largest delay
          //valid_out[outpt] = buf->sel("valid_" + to_string(outpt_cnt));
          if (with_ctrl) {
            CoreIR::map_insert(outpt_bank_valid, outpt,
                  (CoreIR::Wireable*)buf->sel("valid_" + to_string(outpt_cnt)));
          }
          outpt_cnt++;
        }
      } else {
        //Wiring the multi input case
        for (auto inpt: inpts) {
          def->connect(buf->sel("data_in_" + to_string(inpt_cnt)), pt2wire.at(inpt));
          if (with_ctrl) {
            def->connect(buf->sel("wen_" + to_string(inpt_cnt)), def->sel("self."+get_bundle(inpt)+"_en"));
          }
          inpt_cnt ++;
        }
        for (auto outpt: outpts) {
          //need a second pass push all wire into a list
          //def->connect(buf->sel("dataout_"+to_string(outpt_cnt)), pt2wire.at(outpt));
          CoreIR::Wireable* tmp = buf->sel("data_out_"+to_string(outpt_cnt));
          CoreIR::map_insert(outpt_bank_rd, outpt, tmp);

          //use the first port in the chain to be the output valid
          if (with_ctrl) {
            CoreIR::map_insert(outpt_bank_valid, outpt,
                  (CoreIR::Wireable*)buf->sel("valid_" + to_string(outpt_cnt)));
          }
          //TODO: need a way to figure out the ren drive in this buffer
          outpt_cnt++;
        }
      }

      //generate verilog collateral
      generate_lake_tile_verilog(options, buf);

    }
  }

  //This is the situation that stencil valid is needed but do not have memtile in ubufub_ins_namefer
  if (has_stencil_valid & (!use_memtile_gen_stencil_valid)) {
    CoreIR::Instance* buf = generate_lake_tile_instance(def, options,
            this->name + "_stencil_valid_gen", 0, 0, true, true);
    auto out_bds = get_out_bundles();

    //Only consider one output bundle now
    assert(out_bds.size() == 1);

    def->connect(buf->sel("stencil_valid"), def->sel("self." + pick(out_bds) + "_extra_ctrl"));
    use_memtile_gen_stencil_valid = true;

    //generate verilog collateral
    generate_lake_tile_verilog(options, buf);
  }

  //wire the control var if not using stencil_Valid
  for (auto bk : bank_list) {
    //assert(false);
    std::set<string> inpts = get_bank_inputs(bk.name);
    std::set<string> outpts = get_bank_outputs(bk.name);
    if (options.pass_through_valid) {
        if (!has_stencil_valid){
          def->connect(def->sel("self." + get_bundle(pick(inpts)) + "_extra_ctrl"),
                  def->sel("self." + get_bundle(pick(outpts)) + "_extra_ctrl"));
        }
    }
  }

  for (auto itr: pt2psth) {
      CoreIR::inlineInstance(itr.second);
  }

  //wiring the valid if we are using valid
  if (with_ctrl) {
    map<string, bool> bundle_valid;
    for (auto out_bd: get_out_bundles()) {
      bundle_valid[out_bd] = false;
    }
    for (auto itr: outpt_bank_rd) {
      string outpt = itr.first;

      //wire the valid signal
      auto bd = container_bundle(outpt);
      if (bundle_valid.at(bd) == false) {
        def->connect(pick(outpt_bank_valid.at(outpt)),
                def->sel("self." + bd + "_valid"));
        bundle_valid.at(bd) = true;
      }
      cout << "connect valid: " << outpt <<  endl;
    }
  }

  //Add the chaining pass
  std::set<Wireable*> chain_enable_tile, chain_disable_tile;
  for (auto itr: outpt_bank_rd) {
    string outpt = itr.first;
    auto connect_vec = itr.second;

    if (connect_vec.size() == 1) {
      def->connect(pick(connect_vec), pt2wire.at(outpt));
      cout << "Parent node: " << pick(connect_vec)->getTopParent()->toString() << endl;;
      chain_disable_tile.insert(pick(connect_vec)->getTopParent());
    }
    else {
      //wiring the chaining pass
      for (size_t it = 0; it < connect_vec.size(); it ++) {
        auto wire = connect_vec.at(it);
        if (it == 0) {
          //wire the first output to the ubuf outpt
          def->connect(wire, pt2wire.at(outpt));

          //push it to chain enable
          chain_enable_tile.insert(wire->getTopParent());
        }
        else {
          auto last_bank = connect_vec[it-1]->getTopParent();
          string portID = split_at(wire->toString(), "_").back();
          def->connect(wire, last_bank->sel("chain_in_" + portID));

          //push it to chain enable tile
          chain_enable_tile.insert(wire->getTopParent());
        }
      }
    }
  }

  //wire the chain enable disable signal
  if (chain_enable_tile.size()) {
    auto chain_en_const = def->addInstance("chain_en_const"+context->getUnique(), "corebit.const",
            {{"value", CoreIR::Const::make(context, true)}});
    for (auto t: chain_enable_tile) {
      def->connect(t->sel("chain_chain_en"), chain_en_const->sel("out"));
    }
  }

  if (chain_disable_tile.size()) {
    auto chain_en_const = def->addInstance("chain_disen_const"+context->getUnique(), "corebit.const",
            {{"value", CoreIR::Const::make(context, false)}});
    for (auto t: chain_disable_tile) {
      def->connect(t->sel("chain_chain_en"), chain_en_const->sel("out"));
    }
  }


  //second pass wire all the register input port
  for (auto it: reg_in) {
    string outpt = it.first;
    auto in = it.second;
    auto out = wire2out.at(outpt);
    def->connect(in, out);
  }

}


  CoreIR::Module* generate_coreir_select(CodegenOptions& options, CoreIR::Context* c, const string& outpt, UBuffer& buf) {
    int width = buf.port_widths;

    cout << "====== creating select for " << outpt << " on buffer " << buf.name << endl;
    //cout << buf << endl;
    //cout << "====== end of buffer" << endl;

    map<string, isl_set*> in_ports_to_conditions =
      input_ports_to_conditions(outpt, buf);
    cout << tab(1) << "====== Conditions for ports..." << endl;
    for (auto pt : in_ports_to_conditions) {
      cout << tab(1) << pt.first << " -> " << str(pt.second) << endl;
    }

    assert(in_ports_to_conditions.size() > 0);
    int num_select_vars = num_dims(pick(in_ports_to_conditions).second);

    auto ns = c->getNamespace("global");
      vector<pair<string, CoreIR::Type*> >
        ub_field{{"clk", c->Named("coreir.clkIn")},
          {"out", c->Bit()->Arr(width)}};
      vector<string> possible_source_banks;
      for (auto b : buf.get_banks()) {
        if (elem(outpt, buf.get_bank_outputs(b.name))) {
          ub_field.push_back({b.name, c->BitIn()->Arr(width)});
          possible_source_banks.push_back(b.name);
          cout << tab(2) << "adding field for source bank: " << b.name << endl;
        }
      }

      ub_field.push_back({"d", c->BitIn()->Arr(16)->Arr(num_select_vars)});

      string distrib = outpt + "_select";
      CoreIR::RecordType* utp = c->Record(ub_field);
      auto bcm = ns->newModuleDecl(distrib, utp);
      auto bdef = bcm->newModuleDef();

      vector<string> possible_ports;
      for (auto pt : buf.get_in_ports()) {
        if (buf.has_bank_between(pt, outpt)) {
          possible_ports.push_back(pt);
        }
      }

      cout << tab(2) << "possible ports = " << possible_ports.size() << endl;
      assert(possible_ports.size() == 1 || possible_ports.size() == 2);

      if (possible_ports.size() == 1) {
        cout << tab(2) << "only one possible port: " << possible_ports.at(0);
        for (auto inpt : possible_ports) {
          auto b = buf.get_bank_between(inpt, outpt);
          bdef->connect(bdef->sel("self")->sel(b.name), bdef->sel("self.out"));
          break;
        }
      } else {
        assert(possible_ports.size() == 2);
        string pt0 = possible_ports.at(0);
        string b0_name = buf.bank_between(pt0, outpt);
        string pt1 = possible_ports.at(1);
        string b1_name = buf.bank_between(pt1, outpt);
        cout << tab(2) << "creating coreir for set: " << str(map_find(pt1, in_ports_to_conditions)) << endl;
        CoreIR::Module* in_set_mod = coreir_for_set(c, map_find(pt1, in_ports_to_conditions));
        auto in_set = bdef->addInstance("set_select", in_set_mod);
        bdef->connect(in_set->sel("d"), bdef->sel("self.d"));
        auto mux = cmux(bdef, width,
            bdef->sel("self.out"),
            delaybit(bdef,
              in_set->sel("valid")),
            bdef->sel("self")->sel(b0_name),
            bdef->sel("self")->sel(b1_name));
      }

      bcm->setDef(bdef);
      return bcm;
  }

  //CoreIR::Instance* add_port_controller(CoreIR::ModuleDef* def, const std::string& inpt, UBuffer& buf) {
    //cout << "Buffer..." << endl;
    //cout << buf << endl;

    //auto c = def->getContext();

    //auto sched = buf.schedule.at(inpt);
    //cout << "sched = " << str(sched) << endl;
    //auto sms = get_maps(sched);
    //assert(sms.size() == 1);

    //auto svec = isl_pw_multi_aff_from_map(sms.at(0));

    //vector<pair<isl_set*, isl_multi_aff*> > pieces =
      //get_pieces(svec);
    //assert(pieces.size() == 1);

    //auto saff = pieces.at(0).second;
    //auto dom = pieces.at(0).first;

    //cout << "sched = " << str(saff) << endl;
    //cout << tab(1) << "dom = " << str(dom) << endl;

    //// TODO: Assert multi size == 1
    //auto aff = isl_multi_aff_get_aff(saff, 0);
    //auto aff_c = affine_controller(c, dom, aff);

    //aff_c->print();
    //return def->addInstance(controller_name(inpt), aff_c);
  //}

  CoreIR::Wireable* control_vars(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf) {
    //return def->sel(controller_name(reader))->sel("d");
    string bundle = buf.container_bundle(reader);
    return def->sel("self." + bundle + "_ctrl_vars");
  }

  CoreIR::Wireable* control_en(CoreIR::ModuleDef* def, const std::string& reader, UBuffer& buf) {
    string bundle = buf.container_bundle(reader);
    if (buf.is_in_pt(reader)) {
      return def->sel("self." + bundle + "_wen");
    } else {
      return def->sel("self." + bundle + "_ren");
    }
    //return def->sel(controller_name(reader))->sel("valid");
  }

  CoreIR::Module* coreir_broadcast(CoreIR::Context* c, const std::string& inpt, UBuffer& buf) {
    int width = buf.port_widths;
    CoreIR::Namespace* ns = c->getNamespace("global");

    vector<pair<string, CoreIR::Type*> >
      ub_field{
        {"in", c->BitIn()->Arr(width)},
          {"en", c->BitIn()},
          {"valid", c->Bit()}};
    for (auto b : buf.get_banks()) {
      if (elem(inpt, buf.get_bank_inputs(b.name))) {
        ub_field.push_back({b.name, c->Bit()->Arr(width)});
      }
    }

    string distrib = inpt + "_broadcast";
    CoreIR::RecordType* utp = c->Record(ub_field);
    auto bcm = ns->newModuleDecl(distrib, utp);
    auto bdef = bcm->newModuleDef();
    //auto in_sel = delay(bdef, bdef->sel("self.in"), width);
    //auto in_en = delaybit(bdef, bdef->sel("self.en"));

    auto in_sel = bdef->sel("self.in");
    auto in_en = bdef->sel("self.en");
    for (auto b : buf.get_banks()) {
      if (elem(inpt, buf.get_bank_inputs(b.name))) {
        //bdef->connect(bdef->sel("self")->sel(b.name), bdef->sel("self.in"));
        bdef->connect(bdef->sel("self")->sel(b.name), in_sel);
      }
    }

    //bdef->connect("self.en", "self.valid");
    bdef->connect(bdef->sel("self.valid"), in_en);

    bcm->setDef(bdef);
    return bcm;
  }

  void generate_shift_register(CodegenOptions& options, UBuffer& buf, CoreIR::ModuleDef* def) {
    for (auto in : buf.get_in_ports()) {
      cout << tab(1) << in << endl;

    }
    assert(false);
  }

  CoreIR::Instance* build_addrgen(const std::string& reader, UBuffer& buf, CoreIR::ModuleDef* def) {
    auto c = def->getContext();

    cout << "Building addrgen for " << reader << endl;
    isl_union_set* rddom = isl_union_set_read_from_str(buf.ctx, "{}");
    for (auto inpt : buf.get_in_ports()) {
      rddom = unn(rddom, range(buf.access_map.at(inpt)));
    }
    for (auto inpt : buf.get_out_ports()) {
      rddom = unn(rddom, range(buf.access_map.at(inpt)));
    }
    auto acc_map = to_map(buf.access_map.at(reader));
    cout << tab(1) << "=== acc_map = " << str(acc_map) << endl;
    auto acc_aff = get_aff(acc_map);
    cout << tab(2) << "=== acc aff = " << str(acc_aff) << endl;
    auto reduce_map = linear_address_map(to_set(rddom));
    auto addr_expr = dot(acc_map, reduce_map);
    auto addr_expr_aff = get_aff(addr_expr);
    cout << tab(3) << "==== addr expr aff: " << str(addr_expr_aff) << endl;

    auto aff_gen_mod = coreir_for_aff(c, addr_expr_aff);
    auto agen = def->addInstance("addrgen_" + reader + c->getUnique(), aff_gen_mod);
    return agen;
  }

  void generate_banks(CodegenOptions& options, UBuffer& buf, CoreIR::ModuleDef* def) {

    //generate_platonic_ubuffer(options, buf);

    //return;

    int width = buf.port_widths;
    auto c = def->getContext();
    auto ns = c->getNamespace("global");

    // Caught between a few issues, one is:
    // Q: How do we model a quad-port tile with the primitives we have in an easy way?
    // Q: How do we assign operations to ports? Do we assume they are uniform? IOW
    //    can any port access any memory location?

    int readers = buf.get_out_ports().size();
    int writers = buf.get_in_ports().size();

    //cout << "Generating banks for..." << endl;
    //cout << buf << endl;
    if (readers == 1 && writers == 1) {
      string reader = pick(buf.get_out_ports());
      auto t = def->addInstance(buf.name + "_bank", "global.raw_dual_port_sram_tile", {{"depth", COREMK(c, 2048)}});
      auto reader_data = def->sel("self")->sel(buf.container_bundle(reader))->sel(buf.bundle_offset(reader));
      auto read_port = t->sel("rdata");
      def->connect(reader_data, read_port);

      auto agen = build_addrgen(reader, buf, def);
      def->connect(agen->sel("d"),
          control_vars(def, reader, buf));
      def->connect(agen->sel("out"), t->sel("raddr"));
      def->connect(t->sel("ren"),
        control_en(def, reader, buf));

      {
        string reader = pick(buf.get_in_ports());
        auto reader_data = def->sel("self")->sel(buf.container_bundle(reader))->sel(buf.bundle_offset(reader));
        auto read_port = t->sel("wdata");
        def->connect(reader_data, read_port);

        auto agen = build_addrgen(reader, buf, def);
        def->connect(agen->sel("d"),
            control_vars(def, reader, buf));
        def->connect(agen->sel("out"), t->sel("waddr"));
        def->connect(t->sel("wen"),
            control_en(def, reader, buf));
      }

      //assert(false);
    } else if (readers == 2 && writers == 2) {
      auto t = def->addInstance(buf.name + "_bank", "global.raw_quad_port_memtile", {{"depth", COREMK(c, 2048)}});
      int i = 0;
      for (auto reader : buf.get_out_ports()) {
        auto reader_data = def->sel("self")->sel(buf.container_bundle(reader))->sel(buf.bundle_offset(reader));
        auto read_port = t->sel("rdata")->sel(i);
        def->connect(reader_data, read_port);

        auto agen = build_addrgen(reader, buf, def);
        def->connect(agen->sel("d"),
            control_vars(def, reader, buf));
        def->connect(agen->sel("out"), t->sel("raddr")->sel(i));
        def->connect(t->sel("ren")->sel(i),
            control_en(def, reader, buf));
        i++;
      }

      i = 0;
      for (auto reader : buf.get_in_ports()) {
        auto reader_data = def->sel("self")->sel(buf.container_bundle(reader))->sel(buf.bundle_offset(reader));
        auto read_port = t->sel("wdata")->sel(i);
        def->connect(reader_data, read_port);

        auto agen = build_addrgen(reader, buf, def);
        def->connect(agen->sel("d"),
            control_vars(def, reader, buf));
        def->connect(agen->sel("out"), t->sel("waddr")->sel(i));
        def->connect(t->sel("wen")->sel(i),
            control_en(def, reader, buf));
        i++;
      }
    } else if (writers == 1) {
      vector<Instance*> banks;
      int r = 0;
      for (auto reader : buf.get_out_ports()) {
        banks.push_back(def->addInstance(buf.name + "_bank_" + c->getUnique(), "global.raw_dual_port_sram_tile", {{"depth", COREMK(c, 2048)}}));
        auto t = banks.back();
        auto reader_data = def->sel("self")->sel(buf.container_bundle(reader))->sel(buf.bundle_offset(reader));
        auto read_port = t->sel("rdata");
        def->connect(reader_data, read_port);

        auto agen = build_addrgen(reader, buf, def);
        def->connect(agen->sel("d"),
            control_vars(def, reader, buf));
        def->connect(agen->sel("out"), t->sel("raddr"));
        def->connect(t->sel("ren"),
            control_en(def, reader, buf));
        {
          string reader = pick(buf.get_in_ports());
          auto reader_data = def->sel("self")->sel(buf.container_bundle(reader))->sel(buf.bundle_offset(reader));
          auto read_port = t->sel("wdata");
          def->connect(reader_data, read_port);

          auto agen = build_addrgen(reader, buf, def);
          def->connect(agen->sel("d"),
              control_vars(def, reader, buf));
          def->connect(agen->sel("out"), t->sel("waddr"));
          def->connect(t->sel("wen"),
              control_en(def, reader, buf));
        }

        r++;
      }
    } else {
      cout << "Error: Unsupported # readers = " << readers << ", # writers = " << writers << endl;
      cout << tab(1) << buf.name << endl;
      int banking = 1;
      isl_map* banking_map = nullptr;
      int bank_dim = 0;
      for (int i = 0; i < 4; i++) {
        string scheme_str = curlies("conv_stencil[x, y, z] -> B[x % " + str(banking) + "] }");
        banking_map = isl_map_read_from_str(buf.ctx, scheme_str.c_str());
        if (banking_scheme_is_legal(banking_map, buf)) {
          break;
        } else {
        }
        banking *= 2;
        //banking++;
      }
      cout << "last banking checked: " << banking << endl;
      assert(banking_map != nullptr);

      //for (auto inpt : buf.get_all_ports()) {
        //cout << "Checking bank properties of " << inpt << endl;
        //isl_map* acc = to_map(buf.access_map[inpt]);
        //cout << tab(1) << str(acc) << endl;
        //auto val = dot(acc, banking_map);
        //cout << tab(2) << str(val) << endl;
        //auto out_banks = range(val);
        //cout << tab(2) << "# out banks: " << str(out_banks) << endl;
        //assert(isl_set_is_singleton(out_banks));
      //}
      //assert(false);

      map<int, Instance*> banks;
      int r = 0;
      for (int b = 0; b < banking; b++) {
        banks[b] = def->addInstance(buf.name + "_bank_" + c->getUnique(), "global.raw_dual_port_sram_tile", {{"depth", COREMK(c, 2048)}});
      }

      int bits = ceil(log2(banking));
      cout << "Created " << banking << " banks in dimension " << bank_dim << " for buffer: " << buf.name << endl;
      cout << tab(1) << "Need to check " << bits << " bits to find the bank" << endl;

      ofstream outfile("resnet_banks.v");
      generate_lake_collateral_dual_sram_cyclic_banks(
          "test_bank",
          outfile,
          {banking, 1, 1},
          buf.get_in_ports().size(),
          buf.get_out_ports().size());
      assert(false);
    }

    return;

    assert(false);

    for (auto bank : buf.get_banks()) {
      if (bank.tp == INNER_BANK_OFFSET_LINEAR) {
        int capacity = int_upper_bound(card(bank.rddom));
        int addr_width = minihls::clog2(capacity);
        //auto bnk = def->addInstance(bank.name, lake_rf(width, capacity));
        ram_module(c, width, capacity);
        //auto bnk = def->addInstance(
        //bank.name,
        //"global.raw_dual_port_sram_tile",
        //{}
        //);
        auto bnk = def->addInstance(
            bank.name,
            "global.raw_dual_port_sram_tile",
            {{"depth", COREMK(c, capacity)}}
            );
        //auto bnk = def->addInstance(
        //bank.name,
        //ram_module(c, width, capacity));

        {
          auto bank_readers = buf.get_bank_outputs(bank.name);
          assert(bank_readers.size() == 1);
          auto reader = pick(bank_readers);
          auto acc_map = to_map(buf.access_map.at(reader));
          cout << "acc map = " << str(acc_map) << endl;
          auto reduce_map = linear_address_map(to_set(bank.rddom));
          cout << "reduce map = " << str(reduce_map) << endl;
          auto addr_expr = dot(acc_map, reduce_map);
          cout << "composition = " << str(addr_expr) << endl;
          auto addr_expr_aff = get_aff(addr_expr);

          auto aff_gen_mod = coreir_for_aff(c, addr_expr_aff);
          auto agen = def->addInstance(read_addrgen_name(bank.name), aff_gen_mod);

          def->connect(agen->sel("out"), bnk->sel("raddr"));
          def->connect(agen->sel("d"),
              control_vars(def, reader, buf));
          //def->sel(controller_name(reader))->sel("d"));
          def->connect(bnk->sel("ren"),
              control_en(def, reader, buf));
          //def->sel(controller_name(reader))->sel("valid"));
        }

        {
          auto bank_writers = buf.get_bank_inputs(bank.name);
          assert(bank_writers.size() == 1);
          auto writer = pick(bank_writers);
          auto acc_map = to_map(buf.access_map.at(writer));
          cout << "acc map = " << str(acc_map) << endl;
          auto reduce_map = linear_address_map(to_set(bank.rddom));
          cout << "reduce map = " << str(reduce_map) << endl;
          auto addr_expr = dot(acc_map, reduce_map);
          cout << "composition = " << str(addr_expr) << endl;
          auto addr_expr_aff = get_aff(addr_expr);

          auto aff_gen_mod = coreir_for_aff(c, addr_expr_aff);
          auto agen = def->addInstance(write_addrgen_name(bank.name), aff_gen_mod);

          def->connect(agen->sel("out"), bnk->sel("waddr"));
          def->connect(agen->sel("d"),
              control_vars(def, writer, buf));
        }
      } else {
        assert(false);
        //cout << "# readers of " << bank.name << " = " << bank.num_readers << endl;
        //cout << "Delays = " << comma_list(bank.read_delays) << endl;
        //assert(bank.num_readers == 1);
        //assert(bank.read_delays.size() == 2);
        //auto mod = delay_module(c, width, bank.read_delays);
        //auto bnk = def->addInstance(
            //bank.name,
            //mod);
      }
    }
  }

bool build_delay_map(UBuffer& buf, map<string, vector<pair<string, int> > >& delay_maps, umap* sched, schedule_info& hwinfo) {
  bool built_dm = true;
  for (auto outpt : buf.get_out_ports()) {
    std::set<string> ins;
    {
      auto reads = range(buf.access_map.at(outpt));
      for (auto inpt : buf.get_in_ports()) {
        auto writes = range(buf.access_map.at(inpt));
        auto overlap = its(writes, reads);
        if (!empty(overlap)) {
          ins.insert(inpt);
        }
      }
    }

    assert(ins.size() == 1);
    auto inpt = pick(ins);

    auto writes = buf.access_map.at(inpt);
    auto reads = buf.access_map.at(outpt);
    cout << "writes: " << str(writes) << endl;
    cout << "reads : " << str(reads) << endl;
    cout << "Schedule..." << endl;
    for (auto m : get_maps(sched)) {
      cout << tab(1) << str(m) << endl;
      release(m);
    }

    auto time_to_write = dot(inv(sched), (writes));
    auto time_to_read = dot(inv(sched), (reads));

    cout << "Time to write: " << str(time_to_write) << endl;
    cout << "Time to read : " << str(time_to_read) << endl;

    auto pc_times = dot(time_to_write, inv(time_to_read));
    cout << "PC times     : " << str(pc_times) << endl;
    auto dds = isl_union_map_deltas(pc_times);
    cout << "DDs          : " << str(dds) << endl;
    if (!empty(dds)) {
      auto ddc = to_set(dds);

      if (!(isl_set_is_singleton(ddc))) {
        built_dm = false;
        break;
      }
      assert(isl_set_is_singleton(ddc));

      int dd = to_int(lexminval(ddc));
      cout << "DD           : " << dd << endl;
      string writer_name = domain_name(pick(get_maps(writes)));
      cout << "writer op    : " << writer_name << endl;
      for (auto e : hwinfo.op_compute_unit_latencies) {
        cout << tab(1) << e.first << " -> " << e.second << endl;
      }
      //assert(false);
      int op_latency = map_find(writer_name, hwinfo.op_compute_unit_latencies);
      //assert(op_latency == 0);

      dd = dd - op_latency;

      delay_maps[inpt].push_back({outpt, dd});

    } else {
      cout << tab(1) << "No overlap" << endl;
      assert(false);
    }
  }
  return built_dm;
}

  void generate_synthesizable_functional_model(CodegenOptions& options, UBuffer& buf, CoreIR::ModuleDef* def, schedule_info& hwinfo) {

    //generate_platonic_ubuffer(options, buf, hwinfo);
    //return;

    cout << "Generating functional model for: " << buf.name << endl;
    cout << tab(1) << "partition: " << buf.banking.partition << endl;
    //assert(buf.banking.partition == "none");

    int width = buf.port_widths;
    auto c = def->getContext();
    auto ns = c->getNamespace("global");
    auto self = def->sel("self");


    if (options.inner_bank_offset_mode == INNER_BANK_OFFSET_CYCLE_DELAY) {
      auto sched = buf.global_schedule();

      map<string, vector<pair<string, int> > > delay_maps;
      bool built_dm = true;
      for (auto outpt : buf.get_out_ports()) {
        std::set<string> ins;
        {
          auto reads = range(buf.access_map.at(outpt));
          for (auto inpt : buf.get_in_ports()) {
            auto writes = range(buf.access_map.at(inpt));
            auto overlap = its(writes, reads);
            if (!empty(overlap)) {
              ins.insert(inpt);
            }
          }
        }
        for(string inpt: ins)
            cout << "input port:" << inpt << endl;

        assert(ins.size() == 1);
        auto inpt = pick(ins);

        auto writes = buf.access_map.at(inpt);
        auto reads = buf.access_map.at(outpt);
        cout << "writes: " << str(writes) << endl;
        cout << "reads : " << str(reads) << endl;
        cout << "Schedule..." << endl;
        for (auto m : get_maps(sched)) {
          cout << tab(1) << str(m) << endl;
          release(m);
        }

        auto time_to_write = dot(inv(sched), (writes));
        auto time_to_read = dot(inv(sched), (reads));

        cout << "Time to write: " << str(time_to_write) << endl;
        cout << "Time to read : " << str(time_to_read) << endl;

        auto pc_times = dot(time_to_write, inv(time_to_read));
        cout << "PC times     : " << str(pc_times) << endl;
        auto dds = isl_union_map_deltas(pc_times);
        cout << "DDs          : " << str(dds) << endl;
        if (!empty(dds)) {
          auto ddc = to_set(dds);

          if (!(isl_set_is_singleton(ddc))) {
            built_dm = false;
            break;
          }
          assert(isl_set_is_singleton(ddc));

          int dd = to_int(lexminval(ddc));
          cout << "DD           : " << dd << endl;
          string writer_name = domain_name(pick(get_maps(writes)));
          cout << "writer op    : " << writer_name << endl;
          for (auto e : hwinfo.op_compute_unit_latencies) {
            cout << tab(1) << e.first << " -> " << e.second << endl;
          }
          //assert(false);
          int op_latency = map_find(writer_name, hwinfo.op_compute_unit_latencies);
          //assert(op_latency == 0);

          dd = dd - op_latency;

          delay_maps[inpt].push_back({outpt, dd});

        } else {
          cout << tab(1) << "No overlap" << endl;
          assert(false);
        }
      }

      if (built_dm) {
        for (auto entry : delay_maps) {
          string inpt = entry.first;
          vector<pair<string, int> > delays = entry.second;
          if (delays.size() > 0) {
            sort_lt(delays, [](const pair<string, int>& p) {
                return p.second;
                });

            int prior_delay = 0;
            Wireable* prior_wire =
              def->sel("self")->sel(buf.container_bundle(inpt))->sel(buf.bundle_offset(inpt));
            for (int d = 0; d < delays.size(); d++) {
              int total_delay = delays.at(d).second;
              string outpt = delays.at(d).first;

              int diff = total_delay - prior_delay;
              CoreIR::Module* srmod = delay_module(options, c, width, {diff});
              auto srinst = def->addInstance("delay_sr" + c->getUnique(), srmod);

              cout << "SRMOD" << endl;
              srmod->print();
              def->connect(srinst->sel("rst_n"), self->sel("rst_n"));
              def->connect(srinst->sel("flush"), self->sel("flush"));

              cout << "Connected to self" << endl;

              def->connect(
                  prior_wire,
                  srinst->sel("wdata"));

              def->connect(def->sel("self")->sel(buf.container_bundle(outpt))->sel(buf.bundle_offset(outpt)),
                  srinst->sel("rdata"));

              prior_delay = total_delay;
              prior_wire = srinst->sel("rdata");
            }
          }
        }

        return;
      }
    }

    generate_banks(options, buf, def);
    return;

    for (auto inpt : buf.get_in_ports()) {
      auto bcm = coreir_broadcast(c, inpt, buf);
      auto bc = def->addInstance(inpt + "_broadcast", bcm);
      for (auto b : buf.get_banks()) {
        if (elem(inpt, buf.get_bank_inputs(b.name))) {
          def->connect(bc->sel(b.name), def->sel(b.name)->sel("wdata"));
          def->connect(bc->sel("valid"), def->sel(b.name)->sel("wen"));
        }
      }
      def->connect(bc->sel("in"), def->sel("self")->sel(buf.container_bundle(inpt))->sel(buf.bundle_offset(inpt)));
      def->connect(bc->sel("en"),
          control_en(def, inpt, buf));
    }

    for (auto outpt : buf.get_out_ports()) {
      auto bcm = generate_coreir_select(options, c, outpt, buf);
      auto bc = def->addInstance(outpt + "_select", bcm);
      for (auto b : buf.get_banks()) {
        if (elem(outpt, buf.get_bank_outputs(b.name))) {
          def->connect(bc->sel(b.name), def->sel(b.name)->sel("rdata"));
        }
      }
      def->connect(
          control_vars(def, outpt, buf),
          bc->sel("d"));
      def->connect(bc->sel("out"), def->sel("self")->sel(buf.container_bundle(outpt))->sel(buf.bundle_offset(outpt)));
    }
  }

  //generate coreir instance for single ubuffer
  //return the coreir module with port bundle and enable/valid interface
  CoreIR::Module* generate_coreir(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf) {
    schedule_info info;
    return generate_coreir(options, context, buf, info);
  }

  CoreIR::Module* generate_coreir(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf, schedule_info& hwinfo) {
    auto ns = context->getNamespace("global");

    vector<pair<string, CoreIR::Type*> >
      ub_field{{"clk", context->Named("coreir.clkIn")},
          {"flush", context->BitIn()},
          {"rst_n", context->BitIn()}};

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
          ub_field.push_back(make_pair(name + "_wen", context->BitIn()));
          ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(16)->Arr(control_dimension)));
        }
        ub_field.push_back(make_pair(name, context->BitIn()->Arr(pt_width)->Arr(bd_width)));
      } else {
        if (options.rtl_options.use_external_controllers) {
          ub_field.push_back(make_pair(name + "_ren", context->BitIn()));
          ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(16)->Arr(control_dimension)));
        }
        ub_field.push_back(make_pair(name, context->Bit()->Arr(pt_width)->Arr(bd_width)));
        //if (options.pass_through_valid) {
        //    ub_field.push_back(make_pair(name + "_extra_ctrl", context->Bit()));
        //}
      }
    }

    CoreIR::RecordType* utp = context->Record(ub_field);
    auto ub = ns->newModuleDecl(buf.name + "_ub", utp);
    auto def = ub->newModuleDef();

    //TODO: use a more general switch
    if (true) {
      generate_synthesizable_functional_model(options, buf, def, hwinfo);
    } else {
      //buf.generate_coreir(options, def);
    }

    ub->setDef(def);
    return ub;
  }

  CoreIR::Module* generate_coreir_without_ctrl(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf, schedule_info& hwinfo) {
    auto ns = context->getNamespace("global");

    vector<pair<string, CoreIR::Type*> >
      ub_field{{"clk", context->Named("coreir.clkIn")},
          {"flush", context->BitIn()},
          //{"rst_n", context->BitIn()}};
          {"reset", context->BitIn()}};

    for (auto b : buf.port_bundles) {
      int pt_width = buf.port_widths;
      int bd_width = buf.lanes_in_bundle(b.first);
      string name = b.first;
      string pt_rep = pick(b.second);
      auto acc_maps = get_maps(buf.access_map.at(pt_rep));
      assert(acc_maps.size() > 0);
      int control_dimension = num_in_dims(pick(acc_maps));
      if (buf.is_input_bundle(b.first)) {
        //ub_field.push_back(make_pair(name + "_en", context->BitIn()));
        //ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(16)->Arr(control_dimension)));
        ub_field.push_back(make_pair(name, context->BitIn()->Arr(pt_width)->Arr(bd_width)));
        if (options.pass_through_valid) {
            ub_field.push_back(make_pair(name + "_extra_ctrl", context->BitIn()));
        }
      } else {
        //ub_field.push_back(make_pair(name + "_ren", context->BitIn()));
        //ub_field.push_back(make_pair(name + "_valid", context->Bit()));
        //ub_field.push_back(make_pair(name + "_ctrl_vars", context->BitIn()->Arr(16)->Arr(control_dimension)));
        ub_field.push_back(make_pair(name, context->Bit()->Arr(pt_width)->Arr(bd_width)));
        if (options.pass_through_valid) {
            ub_field.push_back(make_pair(name + "_extra_ctrl", context->Bit()));
        }
      }
    }

    CoreIR::RecordType* utp = context->Record(ub_field);
    auto ub = ns->newModuleDecl(buf.name + "_ub", utp);
    auto def = ub->newModuleDef();

    //TODO: use a more general switch
    if (false) {
      generate_synthesizable_functional_model(options, buf, def, hwinfo);
    } else {
      buf.generate_coreir_without_ctrl(options, def);
    }

    ub->setDef(def);
    return ub;
  }

#endif

  void generate_code_prefix(CodegenOptions& options,
      std::ostream& out,
      UBuffer& buf) {

    //banking and merge pass
    buf.generate_banks_and_merge(options);

    out << "#include \"hw_classes.h\"" << endl << endl;
    for (auto b : buf.get_banks()) {
      generate_bank(options, out, b);
    }

    out << "struct " << buf.name << "_cache {" << endl;
    out << tab(1) << "// # of banks: " << buf.get_banks().size() << endl;
    for (auto b : buf.get_banks()) {
      out << tab(1)
        << b.name << "_cache "
        << b.name
        << ";" << endl;
    }

    out << "};" << endl << endl;

    out << endl << endl;

  }

  bool is_optimizable_constant_dd(const string& inpt, const string& outpt, UBuffer& buf) {
    auto out_domain = buf.domain.at(outpt);
    auto qpd = compute_dd(buf, outpt, inpt);
    auto pieces = get_pieces(qpd);
    uset* pieces_dom = isl_union_set_read_from_str(ctx(qpd), "{}");
    for (auto p : pieces) {
      auto usp = to_uset(p.first);
      pieces_dom = unn(pieces_dom, usp);
      release(usp);
      //auto pp = isl_pw_qpolynomial_intersect_domain(isl_pw_qpolynomial_from_qpolynomial(cpy(p.second)), cpy(p.first));
      //pieces_dom = unn(pieces_dom, to_uset(p.first));
    }

    bool pieces_are_complete =
      subset(to_uset(out_domain), (pieces_dom));
    int ub = int_upper_bound(qpd);
    int lb = int_lower_bound(qpd);

    if (pieces_are_complete) {
      return ub == lb;
    }

    release(qpd);
    release(pieces_dom);
    return false;
  }

  void generate_select_decl(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
    isl_space* s = get_space(buf.domain.at(outpt));
    auto dim_decls = space_var_decls(s);
    dim_decls.push_back("int dynamic_address");

    out << "inline " + buf.port_type_string() + " " + outpt + "_select(";
    size_t nargs = 0;
    out << buf.name << "_cache& " << buf.name << ", ";
    nargs++;
    out << sep_list(dim_decls, "", "", ", ");

    out << ") {" << endl;
    ignore_inter_deps(out, buf.name);
  }

  void select_debug_assertions(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
    out << tab(1) << "return 0;" << endl;
    return;
    // ------------ Error printouts only
    vector<string> offset_printouts;
    isl_space* s = get_space(buf.domain.at(outpt));
    auto vars = space_var_args(s);

    assert(isl_space_is_set(s));
    for (int i = 0; i < num_dims(s); i++) {
      offset_printouts.push_back("\" " + vars.at(i) + " = \" << " + vars.at(i) + " ");
    }

    open_debug_scope(out);
    out << "\tcout << \"Error: Unsupported offsets: \" << " << sep_list(offset_printouts, "", "", " << ") << " << endl;" << endl;
    out << "\tassert(false);\n\treturn 0;\n";
    close_debug_scope(out);
  }

  string delay_string(CodegenOptions& options,
      ostream& out,
      const string& inpt,
      const string& outpt,
      UBuffer& buf) {

    string bank = buf.bank_between(inpt, outpt);

    if (elem(outpt, buf.dynamic_ports)) {
      return buf.name + "." + bank + ".read(dynamic_address)";
    }

    auto sb = buf.get_bank(bank);
    string value_str = "";

    if (sb.tp == INNER_BANK_OFFSET_LINEAR) {
      string linear_addr = buf.generate_linearize_ram_addr(outpt, sb);
      value_str = bank + ".read(/*ram type address*/ "+ linear_addr + ")";
    } else if (sb.tp == INNER_BANK_OFFSET_STACK) {
      auto out_domain = buf.domain.at(outpt);

      auto qpd = compute_dd(buf, outpt, inpt);
      auto pieces = get_pieces(qpd);

      string dx = to_string(int_upper_bound(qpd));

      out << tab(1) << "// Read schedule : " << str(buf.schedule.at(outpt)) << endl;
      out << tab(1) << "// Write schedule: " << str(buf.schedule.at(inpt)) << endl;

      string delay_expr = evaluate_dd(buf, outpt, inpt);
      bool opt_const = is_optimizable_constant_dd(inpt, outpt, buf);
      if (options.all_rams || buf.get_bank(bank).num_readers == 1) {
        value_str = bank + ".peek(/* one reader or all rams */ " + delay_expr + ")";
      } else if (opt_const) {
        if (!options.all_rams && is_number(dx)) {
          assert(safe_stoi(dx) >= 0);
          value_str = bank + ".peek_" + dx + "()";
        } else {
          value_str = bank + ".peek" + "( /* is opt const */ " + delay_expr + ")";
        }
      } else if (pieces.size() == 0 && !options.all_rams) {
        value_str = bank + ".peek_0()";
      } else if (pieces.size() == 1 &&
          isl_set_is_subset(cpy(out_domain), cpy(pieces[0].first))) {
        string dx = codegen_c(pieces[0].second);
        if (!options.all_rams && is_number(dx)) {
          assert(safe_stoi(dx) >= 0);
          value_str = bank + ".peek_" + dx + "()";
        } else {
          value_str = bank + ".peek" + "(/* is one piece but not a number */" + dx + ")";
        }
      } else {
        value_str = bank + ".peek" + "(/* Needs general delay string */ " + delay_expr + ")";
      }
    } else {
      assert(sb.tp == INNER_BANK_OFFSET_MULTILINEAR);
      string linear_addr = generate_multilinear_ram_addr(outpt, sb, buf);
      value_str = bank + ".read(" + linear_addr + ")";
    }

    return buf.name + "." + value_str;
  }

  void generate_broadcast(CodegenOptions& options, std::ostream& out, const string& inpt, UBuffer& buf) {
    vector<string> args;
    args.push_back(buf.port_type_string(inpt) + "& " + inpt);
    args.push_back(buf.name + "_cache& " + buf.name);
    concat(args, dimension_var_decls(inpt, buf));
    args.push_back("int dynamic_address");
    string var_args = comma_list(dimension_var_args(inpt, buf));

    out << "inline void " << inpt << "_write(";
    out << comma_list(args) << ") {" << endl;

    if (buf.banking.partition != "cyclic") {
      //Different ram type, different address
      for (auto sb : buf.receiver_banks(inpt)) {
        if (sb.tp == INNER_BANK_OFFSET_STACK) {
          out << tab(1) << buf.name << "." << sb.name << ".push(" << inpt << ");" << endl;
        } else if (sb.tp == INNER_BANK_OFFSET_LINEAR) {
          string linear_addr = buf.generate_linearize_ram_addr(inpt, sb);
          cout <<"Input port:" << inpt << ", Get ram string: " << linear_addr << endl;
          if (!elem(inpt, buf.dynamic_ports)) {
            out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt <<
              ", " << linear_addr << ");" << endl;
          } else {
            out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt <<
              ", " << "dynamic_address" << ");" << endl;
          }
        } else {
          assert(sb.tp == INNER_BANK_OFFSET_MULTILINEAR);
          string linear_addr = generate_multilinear_ram_addr(inpt, sb, buf);
          out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt << ", " << linear_addr << ");" << endl;

        }
      }
    } else {
      auto bank_function = bank_map(buf.ctx, buf.name, buf.banking);
      auto acc_umap = map_find(inpt, buf.access_map);
      auto acc_map = to_map(acc_umap);
      auto writes = range(acc_map);
      cout << "writes = " << str(writes) << endl;
      auto lt = its(its_range(isl_map_lex_lt(get_space(writes)), writes), writes);
      cout << "lt     = " << str(lt) << endl;
      auto next_write = simplify(lexmin(lt));
      cout << "next w = " << str(next_write) << endl;
      cout << "diff   = " << str(isl_map_deltas_map(cpy(next_write))) << endl;
      auto banks_to_next_reads = dot(inv(bank_function), next_write);
      cout << "banks to next reads = " << str(banks_to_next_reads) << endl;
      auto next_bank = dot(dot(inv(bank_function), next_write), bank_function);
      cout << "next bank = " << str(next_bank) << endl;
      cout << "next bcar = " << str(card(next_bank)) << endl;
      auto bank_delta = isl_map_deltas_map(cpy(next_bank));
      cout << "nb delta  = " << str(bank_delta) << endl;

      // TODO: Replace with actual bank computation
      for (auto sb : buf.get_banks()) {
        if (sb.tp == INNER_BANK_OFFSET_STACK) {
          out << tab(1) << buf.name << "." << sb.name << ".push(" << inpt << ");" << endl;
        } else if (sb.tp == INNER_BANK_OFFSET_LINEAR) {
          //string linear_addr = buf.generate_linearize_ram_addr(inpt);
          string linear_addr = buf.generate_linearize_ram_addr(inpt, sb);
          cout <<"Input port:" << inpt << ", Get ram string: " << linear_addr << endl;
          if (!elem(inpt, buf.dynamic_ports)) {
            out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt <<
              ", " << linear_addr << ");" << endl;
          } else {
            out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt <<
              ", " << "dynamic_address" << ");" << endl;
          }
        } else {
          assert(false);
        }
      }
    }

    out << "}" << endl << endl;

  }

  void generate_duplicate_select(CodegenOptions& options, std::ostream& out, const string& implemented, const std::string& duplicated, UBuffer& buf) {
    generate_select_decl(options, out, duplicated, buf);

    string outpt = implemented;

    string rep = implemented;
    isl_space* s = get_space(buf.domain.at(rep));
    assert(isl_space_is_set(s));
    vector<string> dim_decls;
    vector<string> dim_args;
    for (int i = 0; i < num_dims(s); i++) {
      if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
        string dn = "d" + to_string(i);
        auto new_id = id(buf.ctx, dn);
        assert(new_id != nullptr);
        s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
      }
      dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
      dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
    }
    dim_decls.push_back("int dynamic_address");
    dim_args.push_back("dynamic_address");

    vector<string> all_decls;
    vector<string> all_args;

    all_decls.push_back(buf.name + "_cache& " + buf.name);
    concat(all_decls, dim_decls);

    all_args.push_back(buf.name);
    concat(all_args, dim_args);

    string arg_string = sep_list(all_args, "", "", ", ");
    out << "\t" << buf.port_type_string() << " " << outpt << "_res = " << outpt << "_select(" << arg_string << ");" << endl;
    out << tab(1) << "return " << outpt << "_res;" << endl;
    out << "}" << endl << endl;
  }

  void generate_select(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
    generate_select_decl(options, out, outpt, buf);

    out << tab(1) << "// " << outpt << " read pattern: " << str(buf.access_map.at(outpt)) << endl;

    if (buf.banking.partition == "register_file" || buf.banking.partition == "none") {
      assert(buf.bank_list.size() == 1);
      // Port is irrelevant here
      // TODO: Extract inner bank offset
      string inpt = pick(buf.get_in_ports());
      string peeked_val = delay_string(options, out, inpt, outpt, buf);
      out << tab(1) << "auto value_" << inpt << " = " << peeked_val << ";" << endl;
      out << tab(1) << "return value_" << inpt << ";" << endl;
    } else if (buf.banking.partition != "cyclic") {
      cout << "partition = " << buf.banking.partition << endl;
      vector<string> possible_ports;
      for (auto pt : buf.get_in_ports()) {
        if (buf.has_bank_between(pt, outpt)) {
          possible_ports.push_back(pt);
        }
      }

      map<string, string> in_ports_to_conditions;
      map<string, isl_set*> input_ports_to_condition_sets = input_ports_to_conditions(outpt, buf);
      for (auto s : input_ports_to_condition_sets) {
        in_ports_to_conditions[s.first] = codegen_c(s.second);
      }

      if (in_ports_to_conditions.size() == 1) {
        string inpt = pick(in_ports_to_conditions).first;
        string peeked_val = delay_string(options, out, inpt, outpt, buf);

        out << tab(1) << "auto value_" << inpt << " = " << peeked_val << ";" << endl;
        out << tab(1) << "return value_" << inpt << ";" << endl;
      } else {
        for (auto pc : in_ports_to_conditions) {
          string port = pc.first;
          out << tab(1) << "if (" << map_find(port, in_ports_to_conditions) << ") {" << endl;
          string peeked_val = delay_string(options, out, port, outpt, buf);

          out << tab(2) << "auto value_" << port << " = " << peeked_val << ";" << endl;
          out << tab(2) << "return value_" << port << ";" << endl;
          out << tab(1) << "}" << endl << endl;
          out << tab(1) << endl;
        }
      }

    } else {
      // TODO: Fix this dummy implementation
      string bank = pick(buf.get_banks()).name;
      out << tab(1) << "auto value " << " = " << buf.name << "." << bank << ".RAM[0];" << endl;
      out << tab(1) << "return value;" << endl;
    }
    select_debug_assertions(options, out, outpt, buf);
    out << "}" << endl << endl;
  }

  void generate_bundles(CodegenOptions& options, std::ostream& out, UBuffer& buf) {

    out << "// # of bundles = " << buf.port_bundles.size() << endl;

    for (auto b : buf.port_bundles) {
      //cout << "\t generate for bundle: " << b.first << endl;
      out << "// " << b.first << endl;
      for (auto pt : b.second) {
        out << "//\t" << pt << endl;
      }

      string rep = pick(b.second);
      isl_space* s = get_space(buf.domain.at(rep));
      assert(isl_space_is_set(s));
      vector<string> dim_decls;
      vector<string> dim_args;
      for (int i = 0; i < num_dims(s); i++) {
        if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
          string dn = "d" + to_string(i);
          auto new_id = id(buf.ctx, dn);
          assert(new_id != nullptr);
          s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
        }
        dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
        dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
      }
      dim_decls.push_back("int dynamic_address");
      dim_args.push_back("dynamic_address");

      if (buf.is_out_pt(rep)) {
        out << "inline " << buf.bundle_type_string(b.first) << " " <<  buf.name << "_" << b.first << "_bundle_read(";
        vector<string> all_decls;
        vector<string> all_args;

        all_decls.push_back(buf.name + "_cache& " + buf.name);
        concat(all_decls, dim_decls);

        all_args.push_back(buf.name);
        concat(all_args, dim_args);

        //auto outpt = *begin(b.second);

        out << sep_list(all_decls, "", "", ", ") << ") {" << endl;
        out << tab(1) << "// # of ports in bundle: " << map_find(b.first, buf.port_bundles).size() << endl;
        for (auto pt : map_find(b.first, buf.port_bundles)) {
          out << tab(2) << "// " << pt << endl;
        }
        out << endl;

        string arg_string = sep_list(all_args, "", "", ", ");
        out << "\t" << buf.bundle_type_string(b.first) + " result;" << endl;
        int offset = 0;
        for (auto p : b.second) {
          out << "\t" + buf.port_type_string() + " " << p << "_res = " << p << "_select(" << arg_string << ");" << endl;
          out << "\tset_at<" << offset << ", " << buf.port_bundle_width(b.first) << ">(result, " << p << "_res" << ");" << endl;
          offset += buf.port_width(p);
        }
        out << "\treturn result;" << endl;
      } else {
        out << "inline void " + buf.name + "_" + b.first + "_bundle_write(";

        vector<string> all_args;

        if (options.internal) {
          all_args.push_back(buf.bundle_type_string(b.first) + "& " + b.first);
        } else {
          all_args.push_back("InputStream<" + buf.bundle_type_string(b.first)  + " >& " + b.first);
        }

        all_args.push_back(buf.name + "_cache& " + buf.name);
        concat(all_args, dim_decls);
        out << sep_list(all_args, "", "", ", ") << ") {" << endl;

        int offset = 0;
        string src = b.first;
        if (!options.internal) {
          out << "\t" << buf.bundle_type_string(b.first) <<
            " data_" << b.first << " = " << b.first << ".read();" << endl;
          src = "data_" + b.first;
        }
        for (auto p : b.second) {
          out << "\t" + buf.port_type_string() + " " << p << "_res = "
            << src << ".extract<" << offset << ", " << (offset + buf.port_width(p) - 1)
            << ">();" << endl;
          vector<string> args{p + "_res", buf.name};
          concat(args, dim_args);
          out << "\t" << p << "_write(" << comma_list(args) << ");" << endl;

          offset += buf.port_width(p);
        }


      }
      out << "}" << endl << endl;
    }
  }

  void generate_hls_code(CodegenOptions& options, std::ostream& out, UBuffer& buf) {
    generate_code_prefix(options, out, buf);

    for (auto inpt : buf.get_in_ports()) {
      generate_broadcast(options, out, inpt, buf);
    }

    map<string, std::set<string> > unique_outs =
      get_unique_output_ports(buf);

    //if (buf.banking.partition == "exhaustive") {
    if (false) {
      for (auto outptg : unique_outs) {
        string outpt = outptg.first;
        generate_select(options, out, outpt, buf);

        for (auto pt : outptg.second) {
          if (pt != outpt) {
            generate_duplicate_select(options, out, outpt, pt, buf);
          }
        }
      }
    } else {
      for (auto outpt : buf.get_out_ports()) {
        generate_select(options, out, outpt, buf);
      }
    }

    generate_bundles(options, out, buf);
  }

  void generate_hls_code_internal(std::ostream& out, UBuffer& buf) {
    CodegenOptions options;
    options.internal = true;

    generate_hls_code(options, out, buf);
  }

  void generate_hls_code(std::ostream& out, UBuffer& buf) {
    CodegenOptions options;
    options.internal = false;

    generate_hls_code(options, out, buf);
  }

  //Rename to avoid ambiguous
  void generate_hls_header(const UBuffer& buf) {
    //cout << "Header file generation..." << endl;
    ofstream of(buf.name + ".h");
    of << "#pragma once\n\n" << endl;
    of << "#include \"hw_classes.h\"" << endl << endl;
    of << "void " << buf.name << "(";
    int nargs = 0;
    for (auto pt : buf.port_bundles) {
      of << buf.bundle_stream(pt.first);
      if (nargs < buf.port_bundles.size() - 1) {
        of << ", ";
      }
      nargs++;
    }
    of << ");" << endl;

  }

  void generate_hls_code(UBuffer& buf) {

    if (buf.port_bundles.size() == 0) {
      for (auto pt : buf.get_out_ports()) {
        buf.port_bundles[pt] = {pt};
      }
      for (auto pt : buf.get_in_ports()) {
        buf.port_bundles[pt] = {pt};
      }
    }

    //cout << "Code generation..." << endl;
    ofstream os(buf.name + ".cpp");
    std::ostream& out = os;

    generate_hls_code(os, buf);

    // Generate driver function for this buffer.
    isl_union_map* res = its(buf.global_schedule(), buf.global_domain());

    string code_string = codegen_c(res);

    code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");
    string delay_list =
      buf.port_bundles.at(pick(buf.get_in_bundles())).at(0) + "_delay";
    //buf.name;

    for (auto b : buf.port_bundles) {
      if (buf.is_out_pt(*(begin(b.second)))) {
      } else {
        regex re(b.first + "(.*);");
        string inpt = pick(b.second);
        code_string = regex_replace(code_string, re, buf.name + "_" + b.first + "_bundle_write(" + b.first + ", " + delay_list + ");");
      }
    }
    for (auto b : buf.port_bundles) {
      if (buf.is_out_pt(*(begin(b.second)))) {
        regex re0(b.first + "\\((.*)\\);");
        code_string = regex_replace(code_string, re0, b.first + ".write(" + buf.name + "_" + b.first + "_bundle_read(" + delay_list + ", $1" + "));");
      } else {
      }
    }

    out << "void " << buf.name << "(";
    size_t nargs = 0;
    for (auto pt : buf.port_bundles) {
      out << buf.bundle_stream(pt.first);
      if (nargs < buf.port_bundles.size() - 1) {
        out << ", ";
      }
      nargs++;
    }
    out << ") {" << endl;
    for (auto inpt : buf.get_in_ports()) {
      out << "\t" + inpt + "_cache " + inpt + "_delay;\n\n";
    }
    out << code_string << endl;
    out << "}" << endl;


    generate_hls_header(buf);
    generate_vivado_tcl(buf);
  }

  umap* UBuffer::get_lexmax_events(const std::string& outpt) const {
    umap* src_map = nullptr;
    cout << "Buffer = " << name << endl;
    assert(get_in_ports().size() > 0);
    for (auto inpt : get_in_ports()) {
      auto beforeAcc = lex_gt(schedule_guard(schedule.at(outpt), true),
              schedule_guard(schedule.at(inpt), false));
      if (src_map == nullptr) {
        auto outmap = access_map.at(outpt);
        auto inmap = access_map.at(inpt);
        src_map =
          its(dot(outmap,
                inv(inmap)), beforeAcc);
      } else {
        auto inv_in =
          inv(access_map.at(inpt));
        auto dt =
          dot(access_map.at(outpt), inv(access_map.at(inpt)));
        auto a = its(dot(access_map.at(outpt), inv(access_map.at(inpt))), beforeAcc);
        src_map = unn(src_map, a);

        release(a);
        release(dt);
        release(inv_in);
        //src_map =
          //unn(src_map, ((its(dot(access_map.at(outpt), inv(access_map.at(inpt))), beforeAcc))));
      }
      release(beforeAcc);
    }
    assert(src_map != nullptr);

    //cout << "src map done: " << str(src_map) << endl;
    auto sched = global_schedule_with_guard();
    auto after = lex_gt(sched, sched);

    src_map = its(src_map, after);
    src_map = lexmax(src_map);

    auto time_to_event = inv(sched);

    auto lex_max_events =
      dot(lexmax(dot(src_map, sched)), time_to_event);

    release(time_to_event);
    release(src_map);
    release(after);
    //cout << "Done" << outpt << endl;
    assert(lex_max_events != nullptr);
    return lex_max_events;

  }

  umap* UBuffer::get_lexmax_events(const std::string& inpt, const std::string& outpt) {
    umap* src_map = nullptr;
    auto beforeAcc = lex_gt(schedule.at(outpt), schedule.at(inpt));
    auto outmap = access_map.at(outpt);
    auto inmap = access_map.at(inpt);
    inmap = coalesce(unn(inmap, outmap));

    src_map = its(dot(outmap, inv(inmap)), beforeAcc);
    assert(src_map != nullptr);

    //cout << "src map done: " << str(src_map) << endl;
    auto sched = unn(schedule.at(inpt), schedule.at(outpt));
    auto after = lex_gt(sched, sched);

    src_map = its(src_map, after);
    src_map = lexmax(src_map);

    //cout << "final src map: " << str(src_map) << endl;

    auto time_to_event = inv(sched);

    //cout << "time 2 event: " << str(time_to_event) << endl;
    //cout << "lexmax :" << str(lexmax(dot(src_map, sched))) << endl;

    auto lmm = lexmax(dot(src_map, sched));
    auto lex_max_events =
      dot(lmm, time_to_event);
    //auto lex_max_events =
      //dot(lexmax(dot(src_map, sched)), time_to_event);

    //cout << "Done" << outpt << endl;
    assert(lex_max_events != nullptr);

    release(lmm);
    release(time_to_event);
    release(src_map);
    release(after);
    release(inmap);
    release(beforeAcc);
    release(sched);
    return lex_max_events;
  }

  umap* UBuffer::get_lexmax_events(
      umap* in_sched, umap* out_sched,
      const string& inpt, const string& outpt) {

    umap* src_map = nullptr;
    //auto in_sched = schedule.at(inpt);
    //auto out_sched = schedule.at(outpt);
    auto beforeAcc = lex_gt(out_sched, in_sched);
    auto outmap = access_map.at(outpt);
    auto inmap = access_map.at(inpt);
    inmap = coalesce(unn(inmap, outmap));
    //cout << "before access: " << str(beforeAcc) << endl;
    //cout << "Coalesce map: " << str(inmap) << endl;
    src_map = its(dot(outmap, inv(inmap)), beforeAcc);
    assert(src_map != nullptr);

    //cout << "src map done: " << str(src_map) << endl;
    auto sched = unn(in_sched, out_sched);
    auto after = lex_gt(sched, sched);

    src_map = its(src_map, after);
    src_map = lexmax(src_map);

    //cout << "final src map: " << str(src_map) << endl;

    auto time_to_event = inv(sched);

    //cout << "time 2 event: " << str(time_to_event) << endl;
    //cout << "lexmax :" << str(lexmax(dot(src_map, sched))) << endl;

    auto lex_max_events =
      dot(lexmax(dot(src_map, sched)), time_to_event);

    //cout << "Done" << outpt << endl;
    assert(lex_max_events != nullptr);

    release(time_to_event);
    release(src_map);
    release(after);
    release(sched);
    release(inmap);
    release(beforeAcc);
    return lex_max_events;
  }

  isl_union_pw_qpolynomial* UBuffer::compute_dd(const std::string& read_port, const std::string& write_port) {

    isl_union_map* sched = schedule.at(write_port);
    assert(sched != nullptr);

    auto WritesAfterWrite = lex_lt(sched, sched);

    assert(WritesAfterWrite != nullptr);

    umap* rdsched = cpy(schedule.at(read_port));
    umap* wrsched = cpy(schedule.at(write_port));
    bool out2out = !isIn.at(write_port);
    if (out2out) {
      rdsched = pad_one_more_dim_to_sched_map_innermost(rdsched, 1);
      wrsched = pad_one_more_dim_to_sched_map_innermost(wrsched, 0);
    }
    //cout << "rewrite rd sched:" << str(rdsched) << endl;
    //cout << "rewrite wr sched:" << str(wrsched) << endl;
    auto WritesBeforeRead =
      lex_gt(rdsched, wrsched);
    //cout << "\trdsched: " << str(rdsched) << "\n wrsched: " << str(wrsched) << "\n wbr: " << str(WritesBeforeRead) << endl;

    //TODO: test these new method
    auto WriteThatProducesReadData = get_lexmax_events(wrsched, rdsched, write_port, read_port);
    //cout << "\twpr: " << str(WriteThatProducesReadData) << "\nwaw:" << str(WritesAfterWrite) << endl;

    auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

    //cout << "\twap: " << str(WritesAfterProduction) << endl;
    auto WritesBtwn = its_range((its(WritesAfterProduction, WritesBeforeRead)),
        to_uset(domain.at(write_port)));
    //cout << "\tits:" << str(its(WritesAfterProduction, WritesBeforeRead)) << endl;
    //cout << "\tWritesBtwn: " << str(WritesBtwn) << endl;

    auto c = card(WritesBtwn);
    release(WritesBtwn);
    release(WritesAfterProduction);
    release(WritesBeforeRead);
    release(WriteThatProducesReadData);
    release(WritesAfterWrite);
    //cout << "got card" << endl;
    return c;
  }

  int UBuffer::compute_dd_bound(const std::string& read_port, const std::string& write_port, bool is_max) {
    auto c = compute_dd(read_port, write_port);
    //cout << "DD: " << str(c) << endl;
    int tight;
    int* b = &tight;
    if (is_max){
      auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_max, b);
      return bnd_int(bound);
    }
    else {
      auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_min, b);
      return bnd_int(bound);
    }
  }

  bank UBuffer::compute_bank_info(
      std::set<string> inpt_set,
      std::set<string> outpt_set) {

    //we just need connection information
    int maxdelay = 0;
    vector<int> read_delays{0};
    string inpt_name = pick(inpt_set);
    auto rddom = isl_union_set_empty(
            get_space(range(access_map.at(inpt_name))));

    //initial the delay map
    map<string, int> delay_map = {};
    for (auto inpt : inpt_set) {
      for (auto outpt: outpt_set) {
        //get the rddom for the supper bank
        auto local_rddom = its(range(access_map.at(inpt)), range(access_map.at(outpt)));
        rddom = unn(rddom, local_rddom);

        int delay = 0;
        if (isIn.at(inpt)) {
          delay = compute_dd_bound(outpt, inpt, true);
        } else {
          //TODO: possible bug
          string original_inpt = pick(get_in_ports());
          delay = compute_dd_bound(outpt, original_inpt, true) -
            compute_dd_bound(inpt, original_inpt, true);
        }
        read_delays.push_back(delay);
        maxdelay = std::max(maxdelay, delay);
        //delay_map.insert({outpt, delay});
      }
    }
    //cout << "compute max delay for super bank =  " << maxdelay << endl;

    int num_readers = outpt_set.size();

    string pt_type_string = port_type_string();
    string name = pick(inpt_set) + "_to_" + pick(outpt_set);

    stack_bank bank{name, INNER_BANK_OFFSET_STACK, pt_type_string, read_delays, num_readers, maxdelay, rddom, delay_map};

    return bank;
  }

  bank UBuffer::compute_bank_info() {
    int maxdelay = -1;

    vector<int> read_delays;
    // NOTE: Just to ensure we dont force everything to be a RAM
    int num_readers = 0;

    string pt_type_string = port_type_string();
    string bank_name = name + "_all_inputs_to_all_outputs";

    cout << "getting rddom" << endl;
    isl_union_set* rddom = isl_union_set_read_from_str(ctx, "{}");
    for (auto inpt : get_in_ports()) {
      rddom = unn(rddom, range(access_map.at(inpt)));
    }
    for (auto inpt : get_out_ports()) {
      rddom = unn(rddom, range(access_map.at(inpt)));
    }
    cout << "rddom = " << str(rddom) << endl;

    map<string, int> delay_map;

    stack_bank bank{bank_name, INNER_BANK_OFFSET_LINEAR, pt_type_string, read_delays, num_readers, maxdelay, rddom, delay_map};

    return bank;
  }

  bank UBuffer::compute_bank_info(
          uset* rddom,
          isl_point* bank_id,
          std::set<string> inpt_set,
          std::set<string> outpt_set) {
    int maxdelay = -1;

    vector<int> read_delays{0};
    int num_readers = outpt_set.size();

    string pt_type_string = port_type_string();
    string bank_name = name + "_cyclic_" + suffix_list(parse_pt(bank_id));

    cout << "getting rddom" << endl;
    cout << "rddom = " << str(rddom) << endl;

    map<string, int> delay_map;

    stack_bank bank{bank_name, INNER_BANK_OFFSET_LINEAR, pt_type_string, read_delays, num_readers, maxdelay, rddom, delay_map};

    return bank;
  }

  bank UBuffer::compute_bank_info(
          const std::string & inpt,
          const std::string & outpt,
          int delay) {
      vector<int> read_delays{0};
      int maxdelay = delay;
      read_delays.push_back(delay);
      map<string, int> delay_map = {{outpt, read_delays.back()}};
      auto rddom =
        its(range(access_map.at(inpt)),
            range(access_map.at(outpt)));
      string pt_type_string = port_type_string();
      string name = inpt + "_to_" + outpt;

      stack_bank bank{name,
        INNER_BANK_OFFSET_STACK,
        pt_type_string,
        read_delays,
        1,
        maxdelay,
        rddom,
        delay_map};

      return bank;
  }

  bank UBuffer::compute_bank_info(
      CodegenOptions& options,
      const std::string& inpt,
      const std::string& outpt) {

    if (options.inner_bank_offset_mode == INNER_BANK_OFFSET_STACK) {
      int maxdelay = -1;
      //TODO: change to hardware scheudle flag
      if (options.rtl_options.target_tile == TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN)
        maxdelay = -to_int(lexminval(to_set(compute_dd_hw_schedule(outpt, inpt))));
      else
        maxdelay = compute_dd_bound(outpt, inpt, true);
      cout << "max delay btw " << inpt << " and " << outpt <<" is " << maxdelay << endl;
      vector<int> read_delays{0};

      // NOTE: Just to ensure we dont force everything to be a RAM
      int num_readers = 0;

      auto in_actions = domain.at(inpt);
      auto lex_max_events = get_lexmax_events(outpt);
      auto act_dom =
        ::domain(its_range(lex_max_events, to_uset(in_actions)));

      if (!isl_union_set_is_empty(act_dom)) {
        num_readers++;
        int qpd, lb;
        if (options.rtl_options.target_tile == TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN) {
          qpd = -to_int(lexminval(to_set(compute_dd_hw_schedule(outpt, inpt))));
          lb = -to_int(lexmaxval(to_set(compute_dd_hw_schedule(outpt, inpt))));
        } else {
          qpd = compute_dd_bound(outpt, inpt, true);
          lb = compute_dd_bound(outpt, inpt, false);
        }
        cout << "qpd: " << qpd << ", lb: " << lb << endl;

        for (int i = lb; i < qpd + 1; i++) {
          read_delays.push_back(i);
        }
      }

      auto rddom =
        its(range(access_map.at(inpt)),
            range(access_map.at(outpt)));

      //initial the delay map
      map<string, int> delay_map = {{outpt, read_delays.back()}};

      string pt_type_string = port_type_string();
      string name = inpt + "_to_" + outpt;

      stack_bank bank{name,
        options.inner_bank_offset_mode,
        pt_type_string,
        read_delays,
        num_readers,
        maxdelay,
        rddom,
        delay_map};

      return bank;
    } else {
      cout << "linear offset" << endl;
      int maxdelay = compute_dd_bound(outpt, inpt, true);
      vector<int> read_delays{0};
      int num_readers = 0;

      auto in_actions = domain.at(inpt);
      auto lex_max_events = get_lexmax_events(inpt, outpt);
      auto act_dom =
        ::domain(its_range(lex_max_events, to_uset(in_actions)));

      if (!isl_union_set_is_empty(act_dom)) {
        num_readers++;
        int qpd = compute_dd_bound(outpt, inpt, true);
        int lb = compute_dd_bound(outpt, inpt, false);

        for (int i = lb; i < qpd + 1; i++) {
          read_delays.push_back(i);
        }
      }

      auto rddom =
        its(range(access_map.at(inpt)),
            range(access_map.at(outpt)));

      cout << "got rddom" << endl;
      //initial the delay map
      map<string, int> delay_map = {{outpt, read_delays.back()}};

      string pt_type_string = port_type_string();
      string name = inpt + "_to_" + outpt;

      stack_bank bank{name,
        options.inner_bank_offset_mode,
        pt_type_string,
        read_delays,
        num_readers,
        maxdelay,
        rddom,
        delay_map};

      return bank;

    }
  }

  map<string, std::set<string> >
 get_unique_output_ports(UBuffer& buf) {
   map<string, std::set<string> > outmap;
   for (auto pt : buf.get_out_ports()) {

     bool is_duplicate = false;
     auto m = map_find(pt, buf.access_map);
     auto sched = map_find(pt, buf.schedule);
     auto dom = map_find(pt, buf.domain);

     for (auto existing_pair : outmap) {
       string existing = existing_pair.first;
       auto e_m = map_find(existing, buf.access_map);
       auto e_sched = map_find(existing, buf.schedule);
       auto e_dom = map_find(existing, buf.domain);

       if (isl_union_map_is_equal(e_m, m) &&
           isl_set_is_equal(e_dom, dom) &&
           isl_union_map_is_equal(e_sched, sched)) {
         is_duplicate = true;
         outmap[existing].insert(pt);
         break;
       }
     }

     if (!is_duplicate) {
       outmap[pt] = {pt};
     }
   }
   return outmap;
 }

  void UBuffer::merge_bank(CodegenOptions& options, string inpt, vector<stack_bank> mergeable) {
    if (!options.conditional_merge){
      stack_bank merged;
      merged.tp = INNER_BANK_OFFSET_STACK;
      //merged.layout = Box(mergeable.at(0).layout.dimension());
      merged.rddom = isl_union_set_read_from_str(ctx, "{}");
      merged.name =
        inpt + "_merged_banks_" + str(mergeable.size());
      merged.pt_type_string =
        mergeable.at(0).pt_type_string;
      merged.num_readers = mergeable.size();
      merged.maxdelay = -1;
      for (auto m : mergeable) {
        //cout << "merge: " << m.name << endl;
        //merged.layout = unn(merged.layout, m.layout);
        merged.rddom = unn(merged.rddom, m.rddom);
        if (m.maxdelay > merged.maxdelay) {
          merged.maxdelay = m.maxdelay;
        }
        for (auto mrd : m.read_delays) {
          merged.read_delays.push_back(mrd);
        }
      }
      merged.read_delays = sort_unique(merged.read_delays);

      cout << "# of banks = " << get_banks().size() << endl;
      for (auto to_replace : mergeable) {
        replace_bank(to_replace, merged);
      }
      cout << "# of banks after merge = " << get_banks().size() << endl;
      for (auto to_replace : mergeable) {
        assert(!has_bank(to_replace.name));
      }
      //assert(false);
    }
    else {
      //Add a condition to the merged offset
      //First sort the delay
      sort(mergeable.begin(), mergeable.end(), [](const bank& l, const bank& r) {
          return l.maxdelay > r.maxdelay;
          });
      for (auto merge_bank : mergeable) {
        //cout << merge_bank.name << " with delay : " << merge_bank.maxdelay << endl;
      }

      while(mergeable.size()) {
        //keep pop port to merged bank and replace origin bank
        stack_bank merged;
        merged.tp = INNER_BANK_OFFSET_STACK;
        //merged.layout = Box(mergeable.at(0).layout.dimension());
        merged.rddom = isl_union_set_read_from_str(ctx, "{}");
        merged.name =
          inpt + "_merged_banks_" + str(mergeable.size());
        merged.pt_type_string =
          mergeable.at(0).pt_type_string;
        merged.read_delays.push_back(0);

        vector<bank> replace_candidates;
        bank m = mergeable.back();
        merged.maxdelay = m.maxdelay;
        while (m.maxdelay - merged.maxdelay <= options.merge_threshold) {
          auto in2out = split_at(m.name, "_to_");
          //cout << "output port name: " <<  in2out.at(1) << endl;
          merged.delay_map[in2out.at(1)] = m.maxdelay;
          replace_candidates.push_back(m);
          //merged.layout = unn(merged.layout, m.layout);
          merged.rddom = unn(merged.rddom, m.rddom);
          merged.maxdelay = m.maxdelay;
          merged.read_delays.push_back(m.maxdelay);
          cout << m.maxdelay <<", " << merged.maxdelay << endl;

          //get the next data
          mergeable.pop_back();
          if (mergeable.size())
            m = mergeable.back();
          else
            break;
        }
        merged.num_readers = replace_candidates.size();
        merged.read_delays = sort_unique(merged.read_delays);

        for (auto to_replace : replace_candidates) {
          cout << to_replace.name << endl;
          replace_bank(to_replace, merged);
        }
        cout << "Create a new bank !"<< endl;
      }
    }
  }

  int UBuffer::logical_dimension() {
    assert(access_map.size() > 0);
    umap* m = pick(access_map).second;
    auto ms = get_maps(m);
    assert(ms.size() > 0);
    return num_out_dims(pick(ms));
  }

  void UBuffer::print_bank_info() {
    //find the lexmin of all out port
    for (auto itr: get_banks()) {
      cout << itr.name << endl;
      for (auto it: banks_to_inputs.at(itr.name)) {
          cout << "\tinpt: " << it << endl;
      }

      for (auto it: banks_to_outputs.at(itr.name)) {
          cout << "\toutpt: " << it << endl;
      }
      cout << endl;
      //string inpt = itr.first.first;
      //string outpt = itr.first.second;
      //cout << "\tpt: [" << outpt << "] -> pt:[" << inpt
        //<< "] has delay = " << itr.second.maxdelay << endl ;
    }
  }

  void UBuffer::generate_banks(CodegenOptions& options) {
    cout << "generating banks for " << name << endl;
    if (options.debug_options.expect_all_linebuffers) {
      assert(dynamic_ports.size() == 0);
    }

    banking_strategy strat = options.get_banking_strategy(name);
    banking = strat;
    if (dynamic_ports.size() > 0 ||
        banking.partition == "register_file" ||
        banking.partition == "none") {

      bank bnk = compute_bank_info();
      for (auto inpt : get_in_ports()) {
        for (auto outpt : get_out_ports()) {
          add_bank_between(inpt, outpt, bnk);
        }
      }

    } else if (banking.partition == "cyclic") {
      int dim = logical_dimension();

      assert(dim == banking.cycle_factors.size());

      vector<string> dvs;
      vector<string> addrs;
      int num_banks = 1;
      for (int i = 0; i < dim; i++) {
        assert(banking.cycle_factors.at(i) > 0);
        dvs.push_back("a_" + str(i));
        addrs.push_back("a_" + str(i) + " % " + str(banking.cycle_factors.at(i)));
        num_banks *= banking.cycle_factors.at(i);
      }

      string bank_func =
        curlies(name + bracket_list(dvs) + " -> " + bracket_list(addrs));

      //bank map: from address to the bank ID
      cout << "bank func = " << bank_func << endl;
      auto bank_map = isl_map_read_from_str(ctx, bank_func.c_str());
      cout << str(bank_map) <<endl;
      assert(banking_scheme_is_legal(bank_map, *this));

      //auto range2bank = dot(to_umap(global_range()), to_umap(bank_map));
      //get a map from data range to bankID
      auto range2bank = its(to_umap(bank_map), global_range());
      cout << "\tglobal range of buffer: " << str(range2bank) << endl;
      auto bankID_list = get_points(range(bank_map));
      for (auto bankID : bankID_list) {
        auto id_set = to_set(bankID);
        auto this_bank_rddom = its(inv(range2bank), id_set);
        cout << str(this_bank_rddom) << endl;
        std::set<string> inpt_vec, outpt_vec;
        for (auto inpt: get_in_ports()) {
          auto acc_map = access_map.at(inpt);
          //cout << str(range(acc_map)) << endl;
          cout << "\t input port: " << inpt << ", " << empty(its(range(this_bank_rddom), range(acc_map))) << endl;
          if (empty(its(range(this_bank_rddom), range(acc_map))) == 0) {
            inpt_vec.insert(inpt);
          }
        }

        for (auto outpt: get_out_ports()) {
          auto acc_map = access_map.at(outpt);
          //cout << str(range(acc_map)) << endl;
          cout << "\t output port: " << outpt << ", " << empty(its(range(this_bank_rddom), range(acc_map))) << endl;
          if (empty(its(range(this_bank_rddom), range(acc_map))) == 0) {
            outpt_vec.insert(outpt);
          }
        }
        bank tmp = compute_bank_info(range(this_bank_rddom), bankID, inpt_vec, outpt_vec);
        add_bank_between(inpt_vec, outpt_vec, tmp);
      }

      /*bank bnk = compute_bank_info();
      for (int i = 0; i < num_banks; i++) {
        bank cpy = bnk;
        cpy.name = "cyclic_bank_" + str(i);
        bank_list.push_back(cpy);
      }*/

    } else {

      map<string, std::set<string> > unique_outs =
        get_unique_output_ports(*this);

      cout << "===== Unique ports" << endl;
      for (auto ptg : unique_outs) {
        cout << tab(1) << ptg.first << endl;
        for (auto pt : ptg.second) {
          cout << tab(2) << pt << endl;
        }
      }

      // Use naive banking that reaches target throughput
      for (auto outpt : get_out_ports()) {
      //for (auto outptg : unique_outs) {
        //string outpt = outptg.first;


        cout << "Generating banks for " << outpt << endl;
        umap* reads_to_sources = get_lexmax_events(outpt);
        cout << tab(1) << "lexmax events: " << str(reads_to_sources) << endl;
        uset* producers_for_outpt = range(reads_to_sources);
        for (auto inpt : get_in_ports()) {
          auto write_ops =
            ::domain(access_map.at(inpt));
          auto read_ops =
            ::domain(access_map.at(outpt));
          auto ops_overlap = its(write_ops, producers_for_outpt);
          auto overlap =
            its(range(access_map.at(inpt)), range(access_map.at(outpt)));

          if (!empty(ops_overlap) && !empty(overlap)) {
            stack_bank bank = compute_bank_info(options, inpt, outpt);
            add_bank_between(inpt, outpt, bank);
          }
        }
      }
    }

    if (options.inner_bank_offset_mode !=
        INNER_BANK_OFFSET_STACK) {
      for (auto& b : bank_list) {
        b.tp = options.inner_bank_offset_mode;
      }
    }

    cout << tab(1) << "after banking there are " << bank_list.size() << " banks" << endl;
    for (auto & b:bank_list) {
      cout << "\tinput: ";
      for (auto inpt: banks_to_inputs.at(b.name))
              cout <<tab(1) << inpt <<endl;
      cout << "\t output: ";
      for (auto outpt: banks_to_outputs.at(b.name))
              cout <<tab(1) << outpt <<endl;
    }
  }

  void UBuffer::generate_banks_and_merge(CodegenOptions& options) {
    generate_banks(options);

    if (banking.partition == "exhaustive") {
      for (auto inpt : get_in_ports()) {
        // try to turn the banks for this inpt into one big linebuffer
        vector<stack_bank> receivers = receiver_banks(inpt);
        vector<stack_bank> mergeable;
        for (auto bnk : receivers) {

          if (options.debug_options.expect_all_linebuffers) {
            assert(bnk.read_delays.size() == 2);
          }
          if (bnk.tp == INNER_BANK_OFFSET_STACK &&
              bnk.read_delays.size() == 2) {
            mergeable.push_back(bnk);
          }

        }

        if (mergeable.size() > 1) {
          merge_bank(options, inpt, mergeable);
        }
      }
    }
  }

  isl_map* UBuffer::merge_output_pt(vector<string> merge_pt) {
    //cout << "merge port vec: " << merge_pt << endl;
    string pt_name = pick(merge_pt);
    auto first_pt_amap = access_map.at(pt_name);
    auto s = to_map(first_pt_amap);
    auto shift_map = cpy(s);
    int depth = 0;
    for (size_t i = 1; i < merge_pt.size(); i ++) {
      shift_map = get_shift_map(shift_map);
      string name = merge_pt.at(i);
      //cout << "shift map: " << str(shift_map) << ", original map: " << str(access_map.at(name)) << endl;
      if (equal(range(to_umap(shift_map)), range(access_map.at(name)))) {
        //assign the largest depth
        depth  = i;
      }
    }
    //cout << depth << endl;
    auto ret = pad_to_domain_map(s, depth);
    string dom_name = domain_name(ret);
    ret = set_domain_name(ret, dom_name + "_" + to_string(depth));
    cout << "Rewrited output port map: " << str(ret) << endl;
    return ret;
  }

  pair<isl_map*, isl_map*> UBuffer::merge_output_pt_with_sched(vector<string> merge_pt) {
    //cout << "merge port vec: " << merge_pt << endl;
    string pt_name = pick(merge_pt);
    auto first_pt_amap = access_map.at(pt_name);
    auto s = to_map(first_pt_amap);
    auto sched = to_map(schedule.at(pt_name));
    auto shift_map = cpy(s);
    int depth = 0;
    for (size_t i = 1; i < merge_pt.size(); i ++) {
      shift_map = get_shift_map(shift_map);
      string name = merge_pt.at(i);
      cout << "shift map: " << str(shift_map) << ", original map: " << str(access_map.at(name)) << endl;
      if (equal(range(to_umap(shift_map)), range(access_map.at(name)))) {
        //assign the largest depth
        depth  = i;
      }
    }
    //cout << depth << endl;
    auto ret = pad_to_domain_map(s, depth);
    auto ret_sched = pad_to_domain_map(sched, depth);
    string dom_name = domain_name(ret);
    if (depth > 0) {
        ret = set_domain_name(ret, dom_name + "_" + to_string(depth));
        ret_sched = set_domain_name(ret_sched, dom_name + "_" + to_string(depth));
    }
    cout << "Rewrited output port map: " << str(ret) << endl;
    return make_pair(ret, ret_sched);
  }

  pair<isl_map*, isl_map*> UBuffer::get_shift_pt_access_with_sched(string pt_name, int depth) {
    auto s = to_map(access_map.at(pt_name));
    auto sched = to_map(schedule.at(pt_name));
    auto ret = pad_to_domain_map(s, depth);
    auto ret_sched = pad_to_domain_map(sched, depth);
    string dom_name = domain_name(ret);
    if (depth > 0) {
      ret = set_domain_name(ret, dom_name + "_" + to_string(depth));
      ret_sched = set_domain_name(ret_sched, dom_name + "_" + to_string(depth));
    }
    cout << "Rewrited output port map: " << str(ret) << endl;
    cout << "Rewrited output port sched: " << str(ret_sched) << endl;
    return make_pair(ret, ret_sched);
  }

  void UBuffer::port_group2bank(int in_port_width, int out_port_width) {
    /*Refactor the port grouping algorithm, we should put it into bank,
     * instead of ubuffer. Think about ubuffer is the original
     * */
    stack<bank> bank_pool;
    for (auto inpt: get_in_ports()) {
      vector<bank> rec = receiver_banks(inpt);
      sort(rec.begin(), rec.end(), [](const bank& l, const bank& r) {
          return l.maxdelay > r.maxdelay;
          });
      for (auto bk : rec) {
        bank_pool.push(bk);
        cout << tab(1) << bk.name << ", " << bk.maxdelay << ", SR only: " << bk.onlySR() << endl;
      }
    }
    int group_in_port_width = 0;
    int group_out_port_width = 0;

    //heruistic solution for chain the port output
    pair<string, string> last_bank_IO;
    uset* last_bank_rddom;

    //Using set for reoccuring port, single input multi output available
    std::set<string> inpt_set, outpt_set;
    //Save the new access pattern and schedule
    map<string, pair<isl_map*, isl_map*>> outpt_merge;

    //the buffer connection information, out-port point to in-port
    vector<pair<string, string> > back_edge;
    map<string, int> delay_map;
    vector<string> pt_vec;
    while(!bank_pool.empty()) {
      auto bk = bank_pool.top();
      cout << bk.name << endl;
      //First check if this bank already have saturized the hardware memory
      if (get_bank_inputs(bk.name).size() == in_port_width) {
          bank_pool.pop();
          continue;
      }

      auto input = get_bank_input(bk.name);

      group_in_port_width = inpt_set.size();
      group_out_port_width ++;
      auto pt_name2delay = bk.get_sort_delay_map();
      for (auto n2d: pt_name2delay) {
        delay_map.insert((n2d));
      }
      delay_map[input] = 0;

      if ((group_in_port_width <= in_port_width) && (group_out_port_width <= out_port_width)) {
        //pop stack and add port width
        bank_pool.pop();

        //add it to the set
        //If they share the input port we should insert the latest output port, only if the new bank
        //read domain is subsumed by the old one
        string bank_input = input;
        //if (last_bank_rddom) {
        //    cout << "last bank rddom: "<< last_bank_IO.first << last_bank_IO.second <<"\t" << str(last_bank_rddom);
        //}
        //cout << "\n current bank rddom: " << bk.name << "\t" << str(bk.rddom) << endl;
        if (last_bank_IO.first == "") {
          inpt_set.insert(input);
          bank_input = input;
        }
        else if ((last_bank_IO.first != input) || (empty(its(last_bank_rddom, bk.rddom)))) {
          inpt_set.insert(input);
          bank_input = input;
        }
        else {
          //cout << "Substitute the output port: " << last_bank_IO.second << "to the input : " << input << endl;
          bank_input = last_bank_IO.second;
          inpt_set.insert(bank_input);
        }
        pt_vec = bk.get_out_ports();
        for (auto it : bk.get_sort_delay_map()) {
            //cout << "Bank: "<< bk.name << "'s port:'" << it.first << " has delay: " << it.second << endl;
        }

        //sort the output port vec with the largest access in beginning
        sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
            auto l_start = lexminpt(range(access_map.at(l)));
            auto r_start = lexminpt(range(access_map.at(r)));
            return lex_gt_pt(l_start, r_start);
            });

        int min = pt_name2delay.front().second;
        int max = pt_name2delay.back().second;
        for (auto itr = pt_name2delay.begin(); itr < pt_name2delay.end(); itr ++) {

          int depth = max - itr->second;
          cout << itr->first << "pad depth: " << depth << endl;
          auto out_map_merge =
              get_shift_pt_access_with_sched(itr->first, depth);
          outpt_merge.insert(make_pair(itr->first, out_map_merge));
          if (itr == pt_name2delay.begin()) {
            back_edge.push_back(make_pair(itr->first, bank_input));
          }
          else {
            back_edge.push_back(make_pair(itr->first, (itr-1)->first));
          }
        }
        //for (size_t i = 0; i < pt_vec.size(); i ++) {
        //  auto out_map_merge =
        //    merge_output_pt_with_sched(vector<string>(pt_vec.begin() + i, pt_vec.end()));
        //  outpt_merge.insert(make_pair(pt_vec.at(i), out_map_merge));
        //  if (i == 0) {
        //    back_edge.push_back(make_pair(pt_vec.at(i), bank_input));
        //  }
        //  else {
        //    back_edge.push_back(make_pair(pt_vec.at(i), pt_vec.at(i-1)));
        //  }
        //}

        //check if this should be a separate bank
        if (bk.onlyWire()) {
          //this is the case there is only boradcast data
          last_bank_rddom = bk.rddom;
          cout << "This is a bank of broadcasting" << endl;
          group_in_port_width = 0;
          group_out_port_width = 0;
          inpt_set.clear();
          outpt_set.clear();
          outpt_merge.clear();
          delay_map.clear();
          back_edge.clear();
        } else if (bk.onlySR()) {
          last_bank_rddom = create_subbank_branch(inpt_set, outpt_set, delay_map, outpt_merge, back_edge);
          cout << "Reset Counter for shift reg" << endl;
          group_in_port_width = 0;
          group_out_port_width = 0;
        }

        //auto out_map_merge = merge_output_pt(pt_vec);
        //replace output port access map, adding two shift reg
        //outpt_merge.insert(make_pair(pt_vec.front(), out_map_merge));
      }
      else {
        //update the input port
        last_bank_IO.first = input;
        last_bank_IO.second = pt_vec.front();
        last_bank_rddom = create_subbank_branch(inpt_set, outpt_set, delay_map, outpt_merge, back_edge);

        //reset the grouping counter
        cout << "Reset Counter" << endl;
        group_in_port_width = 0;
        group_out_port_width = 0;
      }
    }
    //chances are that we have some leftover
    if (!inpt_set.empty()) {
      create_subbank_branch(inpt_set, outpt_set, delay_map, outpt_merge, back_edge);
    }
  }

  /* This is the function to transform the chain buffer structure into a tree
   * Where it create a sub-bank with all the backedge information
   *
   * -[]-[]-[_______]-[]-[]-[_______]-[]-[]
   *
   * =>
   *
   * -[]-[]
   * |
   * | _______
   * -[ 1-in  ]-[]-[]
   *  [_2-out_]-[]-[]
   *
   *  This functional will return the read domain of the supper bank
   * */
  string find_origin(vector<pair<string, string> > edges, map<string, int> & delay_map, string source) {
    for (auto edge : edges) {
      string in = edge.second;
      string out = edge.first;
      int delay = delay_map.at(in) - delay_map.at(out);
      if( (delay == 0) && (out == source))
          return find_origin(edges, delay_map, in);
    }
    return source;
  }

  uset* UBuffer::create_subbank_branch(
      std::set<string> & inpt_set,
      std::set<string> & outpt_set,
      map<string, int> & delay_map,
      map<string, pair<isl_map*, isl_map*> > & outpt_merge,
      vector<pair<string, string> > & back_edge) {
    for (auto it : outpt_merge) {
      replace_pt(it.first, it.second.first, it.second.second);
    }
    for (auto it: back_edge) {
      auto read = it.first;
      auto write = it.second;
      if (inpt_set.count(write) == 0) {
        //shift register

        //delay the read schedule after write
        //auto new_sched = to_map(schedule.at(read));
        //auto wr_sched = to_map(schedule.at(write));
        //new_sched = delay_sched_map(new_sched, wr_sched);
        //schedule.at(read) = to_umap(new_sched);

        remove_bank(read);
        CodegenOptions options;
        int delay = delay_map.at(read) - delay_map.at(write);
        if (delay == 0)
            write = find_origin(back_edge, delay_map, write);
        options.inner_bank_offset_mode = INNER_BANK_OFFSET_STACK;
        stack_bank bk = compute_bank_info(write, read, delay);
        add_bank_between(write, read, bk);
      }
      else {
        remove_bank(read);
        outpt_set.insert(read);
      }
    }
    //create a supper bank between inpt_set and outpt_set
    stack_bank super_bk = compute_bank_info(inpt_set, outpt_set);
    for (auto inpt: inpt_set) {
      for (auto outpt: outpt_set) {
        cout << "Merge port: " << outpt << endl;
        add_bank_between(inpt, outpt, super_bk);
      }
    }

    //clear the temporary storage
    inpt_set.clear();
    outpt_set.clear();
    outpt_merge.clear();
    back_edge.clear();
    delay_map.clear();
    return super_bk.rddom;
  }

  vector<UBuffer> UBuffer::port_grouping(int port_width) {
    /* This is the port constrained buffer lowering algorithm,
     * Based on the banking information, we are regrouping the banks
     * into a set of ubuffer
     */
    //TODO: we need more app to test this heuristic based algorithm
    vector<UBuffer> regroup_ub;
    stack<bank> bank_pool;
    for (auto inpt: get_in_ports()) {
      vector<bank> rec = receiver_banks(inpt);
      sort(rec.begin(), rec.end(), [](const bank& l, const bank& r) {
          return l.maxdelay > r.maxdelay;
          });
      for (auto bk : rec) {
        bank_pool.push(bk);
        //cout << tab(1) << bk.name << ", " << bk.maxdelay << ", SR only: " << bk.onlySR() << endl;
      }
    }
    int group_port_width = 0;

    //Using set for reoccuring port, single input multi output available
    std::set<string> inpt_set;
    map<string, isl_map*> outpt_merge;

    int cnt = 0;
    while(!bank_pool.empty()) {
      auto bk = bank_pool.top();
      auto input = get_bank_input(bk.name);
      if (bk.onlySR()) {
        //create a ub with mark of shift register
        string tmp[] = {input};
        auto pt_vec = bk.get_out_ports();
        sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
            auto l_start = lexminpt(range(access_map.at(l)));
            auto r_start = lexminpt(range(access_map.at(r)));
            return lex_lt_pt(l_start, r_start);
            });
        auto out_map_merge = merge_output_pt(pt_vec);
        regroup_ub.emplace_back(*this, std::set<string>(tmp, tmp+1), std::set<string>({}), cnt);
        auto dom = ::domain(out_map_merge);
        auto sched = schedule.at(pt_vec.front());
        auto & new_ub = regroup_ub.back();
        string pt_name = pt_vec.front() + "_merge";
        out_map_merge = set_range_name(out_map_merge, new_ub.name);
        new_ub.add_out_pt(pt_name, dom, out_map_merge, sched);
        new_ub.port_bundles[::name(dom)+ "_write"].push_back(pt_name);
        //delay_map.insert(make_pair(pt_name, bk.delay_map));
        bank_pool.pop();
        cnt ++;
      }
      else{
        group_port_width += inpt_set.count(input) + 1;
        if (group_port_width < port_width) {
          //pop stack and add port width
          bank_pool.pop();

          //add it to the group
          inpt_set.insert(input);
          auto pt_vec = bk.get_out_ports();
          //outpt_set.insert(outpts.begin(), outpts.end());
          sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
              auto l_start = lexminpt(range(access_map.at(l)));
              auto r_start = lexminpt(range(access_map.at(r)));
              return lex_lt_pt(l_start, r_start);
              });
          auto out_map_merge = merge_output_pt(pt_vec);
          outpt_merge.insert(make_pair(pt_vec.front(), out_map_merge));
        }
        else {
          //create a new merged ubuffer for this backend port constraint
          //UBuffer ub_grp(*this, inpt_set, outpt_set, cnt);
          regroup_ub.emplace_back(*this, inpt_set, std::set<string>({}), cnt);
          auto & new_ub = regroup_ub.back();
          for (auto it: outpt_merge) {
            auto dom = ::domain(it.second);
            auto acc_map = it.second;
            acc_map = set_range_name(acc_map, new_ub.name);
            auto sched = schedule.at(it.first);
            string pt_name = it.first + "_merge";
            new_ub.add_out_pt(pt_name, dom, acc_map, sched);
            new_ub.port_bundles[::name(dom) + "_write"].push_back(pt_name);
          }
          group_port_width = 0;
          inpt_set.clear();
          cnt ++;
        }
      }
    }
    //chances are that we have some leftover
    if (!inpt_set.empty()) {
      regroup_ub.emplace_back(*this, inpt_set, std::set<string>({}), cnt);
      auto & new_ub = regroup_ub.back();
      for (auto it: outpt_merge) {
        auto dom = ::domain(it.second);
        auto acc_map = it.second;
        acc_map = set_range_name(acc_map, new_ub.name);
        auto sched = schedule.at(it.first);
        string pt_name = it.first + "_merge";
        new_ub.add_out_pt(pt_name, dom, acc_map, sched);
        new_ub.port_bundles[::name(dom) + "_write"].push_back(pt_name);
      }
    }
    return regroup_ub;
  }

  Box UBuffer::get_bundle_box(const std::string & pt) {
    string pt_name;
    for (auto it: port_bundles) {
      if (std::find(it.second.begin(), it.second.end(), pt)
          != it.second.end()){
        pt_name = pick(it.second);
        break;
      }
    }
    cout << pt_name << endl;
    auto pt_map = to_map(access_map.at(pt_name));
    auto pt_range = range(pt_map);
    Box ret;
    vector<int> offset;
    for (int i = 0; i < get_out_dim(pt_map); i ++) {
      int stride = stride_in_dim(pt_range, i);
      ret.intervals.push_back({0, stride - 1});
    }

    //TODO: we may need a dilation box if we have holes in bundle
    //auto min_pt = parse_pt(sample(lexmin(pt_range)));
    //auto max_pt = parse_pt(sample(lexmax(pt_range)));
    return ret;
  }

  Box UBuffer::extract_addr_box(uset* rddom, vector<size_t> sequence) {
    //sequence save the transpose matrix
    //cout << "extracting address box from " << str(rddom) << endl;
    auto min_pt =
      parse_pt(sample(lexmin(rddom)));
    auto max_pt =
      parse_pt(sample(lexmax(rddom)));

    assert(min_pt.size() == max_pt.size());

    Box b(min_pt.size());
    for (size_t i = 0; i < min_pt.size(); i++) {
      size_t loc = sequence.at(i);
      b.intervals[loc] = {min_pt.at(i), max_pt.at(i)};
    }
    return b;
  }

  umap* UBuffer::separate_offset_dim(const std::string & pt) {
    auto pt_access_map = to_map(access_map.at(pt));
    Box pt_block = get_bundle_box(pt);

    vector<string> var_list, map_var_list, bank_id_list;
    bank_id_list.push_back("0");
    for (size_t  dim = 0; dim < pt_block.dimension(); dim ++) {
      string var = "i"+to_string(dim);
      var_list.push_back(var);
      if (pt_block.length(dim) != 1) {
        int div = pt_block.length(dim);
        string floor_expr = "floor(" + var + "/" + to_string(div) +")";
        string offset_expr = var + "-" + to_string(div) + "*" + floor_expr;
        bank_id_list.push_back(offset_expr);
        map_var_list.push_back(floor_expr);
      }
      else {
        map_var_list.push_back(var);
      }
    }

    string buf_name = range_name(pt_access_map);
    string new_name = buf_name + "_internal";
    string id_name = buf_name + "_id";
    auto domain_vars = sep_list(var_list, "[", "]", ",");
    auto range_vars = sep_list(map_var_list, "[", "]", ",");
    auto id_vars = sep_list(bank_id_list, "[", "]", ",");

    //string map_str = "{ifbuf[a, b, c] -> ifbuf_sep[a-4*floor(a/4), floor(a/4), b, c]}";
    string map_str = "{" + buf_name+domain_vars+" -> " + new_name + range_vars + "}";
    auto addr_trans = rdmap(ctx, map_str);
    string id_str = "{" + buf_name+domain_vars+" -> " + id_name + id_vars + "}";
    auto id_trans = rdmap(ctx, id_str);
    //cout <<"Transform: " << str(addr_trans) << "access_map: " << str(pt_access_map) << endl;
    auto new_access_map = dot(pt_access_map, addr_trans);
    //cout << "Transform separate access map: " << str(new_access_map) << endl;
    //TODO: save this bankID some where
    auto bank_id_map = simplify(dot(pt_access_map, id_trans));
    //cout << "Bank ID separate access map: " << str(bank_id_map) << endl;
    return new_access_map;
  }

  vector<string> UBuffer::map2address(isl_map* pt_access_map) {
    vector<string> ret;
    size_t var_dim = get_in_dim(pt_access_map);
    size_t addr_dim = get_out_dim(pt_access_map);
    vector<vector<int>> acc_matrix = get_access_matrix_from_map(pt_access_map);
    vector<string> id2name;
    for (size_t i = 0; i < var_dim; i ++) {
      id2name.push_back("i" + to_string(i));
      if (isl_map_has_dim_id(pt_access_map, isl_dim_in, i)) {
        //rename with its name, position 0 (root) will save const
        string name = str(isl_map_get_dim_id(pt_access_map, isl_dim_in, i));
        id2name.back() = name;
      }
    }

    for (auto row: acc_matrix) {
      vector<string> sum_list;
      for (auto itr = row.begin()+1; itr != row.end(); itr ++ ){
        int item = *itr;
        int cnt = itr - row.begin() ;
        if (item == 0 ) {
          continue;
        }
        else if (item == 1) {
          sum_list.push_back(id2name[cnt]);
        }
        else {
          string entry = to_string(item) + "*" + id2name[cnt];
          sum_list.push_back(entry);
        }
      }

      //const
      if (sum_list.size() == 0 || (row.front() != 0)) {
        sum_list.push_back(std::to_string(row.front()));
      }
      ret.push_back(sep_list(sum_list, "", "", "+"));
      //cout << "\t Addr: " << ret.back() << endl;
    }
    return ret;
  }

  vector<string> UBuffer::get_ram_address(const std::string& pt) {
    auto pt_access_map = to_map(access_map.at(pt));
    return map2address(pt_access_map);
  }

  string UBuffer::generate_linearize_ram_addr(const std::string& pt, bank& bnk) {
    vector<int> lengths;
    vector<int> mins;
    for (int i = 0; i < logical_dimension(); i++) {
      auto s = project_all_but(to_set(bnk.rddom), i);
      auto min = to_int(lexminval(s));
      mins.push_back(min);
      auto max = to_int(lexmaxval(s));
      int length = max - min + 1;
      lengths.push_back(length);
    }

    isl_map* m = to_map(access_map.at(pt));
    auto svec = isl_pw_multi_aff_from_map(m);
    vector<pair<isl_set*, isl_multi_aff*> > pieces =
      get_pieces(svec);
    vector<string> domains;
    vector<string> offsets;
    for (auto piece : pieces) {
      vector<string> addr_vec;
      isl_multi_aff* ma = piece.second;
      for (int d = 0; d < isl_multi_aff_dim(ma, isl_dim_set); d++) {
        isl_aff* aff = isl_multi_aff_get_aff(ma, d);
        addr_vec.push_back(codegen_c(aff));
      }

      vector<string> addr_vec_out;
      for (int i = 0; i < logical_dimension(); i++) {
        int length = 1;
        for (int d = 0; d < i; d++) {
          length *= lengths.at(d);
        }
        string item = "(" + addr_vec.at(i) + " - " + str(mins.at(i)) + ") * " + to_string(length);
        addr_vec_out.push_back(item);
      }

      string addr = sep_list(addr_vec_out, "", "", " + ");
      offsets.push_back(addr);
      domains.push_back(codegen_c(piece.first));
    }

    assert(offsets.size() > 0);
    assert(domains.size() == offsets.size());

    string base = offsets.at(0);
    for (int d = 1; d < offsets.size(); d++) {
      base = parens(parens(domains.at(d)) + " ? " + offsets.at(d) + " : " + base);
    }

    return base;
  }

vector<string> buffer_vectorization(vector<int> iis,
        vector<string> buf_name_vec,
        int dim_id, int fetch_width,
        map<string, UBuffer> & buffers) {
  /* Function to vectorize the buffer access, will rewrite the buffer access pattern,
   * generate the new domain and access map and also add two other buffer on
   * both input and output side
   * */
  vector<string> rem_deps, rem_origin_ubuf;
  for(auto it : buffers) {
    if (std::find(buf_name_vec.begin(), buf_name_vec.end(), it.first) != buf_name_vec.end()) {
      rem_origin_ubuf.push_back(it.first);
      auto target_buffer = it.second;
      cout << "buffer_vectorization Vectorizing: " << target_buffer.name << endl;
      cout << target_buffer << endl;

      //Input must be take care
      //need to first pad the buffer output to the multiplier of
      target_buffer.pad_read_dom(dim_id, fetch_width);
      target_buffer.pad_write_dom(dim_id, fetch_width);

      //ret is a pair of vectorized_buffer and the dependency need to be removed
      auto ret = target_buffer.vectorization(dim_id, fetch_width, iis);
      for (auto itr: ret.first) {
        buffers[itr.first] = itr.second;
      }
      for (auto deps: ret.second) {
        rem_deps.push_back(deps);
      }
    }
  }
  for (auto rem: rem_origin_ubuf) {
    buffers.erase(rem);
  }
  return rem_deps;
}

vector<string> buffer_vectorization(vector<int> iis,
        string buf_name, int dim_id, int fetch_width, map<string, UBuffer> & buffers) {
    return buffer_vectorization(iis, vector<string>({buf_name}), dim_id, fetch_width, buffers);
}

vector<string> buffer_vectorization(string buf_name, int dim_id, int fetch_width, map<string, UBuffer> & buffers) {
    return buffer_vectorization({}, vector<string>({buf_name}), dim_id, fetch_width, buffers);
}

vector<string> buffer_vectorization(vector<string> buf_name_vec, int dim_id, int fetch_width, map<string, UBuffer> & buffers) {
    return buffer_vectorization({}, buf_name_vec, dim_id, fetch_width, buffers);
}

  map<string, isl_map*> UBuffer::produce_vectorized_schedule(string in_bd_name, string out_bd_name, string self_loop_bd, int dim_id, int fetch_width) {
    /*
     * Previously we have two ops, input and output.In order to do the vectorization
     * we need to create 2 other ops, input_vec and output_vec
     * */
    string in_pt_name = pick(port_bundles.at(in_bd_name));
    string out_pt_name = pick(port_bundles.at(out_bd_name));
    string self_loop_name = pick(port_bundles.at(self_loop_bd));
    string in_op = domain_name(to_map(access_map.at(in_pt_name)));
    string out_op = domain_name(to_map(access_map.at(out_pt_name)));
    string acc_op = domain_name(to_map(access_map.at(self_loop_name)));
    auto in_sched = schedule.at(in_pt_name);
    auto out_sched = schedule.at(out_pt_name);
    auto acc_sched = schedule.at(self_loop_name);
    auto in_sched_vec = collect_sched_vec(in_sched);
    auto out_sched_vec = collect_sched_vec(out_sched);
    auto acc_sched_vec = collect_sched_vec(acc_sched);
    cout << "\tin_sched: " << str(in_sched) <<
        "\n\tout_sched: " << str(out_sched) <<
        "\n\tacc_sched: " << str(acc_sched) << endl;
    cout << "\tin_sched vec: " << in_sched_vec <<
        "\n\tout_sched vec: " << out_sched_vec <<
        "\n\tacc_sched vec: " << acc_sched_vec << endl;
    assert(in_sched_vec.size() == out_sched_vec.size());

    //get the innermost address dim
    auto loop_access_map = access_map.at(self_loop_name);
    auto rel_vec = relation_map(to_map(loop_access_map));
    cout << str(get_aff(to_map(loop_access_map))) << rel_vec << endl;
    int inner_most_address_related_dim_id;
    for (size_t i = rel_vec.size() - 1; i >= 0; i -- ) {
      if (rel_vec.at(i) != 0) {
        inner_most_address_related_dim_id = i;
        break;
      }
    }
    int sched_peel_dim = get_peel_schedule_domain_dim(to_map(acc_sched), inner_most_address_related_dim_id);

    cout << "peeldim: " << sched_peel_dim << ", inner: " << inner_most_address_related_dim_id << endl;
    //the new generated schedule vectors
    vector<string> in_vectorized_sched_vec, out_vectorized_sched_vec, in_new_sched_vec, out_new_sched_vec;
    vector<string> acc_in_vectorized_sched_vec, acc_out_vectorized_sched_vec, acc_new_sched_vec;
    bool find_sched_dim = false;
    size_t sched_dim = 0;
    for (size_t dim = 0; dim < in_sched_vec.size(); dim ++) {
      if (!(is_number(in_sched_vec[dim]) || find_sched_dim)) {
        if (dim == 0){
          find_sched_dim = true;
          in_vectorized_sched_vec.push_back("1");
          in_new_sched_vec.push_back("0");
          out_vectorized_sched_vec.push_back("2");
          out_new_sched_vec.push_back("3");
        }
        else {
          //this is the situation we did not run any schedule optimization
          //First try
          find_sched_dim = true;
          int in_sched_stamp = safe_stoi(in_sched_vec[dim-1]);
          int out_sched_stamp = safe_stoi(out_sched_vec[dim-1]);
          if (in_sched_stamp <= out_sched_stamp - 1) {
            in_new_sched_vec.push_back("0");
            in_vectorized_sched_vec.push_back( "1" );
            out_vectorized_sched_vec.push_back( "0");
            out_new_sched_vec.push_back("1");
            acc_new_sched_vec.push_back("0");
            acc_out_vectorized_sched_vec.push_back("0");
            acc_in_vectorized_sched_vec.push_back("0");
          }
          else {
            cout << "ERROR: The schedule is not considered\n\tin vec: " << in_sched_vec << "\n\tout vec: " << out_sched_vec << endl;
            assert(false);
          }
        }
      }
      in_vectorized_sched_vec.push_back(in_sched_vec[dim]);
      in_new_sched_vec.push_back(in_sched_vec[dim]);
      out_vectorized_sched_vec.push_back(out_sched_vec[dim]);
      out_new_sched_vec.push_back(out_sched_vec[dim]);
      acc_new_sched_vec.push_back(acc_sched_vec[dim]);
      if (dim <= sched_peel_dim) {
        acc_out_vectorized_sched_vec.push_back(acc_sched_vec[dim]);
        acc_in_vectorized_sched_vec.push_back(acc_sched_vec[dim]);
      } else {
        acc_out_vectorized_sched_vec.push_back("0");
        acc_in_vectorized_sched_vec.push_back("0");
      }
    }

    //cout << "\tin: " << in_new_sched_vec << "\n\tout: " << out_new_sched_vec << endl;
    //cout << "\tin vec: " << in_vectorized_sched_vec << "\n\tout vec: " << out_vectorized_sched_vec << endl;
    map<string, isl_map*> new_sched;
    auto in_sched_new = gen_map_from_sched_vec(ctx, in_new_sched_vec, in_op);
    new_sched.insert(make_pair(in_op, in_sched_new));
    auto out_sched_new = gen_map_from_sched_vec(ctx, out_new_sched_vec, out_op);
    new_sched.insert(make_pair(out_op, out_sched_new));
    auto in_vec_sched = gen_map_from_sched_vec(ctx, in_vectorized_sched_vec, in_op );
    new_sched.insert(make_pair(in_op + "_agg2sram", in_vec_sched));
    auto out_vec_sched = gen_map_from_sched_vec(ctx, out_vectorized_sched_vec, out_op );
    new_sched.insert(make_pair(out_op + "_sram2tb", out_vec_sched));
    auto acc_sched_new = gen_map_from_sched_vec(ctx, acc_new_sched_vec, acc_op);

    int vectorized_dim = get_involve_dim(to_map(loop_access_map), dim_id);
    cout << "vectorized_dim: " << vectorized_dim << endl;
    //auto acc_in_vec_sched = gen_map_from_sched_vec(ctx, acc_in_vectorized_sched_vec, acc_op + "_vec_in", vectorized_dim, fetch_width);
    //auto acc_out_vec_sched = gen_map_from_sched_vec(ctx, acc_out_vectorized_sched_vec, acc_op + "_vec_out", vectorized_dim ,fetch_width);
    auto acc_in_vec_sched = gen_map_from_sched_vec(ctx, acc_in_vectorized_sched_vec, acc_op + "_agg2sram" );
    auto acc_out_vec_sched = gen_map_from_sched_vec(ctx, acc_out_vectorized_sched_vec, acc_op + "_sram2tb" );

    acc_in_vec_sched = peel_schedule_domain_dim(
            acc_in_vec_sched, inner_most_address_related_dim_id, 1);
    acc_out_vec_sched = peel_schedule_domain_dim(
            acc_out_vec_sched, inner_most_address_related_dim_id, -1);

    new_sched.insert(make_pair(acc_op, acc_sched_new));
    new_sched.insert(make_pair(acc_op+"_agg2sram", acc_in_vec_sched));
    new_sched.insert(make_pair(acc_op+"_sram2tb", acc_out_vec_sched));

    //cout << "\tnew in map: " << str(in_sched_new)
    //<< "\n\tvec in map: " << str(in_vec_sched)
    //<< "\n\tnew out map: " << str(out_sched_new)
    //<< "\n\tvec out map: " << str(out_vec_sched) << endl;

    return new_sched;
  }

  //new mechod that encapsulate new padding dim
  map<string, isl_map*> UBuffer::produce_vectorized_schedule(string in_bd_name, string out_bd_name, int dim_id) {
    /*
     * Previously we have two ops, input and output.In order to do the vectorization
     * we need to create 2 other ops, input_vec and output_vec
     * */
    string in_pt_name = pick(port_bundles.at(in_bd_name));
    string out_pt_name = pick(port_bundles.at(out_bd_name));
    string in_op = domain_name(to_map(access_map.at(in_pt_name)));
    string out_op = domain_name(to_map(access_map.at(out_pt_name)));
    auto in_sched = schedule.at(in_pt_name);
    auto out_sched = schedule.at(out_pt_name);
    //auto in_sched_vec = collect_sched_vec(in_sched);
    //auto out_sched_vec = collect_sched_vec(out_sched);
    cout << "\tin_sched: " << str(in_sched) << "\t\nout_sched: " << str(out_sched) << endl;
    //cout << "\tin_sched vec: " << in_sched_vec << "\t\nout_sched vec: " << out_sched_vec << endl;


    auto in_access_map = access_map.at(in_pt_name);
    int vectorized_dim = get_involve_dim(to_map(in_access_map), dim_id) - 1;
    cout << "vectorized_dim: " << vectorized_dim << endl;
    auto in_sched_new = to_map(pad_one_more_dim_to_sched_map_with_id(in_sched, vectorized_dim, 0));
    auto in_vec_sched = to_map(pad_one_more_dim_to_sched_map_with_id(in_sched, vectorized_dim, 1));
    in_vec_sched = set_domain_name(in_vec_sched, domain_name(in_vec_sched) );
    auto out_vec_sched = to_map(pad_one_more_dim_to_sched_map_with_id(out_sched, vectorized_dim, 2));
    out_vec_sched = set_domain_name(out_vec_sched, domain_name(out_vec_sched) );
    auto out_sched_new = to_map(pad_one_more_dim_to_sched_map_with_id(out_sched, vectorized_dim, 3));

    map<string, isl_map*> new_sched;
    new_sched.insert(make_pair(in_op, in_sched_new));
    new_sched.insert(make_pair(out_op, out_sched_new));
    new_sched.insert(make_pair(in_op + "_agg2sram", in_vec_sched));
    new_sched.insert(make_pair(out_op + "_sram2tb", out_vec_sched));

    cout << "\tnew in map: " << str(in_sched_new)
    << "\n\tvec in map: " << str(in_vec_sched)
    << "\n\tnew out map: " << str(out_sched_new)
    << "\n\tvec out map: " << str(out_vec_sched) << endl;

    return new_sched;
  }

  //new mechod using the recipe
  map<string, isl_map*> UBuffer::produce_vectorized_schedule(string in_bd_name, string out_bd_name, vector<int> iis, int fetch_width) {
    /*
     * Previously we have two ops, input and output.In order to do the vectorization
     * we need to create 2 other ops, input_vec and output_vec
     * */
    string in_pt_name = pick(port_bundles.at(in_bd_name));
    string out_pt_name = pick(port_bundles.at(out_bd_name));
    string in_op = domain_name(to_map(access_map.at(in_pt_name)));
    string out_op = domain_name(to_map(access_map.at(out_pt_name)));
    auto in_sched = schedule.at(in_pt_name);
    auto out_sched = schedule.at(out_pt_name);
    //auto in_sched_vec = collect_sched_vec(in_sched);
    //auto out_sched_vec = collect_sched_vec(out_sched);
    cout << "\tin_sched: " << str(in_sched) << "\t\nout_sched: " << str(out_sched) << endl;
    auto in_sched_new = linear_schedule(to_map(in_sched), iis, 0, false);
    //hardcode this recipe
    auto in_sched_vec = linear_schedule(to_map(in_sched), iis, fetch_width, false);
    //auto in_sched_vec = gen_hw_sched_from_sched_vec(ctx,
    //        {expr + "+" + to_string(fetch_width)}, var_list, op_name);
    //in_sched_vec = pad_one_more_dim_to_sched_map_innermost(in_sched_vec, 0);

    auto out_sched_new = linear_schedule(to_map(out_sched), iis, 0, false);
    auto out_sched_vec = linear_schedule(to_map(out_sched), iis, -(fetch_width+1), false);
    out_sched_vec = pad_one_more_dim_to_sched_map_innermost(out_sched_vec, 0);
    //cout << "\tin_sched vec: " << in_sched_vec << "\t\nout_sched vec: " << out_sched_vec << endl;


    //auto in_access_map = access_map.at(in_pt_name);
    //int vectorized_dim = get_involve_dim(to_map(in_access_map), dim_id) - 1;
    //cout << "vectorized_dim: " << vectorized_dim << endl;
    //auto in_sched_new = to_map(pad_one_more_dim_to_sched_map_with_id(in_sched, vectorized_dim, 0));
    //auto in_vec_sched = to_map(pad_one_more_dim_to_sched_map_with_id(in_sched, vectorized_dim, 1));
    //in_vec_sched = set_domain_name(in_vec_sched, domain_name(in_vec_sched) );
    //auto out_vec_sched = to_map(pad_one_more_dim_to_sched_map_with_id(out_sched, vectorized_dim, 2));
    //out_vec_sched = set_domain_name(out_vec_sched, domain_name(out_vec_sched) );
    //auto out_sched_new = to_map(pad_one_more_dim_to_sched_map_with_id(out_sched, vectorized_dim, 3));

    map<string, isl_map*> new_sched;
    new_sched.insert(make_pair(in_op, in_sched_new));
    new_sched.insert(make_pair(out_op, out_sched_new));
    new_sched.insert(make_pair(in_op + "_agg2sram", in_sched_vec));
    new_sched.insert(make_pair(out_op + "_sram2tb", out_sched_vec));

    cout << "\tnew in map: " << str(in_sched_new)
    << "\n\tvec in map: " << str(in_sched_vec)
    << "\n\tnew out map: " << str(out_sched_new)
    << "\n\tvec out map: " << str(out_sched_vec) << endl;

    return new_sched;
  }

  //FIXME:Delete this method in the future
  map<string, isl_map*> UBuffer::produce_vectorized_schedule(string in_bd_name, string out_bd_name) {
    /*
     * Previously we have two ops, input and output.In order to do the vectorization
     * we need to create 2 other ops, input_vec and output_vec
     * */
    string in_pt_name = pick(port_bundles.at(in_bd_name));
    string out_pt_name = pick(port_bundles.at(out_bd_name));
    string in_op = domain_name(to_map(access_map.at(in_pt_name)));
    string out_op = domain_name(to_map(access_map.at(out_pt_name)));
    auto in_sched = schedule.at(in_pt_name);
    auto out_sched = schedule.at(out_pt_name);
    auto in_sched_vec = collect_sched_vec(in_sched);
    auto out_sched_vec = collect_sched_vec(out_sched);
    cout << "\tin_sched: " << str(in_sched) << "\t\nout_sched: " << str(out_sched) << endl;
    cout << "\tin_sched vec: " << in_sched_vec << "\t\nout_sched vec: " << out_sched_vec << endl;
    assert(in_sched_vec.size() == out_sched_vec.size());

    //the new generated schedule vectors
    vector<string> in_vectorized_sched_vec, out_vectorized_sched_vec, in_new_sched_vec, out_new_sched_vec;
    bool find_sched_dim = false;
    size_t sched_dim = 0;
    for (size_t dim = 0; dim < in_sched_vec.size(); dim ++) {
      if (!(is_number(in_sched_vec[dim]) || find_sched_dim)) {
        if (dim == 0){
          find_sched_dim = true;
          in_vectorized_sched_vec.push_back("1");
          in_new_sched_vec.push_back("0");
          out_vectorized_sched_vec.push_back("2");
          out_new_sched_vec.push_back("3");
        }
        else {
          //this is the situation we did not run any schedule optimization
          //First try
          find_sched_dim = true;
          int in_sched_stamp = safe_stoi(in_sched_vec[dim-1]);
          int out_sched_stamp = safe_stoi(out_sched_vec[dim-1]);
          if (in_sched_stamp <= out_sched_stamp - 1) {
            in_new_sched_vec.push_back("0");
            in_vectorized_sched_vec.push_back( "1" );
            out_vectorized_sched_vec[dim-1] = to_string(in_sched_stamp);
            out_vectorized_sched_vec.push_back( "2");
            out_new_sched_vec.push_back("0");
          }
          else {
            cout << "ERROR: The schedule is not considered\n\tin vec: " << in_sched_vec << "\n\tout vec: " << out_sched_vec << endl;
            assert(false);
          }
        }
      }
      in_vectorized_sched_vec.push_back(in_sched_vec[dim]);
      in_new_sched_vec.push_back(in_sched_vec[dim]);
      out_vectorized_sched_vec.push_back(out_sched_vec[dim]);
      out_new_sched_vec.push_back(out_sched_vec[dim]);
    }

    //cout << "\tin: " << in_new_sched_vec << "\n\tout: " << out_new_sched_vec << endl;
    //cout << "\tin vec: " << in_vectorized_sched_vec << "\n\tout vec: " << out_vectorized_sched_vec << endl;
    map<string, isl_map*> new_sched;
    auto in_sched_new = gen_map_from_sched_vec(ctx, in_new_sched_vec, in_op);
    new_sched.insert(make_pair(in_op, in_sched_new));
    auto out_sched_new = gen_map_from_sched_vec(ctx, out_new_sched_vec, out_op);
    new_sched.insert(make_pair(out_op, out_sched_new));
    auto in_vec_sched = gen_map_from_sched_vec(ctx, in_vectorized_sched_vec, in_op + "_vec");
    new_sched.insert(make_pair(in_op + "_vec", in_vec_sched));
    auto out_vec_sched = gen_map_from_sched_vec(ctx, out_vectorized_sched_vec, out_op + "_vec");
    new_sched.insert(make_pair(out_op + "_vec", out_vec_sched));

    //cout << "\tnew in map: " << str(in_sched_new)
    //<< "\n\tvec in map: " << str(in_vec_sched)
    //<< "\n\tnew out map: " << str(out_sched_new)
    //<< "\n\tvec out map: " << str(out_vec_sched) << endl;

    return new_sched;
  }

  umap* UBuffer::pad_dom_buf2op(
          AccessPattern acc_pattern,
          umap* rewrite_buf2op,
          int time_stamp) {
    //TODO: need to figure out reuse
    isl_map* pad_trans = acc_pattern.pad_one_dim_to_dom(ctx, time_stamp);
    std::cout << "pad rewrite: " << str(pad_trans) << endl;

    //rewrite the sram out schedule
    rewrite_buf2op = dot(rewrite_buf2op, inv(pad_trans));
    return rewrite_buf2op;
  }

  isl_map* UBuffer::pad_dom_sched(
          AccessPattern acc_pattern,
          isl_map* op_sched,
          int time_stamp) {
    //TODO: need to figure out reuse
    isl_map* pad_trans = acc_pattern.pad_one_dim_to_dom(ctx, time_stamp);
    std::cout << "pad rewrite: " << str(pad_trans) << endl;

    op_sched = delay_schedule_inner_most(op_sched, time_stamp);
    cout << "op sched: " << str(op_sched) << endl;
    op_sched = dot(pad_trans, op_sched);
    cout << "op sched after trans: " << str(op_sched) << endl;
    return op_sched;
  }


  int UBuffer::add_vectorized_pt_to_ubuf(UBuffer & target_buf, map<string, umap*> rewrite_buf2op_map, map<string, isl_map*> sched_map, string bd_name, int dim_id, int fetch_width, bool is_out, bool use_recipe) {

    //first round check how many port we need to have, do we need to coalesce scheduel
    vector<int> access_cnt_per_port(fetch_width, 0);
    for (auto it: rewrite_buf2op_map) {
      string origin_pt_name = it.first;
      auto rewrite_buf2op = it.second;
      AccessPattern acc_pattern = AccessPattern(
          to_map(access_map.at(origin_pt_name)), ctx);
      auto constraint_slices =
        acc_pattern.get_buf_slice(ctx, target_buf.name, dim_id, fetch_width);
      int slice_cnt = 0;
      for (auto slice: constraint_slices) {
          cout << "\t slice : " << str(slice) << endl;
        auto rewrite_access_map = dot(inv(rewrite_buf2op), slice);
        if (!empty(rewrite_access_map)) {
          access_cnt_per_port.at(slice_cnt) ++;
        }
        cout << "\t single map: " << str(rewrite_access_map) << endl;
        slice_cnt ++;
      }
    }
    cout << "access per port" << access_cnt_per_port << endl;


    vector<umap*> ap_vec;
    vector<int> access_num_port(fetch_width, 0);
    for (int i = 0; i < fetch_width; i ++) {
      umap* merge_acc_pattern = isl_union_map_read_from_str(ctx, "{}");
      ap_vec.push_back(merge_acc_pattern);
    }
    umap* merge_sched = isl_union_map_read_from_str(ctx, "{}");
    for (auto it: rewrite_buf2op_map) {
      string origin_pt_name = it.first;
      auto sched = sched_map.at(origin_pt_name);
      AccessPattern acc_pattern = AccessPattern(
          to_map(access_map.at(origin_pt_name)), ctx);
      auto constraint_slices =
        acc_pattern.get_buf_slice(ctx, target_buf.name, dim_id, fetch_width);
      int slice_cnt = 0;
      if (pick(access_cnt_per_port) > 1) {
        sched = pad_dom_sched(acc_pattern, sched, pick(access_num_port));
      }
      for (auto slice: constraint_slices) {
        cout << "\t slice : " << str(slice) << endl;
        auto rewrite_buf2op = it.second;
        if (access_cnt_per_port.at(slice_cnt) > 1) {
        rewrite_buf2op = pad_dom_buf2op(acc_pattern, rewrite_buf2op, access_num_port.at(slice_cnt));
        }
        cout << "rewrite buf2op: " << str(rewrite_buf2op) << endl;
        auto rewrite_access_map = dot(inv(rewrite_buf2op), slice);
        if (!empty(rewrite_access_map)) {
          access_num_port.at(slice_cnt) ++;
        }
        cout << "\t single map: " << str(rewrite_access_map) << endl;
        for (auto m : get_maps(rewrite_access_map)) {
          for ( auto aff: get_aff_vec(m) )
            cout << "\tbmap: " << str(aff) << endl;
        }
        ap_vec.at(slice_cnt) = coalesce(unn(ap_vec.at(slice_cnt), rewrite_access_map));
        cout << "\t ap vec: " << str(ap_vec.at(slice_cnt)) << endl;
        slice_cnt ++;
      }
      cout << "sched" << str(sched) << endl;
      merge_sched = coalesce(unn(to_umap(sched), merge_sched));
    }

    cout << "schedule after coalesce: " << str(merge_sched) << endl;
    //if use recipe we need to linearize the 2D schedule
    if (use_recipe) {
        merge_sched = to_umap(linear_schedule(to_map(merge_sched), {1, fetch_width / pick(access_cnt_per_port)}, 0, false));
    }
    cout << "schedule after coalesce: " << str(merge_sched) << endl;

    string origin_pt_name = pick(rewrite_buf2op_map).first;
    for (int new_pt_cnt= 0; new_pt_cnt < fetch_width; new_pt_cnt++) {
      auto rewrite_access_map = ap_vec.at(new_pt_cnt);
      cout << "rewrite access map: " << str(rewrite_access_map) << endl;
      isl_set* dom = ::domain(to_map(rewrite_access_map));
      if (is_out) {
        string pt_name = origin_pt_name + "_out_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_out_pt(pt_name, dom, to_map(rewrite_access_map), its(merge_sched, dom));

        //if (pick(access_cnt_per_port) > 1 && (!use_recipe)) {
        if (pick(access_cnt_per_port) > 1 ) {
            target_buf.access_map[pt_name] =
                flatten_map_domain_with_dim(target_buf.access_map[pt_name], 2);
            target_buf.schedule[pt_name] =
                flatten_map_domain_with_dim(target_buf.schedule[pt_name], 2);
            cout << "schedule after flatten: " << str((target_buf.schedule[pt_name])) << endl;
            cout << "schedule after flatten simplify: " << str(simplify(target_buf.schedule[pt_name])) << endl;
            target_buf.retrive_domain[pt_name] = target_buf.domain.at(pt_name);
            target_buf.domain[pt_name] = ::domain(to_map(target_buf.access_map[pt_name]));
        }
      }
      else {
        string pt_name = origin_pt_name + "_in_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_in_pt(pt_name, dom, to_map(rewrite_access_map), its(merge_sched, dom));

        //LOOK at the name to judge if we need to remap the buffer
        size_t found = target_buf.name.find("tb");
        if(found != string::npos) {
          //auto acc_pt = target_buf.access_pattern.at(pt_name);
          cout << pt_name << ": " << str(target_buf.access_map[pt_name]) << endl;
          auto acc_pt = AccessPattern(to_map(target_buf.access_map[pt_name]), target_buf.ctx);
          cout << acc_pt << endl;
          auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id, true);
          cout << "out pt decouple: " << str(decouple_acc_map) << endl;
          target_buf.access_map[pt_name] = to_umap(decouple_acc_map);
        }

        if ((pick(access_cnt_per_port) > 1)) { //&& (!use_recipe)) {

            target_buf.access_map[pt_name] =
                flatten_map_domain_with_dim(target_buf.access_map[pt_name], 2);
            target_buf.schedule[pt_name] =
                flatten_map_domain_with_dim(target_buf.schedule[pt_name], 2);
            cout << "schedule after flatten: " << str((target_buf.schedule[pt_name])) << endl;
            cout << "schedule after flatten simplify: " << str(simplify(target_buf.schedule[pt_name])) << endl;
            target_buf.retrive_domain[pt_name] = target_buf.domain.at(pt_name);
            target_buf.domain[pt_name] = ::domain(to_map(target_buf.access_map[pt_name]));
        }
      }
    }
    return pick(access_cnt_per_port);
  }

  void UBuffer::add_vectorized_pt_to_ubuf(UBuffer & target_buf, umap* rewrite_buf2op, isl_map* sched, string origin_pt_name, string bd_name, int dim_id, int fetch_width, bool is_out) {

    AccessPattern acc_pattern = AccessPattern(
        to_map(access_map.at(origin_pt_name)), ctx);
    auto constraint_slices = acc_pattern.get_buf_slice(ctx, target_buf.name, dim_id, fetch_width);
    size_t new_pt_cnt = 0;

    isl_set* dom = range(to_map(rewrite_buf2op));

    for (auto slice : constraint_slices) {
      cout << "Constraint: " << str(slice) << endl;
      cout << "origin: " << str(rewrite_buf2op) << endl;
      cout << "Rewrited Access Map" << str(dot(inv(rewrite_buf2op), slice)) << endl;
      auto rewrite_access_map = dot(inv(rewrite_buf2op), slice);
      if (is_out) {
        string pt_name = origin_pt_name + "_out_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_out_pt(pt_name, dom, to_map(rewrite_access_map), simplify_expr(its(sched, dom)));

        //remap the access map for self loop input
        if(is_self_loop_in(origin_pt_name)) {
          auto acc_pt = AccessPattern(to_map(target_buf.access_map[pt_name]), target_buf.ctx);
          auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id, true);
          target_buf.access_map[pt_name] = to_umap(decouple_acc_map);
        }
      }
      else {
        string pt_name = origin_pt_name + "_in_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_in_pt(pt_name, dom, to_map(rewrite_access_map), simplify_expr(its(sched, dom)));

        //LOOK at the name to judge if we need to remap the buffer
        size_t found = target_buf.name.find("tb");
        if(found != string::npos) {
          //auto acc_pt = target_buf.access_pattern.at(pt_name);
          auto acc_pt = AccessPattern(to_map(target_buf.access_map[pt_name]), target_buf.ctx);
          auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id);
          cout << "out pt decouple: " << str(decouple_acc_map) << endl;
          target_buf.access_map[pt_name] = to_umap(decouple_acc_map);
        }
      }
      new_pt_cnt ++;
    }
  }

void UBuffer::pad_write_dom(int dim_id, int fetch_width) {
    //pad the domain for both input port and output port
    for (auto bd: get_in_bundles()) {
        for (auto pt: port_bundles.at(bd)) {
            auto am = to_map(access_map.at(pt));
            auto sched = schedule.at(pt);
            cout << "\t original range input access map: " << str((am)) << endl;
            assert(get_dim_min(::domain(am), dim_id+1) == 0);
            auto rem = (get_dim_max(::domain(am), dim_id+1) + 1) % fetch_width;
            if (rem) {
                //need padding
                auto pad_am = pad_to_domain_ubuf_map(am, fetch_width - rem);
                auto pad_sched = pad_to_domain_ubuf_map(to_map(sched), fetch_width - rem);
                cout << "\tPadded access map: " << str(pad_am) << endl;
                cout << "\tPadded schedule: " << str(pad_sched) << endl;
                replace_pt(pt, pad_am, pad_sched);
            }
        }
    }
}

void UBuffer::pad_read_dom(int dim_id, int fetch_width) {
    for (auto bd: get_out_bundles()) {
        for (auto pt: port_bundles.at(bd)) {
            auto am = to_map(access_map.at(pt));
            auto sched = schedule.at(pt);
            cout << "\t original range output access map: " << str((am)) << endl;
            assert(get_dim_min(::domain(am), dim_id+1) == 0);
            auto rem = (get_dim_max(::domain(am), dim_id+1) + 1) % fetch_width;
            if (rem) {
                //need padding
                auto pad_am = pad_to_domain_ubuf_map(am, fetch_width - rem);
                auto pad_sched = pad_to_domain_ubuf_map(to_map(sched), fetch_width - rem);
                cout << "\tPadded access map: " << str(pad_am) << endl;
                cout << "\tPadded schedule: " << str(pad_sched) << endl;
                replace_pt(pt, pad_am, pad_sched);
            }
        }
    }

}

pair<std::map<string, UBuffer>, vector<string> >
    UBuffer::vectorization(int dim_id, int fetch_width, vector<int> iis) {

    std::map<string, UBuffer> ret;
    std::vector<string> remove_deps;
    UBuffer sram;

    sram.name = name + "_sram";
    sram.ctx = ctx;
    sram.port_widths = port_widths;
    sram.hardware.in_port_width = fetch_width;
    sram.hardware.out_port_width = fetch_width;
    vector<string> in_bundle = get_in_bundles();
    vector<string> out_bundle = get_out_bundles();

    cout << "in bundle  = " << in_bundle.size() << endl;
    cout << "out bundle = " << out_bundle.size() << endl;
    //Only test bundle size = 1
    //assert(in_bundle.size() == 1 && out_bundle.size() == 1);

    //produce naive schedule for the rewritten buffer
    map<string, isl_map*> new_sched;
    if (in_bundle.size() == 1 && out_bundle.size() == 1) {
      if (iis.size()) {
        new_sched = produce_vectorized_schedule(pick(in_bundle), pick(out_bundle), iis, fetch_width);
      } else {
        new_sched = produce_vectorized_schedule(pick(in_bundle), pick(out_bundle), dim_id);
      }
    } else {
      auto bd2sched = std::map<string, umap*,
        std::function<bool(const string&, const string&)>>{
        [this](const string& a, const string& b) {
          assert(port_bundles.at(a).size() == 1);
          assert(port_bundles.at(b).size() == 1);
          string pt_a = pick(port_bundles.at(a));
          string pt_b = pick(port_bundles.at(b));
          auto sched_a = schedule.at(pt_a);
          auto sched_b = schedule.at(pt_b);
          return empty(lex_gt(sched_a, sched_b));
        }
      };
      for (auto it: in_bundle) {
        string pt = pick(port_bundles.at(it));
        bd2sched.insert(make_pair(it, schedule.at(pt)));
      }
      for (auto it: out_bundle) {
        string pt = pick(port_bundles.at(it));
        bd2sched.insert(make_pair(it, schedule.at(pt)));
      }
      vector<string> bd_vec;
      for (auto it: bd2sched) {
        cout << "name:" << it.first << ": " << str(it.second) << endl;
        bd_vec.push_back(it.first);
      }
      //only consider the accumulation buffer
      assert(bd_vec.size() ==3 );
      auto tmp = produce_vectorized_schedule(bd_vec.at(0), bd_vec.at(2), bd_vec.at(1), dim_id, fetch_width);
      new_sched.insert(tmp.begin(), tmp.end());

      for (auto it: new_sched) {
        cout << it.first << ", " << str(it.second) << endl;
      }
    }


    int bd_cnt = 0;
    for (auto bd_name : in_bundle) {
      UBuffer agg_buf;
      agg_buf.name = name + "_" + to_string(bd_cnt) + "_agg";
      agg_buf.ctx = ctx;
      agg_buf.port_widths = port_widths;
      agg_buf.hardware.out_port_width = fetch_width;
      cout << "Vectorize input port bundle: " << bd_name << endl;
      for (auto in_pt_name : port_bundles.at(bd_name) ) {
        cout << "\tvectorize input port: " << in_pt_name << endl;
        auto acc_pattern = AccessPattern(
            to_map(access_map.at(in_pt_name)), ctx);
        std::cout << "before rewrite: " << acc_pattern << endl;

        //produce the operation transfomation
        //string suffix = "_vec";
        string suffix = "_agg2sram";
        //if (is_self_loop(in_pt_name)) {
        //  suffix += "_in";
        //}
        isl_map* op_trans = acc_pattern.get_op_transform(ctx, dim_id, fetch_width, suffix);
        std::cout << "transform rewrite: " << str(op_trans) << endl;
        isl_map* op_stripmining = acc_pattern.get_op_stripmining(ctx, dim_id, fetch_width, "");
        std::cout << "transform stripmining: " << str(op_stripmining) << endl;
        isl_set* sm_domain = range(its(op_stripmining, domain.at(in_pt_name)));
        agg_buf.retrive_domain[in_pt_name] = sm_domain;
        std::cout << "domain stripmining: " << str(sm_domain) << endl;
        cout << "IS loop: " << is_self_loop(in_pt_name) << endl;

        auto rewrite_buf2op = dot(inv(access_map.at(in_pt_name)), op_trans);
        auto new_op_domain = pick(get_sets(range(rewrite_buf2op)));
        cout << "rewrite buffer to op map: " << str(access_map.at(in_pt_name)) << endl;

        //add in port to agg_buf
        auto inpt_acc_map = remap_access_to_new_buffer(in_pt_name, "_" +to_string(bd_cnt) + "_agg");
        if (is_self_loop(in_pt_name)){
            inpt_acc_map = acc_pattern.get_access_map_and_decouple_reuse(ctx, dim_id, true);
            inpt_acc_map = add_range_suffix(inpt_acc_map, "_" + to_string(bd_cnt) + "_agg");
        }
        cout << "Access map add to agg_in: " << str(inpt_acc_map) << endl;
        agg_buf.add_in_pt(in_pt_name+"_in", domain.at(in_pt_name), inpt_acc_map, its(new_sched.at(acc_pattern.op_name), domain.at(in_pt_name)));
        agg_buf.port_bundles[bd_name+"_agg_in"].push_back(in_pt_name + "_in");

        isl_map* sched;
        if (is_self_loop(in_pt_name)) {
            sched = new_sched.at(::name(new_op_domain));
        } else {
          auto slice_dim = acc_pattern.get_dom_slice(ctx, dim_id, fetch_width, suffix);
          cout << "Slice dim: " << str(slice_dim) << endl;
          cout << "original loop: " << str(new_sched.at(::name(new_op_domain))) << endl;
          sched = its(new_sched.at(::name(new_op_domain)), slice_dim);
          sched = dot(inv(op_trans), sched);
          cout << "sched: " << str(sched) << endl;

        }

        //add out port to agg_buf
        add_vectorized_pt_to_ubuf(agg_buf, rewrite_buf2op, sched, in_pt_name, bd_name+"_agg_out", dim_id, fetch_width, true);
        //add in port to sram
        add_vectorized_pt_to_ubuf(sram, rewrite_buf2op, sched, in_pt_name, bd_name, dim_id, fetch_width, false);
      }
      bd_cnt ++;
      ret.insert({agg_buf.name, agg_buf});
      remove_deps.push_back(domain_name(agg_buf.access_map.at(pick(agg_buf.get_out_ports()))));
      cout << "AGG : " << agg_buf << endl;
      cout << "AGG Schedule: " << str(agg_buf.global_schedule()) << endl;
    }

    bd_cnt = 0;
    for (auto bd_name: out_bundle) {
      UBuffer tb;
      tb.name = name + "_" + to_string(bd_cnt) + "_tb";
      tb.ctx = ctx;
      tb.port_widths = port_widths;
      tb.hardware.in_port_width = fetch_width;


      cout << "Vectorize output port bundle: " << bd_name << endl;
      map<string, umap*> rewrite_buf2op_map;
      map<string, isl_map*> op_sched_map;
      int port_width_per_bd = port_bundles.at(bd_name).size();
      for (auto out_pt_name : port_bundles.at(bd_name) ) {
        cout << "\tVectorize output port: " << out_pt_name << endl;
        auto acc_pattern = AccessPattern(
            to_map(access_map.at(out_pt_name)), ctx);

        std::cout << "before rewrite: " << acc_pattern << endl;

        //produce the operation transfomation
        string suffix = "_sram2tb";
        //if (is_self_loop(out_pt_name)) {
        //  suffix += "_out";
        //}
        isl_map* op_trans = acc_pattern.get_op_transform(ctx, dim_id, fetch_width, suffix);
        std::cout << "transform rewrite: " << str(op_trans) << endl;


        auto rewrite_buf2op = dot(inv(access_map.at(out_pt_name)), op_trans);
        cout << str(inv(access_map.at(out_pt_name))) << endl << str(rewrite_buf2op) << endl;
        auto new_op_domain = pick(get_sets(range(rewrite_buf2op)));

        //potential not work for accumulation buffers
        isl_map* op_sched;
        if (is_self_loop(out_pt_name)) {
            op_sched = new_sched.at(::name(new_op_domain));
        } else {
            auto slice_dim = acc_pattern.get_dom_slice(ctx, dim_id, fetch_width, suffix);
            op_sched = its(new_sched.at(::name(new_op_domain)), slice_dim);
            op_sched = dot(inv(op_trans), op_sched);
            cout << "op schedule: " << str(op_sched) << endl;
        }


        op_sched_map[out_pt_name] = op_sched;
        rewrite_buf2op_map[out_pt_name] = rewrite_buf2op;

      }

      add_vectorized_pt_to_ubuf(tb, rewrite_buf2op_map, op_sched_map, bd_name+"_tb_in", dim_id, fetch_width, false, iis.size());
      auto output_cnt = add_vectorized_pt_to_ubuf(sram, rewrite_buf2op_map, op_sched_map ,bd_name, dim_id, fetch_width, true, iis.size());

      //Add another pass to build the access pattern on the tb output,
      //whether decouple the address
      for (auto out_pt_name : port_bundles.at(bd_name) ) {
        cout << "\tAdd TB output port: " << out_pt_name << endl;
        auto acc_pattern = AccessPattern(
            to_map(access_map.at(out_pt_name)), ctx);

        isl_map* op_stripmining = acc_pattern.get_op_stripmining(ctx, dim_id, fetch_width, "");
        std::cout << "transform stripmining: " << str(op_stripmining) << endl;
        isl_set* sm_domain = range(its(op_stripmining, domain.at(out_pt_name)));
        tb.retrive_domain[out_pt_name] = sm_domain;
        std::cout << "domain stripmining: " << str(sm_domain) << endl;

        auto outpt_acc_map = remap_access_to_new_buffer(out_pt_name, "_" + to_string(bd_cnt) + "_tb");
        if (output_cnt > 1){
            outpt_acc_map = acc_pattern.get_access_map_and_decouple_reuse(ctx, dim_id);
        } else {
            outpt_acc_map = acc_pattern.get_access_map_and_decouple_reuse(ctx, dim_id, true);
        }
        outpt_acc_map = add_range_suffix(outpt_acc_map, "_" + to_string(bd_cnt) + "_tb");
        cout << "Access map decouple reuse: " << str(outpt_acc_map) << endl;
        tb.add_out_pt(out_pt_name+"_out", domain.at(out_pt_name), outpt_acc_map, its(new_sched.at(acc_pattern.op_name), domain.at(out_pt_name)));
        tb.port_bundles[bd_name+"_tb_out"].push_back(out_pt_name + "_out");
      }
      ret.insert({tb.name, tb});
      cout << "TB  : " << tb << endl;
      cout << "TB Schedule: " << str(tb.global_schedule())  << endl;
      bd_cnt ++;
    }
    cout << "SRAM: " << sram << endl;
    cout << "SRAM Schedule: " << str(sram.global_schedule()) << endl;
    ret.insert({sram.name, sram});
    return make_pair(ret, remove_deps);
  }

bool banking_scheme_is_legal(isl_map* bank_func, UBuffer& buf) {
  auto sched = buf.global_schedule();
  cout << "Banking schedule..." << endl;
  for (auto s : get_maps(sched)) {
    cout << tab(1) << str(s) << endl;
  }
  auto op_writes = buf.producer_map();
  auto op_reads = buf.consumer_map();

  auto written = range(op_writes);
  auto read = range(op_reads);
  auto all_data = unn(written, read);

  auto read_times = dot(inv(op_reads), sched);
  auto simul_reads = dot(read_times, inv(read_times));

  cout << "simul reads: " << str(simul_reads) << endl;
  cout << tab(1) << "any simultaneous reads: " << empty(simul_reads) << endl;

  auto data_to_bank = its(to_umap(bank_func), read);
  auto same_bank = dot(data_to_bank, inv(data_to_bank));

  cout << "data_to_bank: " << str(data_to_bank) << endl;

  auto read_id = isl_union_set_identity(cpy(read));
  auto bank_read_conflicts = diff(its(same_bank, simul_reads), read_id);

  cout << "bank conflicts = " << str(bank_read_conflicts) << endl;
  return empty(bank_read_conflicts);
}

bool inner_bank_offset_is_legal(isl_map* slot_func,
    umap* op_writes,
    umap* op_reads,
    umap* sched) {

  cout << "write map: " << str(op_writes) << endl;
  cout << "read  map: " << str(op_reads) << endl;

  auto written = range(op_writes);
  auto read = range(op_reads);
  auto all_data = unn(written, read);

  cout << "slot func = " << str(slot_func) << endl;

  // build (v0, v1) slot(v0) = slot(v1)
  auto dloc = its(to_umap(slot_func), all_data);
  cout << "store slots = " << str(dloc) << endl;

  auto stored_to_same_slot = dot(dloc, inv(dloc));
  cout << "stored to same slot = " << str(stored_to_same_slot) << endl;

  auto in_id = isl_union_set_identity(cpy(all_data));
  cout << "in id = " << str(in_id) << endl;

  // build (v0, v1) live_range(v0) and live_range(v1) overlap
  auto read_times = dot(inv(op_reads), sched);
  auto write_times = dot(inv(op_writes), sched);
  cout << "read times  = " << str(read_times) << endl;
  cout << "write times = " << str(write_times) << endl;

  isl_set* sched_range = to_set(range(sched));
  //auto time_le = isl_map_lex_le(get_space(sched_range));
  auto time_le = isl_map_lex_lt(get_space(sched_range));

  //cout << "le times    = " << str(time_le) << endl;
  auto after_first_write = dot(write_times, time_le);
  //cout << "after first write: " << str(after_first_write) << endl;

  //auto time_ge = isl_map_lex_ge(get_space(sched_range));
  auto time_ge = isl_map_lex_gt(get_space(sched_range));
  auto before_last_read = dot(read_times, time_ge);

  //cout << "before last read: " << str(before_last_read) << endl;

  auto live_range = (coalesce(its(after_first_write, before_last_read)));
  //cout << "live range = " << str(live_range) << endl;

  auto overlapping_ranges = dot(live_range, inv(live_range));
  //cout << "overlapping = " << str(overlapping_ranges) << endl;

  auto violated = coalesce(diff(its(overlapping_ranges, stored_to_same_slot), in_id));
  cout << "violated    = " << str(violated) << endl;
  return empty(violated);
}

bool inner_bank_offset_is_legal(isl_map* slot_func, UBuffer& buf) {
  auto sched = buf.global_schedule();
  auto op_writes = buf.producer_map();
  auto op_reads = buf.consumer_map();

  return inner_bank_offset_is_legal(slot_func, op_writes, op_reads, sched);
}

std::ostream& operator<<(std::ostream& out, const UBuffer& buf) {
  out << "--- " << buf.name << endl;
  out << "\t---- " << buf.get_in_ports().size() << " in ports" << endl;

  //add a copy for compute_max_dd function
  UBuffer tmp = buf;
  for (auto inpt : buf.get_in_ports()) {
    out << "\t\t" << inpt << endl;
    out << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
    out << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
    out << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    //out << "\t\t\tbuffer capacity: " << compute_max_dd(tmp, inpt) << endl;
    //out << "\t\t\tacc range: " << str(range(buf.access_map.at(inpt))) << endl;
    out << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
    out << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
    out << endl;
  }

  out << "\t---- " << buf.get_out_ports().size() << " out ports:" << endl;
  for (auto inpt : buf.get_out_ports()) {
    out << "\t\t" << inpt << endl;
    out << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
    out << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
    out << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    out << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
    out << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
    //out << "\t\t\tlexmax events: " << str(buf.get_lexmax_events(inpt)) << endl;

    out << endl;
  }


  out << "\t---- Input Bundles" << endl;
  for (auto in_bundle : buf.get_in_bundles()) {
    out << "\t\t" << in_bundle << endl;
    auto ports = buf.port_bundles.at(in_bundle);
    out << "\t\t---- Ports..." << endl;
    for (auto p : ports) {
      out << "\t\t\t" << p << endl;
    }

  }
  out << "\t---- Output Bundles" << endl;
  for (auto out_bundle : buf.get_out_bundles()) {
    out << "\t\t" << out_bundle << endl;
    auto ports = buf.port_bundles.at(out_bundle);
    out << "\t\t---- Ports..." << endl;
    for (auto p : ports) {
      out << "\t\t\t" << p << endl;
    }

  }
  return out;
}

// map from address components to the value of the address
// at that component
typedef std::map<int, int> fixed_subaddress;

map<string, fixed_subaddress> find_fixed_subaddresses(const vector<string>& ports, UBuffer& buf) {
  map<string, fixed_subaddress> addrs;
  for (auto pt : ports) {
    isl_multi_aff* access = get_multi_aff(buf.access_map.at(pt));
    map<int, isl_val*> constant_offsets = constant_components(access);
    for (auto ent : constant_offsets) {
      addrs[pt][ent.first] = to_int(ent.second);
    }
  }
  return addrs;
}

vector<vector<string> > overlapping_ports(UBuffer& buf) {

  vector<vector<string> > overlapping;
  for (auto pt : buf.get_all_ports()) {
    auto pt_write_times = range(buf.schedule.at(pt));
    //cout << "write times: " << str(pt_write_times) << endl;
    //cout << str(buf.schedule.at(pt)) << endl;
    bool overlaps_existing = false;
    for (auto& group : overlapping) {
      for (auto other_pt : group) {
        auto other_pt_write_times = range(buf.schedule.at(other_pt));
        //cout << tab(1) << "other write times: " << str(other_pt_write_times) << endl;

        if (!empty(its(pt_write_times, other_pt_write_times))) {
          //cout << "Overlapping!" << endl;
          //assert(false);
          overlaps_existing = true;
          break;
        }
      }
      if (overlaps_existing) {
        group.push_back(pt);
        break;
      }
    }

    if (!overlaps_existing) {
      overlapping.push_back({pt});
    }
  }

  return overlapping;
}

vector<vector<string> > overlapping_large_io_port_groups(UBuffer& buf, const int ports_per_direction) {
  vector<vector<string> > overlapping = overlapping_ports(buf);

  int grouped = 0;
  for (auto& grp : overlapping) {
    grouped += grp.size();
  }

  assert(grouped == buf.get_all_ports().size());

  vector<vector<string> > filtered_io_groups;
  for (auto& g : overlapping) {
    vector<string> ins;
    vector<string> outs;
    for (auto pt : g) {
      if (buf.is_in_pt(pt)) {
        ins.push_back(pt);
      } else {
        assert(buf.is_out_pt(pt));
        outs.push_back(pt);
      }
    }
    if (ins.size() > ports_per_direction) {
      filtered_io_groups.push_back(ins);
    }
    if (outs.size() > ports_per_direction) {
      filtered_io_groups.push_back(outs);
    }
  }

  return filtered_io_groups;
}

isl_multi_aff* embarassing_partition_function(UBuffer& buf, const std::set<int>& dims) {
  vector<string> vars;
  vector<string> outs;
  for (int i = 0; i < buf.logical_dimension(); i++) {
    vars.push_back("d" + str(i));
    if (elem(i, dims)) {
      outs.push_back("(d" + str(i) + ")");
    }
  }
  string bs = curlies(buf.name + sep_list(vars, "[", "]", ", ") + " -> " + "Bank" + sep_list(outs, "[", "]", ", "));
  return rdmultiaff(buf.ctx, bs);
}

maybe<std::set<int> > embarassing_partition(UBuffer& buf, schedule_info& hwinfo) {
  vector<vector<string> > filtered_io_groups =
    overlapping_large_io_port_groups(buf, 1);

  if (filtered_io_groups.size() == 0) {
    return {};
  }

  std::set<int> dims;
  for (auto g : filtered_io_groups) {
    assert(g.size() > 0);

    auto parts = find_fixed_subaddresses(g, buf);
    cout << "Error: No viable banking strategy for " << buf.name << endl;
    cout << tab(1) << "Cannot partition group: " << endl;
    for (auto pt : g) {
      cout << tab(2) << pt << endl;
      cout << tab(3) << str(buf.access_map.at(pt)) << endl;
    }
    if (parts.size() < g.size()) {
      return {};
    }
    for (auto ent : parts) {
      for (auto d : ent.second) {
        dims.insert(d.first);
      }
    }
  }

  cout << "FOUND EMBARASSING PARTITION OF "
    << buf.name << " in " << dims.size() << " dimensions..." << endl;
  for (auto d : dims) {
    cout << tab(1) << d << endl;
  }

  isl_multi_aff* bank_func = embarassing_partition_function(buf, dims);
  cout << tab(1) << "bank func: " << str(bank_func) << endl;
  //bool legal = banking_scheme_is_legal(to_map(bank_func), buf);
  //cout << tab(2) << "Legal: " << legal << endl;
  //assert(false);
  return dims;
}


isl_union_set* UBuffer::compute_dd_hw_schedule(const string& inpt, const string& outpt) {
  auto writes = access_map.at(inpt);
  auto reads = access_map.at(outpt);
  cout << "writes: " << str(writes) << endl;
  cout << "reads : " << str(reads) << endl;
  cout << "Schedule..." << endl;
  umap* sched = global_schedule();
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
    release(m);
  }

  auto time_to_write = dot(inv(sched), (writes));
  auto time_to_read = dot(inv(sched), (reads));

  cout << "Time to write: " << str(time_to_write) << endl;
  cout << "Time to read : " << str(time_to_read) << endl;

  auto pc_times = dot(time_to_write, inv(time_to_read));
  cout << "PC times     : " << str(pc_times) << endl;
  auto dds = isl_union_map_deltas(pc_times);
  return dds;
}

maybe<int> UBuffer::dependence_distance_singleton(const string& inpt, const string& outpt) {

  auto dds = compute_dd_hw_schedule(inpt, outpt);
  cout << "DDs          : " << str(dds) << endl;
  if (!empty(dds)) {
    auto ddc = to_set(dds);

    if (!(isl_set_is_singleton(ddc))) {
      return {};
    }
    assert(isl_set_is_singleton(ddc));

    int dd = to_int(lexminval(ddc));
    cout << "DD           : " << dd << endl;
    string writer_name = domain_name(pick(get_maps(access_map.at(inpt))));
    cout << "writer op    : " << writer_name << endl;
    dd = dd;

    return {dd};
  } else {
    return {};
  }
  return {};
}

maybe<int> dependence_distance_singleton(UBuffer& buf, const string& inpt, const string& outpt,
    umap* sched) {

  auto writes = buf.access_map.at(inpt);
  auto reads = buf.access_map.at(outpt);
  cout << "writes: " << str(writes) << endl;
  cout << "reads : " << str(reads) << endl;
  cout << "Schedule..." << endl;
  for (auto m : get_maps(sched)) {
    cout << tab(1) << str(m) << endl;
    release(m);
  }

  auto time_to_write = dot(inv(sched), (writes));
  auto time_to_read = dot(inv(sched), (reads));

  cout << "Time to write: " << str(time_to_write) << endl;
  cout << "Time to read : " << str(time_to_read) << endl;

  auto pc_times = dot(time_to_write, inv(time_to_read));
  cout << "PC times     : " << str(pc_times) << endl;
  auto dds = isl_union_map_deltas(pc_times);
  cout << "DDs          : " << str(dds) << endl;
  if (!empty(dds)) {
    auto ddc = to_set(dds);

    if (!(isl_set_is_singleton(ddc))) {
      return {};
    }
    assert(isl_set_is_singleton(ddc));

    int dd = to_int(lexminval(ddc));
    cout << "DD           : " << dd << endl;
    string writer_name = domain_name(pick(get_maps(writes)));
    cout << "writer op    : " << writer_name << endl;
    dd = dd;

    return {dd};
  } else {
    return {};
  }
  return {};
}



