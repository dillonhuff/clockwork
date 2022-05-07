#include "ubuffer.h"
#include "codegen.h"
#include "app.h"
#ifdef COREIR
#include "cwlib.h"
#include "cgralib.h"
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
#include "prog.h"
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
    return pad_one_more_dim_to_sched_map_innermost(simplify(sched), index);
  } else {
    return sched;
  }
}

umap* get_lexmax_events(const std::string& outpt, UBuffer& buf) {
  umap* src_map = nullptr;
  for (auto inpt : buf.get_in_ports()) {
    //auto beforeAcc = lex_gt(buf.schedule.at(outpt),
        //buf.schedule.at(inpt));
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
  //auto sched = buf.global_schedule();
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

void generate_linear_bank(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank) {

  auto name = bank.name;
  auto pt_type_string = bank.pt_type_string;
  auto read_delays = bank.read_delays;
  auto num_readers = bank.num_readers;
  auto maxdelay = bank.maxdelay;
  auto layout = bank.extract_layout();

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
}

// There is a mismatch between this bank construction function
// and the delay string. The sign of this is that sometimes
// there is a compile error when compiling the generated C++
// code for software simulation. The compile error complains
// that peek(const int offset) is not defined for a buffer,
// but that this function is used in one of the selects
// for that buffer.
//
// In an earlier select function that reads values from
// the same buffer the "peek_0" variant is used.
//
// I have a few concerns: The easiest way to fix this
// in software would be to always generate the peek(const int offset)
// variant, but that would not work in hardware for all
// cases because it might not have high enough bandwidth if the
// re-use buffer were large.
//
// The other possibility is to prevent bank-merging in this
// case. After all the banks are all going to be very small
// in this case anyway.
//
// Q: The code that detects whether to use constant underscore
// functions or a computed offset is in delay_string, deep
// within the code generation tool, but really it depends
// on what was generated inside of this function. OTOH
// this functions check for whether or not to use underscore
// functions or an offset function is primitive (is there more than
// one reader, or has the user said to use the one function option
// explicity). And in practice what is generated here should
// depend on the bandwidth requirements and how they are
// serviced.
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
    generate_linear_bank(options, out, bank);
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

//FIXME: a hack for multi bundle cases
//void UBuffer::merge_out_bundle() {
//    auto out_bd = get_out_bundles();
//    assert(out_bd.size() <= 2);
//    if (out_bd.size() == 2) {
//        string pt_0 = pick(port_bundles.at(out_bd.at(0)));
//        string pt_1 = pick(port_bundles.at(out_bd.at(1)));
//        if (equal(get_space(schedule.at(pt_0)), get_space(schedule.at(pt_0)))) {
//            cout << *this << endl;
//            cout << "Can be merged" << endl;
//            string domain_name = ::domain_name(to_map(access_map.at(pt_0)));
//            access_map.at(pt_1) = set_domain_name(access_map.at(pt_1), domain_name);
//            schedule.at(pt_1) = set_domain_name(schedule.at(pt_1), domain_name);
//            domain.at(pt_1) = set_name(domain.at(pt_1), domain_name);
//            auto & bd_0 = port_bundles.at(out_bd.at(0));
//            bd_0.push_back(pt_1);
//            port_bundles.erase(out_bd.at(1));
//        }
//    }
//}
//

isl_map* UBuffer::get_coarse_grained_pipeline_schedule(CodegenOptions& options, UBuffer& new_ub, string config_mode,
        bool & decouple_ctrl, bool & substract_glb_latency) {
  new_ub.name = name;
  new_ub.ctx = ctx;
  new_ub.port_widths = port_widths;

  //First pass get the minimum schedule delay
  int min_offset = INT_MAX;
  int max_offset = INT_MIN;
  int max_start = INT_MIN;
  isl_map* cgpl_sched;

  //First pass to get the coarse loop level information, there may be loops with if guard
  for (auto it: schedule) {
    auto sched = to_map(it.second);
    int in_dim = coarse_grained_pipeline_loop_level;
    std::vector<int> inner_levels(num_in_dims(sched) - in_dim - 1);
    std::iota (std::begin(inner_levels), std::end(inner_levels), in_dim + 1);
    cout << "inner levels: " << inner_levels << endl;
    cgpl_sched = remove_in_dims(cpy(sched), inner_levels);
    while (get_dim_extent(::domain(cgpl_sched), coarse_grained_pipeline_loop_level) == 1) {
      cgpl_sched = remove_in_dims(cpy(cgpl_sched), {coarse_grained_pipeline_loop_level});
      coarse_grained_pipeline_loop_level --;
    }
  }

  cout << "Final CGPL after remove the if guard dimension: "
      << coarse_grained_pipeline_loop_level << endl;

  //get the coarse grained schedule
  for (auto it: schedule) {
    auto sched = to_map(it.second);
    auto pt_name = it.first;
    int in_dim = coarse_grained_pipeline_loop_level;

    std::vector<int> inner_levels(num_in_dims(sched) - in_dim - 1);
    std::iota (std::begin(inner_levels), std::end(inner_levels), in_dim + 1);
    cout << "inner levels: " << inner_levels << endl;
    cgpl_sched = remove_in_dims(cpy(sched), inner_levels);
    cout << "pt schedule: " << str(sched) << endl;
    cout << "cgpl schedule: " << str(cgpl_sched) << endl;
    min_offset = min(min_offset, int_const_coeff(get_aff(cgpl_sched)));

    //Get the interval of operation
    std::vector<int> cgpl_levels(in_dim);
    std::iota (std::begin(cgpl_levels), std::end(cgpl_levels), 1); // Fill start with 1, cannot remove root
    auto new_pt_sched = remove_in_dims(cpy(sched), cgpl_levels);
    int interval = to_int(lexmaxval(range(new_pt_sched))) - to_int(lexminval(range(new_pt_sched)));
    max_offset = max(max_offset, int_const_coeff(get_aff(cgpl_sched)) + interval);
    max_start= max(max_start, int_const_coeff(get_aff(cgpl_sched)));
  }
  cout << "cgpls chedule: \n" << str(cgpl_sched) << endl;
  cout << "\tpt min offset : " << min_offset << endl;
  cout << "\tpt max offset : " << max_offset<< endl;
  cout << "\tpt max start : " << max_start << endl;
  int inner_ii = stride_in_dim(cgpl_sched, coarse_grained_pipeline_loop_level);
  cout << "\tinner II: " << inner_ii << endl;

  //Push back the start
  cgpl_sched = set_schedule_delay(cgpl_sched, min_offset-1);
  cout << "cgpls chedule: \n" << str(cgpl_sched) << endl;

  //TODO: check capacity as well
  //bool need_double_buffer = inner_ii < (max_offset - min_offset);
  //FIXME: always using db
  bool need_double_buffer = true;
  if (options.rtl_options.double_buffer_optimization == false)
    need_double_buffer = false;
  cout << "\tNeed double buffer optimization: " << need_double_buffer << endl;
  substract_glb_latency = (max_start >= options.mem_hierarchy.at("mem").counter_ub);

  //This is an optimization
  //flatten the coarse grained schedule for tiling loop
  isl_map* merged_sched;
  if (need_double_buffer) {
    //TODO: only implement double buffer for lake
    //assert(config_mode == "lake");
    //optimize the double buffer
    isl_set* cgpl_dom = ::domain(cgpl_sched);
    int stripmine_ext = get_dim_extent(cgpl_dom, coarse_grained_pipeline_loop_level);
    assert(stripmine_ext >= 2 &&( stripmine_ext % 2 == 0 ));
    auto trans =
        get_domain_trans_with_reaccess_mask(cgpl_dom, coarse_grained_pipeline_loop_level, 2);

    isl_set* sched_dom = get_domain_trans_sched_domain(cgpl_dom, coarse_grained_pipeline_loop_level, 2);
    cout << "\tsched domain: " << str(sched_dom) << endl;
    //schedule
    auto new_cgpl_sched= dot(trans, its(cgpl_sched, sched_dom));
    cout << "\tsched after trans: " << str(new_cgpl_sched) << endl;
    merged_sched = simplify(merge_domain_dim(cgpl_sched));
    cout << "\tCan be merged into: " << str(merged_sched) << endl;
    assert(num_in_dims(merged_sched) == 2);
    cout << "\tLinearize tiling loop bound: " << get_dim_extent(::domain(merged_sched), 1) << endl;
    //cgpl_sched = new_cgpl_sched;
    //cgpl_sched = merge_sched;
  }

  //Second pass create the new ubuffer
  for (auto it: schedule) {
    auto sched = to_map(it.second);
    auto pt_name = it.first;
    auto acc_map = to_map(access_map.at(pt_name));
    int in_dim = coarse_grained_pipeline_loop_level;
    std::vector<int> cgpl_levels(in_dim);
    std::iota (std::begin(cgpl_levels), std::end(cgpl_levels), 1); // Fill start with 1, cannot remove root
    auto new_pt_sched = remove_in_dims(sched, cgpl_levels);
    auto new_acc_map = remove_in_dims(acc_map, cgpl_levels);

    //Thanks GOD! this function save my life!! can remove the implicit division and turn it into equality
    //TODO: move this into simplify
    isl_map_detect_equalities(new_pt_sched);
    isl_map_detect_equalities(new_acc_map);

    cout << "\tnew pt schedule: " << str(new_pt_sched) << endl;
    cout << "\tnew acc_pattern: " << str(new_acc_map) << endl;

    if(need_double_buffer) {
        int bd = get_dim_extent(::domain(merged_sched), 1);
        new_pt_sched = add_more_dim_to_map_with_stride(new_pt_sched, 1, 0, inner_ii, bd);
        cout << "new pt schedule after db optimization: " << str(new_pt_sched) << endl;
        new_acc_map = add_more_dim_to_map_domain_and_range(new_acc_map, 1, 0, 1, bd);
        cout << "new pt access map after db optimization: " << str(new_acc_map) << endl;
        decouple_ctrl = false;
        //TODO: remove this if
        //need to create the late reset
        //if(max_start >= options.mem_hierarchy.at("mem").counter_ub) {
        //  new_pt_sched = linear_schedule(new_pt_sched, {1}, -min_offset, false);
        //  decouple_ctrl = true;

        //  //Just multiply a large value to force using 32 bit
        //  cgpl_sched = isl_map_read_from_str(ctx, ("{op[root=0, i0]->["+str(min_offset-1)+" + i0*655360]: 0<=i0<=1}").c_str());
        //}
    } else {
      new_pt_sched = linear_schedule(new_pt_sched, {1}, -min_offset, false);
    }

    string bd_name = get_bundle(pt_name);
    new_ub.port_bundles[bd_name].push_back(pt_name);
    if (isIn.at(pt_name))
        new_ub.add_in_pt(pt_name, ::domain(new_pt_sched), new_acc_map, new_pt_sched);
    else
        new_ub.add_out_pt(pt_name, ::domain(new_pt_sched), new_acc_map, new_pt_sched);
  }
  cout << "pt min offset : " << min_offset << endl;
  assert(!(substract_glb_latency && decouple_ctrl));

  return cgpl_sched;
}

//Post processing get the ubuffer for each bank
/*
 * This will generate the ubuffer for vectorization,
 * Chances are that multiple bank share the same physical tile,
 * it will create a map from the bank name to
 * the vectorized ubuffer data structure
*/
map<string, UBuffer> UBuffer::generate_ubuffer(CodegenOptions& options) {
  print_bank_info();
  map<string, UBuffer> buffers;
  for (auto b : get_banks_and_sort()) {
    cout << "Bank: " << b.name << " has max delay: " << b.maxdelay << endl;
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
    //if (is_bank_SR(b.name)) {
    //    continue;
    //}
    UBuffer buf;
    string bname = b.name + "_ubuf";
    buf.name = bname;
    buf.ctx = ctx;
    buf.port_widths = port_widths;
    buf.coarse_grained_pipeline_loop_level = coarse_grained_pipeline_loop_level;
    cout << "CGPL level :" << coarse_grained_pipeline_loop_level;
    auto inpts = get_bank_inputs(b.name);
    auto outpts = get_bank_unique_outputs(b.name);

    //add a sort of output make sure we have positive stride when coalesce
    vector<string> pt_vec(outpts.begin(), outpts.end());
    sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
              auto l_start = lexminpt(range(access_map.at(l)));
              auto r_start = lexminpt(range(access_map.at(r)));
              return lex_lt_pt(l_start, r_start);
              });

    int usuffix = 0;

    //FIXME: this is a hack to identify shift register optimization
    //Need to separate banking and shift register optimization
    //Solution add a seperate pass in banking to get the correct access map
    auto sr_opt =
        contains(domain_name(access_map.at(pick(pt_vec))), "_s2");
    for (auto inpt: inpts) {
      auto acc_map = to_map(access_map.at(inpt));
      if (banking.partition == "cyclic"
              && !sr_opt) {
        cout << "\tread domain: " << str(b.rddom) << endl;
        cout << "\tread map: " << str(acc_map) << endl;
        acc_map = coalesce(its_range(acc_map, to_set(b.rddom)));
      }
      acc_map = set_range_name(acc_map, bname);
      auto dom = ::domain(acc_map);
      string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);
      //string pt_name = inpt;
      buf.port_bundles[::name(dom) + "_write"].push_back(pt_name);
      buf.add_in_pt(pt_name, dom, acc_map, its(schedule.at(inpt), dom));
      usuffix ++;
    }

    //Check if we could merge them into same bundle
    for (auto outpt: pt_vec) {
      auto acc_map = to_map(access_map.at(outpt));
      if (banking.partition == "cyclic") {
        cout << "\tread domain: " << str(b.rddom) << endl;
        cout << "\tread map: " << str(acc_map) << endl;
        acc_map = coalesce(its_range(acc_map, to_set(b.rddom)));
      }
      acc_map = set_range_name(acc_map, bname);
      auto dom = ::domain(acc_map);
      string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);
      //string pt_name = outpt;
      buf.port_bundles[::name(dom) + "_read"].push_back(pt_name);
      buf.add_out_pt(pt_name, dom, acc_map, its(schedule.at(outpt), dom));
      if (sv_map.count(outpt)) {
        buf.sv_map[pt_name] = sv_map.at(outpt);
      }
      usuffix ++;
    }
    //buf.merge_out_bundle();
    bool simplified = buf.simplify_address_space();
    cout << "\t\tNeed for vectorization: \n" << buf << endl;
    cout << "\t\tTotal capacity: " << buf.capacity() << endl;
    buffers[bname] = buf;
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

maybe<vector<int>> get_project_dim(UBuffer & buf, bool is_read) {
    if (is_read){
      return buf.get_consumer_bank_dim_id();
    } else {
      return buf.get_producer_bank_dim_id();
    }
}

void UBufferImpl::remove_bank(int bank_id) {

  lowering_info.erase(bank_id);

  bank_rddom.erase(bank_id);
  //for(auto it = bank_rddom.begin(); it != bank_rddom.end(); it ++){
  //    if (it->first > bank_id) {
  //        auto node = bank_rddom.extract(it->first);
  //        node.key() = it->first - 1;
  //        bank_rddom.insert(std::move(node));
  //    }
  //}
  bank_readers.erase(bank_id);
  //for(auto it = bank_readers.begin(); it != bank_readers.end(); it ++){
  //    if (it->first > bank_id) {
  //        auto node = bank_readers.extract(it->first);
  //        node.key() = it->first - 1;
  //        bank_readers.insert(std::move(node));
  //    }
  //}
  bank_writers.erase(bank_id);
  //for(auto it = bank_writers.begin(); it != bank_writers.end(); it ++){
  //    if (it->first > bank_id) {
  //        auto node = bank_writers.extract(it->first);
  //        node.key() = it->first - 1;
  //        bank_writers.insert(std::move(node));
  //    }
  //}
  bank_outpt2readers.erase(bank_id);
  //for(auto it = bank_outpt2readers.begin(); it != bank_outpt2readers.end(); it ++){
  //    if (it->first > bank_id) {
  //        auto node = bank_outpt2readers.extract(it->first);
  //        node.key() = it->first - 1;
  //        bank_outpt2readers.insert(std::move(node));
  //    }
  //}
  bank_inpt2writers.erase(bank_id);
  //for(auto it = bank_inpt2writers.begin(); it != bank_inpt2writers.end(); it ++){
  //    if (it->first > bank_id) {
  //        auto node = bank_inpt2writers.extract(it->first);
  //        node.key() = it->first - 1;
  //        bank_inpt2writers.insert(std::move(node));
  //    }
  //}
  for (auto& it: outpt_to_bank) {
      it.second.erase(bank_id);
     // for (auto bk: it.second) {
     //     if (bk > bank_id) {
     //         auto val = it.second.extract(bk);
     //         val.value() = bk - 1;
     //         it.second.insert(std::move(val));
     //     }
     // }
  }
  for (auto& it: inpt_to_bank) {
      it.second.erase(bank_id);
     // for (auto bk: it.second) {
     //     if (bk > bank_id) {
     //         auto val = it.second.extract(bk);
     //         val.value() = bk - 1;
     //         it.second.insert(std::move(val));
     //     }
     // }
  }
}

UBuffer merge_sram_with_different_outpt(vector<UBuffer> & buffers, string new_name) {
    //Merge buffers into one
    UBuffer merge_buf;
    auto buf = pick(buffers);
    merge_buf.port_widths = buf.port_widths;
    merge_buf.ctx = buf.ctx;
    merge_buf.name = new_name + "_sram";


    map<string, isl_map*> sched_record_map;
    for (auto sram: buffers){
        for (auto bd: sram.port_bundles) {
            //All ports in the same bundle have the same schedule
            string unique_pt = pick(bd.second);
            if (!merge_buf.port_bundles.count(bd.first)) {
              merge_buf.port_bundles.insert(bd);
              for (string pt: bd.second) {
                merge_buf.isIn[pt] = sram.isIn.at(pt);
                merge_buf.domain[pt] = sram.domain.at(pt);
                auto am = to_map(sram.access_map.at(pt));
                merge_buf.access_map[pt] = to_umap(set_range_name(am, new_name + "_sram"));
              }
              //Add the schedule
              isl_map* sched_map = to_map(sram.schedule.at(unique_pt));
              cout << "get SRAM port schedule: " << str(sched_map) << endl;

              //need to rename the domain name if the same stmt are loading the data
              if(sched_record_map.count(domain_name(sched_map))) {
                string dname = domain_name(sched_map);
                vector<string> substr =
                    split_at(dname, "_");
                int idx = safe_stoi(substr.back());
                substr.back() = str(idx+1);
                string new_dname = sep_list(substr, "", "", "_");
                sched_map = set_domain_name(sched_map, new_dname);
                cout << str(sched_map) << endl;
              }

              if (!violate_deps(sched_map, sched_record_map)) {

                // Input port should not violate dependency
                sched_record_map.insert({domain_name(sched_map), sched_map});

                //All sram ports should share the same schedule
                for (string pt: bd.second) {
                  merge_buf.schedule[pt] = to_umap(sched_map);
                }
              } else {
                assert(!sram.is_in_pt(unique_pt));
                isl_map* adjust_schedule =
                    get_sram2tb_schedule_with_check(sched_map, sched_record_map, 0/*ahead step*/, num_in_dims(sched_map) - 1/**/, 0, false/*is_dual_port*/);
                sched_record_map.insert({domain_name(adjust_schedule), adjust_schedule});

                //All sram ports should share the same schedule
                for (string pt: bd.second) {
                  merge_buf.schedule[pt] = to_umap(adjust_schedule);
                }
              }
            }

        }
    }

    //Add another pass to rename the port name
    merge_buf.sequentially_rename_output_domain_suffix(0);

    cout << merge_buf << endl;
    return merge_buf;
}

UBuffer merge_buf_with_different_outpt(vector<UBuffer> & buffers, string new_name) {
    //Merge buffers into one
    UBuffer merge_buf;
    auto buf = pick(buffers);
    merge_buf.port_widths = buf.port_widths;
    merge_buf.name = new_name ;


    map<string, isl_map*> sched_record_map;
    for (auto sram: buffers){
        for (auto bd: sram.port_bundles) {
            //All ports in the same bundle have the same schedule
            string unique_pt = pick(bd.second);
            if (!merge_buf.port_bundles.count(bd.first)) {
              merge_buf.port_bundles.insert(bd);
              for (string pt: bd.second) {
                merge_buf.isIn[pt] = sram.isIn.at(pt);
                merge_buf.domain[pt] = sram.domain.at(pt);
                auto am = to_map(sram.access_map.at(pt));
                merge_buf.access_map[pt] = to_umap(set_range_name(am, new_name));
                merge_buf.schedule[pt] = sram.schedule.at(pt);
              }
            }
        }
    }
    cout << merge_buf << endl;
    return merge_buf;
}

void UBufferImpl::merge_banks_and_rewrite(vector<int> & banks_tobe_merged) {
    vector<UBuffer> srams, target_buffers;
  for (auto bank_id: banks_tobe_merged) {
    UBuffer sram;
    for (auto it: lowering_info.at(bank_id).sub_component) {
      cout << "\tsubcomponent keys:" << it.first << endl;
      if (contains(it.first, "sram")) {
        sram = it.second;
      }
    }
    cout << sram << endl;
    srams.push_back(sram);
    target_buffers.push_back(lowering_info.at(bank_id).target_buf);
  }

  //TODO check the other impl are the same
  GarnetImpl merged_impl;
  int bank_id_0 = pick(banks_tobe_merged);
  merged_impl = lowering_info.at(bank_id_0);
  merged_impl.sub_component.clear();


  std::set<string> merge_inpts, merge_outpts;
  for (int bank_id: banks_tobe_merged) {
      assert(bank_writers.at(bank_id).size() == 1);
      assert(bank_readers.at(bank_id).size() == 1);
      merge_inpts.merge(bank_writers.at(bank_id));
      merge_outpts.merge(bank_readers.at(bank_id));
  }
  //TODO: may need an extra check if we can merge more port
  //assert(merge_inpts.size() <= options.rtl_options.max_inpt);
  //assert(merge_outpts.size() <= options.rtl_options.max_outpt);
  int new_bk = add_new_bank_between(merge_inpts, merge_outpts,
          bank_rddom.at(banks_tobe_merged.front()));
  for (string inpt: merge_inpts) {
      map_insert(bank_inpt2writers, new_bk, {inpt});
  }
  for (string outpt: merge_outpts) {
      map_insert(bank_outpt2readers, new_bk, {outpt});
  }

  cout << "new banks id: " << new_bk << endl;;

  string new_sram_name = get_buf_name() + "_bank_" + str(new_bk);

  auto sram_merged = merge_sram_with_different_outpt(srams, new_sram_name);

  //Also merge target buffer
  merged_impl.target_buf = merge_buf_with_different_outpt(target_buffers, new_sram_name);


  merged_impl.sub_component.insert({new_sram_name, sram_merged});
  auto stmt2sched = sram_merged.get_stmt2sched();

  int tb_cnt = 0;
  map<string, UBuffer> outpt2tb;
  for (auto bank_id: banks_tobe_merged) {
    for (auto it: lowering_info.at(bank_id).sub_component) {
        cout << "sub component buf: " << get_micro_buf_name(it.first) << endl;
      if (get_micro_buf_name(it.first) == "agg") {
        auto micro_buf = it.second;
        string new_agg_name = new_sram_name + "_0_agg";
        micro_buf.remap_access_to_new_buffer_name(new_agg_name);
        merged_impl.sub_component.insert({new_agg_name, micro_buf});
      }
      // sort the tb name by it's bundle
      if (get_micro_buf_name(it.first) == "tb") {
        auto micro_buf = it.second;
        assert(micro_buf.get_out_bundles().size() == 1);
        string outbd = pick(micro_buf.get_out_bundles());
        outpt2tb.insert({outbd, micro_buf});
      }
    }
  }
  for (auto it: outpt2tb) {
    string new_tb_name = new_sram_name + "_" + str(tb_cnt) + "_tb";
    it.second.remap_access_to_new_buffer_name(new_tb_name);
    it.second.sequentially_rename_input_domain_suffix(tb_cnt);
    it.second.sequentially_rename_output_domain_suffix(tb_cnt);
    //update tb in schedule with
    for (auto& schedule_it: it.second.schedule) {
      string dname = domain_name(schedule_it.second);
      if (stmt2sched.count(dname))
        schedule_it.second = stmt2sched.at(dname);
    }
    merged_impl.sub_component.insert({new_tb_name, it.second});
    tb_cnt++;
    cout << "micor buf: " << it.second << endl;
  }
  for (auto bk: banks_tobe_merged) {
      remove_bank(bk);
  }
  lowering_info[new_bk] = merged_impl;

  cout << *this << endl;

  //TODO: add new banks sub component

}


void UBufferImpl::merge_banks(vector<int> banks_tobe_merged) {
    assert(banks_tobe_merged.size() > 0);
  std::set<string> merge_inpts, merge_outpts;
  for (int bank_id: banks_tobe_merged) {
      assert(bank_writers.at(bank_id).size() == 1);
      assert(bank_readers.at(bank_id).size() == 1);
      merge_inpts.merge(bank_writers.at(bank_id));
      merge_outpts.merge(bank_readers.at(bank_id));
  }
  //TODO: may need an extra check if we can merge more port
  //assert(merge_inpts.size() <= options.rtl_options.max_inpt);
  //assert(merge_outpts.size() <= options.rtl_options.max_outpt);
  int new_bk = add_new_bank_between(merge_inpts, merge_outpts,
          bank_rddom.at(banks_tobe_merged.front()));
  for (string inpt: merge_inpts) {
      map_insert(bank_inpt2writers, new_bk, {inpt});
  }
  for (string outpt: merge_outpts) {
      map_insert(bank_outpt2readers, new_bk, {outpt});
  }
  for (auto bk: banks_tobe_merged) {
      remove_bank(bk);
  }

}

void UBufferImpl::sanity_check_memory_hierarchy(CodegenOptions& options, const vector<int> & banks) {
  auto it = banks.begin();
  string mem = get_memory_hierarchy(options, *it);
  for (int bank: banks){
      string mem_other = get_memory_hierarchy(options, bank);
      assert((mem_other == mem) && "merging banks should have same hierarchy");
  }
}

void UBufferImpl::conditional_merging(CodegenOptions & options, const vector<int> & banks_tobe_merged) {

  //All the banks need merging should be put to the same memory hierarchy
  auto it = banks_tobe_merged.begin();
  string mem = get_memory_hierarchy(options, *it);
  sanity_check_memory_hierarchy(options, banks_tobe_merged);
  int max_inpt = options.mem_hierarchy.at(mem).get_inpt_num();
  int max_outpt = options.mem_hierarchy.at(mem).get_outpt_num();
  vector<int> merging_banks;
  while(true) {
    //full condition
    //cout << "Merging banks: " << merging_banks << endl;
    if(get_banks_inpts_num(merging_banks) > max_inpt ||
      get_banks_outpts_num(merging_banks) > max_outpt) {
      auto last_bank = merging_banks.back();
      merging_banks.pop_back();
      //cout << merging_banks << endl;
      merge_banks(merging_banks);
      merging_banks.clear();
      merging_banks.push_back(last_bank);
    } else if (it == banks_tobe_merged.end()) {
      merge_banks(merging_banks);
      break;
    } else {
      merging_banks.push_back(*it);
      it ++;
    }
  }
}
int get_sram_read_rate(GarnetImpl & hw_impl) {
    UBuffer sram;
    for (auto it: hw_impl.sub_component) {
        if (contains(it.first, "sram")) {
            sram = it.second;
            break;
        }
    }
    auto outpt = pick(sram.get_out_ports());
    umap* out_sched = sram.schedule.at(outpt);
    int out_fetch_ii = get_vector_fetch_loop_ii(out_sched);
    cout << "out_fetch_ii: " << out_fetch_ii << endl;
    return out_fetch_ii;
}


//New bank merging after vectorization
void UBufferImpl::bank_merging_and_rewrite(CodegenOptions & options) {

  auto comp = [this](const int& a, const int& b) {
      return !equal(this->bank_rddom.at(a), this->bank_rddom.at(b));
  };
  //std::set<string> merge_inpts, merge_outpts;
  //vector<vector<int>> merge_banks;
  map<int, vector<int>, decltype(comp)> merge_map(comp);

  int max_inpt = options.mem_hierarchy.at("mem").get_inpt_num();
  int max_outpt = options.mem_hierarchy.at("mem").get_outpt_num();
  for (auto it: bank_rddom) {
    int bank_id = it.first;
    cout << "bank id: " << bank_id << endl;
    cout << "rd dom: " << str(it.second) << endl;
    string mem = lowering_info.at(bank_id).config_mode;
    //Only do bank merging for lake
    if (mem != "lake")
        continue;



    //cout << "BANK ID: " << bank_id << "\n\tbank_map:" << str(it.second) << endl;

    //Not merge this buffer if it decouple the control or
    //need shift register optimization
    if (lowering_info.at(bank_id).decouple_ctrl ||
            lowering_info.at(bank_id).insert_shift_register)
        continue;

    //TODO: check the rate less than 1 / 4 cycle otherwise cannot merge
    //check_rate_
    if (get_sram_read_rate(lowering_info.at(bank_id)) < options.mem_hierarchy.at("mem").fetch_width) {
        continue;
    }

    if ((bank_readers.at(bank_id).size() < max_outpt) &&
            (bank_writers.at(bank_id).size() < max_inpt)) {
      if (merge_map.count(bank_id)) {
        merge_map[bank_id].push_back(it.first);
      } else {
        merge_map[bank_id] = {bank_id};
      }
    }
  }
  for (auto it: merge_map) {
    cout << "bank id: " << it.first << ", to be merged: " << it.second << endl;
    if (it.second.size() > 1) {
      cout << "\tGroup: " << it.first << ": " << it.second << endl;
      cout << "\tPerform bank merging!" << endl;
      vector<int> banks_tobe_merged = it.second;
      sort(banks_tobe_merged.begin(), banks_tobe_merged.end(), std::greater<int>());

      //put some banks into the merging list
      vector<int> merging_banks;
      auto bk_it = banks_tobe_merged.begin();
      while (true) {
        if(get_banks_inpts_num(merging_banks) > max_inpt ||
          get_banks_outpts_num(merging_banks) > max_outpt) {
          auto last_bank = merging_banks.back();
          merging_banks.pop_back();
          //cout << merging_banks << endl;
          merge_banks_and_rewrite(merging_banks);
          merging_banks.clear();
          merging_banks.push_back(last_bank);
        } else if (bk_it == banks_tobe_merged.end()) {
          merge_banks_and_rewrite(merging_banks);
          break;
        } else {
          merging_banks.push_back(*bk_it);
          bk_it ++;
        }
      }
    }
  }
}

void UBufferImpl::bank_merging(CodegenOptions & options) {
  auto comp = [this](const int& a, const int& b) {
      return !equal(this->bank_rddom.at(a), this->bank_rddom.at(b));
  };
  //std::set<string> merge_inpts, merge_outpts;
  //vector<vector<int>> merge_banks;
  map<int, vector<int>, decltype(comp)> merge_map(comp);
  for (auto it: bank_rddom) {
    int bank_id = it.first;
    string mem = get_memory_hierarchy(options, bank_id);
    int max_inpt = options.mem_hierarchy.at(mem).get_inpt_num();
    int max_outpt = options.mem_hierarchy.at(mem).get_outpt_num();
    //cout << "BANK ID: " << bank_id << "\n\tbank_map:" << str(it.second) << endl;
    if ((bank_readers.at(bank_id).size() < max_outpt) &&
            (bank_writers.at(bank_id).size() < max_inpt)) {
      if (merge_map.count(bank_id)) {
        merge_map[bank_id].push_back(it.first);
      } else {
        merge_map[bank_id] = {bank_id};
      }
    }
  }

  for (auto it: merge_map) {
      //cout << "Merge map: " << it.first << ", " << it.second << endl;
      if (it.second.size() > 1) {
          cout << "\tGroup: " << it.first << ": " << it.second << endl;
          cout << "\tPerform bank merging!" << endl;
          std::set<string> merge_inpts, merge_outpts;
          vector<int> banks_tobe_merged = it.second;
          //Sort from the very begining
          sort(banks_tobe_merged.begin(), banks_tobe_merged.end(), std::greater<int>());
          conditional_merging(options, banks_tobe_merged);
      }
  }
}

//A post processing make sure each banks' port are sorted by its name
void UBufferImpl::sort_bank_port() {
    for (auto& it: bank_outpt2readers) {
        vector<std::set<string>>& outpt2readers = it.second;
        sort(outpt2readers.begin(), outpt2readers.end(),
                [](std::set<string>& l, std::set<string>& r)
                { return pick(l) < pick(r); });
    }

    for (auto& it: bank_inpt2writers) {
        vector<std::set<string>>& in2writers = it.second;
        sort(in2writers.begin(), in2writers.end(),
                [](std::set<string>& l, std::set<string>& r)
                { return pick(l) < pick(r); });
    }
}

#ifdef COREIR

//helper function to get schedule for port
pair<isl_map*, isl_map*> UBuffer::get_bank_pt_IR(string inpt, isl_set* rddom, schedule_info & info) {

  auto acc_map = to_map(access_map.at(inpt));

  //get the bank specific access map
  acc_map = coalesce(its_range(acc_map, rddom));

  auto dom = ::domain(acc_map);

  auto sched_aff = get_aff(schedule.at(inpt));

  if (isIn.at(inpt)) {
    //update op latency, if it's input port
    int op_latency = info.compute_latency(::domain_name(acc_map));
    sched_aff = add(sched_aff, op_latency);
  }

  isl_map* sched = its(to_map(sched_aff), dom);
  return {acc_map, sched};
}

UBuffer UBuffer::generate_ubuffer(UBufferImpl& impl, schedule_info & info, int bank) {
  //for(auto it: impl.bank_rddom) {
    //int bank = it.first;
    string bname = name + "_BANK_" + str(bank);
    auto rddom = impl.bank_rddom.at(bank);

    //create ubuffer for codegen
    UBuffer buf;
    buf.name = bname;
    buf.ctx = ctx;
    buf.port_widths = port_widths;
    buf.coarse_grained_pipeline_loop_level = coarse_grained_pipeline_loop_level;
    cout << "CGPL level :" << coarse_grained_pipeline_loop_level << endl;

    auto inpts = impl.get_unique_inpts(bank);
    auto outpts = impl.get_unique_outpts(bank);
    cout <<"impl inputs: "<< inpts << endl;
    cout <<"impl outpts: "<< outpts << endl;
    cout << "rddom: " << str(rddom) << endl;

    //TODO: may need a sort
    //add a sort of output make sure we have positive stride when coalesce
    //vector<string> outpt_vec(outpts.begin(), outpts.end());
    /*sort(pt_vec.begin(), pt_vec.end(), [this](const string l, const string r) {
              auto l_start = lexminpt(range(access_map.at(l)));
              auto r_start = lexminpt(range(access_map.at(r)));
              return lex_lt_pt(l_start, r_start);
              });
    */
    int usuffix = 0;
    bool sr = false;
    int op_latency = 0;

    for (string inpt: inpts) {
      auto acc_map = to_map(access_map.at(inpt));

      //get the bank specific access map
      acc_map = simplify(coalesce(its_range(acc_map, rddom)));

      auto dom = ::domain(acc_map);

      //update op latency
      op_latency = info.compute_latency(::domain_name(acc_map));


      auto sched_aff = get_aff(schedule.at(inpt));
      sched_aff = add(sched_aff, op_latency);
      isl_map* sched = its(to_map(sched_aff), dom);

      //string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);
      //buf.port_bundles[get_bundle(inpt)].push_back(pt_name);

      //Put into separate bundle if we have different domain name
      buf.port_bundles[inpt + "_write"].push_back(inpt);
      //buf.port_bundles[::name(dom)+ "_write"].push_back(inpt);
      if (impl.is_shift_register_input(inpt)) {
        //rewrite for shift register
        //TODO pass codegenoptions
        //auto reduce_map = linear_address_map_lake(rddom, 4);
        //cout << "Reduce map: " << str(reduce_map) << endl;
        //reduce_map = set_range_name(reduce_map, bname);
        //reduce_map = set_domain_name(reduce_map, bname);
        //auto linear_acc_map = dot(acc_map, reduce_map);
        //cout << "linear map: " << str(linear_acc_map) << endl;
        //buf.add_in_pt(inpt, dom, linear_acc_map, its(schedule.at(inpt), dom));
        //buf.add_in_pt(inpt, dom, acc_map, its(schedule.at(inpt), dom));
        sr = true;
      }
      acc_map = set_range_name(acc_map, bname);
      buf.add_in_pt(inpt, dom, acc_map, sched);
      usuffix ++;
    }

    for (string outpt: outpts) {
      auto acc_map = to_map(access_map.at(outpt));
      //get the bank specific access map
      acc_map = simplify(coalesce(its_range(acc_map, rddom)));
      auto sched = schedule.at(outpt);

      acc_map = set_range_name(acc_map, bname);
      auto dom = ::domain(acc_map);
      //Shift register need preprocess the schedule and access pattern
      /*if (impl.shift_depth.count(outpt) > 0) {
          auto outpt_info =
              get_shift_pt_access_with_sched(outpt, impl.shift_depth.at(outpt));
          acc_map = outpt_info.first;
          sched = to_umap(outpt_info.second);
      }*/
      //string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);

      if (impl.is_shift_register_output(outpt)) {
        cout << impl << endl;
        int delay = impl.shift_registered_outputs.at(outpt).second;;
        string inpt = impl.shift_registered_outputs.at(outpt).first;

        auto acc_map = to_map(access_map.at(inpt));
        //get the bank specific access map
        acc_map = coalesce(its_range(acc_map, rddom));
        auto sched = to_map(schedule.at(inpt));

        acc_map = set_range_name(acc_map, bname);
        acc_map = add_domain_suffix(acc_map, domain_name(acc_map) + "_delay_"+str(delay));
        sched = add_domain_suffix(sched, domain_name(sched) + "_delay_"+str(delay));

        auto dom = ::domain(acc_map);

        //Take consider of the latency in delay
        sched = linear_schedule(sched, {1}, delay+op_latency, false);
       // auto reduce_map = linear_address_map_lake(rddom, 4);
       // cout << "Reduce map: " << str(reduce_map) << endl;
       // reduce_map = set_range_name(reduce_map, bname);
       // reduce_map = set_domain_name(reduce_map, bname);
       // auto linear_acc_map = dot(acc_map, reduce_map);
       // cout << "linear map: " << str(linear_acc_map) << endl;

        //change bundle naming strategy to keep same sequence
        buf.port_bundles[outpt + "_read"].push_back(outpt);
        //buf.add_out_pt(outpt, dom, linear_acc_map, its(to_umap(sched), dom));
        buf.add_out_pt(outpt, dom, acc_map, its(to_umap(sched), dom));
      } else {

        //buf.port_bundles[get_bundle(outpt)].push_back(pt_name);

        //Put into separate bundle if we have different domain name
        buf.port_bundles[outpt + "_read"].push_back(outpt);
        //buf.port_bundles[::name(dom)+ "_read"].push_back(outpt);

        buf.add_out_pt(outpt, dom, acc_map, its(sched, dom));
      }
      usuffix ++;
    }
    cout << buf << endl;
  buf.simplify_address_space();
  if (sr) {

      //FIXME: should do this after figure out vectorization dimension
      //Maybe it's correct ???
      //ASPLOS: this need to be tested for high throughput
    buf.linear_address_space(project_out_zero_dim(rddom), 4);
    //buf.linear_address_space(project_out_zero_dim(rddom),
    //        max(4/*fetch_width*/, stride_in_dim(rddom, ::num_dims(rddom) - 1)));
    //buf.tighten_address_space();
  }
  cout << "after ubuffer regen: " << buf << endl;

  return buf;
}


//void UBuffer::generate_bank_select()

void UBuffer::generate_coreir(CodegenOptions& options, CoreIR::ModuleDef* def, schedule_info & info) {
  UBufferImpl impl;
  generate_coreir(options, impl, def, info, true);
}

void UBuffer::generate_coreir_without_ctrl(CodegenOptions& options, UBufferImpl& impl, CoreIR::ModuleDef* def, schedule_info & info) {
  generate_coreir_refactor(options, impl, def, info, false);
}

vector<isl_set*> get_multi_bank_domain_set(isl_map* origin_map, int project_out_domain) {

    vector<isl_set*> ret;
    string name = domain_name(origin_map);
    int dim = num_in_dims(origin_map);
    cout << "Domain: "  <<str(::domain(origin_map)) << endl;
    //vector<int> min_pts = parse_pt(lexminpt(::domain(origin_map)));
    //vector<int> max_pts = parse_pt(lexmaxpt(::domain(origin_map)));
    //cout << "\tmin pt: " << min_pts << endl;
    //cout << "\tmax pt: " << max_pts << endl;
    int bank_factor = get_dim_extent(::domain(origin_map), project_out_domain);
    //int bank_factor = abs(max_pts.at(project_out_domain) -
    //    min_pts.at(project_out_domain)) + 1;
    for (int offset = 0; offset < bank_factor; offset ++) {
        vector<string> dvs;
        vector<string> addrs;
        for (int i = 0; i < dim; i ++) {
            if (i == project_out_domain) {
                addrs.push_back("a_" + str(i) + "=" + str(offset));
            }
            dvs.push_back("a_" + str(i));
        }

        string bank_func =
          curlies( name + bracket_list(dvs) + ":" + sep_list(addrs, "" , "", " and "));

        //bank map: from address to the bank ID
        cout << "bank func = " << bank_func << endl;
        auto bank_set = isl_set_read_from_str(ctx(origin_map), bank_func.c_str());
        bank_set = its(bank_set, ::domain(origin_map) );
        ret.push_back(bank_set);
    }
    return ret;
}

ConfigMap generate_accessor_config_from_aff_expr(isl_set* write_domain, isl_aff* write_sched) {
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

vector<MemConnSch> emit_lake_accessor_config(CodegenOptions& options, int in_project_dim, isl_map* sched_map) {
    vector<MemConnSch> ret;
    if ((in_project_dim != -1)
            && options.mem_hierarchy.at("mem").multi_sram_accessor) {
      cout << tab(1) << "Before schedule input projection" << str(get_aff(sched_map)) << endl;
      auto bank_set_vec = get_multi_bank_domain_set(sched_map, in_project_dim);
      for (auto bank_set: bank_set_vec) {
        ConfigMap vals;
        auto single_map = its(sched_map, bank_set);
        cout << tab(1) << "After schedule Banking" << str(simplify(single_map)) << endl;
        single_map = project_out_domain(single_map, in_project_dim);
        cout << tab(1) << "After schedule input projection" << str(simplify(single_map)) << endl;
        auto sched = get_aff(single_map);
        cout << tab(1) << "Final schedule:" << str(sched) << endl;
        vals.merge(generate_accessor_config_from_aff_expr(::domain(single_map), sched));
        MemConnSch tmp;
        tmp.dimensionality = num_in_dims(sched);
        tmp.vals = vals;
        ret.push_back(tmp);
      }
    } else {
      ConfigMap vals;
      auto sched = get_aff(sched_map);
      vals.merge(generate_accessor_config_from_aff_expr(::domain(sched_map), sched));
      MemConnSch tmp;
      tmp.dimensionality = num_in_dims(sched);
      tmp.vals = vals;
      ret.push_back(tmp);
    }
    return ret;
}

ConfigMap generate_addressor_config_from_aff_expr(isl_aff* addr,
        bool is_read, bool is_mux, int word_width, int capacity, int port_width) {
    ConfigMap vals;

    string prefix = is_mux ? "mux_" : "";
    prefix += is_read ? "read_" : "write_";
    //cout << "\""+prefix+"\"," << "\"" << buf_name << "\"" << endl;
    cout << "\""+prefix+"data_starting_addr\"," <<
        to_int(const_coeff(addr))/port_width<< ",0" << endl;
    vals[prefix + "data_starting_addr"] = {to_int(const_coeff(addr))/port_width};
    for (int d = 0; d < num_in_dims(addr); d++) {
      int ldim = num_in_dims(addr) - d - 1;
      int stride_raw = to_int(get_coeff(addr, d));
      if (stride_raw < 0)
          stride_raw += capacity;
      cout << "\""+prefix+"data_stride_" << ldim << "\"," <<
          stride_raw % (capacity*word_width) /port_width << ",0" << endl;
      map_insert(vals, prefix+"data_stride", stride_raw % (capacity*word_width) /port_width) ;
    }
    std::reverse(vals.at(prefix+"data_stride").begin(), vals.at(prefix+"data_stride").end());
    return vals;
}

bool check_need_mux(CodegenOptions & options, UBuffer & buf,
        string op_name, string micro_buf_name, int bk_num, bool is_read) {
    auto mem = options.mem_hierarchy.at("mem");
    bool need_mux = false;
    auto op2bd = buf.get_stmt2bd();
    assert(op2bd.at(op_name).size() == 1);
    string bd_name = pick(op2bd.at(op_name));
    cout << tab(2) << "Bundle: " << bd_name << " has lane size = " << buf.lanes_in_bundle(bd_name) << endl;
    cout << tab(2) << "BK number: " << bk_num << ", num port: " << buf.num_out_ports() << endl;
    if (is_read) {
        need_mux = (bk_num < (buf.num_in_ports() / mem.in_port_width.at(micro_buf_name)));
    } else {
        need_mux = (bk_num < (buf.num_out_ports() / mem.out_port_width.at(micro_buf_name)));
    }
    return need_mux;
}

isl_set* get_memtile_bank_range(CodegenOptions& options, UBuffer & buf, isl_map* map, maybe<vector<int>> project_dim, bool is_read) {
    string buf_name = range_name(map);
    string micro_buf_name = split_at(buf_name, "_").back();
    isl_set* range_per_bank = isl_set_empty(get_space(range(map)));
    auto bmap_vec = get_basic_maps(map);
    cout << "bmap vec size: " << bmap_vec.size() << endl;
    //cout << "pt per bank: " << pt_per_bank << endl;
    for(int i = 0; i < bmap_vec.size(); i ++) {
        range_per_bank = unn(range_per_bank, range(to_map(bmap_vec.at(i))));
    }
    //project_dim = get_project_dim(buf, is_read);
    if (project_dim.has_value()) {
      cout << "before project: " << str(range_per_bank) << endl;
      for (int proj_dim : project_dim.get_value()) {
        //This is the single dimension case
        if (num_dims(range_per_bank) == 1)
            break;
        cout << "project out dim : " << proj_dim << endl;
        range_per_bank = project_out(range_per_bank, proj_dim);
      }
      cout << "after project: " << str(range_per_bank) << endl;
    }
    return range_per_bank;
}

pair<int, int> process_mux_info(CodegenOptions options, string op_name, bool is_read,
        UBuffer& buf, umap* tmp ) {

    cout << "Is read: " << is_read << endl;
    cout << "Generate mux and project id: " << op_name << endl;
    auto map = to_map(tmp);
    cout << "access map: " << str(map) << endl;

    //TODO: remove this in the future, this is a trick that make isl work
    //if we did not rely on isl, we do not need this trick
    //if (retrive_dom_map.count(op_name))
    //    map = retrive_map_domain_with_dim(map, retrive_dom_map.at(op_name));


    //map can contains multiple identical basic map
    map = coalesce_if_single_valued(map);

    string buf_name = range_name(map);
    string micro_buf_name = split_at(buf_name, "_").back();
    auto bmap_vec = get_basic_maps(map);
    int port_width = bmap_vec.size();

    auto mem = options.mem_hierarchy.at("mem");

    //get pt number, take the lake information
    int bk_num;
    cout << micro_buf_name << endl;
    if (is_read) {
        bk_num = max(port_width / mem.out_port_width.at(micro_buf_name), 1);
    } else {
        bk_num = max(port_width / mem.in_port_width.at(micro_buf_name), 1);
    }
    cout << tab(1) <<  "basic map vector size: " << port_width << endl;
    for (auto bmap: bmap_vec) {
        cout << tab(2)<< str(bmap) << endl;
    }
    cout << tab(1) << "Bank number: " << bk_num << endl;
    cout << tab(1) << "mem tile component:" << micro_buf_name
        <<", Bank constraint: : " << mem.bank_num.at(micro_buf_name)<< endl;

    //check if violate bank number
    assert(bk_num <= mem.bank_num.at(micro_buf_name));

    //Get the iteartion domain dimension that need to be project out
    auto project_dim = get_project_dim(buf, !is_read);

    int domain_project_dim = -1;
    if ((micro_buf_name == "agg") || (micro_buf_name == "tb")) {
      //cout << "\t project dim: " << project_dim << endl;
      bool need_mux = check_need_mux(options, buf, op_name, micro_buf_name, bk_num, is_read);
      cout << "\t need mux: " << need_mux << endl;
      if (project_dim.has_value() && need_mux) {
          cout << "acc map: " << str(to_map(pick(bmap_vec))) << endl;
          cout << "project dim: : " << project_dim.get_value() << endl;
          vector<int> project_dim_val = project_dim.get_value();
          assert(project_dim_val.size() == 1);
          domain_project_dim = get_involve_dim(to_map(pick(bmap_vec)), pick(project_dim_val));
      }
    }
    return {bk_num, domain_project_dim};
}


vector<ConfigMap> emit_lake_addrgen_config(CodegenOptions options, string op_name, bool is_read,
        int bk_num, int in_project_dim, UBuffer& buf, umap* tmp){//, map<string, isl_set*> & retrive_dom_map) {

    vector<ConfigMap> ret;
    string note = is_read? "read" : "write";
    cout << "Generate "<< note << " addr configuration for op: " << op_name << endl;
    cout << "Bank number : " << bk_num << endl;
    ////for (auto map: get_maps(tmp)) {
    auto map = to_map(tmp);
    cout << "access map: " << str(map) << endl;

    ////TODO: remove this in the future, this is a trick that make isl work
    ////if we did not rely on isl, we do not need this trick
    //if (retrive_dom_map.count(op_name))
    //  map = retrive_map_domain_with_dim(map, retrive_dom_map.at(op_name));

    string buf_name = range_name(map);
    string micro_buf_name = split_at(buf_name, "_").back();
    auto bmap_vec = get_basic_maps(map);
    sort(bmap_vec.begin(), bmap_vec.end(), [](isl_basic_map* l, isl_basic_map* r) {
              auto l_start = lexminpt(range(to_map(l)));
              auto r_start = lexminpt(range(to_map(r)));
              return lex_lt_pt(l_start, r_start);
            });

    //A pass removing starting addr in multiple bank cases
    //int project_dim;
    auto project_dim = get_project_dim(buf, is_read);
    auto range_per_bank =
        get_memtile_bank_range(options, buf, coalesce(map), project_dim, is_read);

    //get the reduce map for this subbuffer structure
    auto mem = options.mem_hierarchy.at("mem");
    auto reduce_map = linear_address_map_lake(range_per_bank, mem.fetch_width);
    cout << "\tbank range:" << str(range_per_bank) << endl;

    //get mux information
    bool need_mux = check_need_mux(options, buf, op_name, micro_buf_name, bk_num, is_read);
    cout << "\tNeed mux: " << need_mux  << ",in project dim: " << in_project_dim << endl;

    for (int i = 0; i < bk_num; i ++)
    {
        //pick the corresponding basic map
        auto bmap = bmap_vec.at(i);
        ConfigMap vals;

        auto bank_dim_id = buf.get_consumer_bank_dim_id();
        if (need_mux && bank_dim_id.has_value()) {
            vector<int> mux_index;
            vector<int> addr_index;
            //assert(bank_dim_id == num_out_dims(map) - 2);
            auto bank_dims = bank_dim_id.get_value();
            assert(bank_dims.size() == 1);
            int bank_dim = pick(bank_dims);
            cout << "Auto Select bank id: " << bank_dim << "Hardcode: " << num_out_dims(map) - 2 << endl;
            for (int i = num_out_dims(map)-1; i >= 0; i--) {
                //FIXME: this is hardcoded
                if (i == bank_dim) {
                    mux_index.push_back(i);
                } else {
                    if ((i > bank_dim) && (project_dim.has_value())) {
                      addr_index.push_back(i-1);
                    } else {
                      addr_index.push_back(i);
                    }
                }
            }

            //rewrite the address gen
            reduce_map = linear_address_map_with_index(range_per_bank, addr_index, mem.fetch_width);
            cout << "Reduce map after mux insertion: " << str(reduce_map) << endl;
            cout << "Range per bank: " << str(range_per_bank) << endl;
            cout << "Range origin: " << str(range(map)) << endl;

            auto mux_reduce_map = linear_address_map_with_index(range(map), mux_index, mem.fetch_width);
            auto mux_addr_expr = dot(to_map(bmap), mux_reduce_map);
            isl_aff* addr = get_aff(mux_addr_expr);
            cout << "mux addr aff: " << str(addr) << endl;
            int ww = mem.word_width.at(micro_buf_name);
            int capacity = mem.capacity.at(micro_buf_name);

            //mux always has port width = 1
            if (!mem.multi_sram_accessor)
              vals.merge(generate_addressor_config_from_aff_expr(addr, is_read, true, ww, capacity, 1));
        }

        //TODO: use word width to fix kavya's request
        int ww = mem.word_width.at(micro_buf_name);
        int pw = is_read ? mem.out_port_width.at(micro_buf_name) :
            mem.in_port_width.at(micro_buf_name);
        int capacity = mem.capacity.at(micro_buf_name);
        //int ww = is_read ?mem.out_port_width.at(micro_buf_name)
        //    : mem.in_port_width.at(micro_buf_name);

        isl_map* project_access_map;
        if (project_dim.has_value()) {
          project_access_map = to_map(bmap);
          for (auto proj_dim: project_dim.get_value()) {
            if (num_out_dims(project_access_map) == 1)
                break;
            project_access_map = project_out(project_access_map, proj_dim);
          }
        } else {
          project_access_map = to_map(bmap);
        }

        cout <<tab(1) << "Reduce map:" << str(reduce_map) << endl
            << tab(1) << "project access map" << str(project_access_map) << endl;
        auto addr_expr_map = dot(project_access_map, reduce_map);
        //cout << str(reduce_map) << endl << str(addr_expr_map) << endl;
        cout << tab(1) << "AFter reduce : " << str(addr_expr_map) << endl;

        //Project the input dimension out
        if ((in_project_dim != -1)
                && mem.multi_sram_accessor) {
          cout << tab(1) << "Before input projection" << str(get_aff(addr_expr_map)) << endl;
          cout << tab(1) << "map: " << str(to_map(bmap)) << "\n\tproject dim: " << in_project_dim << endl;
          auto bank_set_vec = get_multi_bank_domain_set(addr_expr_map, in_project_dim);
          for (auto bank_set: bank_set_vec) {
            ConfigMap vals;
            auto single_map = its(addr_expr_map, bank_set);
            cout << tab(1) << "After Banking" << str(simplify(single_map)) << endl;
            single_map = project_out_domain(single_map, in_project_dim);
            cout << tab(1) << "After input projection" << str(simplify(single_map)) << endl;
            auto addr = get_aff(single_map);
            cout << str(addr) << endl;
            bool is_mux = false;
            vals.merge(generate_addressor_config_from_aff_expr(addr, is_read, is_mux, ww, capacity, pw));
            ret.push_back(vals);
          }
          break;

        } else {
          auto addr = get_aff(addr_expr_map);
          cout << str(addr) << endl;
          bool is_mux = false;
          vals.merge(generate_addressor_config_from_aff_expr(addr, is_read, is_mux, ww, capacity, pw));
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

    //TODO: has a trouble to remove the extra dimension, debug with tile
    data.remove_redundant_dim();
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
    auto tmp = MemConnSch(dimensionality, data);
    tmp.remove_redundant_dim();
    jdata[domain_name]["dimensionality"] = tmp.dimensionality;
    for (auto it: tmp.vals) {
        jdata[domain_name][it.first] = it.second;
    }
}

ConfigMap generate_addressor_config_from_access_map(umap* acc_map, LakeCollateral mem, bool is_read) {
     string buf_name = range_name(to_map(acc_map));
     string micro_buf_name = get_micro_buf_name(buf_name);
     cout << "\tMicro buf name: " << micro_buf_name << endl;
     int word_width = mem.word_width.at(micro_buf_name);
     int capacity = mem.capacity.at(micro_buf_name);
     int port_width;
     if (is_read)
         port_width = mem.out_port_width.at(micro_buf_name);
     else
         port_width = mem.in_port_width.at(micro_buf_name);
     //auto reduce_map = linear_address_map_lake(to_set(ubuf.global_range()), mem.fetch_width);
     //auto linear_acc_map = dot(acc_map, reduce_map);
     cout << tab(1) << "Before Merge: " << endl;
     cout << tab(2) << "acc map: " << str(acc_map) << endl;
     //cout << tab(2) << "reduce_map: " << str(reduce_map) << endl;
     //cout << "\tlinearized Write map: " << str(linear_acc_map) << endl;
     auto addressor = generate_addressor_config_from_aff_expr(
         get_aff(acc_map), is_read, false, word_width, capacity, port_width);
     return addressor;
}

//A hack in refactor
//FIXME: change the vectorization wide fetch expression
isl_map* pick_left_most_access(isl_map* wide_fetch_access) {
    if (single_valued(wide_fetch_access))
        return wide_fetch_access;
    auto bmap_vec = get_basic_maps(wide_fetch_access);
    sort(bmap_vec.begin(), bmap_vec.end(), [](isl_basic_map* l, isl_basic_map* r) {
              auto l_start = lexminpt(range(to_map(l)));
              auto r_start = lexminpt(range(to_map(r)));
              return lex_lt_pt(l_start, r_start);
            });
    return simplify(to_map(bmap_vec.front()));
}

//An optimization pass for iteration domain merge
//1. Try the merge the iteration domain
//2. Add accessor information to config info if the opt_sched is empty
isl_map* add_config_with_dom_dim_merge(ConfigMap& config_info, isl_map* & opt_sched, vector<umap*> &access_map_vec, isl_map* sched) {
  assert(access_map_vec.size() == 1);
  auto access_map = pick(access_map_vec);
  auto m_pair = merge_dom_dim(sched, to_map(access_map));
  if(empty(opt_sched)) {
    opt_sched = m_pair.first;
    auto aff = get_aff(opt_sched);
    auto dom = ::domain(opt_sched);
      cout << tab(1) << "After Merge: " << endl;
      cout << tab(2) << "schedule: " << str(opt_sched) << endl;
      cout << tab(2) << "access map: " << str(m_pair.second) << endl;
    config_info = generate_accessor_config_from_aff_expr(dom, aff);
  } else if (!equal(m_pair.first, opt_sched)){
      cout << str(m_pair.first) << endl << str(opt_sched) << endl;
      cout << "cannot merge iteration domain, cannot map to current hardware" << endl;
      assert(false);
  }
  return m_pair.second;
}

//Wide fetch width codegen
Json UBuffer::generate_ubuf_args(CodegenOptions& options, map<string, UBuffer> & rewrite_buffer) {

    Json ret;

    /*build a map from OP schedule name to input access map, to output access map
    for each op name generate accessor config and also address generator
    */

    map<string, isl_map*>  op2sched;
    map<string, vector<umap*>> op2write_map, op2read_map;
    auto mem = options.mem_hierarchy.at("mem");
    cout << "agg2sram_opt debug start " << endl;
    map<string, std::pair<int, int>> agg2sram_cfg_map;
    map<string, std::pair<int, int>> agg2sram_extent_stride_map;

    for (auto it: rewrite_buffer) {
      //check it is sram
      if (contains(it.first, "sram")) {
        auto buf = it.second;
        auto stmt2bd_map = buf.get_stmt2bd_after_vec();

        for (auto map_it: stmt2bd_map) {
          cout << map_it.first << ": " << map_it.second << endl;
          if (map_it.second.size() > 1){
            cout << "found shared with size: " << map_it.second.size() << endl;
            assert (map_it.second.size() == 2);
            // find the delay
            int ctrl_number = 6; // other than 0 or 1
            string agg2sram_domain_name;
            int sched_diff = 0;
            bool both_read = false; // checks if we 2 read controllers
            for (auto bd_and_ctrl_number : map_it.second){
              string bd_name = bd_and_ctrl_number.first;
              if (contains(bd_name, "write")){
                string port_name = pick(buf.port_bundles.at(bd_name));
                agg2sram_domain_name = domain_name(buf.schedule.at(port_name));
                // assumes each port of the bundle has the same schedule
                auto sched_aff = get_aff(buf.schedule.at(port_name));//stride in dim
                sched_diff += to_int(const_coeff(sched_aff));
                cout << "write " << port_name << ": +" << to_int(const_coeff(sched_aff)) << endl;
                cout << str(sched_aff) << endl;
                cout << "sched domain name 2" << domain_name(buf.schedule.at(port_name)) << endl;
              }
              else{
                if (ctrl_number != 6) both_read = true;
                ctrl_number = bd_and_ctrl_number.second;
                string port_name = pick(buf.port_bundles.at(bd_name));
                // assumes each port of the bundle has the same schedule
                auto sched_aff = get_aff(buf.schedule.at(port_name));
                sched_diff -= to_int(const_coeff(sched_aff));
                cout << "read " << port_name << ": -" << to_int(const_coeff(sched_aff)) << endl;
                cout << str(sched_aff) << endl;
              }
            }
            if (!both_read){
              sched_diff--; // convert to 0-index for RTL
              agg2sram_cfg_map[agg2sram_domain_name] = make_pair(sched_diff, ctrl_number);
              cout << "agg2sram sched delay " << sched_diff << " ctrl number: " << ctrl_number << endl;
              assert(sched_diff > 0);
            }
          }
        }
      }
    }

    for (auto it: rewrite_buffer) {
        auto ubuf = it.second;
        auto hardware_schedule = ubuf.global_schedule();
        for (auto m : get_maps(hardware_schedule)) {
            string op_name = domain_name(m);
            cout << "sched: " << str(m) << endl;
            m = remove_irrelevant_in_dim(m);
            op2sched[op_name] = m;
            if (contains(op_name, "in2agg")){
              vector<string> op_name_decouple = split_at(op_name, "_");
              assert(op_name_decouple.size() > 2);
              vector<string> op_name_simplify(op_name_decouple.begin(), op_name_decouple.end()-2);
              string ctrl_name = "_agg2sram_" + op_name_decouple.back();
              string op_name_agg2sram = sep_list(op_name_simplify, "", ctrl_name, "_");
              auto sched_aff = get_aff(m);
              auto sched_dom = ::domain(m);
              int stride_0 = to_int(get_coeff(sched_aff, ::num_dims(sched_dom) - 1));
              auto ds = project_all_but(sched_dom, ::num_dims(sched_dom) - 1);
              int extent_0 = to_int(lexmaxval(ds)) - to_int(lexminval(ds)) + 1;
              // delay = (4 - extent_0 % 4) * cycle_stride_0
              agg2sram_extent_stride_map[op_name_agg2sram] = make_pair(extent_0, stride_0);
              cout << "op_name: " << op_name_agg2sram << ", extent_0: " << extent_0 << ", stride_0: " << stride_0 << endl;
            }
        }
        auto out_acc_umap = ubuf.producer_map();
        for (auto out_acc_map: get_maps(out_acc_umap)) {
            out_acc_map = pick_left_most_access(out_acc_map);
            cout << "write map: " << str(out_acc_map) << endl;
            out_acc_map = remove_irrelevant_in_dim(out_acc_map);

            //linearize access map before codegen
            cout << str(ubuf.global_range()) << endl;
            auto reduce_map = linear_address_map_lake(to_set(ubuf.global_range()), mem.fetch_width);
            auto linear_acc_map = dot(out_acc_map, reduce_map);
            map_insert(op2write_map, domain_name(out_acc_map), to_umap(linear_acc_map));
        }
        auto in_acc_umap = ubuf.consumer_map();
        for (auto in_acc_map: get_maps(in_acc_umap)) {
            in_acc_map = pick_left_most_access(in_acc_map);
            cout << "read map: " << str(in_acc_map) << endl;
            in_acc_map = remove_irrelevant_in_dim(in_acc_map);

            //linearize access map before codegen
            auto reduce_map = linear_address_map_lake(to_set(ubuf.global_range()), mem.fetch_width);
            auto linear_acc_map = dot(in_acc_map, reduce_map);
            map_insert(op2read_map, domain_name(in_acc_map), to_umap(linear_acc_map));

            //TODO: move this hack into vectorization
            auto dom = ::domain(linear_acc_map);
            string op_name = domain_name(in_acc_map);
            auto m = op2sched.at(op_name);
            if (!equal(dom, ::domain(m))){
                cout << "sched: " << str(m) << endl;
              auto sched_remove_dom = to_map(get_aff(m));
                cout << "sched: " << str(sched_remove_dom) << endl;
                cout << "acc_map: " << str(linear_acc_map) << endl;
              op2sched[op_name] = its(sched_remove_dom, dom);
            }
        }
    }

    //Go through all the ops and produce the read and write
    for (auto it: op2sched) {
        string op_name = it.first;
        auto sched = op2sched.at(op_name);
        cout << "\top name: " << op_name << endl;
        cout << "\tSched: " << str(sched) << endl << endl;
        string ctrl_name = get_ctrl_name(op_name);

        //Check if we have loop iteration larger than hardware limit,
        //root will be removed so we add 1
        if (num_in_dims(sched) > mem.iteration_level+1) {

          isl_map* opt_sched = isl_map_read_from_str(ctx, "{}");
          ConfigMap config_info;
          if (op2write_map.count(op_name) > 0) {
            // add agg2sram_opt config register
            if(agg2sram_cfg_map.count(op_name)) {
              int delay = agg2sram_cfg_map[op_name].first;
              int ctrl_number = agg2sram_cfg_map[op_name].second;
              if (ctrl_number == 0) 
                config_info["mode"] = {2};
              else if (ctrl_number == 1)
                config_info["mode"] = {3};
              config_info["agg_read_padding"] = {0};
              config_info["delay"] = {delay};
              cout << "adding new agg2sram opt cfg for: " << op_name << ": delay" << delay << ", ctrl_number" << ctrl_number << endl;
            }
            else if (contains(op_name, "agg2sram")) {
              assert(agg2sram_extent_stride_map.count(op_name));
              int in2agg_extent_0 = agg2sram_extent_stride_map[op_name].first;
              int in2agg_stride_0 = agg2sram_extent_stride_map[op_name].second;
              int agg2sram_read_padding;
              if (in2agg_extent_0 == 1 && in2agg_stride_0 == 0) // corner case, and dim = 1
                agg2sram_read_padding = 1;
              else
                agg2sram_read_padding = (in2agg_extent_0 % 4 == 0) ? 0 : (4 - in2agg_extent_0 % 4) * in2agg_stride_0 + 1;
              config_info["mode"] = {0};
              config_info["agg_read_padding"] = {agg2sram_read_padding};
              config_info["delay"] = {0};
              cout << "adding new agg2sram opt cfg for: " << op_name << ": mode 0, agg_read_padding " << agg2sram_read_padding << ", delay 0. " << endl;
            }
            isl_map* opt_access_map =
                add_config_with_dom_dim_merge(config_info, opt_sched, op2write_map.at(op_name), sched);
            ConfigMap addressor =
              generate_addressor_config_from_access_map(to_umap(opt_access_map), mem, false);
            config_info.merge(addressor);
          }
          if (op2read_map.count(op_name) > 0){
            isl_map* opt_access_map =
                add_config_with_dom_dim_merge(config_info, opt_sched, op2read_map.at(op_name), sched);
            ConfigMap addressor =
              generate_addressor_config_from_access_map(to_umap(opt_access_map), mem, true);
            config_info.merge(addressor);
          }

          add_lake_config(ret, config_info, num_in_dims(opt_sched), ctrl_name);
        } else {
          auto aff = get_aff(sched);
          auto dom = ::domain(sched);
          auto config_info = generate_accessor_config_from_aff_expr(dom, aff);
          if(op2write_map.count(op_name)) {
              // add agg2sram_opt config register
              if(agg2sram_cfg_map.count(op_name)) {
                int delay = agg2sram_cfg_map[op_name].first;
                int ctrl_number = agg2sram_cfg_map[op_name].second;
                if (ctrl_number == 0) 
                  config_info["mode"] = {2};
                else if (ctrl_number == 1)
                  config_info["mode"] = {3};
                config_info["agg_read_padding"] = {0};
                config_info["delay"] = {delay};
                cout << "adding new agg2sram opt cfg for: " << op_name << ": mode " << config_info["mode"] << "agg_read_padding 0, delay " << delay << endl;
              }
              else if (contains(op_name, "agg2sram")) {
                assert(agg2sram_extent_stride_map.count(op_name));
                int in2agg_extent_0 = agg2sram_extent_stride_map[op_name].first;
                int in2agg_stride_0 = agg2sram_extent_stride_map[op_name].second;
                int agg2sram_read_padding;
                if (in2agg_extent_0 == 1 && in2agg_stride_0 == 0) // corner case, and dim = 1
                  agg2sram_read_padding = 1;
                else
                  agg2sram_read_padding = (in2agg_extent_0 % 4 == 0) ? 0 : (4 - in2agg_extent_0 % 4) * in2agg_stride_0 + 1;
                config_info["mode"] = {0};
                config_info["agg_read_padding"] = {agg2sram_read_padding};
                config_info["delay"] = {0};
                cout << "adding new agg2sram opt cfg for: " << op_name << ": mode 0, agg_read_padding " << agg2sram_read_padding << ", delay 0. " << endl;
              }
              for (auto acc_map : op2write_map.at(op_name)) {
                  ConfigMap addressor =
                      generate_addressor_config_from_access_map(acc_map, mem, false/*is write*/);
                  config_info.merge(addressor);
              }
          }
          if(op2read_map.count(op_name)) {
              for (auto acc_map : op2read_map.at(op_name)) {
                  ConfigMap addressor =
                      generate_addressor_config_from_access_map(acc_map, mem, true/*is read*/);
                  config_info.merge(addressor);
              }
          }
          add_lake_config(ret, config_info, num_in_dims(aff), ctrl_name);
        }
    }
    cout << ret << endl;
    return ret;
}


//Helper function to optimize the pond dimension
pair<isl_map*, isl_map*> pad_domain( isl_map* sched, isl_map* acc) {
    map<int, int> dim2pad = get_all_domain_pad_dims(sched, acc);
    for (auto it: dim2pad) {
        int dim = it.first;
        int pad_depth = it.second;
        sched = pad_to_domain_ubuf_map(sched, dim, pad_depth);
        acc = pad_to_domain_ubuf_map(acc, dim, pad_depth);
    }
    return {sched, acc};
}

//Simplify the single fetch width memory codegen
Json UBuffer::generate_ubuf_args(CodegenOptions& options, UBuffer& ubuf, string mem_name) {

    Json ret;

    /*build a map from OP schedule name to input access map, to output access map
    for each op name generate accessor config and also address generator
    */

    map<string, isl_map*>  op2sched;
    map<string, vector<umap*>> op2write_map, op2read_map;
    auto hardware_schedule = ubuf.global_schedule();
    cout << "Global range: " << str(ubuf.global_range()) << endl;

    for (auto m : get_maps(hardware_schedule)) {
        string op_name = domain_name(m);
        m = remove_irrelevant_in_dim(m);
        op2sched[op_name] = m;
        auto out_acc_umap = ubuf.producer_map();
        for (auto out_acc_map: get_maps(out_acc_umap)) {
            if (domain_name(out_acc_map) == op_name) {
                out_acc_map = remove_irrelevant_in_dim(out_acc_map);
                map_insert(op2write_map, op_name, to_umap(out_acc_map));
            }
        }
        auto in_acc_umap = ubuf.consumer_map();
        for (auto in_acc_map: get_maps(in_acc_umap)) {
            if (domain_name(in_acc_map) == op_name) {
                in_acc_map = remove_irrelevant_in_dim(in_acc_map);
                map_insert(op2read_map, op_name, to_umap(in_acc_map));
            }
        }
    }

    //Go through all the ops and produce the read and write
    vector<string> ops = ubuf.get_ops_sorted_by_bundle();
    cout << "Sorted ops: " << ops << endl;
    auto mem = options.mem_hierarchy.at(mem_name);
    int word_width = mem.word_width.at(mem_name);
    int capacity = mem.capacity.at(mem_name);
    int in_cnt = 0, out_cnt = 0;
    string ctrl_name = pick(mem.controller_name);
    for (auto op_name: ops) {
        auto sched = op2sched.at(op_name);
        if(op2write_map.count(op_name)) {
            assert(op2write_map.size() <= 2);
            auto acc_map = pick(op2write_map.at(op_name));
                //auto reduce_map = linear_address_map_lake(to_set(range(acc_map)), mem.fetch_width);
                auto reduce_map = linear_address_map_lake(to_set(ubuf.global_range()), mem.fetch_width);
                auto linear_acc_map = dot(acc_map, reduce_map);
                cout << tab(1) << "Before Merge: " << endl;
                cout << tab(2) << "acc map: " << str(acc_map) << endl;
                cout << tab(2) << "sched: " << str(sched) << endl;
                cout << tab(2) << "reduce_map: " << str(reduce_map) << endl;
                cout << tab(2) << "1d acc map: " << str(linear_acc_map) << endl;
                //add a simplify optimization pass,
                //reutrn:    pair(schedulem access_map)
                auto pad_pair = pad_domain(sched, to_map(linear_acc_map));
                auto m_pair = merge_dom_dim(pad_pair.first, pad_pair.second);
                auto new_sched = m_pair.first;
                cout << tab(1) << "After Merge: " << endl;
                cout << tab(2) << "schedule: " << str(new_sched) << endl;
                //cout << tab(2) << "access map: " << str(m_pair.second) << endl;
                auto aff = get_aff(new_sched);
                auto dom = ::domain(new_sched);
                auto config_info = generate_accessor_config_from_aff_expr(dom, aff);
                int port_width = mem.in_port_width.at(mem_name);
                auto addressor = generate_addressor_config_from_aff_expr(
                        get_aff(m_pair.second), false, false, word_width, capacity, port_width);
                        //get_aff(to_map(linear_acc_map)), false, false, word_width, capacity, port_width);
                config_info.merge(addressor);
                cout << "\tWrite map: " << str(acc_map) << endl;
            add_lake_config(ret, config_info, num_in_dims(aff), "in2"+ctrl_name+"_" + str(in_cnt));
            in_cnt ++;
        }
        if(op2read_map.count(op_name)) {
            assert(op2read_map.size() <= 2);
            auto acc_map = pick(op2read_map.at(op_name));
                //auto reduce_map = linear_address_map_lake(to_set(range(acc_map)), mem.fetch_width);
                auto reduce_map = linear_address_map_lake(to_set(ubuf.global_range()), mem.fetch_width);
                auto linear_acc_map = dot(acc_map, reduce_map);
                cout << tab(1) << "Before Merge: " << endl;
                cout << tab(2) << "acc map: " << str(acc_map) << endl;
                cout << tab(2) << "sched: " << str(sched) << endl;
                cout << tab(2) << "reduce_map: " << str(reduce_map) << endl;
                auto pad_pair = pad_domain(sched, to_map(linear_acc_map));
                auto m_pair = merge_dom_dim(pad_pair.first, pad_pair.second);
                auto new_sched = m_pair.first;
                cout << tab(1) << "After Merge: " << endl;
                cout << tab(2) << "schedule: " << str(new_sched) << endl;
                //cout << tab(2) << "access map: " << str(m_pair.second) << endl;
                auto aff = get_aff(new_sched);
                auto dom = ::domain(new_sched);
                auto config_info = generate_accessor_config_from_aff_expr(dom, aff);
                int port_width = mem.out_port_width.at(mem_name);
                auto addressor = generate_addressor_config_from_aff_expr(
                        get_aff(m_pair.second), true, false, word_width, capacity, port_width);
                        //get_aff(linear_acc_map), true, false, word_width, capacity, port_width);
                config_info.merge(addressor);
                cout << "\tRead map: " << str(acc_map) << endl;
            add_lake_config(ret, config_info, num_in_dims(aff), ctrl_name+"2out_" + str(out_cnt));
            out_cnt ++;
        }
    }
    cout << ret << endl;
    return ret;
}

Json UBuffer::generate_ubuf_args_old(CodegenOptions& options, map<string, UBuffer> & rewrite_buffer) {
    cout << "Generating ubuf argument! " << endl << endl;
    for (auto it : rewrite_buffer) {
        cout << "\t\tBuf name: " << it.first << endl
            << it.second << endl;
    }
    auto hardware_schedule = global_schedule_from_buffers(rewrite_buffer);
    auto glb_access_map = global_access_map_from_buffers(rewrite_buffer);

    /*build a map from OP schedule name to input access map, to output access map
    for each op name generate accessor config and also address generator
    */

    map<string, isl_map*>  op2sched;
    map<string, vector<umap*>> op2write_map, op2read_map;
    map<string, string> op2write_buf, op2read_buf;

    //This is for wide fetch memory, figuring out the mux config
    map<string, pair<int, int>> op2write_bank, op2read_bank;

    //get rid of retrive_dom_map
    //auto retrive_dom_map = get_sets_in_map(retrive_domain_from_buffers(rewrite_buffer));

    //First pass to collect the information for codegen
    for (auto m : get_maps(hardware_schedule)) {
        string op_name = domain_name(m);
        //if (retrive_dom_map.count(op_name))
        //    m = retrive_map_domain_with_dim(m, retrive_dom_map.at(op_name));
        op2sched[op_name] = m;
        for ( auto it: rewrite_buffer) {
            auto buf = it.second;
            auto out_acc_umap = buf.producer_map();
            //cout << "\t buf : " << buf.name << "produce map: " << str(out_acc_umap) << endl;
            for (auto out_acc_map: get_maps(out_acc_umap)) {
                if (domain_name(out_acc_map) == op_name) {
                    op2write_buf[op_name] = it.first;
                    map_insert(op2write_map, op_name, to_umap(out_acc_map));
                    op2write_bank[op_name] =
                        process_mux_info(options, op_name, false,
                                buf, to_umap(out_acc_map));
                }
            }
            auto in_acc_umap = buf.consumer_map();
            for (auto in_acc_map: get_maps(in_acc_umap)) {
                if (domain_name(in_acc_map) == op_name) {
                    in_acc_map = simplify(in_acc_map);
                    op2read_buf[op_name] = it.first;
                    map_insert(op2read_map, op_name, to_umap(in_acc_map));
                    op2read_bank[op_name] =
                        process_mux_info(options, op_name, true,
                                buf, to_umap(in_acc_map));
                }
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
    auto mem = options.mem_hierarchy.at("mem");

    //this count is global to all the ubuffer sub controllers
    unordered_map<string, int> config_cnt = {{"in2agg", 0}, {"tb2out", 0}};
    std::set<string> op_has_visited;
    for (auto it_buf: rewrite_buffer) {
        if (contains(it_buf.first, "sram")) {
            continue;
        }
        std::set<string> ops = it_buf.second.get_ops();
        for (auto op_name : ops) {
            if (op_has_visited.count(op_name) == 0) {
                op_has_visited.insert(op_name);
                auto sched = op2sched.at(op_name);
                cout <<"\n\n\tEmit config for opname: " << op_name << endl
                    <<"Schedule: " <<  str(sched) << endl;
                MemConnSch tmp;

                //This is for the new memtile config, need to slice the op into multiple accessor
                if (mem.multi_sram_accessor) {
                    if (op2read_bank.count(op_name) &&
                            op2write_bank.count(op_name)) {
                        if (op2read_bank.at(op_name).second != -1) {
                            op2write_bank.at(op_name).second =
                                op2read_bank.at(op_name).second;
                        } else if (op2write_bank.at(op_name).second != -1) {
                            op2read_bank.at(op_name).second =
                                op2write_bank.at(op_name).second;
                        }
                    }
                }

                int in_project_dim;
                if (op2write_bank.count(op_name)) {
                    in_project_dim = op2write_bank.at(op_name).second;
                } else {
                    in_project_dim = op2read_bank.at(op_name).second;
                }

                //Generate all the accessor config from schedule
                vector<MemConnSch> accessor_config_vec =
                    emit_lake_accessor_config(options, in_project_dim, sched);

                string key = split_at(op_name, "_").back();
                if (config_cnt.count(key) == 0){
                    config_cnt[key] = 0;
                }

                vector<ConfigMap> read_addr_config, write_addr_config;
                cout << "\tgenerate accessor for OP: " << op_name << endl;
                cout << "\tread side: " << op2read_map.count(op_name) << endl;
                cout << "\twrite side: " << op2write_map.count(op_name) << endl;

                if (op2read_map.count(op_name)) {
                    auto read_map = op2read_map.at(op_name);
                    string producer_buf_name = op2read_buf.at(op_name);
                    //tmp.read = producer_buf_name;
                    for (auto tmp: read_map) {
                        cout << "\tgenerate access on read " << endl;
                        concat( read_addr_config,
                                emit_lake_addrgen_config(options, op_name, true,
                                    op2read_bank.at(op_name).first, op2read_bank.at(op_name).second,
                                    rewrite_buffer.at(producer_buf_name), tmp));
                    }
                }

                if (op2write_map.count(op_name)) {
                    auto write_map = op2write_map.at(op_name);
                    string consumer_buf_name = op2write_buf.at(op_name);
                    //tmp.write = consumer_buf_name;
                    for (auto tmp: write_map) {
                        cout << "\tgenerate access on write " << endl;
                        concat( write_addr_config,
                                emit_lake_addrgen_config(options, op_name, false,
                                    op2write_bank.at(op_name).first, op2write_bank.at(op_name).second,
                                    rewrite_buffer.at(consumer_buf_name), tmp));
                    }
                }
                if (is_update_op(op_name)) {
                    assert(write_addr_config.size() > 0);
                    assert(read_addr_config.size() > 0);
                    for (auto write_config: write_addr_config) {
                        cout << "Add in2agg_" << config_cnt.at("in2agg") << " for  op :" << str(sched) << endl;
                        string key = "in2agg";
                        string config_key = key + "_" + to_string(config_cnt.at(key));
                        assert(accessor_config_vec.size() == 1);
                        auto cpy = pick(accessor_config_vec);
                        cpy.vals.merge(write_config);
                        data[config_key] = cpy;
                        config_cnt.at(key) ++;
                    }
                    for (auto read_config: read_addr_config) {
                        string key = "tb2out";
                        string config_key = key + "_" + to_string(config_cnt.at(key));
                        assert(accessor_config_vec.size() == 1);
                        auto cpy = pick(accessor_config_vec);
                        cpy.vals.merge(read_config);
                        data[config_key] = cpy;
                        config_cnt.at(key) ++;
                    }
                } else if (read_addr_config.size() == 0) {
                    for (auto write_config: write_addr_config) {

                        cout << "Add in2agg_" << config_cnt.at("in2agg") << " for  op :" << str(sched) << endl;
                        string key = "in2agg";
                        string config_key = key + "_" + to_string(config_cnt.at(key));
                        assert(accessor_config_vec.size() == 1);
                        auto cpy = pick(accessor_config_vec);
                        cpy.vals.merge(write_config);
                        data[config_key] = cpy;
                        config_cnt.at(key) ++;
                    }
                } else if(write_addr_config.size() == 0) {
                    for (auto read_config: read_addr_config) {
                        string key = "tb2out";
                        string config_key = key + "_" + to_string(config_cnt.at(key));
                        assert(accessor_config_vec.size() == 1);
                        auto cpy = pick(accessor_config_vec);
                        cpy.vals.merge(read_config);
                        data[config_key] = cpy;
                        config_cnt.at(key) ++;
                    }
                } else {
                    //we only have 1 sram2tb agg2sram, all the other is handled by mux
                    assert(read_addr_config.size() == write_addr_config.size());
                    assert(read_addr_config.size() == accessor_config_vec.size());
                    int total_ctrl = read_addr_config.size();
                    for (int cnt = 0; cnt < total_ctrl; cnt ++) {
                        auto read_config = read_addr_config.at(cnt);
                        auto write_config = write_addr_config.at(cnt);
                        string config_key = key;// + "_" + to_string(config_cnt.at(key) ++);
                        if (mem.multi_sram_accessor)
                            config_key += "_" + to_string(config_cnt.at(key) ++);
                        auto cpy = accessor_config_vec.at(cnt);
                        cpy.vals.merge(read_config);
                        cpy.vals.merge(write_config);
                        data[config_key] = cpy;
                    }
                }
            }
        }
    }
    return create_lake_config(data);
}

CoreIR::Instance* generate_pond_instance(
        ModuleDef* def,
        CodegenOptions options,
        string ub_ins_name,
        string rst_name,
        string config_mode,
        json config_file,
        size_t input_num, size_t output_num) {

  auto context = def->getContext();
  CoreIR::Instance* buf;
  CoreIR::Values genargs = {
    {"width", CoreIR::Const::make(context, 16)},
    {"num_inputs", CoreIR::Const::make(context, input_num)},
    {"num_outputs", CoreIR::Const::make(context, output_num)},
    {"ID", CoreIR::Const::make(context, context->getUnique())},
  };
  cout << "Add pond node with input_num = " << input_num
      << ", output_num = " << output_num << endl;
  auto* g = context->getGenerator("cgralib.Pond_amber");
  //auto* generatedModule = g->getModule(genargs);
  //g->getMetaData()["verilog_name"] =
  //  "pond_"+genargs.at("ID")->get<string>();
  buf = def->addInstance(ub_ins_name, "cgralib.Pond_amber", genargs);
  buf->getMetaData()["config"] = config_file;
  buf->getMetaData()["mode"] = config_mode;
  //buf->getModuleRef()->getMetaData()["verilog_name"] = "pond_"+genargs.at("ID")->get<string>();
  //buf->getMetaData()["verilog_name"] = "pond_"+genargs.at("ID")->get<string>();

  auto clk_en_const = def->addInstance(ub_ins_name+"_clk_en_const", "corebit.const",
          {{"value", CoreIR::Const::make(context, true)}});

  //garnet wire reset to flush of memory
  def->connect(buf->sel("flush"), def->sel("self." + rst_name));
  //def->connect(buf->sel("flush"), def->sel("self.flush"));
  //def->connect(buf->sel("rst_n"), def->sel("self.rst_n"));
  def->connect(buf->sel("clk"), def->sel("self.clk"));
  def->connect(buf->sel("clk_en"), clk_en_const->sel("out"));
  def->connect(buf->sel("rst_n"), clk_en_const->sel("out"));

  return buf;
}

CoreIR::Module* affine_controller_use_lake_tile_counter(
        CodegenOptions& options,
        CoreIR::Context* context,
        isl_set* dom,
        isl_aff* aff,
        string ub_ins_name) {

  //Create the coreIR submodule for affine controller
  auto ns = context->getNamespace("global");
  bool has_chain_en = options.mem_hierarchy.at("mem").wire_chain_en;
  vector<pair<string, CoreIR::Type*> >
    ub_field{{"clk", context->Named("coreir.clkIn")},
      {"valid", context->Bit()}};
  int dims = num_in_dims(aff);
  ub_field.push_back({"d", context->Bit()->Arr(16)->Arr(dims)});
  ub_field.push_back({"rst_n", context->BitIn()});

  CoreIR::RecordType* utp = context->Record(ub_field);
  auto m = ns->newModuleDecl("affine_controller_" + context->getUnique(), utp);
  auto def = m->newModuleDef();

  auto sp = get_space(dom);
  auto addr = its(isl_map_identity(isl_space_map_from_set(sp)), dom);
  auto clk_en_const = def->addInstance(ub_ins_name+"_clk_en_const", "corebit.const",
          {{"value", CoreIR::Const::make(context, true)}});

  //define the dimension connect to root
  std::string const_name = "const_0";
  Values const_args = {{"width", Const::make(context, 16)}};

  Values const_configargs = {
    {"value", Const::make(context, BitVector(16, 0))}};
  Wireable* const_inst = def->addInstance(
    const_name,
    "coreir.const",
    const_args,
    const_configargs);
  def->connect(const_inst->sel("out"), def->sel("self")->sel("d")->sel(0));

  //Loop through all the domain dimension, skip the root
  for (int dim = 1; dim < num_dims(dom); dim ++) {
    json config_file;

    bool has_stencil_valid = false;
    if (dim == 1)
      has_stencil_valid = true;
    CoreIR::Instance* buf;
    CoreIR::Values genargs = {
      {"width", CoreIR::Const::make(context, 16)},
      {"num_inputs", CoreIR::Const::make(context, 0)},
      {"num_outputs", CoreIR::Const::make(context, 1)},
      {"has_chain_en", CoreIR::Const::make(context, has_chain_en)},
      {"has_stencil_valid", CoreIR::Const::make(context, has_stencil_valid)},
      {"ID", CoreIR::Const::make(context, context->getUnique())},
      {"has_flush",  CoreIR::Const::make(context, true)},
      {"use_prebuilt_mem",  CoreIR::Const::make(context, true)}
    };

    //Add stencil valid for the first dimension
    if (has_stencil_valid) {
      auto stencil_valid = generate_accessor_config_from_aff_expr(dom, aff);
      add_lake_config(config_file, stencil_valid, num_in_dims(aff), "stencil_valid");
    }


    auto mem = options.mem_hierarchy.at("mem");

    //generate tb address
    auto index_addr = project_all_out_but(cpy(addr), dim);
    cout << "Index address: " << str(index_addr) << endl;

    if (mem.fetch_width > 1) {
      //generate tb accessor
      auto config_tb2out = generate_accessor_config_from_aff_expr(dom, aff);
      {
        int word_width = mem.word_width.at("tb");
        int capacity = mem.capacity.at("tb");
        int port_width = mem.out_port_width.at("tb");
        //is_read = true, is_mux = false
        auto addressor_tb2out = generate_addressor_config_from_aff_expr(get_aff(index_addr), true, false, word_width, capacity, port_width);
        config_tb2out.merge(addressor_tb2out);
      }
      add_lake_config(config_file, config_tb2out, num_dims(dom), "tb2out_0");

      //generate sram2tb controller
      //TODO: change 4 to fetch width
      auto trans = get_domain_trans(dom, dim, 4);
      cout << "Vectorization Trans: " << str(trans) << endl;

      //Apply the vectorization trans on both accessor and addressor
      auto acc_0 = its(to_map(aff), dom);
      auto res = dot(trans, acc_0);
      auto vec_index_addr = dot(trans, index_addr);

      //project all the inner dim
      for (int reset_dim = dim+1; reset_dim < num_in_dims(acc_0); reset_dim ++) {
          res = reset_domain_coeff(res, reset_dim, 0);
          cout << "\treset: " << str(res) << endl;
      }

      if (dim < num_in_dims(acc_0) - 1) {
         vec_index_addr = isl_map_project_out(cpy(vec_index_addr), isl_dim_in, dim+1, num_in_dims(acc_0) - dim - 1);
         res = isl_map_project_out(cpy(res), isl_dim_in, dim+1, num_in_dims(acc_0) - dim - 1);
      }
      cout << "\tAfter trans: " << str(res) << endl;
      cout << "\tVec index address: " << str(vec_index_addr) << endl;

      //bring the sram2tb forward for 3 cycle
      res = shift_range_map(res, {-3});
      auto config_sram2tb = generate_accessor_config_from_aff_expr(domain(res), get_aff(res));

      //Getthe addressor
      {
        int word_width = mem.word_width.at("tb");
        int capacity = mem.capacity.at("tb");
        int port_width = mem.in_port_width.at("tb");
        auto addressor_sram2tb_write = generate_addressor_config_from_aff_expr(get_aff(vec_index_addr), false, false, word_width, capacity, port_width);
        config_sram2tb.merge(addressor_sram2tb_write);
      }

      {
        int word_width = mem.word_width.at("sram");
        int capacity = mem.capacity.at("sram");
        int port_width = mem.out_port_width.at("sram");
        auto addressor_sram2tb_read = generate_addressor_config_from_aff_expr(get_aff(vec_index_addr), true, false, word_width, capacity, port_width);
        config_sram2tb.merge(addressor_sram2tb_read);
      }
      add_lake_config(config_file, config_sram2tb, num_dims(domain(res)), "sram2tb_0");

      auto* g = context->getGenerator("cgralib.Mem_amber");
      //auto* generatedModule = g->getModule(genargs);
      //g->getMetaData()["verilog_name"] =
      //  "aff_ctrl_"+genargs.at("ID")->get<string>();
      buf = def->addInstance(ub_ins_name + "_Counter_" + str(dim), "cgralib.Mem_amber", genargs);
      //assign the init value
      //TODO change 4 to fetch width
      std::vector<int> v(round_up_to_multiple_of(get_domain_range(dom, dim), 4));
      std::iota(v.begin(), v.end(), 0);

      //TODO: this is a temporary fix for lake counter, need to move to the root level
      //buf->getMetaData()["init"] = v;
      config_file["init"] = v;

      buf->getMetaData()["config"] = config_file;
      buf->getMetaData()["mode"] = "lake";
      //buf->getModuleRef()->getMetaData()["verilog_name"] = "aff_ctrl_"+genargs.at("ID")->get<string>();
      //buf->getMetaData()["verilog_name"] = "aff_ctrl_"+genargs.at("ID")->get<string>();


      //garnet wire reset to flush of memory
      def->connect(buf->sel("flush"), def->sel("self.rst_n"));
      def->connect(buf->sel("clk"), def->sel("self.clk"));
      def->connect(buf->sel("clk_en"), clk_en_const->sel("out"));
      def->connect(buf->sel("rst_n"), clk_en_const->sel("out"));
      def->connect(buf->sel("data_out_0"), def->sel("self")->sel("d")->sel(dim));
      if (has_stencil_valid) {
        def->connect(buf->sel("stencil_valid"), def->sel("self.valid"));
      }
      generate_lake_tile_verilog(options, buf);

    } else {
      //This is the dual port version
      auto config_mem2out = generate_accessor_config_from_aff_expr(dom, aff);
      {
        int word_width = mem.word_width.at("mem");
        int capacity = mem.capacity.at("mem");
        int port_width = mem.out_port_width.at("mem");
        //is_read = true, is_mux = false
        auto addressor_mem2out = generate_addressor_config_from_aff_expr(get_aff(index_addr), true, false, word_width, capacity, port_width);
        config_mem2out.merge(addressor_mem2out);
      }
      add_lake_config(config_file, config_mem2out, num_dims(dom), pick(mem.controller_name)+"2out_0");

      std::vector<int> v(get_domain_range(dom, dim));
      std::iota(v.begin(), v.end(), 0);

      //TODO: this is a temporary fix for lake counter, need to move to the root level
      //buf->getMetaData()["init"] = v;
      config_file["init"] = v;
      auto dp_buf_for_counter = generate_pond_instance(def, options, ub_ins_name + "_counter_" + str(dim),
              "rst_n", "lake_dp", config_file, 1, 1);

      //Wire the output data
      def->connect(dp_buf_for_counter->sel("data_out_pond_0"), def->sel("self")->sel("d")->sel(dim));
      generate_lake_tile_verilog(options, dp_buf_for_counter);
      if (has_stencil_valid) {
        def->connect(dp_buf_for_counter->sel("valid_out_pond"), def->sel("self.valid"));
      }

    }
  }
  m->setDef(def);


  //add_lake_config(config_file, stencil_valid, num_in_dims(aff), "stencil_valid");
  cout << "Use ub counter mode to be aff counter"  << endl;
  cout << "\tAFF: " << str(aff) << endl;
  cout << "\tAff in dim: " << num_in_dims(aff) << endl;

  cout << "\t\tAff get const: " << int_const_coeff(aff) << endl;
  for (int i = 0; i < num_in_dims(aff); i ++) {
    cout << "\t\tAff get coeff: " << int_coeff(aff, i) << endl;
  }

  cout << "\tDom: " << str(dom) << endl;
  auto min_dom_pt = lexminpt(dom);
  auto max_dom_pt = lexmaxpt(dom);
  for (int i = 0; i < num_dims(dom); i ++) {
    cout << "\t\tDom range: " << to_int(coord(max_dom_pt, i)) - to_int(coord(min_dom_pt, i)) << endl;
  }

  return m;
}

CoreIR::Instance* affine_controller_use_lake_tile(
        CodegenOptions & options,
        ModuleDef* def,
        CoreIR::Context* context,
        isl_set* dom,
        isl_aff* aff,
        string ub_ins_name) {

  cout << "Add ub node to be aff ctrl"  << endl;

  //Generate the configuration
  auto stencil_valid = generate_accessor_config_from_aff_expr(dom, aff);
  json config_file;
  add_lake_config(config_file, stencil_valid, num_in_dims(aff), "stencil_valid");

  CoreIR::Instance* buf;
  auto mem = options.mem_hierarchy.at("mem");
  if (mem.fetch_width > 1) {
    //TODO: put this into a function
    bool has_chain_en = options.mem_hierarchy.at("mem").wire_chain_en;
    CoreIR::Values genargs = {
      {"width", CoreIR::Const::make(context, 16)},
      {"num_inputs", CoreIR::Const::make(context, 1)},
      {"num_outputs", CoreIR::Const::make(context, 1)},
      {"has_stencil_valid", CoreIR::Const::make(context, true)},
      {"has_chain_en", CoreIR::Const::make(context, has_chain_en)},
      {"ID", CoreIR::Const::make(context, context->getUnique())},
      {"has_flush",  CoreIR::Const::make(context, true)},
      {"use_prebuilt_mem",  CoreIR::Const::make(context, true)}
    };
    auto* g = context->getGenerator("cgralib.Mem_amber");
    buf = def->addInstance(ub_ins_name, "cgralib.Mem_amber", genargs);
    buf->getMetaData()["config"] = config_file;
    buf->getMetaData()["mode"] = "lake";
    //buf->getModuleRef()->getMetaData()["verilog_name"] = "aff_ctrl_counter_"+genargs.at("ID")->get<string>();
    //buf->getMetaData()["verilog_name"] = "aff_ctrl_counter_"+genargs.at("ID")->get<string>();

  } else {
    CoreIR::Values genargs = {
      {"width", CoreIR::Const::make(context, 16)},
      {"num_inputs", CoreIR::Const::make(context, 1)},
      {"num_outputs", CoreIR::Const::make(context, 1)},
      {"ID", CoreIR::Const::make(context, context->getUnique())},
    };
    auto* g = context->getGenerator("cgralib.Pond_amber");
    //auto* generatedModule = g->getModule(genargs);
    //g->getMetaData()["verilog_name"] =
    //  "pond_"+genargs.at("ID")->get<string>();
    buf = def->addInstance(ub_ins_name, "cgralib.Pond_amber", genargs);
    buf->getMetaData()["config"] = config_file;
    buf->getMetaData()["mode"] = "lake_dp";
    //buf->getModuleRef()->getMetaData()["verilog_name"] = "pond_"+genargs.at("ID")->get<string>();
    //buf->getMetaData()["verilog_name"] = "pond_"+genargs.at("ID")->get<string>();

  }


  auto clk_en_const = def->addInstance(ub_ins_name+"_clk_en_const", "corebit.const",
          {{"value", CoreIR::Const::make(context, true)}});

  //Wire some default logic
  def->connect(buf->sel("flush"), def->sel("self.reset"));
  def->connect(buf->sel("clk"), def->sel("self.clk"));
  def->connect(buf->sel("clk_en"), clk_en_const->sel("out"));
  def->connect(buf->sel("rst_n"), clk_en_const->sel("out"));

  return buf;
}

//TODO: we should rewrite this function to include both dp memory and sp memory
CoreIR::Instance* UBuffer::generate_pond_instance(
        ModuleDef* def,
        CodegenOptions options,
        string ub_ins_name,
        string config_mode,
        size_t input_num, size_t output_num) {

  auto context = def->getContext();
  CoreIR::Instance* buf;
  CoreIR::Values genargs = {
    {"width", CoreIR::Const::make(context, port_widths)},
    {"num_inputs", CoreIR::Const::make(context, input_num)},
    {"num_outputs", CoreIR::Const::make(context, output_num)},
    {"ID", CoreIR::Const::make(context, context->getUnique())},
  };
  cout << "Add pond node with input_num = " << input_num
      << ", output_num = " << output_num << endl;
  auto* g = context->getGenerator("cgralib.Pond_amber");
  //auto* generatedModule = g->getModule(genargs);
  //g->getMetaData()["verilog_name"] =
  //  "pond_"+genargs.at("ID")->get<string>();
  buf = def->addInstance(ub_ins_name, "cgralib.Pond_amber", genargs);
  buf->getMetaData()["config"] = config_file;
  buf->getMetaData()["mode"] = config_mode;
  //buf->getModuleRef()->getMetaData()["verilog_name"] = "pond_"+genargs.at("ID")->get<string>();
  //buf->getMetaData()["verilog_name"] = "pond_"+genargs.at("ID")->get<string>();

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
        string ub_ins_name, string bank_name,
        size_t input_num, size_t output_num,
        bool has_stencil_valid, bool has_flush) {

  auto context = def->getContext();
  bool has_chain_en = options.mem_hierarchy.at("mem").wire_chain_en;
  CoreIR::Instance* buf;
  CoreIR::Values genargs = {
    {"width", CoreIR::Const::make(context, port_widths)},
    {"num_inputs", CoreIR::Const::make(context, input_num)},
    {"num_outputs", CoreIR::Const::make(context, output_num)},
    {"has_chain_en", CoreIR::Const::make(context, has_chain_en)},
    {"has_stencil_valid", CoreIR::Const::make(context, has_stencil_valid)},
    {"ID", CoreIR::Const::make(context, context->getUnique())},
    {"has_flush",  CoreIR::Const::make(context, has_flush)},
    {"use_prebuilt_mem", CoreIR::Const::make(context, options.rtl_options.use_prebuilt_memory)}
  };
  CoreIR::Values modargs = {
    {"mode", CoreIR::Const::make(context, "lake")}
  };
  if (has_stencil_valid) {
    cout << "Generate stencil valid signal" << endl;
    generate_stencil_valid_config(options, bank_name);
  }
  cout << "Add lake node:" << ub_ins_name << " with input_num = " << input_num
      << ", output_num = " << output_num << endl;
  if (options.pass_through_valid) {
    //modargs["config"] = CoreIR::Const::make(context, config_file);
    auto* g = context->getGenerator("cgralib.Mem_amber");
    //auto* generatedModule = g->getModule(genargs);
    //g->getMetaData()["verilog_name"] =
    //  "lake_"+genargs.at("ID")->get<string>();
    buf = def->addInstance(ub_ins_name, "cgralib.Mem_amber", genargs);
    buf->getMetaData()["config"] = config_file;
    buf->getMetaData()["mode"] = string("lake");
    //buf->getModuleRef()->getMetaData()["verilog_name"] = "lake_"+genargs.at("ID")->get<string>();
    //buf->getMetaData()["verilog_name"] = "lake_"+genargs.at("ID")->get<string>();
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


void UBuffer::generate_stencil_valid_config(CodegenOptions& options, string bank_name) {
  auto outpt_sched = get_stencil_valid_sched(bank_name);
  cout << "original outpt schedule: " << str(outpt_sched) << endl;
  assert(isl_union_map_is_single_valued(outpt_sched));

  auto outpt_sched_1D = linear_schedule(to_map(outpt_sched), options.iis, 0, false);
  cout << "Stencil Valid signal 1D: " << str(outpt_sched_1D) << endl;
  auto sched = get_aff(outpt_sched_1D);
  auto stencil_valid = generate_accessor_config_from_aff_expr(::domain(outpt_sched_1D), sched);
  add_lake_config(config_file, stencil_valid, num_in_dims(sched), "stencil_valid");
}

string memDatainPort(string mode, int pt_cnt) {
    if (mode == "lake"  || mode == "glb")
        return "data_in_" + to_string(pt_cnt);
    else if (mode == "pond" || mode == "lake_dp") {
        return "data_in_pond_" + to_string(pt_cnt);
    } else {
        cout << "Mode: " << mode << " is not implemented yet" << endl;
        assert(false);
    }
}

string memDataoutPort(string mode, int pt_cnt) {
    if (mode == "lake" || mode == "glb")
        return "data_out_" + to_string(pt_cnt);
    else if (mode == "pond" || mode == "lake_dp") {
        return "data_out_pond_" + to_string(pt_cnt);
    } else {
        cout << "Mode: " << mode << " is not implemented yet" << endl;
        assert(false);
    }
}

//Helper function to find the last port in chaining path
CoreIR::Wireable* findChainDataIn(CoreIR::Wireable* mem_data_out, int port_id) {
    auto last_bank =  mem_data_out->getTopParent();
    cout << "Last bank in chain data in" << last_bank->toString() << endl;
    auto chain_in = last_bank->sel("chain_data_in_" + str(port_id));
    auto conns = getConnectWires(chain_in);
    if (conns.size() == 0) {
        return chain_in;
    } else {
        assert(conns.size() == 1);
        return findChainDataIn(pick(conns), port_id);
    }

}

void UBuffer::wire_ubuf_IO(CodegenOptions& options,CoreIR::ModuleDef* def, map<string, CoreIR::Wireable*> & pt2wire,
        CoreIR::Instance* buf, UBufferImpl & impl, schedule_info & info, int bank_id, bool with_ctrl) {
  auto context = def->getContext();

  int inpt_cnt = 0, outpt_cnt = 0;
  string config_mode = buf->getMetaData()["mode"];
  cout << "Config mode: " << config_mode << endl;
  //TODO: remove this
  for (auto inpt_broadcast_set: impl.bank_inpt2writers.at(bank_id)) {
    //Cannot wire multiple wire into one memory port
    assert(inpt_broadcast_set.size() == 1);
    for (auto inpt: inpt_broadcast_set) {
      if (isIn.at(inpt)){
        def->connect(buf->sel(memDatainPort(config_mode, inpt_cnt)), pt2wire.at(inpt));

        //There is no control signal
        if (with_ctrl) {
          def->connect(buf->sel("wen_" + to_string(inpt_cnt)), def->sel("self."+get_bundle(inpt)+"_en"));
        }
      } else {
        cout << "Did not implement serial line buffer optimization!" << endl;
        assert(false);
      }
    }
    inpt_cnt ++;
  }
  bool chain_en = false;
  //TODO: rewrite the chaining logic it's messy
  for (auto outpt_broadcast_set: impl.bank_outpt2readers.at(bank_id)) {
    for (auto outpt: outpt_broadcast_set) {
      //need a second pass push all wire into a list
      //def->connect(buf->sel("dataout_"+to_string(outpt_cnt)), pt2wire.at(outpt));
      //auto outpt = *(outpt_it);
      //CoreIR::Wireable* tmp = buf->sel("data_out_"+to_string(outpt_cnt));
      CoreIR::Wireable* tmp = buf->sel(memDataoutPort(config_mode, outpt_cnt));
      //CoreIR::map_insert(outpt_bank_rd, outpt, tmp);
      if (impl.outpt_to_bank.at(outpt).size() == 1) {
        //no chaining
        def->connect(buf->sel(memDataoutPort(config_mode, outpt_cnt)), pt2wire.at(outpt));
      } else {

        chain_en = true;
        auto conns = getConnectWires(pt2wire.at(outpt));
        if (config_mode == "lake" || config_mode == "glb") {
          //lake chaining wiring method
          if(conns.size() == 0) {
            //First chaining wiring, wire to the output
            def->connect(buf->sel(memDataoutPort(config_mode, outpt_cnt)), pt2wire.at(outpt));
          } else {
            assert(conns.size() == 1);
            cout << "pt count: " << outpt_cnt << endl;
            CoreIR::Wireable* last_dangling_chain_data_in =
              findChainDataIn(pick(conns), outpt_cnt);
            def->connect(buf->sel(memDataoutPort(config_mode, outpt_cnt)), last_dangling_chain_data_in);
          }

        } else if (config_mode == "pond" || config_mode == "lake_dp") {
          if (bank_id == impl.outpt_to_bank.at(outpt).size() - 1) {
            //last port directly connec to the wire
            def->connect(buf->sel(memDataoutPort(config_mode, outpt_cnt)),  pt2wire.at(outpt));
          } else {
            Instance* dataout_pth = addPassthrough(
                    pt2wire.at(outpt), "dataout_pt_" + context->getUnique());
            cout << "read domain:" << str(impl.bank_rddom.at(bank_id)) << endl;
            auto IR_pair = get_bank_pt_IR(outpt, impl.bank_rddom.at(bank_id), info);
            isl_aff* sched_aff = get_aff(IR_pair.second);
            cout << "pt schedule: " << str(sched_aff) << endl;
            auto mux_ctrl = affine_controller_use_lake_tile(
                    options, def, context, ::domain(IR_pair.second),
                    sched_aff, "dataout_pt_mux_ctrl_" + context->getUnique());
            generate_lake_tile_verilog(options, mux_ctrl);

            //create a mux
            auto next_val = def->addInstance(
                    def->getContext()->getUnique() + "_mux",
                    "coreir.mux",
                    {{"width", CoreIR::Const::make(context, this->port_widths)}});
            def->connect(dataout_pth->sel("out"), next_val->sel("out"));
            def->connect(buf->sel(memDataoutPort(config_mode, outpt_cnt)), next_val->sel("in1"));
            def->connect(op_control_wires(mux_ctrl), next_val->sel("sel"));
            inlineInstance(dataout_pth);
            pt2wire.at(outpt) = next_val->sel("in0");
          }
        }
      }

    }
    outpt_cnt++;
  }

  if (config_mode == "lake") {
    if (!chain_en) {
      if (options.mem_hierarchy.at("mem").wire_chain_en) {
        auto chain_en_const = def->addInstance("chain_en_const"+context->getUnique(), "corebit.const",
            {{"value", CoreIR::Const::make(context, false)}});
        def->connect(buf->sel("chain_chain_en"), chain_en_const->sel("out"));
      }
    } else {
      //Need chaining
      if (options.mem_hierarchy.at("mem").wire_chain_en) {
        auto chain_en_const = def->addInstance("chain_en_const"+context->getUnique(), "corebit.const",
            {{"value", CoreIR::Const::make(context, true)}});
        def->connect(buf->sel("chain_chain_en"), chain_en_const->sel("out"));
      }

      //Add the chainenable config
      buf->getMetaData()["config"]["chain_en"] = 1;

    }

  } else if (config_mode == "glb") {
    if (!chain_en) {
        auto chain_en_const = def->addInstance("chain_en_const"+context->getUnique(), "corebit.const",
            {{"value", CoreIR::Const::make(context, false)}});
        def->connect(buf->sel("chain_chain_en"), chain_en_const->sel("out"));
    } else {
      //Need chaining
        auto chain_en_const = def->addInstance("chain_en_const"+context->getUnique(), "corebit.const",
            {{"value", CoreIR::Const::make(context, true)}});
        def->connect(buf->sel("chain_chain_en"), chain_en_const->sel("out"));
    }
  }
}

//helper function to generate shift register
void UBuffer::generate_sreg_and_wire(CodegenOptions& options, UBufferImpl& impl, CoreIR::ModuleDef* def, map<string, CoreIR::Wireable*> & pt2wire){
  auto context = def->getContext();
  for (auto it: impl.get_shift_registered_ports()) {
    //add pt for it.first(an output port)
    string dst = it.first;
    string src = it.second.first;
    int delay = it.second.second;
    auto wire = pt2wire.at(src);
    CoreIR::Wireable* last_out;
    if (isIn.at(src))
      last_out = wire;
    else {
      auto conns = getConnectWires(wire);
      //cout << "src: " << src << endl;
      //for (auto conn: conns) {
      //    cout << conn->toString() << endl;
      //}
      assert(conns.size() == 1);
      last_out = pick(conns);
    }
    //CoreIR::Wireable* final_out = pt2wire.at(dst);

    //cout << *this << endl;
    CoreIR::Wireable* final_out = def->sel("self." + container_bundle(dst) + "." + str(bundle_offset(dst)));
    for (size_t i = 0; i < delay; i ++) {
      auto reg = def->addInstance("d_reg_"+context->getUnique(), "mantle.reg",
          {{"width", CoreIR::Const::make(context, port_widths)},
          {"has_en", CoreIR::Const::make(context, false)}});
      def->connect(reg->sel("in"), last_out);
      last_out = reg->sel("out");
    }
    def->connect(last_out, final_out);
  }
}

//Take the fanin structure and generate the wiring
void UBuffer::generate_fanin_connection(CodegenOptions& options, UBufferImpl& impl, CoreIR::ModuleDef* def, map<string, CoreIR::Wireable*> & pt2wire){
  auto context = def->getContext();
  for (auto it: impl.fanin_outputs) {
    map<string, CoreIR::Wireable*> output_map;
    for (auto in_delay: it.second) {
      string src = in_delay.first;
      int delay = in_delay.second;
      CoreIR::Wireable* last_out =
          pt2wire.at(src);
      for (size_t i = 0; i < delay; i ++) {
        auto reg = def->addInstance("d_reg_"+context->getUnique(), "mantle.reg",
            {{"width", CoreIR::Const::make(context, port_widths)},
            {"has_en", CoreIR::Const::make(context, false)}});
        def->connect(reg->sel("in"), last_out);
        last_out = reg->sel("out");
      }
      output_map[src] = last_out;
    }
    string outpt = it.first;

    auto mux_output = pt2wire.at(outpt);
    for (auto src: output_map) {

      //Add a pass through for the mux output
      Instance* dataout_pth = addPassthrough(
            mux_output, "dataout_pt_" + context->getUnique());
      //Creating the input selection logic
      isl_aff* sched_aff = get_aff(to_map(schedule.at(src.first)));
      cout << "pt schedule: " << str(sched_aff) << endl;
      auto mux_ctrl = affine_controller_use_lake_tile(
              options, def, context, domain.at(src.first),
              sched_aff, "dataout_pt_mux_ctrl_" + context->getUnique());
      generate_lake_tile_verilog(options, mux_ctrl);
      //create a mux
      auto next_val = def->addInstance(
              def->getContext()->getUnique() + "_mux",
              "coreir.mux",
              {{"width", CoreIR::Const::make(context, this->port_widths)}});
      def->connect(dataout_pth->sel("out"), next_val->sel("out"));
      def->connect(src.second, next_val->sel("in1"));
      def->connect(op_control_wires(mux_ctrl), next_val->sel("sel"));
      inlineInstance(dataout_pth);
      mux_output = next_val->sel("in0");
    }
  }
}

string UBuffer::determine_config_mode(CodegenOptions& options, UBuffer& target_buf) {
  auto capacity = total_capacity(target_buf);

  cout << "Vectorization buffer capacity: " << capacity << endl;
  string config_mode;
  bool multi_level_mem = options.mem_hierarchy.count("regfile");
  //TODO: this mode determine is hacky
  //Changing the size of pond threshold
  if (contains(target_buf.name, "_glb_stencil")) {
    config_mode = "glb";
  } else if (capacity <= 32 && multi_level_mem )  {
    cout << "Generate config for register file!" << endl;
    config_mode = "pond";

  } else if (options.mem_hierarchy.at("mem").fetch_width == 1) {
    config_mode = "lake_dp";
  } else {
    config_mode = "lake";
  }
  return config_mode;
}

CoreIR::Instance* UBuffer::map_ubuffer_to_cgra(CodegenOptions& options, CoreIR::ModuleDef* def, GarnetImpl& hw_impl) {
  UBuffer target_buf = hw_impl.target_buf;
  string ub_ins_name = "ub_" + target_buf.name;
  CoreIR::Instance* buf;
  if (hw_impl.config_mode == "lake") {
    //auto vectorized_buf = hw_impl.sub_component;
    //for (auto buf: vectorized_buf) {
    //    cout << "After vectorization codegen: " << buf.first << endl << buf.second << endl;
    //}
    //TODO generate the config file on the fly
    assert(hw_impl.sub_component.size());
    config_file = generate_ubuf_args(options, hw_impl.sub_component);
    buf = generate_lake_tile_instance(def, options,
      ub_ins_name, target_buf.name,
      target_buf.num_in_ports(),
      target_buf.num_out_ports(),
      false/*TODO: exclude stencil valid signal*/, true);

  } else if (hw_impl.config_mode == "lake_dp") {
    config_file = generate_ubuf_args(options, target_buf, "mem");
    buf = generate_pond_instance(def, options, ub_ins_name, "lake_dp",
            target_buf.num_in_ports(), target_buf.num_out_ports());
  } else if (hw_impl.config_mode == "pond") {
    config_file = generate_ubuf_args(options, target_buf, "regfile");
    buf = generate_pond_instance(def, options, ub_ins_name, "pond",
            target_buf.num_in_ports(), target_buf.num_out_ports());
  } else if (hw_impl.config_mode == "glb") {

    //TODO: put this info a function
    auto c = def->getContext();
    config_file = generate_ubuf_args(options, target_buf, "glb");
    Values tile_params{
      {"width", COREMK(c, 16)},
      {"ctrl_width", COREMK(c, 32)},
      {"ID", COREMK(c, target_buf.name)},
      {"has_external_addrgen", COREMK(c, true)},
      {"num_inputs",COREMK(c,target_buf.num_in_ports())},
      {"num_outputs",COREMK(c,target_buf.num_out_ports())}};

    buf = def->addInstance(
            target_buf.name + "_ubuf",
            "cgralib.Mem_amber", tile_params);
    buf->getMetaData()["mode"] = "glb";
    buf->getMetaData()["config"] = config_file;
    //buf->getModuleRef()->getMetaData()["verilog_name"] = "glb_"+ c->getUnique();
    //buf->getMetaData()["verilog_name"] = "glb_"+ c->getUnique();
    int count = 0;
    target_buf.remove_bank_dim();
    cout << "After simplify: " << target_buf << endl;
    for (auto inpt: target_buf.get_in_ports()) {
      isl_set* dom = target_buf.domain.at(inpt);
      isl_aff* aff = get_aff(to_map(target_buf.schedule.at(inpt)));
      auto accessor = ::affine_controller(def, dom, aff, 32);
      accessor->getMetaData()["garnet_remove"] = true;
      auto agen = build_addrgen(inpt, target_buf, def, 32);
      def->connect(agen->sel("d"), accessor->sel("d"));
      def->connect(accessor->sel("rst_n"), def->sel("self.reset"));
      def->connect(agen->sel("out"), buf->sel("write_addr_" + str(count)));
      def->connect(buf->sel("wen_" + str(count)),
              accessor->sel("valid"));
      count ++;
    }
    count = 0;
    for (auto outpt: target_buf.get_out_ports()) {
      isl_set* dom = target_buf.domain.at(outpt);
      isl_aff* aff = get_aff(to_map(target_buf.schedule.at(outpt)));
      //read have one cycle latency
      aff = add(aff, -1);
      auto accessor = ::affine_controller(def, dom, aff, 32);
      accessor->getMetaData()["garnet_remove"] = true;
      auto agen = build_addrgen(outpt, target_buf, def, 32);
      def->connect(agen->sel("d"), accessor->sel("d"));
      def->connect(accessor->sel("rst_n"), def->sel("self.reset"));
      def->connect(agen->sel("out"), buf->sel("read_addr_" + str(count)));
      def->connect(buf->sel("ren_" + str(count)),
              accessor->sel("valid"));
      count ++;
    }
    def->connect(buf->sel("rst_n"), def->sel("self.reset"));
  }
  return buf;
}

CoreIR::Instance* UBuffer::map_ubuffer_to_cgra(CodegenOptions& options, CoreIR::ModuleDef* def, UBuffer& target_buf, string config_mode) {

  map<string, UBuffer> vectorized_buf;
  string ub_ins_name = "ub_" + target_buf.name;
  vectorized_buf.insert(
          {target_buf.name+ "_ubuf", target_buf});
  auto capacity = total_capacity(target_buf);

  cout << "Vectorization buffer capacity: " << capacity << endl;
  CoreIR::Instance* buf;
  if (config_mode == "lake") {
    cout << "vectorization buf name: " << target_buf.name << endl;
    buffer_vectorization(options, {target_buf.name+ "_ubuf"}, vectorized_buf);
    vectorized_buf = decouple_multi_tile_ubuffer(options, vectorized_buf);
    for (auto buf: vectorized_buf) {
        cout << "After vectorization codegen: " << buf.first << endl << buf.second << endl;
    }
    //TODO generate the config file on the fly
    config_file = generate_ubuf_args(options, vectorized_buf);
    buf = generate_lake_tile_instance(def, options,
      ub_ins_name, target_buf.name,
      target_buf.num_in_ports(), target_buf.num_out_ports(),
      false/*TODO: exclude stencil valid signal*/, true);

  } else if (config_mode == "lake_dp") {
    config_file = generate_ubuf_args(options, target_buf, "mem");
    buf = generate_pond_instance(def, options, ub_ins_name, "lake_dp",
            target_buf.num_in_ports(), target_buf.num_out_ports());
  } else if (config_mode == "pond") {
    config_file = generate_ubuf_args(options, target_buf, "regfile");
    buf = generate_pond_instance(def, options, ub_ins_name, "pond",
            target_buf.num_in_ports(), target_buf.num_out_ports());
  } else if (config_mode == "glb") {
    auto c = def->getContext();
    config_file = generate_ubuf_args(options, target_buf, "glb");
    Values tile_params{
      {"width", COREMK(c, 16)},
      {"ctrl_width", COREMK(c, 32)},
      {"ID", COREMK(c, target_buf.name)},
      {"has_external_addrgen", COREMK(c, true)},
      {"num_inputs",COREMK(c,target_buf.num_in_ports())},
      {"num_outputs",COREMK(c,target_buf.num_out_ports())}};

    buf = def->addInstance(
            target_buf.name + "_ubuf",
            "cgralib.Mem_amber", tile_params);
    buf->getMetaData()["mode"] = "glb";
    buf->getMetaData()["config"] = config_file;
    //buf->getModuleRef()->getMetaData()["verilog_name"] = "glb_"+ c->getUnique();
    //buf->getMetaData()["verilog_name"] = "glb_"+ c->getUnique();
    int count = 0;
    target_buf.remove_bank_dim();
    cout << "After simplify: " << target_buf << endl;
    for (auto inpt: target_buf.get_in_ports()) {
      isl_set* dom = target_buf.domain.at(inpt);
      isl_aff* aff = get_aff(to_map(target_buf.schedule.at(inpt)));
      auto accessor = ::affine_controller(def, dom, aff, 32);
      accessor->getMetaData()["garnet_remove"] = true;
      auto agen = build_addrgen(inpt, target_buf, def, 32);
      def->connect(agen->sel("d"), accessor->sel("d"));
      def->connect(accessor->sel("rst_n"), def->sel("self.reset"));
      def->connect(agen->sel("out"), buf->sel("write_addr_" + str(count)));
      def->connect(buf->sel("wen_" + str(count)),
              accessor->sel("valid"));
      count ++;
    }
    count = 0;
    for (auto outpt: target_buf.get_out_ports()) {
      isl_set* dom = target_buf.domain.at(outpt);
      isl_aff* aff = get_aff(to_map(target_buf.schedule.at(outpt)));
      //read have one cycle latency
      aff = add(aff, -1);
      auto accessor = ::affine_controller(def, dom, aff, 32);
      accessor->getMetaData()["garnet_remove"] = true;
      auto agen = build_addrgen(outpt, target_buf, def, 32);
      def->connect(agen->sel("d"), accessor->sel("d"));
      def->connect(accessor->sel("rst_n"), def->sel("self.reset"));
      def->connect(agen->sel("out"), buf->sel("read_addr_" + str(count)));
      def->connect(buf->sel("ren_" + str(count)),
              accessor->sel("valid"));
      count ++;
    }
    def->connect(buf->sel("rst_n"), def->sel("self.reset"));
  }
  return buf;
}

bool sanity_check_controller_bitwidth(CodegenOptions& options, isl_map* sched) {
    int sched_max = to_int(lexmaxval(range(sched)));
    return sched_max < options.mem_hierarchy.at("mem").counter_ub;
}

void add_lake_config_to_aff_ctrl_for_garnet_mapping(isl_set* dom, isl_aff* aff, CoreIR::Instance* &aff_ctrl) {
  auto stencil_valid = generate_accessor_config_from_aff_expr(dom, aff);
  json config_file;
  add_lake_config(config_file, stencil_valid, num_in_dims(aff), "stencil_valid");
  aff_ctrl->getMetaData()["lake_config"] = config_file;
}

CoreIR::Instance* generate_cgpl_ctrl(CodegenOptions& options, CoreIR::ModuleDef* def, isl_map* cgpl_schedule) {
  CoreIR::Instance* cgpl_ctrl;
  auto context = def->getContext();
  if (sanity_check_controller_bitwidth(options, cgpl_schedule)) {
    //connect with the new ctrl stencil valid port
    cgpl_ctrl = affine_controller_use_lake_tile(
          options, def, context, ::domain(cgpl_schedule),
          get_aff(cgpl_schedule), "cgpl_ctrl" + context->getUnique());
    generate_lake_tile_verilog(options, cgpl_ctrl);
  } else {
    auto sched_aff = get_aff(cgpl_schedule);
    auto dom = ::domain(cgpl_schedule);

    //Add one because we did not wire reset
    cgpl_ctrl = affine_controller(def, dom, add(sched_aff, 1), 32);

    //Dump the metadata and rewrite it to lake tile in garnet mapping:
    add_lake_config_to_aff_ctrl_for_garnet_mapping(dom, sched_aff, cgpl_ctrl);
  }
  return cgpl_ctrl;
}

void cgpl_ctrl_optimization(CodegenOptions& options, UBuffer& target_buf, string config_mode,
        isl_map*& cgpl_schedule, bool& decouple_ctrl, bool& substract_glb_latency) {
  string ub_ins_name = "ub_" + target_buf.name;
  decouple_ctrl =
      target_buf.check_decouple_coarse_grained_pipeline_ctrl();
  if (decouple_ctrl) {
    UBuffer new_target_buf;
    //Also pass in the decouple_ctrl boolean, it's possible that we use double buffer
    //and not decouple ctrl anymore
    cgpl_schedule =
        target_buf.get_coarse_grained_pipeline_schedule(options, new_target_buf, config_mode, decouple_ctrl, substract_glb_latency);
    //Just get the schedule, push back the logic generation we may need to change it due to double buffer optimization
    target_buf = new_target_buf;
  }
}

void cgpl_post_processing(CodegenOptions& options,
        CoreIR::ModuleDef* def, CoreIR::Instance*buf, GarnetImpl & hw_impl) {
  if (hw_impl.decouple_ctrl) {
    CoreIR::Instance* cgpl_ctrl = generate_cgpl_ctrl(options, def, hw_impl.cgpl_schedule);
    buf->getMetaData()["drive_by_cgpl_ctrl"] = true;
    //Disconnect the original connection from flush port
    auto conns = buf->sel("flush")->getConnectedWireables();
    for (auto conn: conns) {
      def->disconnect(buf->sel("flush"), conn);
    }
    //Use lake tile to generate control
    if (cgpl_ctrl->getModuleRef()->isGenerated())
      def->connect(cgpl_ctrl->sel("stencil_valid"), buf->sel("flush"));
    //Use coreir built affine control
    else
      def->connect(cgpl_ctrl->sel("valid"), buf->sel("flush"));
  }
}

void cgpl_post_processing(CodegenOptions& options,
        CoreIR::ModuleDef* def, CoreIR::Instance*buf, isl_map* cgpl_schedule, bool decouple_ctrl) {
  if (decouple_ctrl) {
    CoreIR::Instance* cgpl_ctrl = generate_cgpl_ctrl(options, def, cgpl_schedule);
    buf->getMetaData()["drive_by_cgpl_ctrl"] = true;
    //Disconnect the original connection from flush port
    auto conns = buf->sel("flush")->getConnectedWireables();
    for (auto conn: conns) {
      def->disconnect(buf->sel("flush"), conn);
    }
    //Use lake tile to generate control
    if (cgpl_ctrl->getModuleRef()->isGenerated())
      def->connect(cgpl_ctrl->sel("stencil_valid"), buf->sel("flush"));
    //Use coreir built affine control
    else
      def->connect(cgpl_ctrl->sel("valid"), buf->sel("flush"));
  }
}

void substract_glb_latency_in_config_file(json& config_file, int latency) {
    for (auto & ctrl: config_file.items()) {
        auto & val = ctrl.value();
        if ((val.count("cycle_starting_addr")))
          val.at("cycle_starting_addr")[0] =
            (int)val.at("cycle_starting_addr")[0] - latency;
    }
}

void host2glb_optimization(CodegenOptions& options,
        CoreIR::ModuleDef* def, CoreIR::Instance*buf, bool substract_glb_latency) {
  if (substract_glb_latency) {
    buf->getMetaData()["drive_by_cgpl_ctrl"] = true;
    assert(options.host2glb_latency != 0);
    int glb_load_latency= options.host2glb_latency;
    //Substract all the cycle starting address in configuration

    auto config_file = buf->getMetaData()["config"];
    substract_glb_latency_in_config_file(config_file, glb_load_latency);
    buf->getMetaData()["config"] = config_file;

    isl_ctx* ctx = isl_ctx_alloc();
    isl_map* cgpl_sched = isl_map_read_from_str(ctx, ("{op[root=0, i0]->["+str(glb_load_latency-1)+" + i0]: i0=0}").c_str());
    auto sched_aff = get_aff(cgpl_sched);
    auto dom = ::domain(cgpl_sched);

    //Add one because we did not wire reset
    auto cgpl_ctrl = affine_controller(def, dom, add(sched_aff, 1), 32);
    //cgpl_ctrl->getMetaData()["garnet_remove"] = true;
    cgpl_ctrl->getMetaData()["garnet_rewire_flush"] = true;

    //Disconnect the original connection from flush port
    auto conns = buf->sel("flush")->getConnectedWireables();
    for (auto conn: conns) {
      def->disconnect(buf->sel("flush"), conn);
    }
    //connect the new flush
    def->connect(cgpl_ctrl->sel("valid"), buf->sel("flush"));
  }
}


void host2glb_optimization(CodegenOptions& options,
        CoreIR::ModuleDef* def, CoreIR::Instance*buf, GarnetImpl& hw_impl) {
  if (hw_impl.substract_glb_latency) {
    buf->getMetaData()["drive_by_cgpl_ctrl"] = true;
    assert(options.host2glb_latency != 0);
    int glb_load_latency= options.host2glb_latency;
    //Substract all the cycle starting address in configuration

    auto config_file = buf->getMetaData()["config"];
    substract_glb_latency_in_config_file(config_file, glb_load_latency);
    buf->getMetaData()["config"] = config_file;

    isl_ctx* ctx = isl_ctx_alloc();
    isl_map* cgpl_sched = isl_map_read_from_str(ctx, ("{op[root=0, i0]->["+str(glb_load_latency-1)+" + i0]: i0=0}").c_str());
    auto sched_aff = get_aff(cgpl_sched);
    auto dom = ::domain(cgpl_sched);

    //Add one because we did not wire reset
    auto cgpl_ctrl = affine_controller(def, dom, add(sched_aff, 1), 32);
    //cgpl_ctrl->getMetaData()["garnet_remove"] = true;
    cgpl_ctrl->getMetaData()["garnet_rewire_flush"] = true;

    //Disconnect the original connection from flush port
    auto conns = buf->sel("flush")->getConnectedWireables();
    for (auto conn: conns) {
      def->disconnect(buf->sel("flush"), conn);
    }
    //connect the new flush
    def->connect(cgpl_ctrl->sel("valid"), buf->sel("flush"));
  }
}
CoreIR::Instance* UBuffer::generate_accum_reg_instance(CodegenOptions& options, CoreIR::ModuleDef* def) {
    //Save the config argument in ubuffer data structure
    config_file = generate_ubuf_args(options, *this, "regfile");

    //TODO: check we define pond
    auto buf_ins = generate_pond_instance(def, options, "ub_"+name, "pond",
            num_in_ports(), num_out_ports());
    return buf_ins;
}

void create_accumulation_register_and_rewrite_buf(CodegenOptions & options, UBuffer & buf, GarnetImpl& hw_impl) {
  //only evoke this opitimization for lake
  if (hw_impl.config_mode != "lake") {
    return ;
  }

  vector<string> update_ops;
  for(auto op: buf.get_ops()) {
    if (buf.is_update_op(op)) {
      update_ops.push_back(op);
    }
  }
  if (update_ops.size() == 0) {
    return ;
  }
  assert(update_ops.size() == 1);
  string op_name = pick(update_ops);
  auto am = buf.get_access_map_from_op(op_name);
  auto sched = buf.get_schedule_from_op(op_name);
  cout << "\tupdate op access map: " << str(am) << endl
      << "\tupdate op schedule: " << str(sched) << endl;
  vector<bool> reaccess_dims = relation_map(am);
  int mask_until = reaccess_dims.size();
  for(auto it = reaccess_dims.rbegin(); it < reaccess_dims.rend(); it ++)
    if ((*it) ) {
      mask_until = (int)(reaccess_dims.rend() - 1 - it) ;
      break;
  }
  cout <<"MASK dim: "<< mask_until << endl;
  if (mask_until == reaccess_dims.size() - 1)
    return ;
  isl_map* mask_map = get_domain_mask(am, mask_until);
  auto am_mask = dot(mask_map, am);
  auto sched_mask = dot(mask_map, sched);
  cout << "\tupdate op access map: " << str(am_mask) << endl
      << "\tupdate op schedule: " << str(sched_mask) << endl;

  vector<int> domain_ext = extents(::domain(am));
  cout << domain_ext << endl;
  int accum_time = 1;
  for(int i = mask_until + 1; i < num_in_dims(am); i ++) {
    accum_time *= domain_ext.at(i);
  }

  cout << "Accumulation time: " << accum_time << endl;

  //TODO double check this value make sense
  auto in_sched_reg = linear_schedule(sched_mask, {1}, -1, false);
  auto out_sched_reg = linear_schedule(sched_mask, {1}, accum_time - 1, false);

  //Create the pond reg
  UBuffer accum_reg;
  accum_reg.name = buf.name + "_accum_reg";
  accum_reg.ctx = buf.ctx;
  accum_reg.port_widths = buf.port_widths;

  vector<string> inpts, outpts;

  for(string inpt: buf.get_in_ports()) {
    if (::name(buf.domain.at(inpt)) == op_name) {
      inpts.push_back(inpt);
      string pt_name = inpt + "_accum_in_0";
      auto reg_in_am = add_domain_suffix(am_mask, "_write");
      auto reg_in_sched= add_domain_suffix(in_sched_reg, "_write");
      accum_reg.port_bundles[op_name + "_write_0"].push_back(pt_name);
      accum_reg.add_in_pt(pt_name, ::domain(reg_in_am), reg_in_am, reg_in_sched);

      pt_name = inpt + "_accum_in_1";
      reg_in_am = add_domain_suffix(am, "_write_pe");
      reg_in_sched= add_domain_suffix(sched, "_write_pe");
      accum_reg.port_bundles[op_name + "_write_1"].push_back(pt_name);
      accum_reg.add_in_pt(pt_name, ::domain(reg_in_am), reg_in_am, reg_in_sched);
    }
  }

  for(string outpt: buf.get_out_ports()) {
    if (::name(buf.domain.at(outpt)) == op_name) {
      outpts.push_back(outpt);
      //string pt_name = outpt + "_accum_out_0";
      //auto reg_out_am = add_domain_suffix(am_mask, "_read");
      //auto reg_out_sched= add_domain_suffix(out_sched_reg, "_read");
      //accum_reg.port_bundles[op_name + "_read_0"].push_back(pt_name);
      //accum_reg.add_out_pt(pt_name, ::domain(reg_out_am), reg_out_am, reg_out_sched);

      auto pt_name = outpt + "_accum_out_1";
      auto reg_out_am = add_domain_suffix(am, "_read_pe");
      auto reg_out_sched= add_domain_suffix(sched, "_read_pe");
      accum_reg.port_bundles[op_name + "_read_1"].push_back(pt_name);
      accum_reg.add_out_pt(pt_name, ::domain(reg_out_am), reg_out_am, reg_out_sched);
    }
  }
  assert(inpts.size()==1);
  buf.replace_pt(pick(inpts), simplify(am_mask), simplify(out_sched_reg));
  assert(outpts.size()==1);
  buf.replace_pt(pick(outpts), simplify(am_mask), simplify(in_sched_reg));
  cout <<"\tFinal accum register: \n" << accum_reg << endl;
  cout << "\tbuffer after accumu reg insert: \n" << buf << endl;

  //save the impl information
  hw_impl.reduce_PE_inpt = pick(inpts);
  hw_impl.reduce_PE_outpt = pick(outpts);
  hw_impl.accum_reg = accum_reg;
  hw_impl.insert_shift_register = true;
}

void insert_accumulation_register(CodegenOptions& options,  CoreIR::ModuleDef* def, GarnetImpl & hw_impl, map<string, CoreIR::Wireable*> & pt2wire) {

  if (!hw_impl.insert_shift_register)
    return;

  //Check if we get the ubuffer instance
  UBuffer accum_reg = hw_impl.accum_reg;


  //Generate the coreIR module
  CoreIR::Instance* accum_reg_ins = accum_reg.generate_accum_reg_instance(options, def);
  generate_lake_tile_verilog(options, accum_reg_ins);
  string config_mode_ = accum_reg_ins->getMetaData()["mode"];

  //Wire the PE interface with accumulation register
  def->connect(accum_reg_ins->sel(memDatainPort(config_mode_, 1)), pt2wire.at(hw_impl.reduce_PE_inpt));
  //pt2wire.at(pick(inpts)) = accum_reg_ins->sel(memDataoutPort(config_mode, 0));
  def->connect(accum_reg_ins->sel(memDataoutPort(config_mode_, 0)), pt2wire.at(hw_impl.reduce_PE_outpt));
  pt2wire.at(hw_impl.reduce_PE_outpt) = accum_reg_ins->sel(memDatainPort(config_mode_, 0));
}


void insert_accumulation_register(CodegenOptions & options, CoreIR::ModuleDef* def, UBuffer & buf, map<string, CoreIR::Wireable*> & pt2wire, string config_mode) {
  //only evoke this opitimization for lake
  if (config_mode != "lake") {
    return;
  }

  vector<string> update_ops;
  for(auto op: buf.get_ops()) {
    if (buf.is_update_op(op)) {
      update_ops.push_back(op);
    }
  }
  if (update_ops.size() == 0) {
    return;
  }
  assert(update_ops.size() == 1);
  string op_name = pick(update_ops);
  auto am = buf.get_access_map_from_op(op_name);
  auto sched = buf.get_schedule_from_op(op_name);
  cout << "\tupdate op access map: " << str(am) << endl
      << "\tupdate op schedule: " << str(sched) << endl;
  vector<bool> reaccess_dims = relation_map(am);
  int mask_until = reaccess_dims.size();
  for(auto it = reaccess_dims.rbegin(); it < reaccess_dims.rend(); it ++)
    if ((*it) ) {
      mask_until = (int)(reaccess_dims.rend() - 1 - it) ;
      break;
  }
  cout <<"MASK dim: "<< mask_until << endl;
  if (mask_until == reaccess_dims.size() - 1)
    return;
  isl_map* mask_map = get_domain_mask(am, mask_until);
  auto am_mask = dot(mask_map, am);
  auto sched_mask = dot(mask_map, sched);
  cout << "\tupdate op access map: " << str(am_mask) << endl
      << "\tupdate op schedule: " << str(sched_mask) << endl;

  vector<int> domain_ext = extents(::domain(am));
  cout << domain_ext << endl;
  int accum_time = 1;
  for(int i = mask_until + 1; i < num_in_dims(am); i ++) {
    accum_time *= domain_ext.at(i);
  }

  cout << "Accumulation time: " << accum_time << endl;

  //TODO double check this value make sense
  auto in_sched_reg = linear_schedule(sched_mask, {1}, -1, false);
  auto out_sched_reg = linear_schedule(sched_mask, {1}, accum_time - 1, false);

  //Create the pond reg
  UBuffer accum_reg;
  accum_reg.name = buf.name + "_accum_reg";
  accum_reg.ctx = buf.ctx;
  accum_reg.port_widths = buf.port_widths;

  vector<string> inpts, outpts;

  for(string inpt: buf.get_in_ports()) {
    if (::name(buf.domain.at(inpt)) == op_name) {
      inpts.push_back(inpt);
      string pt_name = inpt + "_accum_in_0";
      auto reg_in_am = add_domain_suffix(am_mask, "_write");
      auto reg_in_sched= add_domain_suffix(in_sched_reg, "_write");
      accum_reg.port_bundles[op_name + "_write_0"].push_back(pt_name);
      accum_reg.add_in_pt(pt_name, ::domain(reg_in_am), reg_in_am, reg_in_sched);

      pt_name = inpt + "_accum_in_1";
      reg_in_am = add_domain_suffix(am, "_write_pe");
      reg_in_sched= add_domain_suffix(sched, "_write_pe");
      accum_reg.port_bundles[op_name + "_write_1"].push_back(pt_name);
      accum_reg.add_in_pt(pt_name, ::domain(reg_in_am), reg_in_am, reg_in_sched);
    }
  }

  for(string outpt: buf.get_out_ports()) {
    if (::name(buf.domain.at(outpt)) == op_name) {
      outpts.push_back(outpt);
      //string pt_name = outpt + "_accum_out_0";
      //auto reg_out_am = add_domain_suffix(am_mask, "_read");
      //auto reg_out_sched= add_domain_suffix(out_sched_reg, "_read");
      //accum_reg.port_bundles[op_name + "_read_0"].push_back(pt_name);
      //accum_reg.add_out_pt(pt_name, ::domain(reg_out_am), reg_out_am, reg_out_sched);

      auto pt_name = outpt + "_accum_out_1";
      auto reg_out_am = add_domain_suffix(am, "_read_pe");
      auto reg_out_sched= add_domain_suffix(sched, "_read_pe");
      accum_reg.port_bundles[op_name + "_read_1"].push_back(pt_name);
      accum_reg.add_out_pt(pt_name, ::domain(reg_out_am), reg_out_am, reg_out_sched);
    }
  }
  cout << accum_reg << endl;
  assert(inpts.size()==1);
  buf.replace_pt(pick(inpts), simplify(am_mask), simplify(out_sched_reg));
  assert(outpts.size()==1);
  buf.replace_pt(pick(outpts), simplify(am_mask), simplify(in_sched_reg));

  //Wire the datapath
  CoreIR::Instance* accum_reg_ins = accum_reg.generate_accum_reg_instance(options, def);
  generate_lake_tile_verilog(options, accum_reg_ins);
  string config_mode_ = accum_reg_ins->getMetaData()["mode"];

  //Wire the PE interface with accumulation register
  def->connect(accum_reg_ins->sel(memDatainPort(config_mode_, 1)), pt2wire.at(pick(inpts)));
  //pt2wire.at(pick(inpts)) = accum_reg_ins->sel(memDataoutPort(config_mode, 0));
  def->connect(accum_reg_ins->sel(memDataoutPort(config_mode_, 0)), pt2wire.at(pick(outpts)));
  pt2wire.at(pick(outpts)) = accum_reg_ins->sel(memDatainPort(config_mode_, 0));

  cout << "buffer after accumu reg insert: " << buf << endl;

}

//FIXME: this function is buggy
//double check if we can use wire after inserting accumulation register
//UBuffer port_reduction(CodegenOptions & options, CoreIR::ModuleDef* def, UBuffer & buf,
//        map<string, CoreIR::Wireable*> & pt2wire, UBufferImpl& impl, int bank_id) {
//    std::set<string> remove_pt;
//    std::set<size_t> remove_in_set, remove_out_set;
//    auto & inpt_broadcast_set = impl.bank_inpt2writers.at(bank_id);
//    auto & outpt_broadcast_set = impl.bank_outpt2readers.at(bank_id);
//    for (auto outpt : buf.get_out_ports()) {
//      auto reads = range(buf.access_map.at(outpt));
//      for (auto inpt : buf.get_in_ports()) {
//        auto writes = range(buf.access_map.at(inpt));
//        auto overlap = its(writes, reads);
//        //compute dd when write overlap with read
//        bool decouple = isl_map_is_injective(to_map(buf.access_map.at(inpt))) &&
//          isl_map_is_injective(to_map(buf.access_map.at(outpt)));
//        if (empty(overlap) || !decouple)
//            continue;
//        auto dd = buf.dependence_distance_min(inpt, outpt);
//        if (dd.has_value()) {
//          int dd_raw = dd.get_value();
//          if (dd_raw == 0) {
//              cout << "\tRemove port: " << inpt << endl;
//              cout << "\tRemove port: " << outpt << endl;
//            //Remove pt from ubuf
//            remove_pt.insert(inpt);
//            remove_pt.insert(outpt);
//
//            //remove pt from impl
//            for (size_t i = 0; i < inpt_broadcast_set.size(); i ++) {
//              if (inpt_broadcast_set.at(i).count(inpt)) {
//                remove_in_set.insert(i);
//              }
//            }
//            for (size_t i = 0; i < outpt_broadcast_set.size(); i ++) {
//              if (outpt_broadcast_set.at(i).count(outpt)) {
//                remove_out_set.insert(i);
//                for (string pt: outpt_broadcast_set.at(i)) {
//                  def->connect(pt2wire.at(inpt), pt2wire.at(pt));
//                }
//              }
//            }
//          }
//        }
//      }
//    }
//
//    for (size_t id: remove_in_set) {
//      inpt_broadcast_set.erase(inpt_broadcast_set.begin() + id);
//    }
//
//    for (size_t id: remove_out_set) {
//      outpt_broadcast_set.erase(outpt_broadcast_set.begin() + id);
//    }
//
//    return delete_ports(remove_pt, buf);
//}

//This is the new coreIR generation pass use the lowering information
//separate optimization from codegen
void UBuffer::generate_coreir_refactor(CodegenOptions& options,
        UBufferImpl& impl,
        CoreIR::ModuleDef* def,
        schedule_info& info, //TODO:remove this
        bool with_ctrl) {
  auto context = def->getContext();
  map<string, CoreIR::Wireable*> pt2wire;

  //Sequence of port is based on name of bundle
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

  //Go through the banks and generate connection and config
  for (auto it: impl.bank_rddom) {
    auto bank_id = it.first;
    auto target_buf_impl = impl.lowering_info.at(bank_id);


    insert_accumulation_register(options, def, target_buf_impl, pt2wire);
    CoreIR::Instance* buf = map_ubuffer_to_cgra(options, def, target_buf_impl);

    //Wire the stencil valid to flush of ubuffer module
    //if we can optmize for coarse grained pipeline scheduler
    cgpl_post_processing(options, def, buf, target_buf_impl);

    //add a flush for memory tile if have glb load latency
    host2glb_optimization(options, def, buf, target_buf_impl);

    //Wiring the port after generate verilog
    wire_ubuf_IO(options, def, pt2wire, buf, impl, info, bank_id, with_ctrl);

    //generate verilog collateral
    generate_lake_tile_verilog(options, buf);
  }

  //Generate the shift register connection
  generate_sreg_and_wire(options, impl, def, pt2wire);

  generate_fanin_connection(options, impl, def, pt2wire);

}

//generate/realize the rewrite structure inside ubuffer node
void UBuffer::generate_coreir(CodegenOptions& options,
        UBufferImpl& impl,
        CoreIR::ModuleDef* def,
        schedule_info& info, //TODO:remove this
        bool with_ctrl) {
  auto context = def->getContext();
  map<string, CoreIR::Wireable*> pt2wire;

  //Sequence of port is based on name of bundle
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

  //Go through the banks and generate connection and config
  for (auto it: impl.bank_rddom) {
    auto bank_id = it.first;
    UBuffer target_buf = generate_ubuffer(impl, info, bank_id);

    //This is used for tighten the cyclic banking space
    target_buf.tighten_iteration_domain();
    target_buf.tighten_address_space();
    target_buf.set_dim_id();

    cout << "\n\tUBuffer after address tighten" << target_buf << endl;

    //An optimization for coarse grained pipeline, save the iterator level
    //CoreIR::Instance* cgpl_ctrl;
    //bool decouple_ctrl = cgpl_ctrl_optimization(options, def, cgpl_ctrl, target_buf);

    //Determine the config mode
    string config_mode = determine_config_mode(options, target_buf);

    //If this is memory do double buffer optimization
    //rewrite the ubuffer IR and change the cgpl control
    isl_map* cgpl_schedule;
    bool decouple_ctrl = false;
    bool substract_glb_latency = false;
    cgpl_ctrl_optimization(options, target_buf, config_mode,
            cgpl_schedule, decouple_ctrl, substract_glb_latency);

    cout << "\n\tUBuffer after cgpl optimization" << target_buf << endl;

    insert_accumulation_register(options, def, target_buf, pt2wire, config_mode);
    target_buf.remove_redundant_dim();
    //target_buf = port_reduction(options, def, target_buf, pt2wire, impl, bank_id);

    //Generate the ubuffer module for CGRA
    //Lake/Pond coreir generation
    target_buf.simplify_floor_div_expr();
    CoreIR::Instance* buf = map_ubuffer_to_cgra(options, def, target_buf, config_mode);

    //Wire the stencil valid to flush of ubuffer module
    //if we can optmize for coarse grained pipeline scheduler
    cgpl_post_processing(options, def, buf, cgpl_schedule, decouple_ctrl);

    //add a flush for memory tile if have glb load latency
    host2glb_optimization(options, def, buf, substract_glb_latency);

    //Wiring the port after generate verilog
    wire_ubuf_IO(options, def, pt2wire, buf, impl, info, bank_id, with_ctrl);

    //generate verilog collateral
    generate_lake_tile_verilog(options, buf);
  }

  //Generate the shift register connection
  generate_sreg_and_wire(options, impl, def, pt2wire);

}


  CoreIR::Module* generate_coreir_select(CodegenOptions& options, CoreIR::Context* c, const string& outpt, UBuffer& buf) {
    int width = buf.port_widths;

    cout << "====== creating select for " << outpt << " on buffer " << buf.name << endl;

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

  void generate_banks(CodegenOptions& options, UBuffer& buf, CoreIR::ModuleDef* def) {

    //generate_platonic_ubuffer(options, buf);

    //return;

    int width = buf.port_widths;
    auto c = def->getContext();
    auto ns = c->getNamespace("global");

    int readers = buf.get_out_ports().size();
    int writers = buf.get_in_ports().size();

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
        int addr_width = ceil(log2(capacity));
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
          //for (auto e : hwinfo.op_compute_unit_latencies) {
            //cout << tab(1) << e.first << " -> " << e.second << endl;
          //}
          //assert(false);
          //int op_latency = map_find(writer_name, hwinfo.op_compute_unit_latencies);
          int op_latency = hwinfo.compute_latency(writer_name);
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

  CoreIR::Module* generate_coreir_without_ctrl(CodegenOptions& options, CoreIR::Context* context, UBuffer& buf, UBufferImpl & impl, schedule_info& hwinfo) {
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
      buf.generate_coreir_without_ctrl(options, impl, def, hwinfo);
    }

    ub->setDef(def);
    return ub;
  }

#endif


bool UBuffer::overlap_schedule(std::set<string> & ptset) {
    for (string lpt: ptset) {
        for (string rpt: ptset) {
            if (lpt < rpt) {
                auto overlap =
                    dot(schedule.at(lpt), inv(schedule.at(rpt)));
                if (!empty(overlap))
                    return true;
            }
        }
    }
    return false;
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
      //auto write_op = prg.find_op(writer_name);
      //cout << "writer op    : " << writer_name << endl;
      //for (auto e : hwinfo.op_compute_unit_latencies) {
        //cout << tab(1) << e.first << " -> " << e.second << endl;
      //}
      //assert(false);
      //int op_latency = map_find(writer_name, hwinfo.op_compute_unit_latencies);
      //int op_latency = map_find(writer_name, hwinfo.op_compute_unit_latencies);
      //int op_latency = hwinfo.compute_latency(write_op);
      //assert(op_latency == 0);

      int op_latency = hwinfo.compute_latency(writer_name);
      //map_find(writer_name, hwinfo.op_compute_unit_latencies);
      dd = dd - op_latency;

      delay_maps[inpt].push_back({outpt, dd});

    } else {
      cout << tab(1) << "No overlap" << endl;
      assert(false);
    }
  }
  return built_dm;
}

//This is an optimization pass
//take both access map and schedule and merge the dimension
pair<isl_map*, isl_map*> merge_dom_dim(isl_map* schedule, isl_map* acc_map) {
    auto a_map = cpy(acc_map);
    auto sched = cpy(schedule);
    int merge_cnt = 0;

    //Get all mergeable dim in order from inner to outer
    vector<pair<int, int>> all_pair_a =
        get_all_domain_merge_dims(a_map);
    vector<pair<int, int>> all_pair_s =
        get_all_domain_merge_dims(sched);

    cout << "\taccess map merge pair: " << all_pair_a << endl;
    cout << "\tschedule merge pair: " << all_pair_s << endl;
    while(!empty(all_pair_a) && !empty(all_pair_s)) {
        auto pa = all_pair_a.front();
        auto ps = all_pair_s.front();
        cout << "merge pair: " << pa << ", " << ps << endl;
        if (pa.first == ps.first) {
            unordered_set<int> tmp({pa.first, pa.second});
            cout << "access map: " << str(a_map) << endl;
            auto reduce_map = linear_domain_map_with_index(domain(a_map), tmp);
            a_map = to_map(dot_domain(to_umap(a_map), to_umap(reduce_map)));
            sched = to_map(dot_domain(to_umap(sched), to_umap(reduce_map)));
            all_pair_a.erase(all_pair_a.begin());
            all_pair_s.erase(all_pair_s.begin());
        } else if(pa.first > ps.first) {
            all_pair_a.erase(all_pair_a.begin());
        } else {
            all_pair_s.erase(all_pair_s.begin());
        }
    }
    return make_pair(sched, a_map);
}

string get_buf_type(string buf_name) {
    if (contains(buf_name, "agg")) {
        return "agg";
    } else if (contains(buf_name, "tb")) {
        return "tb";
    } else if (contains(buf_name, "sram")) {
        return "sram";
    } else {
        cout << "Sub buffer name not recognized!" << endl;
        assert(false);
    }
}

map<string, UBuffer> decouple_multi_tile_ubuffer(CodegenOptions& options, map<string, UBuffer> & vec_buf) {
  map<string, UBuffer> ubuf_candidates;
  for (auto it: vec_buf) {
    maybe<vector<int>> project_id;
    if (get_buf_type(it.first) == "tb") {
      project_id = get_project_dim(it.second, true);
    } else if (get_buf_type(it.first) == "agg") {
      project_id = get_project_dim(it.second, false);
    }
    if (project_id.has_value()) {
      cout << "Subbuf type: " << get_buf_type(it.first) << endl;
      cout << "Project ID: " << project_id.get_value() << endl;
      auto parition_factors = project_id.get_value();
      auto buf = it.second;
      vector<int> cyclic_partition_factor;
      vector<int> min_addr, max_addr;
      min_addr = min_offsets_by_dimension(buf);
      max_addr = max_offsets_by_dimension(buf);
      for (int d = 0; d < buf.logical_dimension(); d ++) {
          if (elem(d, parition_factors)) {
            cyclic_partition_factor.push_back(max_addr.at(d) - min_addr.at(d) + 1);
          } else {
            cyclic_partition_factor.push_back(1);
          }
      }
      cout << "number of banks = " << card(cyclic_partition_factor) << endl;
      banking_strategy b_s = {"cyclic", cyclic_partition_factor};
      auto range2bank = bank_map(buf.ctx, buf.buf_range_name(), b_s);
      cout << "range2bank: " << str(range2bank) << endl;
      //get a map from data range to bankID
      vector<UBuffer> decoupled_buffers = buf.decouple_ubuffer_from_bank_map(range2bank);
      //assert(false);
      for (auto buf: decoupled_buffers) {
        ubuf_candidates.insert({buf.name, buf});
      }
    } else {
      ubuf_candidates.insert(it);
    }
  }
  return ubuf_candidates;
}

vector<UBuffer> UBuffer::decouple_ubuffer_from_bank_map(isl_map* bank_map) {
  vector<UBuffer> ret;
  auto range2bank = its(to_umap(bank_map), global_range());
  cout << "\tglobal range of bank: " << str(range2bank) << endl;

  auto bankID_list = get_points(range(bank_map));
  int ubuf_cnt = 0;
  for (auto bankID : bankID_list) {
    int usuffix = 0;
    auto id_set = to_set(bankID);
    auto this_bank_rddom = range(coalesce(its(inv(range2bank), id_set)));
    cout << "\t" << str(id_set) << " this bank rddom: " << str(this_bank_rddom) << endl;

    //pack the new bank information into ubuffer
    UBuffer buf;
    string bname = this->name + "_" + str(ubuf_cnt);
    buf.name = bname;
    buf.ctx = ctx;
    buf.port_widths = port_widths;
    for (auto inpt: get_in_ports()) {
      auto acc_map = to_map(access_map.at(inpt));
      cout << "\twrite map: " << str(acc_map) << endl;
      acc_map = coalesce(its_range(acc_map, to_set(this_bank_rddom)));
      //acc_map = set_range_name(acc_map, bname);
      cout << "\twrite map after decouple: " << str(acc_map) << endl;
      auto dom = ::domain(acc_map);
      if (empty(dom))
        continue;

      string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);
      buf.port_bundles[::name(dom) + "_write"].push_back(pt_name);
      buf.add_in_pt(pt_name, dom, acc_map, its(schedule.at(inpt), dom));
      usuffix ++;
    }

    //Check if we could merge them into same bundle
    for (auto outpt: get_out_ports()) {
      auto acc_map = to_map(access_map.at(outpt));
      cout << "\tread map: " << str(acc_map) << endl;
      acc_map = coalesce(its_range(acc_map, to_set(this_bank_rddom)));
      //acc_map = set_range_name(acc_map, bname);
      cout << "\tread map after decouple: " << str(acc_map) << endl;
      auto dom = ::domain(acc_map);
      if (empty(dom))
        continue;

      string pt_name = bname + "_" + ::name(dom) + "_" + to_string(usuffix);
      //string pt_name = outpt;
      buf.port_bundles[::name(dom) + "_read"].push_back(pt_name);
      buf.add_out_pt(pt_name, dom, acc_map, its(schedule.at(outpt), dom));
      usuffix ++;
    }
    cout << "decouple buffer no." << ubuf_cnt << endl << buf;
    ubuf_cnt ++;
    ret.push_back(buf);
  }
  return ret;
}

//This the smt stream generation pass without coreIR generation
void UBuffer::generate_smt_stream(CodegenOptions& options) {

  //sort the bank by delay first
  auto bank_list = get_banks_and_sort();

  //generate all the ubuffer for internal vectorization
  auto rewrite_buffer = generate_ubuffer(options);

  for (auto bk : bank_list) {
    //assert(false);
    std::set<string> inpts = get_bank_inputs(bk.name);
    std::set<string> outpts = get_bank_outputs(bk.name);
    auto buf_inpts = get_in_ports();
    cout << "Bank:" << bk.name << " has max_delay: " << bk.maxdelay << endl;
    if (bk.maxdelay == 0) {
      continue;
    } else if (bk.maxdelay <= options.merge_threshold) {
      continue;
    } else {
      string ub_ins_name = "ub_"+bk.name;

      map<string, UBuffer> vec_buf = {{bk.name + "_ubuf", rewrite_buffer.at(bk.name + "_ubuf")}};

      //vectorization pass for lake tile
      if (options.rtl_options.target_tile == TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN) {
        buffer_vectorization(options.iis, {bk.name + "_ubuf"},
                options.mem_hierarchy.at("mem").fetch_width,
                vec_buf);
                //rewrite_buffer);
        //config_file = generate_ubuf_args(options, rewrite_buffer);
      }
      //Generate SMT stream if needed
      if (options.emit_smt_stream) {
        //TODO: merge this pass into vectorization
        //TODO: reuse this pass in chaining

        vec_buf = decouple_multi_tile_ubuffer(options, vec_buf);
        generate_lake_stream(options, vec_buf, global_schedule_from_buffers(vec_buf));
      }
    }
  }
}

int UBuffer::get_vectorized_dim(int fetch_width) {
  vector<int> extent_dim =  extents_by_dimension(*this);
  cout << "Ext by dim: " << extent_dim << endl;
  for (auto it = extent_dim.rbegin(); it != extent_dim.rend(); it++) {
    if (*it > fetch_width - 1)
        return extent_dim.rend() - it - 1;
  }
  return -1;
  //TODO: maybe need dimension fuse in the future
  cout << "Could not find vectorization dimension" << endl;
  assert(false);
}

string get_micro_buf_name(string buf_name) {
    return split_at(buf_name, "_").back();
}

string get_ctrl_name(string buf_name) {
    //Controller's name is the second from last
    vector<string> substr =
        split_at(buf_name, "_");
    return *(substr.end() - 2) + "_" + *(substr.end() - 1);
}

void generate_access_cnt(CodegenOptions& options,
        string ub_ins_name,
        map<string, UBuffer> & rewrite_buffer,
        mem_access_cnt& acc_cnt) {
    map<string, int> ubuf_rd, ubuf_wr;
    for (auto it: rewrite_buffer) {
        string buf_name = it.first;
        //string micro_buf_name = split_at(buf_name, "_").back();
        string micro_buf_name = get_micro_buf_name(buf_name);
        auto buf_component = it.second;
        int rd_cnts = buf_component.global_read_count();
        int wr_cnts = buf_component.global_write_count();

        cout << "\t\tSub Buffer: " << buf_name << endl;
        cout << "\t\tRead Count: " << rd_cnts<< endl;
        cout << "\t\tWriteCount: " << wr_cnts<< endl;

        if (ubuf_rd.count(micro_buf_name)) {
            ubuf_rd.at(micro_buf_name) += rd_cnts;
        } else {
            ubuf_rd[micro_buf_name] = rd_cnts;
        }

        if (ubuf_wr.count(micro_buf_name)) {
            ubuf_wr.at(micro_buf_name) += wr_cnts;
        } else {
            ubuf_wr[micro_buf_name] = wr_cnts;
        }
    }
    acc_cnt.read_cnt.insert(make_pair(ub_ins_name, ubuf_rd));
    acc_cnt.write_cnt.insert(make_pair(ub_ins_name, ubuf_wr));
}

void UBuffer::collect_memory_cnt(CodegenOptions& options, mem_access_cnt& mem_access) {

  //sort the bank by delay first
  auto bank_list = get_banks_and_sort();

  //generate all the ubuffer for internal vectorization
  auto rewrite_buffer = generate_ubuffer(options);

  for (auto bk : bank_list) {
    //assert(false);
    std::set<string> inpts = get_bank_inputs(bk.name);
    std::set<string> outpts = get_bank_outputs(bk.name);
    auto buf_inpts = get_in_ports();
    cout << "Bank:" << bk.name << " has max_delay: " << bk.maxdelay << endl;
    if (bk.maxdelay == 0) {
      continue;
    } else if (bk.maxdelay <= options.merge_threshold) {
      continue;
    } else {
      string ub_ins_name = "ub_"+bk.name;

      map<string, UBuffer> vec_buf = {{bk.name + "_ubuf", rewrite_buffer.at(bk.name + "_ubuf")}};

      //vectorization pass for lake tile
      if (options.rtl_options.target_tile == TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN) {
        buffer_vectorization(options.iis, {bk.name + "_ubuf"},
                options.mem_hierarchy.at("mem").fetch_width,
                vec_buf);
                //rewrite_buffer);
        generate_access_cnt(options, ub_ins_name+"_ubuf", vec_buf, mem_access);
      }
    }
  }
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
  //emit_lake_address_stream2file(options, buffers_opt, dir);
  emit_lake_address_stream2file_new(options, buffers_opt, dir);
}

pair<int, int> get_stream_vector_size(CodegenOptions &options, string buf_name) {
    auto mem_tile_collateral = options.mem_hierarchy.at("mem");
    if (contains(buf_name, "agg")) {
        int in_width = mem_tile_collateral.in_port_width.at("agg")
            * mem_tile_collateral.bank_num.at("agg");
        int out_width = mem_tile_collateral.out_port_width.at("agg");
        return {in_width, out_width};
    } else if (contains(buf_name, "sram")) {
        int in_width = mem_tile_collateral.in_port_width.at("sram");
        int out_width = mem_tile_collateral.out_port_width.at("sram");
        return {in_width, out_width};
    } else if (contains(buf_name, "tb")) {
        int in_width = mem_tile_collateral.in_port_width.at("tb");
        int out_width = mem_tile_collateral.out_port_width.at("tb")
            * mem_tile_collateral.bank_num.at("tb");
        return {in_width, out_width};
    } else {
        cout << "Buffer name is not recognized!" << endl;
        assert(false);
    }
}


map<string, vector<string>> classify_buffers(map<string, UBuffer> buffers_opt) {
  map<string, vector<string>> ret;
  for(auto it: buffers_opt) {
    string tp = get_buf_type(it.first);
    map_insert(ret, tp, it.first);
  }
  return ret;
}


void emit_lake_address_stream2file(CodegenOptions &options,
        map<string, UBuffer> buffers_opt, string dir) {
  map<string, pair<lakeStream, lakeStream> > top_stream;
  for (auto it: buffers_opt) {
    string buf_name = it.first;
    cout << "generate SMT stream for buffer: " << buf_name << endl;
    UBuffer buf = it.second;
    if (buf.get_in_ports().size() == 0 || buf.get_out_ports().size() == 0) {
      continue;
    }
    vector<int> sram_read = buf.read_cycle;
    vector<int> sram_write = buf.write_cycle;
    auto read_addr = buf.read_addr;
    auto write_addr = buf.write_addr;
    auto IO_width = get_stream_vector_size(options, buf_name);
    lakeStream stream_data = emit_top_address_stream(dir + "/" + buf_name , sram_read, sram_write, read_addr, write_addr, IO_width.first, IO_width.second);
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

string toBracketList(const vector<vector<int>> & data) {
  if (data.size() == 1) {
    return sep_list(pick(data), "[", "]", " ");
  } else {
    vector<string> in;
    for (auto bk_data : data) {
      in.push_back(sep_list(bk_data, "[", "]", " "));
    }
    return sep_list(in, "[", "]", " ");
  }
}

vector<StreamData> emit_top_address_stream(
        CodegenOptions& options, string subbuf, vector<UBuffer> & buffers) {
  auto lake_info = options.mem_hierarchy.at("mem");
  int input_width = lake_info.in_port_width.at(subbuf);
  int output_width = lake_info.out_port_width.at(subbuf);
  int pt_num = lake_info.bank_num.at(subbuf);
  //StreamData tmp(input_width, output_width, pt_num);

  vector<StreamData> ret;

  vector<int> read_cycle;
  vector<int> write_cycle;
  vector<vector<int> > read_addr;
  vector<vector<int> > write_addr;

  int cycle = 0;
  //create a vector of rd/wr iter for different buffer
  vector<int> rd_itr_vec = vector<int>(pt_num, 0);
  vector<int> wr_itr_vec = vector<int>(pt_num, 0);
  //out << "data_in, valid_in, data_out, valid_out" << endl;

  //out address has memory
  auto addr_out = vector<vector<int>>(pt_num, vector<int>(output_width, 0));

  bool finished;
  while (true) {
    finished = true;
    StreamData tmp(input_width, output_width, pt_num);
    for (int buf_cnt = 0; buf_cnt < buffers.size(); buf_cnt++) {
      int& rd_itr = rd_itr_vec.at(buf_cnt);
      int& wr_itr = wr_itr_vec.at(buf_cnt);
      auto read_cycle = buffers.at(buf_cnt).read_cycle;
      auto write_cycle = buffers.at(buf_cnt).write_cycle;
      auto read_addr = buffers.at(buf_cnt).read_addr;
      auto write_addr = buffers.at(buf_cnt).write_addr;

      auto addr_in = vector<vector<int>>(pt_num, vector<int>(input_width, 0));
      if (rd_itr < read_cycle.size()) {
        if (read_cycle.at(rd_itr) == cycle) {
          tmp.out_valid.at(buf_cnt) = true;
          for (size_t i = 0; i < read_addr.at(rd_itr).size(); i ++)
            addr_out.at(buf_cnt).at(i) = read_addr.at(rd_itr).at(i);

          //cout << cycle << tab(1) << "rd" << tab(1) << addr_out << endl;
          //out << "rd@" << cycle << tab(1) << ",data=" <<sep_list(addr_out, "[", "]", " ") << endl;
          rd_itr ++;
        }
      }
      if (wr_itr < write_cycle.size()) {
        if (write_cycle.at(wr_itr) == cycle) {
          tmp.in_valid.at(buf_cnt) = true;
          for (size_t i = 0; i < write_addr.at(wr_itr).size(); i ++)
            tmp.in_data.at(buf_cnt).at(i) = write_addr.at(wr_itr).at(i);
          //cout << cycle << tab(1) << "wr" << tab(1) << addr_in << endl;
          //out << "wr@" << cycle << tab(1) << ",data="<< sep_list(addr_in, "[", "]", " ") << endl;
          //out << cycle << tab(1) << "wr"  << endl;
          wr_itr ++;
        }
      }
      finished &= (wr_itr == write_cycle.size());
      finished &= (rd_itr == read_cycle.size());

    }
    tmp.out_data = addr_out;
    ret.push_back(tmp);

    cycle ++;
    if (finished)
        break;
  }
  return ret;
}

lakeStream emit_top_address_stream(string fname,
        vector<int> read_cycle, vector<int> write_cycle,
        vector<vector<int> > read_addr, vector<vector<int> > write_addr,
        int input_width, int output_width) {
  ofstream out(fname+"_SMT.csv");
  cout << "fname: " << fname << endl;

  lakeStream ret;

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

void emit_lake_streamdata_to_file(const vector<StreamData> & buf_stream, const string& fname) {
  ofstream out(fname+"_SMT.csv");
  cout << "fname: " << fname << endl;
  out << "data_in, valid_in, data_out, valid_out" << endl;
  for (auto cycle_data: buf_stream) {
    cycle_data.emit_csv(out);
  }
  out.close();
}

void emit_lake_address_stream2file_new(CodegenOptions &options,
    map<string, UBuffer> buffers_opt, string dir) {
  map<string, vector<string> > type2ubuf = classify_buffers(buffers_opt);
  for (auto it: type2ubuf) {
    string tp_name = it.first;
    string buf_name = take_until_str(pick(it.second), "_ubuf");
    vector<UBuffer> buffers;
    for (auto name: it.second) {
      buffers.push_back(buffers_opt.at(name));
    }
    cout << "generate SMT stream for buffer: " << buf_name << endl;
    cout << "subbuf name: " << tp_name << endl;

    //TB need separate buffer into mutiple ubuffer
    //if (tp_name == "tb")
    //    continue;

    auto stream_data = emit_top_address_stream(options, tp_name, buffers);

    string buf_dir = dir+"/"+buf_name + "/";
    cmd("mkdir -p " + buf_dir);
    string fname =  buf_dir + tp_name;
    emit_lake_streamdata_to_file(stream_data, fname);
  }
}

void generate_code_prefix(CodegenOptions& options,
    std::ostream& out,
    UBuffer& buf) {

  //banking and merge pass
  buf.generate_banks_and_merge(options);

  for (auto b : buf.get_banks()) {
    generate_bank(options, out, b);
  }

  out << "struct " << buf.name << "_cache {" << endl;
  out << tab(1) << "// Reader addrs..." << endl;
  for (auto outpt : buf.get_out_ports()) {
    out << tab(2) << "// " << str(buf.access_map.at(outpt)) << endl;
  }
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
    if (!(buf.bank_list.size() == 1)) {
      cout << buf << endl;
    }
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
        all_args.push_back("HWStream<" + buf.bundle_type_string(b.first)  + " >& " + b.first);
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

  for (auto outpt : buf.get_out_ports()) {
    generate_select(options, out, outpt, buf);
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

void generate_hls_code_unit_test(std::ostream& out, UBuffer& buf) {
  CodegenOptions options;
  options.internal = true;
  //for compute bank info
  options.rtl_options.use_external_controllers = false;
  options.inner_bank_offset_mode = INNER_BANK_OFFSET_MULTILINEAR;

  generate_hls_code(options, out, buf);
}

//Rename to avoid ambiguous
void generate_hls_header(const UBuffer& buf) {
  //cout << "Header file generation..." << endl;
  ofstream of(buf.name + ".h");
  of << "#pragma once\n\n" << endl;
  of << "#include \"hw_classes.h\"" << endl << endl;
  of << "void " << buf.name << "(";
  vector<string> bd_args;
  for (auto pt : buf.get_out_bundles()) {
      bd_args.push_back(buf.bundle_stream(pt));
  }
  for (auto pt : buf.get_in_bundles()) {
      bd_args.push_back(buf.bundle_stream(pt));
  }
  of << sep_list(bd_args, "", "", ", ");
  of << ");" << endl;

}

/*op centeric codegen, basically a pass through from a buffer to another
 * Special case is that the buffer could be a bundary.
 * return the variable
 * */
vector<string> generate_passthrough_op(
    ostream& conv_out,
    string op_name,
    maybe<UBuffer> consumer_buffer,
    maybe<UBuffer> producer_buffer,
    //pair<string, string> consumer_buffer_args,
    //pair<string, string> producer_buffer_args,
    isl_set* domain) {

  cout << "Generating pass throughfor: " << op_name << endl;

  vector<string> buf_srcs;
  string producer_var, consumer_var;
  //push buffers' name into arg list
  if (!consumer_buffer.has_value()) {
    //output boundary
    assert(producer_buffer.has_value());
    auto prod_buf = producer_buffer.get_value();
    string out_stream_name = pick(prod_buf.get_out_bundles());
    producer_var = prod_buf.name;
    consumer_var = out_stream_name;
    buf_srcs.push_back(prod_buf.name + "_cache& " + prod_buf.name);
    buf_srcs.push_back(prod_buf.bundle_stream(out_stream_name));
  } else if (!producer_buffer.has_value()) {
    //input boundary
    assert(consumer_buffer.has_value());
    auto cons_buf = consumer_buffer.get_value();
    string in_stream_name = pick(cons_buf.get_in_bundles());
    producer_var = in_stream_name;
    consumer_var = cons_buf.name;
    buf_srcs.push_back(cons_buf.bundle_stream(in_stream_name));
    buf_srcs.push_back(cons_buf.name + "_cache& " + cons_buf.name);
  } else {
    //between two buffer
    assert(producer_buffer.has_value());
    assert(consumer_buffer.has_value());
    auto prod_buf = producer_buffer.get_value();
    auto cons_buf = consumer_buffer.get_value();
    producer_var = prod_buf.name;
    consumer_var = cons_buf.name;
    buf_srcs.push_back(prod_buf.name + "_cache& " + prod_buf.name);
    buf_srcs.push_back(cons_buf.name + "_cache& " + cons_buf.name);
  }

  //buf_srcs.push_back(producer_buffer_args.first);
  //buf_srcs.push_back(consumer_buffer_args.first);
  //string producer_buffer = producer_buffer_args.second;
  //string consumer_buffer = consumer_buffer_args.second;

  cout << "Got srcs" << endl;

  auto s = get_space(domain);
  vector<string> dim_args;
  for (auto a : space_var_args(s)) {
    dim_args.push_back(a);
  }
  //dynamic address
  dim_args.push_back("0/*Dummy dynamic address*/");

  for (auto a : space_var_decls(s)) {
    buf_srcs.push_back(a);
  }

  cout << "Got iteration variables" << endl;
  conv_out << "inline void " << op_name << sep_list(buf_srcs, "(", ")", ", ") << " {" << endl;
  /*
  vector<pair<string, vector< pair< string, string > > > > in_buffers;
  std::set<string> distinct;
  for (auto con : op->consume_locs_pair) {
    if (!elem(con.first, distinct)) {
      in_buffers.push_back(con);
      distinct.insert(con.first);
    }
  }

  cout << "got in_buffers" << endl;
  string res;
  vector<string> buf_args;

  conv_out << tab(1) << "// Dynamic address computation" << endl;
  for (auto da : op->dynamic_load_addresses) {
    conv_out << tab(1) << "// " << da.table << "[" << da.table_offset << "]" << endl;
  }
  for (auto da : op->dynamic_store_addresses) {
    conv_out << tab(1) << "// " << da.table << "[" << da.table_offset << "]" << endl;
  }
  conv_out << endl;
  */
  //map<string, string> buf_vals;
  //TODO: maybe there are multiple producer
  //for (auto ib : in_buffers) {
  //string in_buffer = producer_buffer;
  conv_out << "\t// Consume: " << producer_var << endl;
  //string value_name = op->consumed_value_name(ib);
  //buf_vals[in_buffer] = value_name;
  //conv_out << "\tauto " << value_name << " = ";
  conv_out << "\tauto tmp = ";

  //string bundle_name = op_name + "_read";

  //if (prg.is_boundary(in_buffer)) {
  if (!producer_buffer.has_value()) {
    conv_out << consumer_buffer.get_value().get_bundle_from_op(op_name) << ".read();" << endl;
  } else {
    vector<string> source_delays{producer_var};
    cout << "op = " << op_name << endl;
    conv_out << producer_var << "_" << producer_buffer.get_value().get_bundle_from_op(op_name) << "_bundle_read(" <<
        comma_list(source_delays) << "/* source_delay */, " << comma_list(dim_args) << ");" << endl;

    conv_out << endl;
    open_debug_scope(conv_out);

    close_debug_scope(conv_out);
    conv_out << endl;

  }

  cout << "finding out buffers" << endl;
  //string out_buffer = consumer_buffer;

  conv_out << "\t// Produce: " << consumer_var<< endl;

  //bundle_name = op->name + "_write";

  cout << "Checking if program is a boundary" << endl;

  if (!consumer_buffer.has_value()) {
    conv_out << "\t" << consumer_var << ".write(" << "tmp"<< ");" << endl;
  } else {
    vector<string> arg_names{"tmp", consumer_var};
    concat(arg_names, dim_args);
    conv_out << "\t" << consumer_var<< "_" << pick(consumer_buffer.get_value().get_in_bundles()) << "_bundle_write(" <<
      "/* arg names */" + comma_list(arg_names) << ");" << endl;
  }

  conv_out << endl;
  open_debug_scope(conv_out);


  close_debug_scope(conv_out);
  conv_out << endl;
  conv_out << "}" << endl << endl;

  return {producer_var+"_ubuf", consumer_var+"_ubuf"};

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

  os << "#include \""<< buf.name <<".h\"" << endl << endl;
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
      regex re(b.first + "\\((.*)\\);");
      string inpt = pick(b.second);
      code_string = regex_replace(code_string, re, buf.name + "_" + b.first + "_bundle_write(" + b.first + ", " + delay_list + ", $1, 0"+");");
    }
  }
  for (auto b : buf.port_bundles) {
    if (buf.is_out_pt(*(begin(b.second)))) {
      regex re0(b.first + "\\((.*)\\);");
      code_string = regex_replace(code_string, re0, b.first + ".write(" + buf.name + "_" + b.first + "_bundle_read(" + delay_list + ", $1, 0" + "));");
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
    out << "\t" + buf.name + "_cache " + inpt + "_delay;\n\n";
  }
  out << code_string << endl;
  out << "}" << endl;


  generate_hls_header(buf);
  generate_vivado_tcl(buf);
}

void generate_hls_code_unit_test(map<string, UBuffer>& buffers, string buffer_name) {

  cout << "Code generation..." << endl;
  ofstream out(buffer_name + "_vec.cpp");
  out << "#include \""<< buffer_name + "_vec.h\"" << endl << endl;
  for (auto it : buffers) {
      auto buf = it.second;

    generate_hls_code_unit_test(out, buf);
    generate_hls_header(buf);

  }

  // Generate driver function for these vectorized buffer.
  //isl_union_map* res = its(buf.global_schedule(), buf.global_domain());
  auto hardware_schedule = global_schedule_from_buffers(buffers);
  auto global_domain = global_domain_from_buffers(buffers);
  map<string, isl_set*> op_map = get_sets_in_map(global_domain);

  string code_string = codegen_c(hardware_schedule);

  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");

  //op to buffer write and read, helper struct for codegen
  //map<string, pair<string, string> > op2write_args, op2read_args;
  map<string, maybe<UBuffer> > op2write_buf, op2read_buf;
  vector<string> func_in_args, func_out_args;

  for (auto it: buffers) {
    auto buf = it.second;

    for (auto it: buf.port_bundles) {
      string bd= it.first;
      if (buf.isIn.at(pick(it.second))) {
        //write op
        string wtop = buf.get_bundle_op(bd);
        if (contains(wtop, "in2agg")) {
          op2read_buf[wtop] = maybe<UBuffer>();
          string in_stream_name = pick(buf.get_in_bundles());
          func_in_args.push_back (buf.bundle_stream(in_stream_name));
        }
        op2write_buf[wtop] = buf;
      } else {
        //read op
        string rdop = buf.get_bundle_op(bd);
        if (contains(rdop, "tb2out")) {
          op2write_buf[rdop] = maybe<UBuffer>();
          string out_stream_name = pick(buf.get_out_bundles());
          func_out_args.push_back(buf.bundle_stream(out_stream_name));
        }
        op2read_buf[rdop] = buf;
      }
    }
    //string rdop = pick(buf.get_read_ops());
    //string wtop = pick(buf.get_write_ops());

    //if (contains(wtop, "in2agg")) {
    //    op2read_buf[wtop] = maybe<UBuffer>();
    //    string in_stream_name = pick(buf.get_in_bundles());
    //    func_in_args.push_back (buf.bundle_stream(in_stream_name));
    //}
    //op2write_buf[wtop] = buf;

    //if (contains(rdop, "tb2out")) {
    //    op2write_buf[rdop] = maybe<UBuffer>();
    //    string out_stream_name = pick(buf.get_out_bundles());
    //    func_out_args.push_back(buf.bundle_stream(out_stream_name));
    //}
    //op2read_buf[rdop] = buf;

    //if (contains(wtop, "in2agg")) {
    //  string in_stream_name = pick(buf.get_in_bundles());
    //  func_in_arg = buf.bundle_stream(in_stream_name);
    //  op2read_args[wtop] = {func_in_arg, in_stream_name};
    //}
    //op2write_args[wtop] = {buf.name + "_cache& "+buf.name, buf.name};

    //if (contains(rdop, "tb2out")) {
    //  string out_stream_name = pick(buf.get_out_bundles());
    //  func_out_arg = buf.bundle_stream(out_stream_name);
    //  op2write_args[rdop] = {func_out_arg, out_stream_name};
    //}
    //op2read_args[rdop] = {buf.name + "_cache& "+buf.name, buf.name};
  }
  //for (auto it: op2read_args) {
  //    cout << it.first << ": " << it.second.first << ", " << it.second.second << endl;;
  //}
  //for (auto it: op2write_args) {
  //    cout << it.first << ": " << it.second.first << ", " << it.second.second << endl;;
  //}

  //Generate the wrapper
  for (auto it : op2read_buf) {
    string op = it.first;
    auto args_list = generate_passthrough_op(
      out, op, op2write_buf.at(op), op2read_buf.at(op), op_map.at(op));

      //string write_arg_name = op2write_args.at(op).second + "_ubuf";
      //string read_arg_name = op2read_args.at(op).second + "_ubuf";
      string args = sep_list(args_list, "", "", ", ");
      regex re0(op + "\\((.*)\\);");
      code_string = regex_replace(code_string, re0, op + "(" + args + ", $1" + ");");

  }

  std::stringstream ss_func;
  ss_func << "void " << buffer_name<< "_vec(";
  vector<string> bd_args;
  for (auto arg: func_out_args) {
    bd_args.push_back(arg);
  }
  for (auto arg: func_in_args) {
    bd_args.push_back(arg);
  }
  for_each(bd_args.begin(), bd_args.end(), [](string & arg) {arg += "_ubuf";});
  //ss_func << sep_list({func_out_arg + "_ubuf", func_in_arg + "_ubuf"}, "", "", ", ");
  ss_func << sep_list(bd_args, "", "", ", ");
  ss_func << ")";
  out << ss_func.str() << " {" << endl;

  for (auto it: buffers){
    out << "\t" + it.first + "_cache " + it.first + "_ubuf;\n\n";
  }
  out << code_string << endl;
  out << "}" << endl;
  out.close();

  ofstream of(buffer_name+ "_vec.h");
  of << "#pragma once\n\n" << endl;
  of << "#include \"hw_classes.h\"" << endl << endl;
  of << ss_func.str() << ";" << endl;
  of.close();
}

void generate_hls_code_unit_test(UBuffer& buf) {

  //cout << "Code generation..." << endl;
  ofstream os(buf.name + ".cpp");
  std::ostream& out = os;

  os << "#include \""<< buf.name <<".h\"" << endl << endl;
  generate_hls_code_unit_test(os, buf);

  string in_stream_name = pick(buf.get_in_bundles());
  generate_passthrough_op(
    os, pick(buf.get_write_ops()),
    buf, maybe<UBuffer>(),
    to_set(buf.global_write_domain()));

  string out_stream_name = pick(buf.get_out_bundles());
  cout << out_stream_name << endl;
  generate_passthrough_op(
    os, pick(buf.get_read_ops()),
    maybe<UBuffer>(), buf,
    to_set(buf.global_read_domain()));

  // Generate driver function for this buffer.
  isl_union_map* res = its(buf.global_schedule(), buf.global_domain());

  string code_string = codegen_c(res);

  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");
  //string delay_list =
  //  buf.port_bundles.at(pick(buf.get_in_bundles())).at(0) + "_delay";

  for (auto op: buf.get_ops()) {
    string args;
    if (elem(op, buf.get_write_ops())) {
      args = sep_list({in_stream_name, buf.name + "_ubuf"},"", "", ", ");
    } else {
      args = sep_list({buf.name + "_ubuf", out_stream_name},"", "", ", ");
    }
    regex re0(op + "\\((.*)\\);");
    code_string = regex_replace(code_string, re0, op + "(" + args + ", $1" + ");");

  }

  out << "void " << buf.name << "(";
  vector<string> bd_args;

  for (auto pt : buf.get_out_bundles()) {
    bd_args.push_back(buf.bundle_stream(pt));
  }

  for (auto pt : buf.get_in_bundles()) {
    bd_args.push_back(buf.bundle_stream(pt));
  }
  out << sep_list(bd_args, "", "", ", ");
  out << ") {" << endl;
  out << "\t" + buf.name + "_cache " + buf.name + "_ubuf;\n\n";
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
    //auto beforeAcc = lex_gt(schedule.at(outpt),
    //schedule.at(inpt));
    auto beforeAcc = lex_gt(schedule_guard(schedule.at(outpt), true),
        schedule_guard(schedule.at(inpt), false));
    //cout << "\tBefore acc: " << str(beforeAcc) << endl;
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
    //cout << "\tafter look at pt:" << inpt << "src map: " << str(src_map) << endl;
    release(beforeAcc);
  }
  assert(src_map != nullptr);

  //cout << "\tsrc map done: " << str(src_map) << endl;
  auto sched = global_schedule_with_guard();
  //auto sched = global_schedule();
  auto after = lex_gt(sched, sched);
  //cout << "\tafter: " << str(after) << endl;

  src_map = its(src_map, after);
  cout << "\tsrc map after its after: " << str(src_map) << endl;
  src_map = lexmax(src_map);
  cout << "\tsrc map final: " << str(src_map) << endl;

  auto time_to_event = inv(global_in_schedule_with_guard());

  auto lmm = lexmax(dot(src_map, sched));
  auto lex_max_events =
    its(src_map, ::domain(lmm));

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
  cout << "\trdsched: " << str(rdsched) << "\n wrsched: " << str(wrsched) << "\n wbr: " << str(WritesBeforeRead) << endl;

  //TODO: test these new method
  auto WriteThatProducesReadData = get_lexmax_events(wrsched, rdsched, write_port, read_port);
  cout << "\twpr: " << str(WriteThatProducesReadData) << "\nwaw:" << str(WritesAfterWrite) << endl;

  auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

  cout << "\twap: " << str(WritesAfterProduction) << endl;
  auto WritesBtwn = its_range((its(WritesAfterProduction, WritesBeforeRead)),
      to_uset(domain.at(write_port)));
  cout << "\tits:" << str(its(WritesAfterProduction, WritesBeforeRead)) << endl;
  cout << "\tWritesBtwn: " << str(WritesBtwn) << endl;

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
  cout << "DD: " << str(c) << endl;
  cout << *this << endl;
  cout << "\tread: " << read_port << endl;
  cout << "\twrite: " << write_port << endl;

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

//New method after refactor, create bank for garnet memory tile
bank UBuffer::compute_bank_info(
    std::set<string> inpt_set,
    std::set<string> outpt_set,
    map<string, int> delay_map) {
  auto rddom = isl_union_set_empty(
      get_space(range(access_map.at(pick(inpt_set)))));
  for (auto inpt : inpt_set) {
    for (auto outpt: outpt_set) {
      //get the rddom for the supper bank
      auto local_rddom = its(range(access_map.at(inpt)), range(access_map.at(outpt)));
      rddom = unn(rddom, local_rddom);
    }
  }
  vector<int> read_delays;
  int max_delay = -1;
  for (auto it: delay_map) {
    read_delays.push_back(it.second);
    max_delay = max(max_delay, it.second);
  }

  string name = pick(inpt_set) + "_to_" + pick(outpt_set);
  int num_readers = outpt_set.size();
  string pt_type_string = port_type_string();
  stack_bank bank{name, INNER_BANK_OFFSET_STACK, pt_type_string, read_delays, num_readers, max_delay, rddom, delay_map};

  return bank;
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

  for (auto inpt : inpt_set) {
    for (auto outpt: outpt_set) {
      //get the rddom for the supper bank
      auto local_rddom = its(range(access_map.at(inpt)), range(access_map.at(outpt)));
      rddom = unn(rddom, local_rddom);

      int delay = 0;
      //if (isIn.at(inpt)) {
      //  delay = compute_dd_bound(outpt, inpt, true);
      //} else {
      //  //TODO: possible bug
      //  string original_inpt = pick(get_in_ports());
      //  delay = compute_dd_bound(outpt, original_inpt, true) -
      //    compute_dd_bound(inpt, original_inpt, true);
      //}
      //read_delays.push_back(delay);
      //maxdelay = std::max(maxdelay, delay);
      //delay_map.insert({outpt, delay});
    }
  }

  map<string, int> delay_map;
  for (auto inpt: inpt_set) {
    //if (isIn.at(inpt)){
    for (auto outpt: outpt_set) {
      auto delay_info =
        dependence_distance_max(inpt, outpt);
      if (delay_info.has_value()) {
        maxdelay = std::max(delay_info.get_value(), maxdelay);
        delay_map[outpt] = delay_info.get_value();
        read_delays.push_back(delay_info.get_value());
        cout << "Compute max delay : " << maxdelay << endl;
      }
    }
    //}
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
  for (auto inpt: inpt_set) {
    for (auto outpt: outpt_set) {
      auto delay_info =
        dependence_distance_max(inpt, outpt);
      if (delay_info.has_value()) {
        maxdelay = std::max(delay_info.get_value(), maxdelay);
        delay_map[outpt] = maxdelay;
      }
    }
  }

  //sort output port by max delay and compute relative dependence distance
  if (inpt_set.size() == 1) {
    vector<pair<string, int> > pt_delay;
    for (auto it: delay_map) {
      cout << "\tDelay : " << it.first << "-> " << it.second << endl;
      pt_delay.push_back(it);
    }
    sort(pt_delay.begin(), pt_delay.end(),
        [](pair<string, int> a, pair<string, int> b) {
        return a.second < b.second;
        });

    //shift register optimization
    for (int i = 0; i < pt_delay.size() - 1; i ++) {
      auto s_in = pt_delay.at(i).first;
      auto s_out = pt_delay.at(i+1).first;
      bool decouple = isl_map_is_injective(to_map(access_map.at(s_in))) &&
        isl_map_is_injective(to_map(access_map.at(s_out)));
      auto delay_info = dependence_distance_singleton(s_in, s_out, !decouple);
      if (delay_info.has_value()) {
        delay_map.at(s_out) = delay_info.get_value();
      } else {
        //assert(false);
      }
    }
    delay_map.at(pt_delay.begin()->first) = 0;
  }

  cout << "Max delay : " << maxdelay << endl;

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
UBuffer::get_unique_ports(std::set<string> &outpts) {
  map<string, std::set<string> > outmap;
  for (auto pt : outpts) {

    bool is_duplicate = false;

    for (auto existing_pair : outmap) {
      string existing = existing_pair.first;

      if (can_be_broadcast(existing, pt)){
        cout << pt << "-> broadcast ->" << existing << endl;
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
    cout << tab(2) << itr.name << endl;
    cout<< "max delay = " << itr.maxdelay << endl;
    for (auto it: banks_to_inputs.at(itr.name)) {
      cout << "\t\tinpt: " << it << endl;
    }

    for (auto it: banks_to_outputs.at(itr.name)) {
      cout << "\t\toutpt: " << it << endl;
    }
    cout << endl;
  }
}

void UBuffer::generate_banks(CodegenOptions& options) {
  cout << "generating banks for buffer: " << name << endl;
  assert(all_schedules_defined(*this));

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
        cout << "Adding bank between " << inpt << " and " << outpt << endl;
        add_bank_between(inpt, outpt, bnk);
      }
    }

    cout << "Done generating register-file style banks for " << name << ", bank list size = " << bank_list.size() << endl;

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
      curlies(name + bracket_list(dvs) + " -> b" + bracket_list(addrs));

    //bank map: from address to the bank ID
    cout << "bank func = " << bank_func << endl;
    auto bank_map = isl_map_read_from_str(ctx, bank_func.c_str());
    //cout << str(bank_map) <<endl;
    //assert(banking_scheme_is_legal(bank_map, *this));

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
          //Check if we could simplify as a register
          outpt_vec.insert(outpt);
        }
      }
      std::set<string> outpt_vec_rem;
      if (inpt_vec.size() == 1) {
        //FIXME: this is extremely hack, checkout dillon's sr optimization after deadline
        for (auto outpt: outpt_vec) {
          auto inpt = pick(inpt_vec);
          auto dd_info = dependence_distance_singleton(inpt, outpt, false);
          if (dd_info.has_value()) {
            int dd = dd_info.get_value();
            //If it's constant delay we will put it into a separate bank
            //if (options.conditional_merge) {
            if (options.conditional_merge &&
                (outpt_vec.size() > options.rtl_options.max_outpt
                 || dd < options.merge_threshold)) {
              bank tmp = compute_bank_info(inpt, outpt, dd);
              add_bank_between(inpt, outpt, tmp);
              continue;
            }
          }
          outpt_vec_rem.insert(outpt);
          }
        } else {
          outpt_vec_rem = outpt_vec;
        }
        if (outpt_vec_rem.size()) {
          bank tmp = compute_bank_info(range(this_bank_rddom), bankID, inpt_vec, outpt_vec_rem);
          add_bank_between(inpt_vec, outpt_vec_rem, tmp);
        }
      }

      /*bank bnk = compute_bank_info();
        for (int i = 0; i < num_banks; i++) {
        bank cpy = bnk;
        cpy.name = "cyclic_bank_" + str(i);
        bank_list.push_back(cpy);
        }*/

    } else {

      auto outpts = get_out_ports();
      std::set<string> out_pt_set(outpts.begin(), outpts.end());
      map<string, std::set<string> > unique_outs =
        get_unique_ports(out_pt_set);

      cout << "===== Unique ports" << endl;
      for (auto ptg : unique_outs) {
        cout << tab(1) << ptg.first << endl;
        for (auto pt : ptg.second) {
          cout << tab(2) << pt << endl;
        }
      }

      // Use naive banking that reaches target throughput
      for (auto outpt : get_out_ports()) {
        cout << "Generating banks for port: " << outpt << " on buffer " << name << endl;
        cout << tab(1) << "access map: " << str(access_map.at(outpt)) << endl;
        //cout << endl << endl << *this << endl << endl;
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

          cout << "\tinpt: " << inpt << endl;
          cout << "\toverlap: " << str(overlap) << endl;
          cout << "\toverlap ops: " << str(ops_overlap) << endl;

          if (!empty(ops_overlap) && !empty(overlap)) {
            stack_bank bank;
            if (options.rtl_options.use_external_controllers)
              bank = compute_bank_info(options, inpt, outpt);
            else
              bank = compute_bank_info(inpt, outpt, INT_MAX);
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
      cout << tab(1) << "Bank name: " << b.name << endl;
      cout << "\tinput: \n";
      for (auto inpt: banks_to_inputs.at(b.name))
        cout <<tab(2) << inpt <<endl;
      cout << "\t output: \n";
      for (auto outpt: banks_to_outputs.at(b.name))
        cout <<tab(2) << outpt <<endl;
    }
  }

  void UBuffer::generate_banks_and_merge(CodegenOptions& options) {
    generate_banks(options);


    if (banking.partition == "exhaustive" || banking.partition == "cyclic") {
      bool all_small_banks = true;
      for (auto inpt : get_in_ports()) {
        vector<stack_bank> receivers = receiver_banks(inpt);
        for (auto bnk : receivers) {
          if (bnk.tp == INNER_BANK_OFFSET_STACK &&
              bnk.maxdelay > 2 &&
              bnk.read_delays.size() == 2) {
            all_small_banks = false;
            break;
          }
        }
      }


      if (!all_small_banks) {
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
  }

  CyclicBankingImpl UBuffer::get_cyclic_banking_implement(UBufferImpl & impl) {
    vector<int> cb_factor = get_cyclic_banking_factors();
    CyclicBankingImpl bank_impl(impl, cb_factor);
    return bank_impl;
  }

  void UBuffer::parse_exhaustive_banking_into_impl(UBufferImpl & impl) {
    for(auto bank: get_banks()) {
      auto inpts = banks_to_inputs.at(bank.name);
      auto outpts = banks_to_outputs.at(bank.name);
      cout << banks_to_outputs.at(bank.name) << endl;
      assert(banks_to_inputs.at(bank.name).size() == 1);
      assert(banks_to_outputs.at(bank.name).size() == 1);
      //int impl_bank = impl.add_new_bank_between(inpts, outpts, to_set(bank.rddom));
      //Change exhaustive banking rddom to be more conservative
      int impl_bank = impl.add_new_bank_between(inpts, outpts, to_set(range(access_map.at(pick(inpts)))));
      cout << "Add bank: " << bank.name << "between: "
          << inpts << " and " << outpts <<"\n with rddom:"
          << str(bank.rddom) << endl;
      map_insert(impl.bank_inpt2writers, impl_bank, inpts);
      map_insert(impl.bank_outpt2readers, impl_bank, outpts);
    }
  }

  vector<pair<std::set<string>, std::set<string> > >
      UBuffer::port_grouping(CodegenOptions& options,
          UBufferImpl & impl,
          uset* rddom,
          std::set<string> inpts,
          std::set<string> outpts) {
    vector<pair<std::set<string>, std::set<string> > > ret;
    //naive case we need to create a bank between each input port and output port
    //if (!overlap_schedule(inpts) && !overlap_schedule(outpts)) {
        if((inpts.size() <= options.rtl_options.max_inpt) &&
            (outpts.size() <= options.rtl_options.max_outpt)) {
            int bank = impl.add_new_bank_between(inpts, outpts, to_set(rddom));
            impl.sequentially_assign_inpt(sort_pt_by_bundle(inpts), bank);
            impl.sequentially_assign_outpt(sort_pt_by_bundle(outpts), bank);

            ret.push_back(
                    make_pair(inpts, outpts)
                    );
        //} else {
        //    cout << "need to rebank the ubuffer ! " << endl;
        //    assert(false);
        //}
    } else {
        assert(inpts.size() <= options.rtl_options.max_inpt);

        //This is used for broadcasting the output port
        //use this customized cmp to sort the pt by bundle name
        auto cmp = [this](const string & l, const string & r) {
            return this->cmp_by_bd(l, r);
        };
        map<string, std::set<string>, decltype(cmp)> outpt_partitions(cmp);
        auto tmp = get_unique_ports(outpts);
        for (auto it: tmp) {
            outpt_partitions.insert(it);
        }

        //One bank will work
        if (outpt_partitions.size() <= options.rtl_options.max_outpt) {
          ret.push_back(make_pair(inpts, outpts));
          int bank = impl.add_new_bank_between(inpts, outpts, to_set(rddom));
          for (auto it : outpt_partitions) {
            map_insert(impl.bank_outpt2readers, bank, it.second);
          }
          for (auto inpt: inpts) {
            map_insert(impl.bank_inpt2writers, bank, {inpt});
          }

        //need to put into separate banks
        } else {
            for (string inpt: inpts) {
                for (auto it : outpt_partitions) {
                    ret.push_back(make_pair(std::set<string>({inpt}), it.second));
                    int bank = impl.add_new_bank_between({inpt}, it.second, to_set(rddom));
                    map_insert(impl.bank_inpt2writers, bank, {inpt});
                    map_insert(impl.bank_outpt2readers, bank, it.second);
                }

            }
        }
        }

    return ret;
  }

  void UBuffer::merge_bank_broadcast(string inpt) {
    vector<bank> mergeable;
    bank to_replace;
    string pt_to_be_merge = "";
    for (auto bk: receiver_banks(inpt)) {
      assert(get_bank_inputs(bk.name).size() == 1);
      assert(get_bank_outputs(bk.name).size() == 1);
      string current = pick(get_bank_outputs(bk.name));
      if (pt_to_be_merge== "") {
        to_replace = bk;
        pt_to_be_merge = current;
      } else {
        if (can_be_broadcast(pt_to_be_merge, current))
        mergeable.push_back(bk);
      }
    }
    if(mergeable.size() == 0)
        return;
    for (auto merge: mergeable) {
      replace_bank(merge, to_replace);
      cout << "Merge bank: " << merge.name << " into " << to_replace.name << endl;
    }
    assert(false);
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
      ret = set_domain_name(ret, dom_name + "_s" + to_string(depth));
      ret_sched = set_domain_name(ret_sched, dom_name + "_s" + to_string(depth));
    }
    cout << "Rewrited output port map: " << str(ret) << endl;
    cout << "Rewrited output port sched: " << str(ret_sched) << endl;
    return make_pair(ret, ret_sched);
  }

  void UBuffer::port_group2bank(CodegenOptions& options) {
    int in_port_width = options.rtl_options.max_inpt;
    int out_port_width = options.rtl_options.max_outpt;
    /*Refactor the port grouping algorithm, we should put it into bank,
     * instead of ubuffer. Think about ubuffer is the original
     * */
    stack<bank> bank_pool;
    cout << tab(1) << "Start port group into multi-port memory tile!" << endl;
    for (auto inpt: get_in_ports()) {
      vector<bank> rec = receiver_banks(inpt);
      sort(rec.begin(), rec.end(), [](const bank& l, const bank& r) {
          return l.maxdelay > r.maxdelay;
          });
      for (auto bk : rec) {
        bank_pool.push(bk);
        cout << tab(1) << bk.name << ", has max delay: " << bk.maxdelay << ", SR only: " << bk.onlySR() << endl;
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
      cout << tab(1) << "Pop bank: " << bk.name << " from bank pool." << endl;

      //Check if we need a memory tile
      //TODO: we could move the shift register optimization pass here
      if (options.conditional_merge) {
        if (bk.maxdelay <= options.merge_threshold) {
          if (get_bank_outputs(bk.name).size() == 1){
            bank_pool.pop();
            continue;
          }
        }
      }

      //First check if this bank already have saturized the hardware memory
      //TODO: this may not make sense, rewrite this code
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
        pt_vec = bk.get_out_ports();
        for (auto it : bk.get_sort_delay_map()) {
          cout << "Bank: "<< bk.name << "'s port:'" << it.first << " has delay: " << it.second << endl;
        }

        if (last_bank_IO.first == "") {
          inpt_set.insert(input);
          bank_input = input;
        }
        else if ((last_bank_IO.first != input) || (empty(its(last_bank_rddom, bk.rddom)))) {
          inpt_set.insert(input);
          bank_input = input;
        }
        else {
          cout << "\tSubstitute the output port: " << last_bank_IO.second << "to the input : " << input << endl;
          //bank_input = last_bank_IO.second;
          inpt_set.insert(input);
          //delay_map[bank_input] = bk.delay_map.at(bank_input);
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
          //delay_map.clear();
          back_edge.clear();
        } else if (bk.onlySR()) {
          cout << tab(2) << "Create subbranch SR!" << endl;
          cout << tab(2)<< "Input: " << pick(inpt_set) << endl;
          for (auto outpt: outpt_set) {
            cout << tab(2) << "Outpt: " << outpt << endl;
          }
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
        cout << tab(2) << "Create subbranch full!" << endl;
        cout << tab(2)<< "Input: " << pick(inpt_set) << endl;
        for (auto outpt: outpt_set) {
          cout << tab(2) << "Outpt: " << outpt << endl;
        }
        last_bank_rddom = create_subbank_branch(inpt_set, outpt_set, delay_map, outpt_merge, back_edge);

        //reset the grouping counter
        cout << "Reset Counter" << endl;
        group_in_port_width = 0;
        group_out_port_width = 0;
      }
    }
    //chances are that we have some leftover
    if (!inpt_set.empty()) {
      cout << tab(2) << "Create subbranch leftover!" << endl;
      cout << tab(2)<< "Input: " << pick(inpt_set) << endl;
      for (auto outpt: outpt_set) {
        cout << tab(2) << "Outpt: " << outpt << endl;
      }
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
    for (auto it : delay_map) {
      cout << "\tDelay map: " << it.first << ": " << it.second << endl;
    }
    for (auto it: edges) {
      cout << it.first << "->" << it.second << endl;
    }
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
    cout << tab(2) << "Create super bank!" << endl;
    cout << tab(2)<< "Input: " << pick(inpt_set) << endl;
    for (auto outpt: outpt_set) {
      cout << tab(2) << "Outpt: " << outpt << endl;
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
    //delay_map.clear();
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

  //This is the interface we are using in garnet mapping
  vector<string> buffer_vectorization(
      CodegenOptions& options,
      vector<string> buf_name_vec,
      map<string, UBuffer> & buffers) {
    /* Function to vectorize the buffer access, will rewrite the buffer access pattern,
     * generate the new domain and access map and also add two other buffer on
     * both input and output side
     * */

    int fetch_width = options.mem_hierarchy.at("mem").fetch_width;
    vector<string> rem_deps, rem_origin_ubuf;
    for(auto it : buffers) {
      if (std::find(buf_name_vec.begin(), buf_name_vec.end(), it.first) != buf_name_vec.end()) {
        rem_origin_ubuf.push_back(it.first);
        auto target_buffer = it.second;

        //Input must be take care
        //need to first pad the buffer output to the multiplier of
        target_buffer.merge_small_dim(fetch_width);

        //comment out dimension padding, only pad the cycle ctride
        //target_buffer.pad_read_dom_inner_most(fetch_width);
        //target_buffer.pad_write_dom_inner_most(fetch_width);

        int dim_id = target_buffer.get_vectorized_dim(fetch_width);
        if (dim_id == -1) {
          auto ret = target_buffer.vectorization_single_pixel(fetch_width);
          for (auto itr: ret) {
            buffers.insert(itr);
          }
        } else {
          cout << tab(1) << "buffer_vectorization Vectorizing: " << target_buffer.name << endl
            << tab(1)<< " On addr dim: " << dim_id << ", fetch_width: " << fetch_width
            << endl;
          cout << target_buffer << endl;

          //TODO: remove the rem-dependency
          //ret is a pair of vectorized_buffer and the dependency need to be removed
          auto ret = target_buffer.vectorization(options, dim_id);
          for (auto itr: ret.first) {
            buffers[itr.first] = itr.second;
          }
          for (auto deps: ret.second) {
            rem_deps.push_back(deps);
          }
        }
      }
    }
    for (auto rem: rem_origin_ubuf) {
      buffers.erase(rem);
    }
    return rem_deps;
  }

  //Deprecate all the method below
  vector<string> buffer_vectorization(vector<int> iis,
      vector<string> buf_name_vec,
      int fetch_width,
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

        //Input must be take care
        //need to first pad the buffer output to the multiplier of
        target_buffer.merge_small_dim(fetch_width);
        //target_buffer.pad_read_dom_inner_most(fetch_width);
        target_buffer.pad_write_dom_inner_most(fetch_width);

        int dim_id = target_buffer.get_vectorized_dim(fetch_width);
        if (dim_id == -1) {
          auto ret = target_buffer.vectorization_single_pixel(fetch_width);
          for (auto itr: ret) {
            buffers.insert(itr);
          }
        } else {
          cout << tab(1) << "buffer_vectorization Vectorizing: " << target_buffer.name << endl
            << tab(1)<< " On addr dim: " << dim_id << ", fetch_width: " << fetch_width
            << endl;
          cout << target_buffer << endl;

          //TODO: remove the rem-dependency
          //ret is a pair of vectorized_buffer and the dependency need to be removed
          CodegenOptions options;
          options.add_memory_hierarchy("mem");
          options.mem_hierarchy.at("mem").fetch_width= fetch_width;
          auto ret = target_buffer.vectorization(options, dim_id);
          for (auto itr: ret.first) {
            buffers[itr.first] = itr.second;
          }
          for (auto deps: ret.second) {
            rem_deps.push_back(deps);
          }
        }
      }
    }
    for (auto rem: rem_origin_ubuf) {
      buffers.erase(rem);
    }
    return rem_deps;
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
        cout << tab(1) << "buffer_vectorization Vectorizing: " << target_buffer.name << endl
          << tab(1)<< " On addr dim: " << dim_id << ", fetch_width: " << fetch_width
          << endl;
        cout << target_buffer << endl;

        //Input must be take care
        //need to first pad the buffer output to the multiplier of
        target_buffer.pad_read_dom_inner_most(fetch_width);
        target_buffer.pad_write_dom_inner_most(fetch_width);

        //ret is a pair of vectorized_buffer and the dependency need to be removed
        CodegenOptions options;
        auto ret = target_buffer.vectorization(options, dim_id);
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

  //helper function for getting the vector fetch delay
  int get_vector_fetch_loop_ii(umap* in_sched) {
    auto in_rel_map = relation_map(to_map(in_sched));
    cout << "\trel map: " << in_rel_map << endl;
    vector<bool> t_l = {true};
    int it_in = in_rel_map.rend() - 1
      - std::find_first_of(in_rel_map.rbegin(), in_rel_map.rend(), t_l.begin(), t_l.end());
    cout << "\trel dim: " << it_in << endl;
    int ii = stride_in_dim(to_map(in_sched), it_in);
    cout << "\trel dim stride: " << ii << endl;
    return ii;
  }

  //new mechod using the recipe
  //This is the method that used currently
  map<string, isl_map*> UBuffer::produce_vectorized_schedule(vector<string> in_bd_vec, vector<string> out_bd_vec, vector<int> iis, int fetch_width) {
    /*
     * Previously we have two ops, input and output.In order to do the vectorization
     * we need to create 2 other ops, input_vec and output_vec
     * */
    map<string, isl_map*> new_sched;
    for (auto in_bd_name : in_bd_vec) {
      string in_pt_name = pick(port_bundles.at(in_bd_name));
      string in_op = domain_name(to_map(access_map.at(in_pt_name)));
      auto in_sched = schedule.at(in_pt_name);
      cout << "\tin_sched: " << str(in_sched)  << endl;
      int in_fetch_ii = get_vector_fetch_loop_ii(in_sched);
      auto in_sched_new = linear_schedule(to_map(in_sched), iis, 0, false);
      auto in_sched_vec = linear_schedule(to_map(in_sched), iis, in_fetch_ii*fetch_width, false);
      new_sched.insert(make_pair(in_op, in_sched_new));
      new_sched.insert(make_pair(in_op + "_agg2sram", in_sched_vec));
    }

    int out_bd_cnt = 0;
    for ( auto out_bd_name: out_bd_vec) {
      string out_pt_name = pick(port_bundles.at(out_bd_name));
      string out_op = domain_name(to_map(access_map.at(out_pt_name)));
      auto out_sched = schedule.at(out_pt_name);
      //auto in_sched_vec = collect_sched_vec(in_sched);
      //auto out_sched_vec = collect_sched_vec(out_sched);
      cout << "\t\nout_sched: " << str(out_sched) << endl;
      int out_fetch_ii = get_vector_fetch_loop_ii(out_sched);
      auto out_sched_new = linear_schedule(to_map(out_sched), iis, 0, false);

      //The out vectorize schedule recipe
      //TODO: Use unit test to test this, it's too hacky now

      //Use mod to make sure no collision
      int const_sched = int_const_coeff(get_aff(out_sched));
      cout << "Sched const" << const_sched << endl;
      int rem = (const_sched % fetch_width) / 2;

      if (out_bd_vec.size() == 0)
          rem = 0;
      int vec_offset = abs(out_bd_cnt - rem) * out_fetch_ii * fetch_width / 2
          - (out_fetch_ii * fetch_width+1);
      if (out_bd_vec.size() == 1)
        if (port_bundles.at(out_bd_name).size() == 1)
          vec_offset -= 8;
      auto out_sched_vec = linear_schedule(to_map(out_sched), iis, vec_offset, false);

      out_sched_vec = pad_one_more_dim_to_sched_map_innermost(out_sched_vec, 0);
      //cout << "\tin_sched vec: " << in_sched_vec << "\t\nout_sched vec: " << out_sched_vec << endl;
      new_sched.insert(make_pair(out_op, out_sched_new));
      new_sched.insert(make_pair(out_op + "_sram2tb", out_sched_vec));
      out_bd_cnt ++;
    }

    //Resolve the SRAM collision
    map<string, isl_map*> sram_wr, sram_rd;
    for (auto it : new_sched) {
      cout << "\tvectorized schedule for op: " << it.first << endl << str(it.second) << endl;
      if (contains(it.first, "agg2sram"))
        sram_wr.insert(it);
      else if (contains(it.first, "sram2tb"))
        sram_rd.insert(it);
    }
    for (auto it_rd: sram_rd) {
      for (auto it_wr: sram_wr) {
        auto rd_sched = it_rd.second;
        auto wr_sched = it_wr.second;
        cout << "\t\t rd sched: " << str(rd_sched) << endl;
        cout << "\t\t wt sched: " << str(wr_sched) << endl;
        int rd_start = pick(parse_pt(lexminpt(range(rd_sched))));
        int wr_start = pick(parse_pt(lexminpt(range(wr_sched))));
        if ((rd_start - wr_start) % fetch_width == 0) {
          auto new_rd_sched = linear_schedule(rd_sched, {1, 0}, -1, false);
          new_rd_sched = pad_one_more_dim_to_sched_map_innermost(new_rd_sched, 0);
          new_sched.at(it_rd.first) = new_rd_sched;
          break;
        }
      }
    }

    return new_sched;
  }

  //scheduleing recipe for Creating the schedule on the fly
  isl_map* get_agg2sram_schedule(umap* in_sched,
          isl_set* slice_dim, isl_map* op_trans, isl_set* sched_domain, int fetch_width) {

    int in_fetch_ii = get_vector_fetch_loop_ii(in_sched);
    auto in_sched_offset = linear_schedule(to_map(in_sched), {1}, in_fetch_ii*fetch_width, false);

    //slice the access mod 4
    auto sched = its(in_sched_offset, slice_dim);

    //Mask out all reaccess
    sched = dot(inv(op_trans), its(sched, sched_domain));
    return sched;
  }

  isl_map* get_sram2tb_schedule(umap* out_sched,
          isl_set* slice_dim, isl_map* op_trans, isl_set* sched_domain,
          int delay_step, int fetch_width) {
    int out_fetch_ii = get_vector_fetch_loop_ii(out_sched);
    auto out_sched_offset = linear_schedule(to_map(out_sched), {1},
            //TODO: add unit test to test this recipe
            //-out_fetch_ii*fetch_width - delay_step * out_fetch_ii * fetch_width / 2 + 1, false);
            - 2 - delay_step * out_fetch_ii * fetch_width / 2, false);

    //slice the access mod 4
    auto sched = its(out_sched_offset, slice_dim);

    //Mask out all reaccess
    sched = dot(inv(op_trans), its(sched, sched_domain));
    return sched;
  }

  bool violate_deps(isl_map* temp_sched, map<string, isl_map*> sched_map) {
    for (auto sched_it: sched_map) {
      auto collision = dot(temp_sched, inv(sched_it.second));
      if (!empty(collision)) {
        return true;
      }
    }
    return false;
  }


  //Delay steps define how conservative the schedule recipe should be
  isl_map* get_sram2tb_schedule_with_check(umap* out_sched, map<string, isl_map*> sched_map,
          isl_set* slice_dim, isl_map* op_trans, isl_set* sched_domain,
          int delay_step, int fetch_width) {
    cout << "\t output sched: "  << str(out_sched)<< endl;
    auto temp_sched = get_sram2tb_schedule(out_sched, slice_dim, op_trans, sched_domain, delay_step, fetch_width);
    int out_fetch_ii = get_vector_fetch_loop_ii(out_sched);
    cout << "\t temp sched: " << str(temp_sched) << endl;

    //GET SRAM2TB list and AGG2SRAM list
    map<string, isl_map*> sram_rd, sram_wr;
    for(auto it: sched_map) {
        if (contains(it.first, "agg2sram")) {
            sram_wr.insert(it);
        }
        if (contains(it.first, "sram2tb")) {
            sram_rd.insert(it);
        }
    }

    //Finding the delayfor SRAM access
    bool adjust = true;
    while (adjust) {
        adjust = false;
        //adjust against write
        while(violate_deps(temp_sched, sram_wr)) {
            //check dependency against sram write
            temp_sched = linear_schedule(temp_sched, {1}, -1, false);
            adjust = true;
        }
        //adjust against read
        while(violate_deps(temp_sched, sram_rd)) {
            temp_sched = linear_schedule(temp_sched, {1}, -1, false);
            //temp_sched = linear_schedule(temp_sched, {1}, -out_fetch_ii * fetch_width / 2, false);
            cout << "\tadjust temp sched: " << str(temp_sched) << endl;
            adjust = true;
        }

    }
    return temp_sched;
  }

  //New method to find dynamic schedule
  isl_map* get_sram2tb_schedule_with_check(isl_map* out_sched, map<string, isl_map*> sched_map, int ahead_step, int vectorize_loop_dim, int offset, bool is_dual_port) {
    cout << "\t output sched: "  << str(out_sched)<< endl;
    cout << "vectorized dim: " << vectorize_loop_dim << endl;
    int fetch_ii = stride_in_dim(out_sched, vectorize_loop_dim);
    //TODO: may need to adjust the delay, /2 is made resnet work
    auto temp_sched = linear_schedule(out_sched, {1}, - offset - ahead_step * fetch_ii/2, false);
    cout << "\t temp sched: " << str(temp_sched) << endl;

    //GET SRAM2TB list and AGG2SRAM list
    map<string, isl_map*> sram_rd, sram_wr;
    for(auto it: sched_map) {
        if (contains(it.first, "agg2sram")) {
            sram_wr.insert(it);
        }
        if (contains(it.first, "sram2tb")) {
            sram_rd.insert(it);
        }
    }

    //Finding the delayfor SRAM access
    bool adjust = true;
    while (adjust) {
        adjust = false;
        //adjust against write
        while(violate_deps(temp_sched, sram_wr) && (!is_dual_port)) {
            //check dependency against sram write
            temp_sched = linear_schedule(temp_sched, {1}, -1, false);
            adjust = true;
        }
        //adjust against read
        while(violate_deps(temp_sched, sram_rd)) {
            temp_sched = linear_schedule(temp_sched, {1}, -1, false);
            //temp_sched = linear_schedule(temp_sched, {1}, -out_fetch_ii * fetch_width / 2, false);
            cout << "\tadjust temp sched: " << str(temp_sched) << endl;
            adjust = true;
        }

    }
    return temp_sched;
  }

  //new recipe schedule provider for accumulation buffer
  map<string, isl_map*> UBuffer::produce_vectorized_schedule(string in_bd_name, string out_bd_name, string self_loop_bd,vector<int> iis,  int fetch_width) {
    string in_pt_name = pick(port_bundles.at(in_bd_name));
    string out_pt_name = pick(port_bundles.at(out_bd_name));
    string in_op = domain_name(to_map(access_map.at(in_pt_name)));
    string out_op = domain_name(to_map(access_map.at(out_pt_name)));
    auto in_sched = schedule.at(in_pt_name);
    auto out_sched = schedule.at(out_pt_name);

    string update_name = pick(port_bundles.at(self_loop_bd));
    string update_op = domain_name(to_map(access_map.at(update_name)));
    auto update_sched = schedule.at(update_name);

    int in_fetch_ii = get_vector_fetch_loop_ii(in_sched);
    int out_fetch_ii = get_vector_fetch_loop_ii(out_sched);
    int update_fetch_ii = get_vector_fetch_loop_ii(update_sched);

    auto in_sched_new = linear_schedule(to_map(in_sched), iis, 0, false);
    auto in_sched_vec = linear_schedule(to_map(in_sched), iis, in_fetch_ii*fetch_width, false);

    auto out_sched_new = linear_schedule(to_map(out_sched), iis, 0, false);
    auto out_sched_vec = linear_schedule(to_map(out_sched), iis, -out_fetch_ii*fetch_width - 1, false);

    auto update_sched_vec_out = linear_schedule(to_map(update_sched), iis, -update_fetch_ii*fetch_width - 1, false);
    auto update_sched_vec_in = linear_schedule(to_map(update_sched), iis, update_fetch_ii*fetch_width, false);
    auto update_sched_new = to_map(update_sched);

    map<string, isl_map*> new_sched;
    new_sched.insert(make_pair(in_op, in_sched_new));
    new_sched.insert(make_pair(out_op, out_sched_new));
    new_sched.insert(make_pair(in_op + "_agg2sram", in_sched_vec));
    new_sched.insert(make_pair(out_op + "_sram2tb", out_sched_vec));
    new_sched.insert(make_pair(update_op + "_agg2sram", update_sched_vec_in));
    new_sched.insert(make_pair(update_op + "_sram2tb", update_sched_vec_out));
    new_sched.insert(make_pair(update_op, update_sched_new));

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

  vector<umap*> UBuffer::get_access_pattern_vector(umap* rewrite_buf2op, string pt_name, int dim_id, int fetch_width) {
    vector<umap*> ap_vec;
      AccessPattern acc_pattern = AccessPattern(
          to_map(access_map.at(pt_name)), ctx);
      auto constraint_slices =
        acc_pattern.get_buf_slice(ctx, this->name, dim_id, fetch_width);
      for (auto slice: constraint_slices) {
        cout << "\t slice : " << str(slice) << endl;
        auto rewrite_access_map = dot(inv(rewrite_buf2op), slice);
        if (empty(rewrite_access_map)) {
            cout << "\t\t\tWARNING: This port is empty, should pad it first." << endl;
        }
        cout << "\t single map: " << str(rewrite_access_map) << endl;
        ap_vec.push_back(rewrite_access_map);
      }
    return ap_vec;
  }


  map<string, vector<umap*>>
    UBuffer::get_access_pattern_map(vector<pair<string, umap*>> rewrite_buf2op_map, map<string, isl_map*> &sched_map, int dim_id, int fetch_width) {
    //Add multiple port and port bundle to SRAM and TB
    //
    //first round check how many port we need to have, do we need to coalesce scheduel
    vector<int> access_cnt_per_port(fetch_width, 0);
    map<string, vector<umap*>> ap_vec_map;
    //map<string, isl_map*> new_sched_map;
    for (auto it: rewrite_buf2op_map) {
      string origin_pt_name = it.first;
      auto rewrite_buf2op = it.second;
      AccessPattern acc_pattern = AccessPattern(
          to_map(access_map.at(origin_pt_name)), ctx);
      auto constraint_slices =
        acc_pattern.get_buf_slice(ctx, this->name, dim_id, fetch_width);
      int slice_cnt = 0;
      for (auto slice: constraint_slices) {
        cout << "\t slice : " << str(slice) << endl;
        auto rewrite_access_map = dot(inv(rewrite_buf2op), slice);
        if (!empty(rewrite_access_map)) {
          access_cnt_per_port.at(slice_cnt) ++;
        }
        cout << "\t single map: " << str(rewrite_access_map) << endl;
        map_insert(ap_vec_map, origin_pt_name, rewrite_access_map);
        slice_cnt ++;
      }
    }

    cout << "access per port" << access_cnt_per_port << endl;

    int pt_cnt = 0;
    for (auto it: rewrite_buf2op_map) {
        string origin_pt_name = it.first;
      auto sched = sched_map.at(origin_pt_name);
      cout << "PT: " << origin_pt_name << "\n\torginal sched: " << str(sched) << endl;

      int in_fetch_ii = get_vector_fetch_loop_ii(to_umap(sched));
      assert(in_fetch_ii % access_cnt_per_port.at(pt_cnt) == 0);
      int offset = in_fetch_ii / access_cnt_per_port.at(pt_cnt) * pt_cnt;
      auto new_sched = linear_schedule(sched, {1, 1}, offset, false);
      sched_map.at(origin_pt_name) = new_sched;
      cout << "PT: " << origin_pt_name << "\n\tnew sched: " << str(sched_map.at(origin_pt_name)) << "\n\tin_fetch ii = " << in_fetch_ii << endl;
      pt_cnt ++;
    }
    return ap_vec_map;
  }

  void UBuffer::add_vectorized_pt_to_ubuf(UBuffer& target_buf, vector<umap*> ap_vec, isl_map* merge_sched, string bd_name, int dim_id, int fetch_width, int cnt, bool is_out) {

    merge_sched = add_domain_suffix(merge_sched, "_"+str(cnt));
    for (int new_pt_cnt= 0; new_pt_cnt < fetch_width; new_pt_cnt++) {
      auto rewrite_access_map = ap_vec.at(new_pt_cnt);
      int look_n_ahead = 1;

      //TODO: loop iteration is less than the fetch_width
      //FIXME: by using single access to identify vectorized access
      while (empty(rewrite_access_map)) {
        rewrite_access_map = ap_vec.at(new_pt_cnt - look_n_ahead);
        look_n_ahead ++;
      }

      isl_map* a_map = to_map(rewrite_access_map);
      a_map = set_range_name(a_map, target_buf.name);

      //Add suffix
      a_map = add_domain_suffix(a_map, "_"+str(cnt));

      isl_set* dom = ::domain(a_map);
      if (is_out) {
        string pt_name = bd_name + "_out_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_out_pt(pt_name, dom, a_map, its(merge_sched, dom));

      } else {
        string pt_name = bd_name + "_in_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_in_pt(pt_name, dom, a_map, its(merge_sched, dom));

        //This must be TB write
        cout << pt_name << ": " << str(target_buf.access_map[pt_name]) << endl;
        auto acc_pt = AccessPattern(to_map(target_buf.access_map[pt_name]), target_buf.ctx);
        cout << acc_pt << endl;
        auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id, true);
        cout << "out pt decouple: " << str(decouple_acc_map) << endl;
        target_buf.access_map[pt_name] = to_umap(decouple_acc_map);
      }
    }
  }

  /*rewrite this pass*/
  int UBuffer::add_vectorized_pt_to_ubuf(UBuffer & target_buf, vector<pair<string, umap*>> rewrite_buf2op_map, map<string, isl_map*> sched_map, string bd_name, int dim_id, int fetch_width, bool is_out, bool use_recipe) {

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
      int look_n_ahead = 1;

      //TODO: loop iteration is less than the fetch_width
      while (empty(rewrite_access_map)) {
        rewrite_access_map = ap_vec.at(new_pt_cnt - look_n_ahead);
        look_n_ahead ++;
      }

      cout << "rewrite access map: " << str(rewrite_access_map) << endl;
      isl_set* dom = ::domain(to_map(rewrite_access_map));
      if (is_out) {
        string pt_name = origin_pt_name + "_out_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_out_pt(pt_name, dom, to_map(rewrite_access_map), its(merge_sched, dom));

        //if (pick(access_cnt_per_port) > 1 && (!use_recipe)) {
        //if (pick(access_cnt_per_port) > 1 ) {
        //    target_buf.access_map[pt_name] =
        //        flatten_map_domain_with_dim(target_buf.access_map[pt_name], 2);
        //    target_buf.schedule[pt_name] =
        //        flatten_map_domain_with_dim(target_buf.schedule[pt_name], 2);
        //    cout << "schedule after flatten: " << str((target_buf.schedule[pt_name])) << endl;
        //    cout << "schedule after flatten simplify: " << str(simplify(target_buf.schedule[pt_name])) << endl;
        //    target_buf.retrive_domain[pt_name] = target_buf.domain.at(pt_name);
        //    target_buf.domain[pt_name] = ::domain(to_map(target_buf.access_map[pt_name]));
        //}
      } else {
        string pt_name = origin_pt_name + "_in_" + std::to_string(new_pt_cnt);
        target_buf.port_bundles[bd_name].push_back(pt_name);
        target_buf.add_in_pt(pt_name, dom, to_map(rewrite_access_map), its(merge_sched, dom));

        //This must be TB write

        ////LOOK at the name to judge if we need to remap the buffer
        //size_t found = target_buf.name.find("tb");
        //if(found != string::npos) {
          //auto acc_pt = target_buf.access_pattern.at(pt_name);
          cout << pt_name << ": " << str(target_buf.access_map[pt_name]) << endl;
          auto acc_pt = AccessPattern(to_map(target_buf.access_map[pt_name]), target_buf.ctx);
          cout << acc_pt << endl;
          auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id, true);
          cout << "out pt decouple: " << str(decouple_acc_map) << endl;
          target_buf.access_map[pt_name] = to_umap(decouple_acc_map);
        //}

        //if ((pick(access_cnt_per_port) > 1)) { //&& (!use_recipe)) {

        //    target_buf.access_map[pt_name] =
        //        flatten_map_domain_with_dim(target_buf.access_map[pt_name], 2);
        //    target_buf.schedule[pt_name] =
        //        flatten_map_domain_with_dim(target_buf.schedule[pt_name], 2);
        //    cout << "schedule after flatten: " << str((target_buf.schedule[pt_name])) << endl;
        //    cout << "schedule after flatten simplify: " << str(simplify(target_buf.schedule[pt_name])) << endl;
        //    target_buf.retrive_domain[pt_name] = target_buf.domain.at(pt_name);
        //    target_buf.domain[pt_name] = ::domain(to_map(target_buf.access_map[pt_name]));
        //}
      }
      }
      return pick(access_cnt_per_port);
      }

      void UBuffer::add_vectorized_pt_to_ubuf(UBuffer & target_buf, umap* rewrite_buf2op, isl_map* sched, string origin_pt_name, string bd_name, int dim_id, int fetch_width, int cnt, bool is_out) {

        AccessPattern acc_pattern = AccessPattern(
            to_map(access_map.at(origin_pt_name)), ctx);
        auto constraint_slices = acc_pattern.get_buf_slice(ctx, target_buf.name, dim_id, fetch_width);
        size_t new_pt_cnt = 0;

        //isl_set* dom = range(to_map(rewrite_buf2op));
        sched = add_domain_suffix(sched, "_"+str(cnt));
        for (auto slice : constraint_slices) {
          cout << "Constraint: " << str(slice) << endl;
          cout << "origin: " << str(rewrite_buf2op) << endl;
          cout << "Rewrited Access Map" << str(dot(inv(rewrite_buf2op), slice)) << endl;
          auto rewrite_access_map = to_map(dot(inv(rewrite_buf2op), slice));
          rewrite_access_map = add_domain_suffix(rewrite_access_map, "_"+str(cnt));
          isl_set* dom = ::domain(rewrite_access_map);
          if (is_out) {
            //This handle the output from SRAM

            string pt_name = origin_pt_name + "_out_" + std::to_string(new_pt_cnt);
            target_buf.port_bundles[bd_name].push_back(pt_name);
            //cout << "Schedule before its domain: " << str(sched) << endl;
            //cout << "its domain: " << str(dom) << endl;
            //cout << "Schedule add to the new agg: " << str(simplify_expr(its(sched, dom))) << endl;
            target_buf.add_out_pt(pt_name, dom, rewrite_access_map, simplify_expr(its(sched, dom)));

            //remap the access map for self loop input
            if(is_self_loop_in(origin_pt_name)) {
              auto acc_pt = AccessPattern(to_map(target_buf.access_map[pt_name]), target_buf.ctx);
              auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id, true);
              target_buf.access_map[pt_name] = to_umap(decouple_acc_map);
            }
          }
          else {
            //This only handle the input to SRAM

            string pt_name = origin_pt_name + "_in_" + std::to_string(new_pt_cnt);
            target_buf.port_bundles[bd_name].push_back(pt_name);
            target_buf.add_in_pt(pt_name, dom, rewrite_access_map, simplify_expr(its(sched, dom)));

            //LOOK at the name to judge if we need to remap the buffer
            //size_t found = target_buf.name.find("tb");
            //if(found != string::npos) {
            //  //auto acc_pt = target_buf.access_pattern.at(pt_name);
            //  auto acc_pt = AccessPattern(to_map(target_buf.access_map[pt_name]), target_buf.ctx);
            //  auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id);
            //  cout << "out pt decouple: " << str(decouple_acc_map) << endl;
            //  target_buf.access_map[pt_name] = to_umap(decouple_acc_map);
            //}
          }
          new_pt_cnt ++;
        }
      }

      int get_inner_most_dom_pad_dim(isl_map* m) {
        int dim_id = num_in_dims(m) - 1;
        while( (dim_id>=0)){
          if (get_dim_extent(::domain(m), dim_id) == 1 )
            dim_id --;
          else
            break;
        }
        cout << "\t original range input access map: " << str(m) << endl;
        cout << "\t dim id: " << dim_id << endl;
        return dim_id;
      }


      bool UBuffer::merge_small_dim(int fetch_width) {
        //pad the domain for both input port and output port
        std::set<int> merge_dim;

        //Look through all the input dim, save the addr dim that need merging
        for (auto bd: get_in_bundles()) {
          for (auto pt: port_bundles.at(bd)) {
            auto am = to_map(access_map.at(pt));
            auto dom = domain.at(pt);
            auto sched = schedule.at(pt);
            int dim_id = get_inner_most_dom_pad_dim(am);
            if (dim_id < 0)
              continue;
            if (get_dim_extent(dom, dim_id) < fetch_width) {
              //This dimension is smaller than fetch_width
              //try to merge with the upper one
              assert(dim_id > 0);
              auto involve_vec = out_involve_dim(am, dim_id - 1);
              concat(involve_vec, out_involve_dim(am, dim_id));
              for (auto inv: involve_vec) {
                merge_dim.insert(inv);
              }
            }
          }
        }

        //Merge the access(address) range
        if (merge_dim.size()) {
          for (auto& it: access_map) {
            auto map = it.second;
            auto rng = to_set(range(map));
            auto trans = flatten_set_trans_with_dim_set(rng, merge_dim);
            cout << "merge transform: " << str(trans) << endl;
            isl_map* map_ = to_map(simplify(dot(map, trans)));

            //TODO: possible bug comment this out, do not know the consequence
            //if(num_out_dims(map_) != 1)
            //    continue;
            auto sched = to_map(schedule.at(it.first));
            cout << str(map_) << endl;
            cout << str(sched) << endl;
            auto optimized_ir = merge_dom_dim(sched, map_);
            replace_pt(it.first, optimized_ir.second, optimized_ir.first);
            cout << "\tmerged access map: " << str(optimized_ir.second) << "\n\tmerged schedule: " << str(optimized_ir.first) << endl;
          }
          return true;
        } else {
          return false;
        }
      }

      void UBuffer::pad_write_dom_inner_most(int fetch_width) {
        //pad the domain for both input port and output port
        for (auto bd: get_in_bundles()) {
          for (auto pt: port_bundles.at(bd)) {
            auto am = to_map(access_map.at(pt));
            auto sched = schedule.at(pt);
            int dim_id = get_inner_most_dom_pad_dim(am);
            if (dim_id < 0)
              dim_id = num_out_dims(am) - 1;
            int rem = get_pad_remainder(am, dim_id, fetch_width);
            if (rem) {
              //need padding
              auto pad_am = pad_to_domain_ubuf_map(am, dim_id, fetch_width - rem);
              auto pad_sched = pad_to_domain_ubuf_map(to_map(sched), dim_id, fetch_width - rem);
              if (isl_map_is_injective(pad_sched)) {
                cout << "\tPadded access map: " << str(pad_am) << endl;
                cout << "\tPadded schedule: " << str(pad_sched) << endl;
                replace_pt(pt, pad_am, pad_sched);
              }
            }
          }
        }
      }

      //Just pad the inner most
      void UBuffer::pad_read_dom_inner_most(int fetch_width) {
        for (auto bd: get_out_bundles()) {
          for (auto pt: port_bundles.at(bd)) {
            auto am = to_map(access_map.at(pt));
            auto sched = schedule.at(pt);
            int dim_id = get_inner_most_dom_pad_dim(am);
            if (dim_id < 0)
              continue;
            int rem = get_pad_remainder(am, dim_id, fetch_width);
            if (rem) {
              //need padding
              auto pad_am = pad_to_domain_ubuf_map(am, dim_id, fetch_width - rem);
              auto pad_sched = pad_to_domain_ubuf_map(to_map(sched), dim_id, fetch_width - rem);
              if (isl_map_is_injective(pad_sched)) {
                cout << "\tPadded access map: " << str(pad_am) << endl;
                cout << "\tPadded schedule: " << str(pad_sched) << endl;
                replace_pt(pt, pad_am, pad_sched);
              }
            }
          }
        }

      }

      std::map<string, UBuffer> UBuffer::vectorization_single_pixel(int fetch_width) {
        std::map<string, UBuffer> ret;
        auto inpts = get_in_ports();
        auto outpts = get_out_ports();
        assert(inpts.size() == 1);
        assert(outpts.size() == 1);
        string inpt = pick(inpts);
        auto in_bd = get_bundle(inpt);
        string outpt = pick(outpts);
        auto out_bd = get_bundle(outpt);

        auto in_dom = domain.at(inpt);
        auto out_dom = domain.at(outpt);

        auto sched = to_map(schedule.at(inpt));
        auto sched_out = to_map(schedule.at(outpt));
        auto am = to_map(access_map.at(inpt));
        auto am_out = to_map(access_map.at(outpt));

        auto aff = get_aff(sched);
        auto agg2sram_sched = to_map(add(aff, 1));
        agg2sram_sched = its(agg2sram_sched, in_dom);
        agg2sram_sched = set_domain_name(agg2sram_sched, domain_name(sched) + "_agg2sram_0");
        auto sram2tb_sched = to_map(add(aff, 4));
        sram2tb_sched = its(sram2tb_sched, in_dom);
        sram2tb_sched = set_domain_name(sram2tb_sched, domain_name(sched) + "_single_pixel_sram2tb_0");
        cout << "\tinput pt schedule: " << str(aff) << endl;
        cout << "\tagg2sram schedule: " << str(agg2sram_sched) << endl;
        cout << "\tsram2tb schedule: " << str(sram2tb_sched) << endl;

        auto am_aff = get_aff(am);
        cout << "\tinput pt access map: " << str(am_aff) << endl;
        cout << "\tinput pt access map: " << str(am) << endl;
        auto agg_in_am = to_map(am_aff);
        agg_in_am = set_range_name(agg_in_am, range_name(am) + "_0_agg");
        agg_in_am = add_domain_suffix(agg_in_am, "_in2agg_0");
        vector<isl_map*> inpt_vec_am;
        vector<isl_map*> inpt_sram_am;
        for (int i = 0; i < fetch_width; i ++) {
          auto new_am = its(to_map(constant_aff(am_aff, i)), in_dom);
          auto new_am_agg = set_range_name(cpy(new_am), range_name(am) + "_0_agg");
          auto new_am_sram = set_range_name(cpy(new_am), range_name(am) + "_sram");
          new_am_agg = set_domain_name(new_am_agg, domain_name(am) + "_agg2sram_0");
          new_am_sram = set_domain_name(new_am_sram, domain_name(am) + "_agg2sram_0");
          cout << "\t\t rewrite agg am: " << str(new_am) << endl;
          inpt_vec_am.push_back(new_am_agg);
          inpt_sram_am.push_back(new_am_sram);
        }

        vector<isl_map*> outpt_vec_am;
        vector<isl_map*> outpt_sram_am;
        for (int i = 0; i < fetch_width; i ++) {
          auto new_am = its(to_map(constant_aff(am_aff, i)), in_dom);
          auto new_am_sram= set_range_name(cpy(new_am), range_name(am) + "_sram");
          auto new_am_tb = set_range_name(cpy(new_am), range_name(am) + "_0_tb");
          new_am_tb = set_domain_name(new_am_tb, domain_name(am) + "_single_pixel_sram2tb_0");
          new_am_sram = set_domain_name(new_am_sram, domain_name(am) + "_single_pixel_sram2tb_0");
          cout << "\t\t rewrite agg am: " << str(new_am) << endl;
          outpt_vec_am.push_back(new_am_tb);
          outpt_sram_am.push_back(new_am_sram);
        }

        in_dom = add_suffix(in_dom, "_in2agg_0");
        sched = add_domain_suffix(sched, "_in2agg_0");

        out_dom = add_suffix(out_dom, "_tb2out_0");
        sched_out = add_domain_suffix(sched_out, "_tb2out_0");

        UBuffer agg;
        agg.name = name + "_0_agg";
        agg.ctx = ctx;
        agg.port_widths = port_widths;
        agg.add_in_pt(inpt + "_in", in_dom, its(agg_in_am, in_dom), sched);
        agg.port_bundles[in_bd + "_in"].push_back(inpt + "_in");
        {
          int cnt = 0;
          for (auto inpt_am: inpt_vec_am) {
            agg.add_out_pt(outpt + "_out_" + str(cnt),
                ::domain(agg2sram_sched), inpt_am, agg2sram_sched);
            agg.port_bundles[in_bd + "_out"].push_back(outpt + "_out_" + str(cnt));
            cnt ++;
          }
          cout << agg << endl;
          ret[agg.name] = agg;
        }

        UBuffer sram;
        sram.name = name + "_sram";
        sram.ctx = ctx;
        sram.port_widths = port_widths;
        {
          int cnt = 0;
          for (auto inpt_am: inpt_sram_am) {
            sram.add_in_pt(inpt+"_in_" + str(cnt),
                ::domain(agg2sram_sched), inpt_am, agg2sram_sched);
            sram.port_bundles[in_bd + "_in"].push_back(inpt + "_in_" + str(cnt));
            cnt ++;
          }
          cnt = 0;
          for (auto outpt_am: outpt_sram_am) {
            sram.add_out_pt(outpt+"_out_" + str(cnt),
                ::domain(sram2tb_sched), outpt_am, sram2tb_sched);
            sram.port_bundles[out_bd + "_out"].push_back(outpt + "_out_" + str(cnt));
            cnt ++;
          }
          cout << sram << endl;
          ret[sram.name] = sram;

        }

        auto am_aff_out = get_aff(am_out);
        cout << "\toutput pt access map: " << str(am_aff_out) << endl;
        auto tb_out_am = to_map(am_aff_out);
        tb_out_am = set_range_name(tb_out_am, range_name(am) + "_0_tb");
        tb_out_am = add_domain_suffix(tb_out_am, "_tb2out_0");

        UBuffer tb;
        tb.name = name + "_0_tb";
        tb.ctx = ctx;
        tb.port_widths = port_widths;
        {
          int cnt = 0;
          for (auto outpt_am: outpt_vec_am) {
            tb.add_in_pt(outpt+"_in_" + str(cnt),
                ::domain(sram2tb_sched), outpt_am, sram2tb_sched);
            tb.port_bundles[out_bd + "_in"].push_back(outpt + "_in_" + str(cnt));
            cnt ++;
          }
          tb.add_out_pt(outpt + "_out", out_dom, its(tb_out_am, out_dom), sched_out);
          tb.port_bundles[out_bd + "_out"].push_back(outpt+"_out");
          cout << tb << endl;
          ret[tb.name] = tb;
        }
        return ret;
      }

    pair<isl_map*, isl_map*> get_vectorized_write(isl_map* acc_0, isl_map* sched, map<string, isl_map*> sched_record_map, int fetch_width, int addr_dim, int agg_cnt) {
        int vectorize_loop_dim = get_inner_most_related_dom_dim(acc_0, addr_dim, fetch_width);
        cout << "vec loop dim: " << vectorize_loop_dim << endl;
        auto trans =
            get_domain_trans_with_reaccess_mask(domain(acc_0), vectorize_loop_dim, fetch_width);

        isl_set* sched_dom = get_domain_trans_sched_domain(domain(acc_0), vectorize_loop_dim, fetch_width);
        cout << "\tsched domain: " << str(sched_dom) << endl;
        //schedule
        auto sched_vec = dot(trans, its(sched, sched_dom));
        cout << "\tsched before trans: " << str(sched) << endl;
        cout << "\tsched after trans: " << str(sched_vec) << endl;
        int fetch_ii = stride_in_dim(sched_vec, vectorize_loop_dim);

        //We may get to a loop that is projected out
        while(fetch_ii == 0) {
            fetch_ii = stride_in_dim(sched_vec, --vectorize_loop_dim);
        }
        cout << "Fetch_ii: " << fetch_ii << endl;
        assert(fetch_ii % fetch_width == 0);

        //get the write schedule with check
        auto final_sched = linear_schedule(sched_vec, {1}, fetch_ii / fetch_width * (fetch_width - 1) + 1, false);
        bool adjust = true;
        while (adjust) {
            adjust = false;
            //adjust against write
            while(violate_deps(final_sched, sched_record_map)) {
                //check dependency against sram write
                final_sched = linear_schedule(final_sched, {1}, 1, false);
                adjust = true;
            }
        }
        cout << "\tfinal sched: " << str(final_sched) << endl;

        //access map
        auto acc_vec = dot(trans, acc_0);
        auto slice = get_set_slice(range(acc_0), addr_dim, fetch_width);
        acc_vec = dot(acc_vec, slice);

        auto origin_slice = dot(acc_0, slice);
        cout << "trans max: " << get_dim_max(range(acc_vec), addr_dim)
            << " , origin max: " << get_dim_max(range(origin_slice), addr_dim) << endl;
        if (get_dim_max(range(acc_vec), addr_dim) <
                get_dim_max(range(origin_slice), addr_dim)) {
            //pad to the right
            acc_vec = pad_to_domain_ubuf_map(acc_vec, vectorize_loop_dim, 1);
            final_sched = pad_to_domain_ubuf_map(final_sched, vectorize_loop_dim, 1);
        }
        return make_pair(acc_vec, final_sched);
    }

  int get_prefetch_step(isl_map* acc_vec_new, isl_map* acc_vec_rem, int vectorized_dim, int addr_dim) {

    int ahead_step = 0;
    auto new_dim2denom = get_dim2denom(acc_vec_new);
    vector<int> unmask_dims;
    //Collect the div dimension on top of vectorization dimension
    for (auto it: new_dim2denom) {
        if (it.first < vectorized_dim) {
            cout << "div dimension: " << it.first << endl;
            unmask_dims.push_back(it.first);
        }
    }
    cout << "rem: " << str(acc_vec_rem) << endl;
    cout << "new: " << str(acc_vec_new) << endl;

    //TODO: document this.
    //Go through each iteration domain point for div dimension
    //Get the first value to see if we need to wait extra fetch to start in the stripmined dimension
    auto new_dom_set = get_domain_unmask_set(acc_vec_new, vectorized_dim, unmask_dims);
    auto rem_dom_set = get_domain_unmask_set(acc_vec_rem, vectorized_dim, unmask_dims);
    assert(new_dom_set.size() == rem_dom_set.size());
    for (auto i = 0; i < new_dom_set.size(); i ++) {
        isl_set* s_new = new_dom_set.at(i);
        isl_set* s_rem = rem_dom_set.at(i);
        cout << "\tnew: " << str(s_new) << endl;
        cout << "\trem: " << str(s_rem) << endl;
        int origin_max = get_dim_max(range(its(acc_vec_new, s_new)), addr_dim);
        int trans_max = get_dim_max(range(its(acc_vec_rem, s_rem)), addr_dim);
        cout << "origin max: " << str(origin_max) << endl;
        cout << "trans max: " << str(trans_max) << endl;
        ahead_step = max(ahead_step, origin_max - trans_max);
    }
    cout << "ahead_step : " << ahead_step << endl;
    return ahead_step;
  }

  void UBuffer::simplify_floor_div_expr() {
    for (auto bd_name: get_out_bundles()) {
      for (auto out_pt_name : port_bundles.at(bd_name) ) {

        auto am = to_map(access_map.at(out_pt_name));
        auto sched = to_map(schedule.at(out_pt_name));


        //map from input dim to denominator
        map<int, int> split_dims = get_dim2denom(am);
        if (split_dims.size()) {
          cout << "\tSimplify output port: " << out_pt_name << endl;
          auto trans_map = get_div_trans(am, split_dims);

          auto stripmining_am = dot(inv(trans_map), am);
          cout << "\t\t After strip mining: " << str(simplify_expr(stripmining_am)) << endl;
          access_map.at(out_pt_name) = to_umap(simplify(stripmining_am));
          domain.at(out_pt_name) = ::domain(stripmining_am);

          cout << "\t\tsched before rewrite: " << str(sched) << endl;
          sched = dot(inv(trans_map), sched);
          cout << "\t\tsplit new sched: " << str(sched) << endl;

          //update the original schedule for output port schedule generation
          schedule.at(out_pt_name) = to_umap(sched);
        }
      }
    }
  }

  bool check_back_to_back_access(map<int, int> & dim2denom) {
    if (dim2denom.size() <2) {
      return false;
    }
    int dim_diff = dim2denom.rbegin()->first - (std::next(dim2denom.rbegin()))->first;
    return dim_diff <= 1;
  }

bool pad_range_one_vec_dim(map<int, int> & dim2denom,
        isl_map* & acc_vec_new, isl_map* & sched_vec_new,
        isl_map* & acc_vec_after_pad,  int addr_dim, int fetch_width) {

    //We need to check the sched_vec_new,
    //if the stripmined inner most dimension is under the outer loop,
    //Then we do not need to pad, but there are loops between the outer loop and inner loop, we need to pad the inner most dimension
    bool back_to_back_access = check_back_to_back_access(dim2denom);
    int pvec_dim = get_inner_most_related_dom_dim_debug(acc_vec_new, addr_dim, fetch_width);
    cout << "Preliminary vectorization dim: " << pvec_dim << endl;
    vector<bool> rel_map = relation_map(acc_vec_new);

    bool pad_zero_iteration =false;
    //TODO male this more formal
    if ((!(rel_map.at(pvec_dim-1))) && (dim2denom.size() > 1)
            && (!back_to_back_access) && (pvec_dim-1)) {
      //Find the iteration dimension and pad 0 to 1
      cout << str(acc_vec_new) << endl;
      int in_dim = num_in_dims(acc_vec_new);
      cout << in_dim << endl;
      auto pad_acc_map = pad_to_domain_ubuf_map(acc_vec_new, pvec_dim - 1, 1);
      pad_acc_map = add_relation_ubuf_map(pad_acc_map, pvec_dim - 1, addr_dim);
      cout << "\tAfter padding the disappear dimension : " << str(pad_acc_map) << endl;
      acc_vec_after_pad = simplify(pad_acc_map);

      //Also need to check the II, basically double the rate
      auto pad_sched = pad_to_domain_ubuf_map(sched_vec_new, pvec_dim - 1, 1);
      pad_sched= add_relation_ubuf_map(pad_sched, pvec_dim - 1, 0);
      cout <<"Before double rate: "<< str(pad_sched) << endl;
      pad_sched = double_schedule_rate(pad_sched, pvec_dim - 1, fetch_width);
      cout << "After double rate: "<< str(pad_sched) << endl;
      sched_vec_new = pad_sched;
      pad_zero_iteration = true;
    }
    return pad_zero_iteration;
}

  pair<isl_map*, isl_map*> get_vectorized_read_simplified(isl_map* acc_0, isl_map* sched, map<string, isl_map*> sched_record_map, int fetch_width, int addr_dim, int& vectorized_dim, bool is_dual_port) {

    isl_ctx* ctx = ::ctx(acc_0);

    //First slice the range get the access range transform
    auto slice = get_set_slice(range(acc_0), addr_dim, 0/*offset*/, fetch_width);
    cout << "Range slice: " << str(slice) << endl;
    auto acc_slice = dot(acc_0, slice);
    cout << "after slice" << str(get_aff(acc_slice)) << endl;

    //From the range transform get the domain transform
    auto dim2denom = get_dim2denom(acc_slice);
    auto div_trans = get_div_trans(acc_slice, dim2denom);
    cout << str(div_trans) << endl;
    auto acc_vec_new = simplify_expr(dot(inv(div_trans), acc_slice));
    auto sched_vec_new = simplify_expr(dot(inv(div_trans), sched));
    auto acc_vec_after_pad = cpy(acc_vec_new);

    bool pad_zero_iteration = pad_range_one_vec_dim(dim2denom,
        acc_vec_new, sched_vec_new, acc_vec_after_pad, addr_dim, fetch_width);

    auto acc_vec_rem = remove_div(acc_vec_after_pad, addr_dim);
    acc_vec_rem = its(acc_vec_rem, ::domain(acc_vec_after_pad));


    //chances are that we have floor div in the new expression,
    //We need to remove the floor div, that this the acc_vec_rem
    //This is not a precise way to remove the floor
    //auto acc_pattern = AccessPattern(acc_vec_new, ctx);
    //auto acc_vec_rem = acc_pattern.get_access_map(ctx);
    cout << "new: " << str((acc_vec_new)) << endl;
    cout << "remove: " << str((acc_vec_rem)) << endl;

    //Get the vectorized dimension
    vectorized_dim =
        get_inner_most_related_dom_dim_debug(acc_vec_rem, addr_dim, fetch_width);
    cout << "Vectorization dimension: " << vectorized_dim << endl;
    //cout << "Relation map: " << relation_map(acc_vec_rem) << endl;

    //Could not find a vectorization dimension,
    // dimension is too only one fetch or less, just take the inner most dimension
    //if (vectorized_dim < 0) {
    //    vectorized_dim = get_inner_most_related_dom_dim(acc_slice, addr_dim, fetch_width) - 1;
    //    if (vectorized_dim < 0)
    //    {
    //    vectorized_dim = get_inner_most_related_dom_dim(acc_0, addr_dim, fetch_width) - 1;
    //    cout << vectorized_dim << endl;

    //    }
    //}

    //int safer_vectorizaed_dim = get_inner_most_related_dom_dim(acc_vec_rem);
    ////assert(vectorized_dim == safer_vectorizaed_dim);
    //vectorized_dim = max(vectorized_dim, safer_vectorizaed_dim);


    //Get ahead step to make sure that
    //we still get the correct data in time after remove floor div
    //FIXME: Need to rewrite this after ASPLOS
    //ahead does not mean we need to fetch more item
    int ahead_step = get_prefetch_step(acc_vec_new, acc_vec_rem, vectorized_dim, addr_dim);

    //projected out the reaccessing dimension
    isl_set* sched_dom =
        //get_domain_trans_sched_domain(domain(sched_vec_new), vectorized_dim, fetch_width);
        get_domain_trans_sched_domain(acc_vec_rem, vectorized_dim, fetch_width);
    cout << "sched domain: " << str(sched_dom) << endl;
    sched_vec_new = its(sched_vec_new, sched_dom);
    sched_vec_new = remove_irrelevant_in_dim(sched_vec_new);
    cout << "before:"  <<str(acc_vec_rem) << endl;
    acc_vec_rem = its(acc_vec_rem, sched_dom);
    cout << "after:"  <<str(acc_vec_rem) << endl;
    acc_vec_rem = remove_irrelevant_in_dim(acc_vec_rem);
    cout << "sched before projection: " << str(sched_vec_new) << endl;
    cout << "access: " << str(acc_vec_rem) << endl;

    //Getting the newer access dimension after irrelevant dim projection
    vectorized_dim = get_inner_most_related_dom_dim_debug(acc_vec_rem, addr_dim, fetch_width);
    cout << "vectorization dimension after irrelevant dimension removal: " << vectorized_dim << endl;
    //After vectorization we just pick the inner most dimension
    //if (vectorized_dim < 0) {
    //    vectorized_dim = num_in_dims(acc_vec_rem) - 2;
    //    cout << "new vectorized_dim: " << vectorized_dim << endl;
    //   int  vectorized_dim_debug = get_inner_most_related_dom_dim_debug(acc_vec_rem, addr_dim, fetch_width);
    //   cout << "DEBUG: " << vectorized_dim_debug << endl;
    //}

    //Move the schedule ahead and pad the domain
    //fetch extra to cover the whole iteration domain after vectorization
    //if (ahead_step) {
    if (get_dim_max(range(acc_vec_rem), addr_dim) <
                get_dim_max(range(acc_slice), addr_dim) ) {
      acc_vec_rem = pad_to_domain_ubuf_map(acc_vec_rem, vectorized_dim, ahead_step);
      sched_vec_new = pad_to_domain_ubuf_map(sched_vec_new, vectorized_dim, ahead_step);
    }
    cout << "sched before adjust: " << str(sched_vec_new) << endl;
    cout << "schedule adjust forward step: " << ahead_step << endl;

    //No need to pad, it is handled by prefetch step
    //if (pad_zero_iteration) {
    //    ahead_step += 1;
    //    assert(false);
    //}

    //Get final schedule
    auto final_sched =
        get_sram2tb_schedule_with_check(sched_vec_new, sched_record_map, ahead_step, vectorized_dim, 2/*1 cycle read latency, 1 extra cycle */, false);

    cout << "final schedule: " << str(final_sched) << endl;
    cout << "final access: " << str(acc_vec_rem) << endl;
    return make_pair(acc_vec_rem, final_sched);
  }

  std::set<int> get_decouple_tb_in_dim(isl_map* acc_0, int fetch_width, int addr_dim) {
    isl_ctx* ctx = ::ctx(acc_0);

    //First slice the range get the access range transform
    auto slice = get_set_slice(range(acc_0), addr_dim, 0/*offset*/, fetch_width);
    auto acc_slice = dot(acc_0, slice);

    //From the range transform get the domain transform
    auto dim2denom = get_dim2denom(acc_slice);

    isl_map* tb_out_access_map;
    std::set<int> proj_dims;
    if(dim2denom.size() > 1) {
        int proj_dim_cnt = 0;
        //only stripmine the outter strip loop
        cout << dim2denom << endl;
        cout << str(acc_0) << endl;
        dim2denom.erase(std::prev(dim2denom.end()));

        //Look at the extent it must need multiple fetch
        for (auto it: dim2denom) {
            if(get_dim_extent(::domain(acc_0), it.first) > fetch_width) {
              proj_dims.insert(it.first + proj_dim_cnt);
              proj_dim_cnt ++;
            }
        }
    }
    return proj_dims;
  }

  pair<isl_map*, isl_map*> get_stripmined_read(isl_map* acc_0, isl_map* sched, int fetch_width, int addr_dim, int vectorized_dim) {

    isl_ctx* ctx = ::ctx(acc_0);

    //First slice the range get the access range transform
    auto slice = get_set_slice(range(acc_0), addr_dim, 0/*offset*/, fetch_width);
    auto acc_slice = dot(acc_0, slice);

    //From the range transform get the domain transform
    auto dim2denom = get_dim2denom(acc_slice);

    isl_map* tb_out_access_map;
    isl_map* tb_out_sched;
    std::set<int> proj_dims;

    //TODO back_to back access is just a heuristic what we should do is to caculate dd
    if ((dim2denom.size() > 1) && (!check_back_to_back_access(dim2denom))) {
        int proj_dim_cnt = 0;
        //only stripmine the outter strip loop
        cout << dim2denom << endl;
        cout << str(acc_0) << endl;
        dim2denom.erase(std::prev(dim2denom.end()));
        for (auto it: dim2denom) {
            cout << "domain: " << str(::domain(acc_0)) << endl;
            cout << "dim extent: " << get_dim_extent(::domain(acc_0), it.first) << endl;
            if(get_dim_extent(::domain(acc_0), it.first) > fetch_width) {
              proj_dims.insert(it.first + proj_dim_cnt);
              proj_dim_cnt ++;
            }
        }
    }
    if (proj_dims.size() > 0) {

        auto div_trans = get_div_trans(acc_slice, dim2denom);
        //Find the tb output
        auto acc_stripmine = simplify_expr(dot(inv(div_trans), acc_0));
        tb_out_sched= simplify_expr(dot(inv(div_trans), sched));
        cout << "\taccess map for tb out: " << str(acc_stripmine) << endl;
        cout << "\tproj dim: " << proj_dims << endl;;
        auto ap_tb = AccessPattern(acc_stripmine, ctx);
        tb_out_access_map = ap_tb.get_access_map_and_decouple_reuse(ctx, addr_dim, proj_dims);
    } else {
        auto acc_pattern = AccessPattern(acc_0, ctx);
        tb_out_access_map= acc_pattern.get_access_map_and_decouple_reuse(ctx, addr_dim , false);
        tb_out_sched = sched;
    }

    cout << "tb output access map: " << str(tb_out_access_map) << endl;

    return make_pair(tb_out_access_map, tb_out_sched);
  }

    pair<isl_map*, isl_map*> get_vectorized_read(isl_map* acc_0, isl_map* sched, map<string, isl_map*> sched_record_map, int fetch_width, int addr_dim, bool is_dual_port) {
        int vectorize_loop_dim = get_inner_most_related_dom_dim(acc_0, addr_dim, fetch_width);
        int vectorize_loop_dim_origin = vectorize_loop_dim;
        auto trans =
            get_domain_trans_with_reaccess_mask(domain(acc_0), vectorize_loop_dim, fetch_width);


        ////TODO: This need unit test strided vectorization
        ////at least pad to fetch_width, so that we can vectorize it
        //while(get_dim_max(domain(acc_0), vectorize_loop_dim) < fetch_width) {
        //    acc_0 = pad_to_domain_ubuf_map(acc_0, vectorize_loop_dim, 1);
        //}

        isl_set* sched_dom = get_domain_trans_sched_domain(domain(acc_0), vectorize_loop_dim, fetch_width);
        cout << "\tsched domain: " << str(sched_dom) << endl;
        //schedule
        auto sched_vec = dot(trans, its(sched, sched_dom));
        cout << "\tsched after trans: " << str(sched_vec) << endl;

        //A special case the vectorization dimension range span is less than fetch width
        //The vectorization dimension is above
        int offset = get_domain_span_range(acc_0, vectorize_loop_dim, addr_dim);
        cout << "Offset: " << offset << endl;
        if (offset >= fetch_width)
            offset = 0;

        //access map
        auto acc_vec = dot(trans, acc_0);
        auto slice = get_set_slice(range(acc_0), addr_dim, 0, fetch_width);
        acc_vec = dot(acc_vec, slice);

        //Check if we have sliding window across domain
        auto dim2denom = get_dim2denom(acc_vec);
        bool slide_over_one_fetch = false;
        if (dim2denom.size()) {
            //check if we slide over more than one wide fetch
            for(auto it: dim2denom) {
                if (get_dim_extent(::domain(acc_vec), it.first) > it.second) {
                    slide_over_one_fetch = true;
                }
            }

            //Do the transformation
            auto div_trans = get_div_trans(acc_vec, dim2denom);
            acc_vec = dot(inv(div_trans), acc_vec);
            sched_vec = simplify_expr(dot(inv(div_trans), sched_vec));
            if (offset == 0)
                vectorize_loop_dim += 1;
            else
                vectorize_loop_dim -= 1;
        }

        //fetch one more from SRAM
        auto origin_slice = dot(acc_0, slice);
        cout << "\t slide over more than one fetch: " << slide_over_one_fetch << endl;
        cout << "\t acc 0 : " << str(acc_0) << endl;
        cout << "\t acc vec: " << str(acc_vec) << endl;
        cout << "\t origin_slice: " << str(origin_slice) << endl;
        cout << "\ttrans max: " << get_dim_max(range(acc_vec), addr_dim)
            << " , origin max: " << get_dim_max(range(origin_slice), addr_dim) << endl;
        cout << "\ttrans max: " << get_domain_span_range(acc_vec, vectorize_loop_dim, addr_dim)
            << " , origin max: " << get_domain_span_range(origin_slice, vectorize_loop_dim_origin, addr_dim) << endl;
        cout << "\tvectorize loop dim: " << vectorize_loop_dim << endl;
        cout << "\torigin vectorize loop dim: " << vectorize_loop_dim_origin<< endl;
        cout << "\taccess vec before padding: " << str(acc_vec) << endl;
        cout << "\tsched vec before padding: "<< str(sched_vec) << endl;
        int ahead_step = 0;
        //pad condition complex, put into a function
        if (get_dim_max(range(acc_vec), addr_dim) <
                get_dim_max(range(origin_slice), addr_dim) ||
                slide_over_one_fetch) {
            //pad to the right
            acc_vec = pad_to_domain_ubuf_map(acc_vec, vectorize_loop_dim, 1);
            sched_vec = pad_to_domain_ubuf_map(sched_vec, vectorize_loop_dim, 1);
            ahead_step = 1;
        }

        //mask the refetch from SRAM if we keep fetching the same location
        auto domain_mask = get_domain_mask(acc_vec, vectorize_loop_dim);
        cout << "domain mask: " << str(domain_mask) << endl;
        if(!isl_map_is_identity(domain_mask)) {
            ahead_step = 1;
        }
        acc_vec = dot(domain_mask, acc_vec);
        sched_vec = dot(domain_mask, sched_vec);
        cout << "\tsched vec before moving: "<< str(sched_vec) << endl;

        //Adjust the sram2tb fetch based on the schedule
        auto final_sched = get_sram2tb_schedule_with_check(sched_vec, sched_record_map, ahead_step, vectorize_loop_dim, 2,  is_dual_port);
        cout << "\tfinal access: " << str(acc_vec) << endl;
        cout << "\tfinal sched: " << str(final_sched) << endl;
        return make_pair(acc_vec, final_sched);
    }

      pair<std::map<string, UBuffer>, vector<string> >
        UBuffer::vectorization(CodegenOptions& options, int dim_id) {
          int fetch_width = options.mem_hierarchy.at("mem").fetch_width;
          vector<int> iis = options.iis;
          bool is_dual_port = options.mem_hierarchy.at("mem").dual_port_sram;


          std::map<string, UBuffer> ret;
          std::vector<string> remove_deps;
          UBuffer sram;

          sram.name = name + "_sram";
          sram.ctx = ctx;
          sram.port_widths = port_widths;
          sram.hardware.in_port_width = fetch_width;
          sram.hardware.out_port_width = fetch_width;
          sram.hardware.vectorization_dim = maybe<int>(dim_id);
          vector<string> in_bundle = get_in_bundles();
          vector<string> out_bundle = get_out_bundles();

          cout << "in bundle  = " << in_bundle.size() << endl;
          cout << "out bundle = " << out_bundle.size() << endl;
          //recording the new schedule in order to prevent SRAM collision
          map<string, isl_map*> sched_record_map;


          int agg_cnt = 0;
          for (auto bd_name : in_bundle) {

            //create agg
            UBuffer agg_buf;
            agg_buf.name = name + "_" + to_string(agg_cnt) + "_agg";
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
              string suffix = "_agg2sram";
              //auto trans_pair = acc_pattern.get_op_transform(ctx, dim_id, fetch_width, suffix);
              //isl_map* op_trans = trans_pair.first;
              //isl_set* sched_domain = trans_pair.second;
              //std::cout << "transform rewrite: " << str(op_trans) << endl;
              //cout << "IS loop: " << is_self_loop(in_pt_name) << endl;

              //  Before create rewrite buffer to the batched vectorized op, we need to pad the range access map,
              //  make sure the dim_id is the multiplier of 4.
              //auto buf2op = to_map(inv(access_map.at(in_pt_name)));
              //int rem = get_pad_remainder(buf2op, dim_id, fetch_width);
              //umap* padded_buf2op;
              //if (rem == 0)
              //  padded_buf2op = to_umap(buf2op);
              //else
              //  padded_buf2op = to_umap(pad_to_domain_ubuf_map(buf2op, dim_id, fetch_width - rem));
              //auto rewrite_buf2op = dot(padded_buf2op, op_trans);
              //cout << "rewrite buf2op: " << str(rewrite_buf2op) << endl;
              ////auto new_op_domain = pick(get_sets(range(rewrite_buf2op)));
              //cout << "rewrite buffer to op map: " << str(access_map.at(in_pt_name)) << endl;

              //add in port to agg_buf
              auto inpt_acc_map = remap_access_to_new_buffer(in_pt_name, "_" +to_string(agg_cnt) + "_agg");

              //If it's a self loop(update operation), we need to decouple the reuse
              if (is_self_loop(in_pt_name)){
                inpt_acc_map = acc_pattern.get_access_map_and_decouple_reuse(ctx, dim_id, false);
                inpt_acc_map = add_range_suffix(inpt_acc_map, "_" + to_string(agg_cnt) + "_agg");
              }

              //Strip mining the agg input
              //TODO: no need for input strip mining could be removed
              {
                //if (acc_pattern.can_stripmining(ctx, dim_id, fetch_width)) {
                if (false) {

                  isl_map* op_stripmining = acc_pattern.get_op_stripmining(ctx, dim_id, fetch_width, "");
                  std::cout << "\ttransform stripmining: " << str(op_stripmining) << endl;
                  isl_set* sm_domain = range(its(op_stripmining, domain.at(in_pt_name)));
                  std::cout << "\tdomain stripmining: " << str(sm_domain) << endl;
                  auto sm_access_map = dot(inv(op_stripmining), inpt_acc_map);
                  auto sm_sched = dot(inv(op_stripmining), to_map(schedule.at(in_pt_name)));
                  sm_domain = add_suffix(sm_domain, "_in2agg_" + str(agg_cnt));
                  sm_access_map = add_domain_suffix(sm_access_map, "_in2agg_" + str(agg_cnt));
                  sm_sched = add_domain_suffix(sm_sched, "_in2agg_" + str(agg_cnt));

                  cout << "\tAccess map add to agg_in: " << str(sm_access_map) << endl;
                  agg_buf.add_in_pt(in_pt_name+"_in", sm_domain, sm_access_map, its(sm_sched, sm_domain));

                } else {
                  auto dom = domain.at(in_pt_name);
                  //auto sched = its(new_sched.at(acc_pattern.op_name), dom);
                  auto sched = its(to_map(schedule.at(in_pt_name)), dom);
                  dom = add_suffix(dom, "_in2agg_" + str(agg_cnt));
                  inpt_acc_map = add_domain_suffix(inpt_acc_map, "_in2agg_" + str(agg_cnt));
                  sched = add_domain_suffix(sched, "_in2agg_" + str(agg_cnt));
                  agg_buf.add_in_pt(in_pt_name+"_in", dom, inpt_acc_map, sched);
                }
                agg_buf.port_bundles[bd_name+"_agg_in"].push_back(in_pt_name + "_in");
              }
              //Add sched_record_map in also to avoid overlapping
              auto sram_ir = get_vectorized_write(
                      to_map(access_map.at(in_pt_name)),
                      to_map(schedule.at(in_pt_name)),
                      sched_record_map, fetch_width, dim_id, agg_cnt);

              isl_map* vectorized_access = add_domain_suffix(sram_ir.first, "_agg2sram_" + str(agg_cnt));
              isl_set* dom = ::domain(vectorized_access);
              isl_map* sched = add_domain_suffix(sram_ir.second, "_agg2sram_" + str(agg_cnt));


              //cout << "Schedule before its domain: " << str(sched) << endl;
              //cout << "its domain: " << str(dom) << endl;
              //cout << "Schedule add to the new agg: " << str(simplify_expr(its(sched, dom))) << endl;
              auto range_interpolation_maps = get_vectorize_interpolate(
                      range(vectorized_access), dim_id, fetch_width);
              int pt_cnt = 0;
              for (auto interpolation: range_interpolation_maps) {
                string agg_pt_name = in_pt_name + "_out_" + std::to_string(pt_cnt);
                agg_buf.port_bundles[bd_name + "_agg_out"].push_back(agg_pt_name);
                isl_map* rewrite_access_map = dot(vectorized_access, interpolation);
                auto agg_out_access_map = add_range_suffix(rewrite_access_map, "_" + str(agg_cnt) + "_agg");
                agg_buf.add_out_pt(agg_pt_name, dom, agg_out_access_map, simplify_expr(its(sched, dom)));

                //decouple the access map
                if(is_self_loop_in(in_pt_name)) {
                  auto acc_pt = AccessPattern(agg_out_access_map, ctx);
                  auto decouple_acc_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id, false);
                  agg_buf.access_map[agg_pt_name] = to_umap(decouple_acc_map);
                }

                auto sram_in_access_map = add_range_suffix(rewrite_access_map, "_sram");
                string sram_pt_name = in_pt_name + "_in_" + std::to_string(pt_cnt++);
                sram.port_bundles[bd_name].push_back(sram_pt_name);
                sram.add_in_pt(sram_pt_name, dom, sram_in_access_map, simplify_expr(its(sched, dom)));
              }

              //auto slice_dim = acc_pattern.get_dom_slice(ctx, dim_id, fetch_width, suffix);
              //cout << "Slice dim: " << str(slice_dim) << endl;

              //Create schedule on the fly
              //isl_map* sched = get_agg2sram_schedule(schedule.at(in_pt_name), slice_dim, op_trans, sched_domain, fetch_width);
              //add out port to agg_buf
              //add_vectorized_pt_to_ubuf(agg_buf, rewrite_buf2op, sched, in_pt_name, bd_name+"_agg_out", dim_id, fetch_width, agg_cnt, true);
              //add in port to sram
              //add_vectorized_pt_to_ubuf(sram, rewrite_buf2op, sched, in_pt_name, bd_name, dim_id, fetch_width, agg_cnt, false);
              //recode the schedule
              sched_record_map[domain_name(sched)] = sched;

              cout << "agg2sram sched: " << str(sched)  << endl;
            }
            agg_cnt ++;
            agg_buf.set_dim_id();
            ret.insert({agg_buf.name, agg_buf});
            remove_deps.push_back(domain_name(agg_buf.access_map.at(pick(agg_buf.get_out_ports()))));
            cout << "AGG : " << agg_buf << endl;
            cout << "AGG Schedule: " << str(agg_buf.global_schedule()) << endl;
          }

          int tb_cnt = 0;
          for (auto bd_name: out_bundle) {

            cout << "Vectorize output port bundle: " << bd_name << endl;
            map<string, isl_map*> op_sched_map;
            int port_width_per_bd = port_bundles.at(bd_name).size();
            for (auto out_pt_name : port_bundles.at(bd_name) ) {
              cout << "\tVectorize output port: " << out_pt_name << endl;

              auto am = to_map(access_map.at(out_pt_name));
              auto sched = to_map(schedule.at(out_pt_name));


              //New method for sram read schedule
              int vectorized_dim = 0;
              auto sram_ir = get_vectorized_read_simplified(
                      to_map(access_map.at(out_pt_name)),
                      to_map(schedule.at(out_pt_name)),
                      sched_record_map, fetch_width, dim_id, vectorized_dim, is_dual_port);

              isl_map* vectorized_access = add_domain_suffix(sram_ir.first, "_sram2tb_" + str(tb_cnt));
              isl_set* dom = ::domain(vectorized_access);
              sched = add_domain_suffix(sram_ir.second, "_sram2tb_" + str(tb_cnt));
              sched_record_map[domain_name(sched)] = sched;

              auto acc_pattern = AccessPattern(
                  to_map(access_map.at(out_pt_name)), ctx);

              std::cout << "before rewrite: " << acc_pattern << endl;

              /*
              //produce the operation transfomation
              string suffix = "_sram2tb";
              auto trans_pair = acc_pattern.get_op_transform(ctx, dim_id, fetch_width, suffix);
              isl_map* op_trans = trans_pair.first;
              isl_set* sched_domain = trans_pair.second;
              std::cout << "transform rewrite: " << str(op_trans) << endl;


              auto buf2op = inv(access_map.at(out_pt_name));


              //no need to pad since we handle it in the previous stage
              auto rewrite_buf2op = dot(buf2op, op_trans);
              cout << "\t\toriginal buf2out: "<< str(inv(access_map.at(out_pt_name))) << endl
                << "\t\tpadded and batched buf2out : "<< str(rewrite_buf2op) << endl;
              auto new_op_domain = pick(get_sets(range(rewrite_buf2op)));



              //Slice the iteration domain for the last step,
              auto slice_dim = acc_pattern.get_dom_slice(ctx, dim_id, fetch_width, suffix);
              cout << "slice dim: " << str(slice_dim) << endl;

              //Do not do pad schedule
              //This is making the schedule more conservative
              sched = get_sram2tb_schedule_with_check(to_umap(sched), sched_record_map,
                      slice_dim, op_trans, sched_domain, delay_step, fetch_width);
              cout << "SRAM2TB Schedule result: " << str(sched) << endl;
              sched_record_map[domain_name(sched) + "_" + str(tb_cnt)] = sched;
              for (auto it: sched_record_map) {
                  cout << it.first << ": " <<str(it.second) << endl;
              }


              vector<umap*> ap_vec = get_access_pattern_vector(rewrite_buf2op, out_pt_name, dim_id, fetch_width);*/

              UBuffer tb;
              tb.name = name + "_" + to_string(tb_cnt) + "_tb";
              tb.ctx = ctx;
              tb.port_widths = port_widths;
              tb.hardware.in_port_width = fetch_width;

              auto range_interpolation_maps = get_vectorize_interpolate(
                      range(vectorized_access), dim_id, fetch_width);
              int pt_cnt = 0;
             std::set<int> proj_dim =
                 get_decouple_tb_in_dim(to_map(access_map.at(out_pt_name)), fetch_width, dim_id);
              for (auto interpolation: range_interpolation_maps) {
                string tb_pt_name = out_pt_name + "_out_" + std::to_string(pt_cnt);
                tb.port_bundles[bd_name + "_tb_in"].push_back(tb_pt_name);
                isl_map* rewrite_access_map = dot(vectorized_access, interpolation);
                cout << "\t rewrite access map: " << str(simplify_expr(rewrite_access_map)) << endl;
                auto tb_in_access_map = add_range_suffix(rewrite_access_map, "_" + str(tb_cnt) + "_tb");
                //tb.add_in_pt(tb_pt_name, dom, tb_in_access_map, simplify_expr(its(sched, dom)));

                //always decouple the output access, and remove refetch from SRAM
                auto acc_pt = AccessPattern(tb_in_access_map, ctx);

                if (proj_dim.size() == 0) {
                  //old method to get tb in access pattern
                  tb_in_access_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id, false);
                } else {
                  //new method for get tb in access pattern
                  tb_in_access_map = acc_pt.get_access_map_and_decouple_reuse(ctx, dim_id, vectorized_dim);
                }

                //tb.access_map[tb_pt_name] = to_umap(decouple_acc_map);

                auto sram_out_access_map = add_range_suffix(rewrite_access_map, "_sram");
                string sram_pt_name = out_pt_name + "_out_" + std::to_string(pt_cnt++);
                sram.port_bundles[bd_name].push_back(sram_pt_name);
                auto final_sched = its(sched, dom);
                //auto acc_pt_sram = AccessPattern(sram_out_access_map, ctx);
                //isl_map* normalized_access = acc_pt_sram.get_access_map(ctx);
                //auto  normalized_pair = acc_pt_sram.get_access_map_mask_refetch(ctx);
                //isl_map* normalized_access = normalized_pair.first;
                //auto domain_trans = normalized_pair.second;

                //cout << "normalized access : " << str(normalized_access) << endl;
                //auto final_sched = dot(domain_trans, its(sched, dom));
                //sram_out_access_map = dot(domain_trans, sram_out_access_map);
                //tb_in_access_map = dot(domain_trans, decouple_acc_map);
                tb.add_in_pt(tb_pt_name, ::domain(tb_in_access_map), tb_in_access_map, simplify_expr(final_sched));
                sram.add_out_pt(sram_pt_name, ::domain(sram_out_access_map), sram_out_access_map, simplify_expr(final_sched));
              }
              //add_vectorized_pt_to_ubuf(sram, ap_vec, sched,
              //        bd_name + "_"+str(tb_cnt), dim_id, fetch_width, tb_cnt, true/*is output*/);
              //add_vectorized_pt_to_ubuf(tb, ap_vec, sched,
              //        bd_name+"_tb_in", dim_id, fetch_width, tb_cnt, false/*is input*/);

              cout << "\tAdd TB output port: " << out_pt_name << endl;


              pair<isl_map*, isl_map*> tb_ir = get_stripmined_read(
                      to_map(access_map.at(out_pt_name)),
                      to_map(schedule.at(out_pt_name)),
                      fetch_width, dim_id, vectorized_dim);

              auto outpt_acc_map = add_range_suffix(tb_ir.first, "_" + to_string(tb_cnt) + "_tb");
              isl_set* sm_domain = ::domain(outpt_acc_map);
              auto sm_access_map = outpt_acc_map;
              auto sm_sched = tb_ir.second;
              sm_domain = add_suffix(sm_domain, "_tb2out_" + str(tb_cnt));
              sm_access_map = add_domain_suffix(sm_access_map, "_tb2out_" + str(tb_cnt));
              sm_sched = add_domain_suffix(sm_sched, "_tb2out_" + str(tb_cnt));
              cout << "\tAccess map decouple reuse: " << str(outpt_acc_map) << endl;
              //tb.add_out_pt(out_pt_name+"_out", sm_domain, sm_access_map, sm_sched);
              tb.add_out_pt(out_pt_name+"_out", sm_domain, sm_access_map, its(sm_sched, sm_domain));
              tb.port_bundles[bd_name+"_tb_out"].push_back(out_pt_name + "_out");



              //int dim_added = num_in_dims(vectorized_access) - num_in_dims(am);
              //cout << "vec access: " << str(vectorized_access) << endl;
              //cout << "original access: " << str(am) << endl;
              //cout << "\tvec dim: " << vectorized_dim << endl;
              //if(dim_added > 0) {
              //    vectorized_dim -= dim_added;
              //}
              //outpt_acc_map = acc_pattern.get_access_map_and_decouple_reuse(ctx, dim_id, vectorized_dim);
              //auto outpt_acc_map = acc_pattern.get_access_map_and_decouple_reuse(ctx, dim_id, false);
              //outpt_acc_map = add_range_suffix(outpt_acc_map, "_" + to_string(tb_cnt) + "_tb");

              ////assert(dim_added <= 0);
              ////Strip mining the output loop
              ////TODO: remove stripmining
              ////Strip mining is needed for unit test
              ////if (acc_pattern.can_stripmining(ctx, dim_id, fetch_width)) {
              //if (false) {
              //  isl_map* op_stripmining = acc_pattern.get_op_stripmining(ctx, dim_id, fetch_width, "");
              //  std::cout << "\ttransform stripmining: " << str(op_stripmining) << endl;
              //  isl_set* sm_domain = range(its(op_stripmining, domain.at(out_pt_name)));
              //  std::cout << "\tdomain stripmining: " << str(sm_domain) << endl;
              //  auto sm_access_map = dot(inv(op_stripmining), outpt_acc_map);
              //  auto sm_sched = dot(inv(op_stripmining), to_map(schedule.at(out_pt_name)));
              //  sm_domain = add_suffix(sm_domain, "_tb2out_" + str(tb_cnt));
              //  sm_access_map = add_domain_suffix(sm_access_map, "_tb2out_" + str(tb_cnt));
              //  sm_sched = add_domain_suffix(sm_sched, "_tb2out_" + str(tb_cnt));
              //  cout << "\tAccess map decouple reuse: " << str(outpt_acc_map) << endl;
              //  //tb.add_out_pt(out_pt_name+"_out", sm_domain, sm_access_map, sm_sched);
              //  tb.add_out_pt(out_pt_name+"_out", sm_domain, sm_access_map, its(sm_sched, sm_domain));
              //  tb.port_bundles[bd_name+"_tb_out"].push_back(out_pt_name + "_out");
              //  assert(false);

              //} else   {
              //  isl_set* sm_domain = domain.at(out_pt_name);
              //  auto sm_access_map = outpt_acc_map;
              //  auto sm_sched = to_map(schedule.at(out_pt_name));
              //  sm_domain = add_suffix(sm_domain, "_tb2out_" + str(tb_cnt));
              //  sm_access_map = add_domain_suffix(sm_access_map, "_tb2out_" + str(tb_cnt));
              //  sm_sched = add_domain_suffix(sm_sched, "_tb2out_" + str(tb_cnt));
              //  cout << "\tAccess map decouple reuse: " << str(outpt_acc_map) << endl;
              //  //tb.add_out_pt(out_pt_name+"_out", sm_domain, sm_access_map, sm_sched);
              //  tb.add_out_pt(out_pt_name+"_out", sm_domain, sm_access_map, its(sm_sched, sm_domain));
              //  tb.port_bundles[bd_name+"_tb_out"].push_back(out_pt_name + "_out");
              //}

              //cout << "TB  : " << tb << endl;
              ////Add one more step to pad reacess dimension
              ////tb.pad_reaccess_dimension(fetch_width);

              //////Check capacity of tb
              ////auto capacity = tb.capacity();
              //cout << "TB size: " << capacity << endl;
              //auto mem = options.mem_hierarchy.at("mem");
              //assert(capacity <= mem.capacity.at("tb") / mem.in_port_width.at("tb"));

              tb.set_dim_id();
              ret.insert({tb.name, tb});
              cout << "TB  : " << tb << endl;

              cout << "TB Schedule: " << str(tb.global_schedule())  << endl;
              tb_cnt ++;
            }
          }
          sram.set_dim_id();
          cout << "SRAM: " << sram << endl;
          cout << "SRAM Schedule: " << str(sram.global_schedule()) << endl;
          ret.insert({sram.name, sram});
          return make_pair(ret, remove_deps);
        }

        void UBuffer::pad_reaccess_dimension(int fetch_width) {
          //Post processing method on the address domain of unified buffer
          //Chances are that we have reaccess from SRAM and those reaccess is above the vectorization dimension
          //so those data saved in new location in TB, we need to extend the address dimension to
          //differentiate the data with the data Previously fetched into TB

          //Check the condition if we need refetch
          //And they are also not related to the output
          std::set<int> in_pad_dim_set;
          for (auto inpt: get_in_ports()){
            auto am = to_map(access_map.at(inpt));
            auto rel_map = relation_map(am);
            cout << rel_map << endl;
            for (auto it = rel_map.begin() + 1; it < rel_map.end(); it ++) {
              int id = it - rel_map.begin();
              if (*it == false)
                in_pad_dim_set.insert(id);
            }
          }
          std::set<int> out_pad_dim_set;
          for (auto outpt: get_out_ports()){
            auto am = to_map(access_map.at(outpt));
            auto rel_map = relation_map(am);
            cout << rel_map << endl;
            for (auto it = rel_map.begin() + 1; it < rel_map.end(); it ++) {
              int id = it - rel_map.begin();
              if (*it == false)
                out_pad_dim_set.insert(id);
            }
          }
          //TODO: this is a little heuristic base,
          //we need to figure out a better way, discuss with Fred
          //How can we group the input and output pairs
          std::set<vector<int>> pad_dim_set;
          for (auto pad_dim : in_pad_dim_set) {
              if (out_pad_dim_set.count(pad_dim)) {
                  //Basic situation that two dimension are upper reaccess dimension
                  pad_dim_set.insert({pad_dim});
              } else {
                  auto out_dom = domain.at(pick(get_out_ports()));
                  auto in_dom = domain.at(pick(get_in_ports()));
                  int out_ext = get_domain_range(out_dom, pad_dim);
                  int in_ext = get_domain_range(in_dom, pad_dim);
                  if (out_ext == in_ext) {
                    //This is the case that sliding between wide fetch
                    //with ext less than fetch width
                    pad_dim_set.insert({pad_dim});
                  } else {
                    int in_upper_ext = get_domain_range(in_dom, pad_dim - 1);
                    int out_upper_ext = get_domain_range(out_dom, pad_dim - 1);
                    if (in_upper_ext * in_ext == round_up_to_multiple_of(out_upper_ext, fetch_width)) {
                        pad_dim_set.insert({pad_dim, pad_dim-1});
                    }
                  }

              }
          }


          cout << "All dimensions need to be padded: " << pad_dim_set << endl;
          if (pad_dim_set.size() == 0)
              return;
          for (auto pt: get_in_ports()) {
            umap* am = access_map.at(pt);
            for (vector<int> pad_in_dim_vec: pad_dim_set) {
              assert(pad_in_dim_vec.size() <= 2);
              int out_pad_dim = get_out_padding_dimension(to_map(am), pad_in_dim_vec.at(0));
              am = pad_one_more_dim_relation_to_map(am, pad_in_dim_vec, out_pad_dim, 1);
            }
            access_map.at(pt) = am;
          }
          for (auto pt: get_out_ports()) {
            umap* am = access_map.at(pt);
            for (vector<int> pad_in_dim_vec: pad_dim_set) {
              int out_pad_dim = get_out_padding_dimension(to_map(am), pad_in_dim_vec.at(0));
              if (pad_in_dim_vec.size() == 2)
                am = pad_one_more_dim_relation_to_map(am, {pad_in_dim_vec.at(1)}, out_pad_dim, 1);
              else if (pad_in_dim_vec.size() == 1)
                am = pad_one_more_dim_relation_to_map(am, pad_in_dim_vec, out_pad_dim, 1);
            }
            access_map.at(pt) = am;
          }
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

        auto read_id = isl_union_set_identity(cpy(read));

        auto read_times = dot(inv(op_reads), sched);
        //auto simul_reads = dot(read_times, inv(read_times));
        // Set of simultaneous reads to different locations
        auto simul_reads = diff(dot(read_times, inv(read_times)), read_id);

        cout << "simul reads: " << str(simul_reads) << endl;
        cout << tab(1) << "any simultaneous reads: " << !empty(simul_reads) << endl;

        auto data_to_bank = its(to_umap(bank_func), read);
        auto same_bank = dot(data_to_bank, inv(data_to_bank));

        cout << "data_to_bank: " << str(data_to_bank) << endl;

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

      void UBuffer::set_dim_id() {
        for (auto inpt : get_all_ports()) {
            auto acc_m = to_map(access_map.at(inpt));
            acc_m = check_dim_id(acc_m);
            domain[inpt] = ::domain(acc_m);
            access_map[inpt] = to_umap(simplify_expr(acc_m));
            auto sched = to_map(schedule.at(inpt));
            sched = check_dim_id(sched);
            schedule[inpt] = to_umap(simplify_expr(sched));
        }
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

      //This is not correct
      //map<string, fixed_subaddress> find_fixed_subaddresses(const vector<string>& ports, UBuffer& buf) {
      //  map<string, fixed_subaddress> addrs;
      //  for (auto pt : ports) {
      //    isl_multi_aff* access = get_multi_aff(buf.access_map.at(pt));
      //    map<int, isl_val*> constant_offsets = constant_components(access);
      //    for (auto ent : constant_offsets) {
      //      addrs[pt][ent.first] = to_int(ent.second);
      //    }
      //  }
      //  return addrs;
      //}


      map<fixed_subaddress, vector<string>> find_fixed_subaddresses(const vector<string>& ports, UBuffer& buf) {
        map<fixed_subaddress, vector<string>> addrs;
        for (auto pt : ports) {
          isl_multi_aff* access = get_multi_aff(buf.access_map.at(pt));
          map<int, isl_val*> constant_offsets = constant_components(access);
          fixed_subaddress tmp;
          for (auto ent : constant_offsets) {
            tmp.insert({ent.first, to_int(ent.second)});
          }
          dbhc::map_insert(addrs, tmp, pt);
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

      vector<vector<string> > overlapping_large_io_port_groups(CodegenOptions& options, UBuffer& buf){
        vector<vector<string> > overlapping = overlapping_ports(buf);

        int grouped = 0;
        for (auto& grp : overlapping) {
          grouped += grp.size();
        }

        assert(grouped == buf.get_all_ports().size());

        vector<vector<string> > filtered_io_groups;
        for (auto& g : overlapping) {
          vector<string> ins;
          std::set<string> outs;
          for (auto pt : g) {
            if (buf.is_in_pt(pt)) {
              ins.push_back(pt);
            } else {
              assert(buf.is_out_pt(pt));
              outs.insert(pt);
            }
          }
          auto out_unique_map = buf.get_unique_ports(outs);
          vector<string> unique_outs;
          for (auto it: out_unique_map) {
            unique_outs.push_back(it.first);
          }
          cout << "overlapping input:" << ins << endl;
          cout << "overlapping output:" << unique_outs << endl << endl;
          //TODO should take conside the hardware constraint here
          if (ins.size() > 1) {
            filtered_io_groups.push_back(ins);
          }
          if (unique_outs.size() > 1) {
            filtered_io_groups.push_back(unique_outs);
          }
        }

        //If we do not need banking make sure each bank did not exceeded hardware port constraints
        if (filtered_io_groups.size() == 0) {
          if (buf.num_in_ports() > options.rtl_options.max_inpt) {
            filtered_io_groups.push_back(buf.get_in_ports());
          }
          if (buf.num_out_ports() > options.rtl_options.max_outpt) {
            filtered_io_groups.push_back(buf.get_out_ports());
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

      vector<int> get_cyclic_partition_factor_from_embarassing_partition(UBuffer& buf, std::set<int> & partition_dim) {
        cout << tab(1) << "Found partition: " << endl;
        vector<int> cyclic_partition_factor;
        vector<int> min_addr, max_addr;
        min_addr = min_offsets_by_dimension(buf);
        max_addr = max_offsets_by_dimension(buf);
        for (int d = 0; d < buf.logical_dimension(); d ++) {
          if (elem(d, partition_dim)) {
            cyclic_partition_factor.push_back(max_addr.at(d) - min_addr.at(d) + 1);
          } else {
            cyclic_partition_factor.push_back(1);
            //cyclic_partition_factor.push_back(max_addr.at(d) - min_addr.at(d) + 1);
          }
        }
        for (auto dim : partition_dim) {
          cout << tab(2) << "Partition: " << dim << endl;
        }
        return cyclic_partition_factor;
      }

      //This is the cyclic partition was used in garnet mapping
      maybe<std::vector<int> > cyclic_partition(CodegenOptions& options, UBuffer& buf) {
        vector<vector<string> > filtered_io_groups =
          overlapping_large_io_port_groups(options, buf);

        if (filtered_io_groups.size() == 0) {
          std::vector<int> empty;
          return maybe<std::vector<int> >(empty);
        }

        //get_banking factors
        vector<int> bk_factors = buf.get_cyclic_banking_factors();
        int bank_num = std::accumulate(
                begin(bk_factors), end(bk_factors), 1, std::multiplies<int>());
        std::vector<int> dims;
        for (auto g : filtered_io_groups) {
          assert(g.size() > 0);

          //cout << "Error: No viable banking strategy for " << buf.name << endl;
          //cout << tab(1) << "Cannot partition group: " << endl;
          //for (auto pt : g) {
          //  cout << tab(2) << pt << endl;
          //  cout << tab(3) << str(buf.access_map.at(pt)) << endl;
          //  cout << tab(3) << str(buf.schedule.at(pt)) << endl;
          //}
          cout << "\tpart size:" <<bank_num << endl;
          cout << "\tg size: " << g.size() << endl;

          //TODO: fix this, now Consider multiport only for accumulation buffer
          int ports = 1;
          if (buf.has_update_op()) {
            bool is_in_group = buf.is_in_pt(pick(g));
            ports = is_in_group ?
              options.rtl_options.max_inpt : options.rtl_options.max_outpt;

          }
          if (bank_num * ports < g.size()) {
            //may need banking
            return {};
          }
        }
        for (auto it: bk_factors)
          dims.push_back(it);

        cout << "FOUND CYLIC PARTITION OF "
          << buf.name << " in " << dims.size() << " dimensions..." << endl;
        for (auto d : dims) {
          cout << tab(1) << d << endl;
        }

        return dims;
      }


      //This is the embarrassing partition was used in garnet mapping
      maybe<std::set<int> > embarassing_partition(CodegenOptions& options, UBuffer& buf) {
        vector<vector<string> > filtered_io_groups =
          overlapping_large_io_port_groups(options, buf);

        if (filtered_io_groups.size() == 0) {
          std::set<int> empty;
          return maybe<std::set<int> >(empty);
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
            cout << tab(3) << str(buf.schedule.at(pt)) << endl;
          }
          cout << "\tpart size:" <<parts.size() << endl;
          cout << "\tg size: " << g.size() << endl;

          //TODO: fix this, now Consider multiport only for accumulation buffer
          int ports = 1;
          if (buf.has_update_op()) {
            bool is_in_group = buf.is_in_pt(pick(g));
            ports = is_in_group ?
              options.rtl_options.max_inpt : options.rtl_options.max_outpt;

          }

          if (parts.size() * ports < g.size()) {
            //may need banking
            return {};
          }
          for (auto ent : parts) {
            //for (auto d : ent.second) {
            for (auto d : ent.first) {
              dims.insert(d.first);
            }
          }
        }

        cout << "FOUND EMBARASSING PARTITION OF "
          << buf.name << " in " << dims.size() << " dimensions..." << endl;
        int total_banks = 1;
        for (auto d : dims) {
          cout << tab(1) << d << endl;
          total_banks *= d;
        }
        cout << "Total Banks: " << total_banks << endl;

        //Final check all port can fit
        if (buf.get_all_ports().size() >
                total_banks * (options.rtl_options.max_inpt + options.rtl_options.max_outpt)) {
            cout << "Cannot merge port although they did not overlap" << endl;
            return {};
        }

        isl_multi_aff* bank_func = embarassing_partition_function(buf, dims);
        cout << tab(1) << "bank func: " << str(bank_func) << endl;
        //bool legal = banking_scheme_is_legal(to_map(bank_func), buf);
        //cout << tab(2) << "Legal: " << legal << endl;
        //assert(false);
        return dims;
      }

      maybe<std::set<int> > embarassing_partition(UBuffer& buf) {
        vector<vector<string> > filtered_io_groups =
          overlapping_large_io_port_groups(buf, 1);

        if (filtered_io_groups.size() == 0) {
          std::set<int> empty;
          return maybe<std::set<int> >(empty);
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
            cout << tab(3) << str(buf.schedule.at(pt)) << endl;
          }
          if (parts.size() < g.size()) {
            return {};
          }
          for (auto ent : parts) {
            //for (auto d : ent.second) {
            for (auto d : ent.first) {
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


      isl_union_set* UBuffer::compute_dd_hw_schedule_decouple(const string& inpt, const string& outpt) {
        auto writes = to_map(access_map.at(inpt));
        AccessPattern acc_pt(writes, ctx);
        writes = acc_pt.get_access_map_and_decouple_reuse(ctx, num_out_dims(writes));
        auto reads = to_map(access_map.at(outpt));
        AccessPattern acc_pt_rd(reads, ctx);
        reads = acc_pt_rd.get_access_map_and_decouple_reuse(ctx, num_out_dims(reads));
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

      int UBuffer::compute_capacity_hw_schedule(const string& inpt, const string& outpt) {
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
        auto wr_sched = schedule.at(inpt);
        auto wr_after_wr = lex_lt(wr_sched, wr_sched);
        cout << "wr after wr: " << str(wr_after_wr) << endl;
        auto rd_sched = schedule.at(outpt);
        auto wr_before_rd= lex_gt(rd_sched, wr_sched);
        cout << "wr before rd: " << str(wr_before_rd) << endl;
        auto writeOP2readOP = dot(dot(wr_sched, pc_times), inv(rd_sched));
        cout << "wr2rd: " << str(writeOP2readOP) << endl;
        auto write_btw = isl_union_map_intersect(dot(inv(writeOP2readOP), wr_after_wr),
                wr_before_rd);
        auto pt_set = get_points(::domain(write_btw));
        std::set<int> card_set;
        int max_wr_btw = 0;
        for (auto pt: pt_set) {
          auto image = its(write_btw, to_set(pt));
          cout << "domain point: " << str(pt) << endl;//" \n\thas image: " << str(image) << endl;
          //for (auto rng_pt: get_points(range(image))) {
          //  cout << "\timage of domain point need to buffer: " << str(rng_pt) << endl;
          //}
          auto card_capacity = int_upper_bound(card(image));
          cout << "\tcard: " << card_capacity << endl;
          card_set.insert(card_capacity);
          max_wr_btw = max(max_wr_btw, card_capacity);
        }
        auto range_card = card(write_btw);
        int max_capacity = int_upper_bound(range_card);
        cout << "\tmax capacity from card of map: " << max_capacity << endl;
        cout << "\twrite btw: " << str(write_btw) << endl;
        cout << "\trange card: " << str(range_card) << endl;
        cout << "\tdomain of write btw: " << str(::domain(write_btw)) << endl;

        cout << "Possible DD: " << card_set << endl;
        return max_wr_btw;
        //auto dds = isl_union_map_deltas(pc_times);
        //return dds;
      }

      maybe<int> UBuffer::dependence_distance_max(const string& inpt, const string& outpt) {

        auto dds = compute_dd_hw_schedule(inpt, outpt);
        cout << "DDs          : " << str(dds) << endl;
        if (!empty(dds)) {
          auto ddc = to_set(dds);

          int dd = to_int(lexmaxval(ddc));
          cout << "DD           : " << dd << endl;
          return {dd};
        } else {
          return {};
        }
      }

      maybe<int> UBuffer::dependence_distance_min(const string& inpt, const string& outpt) {

        auto dds = compute_dd_hw_schedule(inpt, outpt);
        cout << "DDs          : " << str(dds) << endl;
        if (!empty(dds)) {
          auto ddc = to_set(dds);

          int dd = to_int(lexminval(ddc));
          cout << "DD           : " << dd << endl;
          return {dd};
        } else {
          return {};
        }
      }

      maybe<int> UBuffer::dependence_distance_singleton(const string& inpt, const string& outpt, bool decouple) {

        auto dds = compute_dd_hw_schedule(inpt, outpt);
        if (decouple)
          dds = compute_dd_hw_schedule_decouple(inpt, outpt);
        cout << "inpt schedule: " << str(schedule.at(inpt)) << endl;
        cout << "outpt schedule: " << str(schedule.at(outpt)) << endl;
        cout << "DDs          : " << str(dds) << endl;
        cout << "DDmin : " << str(lexminval(to_set(dds))) << endl;
        cout << "DDmax: " << str(lexmaxval(to_set(dds))) << endl;
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

      uset* dependence_distance_set(umap* writes, umap* reads,
          umap* sched) {

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
        return dds;
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

      maybe<int> dependence_distance_singleton(umap* writes, umap* reads, umap* sched) {

        //auto writes = buf.access_map.at(inpt);
        //auto reads = buf.access_map.at(outpt);
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

      int total_capacity(UBuffer& buf) {
        bank bank = buf.compute_bank_info();
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
        return capacity;
      }

      vector<int> min_offsets_by_dimension(UBuffer& buf) {
        vector<int> min_offsets;
        for (int d = 0; d < buf.logical_dimension(); d++) {
          min_offsets.push_back(INT_MAX);
        }
        for (auto pt : buf.get_all_ports()) {
          vector<int> pts = parse_pt(lexminpt(range(buf.access_map.at(pt))));
          for (int d = 0; d < pts.size(); d++) {
            if (pts.at(d) < min_offsets.at(d)) {
              min_offsets[d] = pts.at(d);
            }
          }
        }
        return min_offsets;
      }

      vector<int> max_offsets_by_dimension(UBuffer& buf) {
        vector<int> min_offsets;
        for (int d = 0; d < buf.logical_dimension(); d++) {
          min_offsets.push_back(INT_MIN);
        }
        for (auto pt : buf.get_all_ports()) {
          vector<int> pts = parse_pt(lexmaxpt(range(buf.access_map.at(pt))));
          for (int d = 0; d < pts.size(); d++) {
            if (pts.at(d) > min_offsets.at(d)) {
              min_offsets[d] = pts.at(d);
            }
          }
        }
        return min_offsets;
      }

      vector<int> extents_by_dimension(UBuffer& buf) {
        vector<int> min_offsets = min_offsets_by_dimension(buf);
        vector<int> max_offsets = max_offsets_by_dimension(buf);
        vector<int> extents;
        for (int i = 0; i < min_offsets.size(); i++) {
          extents.push_back(max_offsets.at(i) - min_offsets.at(i) + 1);
        }
        return extents;
      }

      UBuffer delete_ports(std::set<string>& sr_ports, UBuffer& buf) {
        UBuffer cpy = buf;
        for (auto& pt : sr_ports) {
          cpy.isIn.erase(pt);
          cpy.retrive_domain.erase(pt);
          cpy.dynamic_ports.erase(pt);
          cpy.sv_map.erase(pt);
          cpy.access_map.erase(pt);
          cpy.schedule.erase(pt);


        }

        std::map<string, vector<string> > port_bundles;
        for (auto bundle : cpy.port_bundles) {
          vector<string> pts;
          for (auto& pt : bundle.second) {
            if (!elem(pt, sr_ports)) {
              pts.push_back(pt);
            }
          }
          if (pts.size() > 0) {
            port_bundles[bundle.first] = pts;
          }
        }
        cpy.port_bundles = port_bundles;
        for (auto bundle : cpy.port_bundles) {
          for (auto pt : bundle.second) {
            assert(!elem(pt, sr_ports));
          }
        }

        return cpy;
      }

      std::ostream& operator<<(std::ostream& out, dgraph& dg) {
        out << "# nodes: " << dg.nodes.size() << endl;
        out << "# edges: " << dg.weights.size() << endl;
        for (auto e : dg.out_edges) {
          out << "Group: "<< tab(2) << e.first << endl;
          for (auto dst : e.second) {
            out << tab(4) << e.first << " -> (" << dg.weight(e.first, dst) << ") " << dst << endl;
          }
        }

        for (auto e : dg.out_edges) {
          out << "Fanin Group: "<< tab(2) << e.first << endl;
          for (auto src: e.second) {
            out << tab(4) << src << " -> (" << dg.weight(src, e.first) << ") " << e.first << endl;
          }
        }
        return out;
      }

      std::ostream& operator<<(std::ostream& out, UBufferImpl& impl) {
        impl.print_info(out);
        return out;
      }


      bool all_schedules_defined(UBuffer& buf) {
        for (auto pt : buf.get_all_ports()) {
          if (!empty(buf.domain.at(pt))) {
            if (empty(buf.schedule.at(pt))) {
              cout << "No schedule for " << pt << " on buffer " << buf.name << endl;
              return false;
            }
          }
        }
        return true;
      }

      bool is_register(UBuffer& buf) {
        string name = buf.name;
        vector<string> dnames;
        for (int i = 0; i < buf.logical_dimension(); i++) {
          dnames.push_back("d" + str(i));
        }
        string ibo_str = curlies(arrow(name + bracket_list(dnames),
              name + "_B[0]"));
        isl_map* m = isl_map_read_from_str(buf.ctx, ibo_str.c_str());
        bool legal = inner_bank_offset_is_legal(m, buf);
        release(m);
        return legal;
      }

vector<int> analyze_memory_demands(prog& prg, UBuffer& buf, schedule_info& hwinfo) {

  vector<int> unbanked;
  for (int d = 0; d < buf.logical_dimension(); d++) {
    unbanked.push_back(1);
  }
  for (auto f : unbanked) {
    cout << tab(1) << f << endl;
    assert(f > 0);
  }

  cout << buf << endl;

  map<string, vector<pair<string,int>>> shift_registered_outputs = determine_shift_reg_map_new(prg, buf, hwinfo);
  vector<pair<string,pair<string,int>>> shift_registered_outputs_to_outputs = determine_output_shift_reg_map(prg, buf,hwinfo);
  std::set<string> sr_ports;
  for (auto port : shift_registered_outputs) {
    sr_ports.insert(port.first);
  }
  for (auto port : shift_registered_outputs_to_outputs) {
    sr_ports.insert(port.first);
  }

  UBuffer reduced = delete_ports(sr_ports, buf);
  cout << "Reduced..." << endl;
  cout << reduced << endl;

  if (reduced.get_out_ports().size() > 0) {
    cout << "In prg: " << prg.name << " a buffer is not a shift register!" << endl;
    cout << "Shift registered in -> out..." << endl;
    for (auto e : shift_registered_outputs) {
      for (auto pt_delay_pair: e.second)
        cout << tab(1) << e.first << " -> " << pt_delay_pair.second<< endl;
    }
    //assert(false);
    //auto eb = embarassing_partition(reduced, hwinfo);
    //if (!eb.has_value()) {
    auto sched = reduced.global_schedule();
    cout << "Banking schedule..." << endl;
    for (auto s : get_maps(sched)) {
      cout << tab(1) << str(s) << endl;
    }
    auto op_writes = reduced.producer_map();
    auto op_reads = reduced.consumer_map();

    auto written = range(op_writes);
    auto read = range(op_reads);
    auto all_data = unn(written, read);

    auto read_id = isl_union_set_identity(cpy(read));

    auto read_times = dot(inv(op_reads), sched);
    //auto simul_reads = dot(read_times, inv(read_times));
    // Set of simultaneous reads to different locations
    auto simul_reads_umap =
      diff(dot(read_times, inv(read_times)), read_id);
    cout << "Simultaneous reads..." << str(simul_reads_umap) << endl;
    if (empty(simul_reads_umap)) {
      return unbanked;
      //return;
    }
    auto simul_reads = to_map(simul_reads_umap);
    auto diff = isl_map_deltas(cpy(simul_reads));
    cout << tab(1) << "Deltas: " << str(diff) << endl;
    //auto lmin = lexmin(diff);
    auto lmax = lexmax(diff);
    //cout << tab(1) << "LMin  : " << str(lmin) << endl;
    cout << tab(1) << "LMax  : " << str(lmax) << endl;
    vector<int> cycle_factors;
    for (int d = 0; d < num_dims(diff); d++) {
      auto pd = project_all_but(diff, d);
      //auto lmin = lexmin(pd);
      auto lmaxpt = lexmaxval(pd);
      int bank_factor = to_int(lmaxpt) + 1;
      cout << tab(2) << "Bank factor in " << d << ": " << bank_factor << endl;
      cycle_factors.push_back(max(1, bank_factor));
      //cout << tab(1) << "LMin " << d << " : " << str(lmin) << endl;
      //cout << tab(1) << "LMax " << d << " : " << str(lmax) << endl;
      //int lmax = to_int(sample(lmax));
    }

    vector<string> dvs;
    vector<string> addrs;
    int num_banks = 1;
    for (int i = 0; i < num_dims(diff); i++) {
      assert(cycle_factors.at(i) > 0);
      dvs.push_back("a_" + str(i));
      addrs.push_back("a_" + str(i) + " % " + str(cycle_factors.at(i)));
      num_banks *= cycle_factors.at(i);
    }

    string bank_func =
      curlies(reduced.name + bracket_list(dvs) + " -> " + bracket_list(addrs));
    auto bnk = isl_map_read_from_str(reduced.ctx, bank_func.c_str());

    cout << "=== After Analysis the bank func is: " << str(bnk) << endl;
    assert(banking_scheme_is_legal(bnk, reduced));

    // TODO: Remove this hack
    if (cycle_factors.size() > 2) {
      for (int d = 1; d < cycle_factors.size() - 1; d++) {
        cycle_factors[d] = 1;
      }
    }
    for (auto f : cycle_factors) {
      cout << tab(1) << f << endl;
      assert(f > 0);
    }
    return cycle_factors;
    //assert(false);
    //}
  }
  return unbanked;
  //assert(false);
}


vector<pair<string, pair<string, int> >> determine_output_shift_reg_map(
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo)
{
  auto sc = buf.global_schedule();
  bool any_reduce_ops_on_buffer = false;
  vector<pair<string, pair<string, int> >> shift_registered_outputs;
  for (auto op : prg.all_ops()) {
    if (elem(buf.name, op->buffers_read()) && elem(buf.name, op->buffers_written())) {
      cout << buf.name << endl;

      any_reduce_ops_on_buffer = true;
      cout << "Found reduce op on " << buf.name << endl;
      break;
    }
  }

  if (!any_reduce_ops_on_buffer) {
    cout << "Out -> Out shift registers for " << buf.name << endl;

    for (auto outpt : buf.get_out_ports()) {
      for (auto outpt_src : buf.get_out_ports()) {

        if(outpt == outpt_src) {
          continue;
        }

        auto reads = buf.access_map.at(outpt);
        auto reads_src = buf.access_map.at(outpt_src);
        //cout << "reads: " << str(reads) << endl;
        //cout << "reads_src: " << str(reads_src) << endl;

        auto outpt_read_data = range(reads);
        auto outpt_src_read_data = range(reads_src);
        if(num_in_dims(to_map(reads)) != num_in_dims(to_map(reads_src)))
        {
          continue;
        }

        if(!subset(outpt_read_data,outpt_src_read_data))
        {
          continue;
        }

        //cout << str(buf.schedule.at(outpt)) << endl;
        //cout << str(buf.schedule.at(outpt_src)) << endl;
        isl_aff * outpt_sched = get_aff(buf.schedule.at(outpt));
        isl_aff * outpt_src_sched = get_aff(buf.schedule.at(outpt_src));
        outpt_sched = set_name(outpt_sched,"bump");
        outpt_src_sched = set_name(outpt_src_sched,"bump");
        isl_aff * diff = sub(outpt_sched,outpt_src_sched);
        isl_aff * reads_aff = get_aff(reads);
        isl_aff * reads_src_aff = get_aff(reads_src);
        reads_aff = set_name(reads_aff,"bump");
        reads_src_aff = set_name(reads_src_aff,"bump");
        isl_aff * diff_loc = sub(reads_aff, reads_src_aff);

        //cout << str(diff) << endl;

        if(!isl_aff_is_cst(diff) || to_int(const_coeff(diff)) < 0)
        {
          continue;
        }

        if (!isl_aff_is_cst(diff_loc) || to_int(const_coeff(diff_loc)) < 0)
        {
          continue;
        }

        auto time_to_read_src = dot(inv(sc), (reads_src));
        auto time_to_read = dot(inv(sc), (reads));

        int dd = to_int(const_coeff(diff));

        assert(dd >= 0);

        shift_registered_outputs.push_back({outpt,{outpt_src, dd}});
      }

    }
  }
  return shift_registered_outputs;
}

map<string, pair<string, int> >  determine_shift_reg_map(
        prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo)
{
  auto sc = buf.global_schedule();
  bool any_reduce_ops_on_buffer = false;

  //from output port to a vector of input port delay pair
  map<string, pair<string, int> > shift_registered_outputs;
  for (auto op : prg.all_ops()) {
    if (elem(buf.name, op->buffers_read()) && elem(buf.name, op->buffers_written())) {
    //if (intersection(op->buffers_read(), op->buffers_written()).size() != 0) {
      any_reduce_ops_on_buffer = true;
      break;
    }
  }

  if (!any_reduce_ops_on_buffer) {
    cout << "==== No reduce ops on this buffer" << endl;
    for (auto outpt : buf.get_out_ports()) {
      for (auto inpt : buf.get_in_ports()) {
        string reader_name = domain_name(pick(get_maps(buf.access_map.at(outpt))));
        op* read_op = prg.find_op(reader_name);

        auto read = read_op->buffers_read();
        auto written = read_op->buffers_written();

        string writer_name = domain_name(pick(get_maps(buf.access_map.at(inpt))));
        cout << "Writer name: " << writer_name << endl;
        op* write_op = prg.find_op(writer_name);

        cout << "read_op read: " << read << endl;
        cout << "read_op write: " << read_op->buffers_written() << endl;

        cout << "write_op write: " << written << endl;
        cout << "write_op read: " << write_op->buffers_read() << endl;
        //prg.pretty_print();
        auto read_op_rolled_reduce_bufs = intersection(read, written);
        auto write_op_rolled_reduce_bufs =
            intersection(write_op->buffers_read(), write_op->buffers_written());

        // Dont shift register rolled-reduces
        // If it's not rolled reduce on the buffer trying to optimize, it's fine
        if (read_op_rolled_reduce_bufs.count(buf.name) == 0 &&
            write_op_rolled_reduce_bufs.count(buf.name) == 0) {
            cout << "Calculate DDs for creating shift registers." << endl;
          auto dd =
            dependence_distance_singleton(buf, inpt, outpt, sc);
          if (dd.has_value()) {
            int dd_raw = dd.get_value();
            dd_raw -= hwinfo.compute_latency(write_op);
            if (write_op->buffers_read().size() > 0) {
              dd_raw -= hwinfo.load_latency(pick(write_op->buffers_read()));
            }
            dd_raw += hwinfo.load_latency(buf.name);

            if (!(dd_raw >= 0)) {
              cout << "Error: Negative dependence distance: " << dd_raw << endl;
            }
            assert(dd_raw >= 0);
            shift_registered_outputs[ outpt] = {inpt, dd_raw};
          }
        }
      }
    }
  }
  return shift_registered_outputs;
}

map<string, vector<pair<string, int> > > determine_shift_reg_map_new(
        prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo)
{
  auto sc = buf.global_schedule();
  bool any_reduce_ops_on_buffer = false;

  //from output port to a vector of input port delay pair
  map<string, vector<pair<string, int> > > shift_registered_outputs;
  for (auto op : prg.all_ops()) {
    if (elem(buf.name, op->buffers_read()) && elem(buf.name, op->buffers_written())) {
    //if (intersection(op->buffers_read(), op->buffers_written()).size() != 0) {
      any_reduce_ops_on_buffer = true;
      break;
    }
  }

  if (!any_reduce_ops_on_buffer) {
    cout << "==== No reduce ops on this buffer" << endl;
    for (auto outpt : buf.get_out_ports()) {
      for (auto inpt : buf.get_in_ports()) {
        string reader_name = domain_name(pick(get_maps(buf.access_map.at(outpt))));
        op* read_op = prg.find_op(reader_name);

        auto read = read_op->buffers_read();
        auto written = read_op->buffers_written();

        string writer_name = domain_name(pick(get_maps(buf.access_map.at(inpt))));
        cout << "Writer name: " << writer_name << endl;
        op* write_op = prg.find_op(writer_name);

        cout << "read_op read: " << read << endl;
        cout << "read_op write: " << read_op->buffers_written() << endl;

        cout << "write_op write: " << written << endl;
        cout << "write_op read: " << write_op->buffers_read() << endl;
        //prg.pretty_print();
        auto read_op_rolled_reduce_bufs = intersection(read, written);
        auto write_op_rolled_reduce_bufs =
            intersection(write_op->buffers_read(), write_op->buffers_written());

        // Dont shift register rolled-reduces
        // If it's not rolled reduce on the buffer trying to optimize, it's fine
        if (read_op_rolled_reduce_bufs.count(buf.name) == 0 &&
            write_op_rolled_reduce_bufs.count(buf.name) == 0) {
            cout << "Calculate DDs for creating shift registers." << endl;
          auto dd =
            dependence_distance_singleton(buf, inpt, outpt, sc);
          if (dd.has_value()) {
            int dd_raw = dd.get_value();
            dd_raw -= hwinfo.compute_latency(write_op);
            if (write_op->buffers_read().size() > 0) {
              dd_raw -= hwinfo.load_latency(pick(write_op->buffers_read()));
            }
            dd_raw += hwinfo.load_latency(buf.name);

            if (!(dd_raw >= 0)) {
              cout << "Error: Negative dependence distance: " << dd_raw << endl;
            }
            assert(dd_raw >= 0);
            map_insert(shift_registered_outputs, outpt, {inpt, dd_raw});
          }
        }
      }
    }
  }
  return shift_registered_outputs;
}



dgraph build_in_to_out_shift_register_graph(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  map<string, vector<pair<string,int>>> shift_registered_outputs = determine_shift_reg_map_new(prg, buf, hwinfo);

  dgraph dg;
  bool fanin_node = false;
  for (auto pt : shift_registered_outputs) {
    string outpt = pt.first;
    if (pt.second.size() > 1) {
        //handle this case specially
      for (auto pt_delay_pair: pt.second) {
        string inpt = pt_delay_pair.first;
        int delay = pt_delay_pair.second;
        dg.add_fanin_edge(inpt, outpt, delay);
      }
      fanin_node = true;
    } else {
      for (auto pt_delay_pair: pt.second) {
        string inpt = pt_delay_pair.first;
        int delay = pt_delay_pair.second;
        dg.add_edge(inpt, outpt, delay);
      }

    }
  }

  cout << "DG: ..." << endl;
  cout << dg << endl;
  return dg;
}

//This pass will be called after shift register optimization, in order to find the port reuse,
//now we only find the ports with same schedule,
//but we give the threshold to give user a capability to find extra port sharing opportunity
dgraph build_out_to_out_shift_register_graph(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo, int threshold) {

  dgraph dg;
  vector<pair<string,pair<string,int>>> shift_registered_outputs_to_outputs = determine_output_shift_reg_map(prg, buf, hwinfo);

  cout << "out -> out srs: " << shift_registered_outputs_to_outputs.size() << endl;
  for (auto pt : shift_registered_outputs_to_outputs) {
    if (pt.second.second <= threshold) {
      dg.add_edge(pt.second.first, pt.first, pt.second.second);
    }
  }

  cout << "out2out DG: ..." << endl;
  cout << dg << endl;
  return dg;
}

std::set<string> output_port_sharing(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo, UBufferImpl& impl) {
    std::set<string> done_pt = impl.get_sr_outpts();
  if (done_pt.size())
    return done_pt;
  dgraph dg = build_out_to_out_shift_register_graph(options, prg, buf, hwinfo, 0);
  vector<std::set<string>> port_groups;
  for (auto it: dg.out_edges) {
    bool added = false;
    for (auto& group: port_groups) {
      if (group.count(it.first)) {
        group.insert(it.second.begin(), it.second.end());
        added = true;
        break;
      }
    }
    if (!added) {
      std::set<string> tmp = it.second;
      tmp.insert(it.first);
      port_groups.push_back(it.second);
    }
  }
  for (auto grp: port_groups) {
    cout << "port sharing groups: " << grp << endl;
    for (auto it = grp.begin(); it != grp.end(); it ++) {
      if (it != grp.begin()) {
        impl.add_o2o_info(*grp.begin(), *it, 0);
        done_pt.insert(*it);
      }
    }
  }
  return done_pt;
}

//helper function to create all the shift registered port
void create_subbranch(const std::string& out_pt, dgraph& sr_graph, UBuffer& buf, UBufferImpl &impl) {
    auto src2dst = sr_graph.get_sub_branch(out_pt);
    cout << "\tsubbranch size: " << src2dst.size() << endl;
    for (auto io_pair: src2dst) {
        string inpt = io_pair.first;
        string outpt = io_pair.second;
        int delay = sr_graph.weight(inpt, outpt);
        if (delay == 0) {
            inpt = sr_graph.find_origin(inpt);
        }
        //auto bk = buf.compute_bank_info(inpt, outpt, delay);
        //buf.add_bank_between(inpt, outpt, bk);
        impl.add_o2o_info(inpt, outpt, delay);
    }
}

dgraph build_shift_registers(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
  dgraph shift_registers = build_in_to_out_shift_register_graph(options, prg, buf, hwinfo);

  cout << "Naive Shift registers..." << endl;
  cout << shift_registers << endl;
  //cout << buf << endl;

  dgraph dg;
  for (auto it: shift_registers.fanin_edges) {
    string dst = it.first;
    cout << tab(2) << "get dst: " << it.first << endl;
    for (auto src: it.second) {
      int delay = shift_registers.weight(src, dst);
      dg.add_fanin_edge(src, dst, delay);
      cout << tab(4) << "src: " << src << ", weight = " << delay << endl;
    }
  }
  //dg.fanin_edges = shift_registers.fanin_edges;
  //for (auto it: dg.fanin_edges) {
  //    cout << tab(2) << "get dst: " << it.first << endl;
  //  string dst = it.first;
  //  for (auto src: it.second) {
  //      cout << tab(4) << "src: " << src << ", weight = " << shift_registers.weights.at({src, dst});
  //    dg.weights[{src, dst}] = shift_registers.weights.at({src, dst});
  //  }
  //}
  if (!shift_registers.has_nodes()) {
    return dg;
  }
  for (auto inpt : buf.get_in_ports()) {
    cout << "inpt: " << inpt << endl;
    vector<pair<string, int> > vals;
    //chances are that we only have fanin input in shift register and give up.
    if (!shift_registers.out_edges.count(inpt))
      continue;
    for (auto v : shift_registers.out_edges.at(inpt)) {
      vals.push_back({v, shift_registers.weight(inpt, v)});
    }
    sort_lt(vals, [](const pair<string, int> & data) {return data.second;});
    for (auto v : vals) {
      cout << tab(1) << v.first << " -(" << v.second << ")-> " << v.second << endl;
    }

    //TODO use option.threshold, this is the place to separate shift reg and row buffer
    vector<vector<pair<string, int> > > reg_chains;
    split_by(vals, reg_chains, [](const pair<string, int>& a, const pair<string, int>& b) {
        return abs(a.second - b.second) < 20;
        });

    cout << "Groups..." << endl;
    for (auto g : reg_chains) {
      cout << tab(1) << "Group..." << endl;
      dg.add_edge(inpt, g.at(0).first, shift_registers.weight(inpt, g.at(0).first));
      for (int i = 1; i < g.size(); i++) {
        dg.add_edge(g.at(i - 1).first, g.at(i).first, g.at(i).second - g.at(i - 1).second);
      }
      //for (auto e : g) {
      //cout << tab(2) << e.first << " -> " << e.second << endl;
      //}
      //cout << endl;
    }
  }
  cout << dg << endl;
  //assert(false);

  return dg;
}

UBufferImpl generate_optimized_memory_implementation(
        CodegenOptions& options, UBuffer & buf, prog & prg, schedule_info& hwinfo) {
    //TODO: possible bug to comment out
    //if (prg.is_boundary(buf.name))
    //    return impl;


    //create ubufferimpl from analysis ubuffer data structure

    cout << "create shift register for " << buf << endl;
    auto impl = port_group2bank(options, prg, buf, hwinfo);
    cout << impl << endl;
    std::set<string> done_outpt= output_port_sharing(options, prg, buf, hwinfo, impl);

    auto new_buf = delete_ports(done_outpt, buf);
    cout << "After shift register optimization: " << impl << endl;
    cout << "Done ports: " << done_outpt << endl;
    cout << "reduced buffer: " << new_buf << endl;

    if (!impl.is_pure_shift_register(new_buf.get_out_ports()))
        generate_banks_garnet(options, new_buf, impl, hwinfo);



    cout << "After banking optimization: " << impl << endl;
    //impl.bank_merging(options);
    impl.sort_bank_port();
    cout << "After bank merging: " << impl << endl;
    return impl;
}


//This function will go through the ubufferimpl data type
//and create some essenstial information for garnet mapping

void lower_to_garnet_implementation(CodegenOptions& options,
        UBuffer& buf, UBufferImpl& impl, schedule_info& info) {


  for (auto it: impl.bank_rddom) {
    GarnetImpl CGRAImpl;
    auto bank_id = it.first;
    UBuffer target_buf = buf.generate_ubuffer(impl, info, bank_id);

    //This is used for tighten the cyclic banking space
    target_buf.tighten_iteration_domain();
    target_buf.tighten_address_space();
    target_buf.set_dim_id();

    cout << "\n\tUBuffer after address tighten" << target_buf << endl;

    //Determine the config mode
    CGRAImpl.config_mode = buf.determine_config_mode(options, target_buf);

    //If this is memory do double buffer optimization
    //rewrite the ubuffer IR and change the cgpl control
    isl_map* cgpl_schedule;
    bool decouple_ctrl = false;
    bool substract_glb_latency = false;
    cgpl_ctrl_optimization(options, target_buf, CGRAImpl.config_mode,
            cgpl_schedule, decouple_ctrl, substract_glb_latency);
    CGRAImpl.decouple_ctrl = decouple_ctrl;
    CGRAImpl.substract_glb_latency = substract_glb_latency;
    CGRAImpl.cgpl_schedule = cgpl_schedule;

    cout << "\n\tUBuffer after cgpl optimization" << target_buf << endl;

    //Fisrt create the shift register
    create_accumulation_register_and_rewrite_buf(options, target_buf, CGRAImpl);

    target_buf.remove_redundant_dim();
    //Generate the ubuffer module for CGRA
    target_buf.simplify_floor_div_expr();

    if (CGRAImpl.config_mode == "lake") {
      map<string, UBuffer> vectorized_buf;
      string ub_ins_name = "ub_" + target_buf.name;
      vectorized_buf.insert(
              {target_buf.name+ "_ubuf", target_buf});
      auto capacity = total_capacity(target_buf);

      cout << "vectorization buffer capacity: " << capacity << endl;
      CoreIR::Instance* buf;
      cout << "vectorization buf name: " << target_buf.name << endl;
      buffer_vectorization(options, {target_buf.name+ "_ubuf"}, vectorized_buf);
      //This function is not needed
      //vectorized_buf = decouple_multi_tile_ubuffer(options, vectorized_buf);
      for (auto buf: vectorized_buf) {
          cout << "after vectorization codegen: " << buf.first << endl << buf.second << endl;
          CGRAImpl.sub_component.insert(buf);
      }
    }
    CGRAImpl.target_buf = target_buf;

    //Save the lower information into ubuffer impl
    impl.lowering_info[bank_id] = CGRAImpl;
  }
}



UBufferImpl port_group2bank(CodegenOptions& options, prog& prg, UBuffer& buf, schedule_info& hwinfo) {
    UBufferImpl impl;

    //int in_port_width = options.rtl_options.max_inpt;
    //int out_port_width = options.rtl_options.max_outpt;
    auto sr_graph = build_shift_registers(options, prg, buf, hwinfo);

    if (!sr_graph.has_nodes())
      return impl;
    for (auto it: sr_graph.fanin_edges) {
        for (auto src: it.second) {
            cout << "dst: " << it.first << endl;
            cout << "src: " << src << endl;
            int delay = sr_graph.weights.at({src, it.first});
            if (delay < options.merge_threshold) {
                impl.add_fanin_info(src, it.first, delay);
            } else {
                //TODO: add support for row buffer
                assert(false);
            }
        }
    }

    //Currently only group output port
    //TODO: support input port grouping in the future
    for (auto src: buf.get_in_ports()) {
        vector<pair<string, int> > out_delays;

        //chances are that we have only fanin
        if (sr_graph.out_edges.count(src) == 0)
            continue;

        for (auto dst: sr_graph.out_edges.at(src)) {
            cout << "edge: " << src << "=>" << dst << ", w=" << sr_graph.weight(src, dst) << endl;
            out_delays.push_back({dst, sr_graph.weight(src, dst)});
        }
        sort(out_delays.begin(), out_delays.end(),
                [](const pair<string, int>& l,const pair<string, int>& r) {
                    return l.second > r.second;
                });
        for (auto it: out_delays) {
            cout << "after sort: outpt->" <<it.first << ", w=" << it.second << endl;
        }

        //The data structure that carry the port and delay informations
        //std::set<string> out_pts;
        //map<string, int> read_delay;
        while(out_delays.size()) {
            auto pt_delay_pair = out_delays.back();
            out_delays.pop_back();
            string pt_name = pt_delay_pair.first;
            int delay = pt_delay_pair.second;

            //Rewrite the ubuffer prepare for vectorization
            int depth = sr_graph.max_delay_to_leaf(pt_name);
            if (depth > 0) {
                //Only save this meta data in shift register impl
                impl.shift_depth[pt_name] = depth;

                //TODO: move the access pattern rewrite into ubuffer generation
                //auto outpt_info = buf.get_shift_pt_access_with_sched(pt_name, depth);
                //auto new_access_map = outpt_info.first;
                //auto new_sched = outpt_info.second;
                //buf.replace_pt(pt_name, new_access_map, new_sched);
            }

            if (pt_delay_pair.second <= options.merge_threshold) {
                //add new sr only chain
                //Rewrite the access map and schedule
                //auto sr_bank = buf.compute_bank_info(src, pt_name, delay);
                //buf.add_bank_between(src, pt_name, sr_bank);
                create_subbranch(pt_name, sr_graph, buf, impl);

                //TODO: use UBufferImpl to substite bank in ubuffer
                impl.add_i2o_info(src, pt_name, delay);
                //No need to add a memory tile
            } else {
                //out_pts.insert(pt_name);
                //read_delay.insert(pt_delay_pair);
                ////saturize the output ports or the last remaining port
                //if ((out_pts.size() == out_port_width) || (out_delays.size() == 0)) {
                //    //add the bank that require memory tile
                //    auto super_bank = buf.compute_bank_info({src}, out_pts, read_delay);
                //    int bank = impl.add_new_bank_between({src}, out_pts, to_set(buf.global_range()));
                //    impl.sequentially_assign_inpt({src}, bank);
                //    impl.sequentially_assign_outpt(buf.sort_pt_by_bundle(out_pts), bank);
                //    for (auto out_pt: out_pts) {
                //        buf.add_bank_between(src, out_pt, super_bank);
                //        create_subbranch(out_pt, sr_graph, buf, impl);

                //        //TODO: use UBufferImpl to substite bank in ubuffer
                //        impl.add_i2o_info(src, out_pt, read_delay.at(out_pt));
                //    }
                //    read_delay.clear();
                //    out_pts.clear();
                //}
                impl.add_i2o_info(src, pt_name, pt_delay_pair.second);
                //Need to add a bank of memory tile
                //TODO: possible bug rddom set to the whole buffer
                int bank = impl.add_new_bank_between({src}, {pt_name},
                        //to_set(buf.global_range()));
                        to_set(unn(range(buf.access_map.at(src)), range(buf.access_map.at(pt_name)))));
                map_insert(impl.bank_inpt2writers, bank, {src});
                map_insert(impl.bank_outpt2readers, bank, {pt_name});
                create_subbranch(pt_name, sr_graph, buf, impl);
            }
        }

    }
    buf.print_bank_info();
    cout << sr_graph;
    cout << impl;

    return impl;

    //Add a visit pass on the sr graph for all input, take the data use the threshold
}

isl_map* build_buffer_impl_embarrassing_banking(UBuffer& buf, schedule_info& hwinfo, EmbarrassingBankingImpl& impl) {
  cout << "Building implementation of " << buf.name << " Using Embarassing Banking. " << endl;

  vector<int> extents;
  extents = extents_by_dimension(buf);
  for (auto d : impl.partition_dims) {
    impl.partitioned_dimension_extents[d] = extents.at(d);
  }

  int num_banks = 1;
  for (auto ent : impl.partitioned_dimension_extents) {
    num_banks *= ent.second;
  }

  // Creating a map from bank numbers to values that read them
  int bank_stride = 1;
  vector<string> dvs;
  vector<string> coeffs;
  for (int d = 0; d < buf.logical_dimension(); d++) {
    dvs.push_back("d" + str(d));
    if (elem(d, impl.partition_dims)) {
      coeffs.push_back(str(bank_stride) + "*" + dvs.at(d));
      bank_stride *= map_find(d, impl.partitioned_dimension_extents);
    }
  }

  coeffs.push_back("0");
  string bank_func = curlies(buf.name + bracket_list(dvs) + " -> Bank[" + sep_list(coeffs, "", "", " + ") + "]");

  cout << "Bank map: " << bank_func << endl;
  //assert(false);
  isl_map* m = isl_map_read_from_str(buf.ctx, bank_func.c_str());

  //There could have been some banks for shift register
  int cur_bank_number = impl.get_bank_num();

  //TODO: think a more systematic way to keep both delay buffer and banking
  //TODO: should move this into a separate function
  if (cur_bank_number != 0) {
    //move the shift register back in banking, from large to small
    for (int b = cur_bank_number -1; b >= 0; b --) {
      impl.bank_readers[b + num_banks] = impl.bank_readers.at(b);
      impl.bank_readers.erase(b);
      impl.bank_writers[b + num_banks] = impl.bank_writers.at(b);
      impl.bank_writers.erase(b);
      impl.bank_rddom[b+num_banks] = impl.bank_rddom.at(b);
      for (auto& it: impl.outpt_to_bank) {
        if (it.second.count(b)) {
          it.second.erase(b);
          it.second.insert(b+num_banks);
        }
      }
      for (auto& it: impl.inpt_to_bank) {
        if (it.second.count(b)) {
          it.second.erase(b);
          it.second.insert(b+num_banks);
        }
      }
    }
  }

  for (auto pt : buf.get_all_ports()) {
    //cout << "pt :" << pt << endl;
    for (int b = 0; b < num_banks; b++) {
      isl_set* bnk = isl_set_read_from_str(buf.ctx, curlies("Bank[" + str(b) + "]").c_str());
      assert(!empty(bnk));

      isl_map* bnk_map = dot(to_map(buf.access_map.at(pt)), m);
      //cout << "\tBank map NO: " << b << " is " << str(bnk_map) << endl;
      isl_set* accesses_to_bank = its(range(bnk_map), bnk);

      //cout << "\taccess to_ bank: " << str(accesses_to_bank) << endl;
      if (!empty(accesses_to_bank)) {
        if (buf.is_out_pt(pt)) {
          impl.bank_readers[b].insert(pt);
          impl.outpt_to_bank[pt].insert(b);
        } else {
          impl.bank_writers[b].insert(pt);
          impl.inpt_to_bank[pt].insert(b);
        }
      }
    }
  }

  return m;
}


void generate_banks_garnet(CodegenOptions& options, UBuffer& buf, UBufferImpl& impl, schedule_info& hw_info) {

    //TODO: implement more banking strategies
    maybe<std::set<int> > embarassing_banking =
      embarassing_partition(options, buf);
    bool has_embarassing_partition = embarassing_banking.has_value();
    if (has_embarassing_partition) {
      buf.banking.partition = "cyclic";
      if (embarassing_banking.get_value().size() == buf.logical_dimension()) {
        cout << buf.name << " is really a register file" << endl;
      }

      EmbarrassingBankingImpl bank_impl(impl);

      bank_impl.partition_dims = embarassing_banking.get_value();
      auto bank_func = build_buffer_impl_embarrassing_banking(buf, hw_info, bank_impl);

      cout << "bank func: " << str(bank_func) << endl;
      cout << "After banking: " << bank_impl << endl;

      //take the ubuffer implementation add bank to ubuffer
      for (int bank_id = 0; bank_id < bank_impl.get_partition_bank_num(); bank_id ++) {
        isl_set* bnk = isl_set_read_from_str(buf.ctx, curlies("Bank["+str(bank_id) + "]").c_str());
        auto rddom = to_uset(domain(its_range(bank_func, bnk)));
        cout << "rddom before its: " << str(rddom) << endl;
        rddom = coalesce(its(rddom, buf.global_range()));
        cout << "rddom after its: " << str(rddom) << endl;
        auto point = pick(get_points(bnk));
        cout << "ADD BANK!\n Bank id: " << str(point) << endl;
        std::set<string> input_sets = bank_impl.bank_writers.at(bank_id);
        std::set<string> output_sets = bank_impl.bank_readers.at(bank_id);
        cout << "Before grouping: " << endl;
        cout << "\tinput set: " << input_sets << endl;
        cout << "\toutput set: " << output_sets << endl;
        auto bank_IOs = buf.port_grouping(options, impl, rddom, input_sets, output_sets);
        for (auto bank_IO_pair: bank_IOs) {
            cout << "input group: " << bank_IO_pair.first << endl;
            cout << "output group: " << bank_IO_pair.second << endl;
          //TODO potential bug for multi bank with broad casting case
          //TODO bank is not a good intermediate representation and contains too much internal data
          //     use buffer impl then
          //if ((bank_IO_pair.first.size() == 1) && (bank_IO_pair.second.size() == 1)) {
          //  string inpt = pick(bank_IO_pair.first);
          //  string outpt = pick(bank_IO_pair.second);
          //  maybe<int> delay_info = buf.dependence_distance_max(inpt, outpt);
          //  assert(delay_info.has_value());
          //  auto bnk_info = buf.compute_bank_info(inpt, outpt, delay_info.get_value());
          //  buf.add_bank_between(inpt, outpt, bnk_info);

          //  //impl.add_new_bank_between({inpt}, {outpt}, to_set(rddom));
          //} else {
          //  auto input_sets = bank_IO_pair.first;
          //  auto output_sets = bank_IO_pair.second;
          //  cout << "input sets: " << input_sets << endl;
          //  cout << "output sets: " << output_sets << endl;
          //  auto bnk_info = buf.compute_bank_info(rddom, point, input_sets, output_sets);
          //  buf.add_bank_between(input_sets, output_sets, bnk_info);

          //  //impl.add_new_bank_between(input_sets, output_sets, to_set(rddom));
          //}
        }
        //if (buf.overlap_schedule(input_sets) || buf.overlap_schedule(output_sets)) {
        //    cout << "inputs for bank: " << input_sets << endl;
        //    cout << "outputs for bank: " << output_sets << endl;
        //    assert(input_sets.size() == 1);
        //  for (string inpt : input_sets) {
        //    for (string outpt: output_sets) {
        //      //auto bnk_info = buf.compute_bank_info(rddom, point, {inpt}, {outpt});
        //      maybe<int> delay_info = buf.dependence_distance_max(inpt, outpt);
        //      assert(delay_info.has_value());
        //      auto bnk_info = buf.compute_bank_info(inpt, outpt, delay_info.get_value());
        //      buf.add_bank_between(inpt, outpt, bnk_info);
        //    }
        //    buf.merge_bank_broadcast(inpt);
        //  }
        //} else {
        //    auto bnk_info = buf.compute_bank_info(rddom, point, input_sets, output_sets);
        //    buf.add_bank_between(input_sets, output_sets, bnk_info);
        //}
      }
    }
    //else if (auto bank_impl = buf.get_cyclic_banking_implement(impl);
    //            bank_impl.get_bank_num() > 1) {
    //            //false) {

    else if (auto cyclic_bank = cyclic_partition(options, buf);
            cyclic_bank.has_value()) {

        cout << "Use cyclic banking algorithm " << endl;
        CyclicBankingImpl bank_impl(impl, cyclic_bank.get_value());
        buf.banking.partition = "cyclic";
        isl_map* bank_partition_map = bank_impl.get_bank_map(buf);
        for (int b = 0; b < bank_impl.get_bank_num(); b++) {
          isl_set* bnk = isl_set_read_from_str(buf.ctx, curlies("Bank[" + str(b) + "]").c_str());
          //This is rddom
          isl_set* accesses_to_bank = simplify(::domain( its_range(bank_partition_map, bnk)));
          cout << "rddom: " << str(accesses_to_bank) << endl;

          //Add port
          std::set<string> input_sets;// = impl.bank_writers.at(b);
          std::set<string> output_sets;// = impl.bank_readers.at(b);
          for (auto pt : buf.get_all_ports()) {
            assert(!empty(bnk));

            //cout << "am: " << str(buf.access_map.at(pt)) << endl;
            isl_map* bnk_map = its_range(to_map(buf.access_map.at(pt)), accesses_to_bank);
            //cout << "bank map: " << str(bnk_map) << endl;
            if (!empty(bnk_map)) {
              if (buf.is_out_pt(pt)) {
                output_sets.insert(pt);
                //impl.bank_readers[b].insert(pt);
                //impl.outpt_to_bank[pt].insert(b);
              } else {
                input_sets.insert(pt);
                //impl.bank_writers[b].insert(pt);
                //impl.inpt_to_bank[pt].insert(b);
              }
            }
          }
          cout << "ADD BANK!\n Bank id: " << b << endl;
          cout << "bank impl before port group: " << impl << endl;
          cout << "Before grouping: " << endl;
          cout << "\tinput set: " << input_sets << endl;
          cout << "\toutput set: " << output_sets << endl;
          auto rddom = coalesce(its(to_uset(accesses_to_bank), buf.global_range()));
          auto bank_IOs = buf.port_grouping(options, impl,
                  rddom, input_sets, output_sets);
        }
        cout << impl << endl;
    }
    //FIXME: ASPLOSHACK
    //This is a hack , we do not know which hierarchy of memory to map at this point
    else if (buf.num_in_ports() <= options.mem_hierarchy.at("mem").get_inpt_num() &&
            buf.num_out_ports() <= options.mem_hierarchy.at("mem").get_outpt_num()) {
        auto rddom = buf.global_range();
        auto inpts = buf.get_in_ports();
        auto outpts = buf.get_out_ports();
        std::set<string> in_port_set = std::set<string>(inpts.begin(), inpts.end());
        std::set<string> out_port_set = std::set<string>(outpts.begin(), outpts.end());
        //auto bnk_info = buf.compute_bank_info(in_port_set, out_port_set);
        //buf.add_bank_between(in_port_set, out_port_set, bnk_info);
        int impl_bank = impl.add_new_bank_between(in_port_set, out_port_set, to_set(buf.global_range()));
        cout << "IO of ubuffer: " << in_port_set << out_port_set << endl;
        impl.sequentially_assign_inpt(buf.sort_pt_by_bundle(in_port_set), impl_bank);
        impl.sequentially_assign_outpt(buf.sort_pt_by_bundle(out_port_set), impl_bank);
    }
    else {

        cout << "Use exhaustive banking! " << endl;

        //This function may stuck in double buffer case
        buf.generate_banks(options);
        buf.parse_exhaustive_banking_into_impl(impl);
        cout << "After exhaustive banking:\n " << impl << endl;
        //cout << "CANNOT support by current banking strategies!" << endl;
    }
}

int buffer_capacity(UBuffer& buf) {
  int c = 0;
  for (auto b : buf.get_banks()) {
    if (b.tp == INNER_BANK_OFFSET_STACK) {
      c += b.maxdelay;
    } else {
      assert(b.rddom != nullptr);
      c += int_upper_bound(card(b.rddom));
    }
  }
  return c * buf.port_widths;
}

