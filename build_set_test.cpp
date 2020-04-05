#include "app.h"
#include "ubuffer.h"
#include "codegen.h"

vector<int> parse_pt(isl_point* p) {
  assert(p != nullptr);
  return parse_pt(str(p));
}

struct CodegenOptions {
  bool internal;
  bool all_rams;
  bool add_dependence_pragmas;
  bool use_custom_code_string;
  string code_string;
  bool simplify_address_expressions;

  CodegenOptions() : internal(true), all_rams(false), add_dependence_pragmas(true),
  use_custom_code_string(false), code_string(""), simplify_address_expressions(false) {}

};

umap* get_lexmax_events(const std::string& outpt, UBuffer& buf) {
  umap* src_map = nullptr;
  for (auto inpt : buf.get_in_ports()) {
    auto beforeAcc = lex_gt(buf.schedule.at(outpt), buf.schedule.at(inpt));
    if (src_map == nullptr) {
      auto outmap = buf.access_map.at(outpt);
      auto inmap = buf.access_map.at(inpt);
      src_map =
        its(dot(outmap,
              inv(inmap)), beforeAcc);
    } else {
      src_map =
        unn(src_map, ((its(dot(buf.access_map.at(outpt), inv(buf.access_map.at(inpt))), beforeAcc))));
    }
  }

  //cout << "src map done: " << str(src_map) << endl;
  auto sched = buf.global_schedule();
  auto after = lex_gt(sched, sched);

  src_map = its(src_map, after);
  src_map = lexmax(src_map);

  auto time_to_event = inv(sched);

  auto lex_max_events =
    dot(lexmax(dot(src_map, sched)), time_to_event);

  //cout << "Done" << outpt << endl;
  return lex_max_events;
}

umap* last_reads(const string& inpt, UBuffer& buf) {
  auto sched = buf.global_schedule();
  cout << "Port: " << inpt << endl;
  auto writes = buf.access_map.at(inpt);
  cout << "Access map: " << str(writes) << endl;
  auto writers = inv(writes);
  cout << "Writer map: " << str(writers) << endl;
  uset* written_values = (range(writes));
  isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
  for (auto outpt : buf.get_out_ports()) {
    reads_from_fifo =
      unn(reads_from_fifo, (buf.access_map.at(outpt)));
  }
  reads_from_fifo = its_range(reads_from_fifo, written_values);
  cout << "Reads: " << str(reads_from_fifo) << endl;

  auto write_sched = its(sched, domain(writes));
  cout << "Write schedule: " << str(write_sched) << endl;

  auto read_sched = its(sched, domain(reads_from_fifo));
  cout << "Read schedule: " << str(read_sched) << endl;
  auto vals_to_reads = inv(reads_from_fifo);

  cout << "vals to reads: " << str(reads_from_fifo) << endl;
  // TODO: Should be lexmax in the schedule
  auto last_read = lexmax(vals_to_reads);
  return last_read;

}

umap* death_schedule(const string& inpt, UBuffer& buf) {

  auto sched = buf.global_schedule();
  //cout << "Port: " << inpt << endl;
  auto writes = buf.access_map.at(inpt);
  assert(writes!= nullptr);

  //cout << "Access map: " << str(writes) << endl;

  auto writers = inv(writes);
  assert(writers != nullptr);
  //cout << "Writer map: " << str(writers) << endl;
  uset* written_values = (range(writes));
  isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
  for (auto outpt : buf.get_out_ports()) {
    reads_from_fifo =
      unn(reads_from_fifo, (buf.access_map.at(outpt)));
  }
  reads_from_fifo = its_range(reads_from_fifo, written_values);
  //cout << "Reads: " << str(reads_from_fifo) << endl;

  auto write_sched = its(sched, domain(writes));
  //cout << "Write schedule: " << str(write_sched) << endl;

  auto read_sched = its(sched, domain(reads_from_fifo));
  assert(reads_from_fifo != nullptr);

  //cout << "Read schedule: " << str(read_sched) << endl;
  auto vals_to_reads = inv(reads_from_fifo);

  // Should be lexmax in the schedule
  auto last_read = lexmax(vals_to_reads);
  //cout << "Last read: " << str(last_read) << endl;

  //auto read_op_sched = dot(vals_to_reads, sched);
  //cout << "read schedule : " << str(read_sched) << endl;
  auto death_sched = dot(last_read, sched);
  return death_sched;
}

umap* forced_eviction_times(const string& inpt, UBuffer& buf) {
  auto sched = buf.global_schedule();
  cout << "Port: " << inpt << endl;
  auto writes = buf.access_map.at(inpt);
  assert(writes!= nullptr);

  cout << "Access map: " << str(writes) << endl;

  auto writers = inv(writes);
  assert(writers != nullptr);
  cout << "Writer map: " << str(writers) << endl;
  uset* written_values = (range(writes));
  isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
  for (auto outpt : buf.get_out_ports()) {
    reads_from_fifo =
      unn(reads_from_fifo, (buf.access_map.at(outpt)));
  }
  reads_from_fifo = its_range(reads_from_fifo, written_values);
  //cout << "Reads: " << str(reads_from_fifo) << endl;

  auto write_sched = its(sched, domain(writes));
  //cout << "Write schedule: " << str(write_sched) << endl;

  auto read_sched = its(sched, domain(reads_from_fifo));
  assert(reads_from_fifo != nullptr);

  cout << "Read schedule: " << str(read_sched) << endl;
  auto vals_to_reads = inv(reads_from_fifo);

  // Should be lexmax in the schedule
  auto last_read = lexmax(vals_to_reads);
  cout << "Last read: " << str(last_read) << endl;

  //auto read_op_sched = dot(vals_to_reads, sched);
  //cout << "read schedule : " << str(read_sched) << endl;
  auto death_sched = dot(last_read, sched);
  //cout << "death schedule: " << str(death_sched) << endl;

  auto earlier_events =
    unn(lex_gt(read_sched, write_sched), lex_gt(read_sched, death_sched));
  auto esched = unn(death_sched, write_sched);

  assert(esched != nullptr);

  auto earlier_event_times = dot(earlier_events, esched);
  auto earliest_event_time = lexmax(earlier_event_times);
  auto earliest_event = dot(earliest_event_time, inv(esched));

  auto forced_eviction_times =
    its(death_sched, range(earliest_event));
  //cout << "forced eviction times: " << str(forced_eviction_times) << endl;
  return forced_eviction_times;
}

void print_death_times(UBuffer& buf) {

  auto sched = buf.global_schedule();
  for (auto inpt : buf.get_in_ports()) {
    cout << "Port: " << inpt << endl;
    auto writes = buf.access_map.at(inpt);
    cout << "Access map: " << str(writes) << endl;
    auto writers = inv(writes);
    cout << "Writer map: " << str(writers) << endl;
    uset* written_values = (range(writes));
    isl_union_map* reads_from_fifo = rdmap(buf.ctx, "{}");
    for (auto outpt : buf.get_out_ports()) {
      reads_from_fifo =
        unn(reads_from_fifo, (buf.access_map.at(outpt)));
    }
    reads_from_fifo = its_range(reads_from_fifo, written_values);
    cout << "Reads: " << str(reads_from_fifo) << endl;

    auto write_sched = its(sched, domain(writes));
    cout << "Write schedule: " << str(write_sched) << endl;

    auto read_sched = its(sched, domain(reads_from_fifo));
    cout << "Read schedule: " << str(read_sched) << endl;
    auto vals_to_reads = inv(reads_from_fifo);

    // Should be lexmax in the schedule
    auto last_read = lexmax(vals_to_reads);
    //cout << "Last read: " << str(last_read) << endl;

    //auto read_op_sched = dot(vals_to_reads, sched);
    //cout << "read schedule : " << str(read_sched) << endl;
    auto death_sched = dot(last_read, sched);
    cout << "death schedule: " << str(death_sched) << endl;

    auto earlier_events =
      unn(lex_gt(read_sched, write_sched), lex_gt(read_sched, death_sched));
    auto esched = unn(death_sched, write_sched);

    auto earlier_event_times = dot(earlier_events, esched);
    auto earliest_event_time = lexmax(earlier_event_times);
    auto earliest_event = dot(earliest_event_time, inv(esched));

    auto forced_eviction_times =
      its(death_sched, range(earliest_event));
    cout << "forced eviction times: " << str(forced_eviction_times) << endl;

    cout << "earliest event: " << str(earliest_event) << endl;
    bool event_isnt_death = isl_union_set_is_empty(its(domain(death_sched), range(earliest_event)));
    bool event_is_death = !event_isnt_death;

    cout << "Earliest event is death ?" << event_is_death << endl;

    //assert(!event_is_death);

    //cout << "reads to earlier events: " << str(earlier_events) << endl;
    //cout << "reads to earliest event: " << str(lexmin(earlier_events)) << endl;


    // Reads -> times
    // Writes -> times
    // Deaths -> times
    // Get umap from death time to read time

    // (read, earlier deaths) | (read, earlier writes)
    // get last in schedule?
  }
}

// Compute a map from data read on read port to the fifo
// offset of the data in the FIFO cache for write_port
isl_union_pw_qpolynomial* compute_fifo_addr(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  cout << "Getting fifo addrs for: " << read_port << " to " << write_port << " in: " << buf.name << endl;

  isl_union_map* sched = buf.schedule.at(write_port);
  assert(sched != nullptr);

  //print_death_times(buf);

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

  //cout << "WritesBtwn: " << str(WritesBtwn) << endl;

  // Also need: evictsbetween?
  // img_comp -> imgs evicted?
  //umap* evict_sched = forced_eviction_times(write_port, buf);
  umap* evict_sched =
    death_schedule(write_port, buf);

  cout << "Evict sched: " << str(evict_sched) << endl;
  cout << "rdsched    : " << str(rdsched) << endl;
  auto EvictsBeforeRead =
    lex_gt(rdsched, evict_sched);

  cout << "EvictsBeforeRead: " << str(EvictsBeforeRead) << endl;

  auto EvictsAfterAction =
    lex_lt(sched, evict_sched);
  auto EvictsAfterProduction =
    dot(WriteThatProducesReadData, EvictsAfterAction);

  auto EvictsBtwn = its(EvictsAfterProduction, EvictsBeforeRead);
  cout << "EvictsBtwn: " << str(EvictsBtwn) << endl;
  //assert(false);

  return card(unn(EvictsBtwn, WritesBtwn));
}

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

  //cout << "WritesBtwn: " << str(WritesBtwn) << endl;

  auto c = card(WritesBtwn);
  //cout << "got card" << endl;
  return c;
}

int compute_dd_lower_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  //cout << "Computing dd from " << read_port << " to " << write_port << endl;
  auto c = compute_dd(buf, read_port, write_port);
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_min, b);
  return bnd_int(bound);
}

int compute_dd_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  //cout << "DD: " << str(c) << endl;
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_max, b);
  return bnd_int(bound);
}

string evaluate_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  c = coalesce(c);
  //c = simplify(c);
  auto out_domain = buf.domain.at(read_port);
  c = isl_union_pw_qpolynomial_gist(c, to_uset(out_domain));

  auto folds  = get_polynomials(c);
  if (folds.size() == 1) {
    return codegen_c(folds[0]);
  }

  assert(folds.size() == 0);
  return "0";
}

void generate_vivado_tcl(std::string& name) {
  ofstream of(name + "_hls.tcl");

  of << "open_project -reset " << name << "_proj" << endl;
  of << "set_top " << name << endl;
  of << "add_files -cflags \"-I ../../ -std=c++11 -D__VIVADO_SYNTH__\" " + name + ".cpp" << endl;
  of << "add_files -cflags \"-I ../../ -std=c++11 -D__VIVADO_SYNTH__\" " + name + ".cpp" << endl;
  of << "add_files -cflags \"-I ../.. -std=c++11 -D__VIVADO_SYNTH__\" -tb tb_soda_" + name + ".cpp" << endl;
  of << "open_solution -reset \"solution1\"" << endl;
  of << "set_part {xc7k160tfbg484-2}" << endl;
  of << "list_core" << endl;
  of << "create_clock -period 5" << endl;
  of << "csynth_design" << endl;
  of << "export_design -rtl verilog" << endl;
  of << "cosim_design -rtl verilog" << endl;
  of << "exit" << endl;
  of.close();
}

void generate_vivado_tcl(UBuffer& buf) {
  generate_vivado_tcl(buf.name);
}

int compute_max_dd(UBuffer& buf, const string& inpt) {
  int maxdelay = 0;
  for (auto outpt : buf.get_out_ports()) {
    //cout << "computing dd bound for " << inpt << " -> " << outpt << " on " << buf.name << endl;
    int r0 = compute_dd_bound(buf, outpt, inpt);
    if (r0 > maxdelay) {
      maxdelay = r0;
    }
  }
  return maxdelay;
}

void generate_ram_bank(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank) {

  string ram = bank.name + "_store";

  out << "#ifdef __VIVADO_SYNTH__" << endl;
  out << tab(1) << bank.pt_type_string << " " << ram
    << "[" << bank.layout.cardinality() << "];" << endl << endl;
  out << "#else" << endl;
  out << tab(1) << bank.pt_type_string << "* " << ram << ";" << endl;
  out << "#endif // __VIVADO_SYNTH__" << endl;

  vector<string> vars;
  vector<string> decls;
  for (int i = 0; i < bank.layout.dimension(); i++) {
    vars.push_back("d" + str(i));
    decls.push_back("int d" + str(i));
  }
  string arg_list = comma_list(decls);

  vector<string> addr;
  for (int i = 0; i < vars.size(); i++) {
    vector<string> offset{vars.at(i)};
    for (int j = 0; j < i; j++) {
      offset.push_back(str(bank.layout.length(j)));
    }
    addr.push_back(sep_list(offset, "", "", "*"));
  }

  string addr_str = sep_list(addr, "(", ")", " + ");

  out << tab(1) << bank.pt_type_string << " read(" << arg_list << ") {";
  out << tab(2) << "return " << ram << "[" << addr_str << "];";
  out << tab(1) << "}" << endl << endl;
  out << tab(1) << "void write(" << bank.pt_type_string << "& value, " << arg_list << ") {" << endl;
  out << tab(2) << ram << "[" << addr_str << "] = value;" << endl;
  out << tab(1) << "}" << endl << endl;

}

void generate_bank(CodegenOptions& options,
    std::ostream& out,
    stack_bank& bank) {

  auto name = bank.name;
  auto pt_type_string = bank.pt_type_string;
  auto read_delays = bank.read_delays;
  auto num_readers = bank.num_readers;
  auto maxdelay = bank.maxdelay;

  out << "struct " << name << "_cache" <<  " {" << endl;
  out << "\t// RAM Box: " << bank.layout << endl;
  out << "\t// Capacity: " << maxdelay + 1 << endl;
  out << "\t// # of read delays: " << read_delays.size() << endl;

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

    //vector<int> capacities;
    //for (size_t i = 0; i < read_delays.size(); i++) {
      //int current = read_delays[i];
      //int partition_capacity = -1;
      //int next = -1;
      //if (i < (int) read_delays.size() - 1 &&
          //read_delays[i] != read_delays[i + 1]) {
        //next = read_delays[i + 1];
        //partition_capacity = next - current;
      //} else {
        //partition_capacity = 1;
      //}
      //capacities.push_back(partition_capacity);

      //out << "\t// Parition [" << current << ", " << next << ") capacity = " << partition_capacity << endl;
      //if (partition_capacity > 1) {
        //out << "\tfifo<" << pt_type_string << ", " << partition_capacity << "> f" << i << ";" << endl;
      //} else {
        //out << "\t" << pt_type_string << " f" << i << ";" << endl;
      //}
    //}

    //assert(capacities.size() == partitions.size());

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

Box extract_box(uset* rddom) {
  cout << "extracting box from " << str(rddom) << endl;
  auto min_pt =
    parse_pt(sample(lexmin(rddom)));
  auto max_pt =
    parse_pt(sample(lexmax(rddom)));

  assert(min_pt.size() == max_pt.size());

  Box b;
  for (size_t i = 0; i < min_pt.size(); i++) {
    b.intervals.push_back({min_pt.at(i), max_pt.at(i)});
  }
  cout << tab(1) << "result = " << b << endl;
  return b;
}

bank compute_bank_info(
    const std::string& inpt, 
    const std::string& outpt,
    UBuffer& buf) {

  int maxdelay = compute_dd_bound(buf, outpt, inpt);
  //int maxdelay = compute_max_dd(buf, inpt);
  vector<int> read_delays{0};

  // NOTE: Just to ensure we dont force everything to be a RAM
  //int num_readers = 10;
  int num_readers = 0;

  auto in_actions = buf.domain.at(inpt);
  auto lex_max_events =
    get_lexmax_events(outpt, buf);
  auto act_dom =
    domain(its_range(lex_max_events, to_uset(in_actions)));

  if (!isl_union_set_is_empty(act_dom)) {
    num_readers++;
    auto c = compute_dd(buf, outpt, inpt);
    auto qpd = compute_dd_bound(buf, outpt, inpt);
    int lb = compute_dd_lower_bound(buf, outpt, inpt);

    for (int i = lb; i < qpd + 1; i++) {
      read_delays.push_back(i);
    }
  }

 
  string pt_type_string = buf.port_type_string();
  string name = inpt + "_to_" + outpt;
  cout << "inpt  = " << inpt << endl;
  cout << "outpt = " << outpt << endl;
  cout << "name of bank = " << name << endl;

  auto rddom =
    unn(range(buf.access_map.at(inpt)),
        range(buf.access_map.at(outpt)));
  Box mem_box = extract_box(rddom);

  stack_bank bank{name, BANK_TYPE_STACK, pt_type_string, read_delays, num_readers, maxdelay, mem_box};
  //stack_bank bank{name, BANK_TYPE_RAM, pt_type_string, read_delays, num_readers, maxdelay, mem_box};

  return bank;
}

vector<string> space_var_decls(isl_space* s) {
  assert(isl_space_is_set(s));

  vector<string> dim_decls;
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(ctx(s), dn);
      assert(new_id != nullptr);
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }

    assert(isl_space_has_dim_name(s, isl_dim_set, i));
    assert(isl_space_has_dim_id(s, isl_dim_set, i));
    dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
  }
  return dim_decls;
}

vector<string> space_var_args(isl_space* s) {
  assert(isl_space_is_set(s));

  vector<string> dim_decls;
  for (int i = 0; i < num_dims(s); i++) {
    if (!isl_space_has_dim_id(s, isl_dim_set, i)) {
      string dn = "d" + to_string(i);
      auto new_id = id(ctx(s), dn);
      assert(new_id != nullptr);
      s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
    }

    assert(isl_space_has_dim_name(s, isl_dim_set, i));
    assert(isl_space_has_dim_id(s, isl_dim_set, i));
    dim_decls.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
  }
  return dim_decls;
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

void generate_code_prefix(CodegenOptions& options,
    std::ostream& out, UBuffer& buf) {

  for (auto inpt : buf.get_in_ports()) {
    for (auto outpt : buf.get_out_ports()) {
      auto overlap =
        its(range(buf.access_map.at(inpt)), range(buf.access_map.at(outpt)));

      if (!empty(overlap)) {
        stack_bank bank = compute_bank_info(inpt, outpt, buf);
        buf.add_bank_between(inpt, outpt, bank);
      }
    }
  }

  for (auto inpt : buf.get_in_ports()) {
    vector<stack_bank> receivers = buf.receiver_banks(inpt);
    cout << "Receiver banks for " << inpt << endl;
    vector<stack_bank> mergeable;
    for (auto bnk : receivers) {
      cout << tab(1) << bnk.name << ", # read offsets: " << bnk.read_delays.size() << endl;
      if (bnk.read_delays.size() == 2) {
        assert(bnk.read_delays[0] == 0);
        mergeable.push_back(bnk);
      }

    }

    if (mergeable.size() > 0) {
      stack_bank merged;
      merged.tp = BANK_TYPE_STACK;
      merged.layout = Box(mergeable.at(0).layout.dimension());
      merged.name =
        inpt + "_merged_banks_" + str(mergeable.size());
      merged.pt_type_string =
        mergeable.at(0).pt_type_string;
      merged.num_readers = mergeable.size();
      merged.maxdelay = -1;
      for (auto m : mergeable) {
        merged.layout = unn(merged.layout, m.layout);
        if (m.maxdelay > merged.maxdelay) {
          merged.maxdelay = m.maxdelay;
        }
        for (auto mrd : m.read_delays) {
          merged.read_delays.push_back(mrd);
        }
      }
      merged.read_delays = sort_unique(merged.read_delays);

      for (auto to_replace : mergeable) {
        buf.replace_bank(to_replace, merged);
      }
    }
  }

  string inpt = buf.get_in_port();
  out << "#include \"hw_classes.h\"" << endl << endl;
  for (auto b : buf.get_banks()) {
    generate_bank(options, out, b);
  }

  out << "struct " << buf.name << "_cache {" << endl;

  for (auto b : buf.get_banks()) {
    out << tab(1)
      << b.name << "_cache "
      << b.name
      << ";" << endl;
  }

  out << "};" << endl << endl;

  out << endl << endl;

  for (auto inpt : buf.get_in_ports()) {
    vector<string> args;
    args.push_back(buf.port_type_string(inpt) + "& " + inpt);
    args.push_back(buf.name + "_cache& " + buf.name);
    concat(args, dimension_var_decls(inpt, buf));
    string var_args = comma_list(dimension_var_args(inpt, buf));

    out << "inline void " << inpt << "_write(";
    out << comma_list(args) << ") {" << endl;

    for (auto sb : buf.receiver_banks(inpt)) {
      if (sb.tp == BANK_TYPE_STACK) {
        out << tab(1) << buf.name << "." << sb.name << ".push(" << inpt << ");" << endl;
      } else {
        assert(false);
        out << tab(1) << buf.name << "." << sb.name << ".write(" << inpt << ", " << var_args << ");" << endl;
      }
    }

    out << "}" << endl << endl;
  }

}

bool is_optimizable_constant_dd(const string& inpt, const string& outpt, UBuffer& buf) {
  auto out_domain = buf.domain.at(outpt);
  auto qpd = compute_dd(buf, outpt, inpt);
  auto pieces = get_pieces(qpd);
  uset* pieces_dom = isl_union_set_read_from_str(ctx(qpd), "{}");
  for (auto p : pieces) {
    //cout << "// " << str(p.first) << " -> " << str(p.second) << endl;
    auto pp = isl_pw_qpolynomial_intersect_domain(isl_pw_qpolynomial_from_qpolynomial(cpy(p.second)), cpy(p.first));
    pieces_dom = unn(pieces_dom, to_uset(p.first));
  }

  bool pieces_are_complete =
    subset(to_uset(out_domain), (pieces_dom));
  int ub = int_upper_bound(qpd);
  int lb = int_lower_bound(qpd);

  if (pieces_are_complete) {
    return ub == lb;
  }

  return false;
}

selector generate_select_decl(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
  isl_space* s = get_space(buf.domain.at(outpt));
  auto dim_decls = space_var_decls(s);

  selector sel;
  sel.name = outpt + "_select";
  sel.buf_name = buf.name;
  sel.pt_type = buf.port_type_string();
  sel.out_port = outpt;
  sel.vars = space_var_args(s);

  out << "inline " + buf.port_type_string() + " " + outpt + "_select(";
  size_t nargs = 0;
  out << buf.name << "_cache& " << buf.name << ", ";
  nargs++;
  out << sep_list(dim_decls, "", "", ", ");

  out << ") {" << endl;
  cout << "Created dim decls" << endl;
  ignore_inter_deps(out, buf.name);

  return sel;
}

void select_debug_assertions(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
  // ------------ Error printouts only
  vector<string> offset_printouts;
  isl_space* s = get_space(buf.domain.at(outpt));
  auto vars = space_var_args(s);

  assert(isl_space_is_set(s));
  for (int i = 0; i < num_dims(s); i++) {
    offset_printouts.push_back("\" " + vars.at(i) + " = \" << " + vars.at(i) + " ");
  }

  out << "\tcout << \"Error: Unsupported offsets: \" << " << sep_list(offset_printouts, "", "", " << ") << " << endl;" << endl;
  out << "\tassert(false);\n\treturn 0;\n";
}

string simplified_delay_string(CodegenOptions& options, const string& inpt, const string& outpt, UBuffer& buf) {
  string bank = buf.bank_between(inpt, outpt);

  auto out_domain = buf.domain.at(outpt);
  cout << "Out domain: " << str(out_domain) << endl;
  auto qpd = compute_dd(buf, outpt, inpt);
  cout << "Pieces of " << str(qpd) << endl;
  auto pieces = get_pieces(qpd);
  map<isl_set*, isl_qpolynomial*> simplified_pieces;
  for (auto p : pieces) {
    isl_set* simplified = cpy(p.first);
    //isl_set_gist(cpy(p.first), cpy(out_domain));
    //isl_set* simplified = isl_set_gist(cpy(p.first), cpy(out_domain));

    //isl_set* simplified = universe(get_space(out_domain));
    //auto orig = coalesce(p);
    //cout << tab(1) << str(orig) << " -> " << str(p.second) << endl << endl;
    //cout << tab(1) << "Constraints..." << endl;
    //auto cs = constraints(orig);
    //for (auto c : cs) {
      //cout << tab(2) << str(c) << endl;
      //isl_set* cs = isl_set_universe(get_space(out_domain));
      //cs = add_constraint(cs, c);

      //cout << tab(3) << "set: " << str(cs) << endl;
      ////if (subset(out_domain, cs)) {
        ////cout << tab(4) << " IS REDUNDANT" << endl;
      ////} else {
        ////simplified = add_constraint(simplified, c);
      ////}
      //simplified = add_constraint(simplified, c);
    //}
    cout << "simplified; " << str(simplified) << endl;
    assert(!empty(simplified));
    simplified_pieces[simplified] = cpy(p.second);
  }

  //if (options.simplify_address_expressions) {
  string simple_addr_str = "0";
  cout << "Simplified pieces" << endl;
  for (auto p : simplified_pieces) {
    cout << tab(1) << str(p.first) << " -> " << str(p.second) << endl << endl;
    simple_addr_str = "(" + codegen_c(p.first) + " ? " + codegen_c(p.second) + " : " + simple_addr_str + ")";
    if (subset(out_domain, p.first)) {
      simple_addr_str = codegen_c(p.second);
      break;
    }
  }

  return simple_addr_str;
}

string delay_string(CodegenOptions& options, const string& inpt, const string& outpt, UBuffer& buf) {

  string bank = buf.bank_between(inpt, outpt);

  auto out_domain = buf.domain.at(outpt);
  cout << "Out domain: " << str(out_domain) << endl;
  auto qpd = compute_dd(buf, outpt, inpt);
  cout << "Pieces of " << str(qpd) << endl;
  auto pieces = get_pieces(qpd);
  //assert(false);

  string dx = to_string(int_upper_bound(qpd));
  string delay_expr = evaluate_dd(buf, outpt, inpt);
  string value_str = "";
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
  return buf.name + "." + value_str;
}

selector generate_select(CodegenOptions& options, std::ostream& out, const string& outpt, UBuffer& buf) {
  selector sel = generate_select_decl(options, out, outpt, buf);

  auto lex_max_events = get_lexmax_events(outpt, buf);

  //cout << "Lexmax events: " << str(lex_max_events) << endl;
  //map<string, string> ms = umap_codegen_c(lex_max_events);
  //out << "\t// lexmax events: " << str(lex_max_events) << endl;
  out << tab(1) << "// " << outpt << " read pattern: " << str(buf.access_map.at(outpt)) << endl;
  vector<string> possible_ports;
  for (auto pt : buf.get_in_ports()) {
    if (buf.has_bank_between(pt, outpt)) {
      possible_ports.push_back(pt);
    }
  }

  map<string, string> in_ports_to_conditions;

  //cout << possible_ports.size() << " possible ports for " << outpt << " on buffer: " << endl << buf << endl;
  //cout << "lexmax = " << str(lex_max_events) << endl;
  for (auto inpt : possible_ports) {
    //cout << tab(1) << inpt << endl;
    auto write_ops =
      domain(buf.access_map.at(outpt));
    auto written =
      range(buf.access_map.at(inpt));
    auto read =
      range(buf.access_map.at(outpt));
    auto overlap = its(written, read);
    auto overlapped_reads = its_range(buf.access_map.at(outpt), overlap);
    auto overlapped_read_set = domain(overlapped_reads);
    auto overlapped_read_condition =
      gist(overlapped_read_set, (write_ops));

    //cout << tab(2) << "values written: " << str(range(buf.access_map.at(inpt))) << endl;
    //cout << tab(2) << "values read   : " << str(range(buf.access_map.at(outpt))) << endl;
    //cout << tab(2) << "port overlap  : " << str(its(written, read)) << endl;
    //cout << tab(2) << "read overlap  : " << str(overlapped_reads) << endl;
    //cout << tab(2) << "overlap set   : " << str(overlapped_read_set) << endl;
    //cout << tab(2) << "overlap test  : " << str(overlapped_read_condition) << endl;
    //cout << tab(2) << "overlap C     : " << codegen_c(overlapped_read_condition) << endl;
    in_ports_to_conditions[inpt] =
      codegen_c(overlapped_read_condition);
    //auto deps = dot(buf.access_map.at(inpt), inv(buf.access_map.at(outpt)));
    //cout << tab(2) << "deps: " << str(deps) << endl;
  }

  if (possible_ports.size() == 1) {
    string inpt = possible_ports.at(0);
    string peeked_val = delay_string(options, inpt, outpt, buf);
    sel.bank_conditions.push_back("1");
    sel.inner_bank_offsets.push_back(evaluate_dd(buf, outpt, inpt));

    out << tab(1) << "auto value_" << inpt << " = " << peeked_val << ";" << endl;
    out << tab(1) << "return value_" << inpt << ";" << endl;
  } else {
    for (auto port : possible_ports) {
      out << tab(1) << "if (" << map_find(port, in_ports_to_conditions) << ") {" << endl;
      string inpt = possible_ports.at(0);
      string peeked_val = delay_string(options, inpt, outpt, buf);
      sel.bank_conditions.push_back("1");
      sel.inner_bank_offsets.push_back(evaluate_dd(buf, outpt, inpt));

      out << tab(2) << "auto value_" << inpt << " = " << peeked_val << ";" << endl;
      out << tab(2) << "return value_" << inpt << ";" << endl;
      out << tab(1) << "}" << endl << endl;
      out << tab(1) << endl;
    }
  }

  select_debug_assertions(options, out, outpt, buf);
  out << "}" << endl << endl;

  return sel;
}

void generate_bundles(CodegenOptions& options, std::ostream& out, UBuffer& buf) {

  out << "// # of bundles = " << buf.port_bundles.size() << endl;

  for (auto b : buf.port_bundles) {
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
        cout << "setting id: " << str(new_id) << endl;
        s = isl_space_set_dim_id(s, isl_dim_set, i, new_id);
      }
      dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
      dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
    }

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

  for (auto outpt : buf.get_out_ports()) {
    buf.selectors[outpt] = generate_select(options, out, outpt, buf);
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

void generate_header(const UBuffer& buf) {
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


  generate_header(buf);
  generate_vivado_tcl(buf);
}

void dead_push_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "dead_push";
  buf.ctx = ctx;

  buf.add_in_pt("init",
    "{ init[i, j] : 0 <= i <= 8 and 0 <= j <= 8 }",
    "{ init[i, j] -> M[i, j] }",
    "{ init[i, j] -> [i, j, 0] }");

  buf.add_out_pt("read0",
    "{ read0[i, j] : 0 <= i <= 8 and 0 <= j <= 8 }",
    "{ read0[i, j] -> M[floor(i / 2), floor(j / 2)] }",
    "{ read0[i, j] -> [i, j, 1] }");

  generate_hls_code(buf);

  isl_ctx_free(buf.ctx);
  assert(false);
}

void synth_reduce_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  // for i in 0, 4:
  //    m[i] = 0
  //    for j in 0 3:
  //      r = m[i]
  //      m[i] = r + 1
  //    out = m[i]
	isl_union_set *domain =
    isl_union_set_read_from_str(ctx, "{ init[i] : 0 <= i <= 4;  read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3; update[i, j] : 0 <= i <= 4 and 0 <= j <= 3; out[i] : 0 <= i <= 4 }");
  auto naive_sched =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> [0, i, 0, 0, 0]; read0[i, j] -> [0, i, 1, j, 0]; update[i, j] -> [0, i, 1, j, 1]; out[i] -> [0, i, 2, 0, 0] }"), domain);
  //cout << "Code for naive schedule..." << endl;
  //cout << codegen_c(naive_sched) << endl;

  auto before = lex_lt(naive_sched, naive_sched);
  auto writes =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> M[i]; update[i, j] -> M[i] }"), domain);
  auto reads =
    its(isl_union_map_read_from_str(ctx, "{ read0[i, j] -> M[i]; out[i] -> M[i] }"), domain);
	isl_union_map *validity =
    its(dot(writes, inv(reads)), before);
  //cout << "Validity" << endl;
	isl_union_map *proximity =
    cpy(validity);

  isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
  auto schedmap = its(isl_schedule_get_map(sched), domain);
  //cout << "Reduce schedule..." << endl;

  //cout << "Code for reduce..." << endl;
  //cout << codegen_c(schedmap) << endl;

  UBuffer buf;
  buf.name = "reduce";
  buf.ctx = ctx;

  buf.add_in_pt("init",
    "{ init[i] : 0 <= i <= 4}",
    "{ init[i] -> M[i] : 0 <= i <= 4 }",
    "{ init[i] -> [0, i, 0, 0, 0] : 0 <= i <= 4 }");

  buf.add_in_pt("update",
    "{ update[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> [0, i, 1, j, 1] : 0 <= i <= 4 and 0 <= j <= 3 }");

  buf.add_out_pt("read0",
    "{ read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> [0, i, 1, j, 0] : 0 <= i <= 4 and 0 <= j <= 3 }");

  buf.add_out_pt("out",
    "{ out[i] : 0 <= i <= 4 }",
    "{ out[i] -> M[i] : 0 <= i <= 4 }",
    "{ out[i] -> [0, i, 2, 0, 0] : 0 <= i <= 4 }");

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_reduce.cpp reduce.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_upsample_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "upsample";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i, j] : 0 <= i < 10 and 0 <= j < 2}");
  buf.access_map["read0"] =
    rdmap(ctx, "{ read0[i, j] -> M[i] : 0 <= i < 10 and 0 <= j < 2}");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i, j] -> [i, 1, j] : 0 <= i < 10 and 0 <= j < 2 }");
  buf.isIn["read0"] = false;

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_upsample.cpp upsample.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
  cout << "Upsample passed" << endl;
}

