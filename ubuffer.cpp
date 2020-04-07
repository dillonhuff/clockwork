#include "ubuffer.h"

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

