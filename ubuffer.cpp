#include "ubuffer.h"
#include "codegen.h"

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