void synth_sr_boundary_condition_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "shift_reg_bc";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 10}");
  buf.access_map["read0"] =
    rdmap(ctx, "{ read0[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 10}");
  buf.access_map["read1"] =
    rdmap(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 9; read1[i] -> M[9] : 9 <= i < 10 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 10 }");
  buf.access_map["read2"] =
    rdmap(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8; read2[i] -> M[9] : 8 <= i < 10}");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read2"] = false;

  generate_hls_code(buf);

  int res = system("g++ -std=c++11 tb_shift_reg_bc.cpp shift_reg_bc.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);

}

void synth_wire_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "shift_reg";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    rdmap(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 8}");
  buf.access_map["read0"] =
    rdmap(ctx, "{ read0[i] -> M[i] : 0 <= i < 8 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 8}");
  buf.access_map["read1"] =
    rdmap(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 8 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 8}");
  buf.access_map["read2"] =
    rdmap(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8 }");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read2"] = false;

  generate_hls_code(buf);

  int res = system("clang++ -std=c++11 tb_shift_reg.cpp shift_reg.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_lb_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "linebuffer_3x3";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i, j] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> M[j, i] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> [i, j, 0] : 0 <= i < 64 and 0 <= j < 64 }"
      );

  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      string rn = "read_" + to_string(r) + "_" + to_string(c);
      buf.add_out_pt(rn,
          "{ " + rn + "[i, j] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> M[j + " + to_string(c) + ", i + " + to_string(r)  + "] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> [i + 2, j + 2, 1] : 0 <= i < 62 and 0 <= j < 62 }"
          );

      //int r0 = check_value_dd(buf, rn, "write0");
      int r0 = compute_dd_bound(buf, rn, "write0");
      cout << "Delay (" << c << ", " << r << "): " << r0 << endl;
    }
  }

  generate_hls_code(buf);

  int res = system("clang++ -std=c++11 tb_linebuffer_3x3.cpp linebuffer_3x3.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void permute_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.name = "permute";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i] : 0 <= i < 10 }",
      "{ write0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ write0[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_in_pt("write1",
      "{ write1[i] : 0 <= i < 10 }",
      "{ write1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ write1[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read0",
      "{ read0[i] : 0 <= i < 10 }",
      "{ read0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ read0[i] -> [1, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read1",
      "{ read1[i] : 0 <= i < 10 }",
      "{ read1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ read1[i] -> [1, i] : 0 <= i < 10 }"
      );

  generate_hls_code(buf);
}

string c_sanitize(const std::string& str) {
  string res = "";
  for (auto c : str) {
    if (c == '+') {
      res += "_p_";
    } else if (c == ')') {
      res += "_rp_";
    } else if (c == '(') {
      res += "_lp_";
    } else if (c == '*') {
      res += "_m_";
    } else if (c == ' ') {
      res += "_";
    } else if (c == ',') {
      res += "_c_";
    } else if (c == '-') {
      res += "_m_";
    } else {
      res += c;
    }
  }
  return res;
}

struct op {

  op* parent;
  bool is_loop;
  int start;
  int end_exclusive;
  std::string name;
  std::vector<op*> children;
  std::vector<pair<std::string, std::string> > produce_locs;

  std::vector<pair<std::string, std::string> > consume_locs;
  std::string func;

  isl_ctx* ctx;

  op() : parent(nullptr), is_loop(false) {}

  map<op*, Box> get_domain_boxes() {
      Box empty;
      map<op*, Box> domain_map;
      get_domain_boxes(empty, domain_map);
      return domain_map;
  }

  void get_domain_boxes(Box b, map<op*, Box> & domain_map) {
      domain_map[this] = b;
      if (is_loop) {
          b.intervals.push_back({start, end_exclusive-1});
      }
      for (auto c : children) {
          c->get_domain_boxes(b, domain_map);
      }
  }

  void pretty_print(std::ostream& out, int level) const {

    if (is_loop) {
      out << tab(level) << "for (int " << name << " = " << start << "; " << name << " < " << end_exclusive << "; " << name << "++) {" << endl;
      for (auto c : children) {
        c->pretty_print(out, level + 1);
      }
      out << tab(level) << "}" << endl;
    } else {
      vector<string> args;
      out << tab(level) << name << ": " << comma_list(produces()) << " = " << func << "(" << comma_list(consumes()) << ")" << endl;
    }
  }

  string consumed_value_name(pair<string, string>& val_loc) {
    string val_name = c_sanitize(val_loc.first + "_" + val_loc.second + "_value");
    return val_name;
    //if (contains_key(val_loc, consumed_value_names)) {
      //return map_find(val_loc, consumed_value_names);
    //}
    //return val_loc.first + "_value";
  }

  void add_function(const std::string& n) {
    func = n;
  }

  void add_function(const std::string& n, const vector<string>& args) {
    func = n;
    //func_args = args;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    return xl;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    auto yl = xl->add_loop(y, y_min, y_max);
    return yl;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    auto yl = xl->add_loop(y, y_min, y_max);
    auto cl = yl->add_loop(c, c_min, c_max);
    return cl;
  }

  op* add_loop(const std::string& name, const int l, const int u) {
    assert(is_loop);

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this ;
    lp->is_loop = true;
    lp->start = l;
    lp->end_exclusive = u;
    children.push_back(lp);

    return lp;
  }

  op* store(const pair<string, string>& dst, const pair<string, string>& src) {
    auto op = add_op("store_" + dst.first + "_from_" + src.first);
    op->add_load(src.first, src.second);
    op->add_store(dst.first, dst.second);
    return op;
  }

  op* stencil(const pair<string, string>& src,
      const std::string& func_name,
      const std::vector<string>& vars,
      const std::vector<vector<int> >& offsets) {
    assert(false);
    return nullptr;
  }

  op* stencil_op(const string& out_name, const string& cu, const string& in_buf, vector<string> vars, const vector<vector<int> >& offsets) {
    string var_str = comma_list(vars);
    vector<string> loads = {};
    for (auto offset : offsets) {
      assert(offset.size() == vars.size());

      loads.push_back(in_buf);
      vector<string> ofstrs;
      int i = 0;
      for (auto val : offset) {
        ofstrs.push_back(vars.at(i) + " + " + to_string(val));
        i++;
      }
      loads.push_back(comma_list(ofstrs));
    }
    cout << "Loads in stencil op: " << endl;
    for (auto ld : loads) {
      cout << "\t" << ld << endl;
    }
    return add_op({out_name, var_str}, cu, loads);
  }

  op* add_op(const pair<string, string>& src, const std::string& func_name, const std::vector<string>& loads) {
    int n_ops = children.size();
    auto res = add_op(src.first + "_" + func_name + to_string(n_ops));
    assert(loads.size() % 2 == 0);
    vector<string> ops;
    for (int i = 0; i < loads.size(); i += 2) {
      auto r = res->add_load(loads[i], loads[i + 1]);
      ops.push_back(r);
    }
    assert(ops.size() == loads.size() / 2);
    res->add_function(func_name, ops);
    res->add_store(src.first, src.second);
    return res;
  }

  op* add_op(const std::string& name) {
    auto fo = new op();
    fo->name = name;
    fo->ctx = ctx;
    children.push_back(fo);
    return fo;
  }

  string add_load(const std::string& b, const std::string& loc) {
    assert(!is_loop);
    //consumes.insert(b + "[" + loc + "]");
    consume_locs.push_back({b, loc});
    string val_name = c_sanitize(b + "_" + loc + "_value");
    //consumed_value_names[{b, loc}] = val_name;
    return val_name;
  }

  vector<string> consumes() const {
    vector<string> ps;
    for (auto p : consume_locs) {
      ps.push_back(p.first + "[" + p.second + "]");
    }
    return ps;
  }

  vector<string> produces() const {
    vector<string> ps;
    for (auto p : produce_locs) {
      ps.push_back(p.first + "[" + p.second + "]");
    }
    return ps;
  }

  void add_store(const std::string& b, const std::string& loc) {
    assert(!is_loop);
    //produces.insert(b + "[" + loc + "]");
    produce_locs.push_back({b, loc});
  }

  //void add_args(const std::vector<op*>& args) {
    //for (auto a : args) {
      ////consumes.insert(a->name);
    //}
  //}

  void populate_iteration_domains(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    if (is_loop) {
      auto nds = active_vecs;
      nds.push_back(to_string(start) + " <= " + name + " < " + to_string(end_exclusive));
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, nds);
      }
    } else {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, active_vecs);
      }
    }
  }

  void populate_schedule_vectors(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    if (is_loop) {
      auto nds = active_vecs;
      assert(nds.size() > 0);

      nds.push_back(name);
      nds.push_back("0");
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, nds);
        nds[nds.size() - 1] = to_string(safe_stoi(nds[nds.size() - 1]) + 1);
      }
    } else {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, active_vecs);
      }
    }

    size_t max_len = 1;
    for (auto& v : sched_vecs) {
      auto& vecs = v.second;
      if (vecs.size() > max_len) {
        max_len = vecs.size();
      }
    }

    for (auto& v : sched_vecs) {
      size_t diff = max_len - v.second.size();
      for (size_t d = 0; d < diff; d++) {
        v.second.push_back("0");
      }
    }
  }

  void populate_iter_vars(map<op*, vector<string> >& varmap, vector<string>& active_vars) {
    if (is_loop) {
      auto nv = active_vars;
      nv.push_back(name);
      for (auto c : children) {
        c->populate_iter_vars(varmap, nv);
      }
    } else {
      varmap[this] = active_vars;
      for (auto c : children) {
        c->populate_iter_vars(varmap, active_vars);
      }
    }
  }

  set<op*> all_loops() {
    set<op*> loops{this};
    if (!is_loop) {
      loops = {};
    }
    for (auto c : children) {
      for (auto op : c->all_loops()) {
        loops.insert(op);
      }
    }
    return loops;
  }

  set<op*> all_ops() {
    set<op*> ops{this};
    if (is_loop) {
      ops = {};
    }
    for (auto c : children) {
      for (auto op : c->all_ops()) {
        ops.insert(op);
      }
    }
    return ops;
  }


};

typedef op loop;

struct prog {

  std::string name;
  struct isl_ctx* ctx;
  op* root;
  set<string> ins;
  set<string> outs;
  map<string, int> buffer_port_widths;
  string compute_unit_file;
  map<string, vector<int> > buffer_bounds;

  map<op*, Box> get_domain_boxes() {
      return root->get_domain_boxes();
  }


  void pretty_print() {
    cout << "program: " << name << endl;
    cout << "buffers..." << endl;
    for (auto b : buffer_bounds) {
      cout << tab(1) << b.first << endl;
      //"[" << comma_list(b.second) << "]" << endl;
    }
    root->pretty_print(cout, 0);
  }

  string buffer_element_type_string(const string& name) const {
    if (!contains_key(name, buffer_port_widths)) {
      return "hw_uint<32> ";
    }
    assert(contains_key(name, buffer_port_widths));

    auto width = buffer_port_widths.at(name);
    return "hw_uint<" + to_string(width) + ">";
  }

  int dim(const string& buf, const int dim) {
    if (!(contains_key(buf, buffer_bounds))) {
      cout << "No key for: " << buf << " in buffer_bounds" << endl;
    }
    assert(contains_key(buf, buffer_bounds));
    return map_find(buf, buffer_bounds).at(dim);
  }

  void stencil2(const std::string& operation) {
    regex opRe("(.*)\\((.*)\\) = (.*)\\((.*)\\((.*)\\)\\)");
    smatch match;
    auto res = regex_search(operation, match, opRe);
    assert(res);
    cout << "ResultBuffer : " << match[1] << endl;
    cout << "Index        : " << match[2] << endl;
    cout << "Operation    : " << match[3] << endl;
    cout << "Input buffer : " << match[4] << endl;
    cout << "Input inds   : " << match[5] << endl;
    assert(false);
  }

  vector<string> vector_load(const std::string& img, const std::string& rbase, const int ro, const int re) {
    vector<string> conv_loads;
    for (int r = ro; r < re; r++) {
      conv_loads.push_back(img);
      conv_loads.push_back(rbase + " + " + to_string(r));
    }
    return conv_loads;
  }

  vector<string> vector_load(const std::string& img, const std::string& rbase, const int ro, const int re,
      const std::string& cbase, const int co, const int ce) {
    vector<string> conv_loads;
    for (int r = ro; r < re; r++) {
      for (int c = co; c < ce; c++) {
        conv_loads.push_back(img);
        conv_loads.push_back(rbase + " + " + to_string(r) + ", " + cbase + " + " + to_string(c));
      }
    }
    return conv_loads;
  }

  vector<string> vector_load(const std::string& img, const std::string& rbase, const int ro, const int re,
      const std::string& cbase, const int co, const int ce,
      const std::string& bbase, const int bo, const int be) {
    vector<string> conv_loads;
    for (int r = ro; r < re; r++) {
      for (int c = co; c < ce; c++) {
        for (int b = bo; b < be; b++) {
          conv_loads.push_back(img);
          conv_loads.push_back(rbase + " + " + to_string(r) + ", " + cbase + " + " + to_string(c) + ", " + bbase + " + " + to_string(b));
        }
      }
    }
    return conv_loads;
  }

  loop* add_nest(
      const std::string& x, int x_min, int x_max) {
    return root->add_nest(x, x_min, x_max);
  }

  loop* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max) {
    return root->add_nest(x, x_min, x_max, y, y_min, y_max);
  }

  loop* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max) {
    return root->add_nest(x, x_min, x_max, y, y_min, y_max, c, c_min, c_max);
  }

  bool is_boundary(const std::string& name) {
    return elem(name, ins) || elem(name, outs);
  }

  void add_output(const std::string& name) {
    outs.insert(name);
  }

  void add_input(const std::string& name) {
    ins.insert(name);
  }

  prog() {
    ctx = isl_ctx_alloc();
    root = new op();
    root->name = "root";
    root->ctx = ctx;
    root->is_loop = true;
    root->start = 0;
    root->end_exclusive = 1;
  }

  ~prog() {
    isl_ctx_free(ctx);
  }

  vector<string> cache_args(op* op) {
    vector<string> args;
    for (auto cs : op->consume_locs) {
      args.push_back(cs.first);
    }
    for (auto cs : op->produce_locs) {
      args.push_back(cs.first);
    }
    return args;
  }

  set<op*> all_loops() { return root->all_loops(); }
  set<op*> all_ops() { return root->all_ops(); }

  op* add_op(const std::string& name) {
    return root->add_op(name);
  }

  loop* add_loop(const std::string& name, const int l, const int u) {
    return root->add_loop(name, l, u);
  }

  string op_iter(op* const o) {
    vector<string> act;
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    auto iters = map_find(o, ivars);
    auto vars = sep_list(iters, "[", "]", ", ");

    return o->name + vars;
  }

  isl_union_set* whole_iteration_domain() {
    map<op*, isl_set*> doms = domains();
    isl_union_set* whole_d = isl_union_set_read_from_str(ctx, "{ }");
    for (auto d : doms) {
      whole_d = unn(whole_d, to_uset(d.second));
    }
    return whole_d;
  }

  map<op*, vector<string> > iter_vars() {
    vector<string> act;
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);
    return ivars;
  }

  map<op*, isl_set*> domains() {
    vector<string> sched_coeffs{"0"};
    vector<string> sched_domains;

    map<op*, vector<string> > idoms;
    vector<string> act;
    root->populate_iteration_domains(idoms, act);

    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    map<op*, isl_set*> doms;
    for (auto op : ivars) {
      //cout << "Getting op production:" << op.first->name << endl;
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto ds = sep_list(dom, "", "", " and ");

      doms[op.first] =
        isl_set_read_from_str(ctx, string("{ " + op.first->name + vars + " : " + ds + " }").c_str());

      //cout << "Got op..." << endl;
    }
    return doms;
  }

  map<op*, isl_map*> schedules() {
    map<op*, isl_map*> scheds;
    vector<string> sched_coeffs{"0"};
    vector<string> sched_domains;

    map<op*, vector<string> > idoms;
    vector<string> act;
    root->populate_iteration_domains(idoms, act);

    map<op*, vector<string> > vecs;
    vector<string> base{"0"};
    //cout << "Calling populate sched vectors" << endl;
    root->populate_schedule_vectors(vecs, base);

    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    for (auto op : vecs) {
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto doms = sep_list(dom, "", "", " and ");

      scheds[op.first] =
        isl_map_read_from_str(ctx, string("{ " + op.first->name + vars + " -> " + sep_list(op.second, "[", "]", ", ") + " : " + doms + " }").c_str());

    }
    return scheds;
  }

  umap* unoptimized_schedule() {
    map<op*, isl_map*> prog_ops = schedules();
    umap* m = isl_union_map_read_from_str(ctx, "{ }");
    for (auto o : prog_ops) {
      m = unn(m, to_umap(o.second));
    }
    return m;
  }

  std::string optimized_loop_nest() {
    umap* opt_sched = optimized_codegen();
    auto domain = whole_iteration_domain();
    auto schedmap = its(opt_sched, domain);
    return codegen_c(schedmap);
  }

  umap* producer_map() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->produces()) {
        umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      m = unn(m, pmap);
    }
    return m;
  }

  map<string, Result> data_demands_maps() {
    map<string, Result> m;
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    for (auto op : ops) {
        if (!op->is_loop) {
            Window win;
            string result_buf = "";
            for (auto p : op->produces()) {
                result_buf= take_until(p, "[");
                cout << "Producer :" << p << endl;
            }
            assert(result_buf != "");

            auto vars = map_find(op, ivars);
            //TODO: fix this hack
            //reverse(vars);
            //vars.pop_back();
            //reverse(vars);
            string ivar_str = sep_list(vars, "[", "]", ", ");
            auto dom = map_find(op, doms);

            umap* pmap = rdmap(ctx, "{}");
            int cnt_ld_st_pair = 0;
            auto producers = op->produces();
            for (auto p : op->consumes()) {
                cout << "DEBUG:" << result_buf + ivar_str <<", " << producers[cnt_ld_st_pair] << endl;
                isl_union_map* vmap =
                  rdmap(ctx, string("{ " + producers[cnt_ld_st_pair] + " -> " + p + " }").c_str());
                  //rdmap(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str());
                pmap = unn(pmap, vmap);
                cnt_ld_st_pair ++;
                cout << "Consumer map : " << str(pmap) << endl;
            }
            win.needed = pmap;
            Result res;
            res.srcs.push_back(win);
            m[op->name] = res;
        }
    }
      return m;
  }


  map<op*, isl_map*> producer_maps() {
    map<op*, isl_map*> m;
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = rdmap(ctx, "{}");
      for (auto p : op->produces()) {
          isl_union_map* vmap =
            its(rdmap(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
      }
      m[op] = to_map(pmap);
    }
    return m;

  }
  //new method for compute producer, write map
  map<string, isl_map*> producer_maps_new() {
    map<string, isl_map*> m;
    auto ivars = iter_vars();
    auto doms = domains();

    string result_buf = "";
    auto ops = root->all_ops();

    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      for (auto p : op->produces()) {
        result_buf= take_until(p, "[");
        cout << "Producer :" << p << endl;
      }
      assert(result_buf != "");

      umap* pmap = rdmap(ctx, "{}");
      for (auto p : op->produces()) {
          isl_union_map* vmap =
            its(rdmap(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
      }
      m[result_buf] = to_map(pmap);
    }
    return m;
  }

  map<op*, pair<isl_map*, string>> consumer_maps_new() {
    map<op*, pair<isl_map*, string>> m;
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);
      string result_buf;

      //TODO: fix this hack if their are multiple consumer
      for (auto p : op->consumes()) {
        result_buf= take_until(p, "[");
        cout << "Consumers :" << p << endl;
      }
      assert(result_buf != "");

      umap* pmap = rdmap(ctx, "{}");
      for (auto p : op->consumes()) {
          isl_union_map* vmap =
            its(rdmap(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
      }
      m[op] = make_pair(to_map(pmap), result_buf);
    }
    return m;

  }

  umap* producer_map(const std::string& buf_name) {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->produces()) {
        string buf = take_until(p, "[");
        if (buf == buf_name) {
          umap* vmap =
            its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
        }
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* consumer_map(const std::string& buf_name) {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->consumes()) {
        string buf = take_until(p, "[");
        if (buf == buf_name) {
          umap* vmap =
            its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
        }
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* consumer_map() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->consumes()) {
        umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* relative_orders() {
    // Relative order of accesses for each op must be the same
    umap* rel_order = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : schedules()) {
      auto op_sched = to_umap(op.second);
      auto op_order = lex_lt(op_sched, op_sched);
      rel_order = unn(rel_order, op_order);
    }

    cout << "Rel order = " << str(rel_order) << endl;
    return rel_order;
  }

  umap* validity_deps() {
    umap* naive_sched = unoptimized_schedule();
    cout << "Naive sched: " << str(naive_sched) << endl;

    auto before = lex_lt(naive_sched, naive_sched);

    cout << "Getting iteration domain..."<< endl;

    auto domain = whole_iteration_domain();

    cout << "Got domain..." << endl;

    auto writes =
      its(producer_map(), domain);
    auto reads =
      its(consumer_map(), domain);

    cout << "Got producer / consumer maps" << endl;

    isl_union_map *validity =
      its(dot(writes, inv(reads)), before);

    //assert(false);
    return validity;
  }

  isl_schedule* optimized_schedule() {
    auto domain = whole_iteration_domain();


    auto order_deps = relative_orders();
    cout << "Getting validity deps..." << endl;
    isl_union_map *raw_deps = validity_deps();
    cout << "Got validity deps..." << endl;
    auto validity =
      unn(order_deps, raw_deps);
    isl_union_map *proximity =
      cpy(raw_deps);

    cout << "Computing schedule for: " << str(domain) << endl << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);

    cout << endl;
    cout << "Result: " << str(sched) << endl;

    return sched;
  }

  isl_union_map* optimized_codegen() {
    auto domain = whole_iteration_domain();

    isl_schedule* sched = optimized_schedule();
    cout << "Sched: " << str(sched) << endl;
    //assert(false);
    auto schedmap = its(isl_schedule_get_map(sched), domain);
    //cout << "Schedule map: " << str(schedmap) << endl;
    //assert(false);
    return schedmap;
  }

  void unoptimized_codegen() {
    umap* sched = unoptimized_schedule();
    cout << codegen_c(sched);
  }
};

prog duplicate_interface(prog& p) {
  prog pcpy;
  pcpy.name = p.name;
  pcpy.ins = p.ins;
  pcpy.outs = p.outs;
  pcpy.buffer_port_widths = p.buffer_port_widths;
  pcpy.compute_unit_file = p.compute_unit_file;
  pcpy.buffer_bounds = p.buffer_bounds;

  return pcpy;
}

void generate_op_code(map<string, UBuffer>& buffers, op* op) {
  assert(op->func != "");
  string name = op->func;

  ofstream out(name + "_wrapper.cpp");
  vector<string> decls;
  for (auto consumed : op->consume_locs) {
    decls.push_back(buffers.at(consumed.first).bundle_type_string(op->name) + "& " + consumed.first);
  }

  for (auto consumed : op->produce_locs) {
    if (contains_key(consumed.first, buffers)) {
      decls.push_back(buffers.at(consumed.first).bundle_type_string(op->name) + "& " + consumed.first);
    }
  }
  out << "void " << name << sep_list(decls, "(", ")", ", ") << "{}";
  out.close();
}

map<string, UBuffer> build_buffers(prog& prg, umap* opt_sched);

map<string, UBuffer> build_buffers(prog& prg) {
  umap* opt_sched = prg.optimized_codegen();
  return build_buffers(prg, opt_sched);
}

map<string, UBuffer> build_buffers(prog& prg, umap* opt_sched) {
  int usuffix = 0;

  map<string, UBuffer> buffers;
  auto domains = prg.domains();
  for (auto op : prg.all_ops()) {

    cout << "# of produced locations: " << op->produce_locs.size() << endl;
    for (auto produced : op->produce_locs) {
      string name = produced.first;

      if (!contains_key(name, buffers)) {
        UBuffer buf;
        buf.name = name;
        buf.ctx = prg.ctx;
        if (contains_key(name, prg.buffer_port_widths)) {
          buf.port_widths = map_find(name, prg.buffer_port_widths);
        }
        buffers[name] = buf;
      }

      UBuffer& buf = buffers.at(name);

      string pt_name = name + "_" + op->name + "_" + to_string(usuffix);
      buf.port_bundles[op->name + "_write"].push_back(pt_name);

      assert(contains_key(op, domains));

      // Map from??
      isl_map* produced_here =
        its(isl_map_read_from_str(buf.ctx, string("{ " + prg.op_iter(op) + " -> " + name + "[" + produced.second + "]" + " }").c_str()), cpy(domains.at(op)));

      buf.add_in_pt(pt_name, domains.at(op), produced_here, its(opt_sched, domains.at(op)));
      buf.add_access_pattern(pt_name, produced_here, domains.at(op));

      vector<string> inpt = buf.get_in_ports();
      cout << "current in port name: " << endl;
      for_each(inpt.begin(), inpt.end(), [](string pt_name){cout <<"\t" << pt_name;});
      cout << endl;

      usuffix++;
    }


    cout << "# of consumed locations: " << op->consume_locs.size() << endl;
    for (auto consumed : op->consume_locs) {
      string name = consumed.first;

      if (!contains_key(name, buffers)) {
        cout << "Creating ports for op: " << name << endl;
        UBuffer buf;
        buf.name = name;
        buf.ctx = prg.ctx;
        if (contains_key(name, prg.buffer_port_widths)) {
          buf.port_widths = map_find(name, prg.buffer_port_widths);
        }
        buffers[name] = buf;
      }

      UBuffer& buf = buffers.at(name);

      string pt_name = name + "_" + op->name + "_" + to_string(usuffix);
      buf.port_bundles[op->name + "_read"].push_back(pt_name);

      isl_map* consumed_here =
        its(isl_map_read_from_str(buf.ctx, string("{ " + prg.op_iter(op) + " -> " + name + "[" + consumed.second + "]" + " }").c_str()), cpy(domains.at(op)));

      assert(contains_key(op, domains));

      cout << "\tAdding output port: " << pt_name << endl;
      cout << "\t\tConsumed: " << str(consumed_here) << endl;
      buf.add_out_pt(pt_name, domains.at(op), consumed_here, its(opt_sched, domains.at(op)));
      buf.add_access_pattern(pt_name, consumed_here, domains.at(op));

      vector<string> inpt = buf.get_out_ports();
      cout << "current out port name: " << endl;
      for_each(inpt.begin(), inpt.end(), [](string pt_name){cout <<"\t" << pt_name;});
      cout << endl;

      usuffix++;
    }

  }

  return buffers;
}

void generate_app_code(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg, umap* schedmap);

void generate_app_code(map<string, UBuffer>& buffers, prog& prg, umap* sched) {
  CodegenOptions options;
  options.internal = true;

  generate_app_code(options, buffers, prg, sched);
}

void generate_app_code(map<string, UBuffer>& buffers, prog& prg) {
  auto schedmap = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());
  generate_app_code(buffers, prg, schedmap);
}

vector<string> get_args(const map<string, UBuffer>& buffers, prog& prg) {
  vector<string> args;
  for (auto& b : prg.ins) {
    cout << "Trying to find " << b << " in buffers" << endl;
    assert(contains_key(b, buffers));
    auto& buf = buffers.at(b);

    bool found_bundle = false;
    for (auto bndl : buf.port_bundles) {
      cout << "Trying bundle: " << bndl.first << endl;
      if (is_prefix(b, bndl.first)) {
        string bname = bndl.first;
        vector<string> ports = bndl.second;
        args.push_back("HWStream<" + buf.bundle_type_string(bname) + " >& /* get_args num ports = " + to_string(ports.size()) + " */" + buf.name);
        found_bundle = true;
        break;
      }
    }
    if (!found_bundle) {
      cout << "No bundle for input: " << b << endl;
      cout << "No bundle for input: " << b << endl;
      auto bndl = pick(buf.port_bundles);
      string bname = bndl.first;
      vector<string> ports =
        map_find(bname, buf.port_bundles);
      args.push_back("HWStream<" + buf.bundle_type_string(bname) + " >& /* no bundle get_args num ports = " + to_string(ports.size()) + " */" + buf.name);
    }
  }
  for (auto& b : prg.outs) {

    if (!contains_key(b, buffers)) {
      cout << "No buffer for: " << b << endl;
    }

    assert(contains_key(b, buffers));
    auto& buf = buffers.at(b);

    bool found_bundle = false;
    for (auto bndl : buf.port_bundles) {
      cout << "Trying bundle: " << bndl.first << endl;
      if (is_prefix(b, bndl.first)) {
        string bname = bndl.first;
        vector<string> ports = bndl.second;
        args.push_back("HWStream<" + buf.bundle_type_string(bname) + " >& /* get_args num ports = " + to_string(ports.size()) + " */" + buf.name);
        found_bundle = true;
        break;
      }
    }
    if (!found_bundle) {
      // TODO: Should really be an error
      cout << "No bundle for input: " << b << endl;
      auto bndl = pick(buf.port_bundles);
      string bname = bndl.first;
      vector<string> ports =
        map_find(bname, buf.port_bundles);
      args.push_back("HWStream<" + buf.bundle_type_string(bname) + " >& /* no bundle get_args num ports = " + to_string(ports.size()) + " */" + buf.name);
    }

  }
  return args;
}

void generate_soda_tb(map<string, UBuffer>& buffers, prog& prg) {

  ofstream out("tb_soda_" + prg.name + ".cpp");
  out << "#include \"soda_" + prg.name + ".h\"" << endl;
  out << "#include <cstdlib>" << endl;
  out << "#include <cstring>" << endl;
  out << "#include \"hw_classes.h\"" << endl;
  out << "#include <iostream>" << endl;
  out << "#include \"ap_int.h\"" << endl;
  out << "#include \"soda_" + prg.name + "_kernel.h\"" << endl;
  out << "#include <fstream>" << endl << endl;

  out << "using namespace std;" << endl << endl;

  out <<"int main() {" << endl;
  cout << "starting" << endl;

  //out const int ncols = 1024;
  //const int nrows = 1024;

  out << tab(1) << "const int img_size = 1920*1080;" << endl;
  out << tab(1) << "ap_uint<32>* buf =" << endl;
  out << tab(2) << "(ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);" << endl;

  out << tab(1) << "for (int i = 0; i < img_size; i++) {" << endl;
  out << tab(2) << "buf[i] = i;" << endl;
  out << tab(1) << "}" << endl;

  out << tab(1) << "ap_uint<32>* blur_y =" << endl;
  out << tab(2) << "(ap_uint<32>*)malloc(sizeof(ap_uint<32>)*img_size);" << endl;

  out << tab(1) << prg.name << "_kernel(blur_y, buf, img_size);" << endl;

  out << tab(1) << "ofstream soda_regression_out(\"regression_result_soda_" << prg.name << ".txt\");" << endl;
  out << tab(1) << "for (int i = 0; i < img_size; i++) {" << endl;
  out << tab(2) << "soda_regression_out<< (int) blur_y[i] << endl;" << endl;
  out << tab(1) << "}" << endl;

  out << tab(1) << "soda_regression_out.close();" << endl;
  out << tab(1) << "free(buf);" << endl;
  out << tab(1) << "free(blur_y);" << endl;

  out <<"}" << endl;
  out.close();
}

void generate_app_code_header(const map<string, UBuffer>& buffers, prog& prg) {
  string arg_buffers = sep_list(get_args(buffers, prg), "(", ")", ", ");
  ofstream of(prg.name + ".h");
  of << "#pragma once\n\n" << endl;
  of << "#include \"hw_classes.h\"" << endl << endl;
  of << "void " << prg.name << arg_buffers << ";" << endl;
  of.close();
}


vector<string> buffer_arg_names(const map<string, UBuffer>& buffers, op* op, prog& prg) {
  set<string> done;
  vector<string> buf_srcs;

  for (auto p : op->consume_locs) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      buf_srcs.push_back(buf_name);
      done.insert(buf_name);
    }
  }
  for (auto p : op->produce_locs) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      buf_srcs.push_back(buf_name);
      done.insert(buf_name);
    }
  }
  return buf_srcs;
}

vector<string> buffer_args(const map<string, UBuffer>& buffers, op* op, prog& prg) {
  set<string> done;
  vector<string> buf_srcs;
  for (auto p : op->consume_locs) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      if (prg.is_boundary(buf_name)) {
        auto& buf = buffers.at(buf_name);
        pair<string, vector<string> > bundle =
          pick(buf.port_bundles);
        buf_srcs.push_back("HWStream<" + buf.bundle_type_string(bundle.first) + " >& /* buffer_args num ports = " + to_string(bundle.second.size()) + " */" + buf.name);

      } else {
        const UBuffer& b = buffers.at(buf_name);
        buf_srcs.push_back(b.name + "_cache& " + b.name);
      }
      done.insert(buf_name);
    }
  }
  for (auto p : op->produce_locs) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      if (prg.is_boundary(buf_name)) {
        auto& buf = buffers.at(buf_name);
        pair<string, vector<string> > bundle =
          pick(buf.port_bundles);
        buf_srcs.push_back("HWStream<" + buf.bundle_type_string(bundle.first) + " >& /* buffer_args num ports = " + to_string(bundle.second.size()) + " */" + buf.name);
      } else {
        const UBuffer& b = buffers.at(buf_name);
        buf_srcs.push_back(b.name + "_cache& " + b.name);
      }
      done.insert(buf_name);
    }
  }
  return buf_srcs;
}

compute_kernel generate_compute_op(ostream& conv_out, prog& prg, op* op, map<string, UBuffer>& buffers,
    map<string, isl_set*>& domain_map) {

  compute_kernel kernel;
  kernel.name = op->name;
  kernel.functional_unit = op->func;

  vector<string> buf_srcs;
  concat(buf_srcs, buffer_args(buffers, op, prg));

  auto s = get_space(domain_map.at(op->name));
  vector<string> dim_args;
  for (auto a : space_var_args(s)) {
    dim_args.push_back(a);
    kernel.iteration_variables.push_back(a);
  }
  for (auto a : space_var_decls(s)) {
    buf_srcs.push_back(a);
  }

  conv_out << "inline void " << op->name << sep_list(buf_srcs, "(", ")", ", ") << " {" << endl;
  vector<pair<string, string> > in_buffers;
  set<string> distinct;
  for (auto con : op->consume_locs) {
    if (!elem(con.first, distinct)) {
      in_buffers.push_back(con);
      distinct.insert(con.first);
    }
  }

  string res;
  vector<string> buf_args;

  for (auto ib : in_buffers) {
    auto in_buffer = ib.first;
    conv_out << "\t// Consume: " << in_buffer << endl;
    string value_name = op->consumed_value_name(ib);
    conv_out << "\tauto " << value_name << " = ";

    string bundle_name = op->name + "_read";
    kernel.input_buffers.push_back({in_buffer, bundle_name});

    if (prg.is_boundary(in_buffer)) {
      conv_out << in_buffer << ".read();" << endl;
    } else {
      vector<string> source_delays{in_buffer};
      cout << "op = " << op->name << endl;
      conv_out << in_buffer << "_" << op->name << "_read_bundle_read(" << comma_list(source_delays) << "/* source_delay */, " << comma_list(dim_args) << ");" << endl;

      open_debug_scope(conv_out);
      conv_out << tab(1) << "*global_debug_handle << \"" << op->name << "_" << in_buffer << ",\" << ";
      for (auto v : kernel.iteration_variables) {
        conv_out << v << "<< \",\" << ";
      }
      conv_out << " " << value_name << " << endl;" << endl;
      close_debug_scope(conv_out);

    }
    buf_args.push_back(value_name);
    res = value_name;
  }

  if (op->func != "") {
    conv_out << "\tauto compute_result = " << op->func << "(" << comma_list(buf_args) << ");" << endl;
    res = "compute_result";
  }

  set<string> out_buffers;
  for (auto con : op->produce_locs) {
    out_buffers.insert(con.first);
  }
  assert(out_buffers.size() == 1);
  string out_buffer = pick(out_buffers);

  conv_out << "\t// Produce: " << out_buffer << endl;

  string bundle_name = op->name + "_write";
  kernel.output_buffer = {out_buffer, bundle_name};

  if (prg.is_boundary(out_buffer)) {
    conv_out << "\t" << out_buffer << ".write(" << res << ");" << endl;
  } else {
    assert(contains_key(out_buffer, buffers));

    auto& buf = buffers.at(out_buffer);
    vector<string> arg_names{res, buf.name};
    concat(arg_names, dim_args);
    conv_out << "\t" << out_buffer << "_" << op->name << "_write_bundle_write(" <<
      comma_list(arg_names) << ");" << endl;
  }

  open_debug_scope(conv_out);
  conv_out << tab(1) << "*global_debug_handle << \"" << op->name << ",\" << ";
  for (auto v : kernel.iteration_variables) {
    conv_out << v << "<< \",\" << ";
  }
  conv_out << " " << res << " << endl;" << endl;
  close_debug_scope(conv_out);
  conv_out << "}" << endl << endl;

  return kernel;
}

module_type* generate_rtl_buffer(CodegenOptions& options,
    minihls::context& minigen,
    UBuffer& buffer) {

  minihls::block* blk = minigen.add_block(buffer.name);
  for (auto bank_struct : buffer.get_banks()) {
    auto bankprog = minigen.add_block(bank_struct.name);

    map<string, minihls::module_instance*> partitions;
    map<string, minihls::instruction_instance*> read_partitions;
    for (auto part : bank_struct.get_partitions()) {
      auto part_tp = sr_buffer(*bankprog,
          32,
          part.second);
      partitions[part.first] =
        bankprog->add_module_instance(part.first, part_tp);

      //read_partitions[part.first] =
        //bankprog->call(part.first, "read_instr");
    }

    auto bankmod = minigen.compile(bankprog);
    blk->add_module_instance(bank_struct.name, bankmod);
  }

  for (auto osel : buffer.selectors) {
    selector sel = osel.second;
    vector<minihls::port> ports{{"clk", 1, true}, {"rst", 1, true}};
    for (auto pt : sel.vars) {
      ports.push_back(minihls::inpt(pt, 32));
    }
    ports.push_back(minihls::outpt("out", 32));

    ostringstream body;
    for (int i = 0; i < sel.bank_conditions.size(); i++) {
      body << tab(1) << "always @(*) begin" << endl;
      body << tab(2) << "if (" << sel.bank_conditions.at(i) << ") begin" << endl;
      body << tab(3) << "out = " << sel.inner_bank_offsets.at(i) << ";" << endl;
      body << tab(2) << "end" << endl;
      body << tab(1) << "end" << endl;
    }
    auto ubufmod =
      blk->add_module_type(sel.name, ports, body.str());
    blk->add_module_instance("selector_" + sel.name,
        ubufmod);
  }


  for (auto out_bundle : buffer.get_in_bundles()) {
    // Here I need to get all banks which receive data from this bundle
    // and write to them
    in_wire_read(*blk, out_bundle US "wen", 1);
    in_wire_read(*blk, out_bundle US "wdata", buffer.port_bundle_width(out_bundle));
  }
  
  for (auto out_bundle : buffer.get_out_bundles()) {
    auto dummy = in_wire_read(*blk, out_bundle US "dummy", buffer.port_bundle_width(out_bundle));
    // Here I need to get all sources of this bundle and concatenate
    // them together
    out_wire_write(*blk, out_bundle US "rdata", buffer.port_bundle_width(out_bundle), dummy);
  }

  auto mod = minigen.compile(blk);

  for (auto out_bundle : buffer.get_in_bundles()) {
    auto wr_bundle =
      blk->add_instruction_type(buffer.name US out_bundle US "write");
    auto wr_bind =
      blk->add_instruction_binding(buffer.name US out_bundle US "write_binding",
          wr_bundle,
          mod,
          out_bundle US "wdata",
          {});
    wr_bind->latency = 1;
    wr_bind->en = out_bundle US "wen";
  }

  for (auto bundle : buffer.get_out_bundles()) {
    auto rd_bundle =
      blk->add_instruction_type(buffer.name US bundle US "read");
    auto rd_bind =
      blk->add_instruction_binding(buffer.name US bundle US "read_binding",
          rd_bundle,
          mod,
          bundle US "rdata",
          {});
    rd_bind->latency = 1;
  }

  return mod;
}

vector<compute_kernel> writers(vector<compute_kernel>& kernels, const std::string& in_buf) {
  vector<compute_kernel> ws;
  for (auto k : kernels) {
    if (k.output_buffer.first == in_buf) {
      ws.push_back(k);
    }
  }
  return ws;
}

void generate_verilog_code(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map,
    vector<compute_kernel>& kernels) {

  //vector<compute_kernel> sorted_kernels;
  //set<string> done;
  //while (sorted_kernels.size() < kernels.size()) {

    //for (auto k : kernels) {
      //if (!elem(k.name, done)) {
        //bool all_args_scheduled = true;
        //for (auto in_buf : k.input_buffers) {
          //for (auto writer : writers(kernels, in_buf.first)) {
            //if (!elem(writer.name, done)) {
              //all_args_scheduled = false;
              //break;
            //}
          //}
        //}
        //if (all_args_scheduled) {
          //sorted_kernels.push_back(k);
          //done.insert(k.name);
        //}
      //}
    //}

    //cout << "sorted kernels size = " << sorted_kernels.size() << endl;
  //}

  //minihls::context minigen;

  //map<string, minihls::module_type*> buffer_mods;
  //for (auto& b : buffers) {
    //buffer_mods[b.first] =
      //generate_rtl_buffer(options, minigen, b.second);
  //}

  //map<string, minihls::module_type*> operation_mods;
  //map<string, minihls::instruction_type*> kernel_instrs;
  //for (auto op : sorted_kernels) {
    //minihls::block* blk = minigen.add_block(op.name);
    //auto res = wire_read(*blk, "src", 32);
    //out_wire_write(*blk, "out", 32, res);

    //operation_mods[op.name] = minigen.compile(blk);
    //auto blkmod = operation_mods[op.name];
    //auto apply_instr =
      //blk->add_instruction_type(op.name US "apply");
    //kernel_instrs[op.name] = apply_instr;
    //auto apply_bind =
      //blk->add_instruction_binding(op.name US "apply_binding",
          //apply_instr,
          //blkmod,
          //"out",
          //{});
    //apply_bind->latency = 1;
  //}

  //auto main_blk = minigen.add_block(prg.name);
  //for (auto b : buffer_mods) {
    //if (prg.is_boundary(b.first)) {
      //main_blk->add_external_module_instance("buf_" + b.second->get_name(), b.second);
    //} else {
      //main_blk->add_module_instance("buf_" + b.second->get_name(), b.second);
    //}
  //}

  //vector<minihls::instruction_instance*> earlier;
  //map<string, set<minihls::instruction_instance*> > earlier_writes;
  //map<pair<string, string>, minihls::instruction_instance*> reads;
  //map<string, set<minihls::instruction_instance*> > reads_from_buffers;
  //for (auto instr : sorted_kernels) {
    //cout << "Kernel = " << instr.name << endl;
    //auto instr_tp = map_find(instr.name, kernel_instrs);

    //for (auto inbuf : instr.input_buffers) {
      //reads[inbuf] =
        //main_blk->call("buf_" + inbuf.first, inbuf.second);
      //reads_from_buffers[inbuf.first].insert(reads.at(inbuf));
    //}

    //auto instr_inst = main_blk->add_instruction_instance(instr.name, instr_tp);
    ////for (auto rd : reads) {
      ////main_blk->add_data_dependence(rd.second, instr_inst, 0);
    ////}

    ////for (auto earlier_inst : earlier) {
      ////main_blk->add_data_dependence(earlier_inst, instr_inst, 0);
    ////}

    //// Store the output to the result buffer
    //string out_buf = "buf_" + instr.output_buffer.first;
    //string out_bundle = instr.output_buffer.second;

    //auto write_inst = main_blk->call(out_buf, out_bundle);
    //earlier_writes[instr.output_buffer.first].insert(write_inst);
    ////main_blk->add_data_dependence(instr_inst, write_inst, 0);

    //earlier.push_back(instr_inst);
    //earlier.push_back(write_inst);
  //}

  //auto instrs = main_blk->instruction_list();
  //for (int i = 0; i < instrs.size() - 1; i++) {
    //auto current = instrs[i];
    //auto next = instrs[i + 1];
    //main_blk->add_data_dependence(current, next, 0);
  //}

  ////for (auto rds : reads_from_buffers) {
    ////for (auto rd : rds.second) {
      ////for (auto wr : earlier_writes[rds.first]) {
        ////main_blk->add_data_dependence(wr, rd, 0);
      ////}
    ////}
  ////}

  //compile(*main_blk);
  ////assert(false);
}

void generate_app_code(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map) {

  ofstream conv_out(prg.name + ".cpp");

  open_debug_scope(conv_out);
  conv_out << "#include <fstream>" << endl;
  conv_out << "using namespace std;" << endl << endl;
  conv_out << tab(1) << "// Debug utility" << endl;
  conv_out << tab(1) << "ofstream* global_debug_handle;" << endl << endl;
  close_debug_scope(conv_out);

  conv_out << "#include \"" << prg.compute_unit_file << "\"" << endl << endl;
  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      generate_hls_code(options, conv_out, b.second);
    }

  }

  conv_out << endl << endl;
  conv_out << "// Operation logic" << endl;
  vector<compute_kernel> kernels;
  for (auto op : prg.all_ops()) {
    kernels.push_back(generate_compute_op(conv_out, prg, op, buffers, domain_map));
  }

  conv_out << "// Driver function" << endl;
  string arg_buffers = sep_list(get_args(buffers, prg), "(", ")", ", ");
  conv_out << "void " << prg.name << arg_buffers << " {" << endl << endl;

  open_debug_scope(conv_out);
  conv_out << tab(1) << "ofstream debug_file(\"" << prg.name + "_debug.csv\");" << endl;
  conv_out << tab(1) << "global_debug_handle = &debug_file;" << endl;
  close_debug_scope(conv_out);

  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      conv_out << tab(1) << b.first << "_cache " << b.second.name << ";" << endl;
      ignore_inter_deps(conv_out, b.second.name);
    }
  }


  string code_string = options.code_string;
  if (!options.use_custom_code_string) {
    code_string = codegen_c(schedmap);
  }

  string original_isl_code_string = code_string;

  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");

  for (auto op : prg.all_ops()) {
    regex re("\n\t\\s+" + op->name + "\\((.*)\\);");
    string args_list = sep_list(buffer_arg_names(buffers, op, prg), "", "", ", ");
    code_string = regex_replace(code_string, re, "\n\t" + op->name + "(" + args_list + ", $1);");
  }

  //conv_out << "/* ISL CODE STRING" << endl;
  //conv_out << original_isl_code_string << endl;
  //conv_out << "*/" << endl;
  //conv_out << "/* CUSTOM CODE STRING" << endl;
  //conv_out << options.code_string << endl;
  //conv_out << "*/" << endl;

  conv_out << code_string << endl;

  open_debug_scope(conv_out);
  conv_out << tab(1) << "debug_file.close();" << endl;
  close_debug_scope(conv_out);

  conv_out << "}" << endl;

  generate_app_code_header(buffers, prg);
  generate_soda_tb(buffers, prg);
  generate_verilog_code(options, buffers, prg, schedmap, domain_map, kernels);
}

void generate_app_code(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg, umap* schedmap) {
  auto domains = prg.domains();
  map<string, isl_set*> domain_map;
  for (auto d : domains) {
    domain_map[d.first->name] = d.second;
  }

  generate_app_code(options, buffers, prg, schedmap, domain_map);
}

void generate_optimized_code(prog& prg) {
  auto sched = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());

  cout << "Optimized schedule..." << endl;
  cout << tab(1) << ": " << str(sched) << endl << endl;
  cout << codegen_c(sched) << endl;
  //assert(false);

  auto buffers = build_buffers(prg, sched);

  generate_app_code(buffers, prg, sched);
  generate_vivado_tcl(prg.name);
}

void generate_unoptimized_code(prog& prg) {
  string old_name = prg.name;

  prg.name = "unoptimized_" + prg.name;

  cout << "Unoptimized schedule..." << endl;
  auto sched = prg.unoptimized_schedule();
  cout << tab(1) << ": " << str(sched) << endl;

  cout << codegen_c(prg.unoptimized_schedule());

  //assert(false);
  auto buffers = build_buffers(prg, prg.unoptimized_schedule());

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;

  generate_app_code(options, buffers, prg, sched);

  prg.name = old_name;
}


void conv_1d_bc_test() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_bounds["out"] = {32 - 2, 32 - 2};

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("write");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10);
  auto read0 = c->add_op("read0");
  read0->add_load("M", "min(c, 9)");
  read0->add_load("M", "min(c + 1, 9)");
  read0->add_load("M", "min(c + 2, 9)");
  read0->add_store("T", "c");

  auto compute = c->add_op("compute_out");
  compute->add_function("accumulate_3");
  compute->add_load("T", "c");
  compute->add_store("out", "c");

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  cout << "Program with optimized schedule..." << endl;
  umap* opt_sched = prg.optimized_codegen();

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

prog conv_1d_bc() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10);
  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  compute->add_load("M", "min(c, 9)");
  compute->add_load("M", "min(c + 1, 9)");
  compute->add_load("M", "min(c + 2, 9)");
  compute->add_store("out", "c");
  return prg;
}

prog conv_1d() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);

  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  //compute->add_load("T", "c");
  compute->add_load("M", "c");
  compute->add_load("M", "c + 1");
  compute->add_load("M", "c + 2");
  compute->add_store("out", "c");
  return prg;
}

void aha_talk_print_info(prog& prg);

struct tb_config {
    vector<int> indices;
    int range_inner;
    int range_outer;
    int stride;

    string csv_config_str(int tb_cnt) {
        ostringstream out;
        int pos = 0;
        if (indices.size()) {
            for (int index : indices) {
                out << "tba_" << tb_cnt << "_tb_0_indices_"  << pos << "," << index<< endl;
                pos ++;
            }
            out << "tba_" << tb_cnt << "_tb_0_range_inner," << range_inner << endl;
            out << "tba_" << tb_cnt << "_tb_0_range_outer," << range_outer<< endl;
            out << "tba_" << tb_cnt << "_tb_0_stride," << stride<< endl;
            out << "tba_" << tb_cnt << "_tb_0_dimensionality," << 2<< endl;
        }
        else {
            out << "tba_" << tb_cnt << "_tb_0_range_outer," << range_outer<< endl;
            out << "tba_" << tb_cnt << "_tb_0_stride," << stride << endl;
            out << "tba_" << tb_cnt << "_tb_0_dimensionality," << 1<< endl;
        }
        return out.str();
    }
};

struct sram_config {
    vector<int> range;
    vector<int> stride;
    int dimensionality;
    int start_addr;
    string IO;

    void initial_sequential_access(int num_itr) {
        range.push_back(num_itr);
        dimensionality = 1;
        stride.push_back(1);
        start_addr = 0;
    }

    void configIO(string io_config) {
        IO = io_config;
    }

    string csv_config_str(int port_cnt) {
        ostringstream out;
        int pos = 0;

        out << IO << "_addr_ctrl_address_gen_" << port_cnt << "_dimensionality," << dimensionality << endl;
        out << IO << "_addr_ctrl_address_gen_" << port_cnt << "_starting_addr," << start_addr << endl;
        for (int loop_dim = 0; loop_dim < dimensionality; loop_dim ++) {
            out << IO << "_addr_ctrl_address_gen_" << port_cnt << "_ranges_" << loop_dim << "," << range[loop_dim] << endl;
            out << IO << "_addr_ctrl_address_gen_" << port_cnt << "_strides_" << loop_dim << "," << stride[loop_dim] << endl;
        }
        return out.str();
    }
};

struct memtile_config {
    int agg_align_0_line_length;

   int agg_in_0_in_period;
   int agg_in_0_in_sched_0;
   int agg_in_0_out_period;
   int agg_in_0_out_sched_0;

   int bank_num;
   int bank_capacity;

   vector<tb_config> tb_config_vec;
   vector<sram_config> sram_config_output;
   vector<sram_config> sram_config_input;
   vector<int> tb_sync_group;

   memtile_config():
       agg_align_0_line_length(64),
       agg_in_0_in_period(1),
       agg_in_0_out_period(1),
       agg_in_0_in_sched_0(0),
       agg_in_0_out_sched_0(0),
       bank_num(1),
       bank_capacity(512){}

    void extract_config(map<string, UBuffer> &buffers) {

        for (auto buffer : buffers) {
            if (buffer.first == "sram") {
                auto buf = buffer.second;

                //TODO: put this into a function
                //generate the input port configuration, currently assume all write is consecutive
                cout << "\tConfig input addr stream" << endl;
                string inpt = pick(buf.get_in_ports());
                int num_reads = int_upper_bound(card((domain(buf.access_map.at(inpt)))));
                cout <<"total data input: " << num_reads << endl;
                sram_config tmp;
                tmp.initial_sequential_access(num_reads);
                tmp.configIO("input");
                sram_config_input.push_back(tmp);

                //generate the output configuration register
                cout << "\tConfig output addr stream" << endl;

                //the backend will suto schedule the parallel access
                string outpt_sram = pick(buf.get_out_ports());
                auto acc_pattern = buf.access_pattern.at(outpt_sram);
                int output_port_size = acc_pattern.in_range.back();
                sram_config tmp_out;
                for(int i = 0; i < output_port_size; i ++){
                    //FIXME: this dimension drop is specific for this case need a more general solution
                    //drop the last dimension, since that will be handle by the handshake
                    tmp_out.range = acc_pattern.in_range;
                    if (acc_pattern.var_dim > 2) {
                        tmp_out.dimensionality = acc_pattern.var_dim - 1 - 1;
                        tmp_out.range.pop_back();
                    }
                    else
                        tmp_out.dimensionality = acc_pattern.var_dim - 1;
                    std::reverse(tmp_out.range.begin(),tmp_out.range.end());

                    vector<int> stride;
                    vector<int> dim_ref;
                    for (int i = 0; i < tmp_out.dimensionality; i ++)
                        dim_ref.push_back(i);

                    std::reverse(dim_ref.begin(), dim_ref.end());
                    acc_pattern.get_flatten_stride(stride, dim_ref);
                    tmp_out.start_addr = stride.back() * i;
                    tmp_out.stride = stride;
                    if (tmp_out.stride.size() > 1)
                        tmp_out.stride.pop_back();
                    std::reverse(tmp_out.stride.begin(),tmp_out.stride.end());

                    tmp_out.IO = string("output");
                    sram_config_output.push_back(tmp_out);
                }
            }
            if (buffer.first == "tb") {
                cout << "\tConfig TB address stream" << endl;
                auto buf = buffer.second;
                auto output_pt_map = buf.get_out_ports();
                auto fetch_width = buf.get_in_ports().size();
                for (string outpt : output_pt_map) {
                    tb_config tmp;
                    auto acc_pattern = buf.access_pattern.at(outpt);
                    vector<int> dim_ref;
                    for (int i = 0; i < acc_pattern.addr_dim; i ++)
                        dim_ref.push_back(i);
                    std::reverse(dim_ref.begin(), dim_ref.end());
                    acc_pattern.init_flatten_stride(dim_ref);
                    tb_sync_group.push_back(1);
                    if (acc_pattern.is_1D_contigous_access()) {
                        tmp.range_outer = acc_pattern.in_range.back() / fetch_width;
                        tmp.stride = 1;
                    }
                    else if (acc_pattern.merge_lastdim()) {
                        tmp.range_outer = acc_pattern.in_range.back();
                        tmp.stride = acc_pattern.stride.back();
                    }
                    else {
                        cout << "NOT IMPLEMENTED" << endl;
                        assert(false);
                    }
                    tb_config_vec.push_back(tmp);
                }
            }

            //cout << buffer.first << "_______________________________ \n " << buffer.second<< endl;
        }
    }
   void emit_config_file_csv(string fname) {
       ofstream out(fname + ".csv");
       out << "agg_align_0_line_length," << agg_align_0_line_length << endl;
       out << "agg_in_0_in_period," << agg_in_0_in_period << endl;
       out << "agg_in_0_in_sched_0," << agg_in_0_in_sched_0 << endl;
       out << "agg_in_0_out_period," << agg_in_0_in_period << endl;
       out << "agg_in_0_out_sched_0," << agg_in_0_out_sched_0 << endl;

       int i = 0;
       for (auto sram_in: sram_config_input) {
           out << sram_in.csv_config_str(i);
           i++;
       }

       i = 0;
       for (auto sram_out: sram_config_output) {
           out << sram_out.csv_config_str(i);
           i++;
       }

       i = 0;
       for (auto tb_config : tb_config_vec) {
           out << tb_config.csv_config_str(i);
           i ++;
       }
       for (int bank = 0; bank < bank_num; bank ++) {
           out << "input_addr_ctrl_offsets_cfg_0_" << bank << "," <<bank*bank_capacity << endl;
       }
       for (size_t grp = 0; grp < tb_sync_group.size(); grp ++) {
           out << "sync_grp_sync_group_" << grp << "," << tb_sync_group[grp] << endl;
       }

       out.close();
   }
};

void agg_test() {

  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "agg";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["agg"] = 32;
  prg.buffer_port_widths["tb"] = 32;
  prg.buffer_port_widths["sram"] = 32;

  auto p = prg.add_loop("p", 0, 12);
  auto write = p->add_op("get_input");
  write->add_load("in", "p");
  write->add_store("agg", "p");

  auto c = prg.add_loop("c", 0, 3);

  auto compute = c->add_op("compute_output");
  compute->add_function("accumulate_3");
  //compute->add_load("T", "c");
  compute->add_load("agg", "4*c");
  compute->add_load("agg", "4*c+1");
  compute->add_load("agg", "4*c+2");
  compute->add_load("agg", "4*c+3");
  compute->add_store("sram", "4*c");
  compute->add_store("sram", "4*c+1");
  compute->add_store("sram", "4*c+2");
  compute->add_store("sram", "4*c+3");
  {
  auto c = prg.add_loop("d", 0, 3);
  auto compute = c->add_op("sram2tb");
  compute->add_function("accumulate_3");
  //compute->add_load("T", "c");
  compute->add_load("sram", "4*d");
  compute->add_load("sram", "4*d+1");
  compute->add_load("sram", "4*d+2");
  compute->add_load("sram", "4*d+3");
  compute->add_store("tb", "4*d");
  compute->add_store("tb", "4*d+1");
  compute->add_store("tb", "4*d+2");
  compute->add_store("tb", "4*d+3");
  }
  {
  auto p = prg.add_loop("e", 0, 12);
  auto write = p->add_op("tb2out");
  write->add_load("tb", "e");
  write->add_store("out", "e");
  }
  auto sched = prg.unoptimized_schedule();
  cout << codegen_c(sched) << endl;

  auto sched_opt = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());
 // auto sched_opt = isl_schedule_get_map(prg.optimized_schedule());
  cout << "Sched map: " << str(sched_opt) << endl;
  cout << codegen_c(sched_opt) << endl;
  //assert(false);
  //aha_talk_print_info(prg);
  //hardcode some configuration registers
  memtile_config memtile;
  auto buffers = build_buffers(prg, sched_opt);
  memtile.extract_config(buffers);
  memtile.emit_config_file_csv("lake_memtile_config");
  //assert(false);
}

std::vector<std::string> run_regression_tb(const std::string& name) {
  int res = system(string("g++ -std=c++11 regression_tb_" + name + ".cpp " + name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  ifstream infile("regression_result_" + name + ".txt");
  vector<string> lines;
  std::string line;
  while (std::getline(infile, line))
  {
    lines.push_back(line);
  }
  return lines;
}

std::vector<std::string> run_regression_tb(prog& prg) {
  return run_regression_tb(prg.name);
}


void run_tb(prog& prg) {
  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

void generate_regression_testbench(prog& prg, map<string, UBuffer>& buffers) {
  ofstream rgtb("regression_tb_" + prg.name + ".cpp");
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"" << prg.name << ".h\"" << endl << endl;

  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << ".txt\");" << endl;

  vector<string> unoptimized_streams;
  vector<string> optimized_streams;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);
    auto bundle = pick(buf.get_out_bundles());

    rgtb << tab(1) << "HWStream<" << buf.bundle_type_string(bundle) << " > " << bundle << ";" << endl;
    optimized_streams.push_back(bundle);
  }
  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());

    rgtb << tab(1) << "HWStream<" << buf.bundle_type_string(bundle) << " > " << bundle << ";" << endl;
    optimized_streams.push_back(bundle);
  }

  rgtb << endl << endl;

  rgtb << tab(1) << "// Loading input data" << endl;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);
    auto bundle = pick(buf.get_out_bundles());
    int port_width = buf.port_width(in);
    int bundle_width = buf.port_bundle_width(bundle);

    auto cmap = prg.consumer_map(in);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pushes = int_upper_bound(range_card);

    vector<string> pts = buf.port_bundles.at(bundle);
    int num_ports = pts.size();

    rgtb << tab(1) << "// cmap    : " << str(cmap) << endl;
    rgtb << tab(1) << "// read map: " << str(read_map) << endl;
    rgtb << tab(1) << "// rng     : " << str(rng) << endl;

    rgtb << tab(1) << "for (int i = 0; i < " << num_pushes << "; i++) {" << endl;
    rgtb << tab(2) << buf.bundle_type_string(bundle) << " in_val;" << endl;
    for (int p = 0; p < num_ports; p++) {
      rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ">(in_val, " << num_ports << "*i + " << p << ");" << endl;
    }
    rgtb << tab(2) << bundle << ".write(in_val);" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }

  rgtb << tab(1) << prg.name << "(" << comma_list(optimized_streams) << ");" << endl << endl;

  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());

    auto cmap = prg.producer_map(out);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pops = int_upper_bound(range_card);
    int port_width = buf.port_width(out);

    vector<string> pts = buf.port_bundles.at(bundle);
    int num_ports = pts.size();

    rgtb << tab(1) << "for (int i = 0; i < " << (num_pops) << "; i++) {" << endl;
    rgtb << tab(2) << buf.bundle_type_string(bundle) << " actual = " << bundle << ".read();" << endl;
    for (int p = 0; p < num_ports; p++) {
      rgtb << tab(2) << "auto actual_lane_" << p
        << " = actual.extract<" << p << "*" << port_width << ", "
        << (p + 1)*port_width - 1 << ">();" << endl;

      //rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ">(in_val, " << num_ports << "*i + " << p << ");" << endl;
      rgtb << tab(2) << "fout << (int) actual_lane_" << p << " << endl;" << endl;
    }
    //rgtb << tab(2) << bundle << ".write(in_val);" << endl;

    //rgtb << tab(2) << "for (int p = 0; p < " << num_ports << "; p++) {" << endl;
    //rgtb << tab(3) << "int actual = " << bundle << ".read();" << endl;
    //rgtb << tab(3) << "fout << actual << endl;" << endl;
    //rgtb << tab(2) << "}" << endl << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }

  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}

void generate_regression_testbench(prog& prg) {
  ofstream rgtb("regression_tb_" + prg.name + ".cpp");
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"" << prg.name << ".h\"" << endl << endl;

  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << ".txt\");" << endl;

  vector<string> unoptimized_streams;
  vector<string> optimized_streams;
  for (auto in : prg.ins) {
    rgtb << tab(1) << "HWStream<" << prg.buffer_element_type_string(in) << " > " << in << ";" << endl;
    optimized_streams.push_back(in);
  }
  for (auto out : prg.outs) {
    rgtb << tab(1) << "HWStream<" << prg.buffer_element_type_string(out) << " > " << out << ";" << endl;
    optimized_streams.push_back(out);
  }

  rgtb << endl << endl;

  rgtb << tab(1) << "// Loading input data" << endl;
  for (auto in : prg.ins) {
    auto cmap = prg.consumer_map(in);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pushes = int_upper_bound(range_card);

    rgtb << tab(1) << "// cmap    : " << str(cmap) << endl;
    rgtb << tab(1) << "// read map: " << str(read_map) << endl;
    rgtb << tab(1) << "// rng     : " << str(rng) << endl;
    rgtb << tab(1) << "for (int i = 0; i < " << num_pushes << "; i++) {" << endl;
    rgtb << tab(2) << in << ".write(i);" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }
  rgtb << tab(1) << prg.name << "(" << comma_list(optimized_streams) << ");" << endl;

  for (auto out : prg.outs) {

    auto cmap = prg.producer_map(out);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pops = int_upper_bound(range_card);
    rgtb << tab(1) << "for (int i = 0; i < " << num_pops << "; i++) {" << endl;
    rgtb << tab(2) << "int actual = " << out << ".read();" << endl;
    rgtb << tab(2) << "fout << actual << endl;" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }
  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}

void regression_test(prog& prg) {
  generate_unoptimized_code(prg);

  cout << "Built unoptimized code" << endl;
  auto old_name = prg.name;
  prg.name = "unoptimized_" + old_name;
  generate_regression_testbench(prg);
  vector<string> unoptimized_res = run_regression_tb(prg);
  prg.name = old_name;

  cout << "Building optimized code" << endl;
  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  vector<string> optimized_res = run_regression_tb(prg);

  assert(unoptimized_res.size() == optimized_res.size());
  for (size_t i = 0; i < unoptimized_res.size(); i++) {

    if (!(unoptimized_res.at(i) == optimized_res.at(i))) {
      cout << "Error: After optimization, at output " << i << " unoptimized_res != optimized_res" << endl;
      cout << "\tunoptimized = " << unoptimized_res.at(i) << endl;
      cout << "\toptimized   = " << optimized_res.at(i) << endl;
      assert(unoptimized_res.at(i) == optimized_res.at(i));
    }
  }

}

void conv_1d_test() {
  prog prg = conv_1d();

  regression_test(prg);
}

isl_schedule_node* print_sched_tp(isl_schedule_node* n, void* user) {
  cout << "\tNode..." << endl;

  isl_schedule_node_type tp = isl_schedule_node_get_type(n);
  cout << "\t\ttp = " << tp << endl;
  if (tp == isl_schedule_node_sequence) {
    cout << "\t\t\tseq" << endl;
  } else if (tp == isl_schedule_node_band) {
    cout << "\t\t\tband" << endl;
    cout << "\t\t\t" << str(isl_schedule_node_band_get_space(n)) << endl;
    cout << "\t\t\t" << str(isl_schedule_node_band_get_partial_schedule_union_map(n)) << endl;

    int* ind = (int*) user;
    if (*ind == 1 || *ind == 2) {
      isl_multi_val* tile_factor = isl_multi_val_zero(isl_schedule_node_band_get_space(n));
      isl_val* tile_val = isl_val_int_from_si(isl_schedule_node_get_ctx(n), 2);
      isl_multi_val_set_val(tile_factor, 0, tile_val);

      isl_schedule_node_band_tile(n, tile_factor);
      //*seen = true;
      *ind = *ind + 1;
    } else {
      *ind = *ind + 1;
    }
  }
  return n;
}

void mmul_test() {
  prog prg;
  auto r = prg.add_loop("r", 0, 8);
  auto c = r->add_loop("c", 0, 8);
  auto rd = c->add_op("read");
  rd->add_store("T", "0");

  auto k = c->add_loop("k", 0, 8);
  auto accum = k->add_op("accum");
  accum->add_load("T", "0");
  accum->add_store("T", "0");

  auto write = c->add_op("write");
  write->add_load("T", "0");
  write->add_store("M", "r, c");


  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  cout << "Program with optimized schedule..." << endl;
  isl_schedule* opt_sched = prg.optimized_schedule();

  int ind = 0;
  opt_sched = isl_schedule_map_schedule_node_bottom_up(opt_sched, print_sched_tp, &ind);


  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(isl_schedule_get_map(opt_sched), domain);
  //cout << "Optimized schedule..." << endl;
  //cout << codegen_c(schedmap);
  //assert(false);
}

void pyramid_test() {
  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "conv_1d_pyramid";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["T1"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_port_widths["M1"] = 32;

  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("write");
  write->add_load("in", "p");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);
  auto read0 = c->add_op("read0");
  read0->add_load("M", "c");
  read0->add_load("M", "c + 1");
  read0->add_load("M", "c + 2");
  read0->add_store("T", "c");

  auto compute = c->add_op("compute_out");
  compute->add_function("accumulate_3");
  compute->add_load("T", "c");
  compute->add_store("M1", "c");

  auto l = prg.add_loop("l", 0, 6);
  auto read1 = l->add_op("read1");
  read1->add_load("M1", "l");
  read1->add_load("M1", "l + 1");
  read1->add_load("M1", "l + 2");
  read1->add_store("T1", "l");

  auto compute1 = l->add_op("compute_out_1");
  compute1->add_function("accumulate_3");
  compute1->add_load("T1", "l");
  compute1->add_store("out", "l");

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);
}

prog conv_2d() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;

  {
    auto pr = prg.add_loop("pr", 0, 64);
    auto pc = pr->add_loop("pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64 - 2);
    auto pc = pr->add_loop("lc", 0, 64 - 2);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "lc + " + to_string(i);
        string r = "lr + " + to_string(j);
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "lc, lr");
  }
  return prg;
}

void pyramid_2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_3x3_pyramid";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["T"] = 32*9;
  prg.buffer_port_widths["T1"] = 32*9;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["M"] = 32;
  prg.buffer_port_widths["M1"] = 32;

  {
    auto pr = prg.add_loop("pr", 0, 10);
    auto pc = pr->add_loop("pc", 0, 10);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 10 - 2);
    auto pc = pr->add_loop("lc", 0, 10 - 2);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "lc + " + to_string(i);
        string r = "lr + " + to_string(j);
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("CI", "lc, lr");
  }

  {
    auto pr = prg.add_loop("dr", 0, 8 / 2);
    auto pc = pr->add_loop("dc", 0, 8 / 2);
    auto rd = pc->add_op("read_down");
    rd->add_load("CI", "2*dc, 2*dr");
    rd->add_store("D", "dc, dr");
  }

  {
    auto pr = prg.add_loop("sr", 0, 8 / 2 - 2);
    auto pc = pr->add_loop("sc", 0, 8 / 2 - 2);
    auto rd = pc->add_op("read_conv");
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "sc + " + to_string(i);
        string r = "sr + " + to_string(j);
        rd->add_load("D", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "sc, sr");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  //assert(false);
}

void reduce_1d_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "reduce_1d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["tmp"] = 32;

  {
    auto read_in = prg.add_loop("rd_in", 0, 14);
    auto rop = read_in->add_op("read_input_stream");
    rop->add_load("in", "rd_in");
    rop->add_store("I", "rd_in");
  }

  {
    auto init = prg.add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "0");

    auto accum_loop = prg.add_loop("a", 0, 14);
    auto accum = accum_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "0");
    auto next = accum->add_load("I", "a");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "0");

    auto write_out = prg.add_op("output");
    write_out->add_load("tmp", "0");
    write_out->add_store("out", "0");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  umap* opt_sched = prg.optimized_codegen();
  auto domain = prg.whole_iteration_domain();
  auto schedmap = its(opt_sched, domain);
  cout << "Optimized schedule..." << endl;
  cout << codegen_c(schedmap);

  auto buffers = build_buffers(prg);
  generate_app_code(buffers, prg);

  int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

}

void reduce_2d_test() {

  prog prg;
  prg.compute_unit_file = "mobilenet_compute.h";
  prg.name = "reduce_2d";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["tmp"] = 32;

  auto read_in = prg.add_nest("rd_r", 0, 3, "rd_c", 0, 3)->add_op({"I", "rd_r, rd_c"}, "id", {"in", "rd_r, rd_c"});

  {
    auto init = prg.add_op("set_z");
    init->add_function("set_zero_32");
    init->add_store("tmp", "0");

    auto accum_loop = prg.add_nest("ar", 0, 3, "ac", 0, 3);
    auto accum = accum_loop->add_op("accumulate");
    auto tmp = accum->add_load("tmp", "0");
    auto next = accum->add_load("I", "ar, ac");
    accum->add_function("inc", {tmp, next});
    accum->add_store("tmp", "0");

    auto write_out = prg.add_op("output");
    write_out->add_load("tmp", "0");
    write_out->add_store("out", "0");
  }

  regression_test(prg);
}

//void mobilenet_test() {

  //prog prg;
  //prg.compute_unit_file = "mobilenet_compute.h";
  //prg.name = "mobilenet";
  //prg.add_input("in");
  //prg.add_input("weights");
  //prg.add_output("out");
  //prg.buffer_port_widths["in"] = 32;
  //prg.buffer_port_widths["out"] = 32;
  //prg.buffer_port_widths["dw_conv"] = 32;
  //prg.buffer_port_widths["weights"] = 32;
  //prg.buffer_port_widths["I"] = 32;

  //{
    //auto read_in = prg.add_nest("px", 0, 14, "py", 0, 14, "pc", 0, 4);
    //auto write = read_in->add_op("read_input_stream");
    //write->add_load("in", "px, py, pc");
    //write->add_store("I", "px, py, pc");
  //}

  //{
    //auto read_in = prg.add_nest("px", 0, 14, "py", 0, 14, "pc", 0, 4);
    //auto write = read_in->add_op("read_weight_input_stream");
    //write->add_load("weights", "px, py, pc");
    //write->add_store("weight_buffer", "px, py, pc");
  //}

  //{
    //// dw_conv
    //auto set_dw = prg.add_nest("dwx", 0, 14 - 2, "dwy", 0, 14 - 2, "dwc", 0, 4);
    //auto init_dw = set_dw->add_op("init_dw");
    //init_dw->add_store("dw_conv", "dwx, dwy, dwz");
    //init_dw->add_function("set_zero_32");
    //// Set dw_conv to be
    //auto update_dw = set_dw->add_nest("rx", 0, 3, "ry", 0, 3);
    //auto rdw = update_dw->add_op("rdw");
    //auto l1 = rdw->add_load("I", "dwx + rx, dwy + ry, dwc");
    //auto w = rdw->add_load("weight_buffer", "dwx + rx, dwy + ry, dwc");
    //auto l2 = rdw->add_load("dw_conv", "dwx, dwy, dwc");
    //rdw->add_function("fma", {l1, w, l2});
    //rdw->add_store("dw_conv", "dwx, dwy, dwc");
  //}

  //{
    //auto read_in = prg.add_nest("ox", 0, 14 - 2, "oy", 0, 14 - 2, "ok", 0, 4);
    //auto write = read_in->add_op("write_max_out");
    //write->add_load("dw_conv", "ox, oy, ok");
    //write->add_function("max_zero");
    //write->add_store("out", "ox, oy, ok");
  //}

  //cout << "Program code without optimization..." << endl;
  //prg.unoptimized_codegen();

  //umap* opt_sched = prg.optimized_codegen();
  //auto domain = prg.whole_iteration_domain();
  //auto schedmap = its(opt_sched, domain);
  //cout << "Optimized schedule..." << endl;
  //cout << codegen_c(schedmap);

  //auto buffers = build_buffers(prg);
  //generate_app_code(buffers, prg);

  //int res = system(string("g++ -std=c++11 tb_" + prg.name + ".cpp " + prg.name + ".cpp").c_str());
  //assert(res == 0);

  //res = system("./a.out");
  //assert(res == 0);

  ////assert(false);
//}


umap* input_chunk(UBuffer& buf, const std::string& out_bundle) {

  umap* sched = buf.global_schedule();

  auto bundle_ops = buf.bundle_domain(out_bundle);
  auto DataRead = buf.bundle_access(out_bundle);

  // Assume there is only 1 input port (for now)
  auto in_bundle = pick(buf.get_in_bundles());

  auto write_ops = buf.bundle_domain(in_bundle);
  auto DataWritten = buf.bundle_access(in_bundle);

  auto EventsBeforeRead = lex_gt(sched, sched);

  auto ReadsBeforeCurrentRead = its_range(its(EventsBeforeRead, bundle_ops), bundle_ops);
  // lexmax wrt schedule
  auto PreviousRead = lexmax(ReadsBeforeCurrentRead);

  auto WritesBeforePreviousRead =
    its_range(its(dot(PreviousRead, EventsBeforeRead), bundle_ops), write_ops);

  auto DataWrittenBeforePreviousRead =
    dot(WritesBeforePreviousRead, DataWritten);

  return isl_union_map_subtract(DataRead,
      DataWrittenBeforePreviousRead);
}

void aha_talk_print_program_representation(prog& prg) {
  cout << "#### Info for input program: " << prg.name << endl << endl;

  auto iter_domain = prg.whole_iteration_domain();
  cout << "----- Statements in program..." << endl;
  for (auto op : prg.all_ops()) {
    cout << "\t" << op->name << endl;
  }
  cout << endl << endl;

  cout << "----- Iteration domains for statements..." << endl;
  cout << "\t" << str(iter_domain) << endl << endl;

  cout << "----- Schedules for statements..." << endl;
  cout << "\t" << str(prg.unoptimized_schedule()) << endl << endl;

  cout << "----- Values read by each statement" << endl;
  auto reads =
    its(prg.consumer_map(), iter_domain);
  cout << "\tread    = " << str(reads) << endl << endl;

  cout << "---- Statements that read each value" << endl;
  cout << "\tread^-1 = " << str(inv(reads)) << endl << endl;

  cout << "----- Values written by each statement" << endl;
  auto writes =
    its(prg.producer_map(), iter_domain);
  cout << "\t" << str(writes) << endl << endl;

  cout << "----- Un-optimized loop nests for program..." << endl;
  prg.unoptimized_codegen();
  cout << endl << endl;

}

void aha_talk_print_raw_deps(prog& prg) {

  auto iter_domain = prg.whole_iteration_domain();

  auto sched = prg.unoptimized_schedule();

  auto reads =
    its(prg.consumer_map(), iter_domain);

  auto writes =
    its(prg.producer_map(), iter_domain);

  cout << "---- Write   = " << str((writes)) << endl << endl;
  cout << "---- Read    = " << str((reads)) << endl << endl;
  cout << "---- Read^-1 = " << str(inv(reads)) << endl << endl;
  cout << "---- Write . Read^-1 = " << str(dot(writes, inv(reads))) << endl << endl;
  cout << "---- Schedule << Schedule = " << str(lex_lt(sched, sched)) << endl << endl;
  cout << "---- RaW deps = " << str(its(dot(writes, inv(reads)), lex_lt(sched, sched))) << endl << endl;
  cout << "---- RaW^-1   = " << str(coalesce(inv(its(dot(writes, inv(reads)), lex_lt(sched, sched))))) << endl << endl;
}

void aha_talk_print_info(prog& prg) {

  auto iter_domain = prg.whole_iteration_domain();

  cout << "#### Info for input program: " << prg.name << endl << endl;

  cout << "----- Statements in program..." << endl;
  for (auto op : prg.all_ops()) {
    cout << "\t" << op->name << endl;
  }
  cout << endl << endl;

  cout << "----- Iteration domains for statements..." << endl;
  cout << "\t" << str(iter_domain) << endl << endl;

  cout << "----- Schedules for statements..." << endl;
  cout << "\t" << str(prg.unoptimized_schedule()) << endl << endl;

  cout << "----- Values read by each statement" << endl;
  auto reads =
    its(prg.consumer_map(), iter_domain);
  cout << "\t" << str(reads) << endl << endl;

  cout << "----- Values written by each statement" << endl;
  auto writes =
    its(prg.producer_map(), iter_domain);
  cout << "\t" << str(writes) << endl << endl;

  cout << "----- Un-optimized loop nests for program..." << endl;
  prg.unoptimized_codegen();
  cout << endl << endl;

  cout << "----- Statement RaW dependencies..." << endl;
  cout << str(isl_union_map_coalesce(inv(prg.validity_deps()))) << endl << endl;

  cout << "----- Optimized loop nests for program minimizing (write -> read) time..." << endl;
  cout << prg.optimized_loop_nest() << endl << endl;

  auto buffers = build_buffers(prg);
  cout << "###### Unified buffers..." << endl;
  cout << "Number of buffers: " << buffers.size() << endl;
  for (auto& b : buffers) {
    UBuffer& buf = b.second;

    cout << "--- " << (prg.is_boundary(b.second.name) ? "External Buffer: " : "Internal Buffer: ") << b.second.name << endl;
    cout << "\t---- In ports" << endl;
    for (auto inpt : b.second.get_in_ports()) {
      cout << "\t\t" << inpt << endl;
      cout << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
      cout << "\t\t\tbuffer capacity: " << compute_max_dd(b.second, inpt) << endl;
      cout << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
      cout << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
    }

    cout << "\t---- Out ports" << endl;
    for (auto inpt : b.second.get_out_ports()) {
      cout << "\t\t" << inpt << endl;
      cout << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
      cout << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
      cout << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
    }

    cout << "\t---- Output Bundles" << endl;
    for (auto out_bundle : b.second.get_out_bundles()) {
      cout << "\t\t" << out_bundle << endl;
      auto ports = b.second.port_bundles.at(out_bundle);
      cout << "\t\t---- Ports..." << endl;
      for (auto p : ports) {
        cout << "\t\t\t" << p << endl;
      }

      if (buf.get_in_ports().size() == 0) {
        continue;
      }

      auto inpt = pick(buf.get_in_ports());
      buf.port_bundles[inpt] = {inpt};

      auto in_chunk = isl_union_map_coalesce(input_chunk(buf, out_bundle));
      cout << "\t\t Input Chunk: " << str(in_chunk) << endl;
      cout << "\t\t Input Chunk Sizes: " << str(card(in_chunk)) << endl;
    }

    cout << endl << endl;
  }

  generate_app_code(buffers, prg);
  cout << "output code for application is in file: " << prg.name << ".cpp" << endl;
}

void conv_2d_bc_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_bc";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;

  {
    auto pc = prg.add_nest("pr", 0, 64, "pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pc, pr");
    write->add_store("I", "pc, pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64);
    auto pc = pr->add_loop("lc", 0, 64);
    auto rd = pc->add_op("read_0");
    // Need to load 9 values
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        string c = "min(lc + " + to_string(i) + ", 63)";
        string r = "min(lr + " + to_string(j) + ", 63)";
        rd->add_load("I", c + ", " + r);
      }
    }
    rd->add_function("conv_3_3");
    rd->add_store("out", "lc, lr");
  }

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  regression_test(prg);
}

void conv_1d_rolled_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_1d_rolled";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["R"] = 32;

  {
    auto pc = prg.add_loop("pr", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pr");
    write->add_store("I", "pr");
  }

  {
    auto pr = prg.add_loop("lr", 0, 64 - 2);
    auto rd = pr->add_op("init");
    rd->add_store("R", "lr");
    rd->add_function("set_zero_32");

    auto reduce_inner_loop = pr->add_loop("rr", 0, 3);
    auto reduce_inner = reduce_inner_loop->add_op({"R", "lr"}, "inc", {"R", "lr", "I", "lr + rr"});
  }

  {
    auto outlp = prg.add_nest("xr", 0, 64 - 2);
    outlp->store({"out", "xr"}, {"R", "xr"});
  }

  regression_test(prg);
}

string add_conv_stage(prog& prg, const std::string& inbuffer) {
  int in_rows = prg.dim(inbuffer, 0);
  int in_cols = prg.dim(inbuffer, 1);

  int res_rows = in_rows - 2;
  int res_cols = in_cols - 2;

  string blur = inbuffer + "_blr";
  prg.buffer_port_widths[blur] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[blur] = {res_rows, res_cols};

  string rb = blur + "_r";
  string rc = blur + "_c";
  auto loads = prg.vector_load(inbuffer, rb, 0, 3, rc, 0, 3);
  auto ns = prg.add_nest(rb, 0, res_rows, rc, 0, res_cols);
  ns->add_op({blur, rb + "," + rc}, "conv_3_3", loads);

  return blur;
}

string add_conv_stage_out(prog& prg, const std::string& inbuffer) {
  int in_rows = prg.dim(inbuffer, 0);
  int in_cols = prg.dim(inbuffer, 1);

  int res_rows = in_rows - 2;
  int res_cols = in_cols - 2;

  string blur = inbuffer + "_blr";
  prg.buffer_port_widths[blur] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[blur] = {res_rows, res_cols};

  string output = blur;
  string out_stream = output + "_out";
  prg.buffer_port_widths[out_stream] = prg.buffer_port_widths[output];
  prg.buffer_bounds[out_stream] = prg.buffer_bounds[output];
  prg.add_output(out_stream);

  string rb = blur + "_r";
  string rc = blur + "_c";
  auto loads = prg.vector_load(inbuffer, rb, 0, 3, rc, 0, 3);
  auto ns = prg.add_nest(rb, 0, res_rows, rc, 0, res_cols);
  ns->add_op({blur, rb + "," + rc}, "conv_3_3", loads);
  ns->store({out_stream, rb + ", " + rc}, {output, rb + ", " + rc});

  return out_stream;
}

string add_gaussian_stage(prog& prg, const std::string& inbuffer) {

  int in_rows = prg.dim(inbuffer, 0);
  int in_cols = prg.dim(inbuffer, 1);

  int res_rows = in_rows - 2;
  int res_cols = in_cols - 2;

  string blur = inbuffer + "_blr";
  prg.buffer_port_widths[blur] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[blur] = {res_rows, res_cols};
  string rb = blur + "_r";
  string rc = blur + "_c";
  auto loads = prg.vector_load(inbuffer, rb, 0, 3, rc, 0, 3);
  prg.add_nest(rb, 0, res_rows, rc, 0, res_cols)->add_op({blur, rb + "," + rc}, "conv_3_3", loads);

  string ds = blur + "_ds";
  string dr = ds + "_r";
  string dc = ds + "_c";
  prg.buffer_port_widths[ds] = prg.buffer_port_widths[inbuffer];
  prg.buffer_bounds[ds] = {res_rows / 2, res_cols / 2};
  prg.add_nest(dr, 0, res_rows / 2, dc, 0, res_cols / 2)->
    add_op({ds, dr + ", " + dc}, "id", {blur, "2*" + dr + ", 2*" + dc});

  return ds;
}

void write_out(prog& prg, const std::string& output) {
  string out_stream = output + "_out";
  prg.buffer_port_widths[out_stream] = prg.buffer_port_widths[output];
  prg.buffer_bounds[out_stream] = prg.buffer_bounds[output];
  prg.add_output(out_stream);

  int res_rows = prg.dim(output, 0);
  int res_cols = prg.dim(output, 1);

  string r = out_stream + "_r";
  string c = out_stream + "_c";
  prg.add_nest(r, 0, res_rows, c, 0, res_cols)->store({out_stream, r + ", " + c}, {output, r + ", " + c});
}

void gaussian_pyramid_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "gaussian_pyramid";
  prg.add_input("in");

  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["in"] = 32;

  prg.buffer_bounds["in"] = {32, 32};
  prg.buffer_bounds["I"] = {32, 32};

  prg.add_nest("pr", 0, 32, "pc", 0, 32)->store({"I", "pr, pc"}, {"in", "pr, pc"});
  string I1 = add_gaussian_stage(prg, "I");
  string I2 = add_gaussian_stage(prg, I1);

  write_out(prg, I2);

  regression_test(prg);
}

void jacobi_2d_4_test() {

  const int unroll = 4;
  string us = to_string(unroll);
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "jacobi2d_" + us;
  prg.buffer_port_widths["I"] = 32;

  vector<string> inputs;
  vector<string> outputs;
  for (int i = 0; i < unroll; i++) {
    string in_name_0 = "in_" + us;
    string out_name_0 = "out_" + us;

    prg.buffer_port_widths[in_name_0] = 32;
    prg.add_input(in_name_0);
    prg.buffer_port_widths[out_name_0] = 32;
    prg.add_output(out_name_0);

    inputs.push_back("in_" + us);
    outputs.push_back("out_" + us);
  }

  int rows = 32;
  int cols = 32;

  assert(cols % unroll == 0);

  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols / unroll);
  for (size_t i = 0; i < inputs.size(); i++) {
    string in_name_0 = inputs.at(i);
    cout << "Creating in nest: " << i << endl;
    //in_nest->add_op
      //({"I", us + "*id0 + " + to_string(i) + ", id1"}, "conv", {in_name_0, "id0, id1"});
    in_nest->add_op({"I", us + "*id0 + " + to_string(i) + ", id1"}, "id", {in_name_0, "id0, id1"});
  }

  auto blur_y_nest =
    prg.add_nest("d1", 1, rows - 1, "d0", 1, (cols - 1) / unroll);
  for (size_t i = 0; i < outputs.size(); i++) {
    string out_name_1 = outputs.at(i);
    blur_y_nest->
      stencil_op(out_name_1, "jacobi2d_compute", "I", {us + "*(d0) + " + to_string(i) + " - 1", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});
  }

  regression_test(prg);
  //assert(false);
}

void jacobi_2d_2_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "jacobi2d_2";
  prg.buffer_port_widths["I"] = 32;

  int unroll_factor = 4;

  string in_name_0 = "in_0";
  string in_name_1 = "in_1";

  string out_name_0 = "out_0";
  string out_name_1 = "out_1";

  int rows = 32;
  int cols = 32;

  prg.buffer_port_widths[in_name_0] = 32;
  prg.add_input(in_name_0);
  prg.buffer_port_widths[in_name_1] = 32;
  prg.add_input(in_name_1);

  prg.buffer_port_widths[out_name_0] = 32;
  prg.add_output(out_name_0);
  prg.buffer_port_widths[out_name_1] = 32;
  prg.add_output(out_name_1);

  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols / 2);
  in_nest->store({"I", "2*id0, id1"}, {in_name_0, "id0, id1"});
  in_nest->store({"I", "2*id0 + 1, id1"}, {in_name_1, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 1, rows - 1, "d0", 1, (cols - 1) / 2);
  blur_y_nest->
    stencil_op(out_name_0, "jacobi2d_compute", "I", {"2*d0 - 1", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});
  blur_y_nest->
    stencil_op(out_name_1, "jacobi2d_compute", "I", {"2*(d0) + 1 - 1", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});

  regression_test(prg);
  //assert(false);
}

void jacobi_2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "jacobi2d";
  prg.buffer_port_widths["I"] = 32;

  string in_name = "in";
  string out_name = "out";

  int rows = 32;
  int cols = 32;

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  // This code (in SODA is described as blur_x)
  // blur_x(0, 0) = in(0, 0) + in(0, 1) + in(0, 2)
  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 1, rows - 1, "d0", 1, cols - 1);
  blur_y_nest->
    stencil_op(out_name, "jacobi2d_compute", "I", {"d0", "d1"}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});

  regression_test(prg);
}

struct Token {
  string txt;
};

struct Expr {
  vector<Token> tokens;
};

struct BaseExpr {
  string name;
  vector<Token> dims;
};

struct StencilProgram {
  string name;
  int burst_width;
  int unroll_factor;

  vector<pair<BaseExpr, Expr> > operations;
};

bool is_isolated_token(const char nextc) {
  if (nextc == '-') {
    return true;
  }
  if (nextc == '+') {
    return true;
  }
  if (nextc == '*') {
    return true;
  }
  if (nextc == '/') {
    return true;
  }
  if (nextc == '.') {
    return true;
  }
  if (nextc == ':') {
    return true;
  }
  if (nextc == ',') {
    return true;
  }
  if (nextc == '(') {
    return true;
  }
  if (nextc == ')') {
    return true;
  }

  return false;
}

bool is_token_break(const char nextc) {
  if (isspace(nextc)) {
    return true;
  }

  if (nextc == '-') {
    return true;
  }
  if (nextc == '+') {
    return true;
  }
  if (nextc == '*') {
    return true;
  }
  if (nextc == '/') {
    return true;
  }
  if (nextc == '.') {
    return true;
  }

  if (nextc == ':') {
    return true;
  }

  if (nextc == ',') {
    return true;
  }

  if (nextc == '(') {
    return true;
  }

  if (nextc == ')') {
    return true;
  }

  return false;
}

void add_token(vector<Token>& toks, const string& t) {
  if (t.size() == 0) {
    return;
  }
  toks.push_back({t});
}


vector<Token> tokenize(istream& in) {
  vector<Token> toks;
  char nextc;
  string next;
  while (in.get(nextc)) {
    cout << "Next = " << nextc << endl;
    if (is_token_break(nextc)) {
      add_token(toks, next);
      next = "";
      if (!isspace(nextc)) {
        if (is_isolated_token(nextc)) {
          string n = "";
          n += nextc;
          add_token(toks, {n});
        } else {
          next += (nextc);
        }
      }
    } else {
      next += nextc;
    }
  }
  add_token(toks, next);
  //in.close();
  return toks;
}

Token consume(vector<Token>& tokens, size_t& pos, const string& next) {
  assert(pos < tokens.size());
  pos++;
  assert(tokens.at(pos - 1).txt == next);
  return tokens.at(pos - 1);
}

Token peek(vector<Token>& tokens, size_t& pos) {
  assert(pos < tokens.size());
  return tokens.at(pos);
}

Token next(vector<Token>& tokens, size_t& pos) {
  assert(pos < tokens.size());
  pos++;
  return tokens.at(pos - 1);
}

BaseExpr parse_base(vector<Token>& tokens, size_t& pos) {
  string name = next(tokens, pos).txt;
  vector<Token> tks;
  if (peek(tokens, pos).txt == "(") {
    next(tokens, pos);
    while (peek(tokens, pos).txt != ")") {
      tks.push_back(next(tokens, pos));
      if (peek(tokens, pos).txt == ",") {
        consume(tokens, pos, ",");
      } else {
        break;
      }
    }
    consume(tokens, pos, ")");
  }
  return BaseExpr{name, tks};
}

bool expr_start(const Token& t) {
  return t.txt != "local" && t.txt != "input" && t.txt != "output";
}

bool done(vector<Token>& tokens, size_t& pos) {
  return tokens.size() <= pos;
}

Expr parse_expr(vector<Token>& tokens, size_t& pos) {
  stack<Token> op_stack;
  Expr e;
  while (!done(tokens, pos) && expr_start(peek(tokens, pos))) {
    e.tokens.push_back(next(tokens, pos));
  }
  return e;
}

StencilProgram parse_soda_program(istream& in) {
  StencilProgram program;

  vector<Token> tokens = tokenize(in);
  //cout << "Tokens = " << endl;
  for (auto t : tokens) {
    //cout << "\ttok: " << t.txt << endl;
    assert(t.txt.size() > 0);
  }

  size_t pos = 0;
  while (pos < tokens.size()) {
    string next = tokens[pos].txt;
    if (next == "kernel") {
      pos += 3;
      program.name = tokens.at(pos + 2).txt;
    } else if (next == "burst") {
      program.burst_width = safe_stoi(tokens.at(pos + 3).txt);
      pos += 4;
    } else if (next == "unroll") {
      program.unroll_factor = safe_stoi(tokens.at(pos + 3).txt);
      pos += 4;
    } else if (next == "iterate") {
      //program.unroll_factor = to_string(tokens.at(pos + 3).txt);
      pos += 3;
    } else if (next == "input") {
      //string tp = tokens.at(pos + 1);
      pos = pos + 3;
      BaseExpr b = parse_base(tokens, pos);
      cout << "Base: " << b.name << "(";
      for (auto e : b.dims) {
        cout << e.txt << ", ";
      }
      cout << " )" << endl;
    } else if (next == "local" || next == "output") {
      pos = pos + 3;
      BaseExpr b = parse_base(tokens, pos);
      cout << "Base: " << b.name << "(";
      for (auto e : b.dims) {
        cout << e.txt << ", ";
      }
      cout << " )" << endl;

      consume(tokens, pos, "=");
      Expr e = parse_expr(tokens, pos);
      cout << "After expr: " <<
        endl;
      for (size_t i = pos; i < tokens.size(); i++) {
        cout << "tok: " << tokens.at(i).txt << endl;
      }
      program.operations.push_back({b, e});
    } else {
      cout << "Unsupported next token: " << tokens.at(pos).txt << endl;
      assert(false);
    }
  }

  cout << "Program: " << program.name << endl;
  for (auto op : program.operations) {
    BaseExpr b = op.first;
    Expr e = op.second;
    cout << b.name << "(";
    for (auto e : b.dims) {
      cout << e.txt << ", ";
    }
    cout << " ) = ";
    for (auto t : e.tokens) {
      cout << t.txt << " ";
    }
    cout << endl;
  }
  cout << "Done" << endl;
  return program;
}

void parse_denoise3d_test() {
  ifstream in("denoise3d.soda");
  auto prg = parse_soda_program(in);

  //assert(false);
}

void duplicate_upsample_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "duplicate_upsample";
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["MDuplicate"] = 32;

  int rows = 32;

  prg.buffer_bounds["I"] = {rows};

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id1", 0, rows);
  in_nest->add_op({"I", "id0"}, "id", {in_name, "id0"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, rows);

  //blur_y_nest->
    //stencil_op("tmp", "blur_3_32", "I", {"d0", "d1"},
        //{{-1, 0}, {0, 0}, {1, 0}});

  //auto blur_out_nest=
    //prg.add_nest("d1", 1, rows - 1, "d0", 1, cols - 1);
  //blur_out_nest->
    //stencil_op(out_name, "blur_3_32", "tmp", {"d0", "d1"},
        //{{0, -1}, {0, 0}, {0, 1}});

  regression_test(prg);
  assert(false);
}

void seidel2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "seidel2d";
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["tmp"] = 32;

  int rows = 32;
  int cols = 32;

  prg.buffer_bounds["I"] = {rows, cols};

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id1", 0, rows, "id0", 0, cols);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, rows, "d0", 1, cols - 1);
  blur_y_nest->
    stencil_op("tmp", "blur_3_32", "I", {"d0", "d1"},
        {{-1, 0}, {0, 0}, {1, 0}});

  auto blur_out_nest=
    prg.add_nest("d1", 1, rows - 1, "d0", 1, cols - 1);
  blur_out_nest->
    stencil_op(out_name, "blur_3_32", "tmp", {"d0", "d1"},
        {{0, -1}, {0, 0}, {0, 1}});

  regression_test(prg);
}

struct App {

  isl_ctx* ctx;
  map<string, Result> app_dag;
  map<string, Box> domain_boxes;

  // Map from functions to compute invocations of
  // other functions that they need
  map<string, isl_set*> compute_sets;
  map<string, isl_map*> compute_maps;

  App() {
    ctx = isl_ctx_alloc();
  }

  ~App() {
    isl_ctx_free(ctx);
  }

  void update(const string& func,
      const string& accum,
      const string& compute,
      const vector<Window>& args,
      Box reduce_ranges) {

    assert(reduce_ranges.dimension() > 0);
    assert(contains_key(func, app_dag));
    vector<Window> rargs;
    for (auto a : args) {
      a.reduce_var_ranges = reduce_ranges;
      rargs.push_back(a);
    }
    app_dag.at(func).add_reduce_update(accum, compute, rargs, reduce_ranges);

  }

  string func2d(const std::string& name, const std::string& init) {
    Result res;

    app_dag[name] = res;

    return name;

  }

  bool is_input(const std::string& name) const {
    return producers(name).size() == 0;
  }

  string add_func(const std::string& name,
      const std::string compute,
      const int ndims,
      const vector<Window>& windows) {
    assert(!contains_key(name, app_dag));

    Result res;
    for (auto w : windows) {
      w.needed = build_needed(name, w);
      res.srcs.push_back(w);
    }

    vector<QAV> strides;
    vector<int> pt;
    for (int i = 0; i < ndims; i++) {
      strides.push_back(qconst(1));
      pt.push_back(0);
    }

    res.provided = Window(name, strides, {pt});
    res.add_init_update(name, compute, res.srcs);

    app_dag[name] = res;

    return name;
  }

  string func3d(const std::string& name) {
    return add_func(name, "", 3, {});
  }

  string func2d(const std::string& name) {
    return add_func(name, "", 2, {});
  }
  
  string func3d(const std::string& name,
      const string& compute,
      const Window& window) {
    vector<Window> windows{window};
    return func3d(name, compute, windows);
  }

  string func3d(const std::string& name,
      const string& compute,
      const vector<Window>& windows) {
    return add_func(name, compute, 3, windows);
  }

  string func2d(const std::string& name,
      const string& compute,
      const Window& a,
      const Window& b) {
    vector<Window> windows{a, b};
    return func2d(name, compute, windows);
  }

  string func2d(const std::string& name,
      const string& compute,
      const Window& window) {
    vector<Window> windows{window};
    return func2d(name, compute, windows);
  }

  string func2d(const std::string& name,
      const string& compute,
      const vector<Window>& windows) {
    return add_func(name, compute, 2, windows);
  }

  string func2d(const std::string& name,
      const string& compute,
      const string& arg,
      const vector<vector<int> >& offsets) {
    assert(offsets.size() > 0);
    size_t ndims = offsets.at(0).size();
    vector<int> strides;
    for (size_t i = 0; i < ndims; i++) {
      strides.push_back(1);
    }
    return func2d(name, compute, arg, strides, offsets);
  }

  string func2d(const std::string& name,
      const string& compute,
      const string& arg,
      const vector<QAV>& strides,
      const vector<vector<int> >& offsets) {
    Window w{arg, strides, offsets};

    return func2d(name, compute, {w});
  }

  string func2d(const std::string& name,
      const string& compute,
      const string& arg,
      const vector<int>& strides,
      const vector<vector<int> >& offsets) {

    Window w{arg, strides, offsets};

    return func2d(name, compute, {w});
  }

  void unroll(const string& func, const int unroll_factor) {
    assert(unroll_factor > 0);
    assert(contains_key(func, app_dag));
    app_dag.at(func).updates[0].unroll_factor = unroll_factor;
  }

  Update last_update(const string& func) const {
    assert(contains_key(func, app_dag));
    assert(app_dag.at(func).updates.size() > 0);
    return app_dag.at(func).updates.back();
  }

  umap* build_needed(const string& name, const Window& w) {

    assert(w.dimension() > 0);
    int ndims = w.dimension();

    vector<int> mins;
    vector<int> maxs;
    for (int i = 0; i < ndims; i++) {
      mins.push_back(10000);
      maxs.push_back(-1);
    }

    for (auto s : w.offsets) {
      for (size_t d = 0; d < s.size(); d++) {
        if (s[d] < mins[d]) {
          mins[d] = s[d];
        }
        if (s[d] > maxs[d]) {
          maxs[d] = s[d];
        }
      }
    }

    vector<string> box_strs;
    vector<string> base_vars;
    vector<string> arg_vars;
    for (size_t i = 0; i < mins.size(); i++) {
      QAV stride = w.stride(i);
      string base_var = "d" + to_string(i);
      base_vars.push_back(base_var);
      string kv = "k" + to_string(i);
      arg_vars.push_back(kv);
      int min = mins[i];
      int max = maxs[i];
      string base_expr = to_string(stride) + "*" + base_var;
      if (!stride.is_whole()) {
        base_expr = "floor(" + base_var + " / " + to_string(stride.denom) + ")";
      }
      box_strs.push_back(base_expr + " + " + to_string(min) + " <= " + kv + " <= " + base_expr + " + " + to_string(max));
    }
    string box_cond = "{ " + name + sep_list(base_vars, "[", "]", ", ") + " -> " + w.name + sep_list(arg_vars, "[", "]", ", ") + " : " + sep_list(box_strs, "", "", " and ") + " }";
    cout << "Box needed: " << box_cond << endl;
    umap* m = isl_union_map_read_from_str(ctx, box_cond.c_str());
    cout << "Map       : " << str(m) << endl;

    return m;
  }

  vector<Window> producers(const string& f) const {
    //cout << "Getting producers for: " << f << endl;
    if (contains_key(f, app_dag)) {
      //cout << "In app dag: " << f << endl;
      //for (auto s : app_dag) {
        //cout << "\t" << s.first << endl;
      //}
      vector<Window> sources;
      for (auto u : map_find(f, app_dag).updates) {
        concat(sources, u.get_srcs());
      }
      //auto res = map_find(f, app_dag).get_srcs();
      //cout << "Got res from map" << endl;
      return sources;
    }
    return {};
  }

  vector<pair<string, Window> > consumer_windows(const string& f) const {
    vector<pair<string, Window> > cons;
    for (auto other_func : app_dag) {
      for (auto d : other_func.second.get_srcs()) {
        if (d.name == f) {
          cons.push_back({other_func.first, d});
          break;
        }
      }
    }
    return cons;
  }

  set<string> consumers(const string& f) const {
    set<string> cons;
    for (auto other_func : app_dag) {
      for (auto d : other_func.second.get_srcs()) {
        if (d.name == f) {
          cons.insert(other_func.first);
          break;
        }
      }
    }
    //cout << "# of consumers of " << f << " = " << cons.size() << endl;
    return cons;
  }

  Update get_update(const std::string& u) const {
    for (auto f : sort_functions()) {
      for (auto other : app_dag.at(f).updates) {
        if (other.name() == u) {
          return other;
        }
      }
    }
    cout << "Error: No update named " << u << endl;
    assert(false);
    return {};
  }

  vector<string> sort_updates() const {
    vector<string> updates;
    for (auto f : sort_functions()) {
      for (auto u : app_dag.at(f).updates) {
        updates.push_back(u.name());
      }
    }
    return updates;
  }

  vector<string> sort_operations() const {
    auto functions = sort_functions();
    vector<string> operations;
    for (auto f : functions) {
      Result r = app_dag.at(f);
      operations.push_back(f + "_comp");
      //if (r.is_reduce()) {
        //operations.push_back(f + "_reduce");
      //}
    }
    return operations;
  }

  vector<string> sort_functions() const {
    vector<string> sorted;

    while (sorted.size() != app_dag.size()) {
      for (auto fs : app_dag) {
        if (elem(fs.first, sorted)) {
          continue;
        }
        string f = fs.first;
        bool consumers_done = true;
        for (auto c : consumers(f)) {
          if (!elem(c, sorted)) {
            consumers_done = false;
            break;
          }
        }

        if (consumers_done) {
          sorted.push_back(f);
        }
      }
    }
    assert(sorted.size() == app_dag.size());

    reverse(sorted);

    return sorted;
  }

  Box data_domain(const std::string& f) {
    if (!contains_key(f, domain_boxes)) {
      cout << "Error: No key for: " << f << " in domain_boxes" << endl;
    }
    assert(contains_key(f, domain_boxes));
    return map_find(f, domain_boxes);
  }

  void fill_compute_domain() {
    int ndims = data_dimension();
    vector<string> data_vars;
    vector<string> later_data_vars;
    for (int i = 0; i < ndims; i++) {
      data_vars.push_back("d" + str(i));
      if (i > 0) {
        later_data_vars.push_back("d" + str(i));
      }
    }

    int sdims = schedule_dimension();
    assert(sdims >= ndims);

    vector<string> sched_vars;
    vector<string> later_sched_vars;
    for (int i = 0; i < ndims; i++) {
      sched_vars.push_back("d" + str(i));
      if (i > 0) {
        later_sched_vars.push_back("d" + str(i));
      }
    }
    for (int i = ndims; i < sdims; i++) {
      sched_vars.push_back("s" + str(i));
      if (i > 0) {
        later_sched_vars.push_back("s" + str(i));
      }
    }

    for (auto f : sort_functions()) {

      for (auto update : app_dag.at(f).updates) {
        compute_maps[update.name()] =
          to_map(rdmap(ctx, "{ " + f + "[" + comma_list(data_vars) + " ] -> " +
                update.name() + "[floor(d0 / " + to_string(update.unroll_factor) + "), " + comma_list(later_sched_vars) + "] }"));

        cout << "compute map for " << update.name() << " is " << str(compute_maps[update.name()]) << endl;
        compute_sets[update.name()] =
          range(its(
                compute_maps[update.name()],
                data_domain(f).to_set(ctx, f)));
        //for (int i = 0; i < update.reduce_var_domain.dimension(); i++) {
        for (int i = 0; i < sdims - ndims; i++) {
          string uv = "s" + str(i + ndims);
          if (i < update.reduce_var_domain.dimension()) {
            string limited_set =
              "{ " + update.name() + sep_list(sched_vars, "[", "]", ", ") + " : " +
              str(update.reduce_var_domain.min(i)) + " <= " + uv + " <= " + str(update.reduce_var_domain.max(i)) +
              " }";
            cout << "Limit set: " << limited_set << endl;

            compute_sets[update.name()] =
              its(compute_sets[update.name()],
                  rdset(ctx, limited_set));
          } else {
            string limited_set =
              "{ " + update.name() + sep_list(sched_vars, "[", "]", ", ") + " : " +
              " 0 <= " + uv + " <= 0" +
              " }";
            cout << "Limit set: " << limited_set << endl;

            compute_sets[update.name()] =
              its(compute_sets[update.name()],
                  rdset(ctx, limited_set));

          }
        }

        cout << "Compute domain for " << update.name() << " is " << str(compute_sets[update.name()]) << endl;
      }
    }
    cout << "Got compute domain" << endl;
    //assert(false);
  }

  void fill_data_domain(const std::string& name, const int d0, const int d1) {
    ////fill_data_domain(name, {d0, d1}, unroll_factor);
    fill_data_domain(name, {d0, d1});
  }
  
  int schedule_dimension() const {
    int max_dims = -1;
    for (auto f : sort_functions()) {
      for (auto w : producers(f)) {
        int dm = w.total_dimension();
        if (dm > max_dims) {
          max_dims = dm;
        }
      }
    }
    return max_dims;
  }

  int data_dimension() const {
    int max_dims = -1;
    for (auto f : sort_functions()) {
      for (auto w : producers(f)) {
        int dm = w.dimension();
        if (dm > max_dims) {
          max_dims = dm;
        }
      }
    }
    return max_dims;
  }

  //void fill_data_domain(const std::string& name, const vector<int>& dims, const int unroll_factor) {
  void fill_data_domain(const std::string& name, const vector<int>& dims) {

    Box sbox;
    int max_dims = data_dimension();

    for (auto f : sort_functions()) {
      for (auto w : producers(f)) {
        int dm = w.dimension();
        if (dm > max_dims) {
          max_dims = dm;
        }
      }
    }

    for (auto d : dims) {
      sbox.intervals.push_back({0, d - 1});
    }
    for (int i = dims.size(); i < max_dims; i++) {
      sbox.intervals.push_back({0, 0});
    }

    sbox = sbox.pad_range_to_nearest_multiple(last_update(name).unroll_factor);

    vector<string> buffers = sort_functions();
    assert(buffers.size() > 0);

    reverse(buffers);

    cout << "Buffers..." << endl;
    for (auto b : buffers) {
      cout << tab(1) << b << endl;
    }

    assert(buffers.at(0) == name);
    string n = name;
    domain_boxes = {};
    domain_boxes[n] = sbox;

    for (int i = 1; i < (int) buffers.size(); i++) {
      string next = buffers.at(i);
      cout << next << " has consumers " << endl;
      map<string, Box> needed_windows;
      for (auto consumer_data : consumer_windows(next)) {
        string consumer = consumer_data.first;
        Window win = consumer_data.second;

        Box consumer_domain =
          map_find(consumer, domain_boxes);

        Box in_box;
        int dim = 0;
        for (auto range : consumer_domain.intervals) {
          int min_result_addr = range.min;
          int max_result_addr = range.max;

          int min_input_addr = win.min_addr(dim, min_result_addr);
          int max_input_addr = win.max_addr(dim, max_result_addr);
          dim++;
          in_box.intervals.push_back({min_input_addr, max_input_addr});
        }

        cout << tab(1) << consumer << " needs: " << in_box << endl;
        needed_windows[consumer] = in_box;
      }
      Box final_dom(max_dims);
      for (auto nn : needed_windows) {
        final_dom = unn(final_dom, nn.second);
      }
      final_dom = final_dom.pad_range_to_nearest_multiple(last_update(next).unroll_factor);

      domain_boxes[next] = final_dom;
    }

    cout << domain_boxes.size() << " data domains.." << endl;
    assert(domain_boxes.size() == sort_functions().size());
    for (auto f : sort_functions()) {
      auto d = domain_boxes.at(f);
      cout << f << " = " << d << endl;
    }

    //assert(false);
  }


  Box compute_box(const std::string& name) {
    cout << "Getting box: " << name << endl;
    //cout << tab(1) << "lexmin: " << str(lexmin(compute_domain(name))) << endl;
    //cout << tab(1) << "lexmax: " << str(lexmax(compute_domain(name))) << endl;

    auto min_pt =
      parse_pt(sample(lexmin(compute_domain(name))));
    auto max_pt =
      parse_pt(sample(lexmax(compute_domain(name))));

    assert(min_pt.size() == max_pt.size());

    Box b;
    for (size_t i = 0; i < min_pt.size(); i++) {
      b.intervals.push_back({min_pt.at(i), max_pt.at(i)});
    }
    return b;
  }

  isl_map* compute_map(const std::string& f) {
    return map_find(f, compute_maps);
  }

  isl_set* compute_domain(const std::string& name) {
    return map_find(name, compute_sets);
  }

  Window box_touched(const std::string& consumer, const std::string& producer) {
    cout << "Getting box of " << producer << " touched by " << consumer << endl;
    //assert(contains_key(consumer, app_dag));

    for (auto f : app_dag) {
      for (auto up : f.second.updates) {
        if (up.name() == consumer) {
          for (auto src : up.get_srcs()) {
            cout << "src: " << src << endl;
            if (src.name == producer) {
              cout << "Got box" << endl;
              return src;
            }
          }
        }
      }
    }
    assert(false);
    return {};
  }

  map<string, vector<QExpr> > rectangular_schedules() {
    vector<string> sorted_functions = sort_functions();
    vector<string> sorted_operations;

    map<string, Box> op_domains;
    map<string, vector<QExpr> > schedules;
    map<string, isl_map*> op_compute_maps;
    map<string, map<string, umap*> > pixels_needed;

    for (auto f : sorted_functions) {
      for (auto u : app_dag.at(f).updates) {
        sorted_operations.push_back(u.name());

        op_domains[u.name()] =
          compute_box(u.name());

        pixels_needed[u.name()] = {};
        for (auto w : u.get_srcs()) {
          pixels_needed[u.name()][last_update(w.name).name()] = w.needed;
        }

        op_compute_maps[u.name()] = compute_map(u.name());
        //op_compute_maps[u.name()] = its_range(compute_map(u.name()), compute_domain(u.name()));
      }
    }

    int ndims = schedule_dimension();

    auto last_compute_needed = build_compute_deps(
        ndims,
        sorted_operations,
        pixels_needed,
        op_compute_maps);
    for (int i = ndims - 1; i >= 0; i--) {
      auto dim_schedules =
        schedule_dim(ctx, i, op_domains, sorted_operations, last_compute_needed);

      for (auto f : sorted_operations) {
        schedules[f].push_back(dim_schedules.at(f));
      }
    }

    cout << "Final schedule.." << endl;
    for (auto s : schedules) {
      cout << tab(1) << s.first << " -> " << comma_list(s.second) << endl;
    }
    //assert(false);

    return schedules;
  }

  umap* pixels_read(const std::string& u) {
    Update up = get_update(u);
    umap* read = rdmap(ctx, "{}");
    for (auto s : up.get_srcs()) {
      read = unn(read, dot(pixels_written(u), unn(read, s.needed)));
    }
    return read;
  }

  isl_map* pixels_written(const std::string& u) {
    return inv(compute_map(u));
  }

  umap* schedule_isl() {
    isl_options_set_schedule_algorithm(ctx, ISL_SCHEDULE_ALGORITHM_ISL);

    umap* naive_sched = schedule_naive();
    auto before = lex_lt(naive_sched, naive_sched);

    cout << "Naive sched = " << str(naive_sched) << endl;
    umap* writes = rdmap(ctx, "{}");
    umap* reads = rdmap(ctx, "{}");
    uset* domain = isl_union_set_read_from_str(ctx, "{}");

    for (auto u : sort_updates()) {
      writes =
        unn(writes, to_umap(pixels_written(u)));
      cout << "Pixels read by " << u << " = " << str(pixels_read(u)) << endl;
      reads =
        unn(reads, pixels_read(u));
      domain =
        unn(domain, to_uset(compute_domain(u)));
    }

    assert(domain != nullptr);
    assert(writes != nullptr);
    assert(reads != nullptr);

    cout << "reads  :" << str(reads) << endl;
    cout << "writes :" << str(writes) << endl;

    // Relative order of accesses for each op must be the same
    umap* rel_order = isl_union_map_read_from_str(ctx, "{}");
    for (auto update : sort_updates()) {
      auto op_sched = its(naive_sched, compute_domain(update));
      auto op_order = lex_lt(op_sched, op_sched);
      rel_order = unn(rel_order, op_order);
    }

    cout << "rel order: " << str(rel_order) << endl;
    //assert(false);

    isl_union_map *validity =
      its(dot(writes, inv(reads)), before);
    cout << "validity: " << str(validity) << endl;

    cout << "validity maps..." << endl;
    for (auto m : get_maps(validity)) {
      cout << tab(1) << str(m) << endl;
      cout << tab(2) << str(lexmin(m)) << endl;
    }
    //assert(false);
    validity = unn(validity, rel_order);

    isl_union_map *proximity =
      cpy(validity);

    //auto opt_map = experimental_opt(domain, validity, proximity);

    auto finite_domain = cpy(domain);
    //domain = unn(domain, isl_union_set_universe(cpy(domain)));
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto schedmap = its(isl_schedule_get_map(sched), finite_domain);

    assert(schedmap != nullptr);
    cout << "Final isl schedule: " << str(schedmap) << endl;
    cout << "C code; " << codegen_c(schedmap) << endl;
    //assert(false);
    
    isl_options_set_schedule_algorithm(ctx, ISL_SCHEDULE_ALGORITHM_ISL);

    return schedmap;
  }

  umap* schedule_naive() {
    
    map<string, vector<QExpr> > schedules;
    int pos = 0;
    for (auto f : sort_updates()) {
      schedules[f].push_back(qexpr(pos));
      for (int i = 0; i < schedule_dimension(); i++) {
        schedules[f].push_back(qexpr("d" + str(schedule_dimension() - i - 1)));
      }
      pos++;
    }

    // TODO: Replace with umap
    umap* m = rdmap(ctx, "{}");
    for (auto fn : schedules) {
      string f = fn.first;
      vector<string> sched_exprs;
      vector<string> var_names;
      int i = 0;
      for (auto v : map_find(f, schedules)) {
        string dv = "d" + to_string(i);
        sched_exprs.push_back(isl_str(v));
        var_names.push_back(dv);
        i++;
      }
      var_names.pop_back();
      string map_str = "{ " + f + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";

      auto rm = rdmap(ctx, map_str);
      m = unn(m, rm);
      isl_union_map_free(rm);
    }

    return m;
  }

  //Window data_window_provided_by_compute(const std::string& update, const int unroll_factor) {
  Window data_window_provided_by_compute(const std::string& update) {
    for (auto f : app_dag) {
      for (auto u : f.second.updates) {
        if (u.name() == update) {
          //return u.get_provided().unroll_cpy(unroll_factor);
          return u.get_provided().unroll_cpy(u.unroll_factor);
        }
      }
    }
    cout << "Error: No update named " << update << " in app" << endl;
    assert(false);
    return {};
  }

  Window data_window_needed_by_one_compute_lane(const std::string& consumer,
      const std::string& producer) {
    return box_touched(consumer, producer);
  }

  Window data_window_needed_by_compute(const std::string& consumer,
      const std::string& producer) {
      //const int unroll_factor) {
    //return box_touched(consumer, producer).unroll_cpy(unroll_factor);
    return box_touched(consumer, producer).unroll_cpy(get_update(consumer).unroll_factor);
  }

  //map<string, UBuffer> build_buffers(umap* m, const int unroll_factor) {
  map<string, UBuffer> build_buffers(umap* m) {
    auto sorted_functions = sort_functions();
    vector<string> var_names;
    for (int i = 0; i < schedule_dimension(); i++) {
      string dv = "d" + to_string(i);
      var_names.push_back(dv);
    }

    // Generate re-use buffers
    map<string, UBuffer> buffers;
    for (auto f : sorted_functions) {
      cout << "Adding buffer: " << f << endl;
      UBuffer b;
      b.ctx = ctx;
      b.name = f;

      // Create write ports
      for (auto u : app_dag.at(f).updates) {
        isl_set* domain =
          compute_domain(u.name());
        isl_union_map* sched =
          its(m, domain);

        //Window write_box = data_window_provided_by_compute(u.name(), unroll_factor);
        //Window write_box = data_window_provided_by_compute(u.name(), u.unroll_factor);
        Window write_box = data_window_provided_by_compute(u.name());
        int i = 0;
        cout << "Write box for: " << f << " has " << write_box.pts().size() << " points in it" << endl;
        for (auto p : write_box.pts()) {
          vector<string> coeffs;
          for (auto e : p) {
            coeffs.push_back(isl_str(e));
          }
          cout << "Coeffs: " << sep_list(coeffs, "[", "]", ", ") << endl;
          auto access_map =
            rdmap(ctx, "{ " + u.name() + "[" + comma_list(var_names) + "] -> " +
                f + sep_list(coeffs, "[", "]", ", ") + " }");
          string pt_name = f + "_" + u.name() + "_write" + to_string(i);
          b.add_in_pt(pt_name, domain, its(to_map(access_map), domain), sched);
          i++;
          b.port_bundles[u.name() + "_write"].push_back(pt_name);
        }
        cout << "Port bundle has " << b.port_bundles[u.name() + "_write"].size() << " ports in it" << endl;
      }

      for (auto consumer : consumers(f)) {
        cout << "Getting consumer compute domain: " << consumer << endl;
        for (auto u : app_dag.at(consumer).updates) {
          isl_set* domain =
            compute_domain(u.name());
          isl_union_map* sched =
            its(m, domain);

          cout << "Getting map from " << u.name() << " to " << consumer << endl;

          //Window f_win = data_window_needed_by_compute(u.name(), f, unroll_factor);
          Window f_win = data_window_needed_by_compute(u.name(), f);
          cout << "f_win = " << f_win << endl;

          int i = 0;
          for (auto p : f_win.pts()) {
            vector<string> coeffs;
            for (auto e : p) {
              coeffs.push_back(isl_str(e));
            }
            cout << "Coeffs: " << sep_list(coeffs, "[", "]", ", ") << endl;
            auto access_map =
              rdmap(ctx, "{ " + u.name() + "[" + comma_list(var_names) + "] -> " +
                  f + sep_list(coeffs, "[", "]", ", ") + " }");
            cout << "Access map: " << str(access_map) << endl;
            string pt_name = consumer + "_rd" + to_string(i);
            b.add_out_pt(pt_name, domain, its(to_map(access_map), domain), sched);
            i++;
            b.port_bundles[u.name() + "_read"].push_back(pt_name);
          }
        }
      }

      buffers[f] = b;
    }

    //for (auto b : buffers) {
        //cout << b.second.name << endl;
        //cout << "input_ports..." << endl;
        //for (auto in_port: b.second.get_in_ports()) {
            //cout << "\t" << in_port << " access map: " << str(b.second.access_map.at(in_port)) << endl;
            //cout << "\t" << in_port << " schedule  : " << str(b.second.schedule.at(in_port)) << endl;
            //cout << endl;
        //}

        //cout << "output_ports..." << endl;
        //for (auto in_port: b.second.get_out_ports()) {
            //cout << "\t" << in_port << " access map: " << str(b.second.access_map.at(in_port)) << endl;
            //cout << "\t" << in_port << " schedule  : " << str(b.second.schedule.at(in_port)) << endl;
            //cout << endl;
        //}
    //}

    return buffers;
  }

  //map<string, UBuffer> build_buffers(umap* m) {
    //return build_buffers(m, 1);
  //}

  //void populate_program(CodegenOptions& options, prog& prg, const string& name, umap* m, map<string, UBuffer>& buffers, const int unroll_factor) {
  void populate_program(CodegenOptions& options, prog& prg, const string& name, umap* m, map<string, UBuffer>& buffers) {

    uset* whole_dom =
      isl_union_set_read_from_str(ctx, "{}");
    assert(whole_dom != nullptr);
    auto sorted_functions = sort_functions();
    for (auto u : sort_updates()) {
      whole_dom =
        unn(whole_dom, to_uset(compute_domain(u)));
    }

    auto action_domain = cpy(whole_dom);
    map<string, isl_set*> domain_map;
    for (auto f : sorted_functions) {
      for (auto u : app_dag.at(f).updates) {
        if (u.get_srcs().size() == 0) {
          prg.ins.insert(f);
          //u.name());
          action_domain =
            isl_union_set_subtract(action_domain,
                to_uset(compute_domain(u.name())));
        } else {
          Box compute_b =
            compute_box(u.name());
          op* nest = prg.root;
          int i = 0;
          for (auto r : compute_b.intervals) {
            nest = nest->add_nest(f + "_" + to_string(i), r.min, r.max + 1);
            i++;
          }
          auto op = nest->add_op(u.name());
          cout << "added op " << op->name << endl;
          // TODO: Replace with real description of apps
          op->add_store(f, "0, 0");

          vector<string> fargs;
          for (auto p : u.get_srcs()) {
            cout << tab(1) << " op loads " << p.name << endl;
            op->add_load(p.name, "0, 0");
            if (!elem(p.name, fargs)) {
              fargs.push_back(p.name);
            }
          }
          //if (unroll_factor == 1) {
          if (u.unroll_factor == 1) {
            op->add_function(u.compute_name());
          } else {
            //op->add_function(u.compute_name() + "_unrolled_" + to_string(unroll_factor));
            op->add_function(u.compute_name() + "_unrolled_" + str(u.unroll_factor));
          }
          domain_map[u.name()] =
            compute_domain(u.name());
        }
      }
    }

    cout << "Op consume / produce locs..." << endl;
    for (auto op : prg.all_ops()) {
      cout << "### " << op->name << endl;
      for (auto l : op->produce_locs) {
        cout << tab(1) << l.first << endl;
      }
      //cout << "Consume..." << endl;
      for (auto l : op->consume_locs) {
        cout << tab(1) << l.first << endl;
      }
    }

    //assert(false);
    prg.outs = {name};

    generate_app_code(options, buffers, prg, its(m, action_domain), domain_map);
    generate_regression_testbench(prg);


  }

  umap* realize_opt_schedule(const std::string& name, const int d0, const int d1) {
    const int unroll_factor = 1;
    set_unroll_factors(unroll_factor);
    fill_data_domain(name, d0, d1);
    fill_compute_domain();

    umap* m =
      schedule();
    return m;
  }

  umap* realize_isl_schedule(const std::string& name, const int d0, const int d1)  {
    const int unroll_factor = 1;
    set_unroll_factors(unroll_factor);
    fill_data_domain(name, d0, d1);
    fill_compute_domain();

    umap* m =
      schedule_isl();
    return m;
  }

  void realize_naive(CodegenOptions& options, const std::string& name, const int d0, const int d1) {
    const int unroll_factor = 1;
    set_unroll_factors(unroll_factor);
    cout << "Realizing: " << name << " on " << d0 << ", " << d1 << " with unroll factor: " << unroll_factor << endl;
    fill_data_domain(name, d0, d1);
    fill_compute_domain();

    umap* m =
      schedule_isl();

    cout << "Schedule: " << str(m) << endl;

    map<string, UBuffer> buffers = build_buffers(m);

    prog prg;
    prg.name = name + "_naive";
    prg.compute_unit_file = "conv_3x3.h";
    populate_program(options, prg, name, m, buffers);

    return;
  }

  void realize_naive(const std::string& name, const int d0, const int d1) {
    CodegenOptions options;
    options.internal = true;
    options.all_rams = true;

    realize_naive(options, name, d0, d1);
  }

  map<string, vector<QExpr> > schedule_opt() {

    map<string, vector<QExpr> > schedules =
      rectangular_schedules();

    int pos = 0;
    cout << "Sorted pipeline..." << endl;
    for (auto f : sort_updates()) {
      cout << "\t" << f << endl;
      schedules[f].push_back(qexpr(pos));
      pos++;
    }
    return schedules;
  }

  umap* schedule() {
    auto schedules = schedule_opt();

    umap* m = rdmap(ctx, "{}");
    for (auto fn : schedules) {
      string f = fn.first;
      vector<string> sched_exprs;
      vector<string> var_names;
      int i = 0;
      for (auto v : map_find(f, schedules)) {
        string dv = "d" + to_string(i);
        sched_exprs.push_back(isl_str(v));
        var_names.push_back(dv);
        i++;
      }
      var_names.pop_back();
      string map_str = "{ " + f + sep_list(var_names, "[", "]", ", ") + " -> " + sep_list(sched_exprs, "[", "]", ", ") + " }";

      auto rm = rdmap(ctx, map_str);
      m = unn(m, rm);
      isl_union_map_free(rm);
    }

    return m;
  }

  string unrolled_compute_name(const string& f) {
    return map_find(f, app_dag).unrolled_compute_name();
  }

  string compute_name(const string& f) {
    return map_find(f, app_dag).compute_name();
  }

  //void generate_compute_unit_file(const std::string& filename, const int unroll_factor) {
  void generate_compute_unit_file(const std::string& filename) {
    ofstream cfile(filename);
    cfile << "#pragma once" << endl << endl;
    cfile << "#include \"conv_3x3.h\"" << endl << endl;

    set<string> already_seen;
    for (auto f : sort_functions()) {
      if (producers(f).size() == 0) {
        continue;
      }

      if (elem(unrolled_compute_name(f), already_seen)) {
        continue;
      }

      for (auto u : app_dag.at(f).updates) {
        cfile << tab(1) << "// " << u.name() << " unroll factor: " << u.unroll_factor << endl;
        int fwidth = 32;
        //int out_width = unroll_factor*fwidth;
        int out_width = u.unroll_factor*fwidth;
        vector<pair<int, string> > args_and_widths;
        for (auto p : producers(f)) {
          int arg_width = 32;
          //args_and_widths.push_back({arg_width*data_window_needed_by_compute(u.name(), p.name, unroll_factor).pts().size(), p.name});
          args_and_widths.push_back({arg_width*data_window_needed_by_compute(u.name(), p.name).pts().size(), p.name});
        }

        vector<string> arg_decls;
        for (auto a : args_and_widths) {
          arg_decls.push_back("hw_uint<" + to_string(a.first) + ">& " + a.second);
        }

        string out_type_string = "hw_uint<" + to_string(out_width) + "> ";
        //cfile << out_type_string << " " << compute_name(f) << "_unrolled_" << unroll_factor << sep_list(arg_decls, "(", ")", ", ") << " {" << endl;
        //cfile << out_type_string << " " << compute_name(f) << "_unrolled_" << u.unroll_factor << sep_list(arg_decls, "(", ")", ", ") << " {" << endl;
        cfile << out_type_string << " " << unrolled_compute_name(f) << sep_list(arg_decls, "(", ")", ", ") << " {" << endl;
        cfile << tab(1) << "hw_uint<" << out_width << "> whole_result;" << endl;
        //for (int lane = 0; lane < unroll_factor; lane++) {
        for (int lane = 0; lane < u.unroll_factor; lane++) {
          vector<string> arg_names;
          for (auto arg : args_and_widths) {

            int arg_width = 32;

            string p = arg.second;
            //Window arg_input_window = data_window_needed_by_compute(u.name(), p, unroll_factor);
            Window arg_input_window = data_window_needed_by_compute(u.name(), p);
            string arg_name = "lane_" + to_string(lane) + "_" + p;

            arg_names.push_back(arg_name);
            cout << "getting window for " << u.name() << endl;
            Window win_needed =
              data_window_needed_by_one_compute_lane(u.name(), p).increment(lane);
            cout << "Win needed: " << win_needed << endl;

            cfile << tab(1) << "hw_uint<" << win_needed.pts().size()*arg_width << "> " << arg_name << ";" << endl;
            int win_pos = 0;
            for (auto off : win_needed.offsets) {
              cfile << tab(1) << "// Need offset: " << str(off) << endl;
              int npts = win_needed.pts().size()*arg_width;
              for (int i = 0; i < arg_input_window.offsets.size(); i++) {
                if (arg_input_window.offsets.at(i) == off) {
                  int base = i*arg_width;
                  int end = (i + 1)*arg_width - 1;
                  cfile << tab(1) << "set_at<" << win_pos*arg_width << ", " << npts << ">(" << arg_name << ", " << p << ".extract<" << base << ", " << end << ">());" << endl;
                }
              }
              win_pos++;
            }
          }
          cfile << tab(1) << "auto result_" << lane << " = " << compute_name(f) << "(" << comma_list(arg_names) << ");" << endl;
          cfile << tab(1) << "set_at<" << fwidth*lane << ", " << out_width << ">(whole_result, result_" << lane << ");" << endl;
        }
        cfile << tab(1) << " return whole_result;" << endl;
        cfile << "}" << endl << endl;

        already_seen.insert(unrolled_compute_name(f));
      }
    }

    cfile.close();
  }

  bool is_external(const string& update) {
    for (auto f : app_dag) {
      for (auto u : f.second.updates) {
        if (u.name() == update) {
          return u.get_srcs().size() == 0;
        }
      }
    }

    cout << "No source for update " << update << endl;
    assert(false);
    return false;
  }

  //void schedule_and_codegen(const std::string& name, const int unroll_factor) {
  void schedule_and_codegen(const std::string& name) {
    umap* m = schedule();
    assert(m != nullptr);

    cout << "Schedule: " << str(m) << endl;

    //auto scheds_n =
      //schedule_opt();

    map<string, vector<QExpr> > scheds =
      schedule_opt();
    //for (auto s : scheds_n) {
      ////scheds[s.first + "_comp"] = s.second;
      //scheds[s.first] = s.second;
    //}
    
    map<string, Box> compute_domains;
    vector<string> ops;
    for (auto u : sort_updates()) {
      if (!is_external(u)) {
        ops.push_back(u);
        compute_domains[u] = compute_box(u);
      }
    }

    //for (auto f : sort_functions()) {
      //if (app_dag.at(f).get_srcs().size() != 0) {
        //ops.push_back(f + "_comp");
        //compute_domains[f + "_comp"] =
          //compute_box(f);
      //}
    //}

    //assert(false);
    string cgn = box_codegen(ops, scheds, compute_domains);
    //string cgn = "";

    map<string, UBuffer> buffers = build_buffers(m);
     //, unroll_factor);

    uset* whole_dom =
      isl_union_set_read_from_str(ctx, "{}");
    assert(whole_dom != nullptr);
    auto sorted_functions = sort_functions();
    for (auto u : sort_updates()) {
      whole_dom =
        unn(whole_dom, to_uset(compute_domain(u)));
    }
    //auto sorted_functions = sort_functions();
    //for (auto f : sorted_functions) {
      //whole_dom =
        //unn(whole_dom, to_uset(compute_domain(f)));
    //}

    CodegenOptions options;
    options.internal = true;
    options.simplify_address_expressions = true;
    options.use_custom_code_string = true;
    options.code_string = cgn;

    prog prg;
    prg.name = name + "_opt";
    prg.compute_unit_file = prg.name + "_compute_units.h";
    //generate_compute_unit_file(prg.compute_unit_file, unroll_factor);
    generate_compute_unit_file(prg.compute_unit_file);

    auto action_domain = cpy(whole_dom);
    map<string, isl_set*> domain_map;
    for (auto f : sorted_functions) {
      for (auto u : app_dag.at(f).updates) {
        if (u.get_srcs().size() == 0) {
          prg.ins.insert(f);
          //u.name());
          action_domain =
            isl_union_set_subtract(action_domain,
                to_uset(compute_domain(u.name())));
        } else {
          Box compute_b =
            compute_box(u.name());
          op* nest = prg.root;
          int i = 0;
          for (auto r : compute_b.intervals) {
            nest = nest->add_nest(f + "_" + to_string(i), r.min, r.max + 1);
            i++;
          }
          auto op = nest->add_op(u.name());
          // TODO: Replace with real description of apps
          op->add_store(f, "0, 0");

          vector<string> fargs;
          for (auto p : u.get_srcs()) {
            op->add_load(p.name, "0, 0");
            if (!elem(p.name, fargs)) {
              fargs.push_back(p.name);
            }
          }
          if (u.unroll_factor == 1) {
            op->add_function(u.compute_name());
          } else {
            op->add_function(u.compute_name() + "_unrolled_" + to_string(u.unroll_factor));
          }
          domain_map[u.name()] =
            compute_domain(u.name());
        }
      }
    }
    prg.outs = {name};

    generate_app_code(options, buffers, prg, its(m, action_domain), domain_map);
    generate_regression_testbench(prg, buffers);

    return;
  }

  void set_unroll_factors(const int unroll_factor) {
    for (auto& r : app_dag) {
      for (auto& u : r.second.updates) {
        u.unroll_factor = unroll_factor;
      }
    }
  }

  void realize(const std::string& name, const int d0, const int d1) {
    fill_data_domain(name, d0, d1);
    fill_compute_domain();
    schedule_and_codegen(name);
  }

  void realize(const std::string& name, const int d0, const int d1, const int unroll_factor) {
    cout << "Realizing: " << name << " on " << d0 << ", " << d1 << " with unroll factor: " << unroll_factor << endl;
    set_unroll_factors(unroll_factor);
    //fill_data_domain(name, d0, d1, unroll_factor);
    fill_data_domain(name, d0, d1);
    fill_compute_domain();
    //schedule_and_codegen(name, unroll_factor);
    schedule_and_codegen(name);
  }

};


void memtile_test() {

  prog prg;
  prg.compute_unit_file = "accumulate_3.h";
  prg.name = "memtile";
  prg.add_input("in");
  prg.add_output("out");
  //prg.buffer_port_widths["T"] = 32*3;
  prg.buffer_port_widths["in"] = 32;
  prg.buffer_port_widths["out"] = 32;
  prg.buffer_port_widths["agg"] = 32;
  prg.buffer_port_widths["tb"] = 32;
  prg.buffer_port_widths["sram"] = 32;

  /* this program will be a test of memory tile flatten,
   * I hand written the memory access pattern after vectorization
   * and see if the Polyhedra analysis could figure out the
   * correct schedule and memory size for me.
   * */


  {
    auto agg_loop = prg.add_nest("po", 0, 8, "pi", 0, 2, "dummy", 0, 4);
    //auto agg_loop = prg.add_nest("po", 0, 8, "pi", 0, 8);
    auto agg = agg_loop->add_op("in2agg");
    agg->add_load("in", "po, 4*pi+dummy");
    agg->add_store("agg", "po, 4*pi+dummy");
    //agg->add_load("in", "po, pi");
    //agg->add_store("agg", "po, pi");
  }

  {
    //auto sram_loop = prg.add_nest("qo", 0, 8, "qi", 0, 2, "dummy0", 0 ,1);
    auto sram_loop = prg.add_nest("qo", 0, 8, "qi", 0, 2);
    auto sram = sram_loop->add_op("agg2sram");
    sram->add_load("agg", "qo, qi*4");
    sram->add_load("agg", "qo, qi*4+1");
    sram->add_load("agg", "qo, qi*4+2");
    sram->add_load("agg", "qo, qi*4+3");

    sram->add_store("sram", "qo, qi*4");
    sram->add_store("sram", "qo, qi*4+1");
    sram->add_store("sram", "qo, qi*4+2");
    sram->add_store("sram", "qo, qi*4+3");
  }

  {
    auto tb_loop = prg.add_nest("k", 0, 6, "l", 0, 2, "m", 0, 3);
    auto tb = tb_loop->add_op("sram2tb");
    tb->add_load("sram", "(k+m), l*4");
    tb->add_load("sram", "(k+m), l*4+1");
    tb->add_load("sram", "(k+m), l*4+2");
    tb->add_load("sram", "(k+m), l*4+3");


    tb->add_store("tb", "k, m, l*4");
    tb->add_store("tb", "k, m, l*4+1");
    tb->add_store("tb", "k, m, l*4+2");
    tb->add_store("tb", "k, m, l*4+3");
  }

  {
    auto out_loop = prg.add_nest("a", 0, 6, "b", 0, 2, "c", 0, 4);
    auto out = out_loop->add_op("tb2out");
    out->add_load("tb", "a, 0, 4*b + c");
    out->add_load("tb", "a, 1, 4*b + c");
    out->add_load("tb", "a, 2, 4*b + c");

    out->add_store("out", "a, 0, 4*b+c");
    out->add_store("out", "a, 1, 4*b+c");
    out->add_store("out", "a, 2, 4*b+c");
  }

  auto sched = prg.unoptimized_schedule();
  cout << codegen_c(sched) << endl;
  auto itr_domain = prg.whole_iteration_domain();
  cout << "iter domain = " << str(itr_domain) << endl;

  //auto sched_opt = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());
  auto domain_boxes = prg.get_domain_boxes();
  map<string, Box> op_boxes;
  for (auto b : domain_boxes) {
      op_boxes[b.first->name] = b.second;
      cout << tab(1) << b.first->name << "->" << b.second << endl;
  }

  vector<string> sorted_functions = {"in2agg", "agg2sram", "sram2tb", "tb2out"};
  int ndims = 3;
  map<string, vector<QExpr> > schedules;
  map<string, Result> app_dag;
  for (auto func : sorted_functions) {
      Result res;
      app_dag[func] = {};
  }
  map<string, isl_map*> compute_maps;
  map<string, pair<isl_map*, string>> read_maps;
  for (auto cm : prg.producer_maps_new()) {
      compute_maps[cm.first] = inv(cm.second);
      cout << tab(1) << "Producer map: " << cm.first << "->" << str(cm.second) << endl;
  }

  for (auto cm : prg.consumer_maps_new()) {
      read_maps[cm.first->name] = cm.second;
      cout << tab(1) << "Consumer map: " << cm.first->name << "->" << str(cm.second.first) << ", read buffer = " << cm.second.second << endl;
  }

  /*for (auto cm : prg.data_demands_maps()) {
      app_dag[cm.first] = cm.second;
      cout << tab(1) << "DATA demands map: " << cm.first<< "->" << str(app_dag[cm.first].srcs.at(0).needed) << endl;
  }*/

  umap* compute_deps = rdmap(prg.ctx, "{}");

  for (auto f : sorted_functions) {
        assert(contains_key(f, read_maps));
        auto arg_pair = read_maps.at(f);

        string buffer_name = arg_pair.second;
        auto data_read = arg_pair.first;

        //first function no predcessor
        if (!contains_key(buffer_name, compute_maps))
            continue;

        isl_map* map_write = compute_maps.at(buffer_name);
        cout << tab(1) << "write map: " << str(map_write) << endl;

        //auto data_needed = to_map(arg.needed);

        cout << tab(1) << "read map: " << str(data_read) << endl;

        isl_map* st_dependency =
            dot(data_read, map_write);

          cout << "statement dependency: " << str(st_dependency) << endl;

          /*assert(contains_key(arg.name, compute_maps));
          isl_map* a_cm = compute_maps.at(arg.name);
          cout << "a_cm: " << str(a_cm) << endl;

          isl_map* comps_needed =
            dot(pixels_needed, a_cm);
          cout << "comps needed: " << str(comps_needed) << endl;*/
          isl_map* last_pix =
            lexmax(st_dependency);
          cout << "last comp needed: " << str(last_pix) << endl;
          compute_deps = unn(compute_deps, to_umap(inv(st_dependency)));
          //auto max = dim_max(st_dependency, i);
          //cout << "max needed in dim " << i << " = " << str(max) << endl;
  }
  {
    cout<<endl << "Compute dependency: " << str(compute_deps) << endl << endl;
    auto validity = cpy(unn(compute_deps, prg.relative_orders()));
    auto proximity = cpy(compute_deps);
    auto operations = prg.whole_iteration_domain();
    //cout << "operations: " << str(operations) << endl;
    //cout << "number of nodes in opteration graph: " << str(card(operations)) << endl;
    auto sched_opt_tree = isl_union_set_compute_schedule(operations, validity, proximity);
    auto sched_opt = isl_schedule_get_map(sched_opt_tree);
    sched_opt = its(sched_opt, prg.whole_iteration_domain());
    cout << codegen_c(sched_opt) << endl;
    /*for (int i = ndims - 1; i >= 1; i--) {
        schedule_dim(prg.ctx, op_boxes, i, schedules, sorted_functions, read_maps,  compute_maps);
    }*/

    //Start generate the config
    //TODO: hacky first try, based on my understanding of the configuration register
    //FIXME: there is config register related to the memory size, no need to use schedule result
    auto buffers = build_buffers(prg, sched_opt);

    cout << "\n***Dump configuration file into CSV***" << endl;
    memtile_config memtile;
    memtile.extract_config(buffers);
    memtile.emit_config_file_csv("lake_memtile_config_conv33");
    //assert(false);
  }

  int pos = 0;
  cout << "Sorted pipeline..." << endl;
  for (auto f : sorted_functions) {
    cout << "\t" << f << endl;
    schedules[f].push_back(qexpr(pos));
    pos++;
  }

  //auto sched_opt = its(to_umap(prg.ctx, schedules, sorted_functions, ""), prg.whole_iteration_domain());
  /*auto sched_opt = to_umap(prg.ctx, schedules, sorted_functions, "");

  //auto sched_opt = its(rdmap(prg.ctx, "{in2agg[root, po, pi] -> [root, po, pi, 0]; agg2sram[root, qo, qi] -> [root, qo, 3+4*qi, 1]}"), prg.whole_iteration_domain());
  cout << "Sched map:\n " << str(sched_opt) << endl;
  cout << "Iter Domain:\n " << str(prg.whole_iteration_domain()) << endl;
  sched_opt = its(sched_opt, prg.whole_iteration_domain());
  cout << "After opt Sched map:\n " << str(sched_opt) << endl;*/
  auto sched_opt = isl_schedule_get_map(prg.optimized_schedule());
  sched_opt = its(sched_opt, prg.whole_iteration_domain());
  cout << codegen_c(sched_opt) << endl;
  //assert(false);
  //aha_talk_print_info(prg);
}

Window win(const std::string& name, const std::vector<vector<int > >& offsets) {
  assert(offsets.size() > 0);
  size_t ndims = offsets.at(0).size();
  vector<int> strides;
  for (size_t i = 0; i < ndims; i++) {
    strides.push_back(1);
  }
  return Window{name, strides, offsets};
}

Window stencil(int xl, int xr, int yl, int yr, const std::string& name) {
  vector<vector<int> > offsets;
  for (int i = xl; i <= xr; i++) {
    for (int j = yl; j <= yr; j++) {
      offsets.push_back({i, j});
    }
  }
  return Window{name, {1, 1}, offsets};
}

Window downsample(const int factor, const std::string& name) {
  return Window{name, {qconst(factor), qconst(factor)}, {{0, 0}}};
}

Window upsample(const int factor, const std::string& name) {
  return Window{name, {qconst(1, factor), qconst(1, factor)}, {{0, 0}}};
}

Window pt(const std::string& name) {
  return Window{name, {1, 1}, {{0, 0}}};
}

Window pt3(const std::string& name) {
  return Window{name, {1, 1, 1}, {{0, 0, 0}}};
}

void updown_merge_test() {
  App ds;
  ds.func2d("A_off");
  ds.func2d("B_off");

  ds.func2d("A", "id", "A_off", {1, 1}, {{0, 0}});
  ds.func2d("B", "id", "B_off", {1, 1}, {{0, 0}});

  Window awin("A", {qconst(1, 2), qconst(1, 5)}, {{0, 0}});
  Window bwin("B", {qconst(4), qconst(3)}, {{0, 0}});
  ds.func2d("C", "diff", {awin, bwin});

  ds.realize("C", 10, 10, 1);

  int res = system("g++ -std=c++11 -c C_opt.cpp");
  assert(res == 0);
}

void upsample2d_test() {
  App ds;
  ds.func2d("A");
  Window awin("A", {qconst(1, 2), qconst(1, 5)}, {{0, 0}});
  ds.func2d("B", "id", awin);
  ds.realize("B", 10, 10, 1);

  int res = system("g++ -std=c++11 -c B_opt.cpp");
  assert(res == 0);
}

void downsample2d_test() {
  App ds;
  ds.func2d("A");
  Window awin{"A", {2, 2}, {{0, 0}}};
  ds.func2d("B", "id", awin);
  ds.realize("B", 10, 10, 1);

  int res = system("g++ -std=c++11 -c B_opt.cpp");
  assert(res == 0);
}

void mismatched_stencil_test() {
  App sobel;

  sobel.func2d("off_chip_img0");
  sobel.func2d("img0", "id", "off_chip_img0", {1, 1}, {{0, 0}});

  sobel.func2d("off_chip_img1");
  sobel.func2d("img1", "id", "off_chip_img1", {1, 1}, {{0, 0}});

  Window xwindow{"img0", {1, 1}, {{0, 0}, {1, 0}, {2, 0}}};
  Window ywindow{"img1", {1, 1}, {{0, 0}, {1, 0}}};
  sobel.func2d("mismatched_stencils", "contrived", {xwindow, ywindow});

  int size = 1920;
  sobel.realize("mismatched_stencils", size, 1, 1);
  sobel.realize_naive("mismatched_stencils", size, 1);

  std::vector<std::string> naive =
    run_regression_tb("mismatched_stencils_naive");
  cout << "Naive    : " << naive << endl;
  std::vector<std::string> optimized =
    run_regression_tb("mismatched_stencils_opt");
  cout << "Optimized: " << optimized << endl;
  assert(naive == optimized);

}

void conv_app_rolled_reduce_test() {
  App cv;
  cv.func2d("Img_off_chip");
  cv.func2d("Img", "id", pt("Img_off_chip"));

  vector<QAV> dim_strides{qconst(1), qconst(1)};
  vector<QAV> reduce_strides{qconst(1), qconst(1)};

  vector<vector<int> > offsets{{0, 0}};
  Box reduce_ranges;
  reduce_ranges.intervals.push_back({0, 2});
  reduce_ranges.intervals.push_back({0, 2});
  Window img_win{"Img", dim_strides, reduce_strides, offsets};

  vector<Window> empty;
  cv.func2d("reduce_conv", "zero", empty);
  cv.update("reduce_conv", "add", "id", {img_win}, reduce_ranges);
  cv.realize("reduce_conv", 32, 32, 1);

  //assert(false);
}

vector<string> gauss_pyramid(const int num_levels, const string& func, App& app) {
  string last = func;
  vector<string> gauss_levels;
  gauss_levels.push_back(last);
  for (int l = 1; l < num_levels; l++) {
    string next_blur = func + "_gauss_blur_" + str(l);
    string next_out = func + "_gauss_ds_" + str(l);

    vector<vector<int > > offsets;
    for (int r = 0; r < 3; r++) {
      for (int c = 0; c < 3; c++) {
        offsets.push_back({c, r});
      }
    }

    Window blur_window{last, {qconst(1), qconst(1)}, offsets};
    app.func2d(next_blur, "reduce_gauss", blur_window);
    app.func2d(next_out, "id", next_blur, {qconst(2), qconst(2)}, {{0, 0}});
 
    last = next_out;
    gauss_levels.push_back(last);
  }

  assert(gauss_levels.size() == num_levels);

  return gauss_levels;
}

vector<string> laplace_pyramid(const int num_levels, const string& func, App& app) {
  auto gauss_levels = gauss_pyramid(num_levels, func, app);

  vector<string> laplace_levels;
  for (int l = 0; l < num_levels - 1; l++) {
    string larger_image = gauss_levels.at(l);
    string smaller_image = gauss_levels.at(l + 1);

    string next_us = func + "_laplace_us_" + str(l);
    string next_out = func + "_laplace_diff_" + str(l);
   
    // Upsample the image
    app.func2d(next_us, "id", smaller_image, {qconst(1, 2), qconst(1, 2)}, {{0, 0}});

    Window ad{larger_image, {qconst(1), qconst(1)}, {{0, 0}}};
    Window ud{next_us, {qconst(1), qconst(1)}, {{0, 0}}};
    app.func2d(next_out, "diff", {ad, ud});
 
    laplace_levels.push_back(next_out);
  }

  laplace_levels.push_back(gauss_levels.back());

  assert(laplace_levels.size() == num_levels);

  return laplace_levels;
}

void up_stencil_down_unrolled_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", {pt("in_off_chip")});

  lp.func2d("us", "id", {upsample(2, "in")});
  lp.func2d("stencil", "conv_3_3", {stencil(-1, 1, -1, 1, "us")});
  lp.func2d("ds", "id", {downsample(2, "stencil")});

  int size = 16;
  lp.realize_naive("ds", size, size);
  auto naive = run_regression_tb("ds_naive");

  lp.unroll("us", 4);
  lp.unroll("stencil", 2);

  lp.realize("ds", size, size);
  auto opt = run_regression_tb("ds_opt");

  assert(opt == naive);
  assert(false);
}

void exposure_fusion() {
  App lp;
  // The off chip input we are reading from
  lp.func2d("in_off_chip");

  // The temporary buffer we store the input image in
  lp.func2d("in", "id", pt("in_off_chip"));

  // Two synthetic exposures
  lp.func2d("bright", "id", pt("in"));
  lp.func2d("dark", "scale_exposure", pt("in"));

  // Compute weights which measure the "quality" of
  // pixels in each image
  lp.func2d("bright_weights", "exposure_weight", pt("bright"));
  lp.func2d("dark_weights", "exposure_weight", pt("dark"));

  // Normalize weights so that the weight matrices entries sum to one
  lp.func2d("weight_sums", "add", {pt("dark_weights"), pt("bright_weights")});
  lp.func2d("bright_weights_normed", "f_divide", pt("bright_weights"), pt("weight_sums"));
  lp.func2d("dark_weights_normed", "f_divide", pt("dark_weights"), pt("weight_sums"));


  // Create pyramids of the weights
  auto dark_weight_pyramid = gauss_pyramid(4, "dark_weights_normed", lp);
  auto bright_weight_pyramid = gauss_pyramid(4, "bright_weights_normed", lp);

  // Create laplacian pyramids of the synthetic exposures
  auto dark_pyramid = laplace_pyramid(4, "dark", lp);
  auto bright_pyramid = laplace_pyramid(4, "bright", lp);

  // Merge weighted pyramids
  vector<string> merged_images;
  for (int i = 0; i < dark_pyramid.size(); i++) {
    string fused = "fused_level_" + str(i);
    lp.func2d(fused, "merge_exposures", {pt(bright_pyramid.at(i)),
        pt(dark_pyramid.at(i)), pt(bright_weight_pyramid.at(i)), pt(dark_weight_pyramid.at(i))});
    merged_images.push_back(fused);
  }

  // Collapse the blended pyramid into a single image
  assert(merged_images.size() == 4);
  string image = merged_images.back();
  for (int i = merged_images.size() - 2; i >= 0; i--) {
    string merged_level = "final_merged_" + str(i);
    lp.func2d(merged_level, "add", {upsample(2, image), pt(merged_images.at(i))});
    image = merged_level;
  }

  lp.func2d("pyramid_synthetic_exposure_fusion", "id", pt(image));

  int size =
    //100;
    1250;
    //200;

  auto isl_sched = lp.realize_isl_schedule("pyramid_synthetic_exposure_fusion", size, size);
  auto isl_maps = get_maps(isl_sched);

  auto opt_sched = lp.realize_opt_schedule("pyramid_synthetic_exposure_fusion", size, size);
  auto opt_maps = get_maps(opt_sched);

  cout << "--- ISL Schedule" << endl;
  for (auto m : isl_maps) {
    cout << tab(1) << str(m) <<  endl;
  }
  cout << endl << endl;

  cout << "--- OPT Schedule" << endl;
  for (auto m : opt_maps) {
    cout << tab(1) << str(m) <<  endl;
  }
  cout << endl << endl;

  assert(isl_maps.size() == opt_maps.size());
  cout << "--- MATCHED Schedules" << endl;
  for (auto opt : opt_maps) {
    isl_map* imap = nullptr;
    for (auto isl : isl_maps) {
      if (domain_name(isl) == domain_name(opt)) {
        imap = isl;
        break;
      }
    }
    assert(imap != nullptr);

    cout << tab(1) << "opt: " << str(opt) << endl;
    cout << tab(1) << "isl: " << str(imap) << endl;
    cout << endl;
  }

  //cout << "isl schedule: " << str(isl_sched) << endl;
  //cout << "opt schedule: " << str(opt_sched) << endl;

  assert(false);

  lp.realize("pyramid_synthetic_exposure_fusion", size, size, 1);
  lp.realize_naive("pyramid_synthetic_exposure_fusion", size, size);

  std::vector<std::string> naive =
    run_regression_tb("pyramid_synthetic_exposure_fusion_naive");
  std::vector<std::string> optimized =
    run_regression_tb("pyramid_synthetic_exposure_fusion_opt");
  assert(naive == optimized);

  //assert(false);
}

void laplacian_pyramid_app_test() {
  App lp;
  lp.func2d("in_off_chip");
  lp.func2d("in", "id", pt("in_off_chip"));

  int n_levels = 4;
  string last = "in";
  vector<string> gauss_levels;
  gauss_levels.push_back("in");
  for (int l = 1; l < n_levels + 1; l++) {
    string next_blur = "gauss_blur_" + str(l);
    string next_out = "gauss_ds_" + str(l);

    vector<vector<int > > offsets;
    for (int r = 0; r < 3; r++) {
      for (int c = 0; c < 3; c++) {
        offsets.push_back({c, r});
      }
    }

    Window blur_window{last, {qconst(1), qconst(1)}, offsets};
    lp.func2d(next_blur, "reduce_gauss", blur_window);
    lp.func2d(next_out, "id", next_blur, {qconst(2), qconst(2)}, {{0, 0}});
 
    last = next_out;
    gauss_levels.push_back(last);
  }

  assert(gauss_levels.size() == n_levels + 1);

  vector<string> laplace_levels;
  for (int l = 0; l < n_levels; l++) {
    string larger_image = gauss_levels.at(l);
    string smaller_image = gauss_levels.at(l + 1);

    string next_us = "laplace_us_" + str(l);
    string next_out = "laplace_diff_" + str(l);
   
    // Upsample the image
    lp.func2d(next_us, "id", smaller_image, {qconst(1, 2), qconst(1, 2)}, {{0, 0}});

    Window ad{larger_image, {qconst(1), qconst(1)}, {{0, 0}}};
    Window ud{next_us, {qconst(1), qconst(1)}, {{0, 0}}};
    lp.func2d(next_out, "diff", {ad, ud});
 
    last = next_out;
    laplace_levels.push_back(last);
  }

  vector<Window> blended;
  int level_num = 0;
  for (auto l : laplace_levels) {
    Window lw = pt(l);
    int factor = pow(2, level_num);
    string blend_us = "blend_us_" + l;
    lp.func2d(blend_us, "id", l, {qconst(1, factor), qconst(1, factor)}, {{0, 0}});
    blended.push_back(pt(blend_us));
    level_num++;
  }

  lp.func2d("blended", "blend_levels", blended);

  int size = 32;
  lp.realize("blended", size, size, 1);
  lp.realize_naive("blended", size, size);

  std::vector<std::string> naive =
    run_regression_tb("blended_naive");
  std::vector<std::string> optimized =
    run_regression_tb("blended_opt");
  assert(naive == optimized);

  //assert(false);

}

void gaussian_pyramid_app_test() {
  App gp;

  gp.func2d("in_off_chip");
  gp.func2d("in", "id", pt("in_off_chip"));
  int n_levels = 4;
  string last = "in";
  for (int l = 0; l < n_levels; l++) {
    string next = "level_" + to_string(l);
    vector<vector<int > > offsets;
    for (int r = 0; r < 3; r++) {
      for (int c = 0; c < 3; c++) {
        offsets.push_back({c, r});
      }
    }
    Window last_window{last, {qconst(2), qconst(2)}, offsets};
    gp.func2d(next, "reduce_gauss", last_window);
    last = next;
  }
  gp.realize(last, 32, 32, 1);
  gp.realize_naive(last, 32, 32);

  std::vector<std::string> naive =
    run_regression_tb("level_2_naive");
  //cout << "Naive    : " << naive << endl;
  std::vector<std::string> optimized =
    run_regression_tb("level_2_opt");
  //cout << "Optimized: " << optimized << endl;
  assert(naive == optimized);

  //assert(false);
}

App sobel(const std::string output_name) {
  App sobel;
  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  sobel.func2d("mag_x", "sobel_mx", "img", {1, 1},
      {{1, -1}, {-1, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, 1}});
  sobel.func2d("mag_y", "sobel_my", "img", {1, 1},
      {{-1, 1}, {-1, -1}, {0, 1}, {0, -1}, {1, 1}, {1, -1}});

  Window xwindow{"mag_x", {1, 1}, {{0, 0}}};
  Window ywindow{"mag_y", {1, 1}, {{0, 0}}};
  sobel.func2d("mag", "mag_cu", {xwindow, ywindow});

  return sobel;
}

App seidel(const std::string output_name) {
  App jac;
  jac.func2d("input_arg");
  jac.func2d("input", "id", pt("input_arg"));
  jac.func2d("tmp", "seidel_tmp_comp", "input", {1, 1}, {{-1, 0}, {0, 0}, {1, 0}});
  jac.func2d(output_name, "seidel_output_comp", "input", {1, 1}, {{0, -1}, {0, 0}, {0, 1}});
  return jac;
}

App blurxy(const std::string output_name) {
  App jac;
  jac.func2d("input_arg");
  jac.func2d("input", "id", pt("input_arg"));
  jac.func2d("blurx", "blurx_comp", "input", {1, 1}, {{0, 0}, {0, 1}, {0, 2}});
  jac.func2d(output_name, "blury_comp", "input", {1, 1}, {{0, 0}, {1, 0}, {2, 0}});
  return jac;
}

App jacobi2d(const std::string output_name) {
  App jac;
  jac.func2d("t1_arg");
  jac.func2d("t1", "id", pt("t1_arg"));
  jac.func2d(output_name, "jacobi2d_compute", "t1", {1, 1}, {{0, 1}, {1, 0}, {0, 0}, {0, -1}, {-1, 0}});
  return jac;
}

App jacobi3d(const std::string output_name) {
  App jac;
  jac.func2d("t1_arg");
  jac.func2d("t1", "id", pt("t1_arg"));
  jac.func2d(output_name, "jacobi3d_compute", "t1", {1, 1, 1},
      {{0, 0, 0},
      {1, 0, 0}, {-1, 0, 0}, 
      {0, 1, 0}, {0, -1, 0}, 
      {0, 0, 1}, {0, 0, -1}});
  return jac;
}

vector<vector<int> > offsets2d(const int d0l, const int d0r, const int d1l, const int d1r) {
  vector<vector<int> > offs;
  for (int r = d1l; r < d1r + 1; r++) {
    for (int c = d0l; c < d0r + 1; c++) {
      offs.push_back({c, r});
    }
  }
  return offs;
}

void upsample_stencil_2d_test() {
  App us;
  us.func2d("Img_off");
  us.func2d("Img", "id", pt("Img_off"));

  auto loads = offsets2d(-1, 1, -1, 1);
  //auto loads = offsets2d(0, 2, 0, 0);
  Window imgwin{"Img", {qconst(1, 2), qconst(1, 2)}, loads};
  //cout << "Strides before assignment" << endl;
  //for (auto s : imgwin.strides) {
    //cout << tab(1) << s << endl;
  //}
  us.func2d("upsample_stencil", "conv_3_3", imgwin);

  us.realize("upsample_stencil", 32, 32, 1);
  us.realize_naive("upsample_stencil", 32, 32);
  
  std::vector<std::string> optimized =
    run_regression_tb("upsample_stencil_opt");

  std::vector<std::string> naive =
    run_regression_tb("upsample_stencil_naive");

  assert(optimized.size() == naive.size());
  for (size_t i = 0; i < optimized.size(); i++) {
    cout << tab(1) << "i = " << i << ", opt = " << optimized.at(i) << ", naive = " << naive.at(i) << endl;
    assert(optimized.at(i) == naive.at(i));
  }

  assert(optimized == naive);
  //assert(false);
}

void grayscale_conversion_test() {
  App gs;
  gs.func3d("Img_off");
  gs.func3d("Img", "id", pt3("Img_off"));

  Window inwindow{"Img", {{qconst(1), qconst(1), qconst(0)}}, {{0, 0, 0}, {0, 0, 1}, {0, 0, 2}}};
  gs.func2d("gray", "avg", inwindow); 

  gs.realize_naive("gray", 32, 32);
  gs.realize("gray", 32, 32, 1);

  std::vector<std::string> optimized =
    run_regression_tb("gray_opt");

  std::vector<std::string> naive =
    run_regression_tb("gray_naive");

  assert(naive == optimized);

}

void upsample_stencil_1d_test() {
  App us;
  us.func2d("Img_off");
  us.func2d("Img", "id", pt("Img_off"));

  //auto loads = offsets2d(-1, 1, -1, 1);
  auto loads = offsets2d(0, 2, 0, 0);
  Window imgwin{"Img", {qconst(1, 2), qconst(1, 1)}, loads};
  //cout << "Strides before assignment" << endl;
  //for (auto s : imgwin.strides) {
    //cout << tab(1) << s << endl;
  //}
  us.func2d("upsample_stencil_1d", "conv_1_3", imgwin);

  us.realize("upsample_stencil_1d", 32, 1, 1);
  us.realize_naive("upsample_stencil_1d", 32, 1);
  
  std::vector<std::string> optimized =
    run_regression_tb("upsample_stencil_1d_opt");

  std::vector<std::string> naive =
    run_regression_tb("upsample_stencil_1d_naive");

  assert(optimized.size() == naive.size());
  for (size_t i = 0; i < optimized.size(); i++) {
    cout << tab(1) << "i = " << i << ", opt = " << optimized.at(i) << ", naive = " << naive.at(i) << endl;
    assert(optimized.at(i) == naive.at(i));
  }

  assert(optimized == naive);
  //assert(false);
}

void jacobi2d_app_test() {
  App jac = jacobi2d("t0");
  jac.realize_naive("t0", 32, 28);
  jac.realize("t0", 32, 28, 1);

  std::vector<std::string> optimized =
    run_regression_tb("t0_opt");

  std::vector<std::string> naive =
    run_regression_tb("t0_naive");

  assert(naive == optimized);

  for (int i = 0; i < 3; i++) {
    int unroll_factor = pow(2, i);
    string out_name = "jacobi2d_unrolled_" + str(unroll_factor);
    jacobi2d(out_name).realize(out_name, 1920, 1080, unroll_factor);
    string synth_dir = 
      "./synth_examples/" + out_name;
    system(("mkdir " + synth_dir).c_str());
    system(("mv " + out_name + "*.cpp " + synth_dir).c_str());
    system(("mv " + out_name + "*.h " + synth_dir).c_str());
    system(("mv regression_tb_" + out_name + "*.cpp " + synth_dir).c_str());
    system(("mv tb_soda_" + out_name + "*.cpp " + synth_dir).c_str());
  }

  //assert(false);
}

void denoise2d_test() {
  App dn;

  dn.func2d("f_off_chip");
  dn.func2d("u_off_chip");
  dn.func2d("f", "id", "f_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("u", "id", "u_off_chip", {1, 1}, {{0, 0}});
  dn.func2d("diff_qwe", "diff_b", "u", {{0, 0}, {0, -1}});
  dn.func2d("diff_d", "diff_b", "u", {{0, 0}, {0, 1}});
  dn.func2d("diff_l", "diff_b", "u", {{0, 0}, {-1, 0}});
  dn.func2d("diff_r", "diff_b", "u", {{0, 0}, {1, 0}});

  dn.func2d("g", "mag_dn2", {pt("diff_qwe"), pt("diff_d"), pt("diff_l"), pt("diff_r")});
  dn.func2d("r0", "comp_r0", {pt("u"), pt("f")});
  dn.func2d("r1", "r1_comp", pt("r0"));
  dn.func2d("denoise2d", "out_comp_dn2d", {pt("r1"), pt("f"), win("u", {{0, 0}, {0, -1}, {-1, 0}, {1, 0}}), win("g", {{0, 1}, {0, -1}, {-1, 0}, {1, 0}})});

  int size = 30;
  dn.realize("denoise2d", size, size, 1);

  std::vector<std::string> optimized =
    run_regression_tb("denoise2d_opt");

  {
    CodegenOptions options;
    options.internal = true;
    options.all_rams = false;
    dn.realize_naive(options, "denoise2d", size, size);

    std::vector<std::string> naive =
      run_regression_tb("denoise2d_naive");

    assert(optimized.size() == naive.size());
    for (size_t i = 0; i < optimized.size(); i++) {
      cout << tab(1) << "i = " << i << ", opt = " << optimized.at(i) << ", naive = " << naive.at(i) << endl;
      assert(optimized.at(i) == naive.at(i));
    }

    assert(naive == optimized);
  }

  {
    CodegenOptions options;
    options.internal = true;
    options.all_rams = true;
    dn.realize_naive(options, "denoise2d", size, size);

    std::vector<std::string> naive =
      run_regression_tb("denoise2d_naive");

    assert(optimized.size() == naive.size());
    for (size_t i = 0; i < optimized.size(); i++) {
      cout << tab(1) << "i = " << i << ", opt = " << optimized.at(i) << ", naive = " << naive.at(i) << endl;
      assert(optimized.at(i) == naive.at(i));
    }

    assert(naive == optimized);
  }

  //assert(false);
}

void conv3x3_app_unrolled_uneven_test() {

  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  vector<vector<int> > offsets;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      offsets.push_back({i, j});
    }
  }
  sobel.func2d("conv3x3_app_unrolled_uneven", "conv_3_3", "img", {1, 1}, offsets);

  sobel.realize("conv3x3_app_unrolled_uneven", 30, 30, 7);

  int res = system("g++ -std=c++11 conv3x3_app_unrolled_uneven_opt.cpp -c ");
  assert(res == 0);

}

void conv3x3_app_unrolled_test() {

  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  vector<vector<int> > offsets;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      offsets.push_back({i, j});
    }
  }
  sobel.func2d("conv3x3_app_unrolled", "conv_3_3", "img", {1, 1}, offsets);

  sobel.realize("conv3x3_app_unrolled", 30, 30, 2);

  int res = system("g++ -std=c++11 tb_app_unrolled_conv3x3.cpp conv3x3_app_unrolled_opt.cpp");
  assert(res == 0);

  int tb_res = system("./a.out");
  assert(tb_res == 0);
}


void conv3x3_app_test() {
  App sobel;

  sobel.func2d("off_chip_img");
  sobel.func2d("img", "id", "off_chip_img", {1, 1}, {{0, 0}});
  vector<vector<int> > offsets;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      offsets.push_back({i, j});
    }
  }
  sobel.func2d("conv3x3_app", "conv_3_3", "img", {1, 1}, offsets);

  sobel.realize("conv3x3_app", 30, 30, 1);

  int res = system("g++ -std=c++11 tb_app_conv3x3.cpp conv3x3_app_opt.cpp");
  assert(res == 0);

  int tb_res = system("./a.out");
  assert(tb_res == 0);
}

void sobel_test() {
  App sobela = sobel("mag");

  sobela.realize("mag", 30, 30, 1);

  int res = system("g++ -std=c++11 -c mag_opt.cpp");
  assert(res == 0);
}

void heat_3d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "heat3d";
  prg.buffer_port_widths["I"] = 32;

  int rows = 32;
  int cols = 32;
  int channels = 32;

  prg.buffer_bounds["I"] = {rows, cols, channels};

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 32;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 32;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id2", 0, rows, "id1", 0, cols, "id0", 0, channels);
  in_nest->add_op({"I", "id0, id1, id2"}, "id", {in_name, "id0, id1, id2"});

  auto blur_y_nest =
    prg.add_nest("d2", 1, rows - 1, "d1", 1, cols - 1, "d0", 1, channels - 1);
  blur_y_nest->
    stencil_op(out_name, "heat3d_compute", "I", {"d0", "d1", "d2"},
        {{1, 0, 0}, {0, 0, 0}, {-1, 0, 0},
        {0, 1, 0}, {0, 0, 0}, {0, -1, 0},
        {0, 0, 1}, {0, 0, 0}, {0, 0, -1}});

  // Need to fix repeated reads from the same location
  regression_test(prg);
}

void blur_x_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "blur_x";
  prg.buffer_port_widths["I"] = 16;

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 16;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 16;
  prg.add_output(out_name);

  // This code (in SODA is described as blur_x)
  // blur_x(0, 0) = in(0, 0) + in(0, 1) + in(0, 2)
  auto in_nest = prg.add_nest("id1", 0, 8, "id0", 0, 32);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, 8 - 2, "d0", 0, 32);
  auto lds = prg.vector_load("I", "d0", 0, 1, "d1", 0, 3);
  blur_y_nest->
    add_op({out_name, "d0, d1"}, "blur_3", lds);

  regression_test(prg);
  //assert(false);
}

void pointwise_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "pointwise";
  prg.buffer_port_widths["I"] = 16;

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 16;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 16;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("id1", 0, 32, "id0", 0, 8);
  in_nest->add_op({"I", "id0, id1"}, "id", {in_name, "id0, id1"});

  auto blur_y_nest =
    prg.add_nest("d1", 0, 32, "d0", 0, 8);
  blur_y_nest->
    add_op({out_name, "d0, d1"}, "plus_one", {"I", "d0, d1"});


  regression_test(prg);
}

void stencil_3d_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "stencil_3d";
  prg.buffer_port_widths["I"] = 16;
  prg.buffer_port_widths["blur_x"] = 16;

  string in_name = "in";
  string out_name = "out";

  prg.buffer_port_widths[in_name] = 16;
  prg.add_input(in_name);

  prg.buffer_port_widths[out_name] = 16;
  prg.add_output(out_name);

  auto in_nest = prg.add_nest("ir", 0, 32, "ic", 0, 32, "ib", 0, 32);
  in_nest->add_op({"I", "ir, ic, ib"}, "id", {in_name, "ir, ic, ib"});

  auto blur_y_nest =
    prg.add_nest("xr", 0, (32 - 2), "xc", 0, (32 - 2), "xb", 0, (32 - 2));
  auto lds0 = prg.vector_load("I", "xr", 0, 3, "xc", 0, 3, "xb", 0, 3);
  blur_y_nest->
    add_op({out_name, "xr, xc, xb"}, "blur_27", lds0);


  // How do I want to schedule things?
  //  - Using a single loop nest over input pixels giving each pixel
  //    a time?
  regression_test(prg);
}

void soda_blur_test() {

  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "soda_blur";
  prg.buffer_port_widths["I"] = 16;
  prg.buffer_port_widths["blur_x"] = 16;

  int unroll_factor = 2;
  for (int i = 0; i < unroll_factor; i++) {
    string in_name = "in_" + to_string(i);
    string out_name = "out_" + to_string(i);

    prg.buffer_port_widths[in_name] = 16;
    prg.add_input(in_name);

    prg.buffer_port_widths[out_name] = 16;
    prg.add_output(out_name);
  }

  auto in_nest = prg.add_nest("ir", 0, 32, "ic", 0, 32 / unroll_factor);
  for (int i = 0; i < unroll_factor; i++) {
    string in_name = "in_" + to_string(i);
    in_nest->add_op({"I", "ir, " + to_string(unroll_factor) + "*ic + " + to_string(i)}, "id", {in_name, "ir, ic"});
  }

  auto blur_y_nest =
    prg.add_nest("xr", 0, (32 - 2), "xc", 0, (32) / unroll_factor);
  for (int i = 0; i < unroll_factor; i++) {
    string is = to_string(i);
    string uf = to_string(unroll_factor);

    string out_name = "out_" + to_string(i);
    auto lds0 = prg.vector_load("I", "xr", 0, 3, to_string(unroll_factor) + "*xc + " + to_string(i), 0, 1);
    blur_y_nest->
      add_op({out_name, "xr, " + uf + "*xc + " + is}, "blur_3", lds0);
  }

  //auto blur_x_nest =
    //prg.add_nest("yr", 0, 32, "yc", 0, (32 - 2) / unroll_factor);
  //for (int i = 0; i < unroll_factor; i++) {
    //auto lds = prg.vector_load("I", "yr", 0, 1, to_string(unroll_factor) + "*yc + " + to_string(i), 0, 3);

    //string is = to_string(i);
    //string uf = to_string(unroll_factor);
    //blur_x_nest->add_op({"blur_x", "yr, " + uf + "*yc + " + is}, "blur_3", lds);
  //}

  //auto blur_y_nest =
    //prg.add_nest("xr", 0, (32 - 2), "xc", 0, (32 - 2) / unroll_factor);
  //for (int i = 0; i < unroll_factor; i++) {
    //string is = to_string(i);
    //string uf = to_string(unroll_factor);

    //string out_name = "out_" + to_string(i);
    //auto lds0 = prg.vector_load("blur_x", "xr", 0, 3, to_string(unroll_factor) + "*xc + " + to_string(i), 0, 1);
    //blur_y_nest->
      //add_op({out_name, "xr, " + uf + "*xc + " + is}, "blur_3", lds0);
  //}

  regression_test(prg);
  //assert(false);
}

void conv_2d_rolled_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_rolled";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["R"] = 32;

  {
    auto pc = prg.add_nest("pr", 0, 64, "pc", 0, 64);
    auto write = pc->add_op("write");
    write->add_load("in", "pr, pc");
    write->add_store("I", "pr, pc");
  }

  {
    auto pr = prg.add_loop("lr", 1, 64 - 1);
    auto pc = pr->add_loop("lc", 1, 64 - 1);

    auto rd = pc->add_op("init");
    rd->add_store("R", "lr, lc");
    rd->add_function("set_zero_32");

    auto reduce_inner_loop = pc->add_nest("rr", -1, 2, "rc", -1, 2);
    auto reduce_inner = reduce_inner_loop->add_op({"R", "lr - 1, lc - 1"}, "inc", {"R", "lr, lc", "I", "lr + rr, lc + rc"});
  }

  {
    auto outlp = prg.add_nest("xr", 0, 64 - 2, "xc", 0, 64 - 2);
    outlp->store({"out", "xr, xc"}, {"R", "xr, xc"});
  }

  regression_test(prg);
}

void unsharp_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "unsharp";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["Blur"] = 32;
  prg.buffer_port_widths["Diff"] = 32;

  prg.add_nest("pr", 0, 64, "pc", 0, 64)->store({"I", "pr, pc"}, {"in", "pr, pc"});
  vector<string> conv_loads;
  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      conv_loads.push_back("I");
      conv_loads.push_back("br + " + to_string(r) + ", bc + " + to_string(c));
    }
  }

  prg.add_nest("br", 0, 64 - 2, "bc", 0, 64 - 2)->add_op({"Blur", "br,bc"}, "conv_3_3", conv_loads);
  prg.add_nest("dr", 0, 64 - 2, "dc", 0, 64 - 2)->add_op({"Diff", "dr, dc"}, "diff", {"I", "dr, dc", "Blur", "dr, dc"});
  prg.add_nest("xr", 0, 64 - 2, "xc", 0, 64 - 2)->store({"out", "xr, xc"}, {"Diff", "xr, xc"});

  regression_test(prg);
}

void warp_and_upsample_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "warp_and_upsample";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["warped_0"] = 32;

  prg.add_nest("pr", 0, 64, "pc", 0, 64)->store({"I", "pr, pc"}, {"in", "pr, pc"});

  auto loads = prg.vector_load("I", "br", 0, 3, "bc", 0, 3);
  cout << "# of loads: " << loads.size() << endl;
  prg.add_nest("br", 0, 64 - 2, "bc", 0, 64 - 2)->add_op({"warped_0", "br,bc"}, "conv_3_3", loads);
  prg.add_nest("ur", 0, 64 - 2, "kr", 0, 2)->add_nest("uc", 0, 64 - 2, "kc", 0, 2)->
    add_op({"out", "ur, uc"}, "id", {"warped_0", "ur, uc"});

  regression_test(prg);
}

void downsample_and_blur_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "downsample_and_blur";
  prg.add_input("in");
  prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  prg.buffer_port_widths["downsampled"] = 32;

  prg.add_nest("pr", 0, 64, "pc", 0, 64)->store({"I", "pr, pc"}, {"in", "pr, pc"});

  prg.add_nest("dr", 0, (64) / 2, "dc", 0, (64) / 2)->
    add_op({"downsampled", "dr, dc"}, "id", {"I", "2*dr, 2*dc"});

  auto loads = prg.vector_load("downsampled", "br", 0, 3, "bc", 0, 3);
  prg.add_nest("br", 0, 32 - 2, "bc", 0, 32 - 2)->add_op({"out", "br,bc"}, "conv_3_3", loads);

  regression_test(prg);
}

void two_in_conv2d_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "conv_2d_two_in_window";
  prg.add_input("in0");
  prg.add_input("in1");
  prg.add_output("out");

  prg.buffer_port_widths["I"] = 32;
  int img_size = 20;
  prg.buffer_bounds["I"] = {img_size, img_size};

  auto ldi = prg.add_nest("pr", 0, img_size, "pc", 0, img_size / 2);
  ldi->store({"I", "pr, 2*pc"}, {"in0", "pr, 2*pc"});
  ldi->store({"I", "pr, 2*pc + 1"}, {"in1", "pr, 2*pc + 1"});

  auto cpi = prg.add_nest("r", 0, (img_size / 2) - 2, "c", 0, (img_size / 2) - 2);
  auto ld = prg.vector_load("I", "2*r", 0, 3, "2*c", 0, 3);
  cpi->add_op({"out", "r, c"}, "conv_3_3", ld);

  regression_test(prg);
}

void two_in_window_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "two_in_window";
  prg.add_input("in0");
  prg.add_input("in1");
  prg.add_output("out");

  prg.buffer_port_widths["I"] = 32;
  int img_size = 10;
  prg.buffer_bounds["I"] = {img_size, img_size};

  auto ldi = prg.add_nest("pr", 0, img_size);
  ldi->store({"I", "2*pr"}, {"in0", "pr"});
  ldi->store({"I", "2*pr + 1"}, {"in1", "pr"});

  auto cpi = prg.add_nest("c", 0, (img_size / 2) - 2);
  auto ld = prg.vector_load("I", "2*c", 0, 3);
  cout << "Loads..." << endl;
  for (auto d : ld) {
    cout << "\t" << d << endl;
  }
  cpi->add_op({"out", "c"}, "conv_1_3", ld);

  regression_test(prg);
}

void upsample_reduce_test() {

  // Maybe we should build memories using the principle
  // that total new data for next iteration - total data that dies in this iteration
  // must be a constant
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "upsample_reduce_test";
  prg.add_input("in");
  //prg.add_output("out");
  prg.buffer_port_widths["I"] = 32;
  int img_size = 15;
  prg.buffer_bounds["I"] = {img_size, img_size};

  auto y_nest =
    prg.add_nest("y", 0, img_size, "yu", 0, 3);
  auto x_nest =
    y_nest->add_nest("x", 0, img_size, "xu", 0, 3);
  auto reduce_nest =
    x_nest->add_nest("yi", 0, 4, "xi", 0, 4);
  reduce_nest->add_op({"I", "3*x + xu, 3*y + yu"}, "id", {"in", "x + xi, y + yi"});

  prg.pretty_print();
  cout << "Consumer maps..." << endl;
  cout << tab(1) << str(prg.consumer_map()) << endl;

  cout << "Schedules..." << endl;
  for (auto s : prg.schedules()) {
    cout << tab(1) << str(s.second) << endl;
    auto next_op = lexmin(lex_lt(s.second, s.second));
    cout << "next op: " << str(next_op) << endl;
  }
  //assert(false);

  prog pcpy = duplicate_interface(prg);
  for (auto c : prg.all_loops()) {
    cout << "Adding loop: " << c->name << endl;
    string lc = c->name + "_cache";
    pcpy.buffer_bounds[lc] = {};
  }

  cout << "Copy..." << endl;
  pcpy.pretty_print();

  //assert(false);
}

void blur_and_downsample_test() {
  prog prg;
  prg.compute_unit_file = "conv_3x3.h";
  prg.name = "blur_and_downsample";
  prg.add_input("in");
  prg.buffer_port_widths["I"] = 32;
  int img_size = 15;
  prg.buffer_bounds["I"] = {img_size, img_size};

  prg.add_nest("pr", 0, img_size, "pc", 0, img_size)->store({"I", "pr, pc"}, {"in", "pr, pc"});
  string bds = add_gaussian_stage(prg, "I");
  string cv = add_conv_stage(prg, bds);
  write_out(prg, cv);

  regression_test(prg);
}

isl_val* constant(isl_aff* a) {
  return isl_aff_get_constant_val(a);
}

void playground() {

  isl_ctx* ct = isl_ctx_alloc();

  isl_aff* zero = rdaff(ct, "{ [a, b] -> [0] }");
  isl_aff* aff = rdaff(ct, "{ [a, b] -> [floor(a/2) + 3] }");
  //isl_aff* aff = rdaff(ct, "{ [a, b] -> [floor((a + 3b + floor(2a - 7b / 9)) / 2)] }");
  //isl_aff* aff = rdaff(ct, "{ [a, b] -> [3 a / 2 + 2 b / 15] }");
  //isl_aff* aff = rdaff(ct, "{ [a, b] -> [(a + b) % 2] }");
  //isl_aff* aff = rdaff(ct, "{ [a, b] -> [floor((a + 3b) / 2)] }");
  //isl_aff* aff = rdaff(ct, "{ [a, b] -> [(a + 3b) % 2 + a / 6] }");
  cout << "aff = " << str(aff) << endl;
  cout << "const = " << str(constant(aff)) << endl;
  int in_dims = num_in_dims(aff);
  cout << "input dimension: " << in_dims << endl;
  int out_dims = num_out_dims(aff);
  cout << "output dimension: " << out_dims << endl;

  isl_local_space* ls = isl_aff_get_local_space(aff);
  int div_dims = isl_local_space_dim(ls, isl_dim_div);
  cout << "div dimension   : " << isl_local_space_dim(ls, isl_dim_div) << endl;
  cout << "all dimensions  : " << isl_local_space_dim(ls, isl_dim_all) << endl;
  cout << "Local space: " << str(ls) << endl;

  for (int i = 0; i < in_dims; i++) {
    cout << i << "th coeff: " << str(isl_aff_get_coefficient_val(aff, isl_dim_in, i)) << endl;
  }
  //for (int i = 0; i < out_dims; i++) {
    //cout << i << "th div  : " << str(isl_aff_get_div(aff, i)) << endl;
  //}
  for (int i = 0; i < div_dims; i++) {
    cout << i << "th div      : " << str(isl_aff_get_div(aff, i)) << endl;
    cout << i << "th div coeff: " << str(isl_aff_get_coefficient_val(aff, isl_dim_div, i)) << endl;
  }

  isl_basic_set* bset = isl_aff_eq_basic_set(cpy(aff), cpy(zero));
    //isl_basic_set_read_from_str(ct, "{ [a, b] }");
    //isl_basic_set_universe(get_space(aff));


  cout << "bset: " << str(bset) << endl;
  auto mat = isl_basic_set_equalities_matrix(bset, isl_dim_cst, isl_dim_param, isl_dim_set, isl_dim_div);
  cout << "Eq Rows: " << isl_mat_rows(mat) << endl;
  cout << "Eq Cols: " << isl_mat_cols(mat) << endl;

  auto ineqmat = isl_basic_set_inequalities_matrix(bset, isl_dim_cst, isl_dim_param, isl_dim_set, isl_dim_div);
  cout << "Ineq Rows: " << isl_mat_rows(ineqmat) << endl;
  cout << "Ineq Cols: " << isl_mat_cols(ineqmat) << endl;
  for (int r = 0; r < isl_mat_rows(ineqmat); r++) {
    for (int c = 0; c < isl_mat_cols(ineqmat); c++) {
      cout << str(isl_mat_get_element_val(ineqmat, r, c)) << " ";
    }
    cout << endl;
  }

  assert(false);

  auto prev = rdaff(ct, "{ [x] -> [floor(x / 2)] }");
  auto next = rdaff(ct, "{ [x] -> [floor((x + 1) / 2)] }");

  cout << "prev: " << str(prev) << endl;
  cout << "next: " << str(next) << endl;
  cout << "diff: " << str(isl_aff_sub(cpy(next), cpy(prev))) << endl;

  auto comps_set = isl_set_read_from_str(ct, "{ [a, b] : 0 <= a <= 10 and 0 <= b <= 11 }");
  auto flat_set = isl_set_flatten(cpy(comps_set));
  cout << "comps_set: " << str(comps_set) << endl;
  cout << "flat_set : " << str(flat_set) << endl;

  //isl_mat* matrix = aff->ls->div;
  isl_ctx_free(ct);

  assert(false);
}

void application_tests() {

  //playground();

  //synth_lb_test();

  //conv_app_rolled_reduce_test();
 
  //reduce_1d_test();

  exposure_fusion();
  //up_stencil_down_unrolled_test();

  conv3x3_app_unrolled_test();
  conv3x3_app_unrolled_uneven_test();

  jacobi2d_app_test();
  denoise2d_test();
  mismatched_stencil_test();

  grayscale_conversion_test();
  seidel2d_test();
  jacobi_2d_2_test();
  jacobi_2d_test();
  parse_denoise3d_test();
  conv3x3_app_test();
  conv3x3_app_test();

  conv3x3_app_unrolled_test();
  upsample2d_test();
  downsample2d_test();
  updown_merge_test();
  sobel_test();

  laplacian_pyramid_app_test();
  upsample_stencil_2d_test();
  upsample_stencil_1d_test();

  heat_3d_test();
  gaussian_pyramid_app_test();

  //synth_reduce_test();

  upsample_reduce_test();


  blur_and_downsample_test();
  downsample_and_blur_test();

  blur_x_test();
  pointwise_test();

  stencil_3d_test();
  soda_blur_test();
  two_in_window_test();
  two_in_conv2d_test();
  gaussian_pyramid_test();
  warp_and_upsample_test();

  //conv_1d_rolled_test();
  //synth_upsample_test();
  unsharp_test();
  //conv_2d_rolled_test();
  //reduce_2d_test();
  conv_1d_test();
  conv_2d_bc_test();
  //mobilenet_test();
  pyramid_2d_test();
  pyramid_test();
  //conv_1d_bc_test();
  //synth_wire_test();
  //synth_sr_boundary_condition_test();
}

void memory_tile_tests() {
  agg_test();
  memtile_test();

}

int main(int argc, char** argv) {

  if (argc > 1) {
    assert(argc == 2);
    string cmd = argv[1];

    if (cmd == "program_representation") {
      prog prg = conv_1d();
      aha_talk_print_program_representation(prg);
      return 0;
    }

    if (cmd == "raw_deps") {
      prog prg = conv_1d();
      aha_talk_print_raw_deps(prg);
      return 0;
    }

    if (cmd == "conv_1d") {
      prog prg = conv_1d();
      aha_talk_print_info(prg);
      return 0;
    }

    if (cmd == "conv_1d_bc") {
      prog prg = conv_1d_bc();
      aha_talk_print_info(prg);
      return 0;
    }

    if (cmd == "conv_2d") {
      prog prg = conv_2d();
      aha_talk_print_info(prg);
      return 0;
    }

    cout << "Error: Unrecognized command: " << cmd << endl;
    assert(false);

  } else if (argc == 1) {
    
    application_tests();
    memory_tile_tests();

  } else {
    assert(false);
  }

  return 0;

}

