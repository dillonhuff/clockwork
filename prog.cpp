#include "prog.h"
#include "codegen.h"
#include "app.h"
#include "rdai_collateral.h"

std::ostream& operator << ( ostream& strm, ir_node_type tt) {
  const string nameTT[] = {
      "OP",
      "LOOP",
      "IF"
  };
  return strm << nameTT[tt];
}

void prog::pretty_print() {
  cout << "program: " << name << endl;
  cout << "Inputs..." << endl;
  for (auto in : ins) {
    cout << tab(1) << in << endl;
  }
  cout << "Outputs..." << endl;
  for (auto in : outs) {
    cout << tab(1) << in << endl;
  }
  cout << "buffers..." << endl;
  for (auto b : buffer_bounds) {
    cout << tab(1) << b.first << bracket_list(b.second) << endl;
  }
  cout << "operations..." << endl;
  root->pretty_print(cout, 0);
}

isl_multi_aff*
to_multi_aff(isl_ctx* context,
    const std::vector<std::string>& vars,
    const std::string& addr) {
  string str =
    sep_list(vars, "[", "]", ", ") + " -> " +
    brackets(addr);
  str = "{" + str + " }";

  return isl_multi_aff_read_from_str(context, str.c_str());
}

isl_pw_multi_aff*
to_pw_multi_aff(isl_ctx* context,
    const std::vector<std::string>& vars,
    const piecewise_address& addr) {

  vector<isl_multi_aff*> affs;
  for (auto piece : addr) {
    affs.push_back(to_multi_aff(context, vars, piece.second));
  }
  assert(affs.size() == 1);
  return isl_pw_multi_aff_from_multi_aff(affs.at(0));
}

string str(const piecewise_address& addr) {
  if (addr.size() == 1 && addr.at(0).first == "") {
    return "[" + addr.at(0).second + "]";
  }

  string s = "";
  for (auto p : addr) {
    s += p.first + " : " + p.second + ",";
  }

  return s;
}

void
pack_bv(const int indent,
    ostream& conv_out,
    const string& value,
    const std::vector<string>& lanes,
    const int lane_width) {

  int nlanes = lanes.size();

  conv_out << tab(indent) << "hw_uint<" << lane_width*nlanes << " > " << value << ";" << endl;
  int total_width = nlanes*lane_width;
  for (int i = 0; i < nlanes; i++) {
    string ln = lanes.at(i);
    int base = i*lane_width;
    conv_out << tab(indent)
      << "set_at<" << base << ", " << total_width << ", " << lane_width << ">(" << value << ", " << ln << ");" << endl;
  }
}

vector<string>
split_bv(const int indent,
    ostream& conv_out,
    const string& value,
    const int lane_width,
    const int nlanes) {

  vector<string> lanes;
  for (int i = 0; i < nlanes; i++) {
    string ln = value + "_lane_" + str(i);
    int base = i*lane_width;
    int end = (i + 1)*lane_width- 1;
    conv_out << tab(indent) << "hw_uint<" << lane_width << "> " << ln << " = " <<
      value << ".extract<" << base << ", " << end << ">();" << endl;

    //conv_out << tab(indent) << "hw_uint<" << lane_width << "> " << ln << ";" << endl;
    //conv_out << tab(indent)
      //<< "set_at<0, " << lane_width << ", " << lane_width << ">(" << ln << ", " << value << ".extract<" << base << ", " << end << ">());" << endl;

    lanes.push_back(ln);
  }

  return lanes;
}


bool unoptimized_compiles(prog& prg) {
  generate_unoptimized_code(prg);

  cout << "Built unoptimized code" << endl;
  auto old_name = prg.name;
  prg.name = "unoptimized_" + old_name;
  generate_regression_testbench(prg);
  bool res = compile_regression_tb(prg) == 0;
  prg.name = old_name;
  return res;
}

std::vector<string> unoptimized_result(prog& prg) {
  generate_unoptimized_code(prg);

  cout << "Built unoptimized code" << endl;
  auto old_name = prg.name;
  prg.name = "unoptimized_" + old_name;
  generate_regression_testbench(prg);
  vector<string> unoptimized_res = run_regression_tb(prg);
  prg.name = old_name;
  return unoptimized_res;
}


void generate_regression_testbench(prog& prg) {
  ofstream rgtb("regression_tb_" + prg.name + ".cpp");
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"" << prg.name << ".h\"" << endl << endl;

  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "srand(234);" << endl;
  rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << ".txt\");" << endl;

  vector<string> optimized_streams;
  map<string, int> unroll_factor;
  for (auto in : prg.ins) {
    auto readers = find_readers(in, prg);
    int width = 0;
    int unroll = 0;
    for (auto reader : readers) {
      for (auto addr : reader->read_addrs(in)) {
        width += prg.buffer_port_width(in);
        unroll++;
      }
    }
    unroll_factor[in] = unroll;
    rgtb << tab(1) << "HWStream<hw_uint<" << width << " > > " << in << ";" << endl;
    optimized_streams.push_back(in);
  }

  for (auto out : prg.outs) {
    auto readers = find_writers(out, prg);
    int width = 0;
    int unroll = 0;
    for (auto reader : readers) {
      for (auto addr : reader->write_addrs(out)) {
        width += prg.buffer_port_width(out);
        unroll++;
      }
    }
    unroll_factor[out] = unroll;
    rgtb << tab(1) << "HWStream<hw_uint<" << width << " > > " << out << ";" << endl;
    optimized_streams.push_back(out);
  }

  rgtb << endl << endl;

  rgtb << tab(1) << "// Loading input data" << endl;
  rgtb << tab(1) << "srand(1);" << endl;
  for (auto in : prg.ins) {
    auto cmap = prg.consumer_map(in);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pushes = int_upper_bound(range_card);
    int unroll = map_find(in, unroll_factor);
    int lane_width = prg.buffer_port_width(in);
    int bundle_width = lane_width*unroll;

    rgtb << tab(1) << "// cmap    : " << str(cmap) << endl;
    rgtb << tab(1) << "// read map: " << str(read_map) << endl;
    rgtb << tab(1) << "// rng     : " << str(rng) << endl;
    rgtb << tab(1) << "// rng card: " << str(range_card) << endl;
    int num_transfers = num_pushes;
    rgtb << tab(1) << "for (int i = 0; i < " << num_transfers << "; i++) {" << endl;
    vector<string> inds;
    for (int i = 0; i < unroll; i++) {
      inds.push_back("rand() % 256");
      //inds.push_back("(i) % 256");
      //inds.push_back(str(unroll) + "*i + " + str(i));
    }
    pack_bv(2, rgtb, "value", inds, lane_width);
    rgtb << tab(2) << in << ".write(value);" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }
  rgtb << tab(1) << prg.name << "(" << comma_list(optimized_streams) << ");" << endl;

  for (auto out : prg.outs) {
    auto cmap = prg.producer_map(out);
    auto read_map = inv(cmap);
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pops = int_upper_bound(range_card);
    int unroll = map_find(out, unroll_factor);
    int lane_width = prg.buffer_port_width(out);
    int bundle_width = lane_width*unroll;

    rgtb << tab(1) << "for (int i = 0; i < " << num_pops << "; i++) {" << endl;
    rgtb << tab(2) << "auto actual = " << out << ".read();" << endl;
    vector<string> results = split_bv(2, rgtb, "actual", lane_width, unroll);
    for (auto r : results) {
      rgtb << tab(2) << "fout << " << r << " << endl;" << endl;
    }

    //rgtb << tab(2) << "fout << actual << endl;" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }

  for (auto b : prg.boundary_buffers()) {
    rgtb << tab(1) << "assert(" << b << ".is_empty());" << endl;
  }

  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}

int compile_compute(const std::string& name) {
  int res = cmd("g++ -c -fstack-protector-all -std=c++11 " + name);
  return res;
}

bool compile_regression_tb(prog& prg) {
  return compile_regression_tb(prg.name);
}

bool compile_regression_tb(const std::string& name) {
  int res = cmd("g++ -fstack-protector-all -std=c++11 regression_tb_" + name + ".cpp " + name + ".cpp");
  return res;
}

std::vector<std::string> run_regression_tb(const std::string& name) {
#ifndef CGRAFLOW
  int res = system(string("g++ -fstack-protector-all -std=c++11 regression_tb_" + name + ".cpp " + name + ".cpp").c_str());
#else
  cmd("echo $CLKWRK_PATH");
  int res = cmd("g++ -fstack-protector-all -std=c++11 -I $CLKWRK_PATH regression_tb_" + name + ".cpp " + name + ".cpp");
#endif
  assert(res == 0);

  res = system("./a.out");
  if (!(res == 0)) {
    cout << "Error: testbench for " << name << " did not run to completion" << endl;
  }
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


void regression_test(prog& prg) {

  CodegenOptions options;
  options.internal = true;
  regression_test(options, prg);
}

void regression_test(CodegenOptions& options,
    prog& prg) {
  generate_unoptimized_code(prg);

  cout << "Built unoptimized code" << endl;
  auto old_name = prg.name;
  prg.name = "unoptimized_" + old_name;
  generate_regression_testbench(prg);
  vector<string> unoptimized_res = run_regression_tb(prg);
  prg.name = old_name;

  cout << "Building optimized code" << endl;
  generate_optimized_code(options, prg);
  generate_regression_testbench(prg);
  vector<string> optimized_res = run_regression_tb(prg);

  compare(prg.name, optimized_res, unoptimized_res);
}

std::vector<std::string> get_kernels_in_order(prog& prg) {
  std::vector<string> kernels;
  for (auto child : prg.root->children) {
    if (child->is_loop() || child->is_if()) {
      kernels.push_back(child->name);
    }
  }
  return kernels;
}

void insert_perfect_loop_kernel(prog& prg, op* root, std::set<std::string> & kernels) {
  if (root->is_loop()) {
    if (is_perfect(root, prg)) {
      kernels.insert(root->name);
    } else {
      for (auto child: root->children)
          insert_perfect_loop_kernel(prg, child, kernels);
    }
  }
}

std::set<std::string> get_kernels(op* root) {
  std::set<string> kernels;
  for (auto child : root->children) {
    if (child->is_loop() || child->is_if()) {
      kernels.insert(child->name);
    }
  }
  return kernels;
}

std::set<std::string> get_kernels(prog& prg) {
    return get_kernels(prg.root);
}

std::vector<piecewise_address> addrs_written(op* p, const std::string& buffer) {
  return p->write_addrs(buffer);
}

std::vector<piecewise_address> addrs_referenced(op* p, const std::string& buffer) {
  vector<piecewise_address> addrs;
  concat(addrs, addrs_written(p, buffer));

  for (auto b : p->consume_locs_pair) {
    if (b.first == buffer) {
      addrs.push_back(b.second);
    }
  }
  return addrs;
}

vector<string> write_vars(const std::string& target_buf, op* reader, prog& prg) {

  auto all_vars = map_find(reader, prg.iter_vars());
  vector<string> vars_used_in_read;
  for (auto a : addrs_written(reader, target_buf)) {
    assert(a.size() > 0);
    for (auto ar : a) {
      isl_multi_aff* ma = to_multi_aff(prg.ctx, all_vars, ar.second);
      cout << tab(2) << str(a) << endl;
      cout << tab(2) << str(ma) << endl;
      for (int i = 0; i < isl_multi_aff_dim(ma, isl_dim_set); i++) {
        auto aff = isl_multi_aff_get_aff(ma, i);
        cout << tab(3) << i << ": " << str(aff) << endl;

        for (int d = 0; d < num_in_dims(aff); d++) {
          isl_val* coeff = get_coeff(aff, d);
          if (!is_zero(coeff)) {
            vars_used_in_read.push_back(dim_name(aff, d));
          }
        }
      }
    }
  }
  return vars_used_in_read;
}

vector<string> used_vars(const std::string& target_buf, op* reader, prog& prg) {
  auto all_vars = map_find(reader, prg.iter_vars());
  vector<string> vars_used_in_read;
  for (auto a : addrs_referenced(reader, target_buf)) {
    assert(a.size() > 0);
    for (auto ar : a) {
      isl_multi_aff* ma = to_multi_aff(prg.ctx, all_vars, ar.second);
      cout << tab(2) << str(a) << endl;
      cout << tab(2) << str(ma) << endl;
      for (int i = 0; i < isl_multi_aff_dim(ma, isl_dim_set); i++) {
        auto aff = isl_multi_aff_get_aff(ma, i);
        cout << tab(3) << i << ": " << str(aff) << endl;

        for (int d = 0; d < num_in_dims(aff); d++) {
          isl_val* coeff = get_coeff(aff, d);
          if (!is_zero(coeff)) {
            vars_used_in_read.push_back(dim_name(aff, d));
          }
          //cout << tab(4) << dim_name(aff, d) << ": " << str(get_coeff(aff, d)) << endl;
        }
      }
    }
  }

  vector<string> upsamples;
  for (auto v : all_vars) {
    if (prg.trip_count(v) > 1 && !elem(v, vars_used_in_read)) {
      upsamples.push_back(v);
    }
  }
  return upsamples;
}

vector<string> reduce_vars(prog& prg) {

  auto levels = get_variable_levels(prg);
  vector<string> reduce_vars;
  for (auto p : levels) {

    string loop_var = p.first;
    if (loop_var == "root") {
      continue;
    }

    op* loop = prg.find_loop(loop_var);
    auto lower_ops = loop->descendant_ops();
    bool used_in_write = false;
    for (auto op : lower_ops) {
      std::set<string> vars;
      auto all_vars = map_find(op, prg.iter_vars());

      for (auto a : op->write_addrs()) {
        assert(a.size() > 0);
        for (auto ar : a) {
          isl_multi_aff* ma = to_multi_aff(prg.ctx, all_vars, ar.second);
          //cout << tab(2) << str(a) << endl;
          //cout << tab(2) << str(ma) << endl;
          for (int i = 0; i < isl_multi_aff_dim(ma, isl_dim_set); i++) {
            auto aff = isl_multi_aff_get_aff(ma, i);
            //cout << tab(3) << i << ": " << str(aff) << endl;

            for (int d = 0; d < num_in_dims(aff); d++) {
              isl_val* coeff = get_coeff(aff, d);
              if (!is_zero(coeff)) {
                vars.insert(dim_name(aff, d));
              }
            }
          }
        }
      }

      if (elem(loop_var, vars)) {
        used_in_write = true;
        break;
      }
    }

    if (!used_in_write && prg.find_loop(loop_var)->trip_count() > 1) {
      reduce_vars.push_back(loop_var);
    }
  }

  return reduce_vars;
  //auto all_vars = map_find(reader, prg.iter_vars());
  //vector<string> vars_used_in_read;
  //for (auto a : addrs_referenced(reader, target_buf)) {
  //}

  //vector<string> upsamples;
  //for (auto v : all_vars) {
    //if (prg.trip_count(v) > 1 && !elem(v, vars_used_in_read)) {
      //upsamples.push_back(v);
    //}
  //}
  //return upsamples;
}
vector<string> upsample_vars(const std::string& target_buf, op* reader, prog& prg) {

  auto all_vars = map_find(reader, prg.iter_vars());
  vector<string> vars_used_in_read;
  for (auto a : addrs_referenced(reader, target_buf)) {
    assert(a.size() > 0);
    for (auto ar : a) {
      isl_multi_aff* ma = to_multi_aff(prg.ctx, all_vars, ar.second);
      //cout << tab(2) << str(a) << endl;
      //cout << tab(2) << str(ma) << endl;
      for (int i = 0; i < isl_multi_aff_dim(ma, isl_dim_set); i++) {
        auto aff = isl_multi_aff_get_aff(ma, i);
        //cout << tab(3) << i << ": " << str(aff) << endl;

        for (int d = 0; d < num_in_dims(aff); d++) {
          isl_val* coeff = get_coeff(aff, d);
          if (!is_zero(coeff)) {
            vars_used_in_read.push_back(dim_name(aff, d));
          }
          //cout << tab(4) << dim_name(aff, d) << ": " << str(get_coeff(aff, d)) << endl;
        }
      }
    }
  }

  vector<string> upsamples;
  for (auto v : all_vars) {
    if (prg.trip_count(v) > 1 && !elem(v, vars_used_in_read)) {
      upsamples.push_back(v);
    }
  }
  return upsamples;
}

void make_constant_dd(const std::string& target_op, const std::string& target_buf, prog& prg) {

  op* target = prg.find_op(target_op);
  op* source = find_writer(target_buf, prg);

  cout << "target = " << target->name << endl;
  cout << "writer = " << source->name << endl;

  vector<string> upsamples = upsample_vars(target_buf, target, prg);
  cout << "Upsample vars..." << endl;
  for (auto v : upsamples) {
    cout << tab(1) << v << endl;
  }

  auto vars = prg.iter_vars();
  auto target_vars = map_find(target, vars);
  auto source_vars = map_find(source, vars);

  assert(target_vars.size() == source_vars.size());

  cout << "Vars: " << target->name << " -> " << str(map_find(target, vars)) << endl;
  cout << "Vars: " << source->name << " -> " << str(map_find(source, vars)) << endl;

  string last_shared_level = "";
  int num_unshared_levels = target_vars.size();
  for (int i = 0; i < source_vars.size(); i++) {
    if (target_vars[i] != source_vars[i]) {
      break;
    }
    last_shared_level = target_vars[i];
    num_unshared_levels--;
  }
  int num_shared_levels = target_vars.size() - num_unshared_levels;

  //cout << "last shared level = " << last_shared_level << endl;
  //assert(num_unshared_levels == 3);

  op* loop = prg.find_loop(last_shared_level);
  string lp_loader = "sw_loader_from_" + source->name + "_to_" + target->name;
  vector<string> all_vars = map_find(target, prg.iter_vars());
  vector<string> iter_vars;
  vector<string> read_vars;
  vector<pair<int, int> > bounds;
  int src_pos = num_shared_levels;
  for (int i = 0; i < num_unshared_levels; i++) {
    string target_var = target_vars.at(num_shared_levels + i);
    string source_var = source_vars.at(src_pos);
    if (elem(target_var, upsamples)) {
      bounds.push_back({prg.start(target_var), prg.end_exclusive(target_var)});
    } else {
      bounds.push_back({prg.start(source_var), prg.end_exclusive(source_var)});
      src_pos++;
    }
  }

  op* next =
    loop->add_loop_after(source, lp_loader + "_" + str(0), bounds.at(0).first, bounds.at(0).second);
  iter_vars.push_back(next->name);
  for (int i = 1; i < num_unshared_levels; i++) {
    string corresponding_writer_var = source_vars.at(i);
    next = next->add_loop(lp_loader + "_" + str(i), bounds.at(i).first, bounds.at(i).second);
    if (elem(corresponding_writer_var, write_vars(target_buf, source, prg))) {
        //next->name != "sw_loader_from_input_to_output_3") {
      iter_vars.push_back(next->name);
      read_vars.push_back(next->name);
    }
  }
  reverse(iter_vars);
  reverse(read_vars);

  string l1_buf = target_buf + "_" + target->name + "_l1";
  auto cpy_op = next->add_op("load_" + target_buf + "_to_" + target->name);
  cpy_op->add_store(l1_buf, comma_list(iter_vars));
  cpy_op->add_load(target_buf, comma_list(read_vars));
  prg.buffer_port_widths[l1_buf] = prg.buffer_port_width(target_buf);

  target->replace_reads_from(target_buf, l1_buf);
  for (auto& v : target->consume_locs_pair) {
    if (v.first == l1_buf) {
      for (auto& a : v.second) {
        a.second = a.second + (upsamples.size() > 0 ? ", " : "") + comma_list(upsamples);
      }
    }
  }
}


std::vector<string> topologically_sort(
        std::set<string> not_yet_sorted,
        map<string, std::set<string> > other_producers) {
	std::vector<string> topologically_sorted_kernels;
	while(not_yet_sorted.size() > 0){
        bool add_new_kernel = false;
		for(auto next_kernel : not_yet_sorted){
			bool all_producers_sorted = true;
            cout << "sorted kernel: " << topologically_sorted_kernels << endl;
			for (auto producer : other_producers.at(next_kernel)) {
				if(!elem(producer, topologically_sorted_kernels)) {
					all_producers_sorted = false;
					break;
				}
			}
			if(all_producers_sorted){
				topologically_sorted_kernels.push_back(next_kernel);
				not_yet_sorted.erase(next_kernel);
                add_new_kernel = true;
				break;
			}
		}
        if (!add_new_kernel) {
            cout << "\tIs topologically symmetric:\n\t" << not_yet_sorted <<  endl;
            auto kernel_picked = pick(not_yet_sorted);
            not_yet_sorted.erase(kernel_picked);
            topologically_sorted_kernels.push_back(kernel_picked);
        }
	}
    return topologically_sorted_kernels;
}

std::vector<string> topologically_sort_kernels(op* root, prog& prg){
	std::set<string> not_yet_sorted = get_kernels(root);

  map<string, std::set<string> > other_producers;
  for (auto next_kernel : not_yet_sorted) {
    std::set<string> producers = get_producers(next_kernel, root, prg);
    producers.erase(next_kernel);
    other_producers[next_kernel] = producers;
  }

  std::vector<string> topologically_sorted_kernels =
      topologically_sort(not_yet_sorted, other_producers);

  assert(topologically_sorted_kernels.size() == get_kernels(root).size());
	return topologically_sorted_kernels;
}

std::vector<string> topologically_sort_kernels(prog& prg){
	//std::vector<string> topologically_sorted_kernels;
	std::set<string> not_yet_sorted = get_kernels(prg);

  map<string, std::set<string> > other_producers;
  for (auto next_kernel : not_yet_sorted) {
    std::set<string> producers = get_producers(next_kernel, prg);
    producers.erase(next_kernel);
    other_producers[next_kernel] = producers;
  }

  std::vector<string> topologically_sorted_kernels =
      topologically_sort(not_yet_sorted, other_producers);
	//while(not_yet_sorted.size() > 0){
	//	for(auto next_kernel : not_yet_sorted){
	//		bool all_producers_sorted = true;
	//		for (auto producer : other_producers.at(next_kernel)) {
	//			if(!elem(producer, topologically_sorted_kernels)) {
	//				all_producers_sorted = false;
	//				break;
	//			}
	//		}
	//		if(all_producers_sorted){
	//			topologically_sorted_kernels.push_back(next_kernel);
	//			not_yet_sorted.erase(next_kernel);
	//			break;
	//		}
	//	}
	//}

  assert(topologically_sorted_kernels.size() == get_kernels(prg).size());
	return topologically_sorted_kernels;
}

std::set<string> buffers_read(prog& prg) {
  std::set<string> written;
  for (auto op : prg.all_ops()) {
    for (auto b : op->buffers_read()) {
      written.insert(b);
    }
  }
  return written;
}

std::set<string> buffers_written(prog& prg) {
  std::set<string> written;
  for (auto op : prg.all_ops()) {
    for (auto b : op->buffers_written()) {
      written.insert(b);
    }
  }
  return written;
}

std::set<string> buffers_read(op* p) {
  if (p->is_loop()) {
    std::set<string> read;
    for (auto child : p->children) {
      for (auto b : buffers_read(child)) {
        read.insert(b);
      }
    }
    return read;
  }

  assert(!p->is_loop());

  std::set<string> bufs;
  for (auto b : p->buffers_read()) {
    bufs.insert(b);
  }
  return bufs;
}

std::set<string> buffers_written(op* p) {
  if (p->is_loop()) {
    std::set<string> written;
    for (auto child : p->children) {
      for (auto b : buffers_written(child)) {
        written.insert(b);
      }
    }
    return written;
  }

  assert(!p->is_loop());

  std::set<string> bufs;
  for (auto b : p->buffers_written()) {
    bufs.insert(b);
  }
  return bufs;
}

bool writes(const std::string& target_buf, op* p) {
  return elem(target_buf, buffers_written(p));
}

op* find_writer(const std::string& target_buf, prog& prg) {
  vector<op*> writers;
  for (auto v : prg.all_ops()) {
    if (writes(target_buf, v)) {
      writers.push_back(v);
    }
  }
  assert(writers.size() == 1);
  return writers.at(0);
}

void prog::sanity_check() {
  std::set<string> buffer_names;

  for (auto op : all_ops()) {
    auto surrounding = surrounding_vars(op, *this);
    for (auto compute_var : op->index_variables_needed_by_compute) {
      if (!(elem(compute_var, surrounding))) {
        cout << "Error: " << op->name << "'s compute unit needs index variable: " << compute_var << ", but this variable is not one of its surrounding loop index variables, which are: " << comma_list(surrounding) << endl;
      }
      assert(elem(compute_var, surrounding));
    }
  }

  std::set<string> op_names;
  for (auto op : all_ops()) {
    if (!(!elem(op->name, op_names))) {
      cout << "Error: Multiple ops named: " << op->name << endl;
    }
    assert(!elem(op->name, op_names));
    op_names.insert(op->name);
  }

  std::set<string> loop_names;
  for (auto lp : all_loops()) {
    if (!(!elem(lp->name, loop_names))) {
      cout << "Error: Loop named " << lp->name << " is duplicated! Loop index variable names must be unique" << endl;
    }
    assert(!elem(lp->name, loop_names));
    loop_names.insert(lp->name);
  }

  for (auto op : all_ops()) {
    for (auto b : op->buffers_read()) {
      buffer_names.insert(b);
      if (is_output(b)) {
        cout << "Error: Reading from output buffer: " << b << endl;
      }
      assert(!is_output(b));
    }

    for (auto b : op->buffers_written()) {
      buffer_names.insert(b);
      if (is_input(b)) {
        cout << "Error: " << b << " is written, but it is an input" << endl;
      }
      assert(!is_input(b));
    }
  }

  for (auto b : all_buffers(*this)) {
    if (!is_boundary(b)) {
      auto readers = find_readers(b, *this);
      auto writers = find_writers(b, *this);
      if (readers.size() > 0 && writers.size() == 0) {
        cout << "Error: " << b << " has " << readers.size() << " readers, but it is never written." << endl;
        assert(false);
      }
    }
  }
  //for (auto b : buffer_names) {
    //if (elem(b, op_names)) {
      //cout << "Error: Buffer " << b << " has the same name as an op" << endl;
    //}
    //assert(!elem(b, op_names));
  //}

  //auto ivars = iter_vars();
  //for (auto op : all_ops()) {
    //vector<string> ivs = map_find(op, ivars);
    //vector<string> used_vars =
      //used_vars(op, prg);
    //for (auto v : used_vars) {
      //assert(elem(v, ivs));
    //}
  //}
}

//Get producer in coarse grained loop nest sub ast
std::set<string> get_producers(string next_kernel, op* root, prog& prg) {

  //   cout << "next kernel: " << next_kernel<< endl;
  std::set<string> producers;
  op* loop = prg.find_non_op(next_kernel);

  std::set<string> buffers_read;
  for (auto op : prg.find_non_op(next_kernel)->descendant_ops()) {
    for (auto buff : op->buffers_read()){
      buffers_read.insert(buff);
      //             cout << tab(1) << buff << endl;
    }
  }

  //   cout << "getting other_kernels"<< endl;
  for (auto other_kernel : get_kernels(root)) {
    if (other_kernel != next_kernel) {
      std::set<string> buffers_written;
      for (auto op : prg.find_non_op(other_kernel)->descendant_ops()) {
        for (auto buff : op -> buffers_written()) {
          buffers_written.insert(buff);
        }
      }


      if (intersection(buffers_written, buffers_read).size() > 0) {
        producers.insert(other_kernel);
        //                           cout << "producer name: " << other_kernel << endl;
      }
    }

  }
  return producers;
}


std::set<string> get_producers(string next_kernel, prog& prg) {

  //   cout << "next kernel: " << next_kernel<< endl;
  std::set<string> producers;
  op* loop = prg.find_loop(next_kernel);

  std::set<string> buffers_read;
  for (auto op : prg.find_loop(next_kernel)->descendant_ops()) {
    for (auto buff : op->buffers_read()){
      buffers_read.insert(buff);
      //             cout << tab(1) << buff << endl;
    }
  }

  //   cout << "getting other_kernels"<< endl;
  for (auto other_kernel : get_kernels(prg)) {
    if (other_kernel != next_kernel) {
      std::set<string> buffers_written;
      for (auto op : prg.find_loop(other_kernel)->descendant_ops()) {
        for (auto buff : op -> buffers_written()) {
          buffers_written.insert(buff);
        }
      }


      if (intersection(buffers_written, buffers_read).size() > 0) {
        producers.insert(other_kernel);
        //                           cout << "producer name: " << other_kernel << endl;
      }
    }

  }
  return producers;
}


void ir_node::copy_fields_from(op* other){
  name = other->name;
  start = other -> start;
  end_exclusive = other -> end_exclusive;
  produce_locs = other -> produce_locs;
  unroll_factor = other -> unroll_factor;
  dynamic_store_addresses = other -> dynamic_store_addresses;
  consume_locs_pair = other -> consume_locs_pair;
  dynamic_load_addresses = other -> dynamic_load_addresses;
  index_variables_needed_by_compute = other -> index_variables_needed_by_compute;
  func = other -> func;
}

void deep_copy_child(op* dest, op* source, prog& original){
  op* kernel_copy;
  if (source -> is_loop()){
    kernel_copy = dest -> add_loop(source->name, original.start(source->name), original.end_exclusive(source->name));
    for(auto child : original.find_loop(source->name)->children){
      deep_copy_child(kernel_copy, child, original);
    }
  } else{
    assert(source->is_op());
    kernel_copy = dest -> add_op(source -> name);
    kernel_copy->copy_fields_from(source);
  }
}

std::set<string> get_consumed_buffers(const std::string& kernel, prog& original){
  return get_consumed_buffers(std::set<string>{kernel}, original);
}

std::set<string> get_produced_buffers(const std::string& kernel, prog& original){
  return get_produced_buffers(std::set<string>{kernel}, original);
}

std::set<string> get_consumed_buffers(const std::set<std::string>& group, prog& original){
	std::set<string> all_consumed_buffers;
	for(auto kernel_in_group : group){
		auto kernel_ops = original.find_loop(kernel_in_group)->descendant_ops();
		for(auto op : kernel_ops){
			std::set<string> all_buffers_read = op->buffers_read();
			for(auto buffer : all_buffers_read){
				all_consumed_buffers.insert(buffer);
			}
		}
	}
	return all_consumed_buffers;
}

std::set<string> get_produced_buffers(const std::set<std::string>& group, prog& original){
	std::set<string> all_produced_buffers;
	for(auto kernel_in_group : group){
		auto kernel_ops = original.find_loop(kernel_in_group)->descendant_ops();
		for(auto op : kernel_ops){
			std::set<string> all_buffers_written = op->buffers_written();
			for(auto buffer : all_buffers_written){
				all_produced_buffers.insert(buffer);
			}
		}
	}
	return all_produced_buffers;
}


umap* hardware_schedule(prog& prg) {
  auto hs = hardware_schedule_umap(prg.whole_iteration_domain(), prg.validity_deps(), prg.validity_deps());
  return hs;
}

std::string optimized_code_string(prog& prg) {
  auto sched = prg.optimized_codegen();
  cout << "sched map" << str(sched) << endl;
  return codegen_c(its(sched, prg.whole_iteration_domain()));
}

void generate_compute_trace(
    std::ostream& conv_out,
    prog& prg,
    op* op,
    map<string, isl_set*> domain_map) {

  cout << "Generating compute for: " << op->name << endl;

  //compute_kernel kernel;
  //kernel.name = op->name;
  //kernel.functional_unit = op->func;

  vector<string> buf_srcs;

  auto s = get_space(domain_map.at(op->name));

  for (auto a : space_var_decls(s)) {
    buf_srcs.push_back(a);
  }

  cout << "Got iteration variables" << endl;
  conv_out << "inline void " << op->name << sep_list(buf_srcs, "(", ")", ", ") << " {" << endl;
  conv_out << tab(1) << "cout << \"" << op->name << "\" << endl;" << endl;

  conv_out << endl;
  open_debug_scope(conv_out);

  ////cout << "emitting bundle code" << endl;
  //auto& buf = buffers.at(out_buffer);
  //int bundle_width = buf.port_bundle_width(bundle_name);

  //int unroll_factor = op->unroll_factor;
  //int element_width = bundle_width / op->unroll_factor;


  //string dbg_res_name = "debug_" + res;
  //conv_out << tab(1) << "hw_uint<" << bundle_width << "> " << dbg_res_name << "(" << res << ");" << endl;
  //vector<string> lane_values =
    //split_bv(1, conv_out, dbg_res_name, element_width, op->unroll_factor);

  //for (int lane = 0; lane < unroll_factor; lane++) {
    //conv_out << tab(1) << "*global_debug_handle << \"" << op->name << ",\" << ";
    //int i = 0;
    //for (auto v : kernel.iteration_variables) {
      //if (i == 0) {
        //conv_out << "(" << unroll_factor << "*" << v << " + " << lane << ") << \",\" << ";
      //} else {
        //conv_out << v << "<< \",\" << ";
      //}
      //i++;
    //}
    //assert(lane < lane_values.size());
    //conv_out << " " << lane_values.at(lane) << " << endl;" << endl;
  //}

  close_debug_scope(conv_out);
  conv_out << endl;
  conv_out << "}" << endl << endl;

}

void generate_trace(prog& prg, umap* schedmap) {

  ofstream conv_out(prg.name + "_trace.cpp");

  conv_out << "#include <iostream>" << endl << endl;
  conv_out << "using namespace std;" << endl << endl;

  auto domains = prg.domains();
  map<string, isl_set*> domain_map;
  for (auto d : domains) {
    domain_map[d.first->name] = d.second;
  }
  conv_out << "// Operation logic" << endl;
  for (auto op : prg.all_ops()) {
    generate_compute_trace(conv_out, prg, op, domain_map);
  }

  conv_out << "// Driver function" << endl;
  conv_out << "void " << prg.name << "() {" << endl << endl;

  string code_string = codegen_c(schedmap);
  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");

  //for (auto op : prg.all_ops()) {
    //regex re("(\n\t\\s+)" + op->name + "\\((.*)\\);");
    //string args_list = sep_list(buffer_arg_names(buffers, op, prg), "", "", ", ");
    ////code_string = regex_replace(code_string, re, "\n\t" + op->name + "(" + args_list + ", $1);");
    //code_string = regex_replace(code_string, re, "$1" + op->name + "(" + args_list + ", $2);");
  //}

  conv_out << "// schedule: " << str(schedmap) << endl;
  for (auto s : get_maps(schedmap)) {
    conv_out << "// " << tab(1) << str(s) << endl;
    conv_out << "// Condition for " << domain_name(s) << codegen_c(range(s)) << endl;
  }
  conv_out << endl;

  conv_out << code_string << endl;

  conv_out << "}" << endl << endl;

  conv_out << "int main() {" << endl;
  conv_out << tab(1) << prg.name << "();" << endl;
  conv_out << "}" << endl;

  conv_out << endl;

  conv_out.close();
}

void all_exhaustive_banked(prog& prg, CodegenOptions& options) {
  for (auto op : prg.all_ops()) {
    for (auto b : op->buffers_referenced()) {
      options.banking_strategies[b] = {"exhaustive"};
    }
  }
}

void all_unbanked(prog& prg, CodegenOptions& options) {
  for (auto op : prg.all_ops()) {
    for (auto b : op->buffers_referenced()) {
      options.banking_strategies[b] = {"none"};
    }
  }
}

void all_register_files(prog& prg, CodegenOptions& options) {
  for (auto op : prg.all_ops()) {
    for (auto b : op->buffers_referenced()) {
      options.banking_strategies[b] = {"register_file"};
    }
  }
}


op* prog::merge_ops(const std::string& loop) {
  cout << "Merging ops at: " << loop << endl;
  auto lp = find_loop(loop);
  if (lp->children.size() == 1) {
    return pick(lp->children);
  }
  vector<op*> children_copies = lp->children;
  lp->children = {};
  op* merged = lp->add_op(unique_name("merged"));
  for (auto c : children_copies) {
    assert(!c->is_loop());
    merged->copy_memory_operations_from(c);
  }
  merged->add_function(un(loop + "_merged_cu"));
  lp->pretty_print(1);
  return merged;
}

void ir_node::copy_memory_operations_from(op* other) {
  assert(!other->is_loop());

  //for (auto pl : other->produce_locs) {
    //if (!elem(remove_whitespace(pl), produce_locs)) {
      ////cout << pl.first << ", " << pl.second << " is not one of" << endl;
      ////for (auto p : produce_locs) {
        ////cout << tab(1) << p.first << ", " << p.second << endl;
      ////}
      //produce_locs.push_back(remove_whitespace(pl));
    //}  else {
    //}
  //}

  for (auto pl : other->produce_locs) {
    pair<string, piecewise_address> simpl{pl.first, remove_whitespace(pl.second)};
    if (!elem(simpl, produce_locs)) {
      produce_locs.push_back(simpl);
    }
  }

  concat(dynamic_store_addresses, other->dynamic_store_addresses);

  for (auto pl : other->consume_locs_pair) {
    pair<string, piecewise_address> simpl{pl.first, remove_whitespace(pl.second)};
    if (!elem(simpl, consume_locs_pair)) {
      consume_locs_pair.push_back(simpl);
    }
  }
  concat(dynamic_load_addresses, other->dynamic_load_addresses);
}

vector<op*> surrounding_vars_ops(op* loop, prog& prg) {
  assert(loop != nullptr);
  vector<op*> surrounding;
  op* current = prg.root;
  while (current != loop) {
    surrounding.push_back(current);
    current = current->container_child(loop);
  }
  return surrounding;
}

vector<string> surrounding_vars(const std::string& op, prog& prg) {
  return surrounding_vars(prg.find_op(op), prg);
}

vector<string> surrounding_vars(op* loop, prog& prg) {
  assert(loop != nullptr);
  vector<string> surrounding;
  op* current = prg.root;
  while (current != loop) {
    if (current->is_loop())
      surrounding.push_back(current->name);
    current = current->container_child(loop);
  }
  return surrounding;
}


op* prog::parent(op* p) {
  return find_loop(surrounding_vars(p, *this).back());
}

string simplify_address_component(const std::string& addr_comp_orig) {
  string addr_comp = addr_comp_orig;

  bool matched = true;
  while (matched) {
    matched = false;
    regex re("\\s*floor\\(\\s*(.*)\\s*/\\s*(.*)\\s*\\)\\s*");
    smatch sm;

    cout << "Simplifying: " << addr_comp << endl;
    auto res = regex_search(addr_comp, sm, re);
    string num = sm[1];
    string denom = sm[2];
    if (res && is_number(num) && is_number(denom)) {
      matched = true;
      for (int i = 0; i < sm.size(); i++) {
        cout << tab(1) << sm[i] << endl;
      }
      assert(sm.size() == 3);
      int inum = stoi(num);
      int idenom = stoi(denom);
      int iquot = floor(inum / idenom);
      addr_comp = ReplaceString(addr_comp, sm[0], str(iquot));
    }
  }

  return addr_comp;
  //string simplified = regex_replace(addr_comp, re, "$1" + op->name + "(" + args_list + ", $2);");
  //return simplified;
}

address
replace_variable(const address& addr, const std::string& var, const std::string& val) {
  vector<string> comps = split_at(addr, ",");
  vector<string> new_addr;
  for (auto c : comps) {
    cout << tab(1) << c << endl;
    new_addr.push_back(simplify_address_component(ReplaceString(c, var, val)));
  }
  return comma_list(new_addr);
}

address
replace_variable(const address& addr, const std::string& var, const int v) {

  vector<string> comps = split_at(addr, ",");
  vector<string> new_addr;
  for (auto c : comps) {
    cout << tab(1) << c << endl;
    new_addr.push_back(simplify_address_component(ReplaceString(c, var, str(v))));
  }
  return comma_list(new_addr);
}

void ir_node::shift_address(const string & buf, const std::vector<int> & min_locs) {
  //TODO: replace this into a method
  for (auto & p : produce_locs) {
    if (p.first == buf) {
      cout << "Visit produce locations: " << p.first << ": addr =  " <<  str(p.second) << endl;
      //cout << p.second.size() << endl;
      for (size_t i = 0; i < p.second.size(); i ++ ) {
          vector<string> new_addr;
          vector<string> origin_addr = split_at(p.second.at(i).second, ",");
          assert(origin_addr.size() == min_locs.size());
          for (size_t dim = 0; dim < origin_addr.size(); dim ++) {
              new_addr.push_back(origin_addr.at(dim) + "+" + to_string(- min_locs.at(dim)));
              //cout << "norm address" << new_addr.at(dim) << endl;
          }
          p.second.at(i).second = comma_list(new_addr);
      }
      cout << "New produce locations: " << p.first << ": addr =  " <<  str(p.second) << endl;
    }
  }

  for (auto & p : consume_locs_pair) {
    if (p.first == buf) {
      cout << "Visit consume locations: " << p.first << ": addr =  " <<  str(p.second) << endl;
      //cout << p.second.size() << endl;
      for (size_t i = 0; i < p.second.size(); i ++ ) {
          vector<string> new_addr;
          vector<string> origin_addr = split_at(p.second.at(i).second, ",");
          assert(origin_addr.size() == min_locs.size());
          for (size_t dim = 0; dim < origin_addr.size(); dim ++) {
              new_addr.push_back(origin_addr.at(dim) + "+" + to_string(- min_locs.at(dim)));
              //cout << "norm address" << new_addr.at(dim) << endl;
          }
          p.second.at(i).second = comma_list(new_addr);
      }
      cout << "New consume locations: " << p.first << ": addr =  " <<  str(p.second) << endl;
    }
  }
}

void ir_node::replace_variable(const std::string& var, const std::string& val) {
  if (is_loop()) {
    for (auto c : children) {
      c->replace_variable(var, val);
    }
  }

  for (auto& addr : produce_locs) {
    piecewise_address pw;
    for (auto& comp : addr.second) {
      cout << "replacing " << var << " with " << val << " in " << comp.second << endl;
      pw.push_back({comp.first, ::replace_variable(comp.second, var, val)});
    }
    addr.second = pw;
  }

  for (auto& addr : consume_locs_pair) {
    piecewise_address pw;
    for (auto& comp : addr.second) {
      pw.push_back({comp.first, ::replace_variable(comp.second, var, val)});
    }
    addr.second = pw;
  }

}

void ir_node::replace_variable(const std::string& var, const int val) {
  if (is_loop()) {
    for (auto c : children) {
      c->replace_variable(var, val);
    }
  }
  for (auto& addr : produce_locs) {
    piecewise_address pw;
    for (auto& comp : addr.second) {
      pw.push_back({comp.first, ::replace_variable(comp.second, var, val)});
    }
    addr.second = pw;
  }

  for (auto& addr : consume_locs_pair) {
    piecewise_address pw;
    for (auto& comp : addr.second) {
      pw.push_back({comp.first, ::replace_variable(comp.second, var, val)});
    }
    addr.second = pw;
  }

}

void unroll_reduce_loops(prog& prg) {
  auto rvars = reduce_vars(prg);
  cout << "Reduce vars..." << endl;
  for (auto v : rvars) {
    auto lp = prg.find_loop(v);
    cout << tab(1) << v << " [" << lp->start << ", " << lp->end_exclusive << "]" << endl;
  }

  auto levels = get_variable_levels(prg);
  sort_gt(rvars, [&levels](const std::string& v) {
      return map_find(v, levels);
      });

  cout << "Starting to unroll..." << endl;
  for (auto v : rvars) {
    unroll(prg, v);
    cout << "Unrolled: " << tab(1) << v << endl;
  }
}

void unroll(prog& prg, const std::string& var) {
  cout << "Unrolling: " << var << endl;
  op* p = prg.find_loop(var);
  vector<op*> children = p->children;
  op* container = prg.parent(p);

  op* last_position = p;
  for (auto v : indexes(p)) {
    for (auto child : children) {
      if (!child->is_loop()) {
        string name = prg.unique_name(isl_sanitize(child->name + "_" + var + "_" + str(v)));
        auto val = container->add_op_after(last_position, prg.unique_name(child->name + "_" + var + "_" + str(v)));
        val->copy_fields_from(child);
        val->replace_variable(var, v);
        val->name = name;
        last_position = val;
      } else {
        cout << "Error: Unrolling loop that contains a loop" << endl;
        assert(false);
      }
    }
  }

  container->delete_child(p);
}

vector<int> indexes(op* p) {
  assert(p->is_loop());
  vector<int> inds;
  for (int i = p->start; i < p->end_exclusive; i++) {
    inds.push_back(i);
  }
  return inds;
}

  map<op*, isl_map*> prog::producer_maps_no_domain() {
    map<op*, isl_map*> m;
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    for (auto op : ops) {
      cout << "producer map for: " << op->name << endl;
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = rdmap(ctx, "{}");
      for (auto p : op->produces()) {
        cout << tab(1) << "produced: " << p << endl;
          isl_union_map* vmap =
            rdmap(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str());
          pmap = unn(pmap, vmap);
      }
      m[op] = to_map(pmap);
    }
    return m;
  }


void prog::extend_bounds(const std::string& loop, const int start, const int end_exclusive) {
  auto lp = find_loop(loop);
  lp->start = min(start, lp->start);
  lp->end_exclusive = max(end_exclusive, lp->end_exclusive);
}

void prog::set_bounds(const std::string& loop, const int start, const int end_exclusive) {
  auto lp = find_loop(loop);
  lp->start = start;
  lp->end_exclusive = end_exclusive;
}

isl_set* make_bound_set(const std::string& buf, const std::vector<int>& bounds, prog& prg) {
  vector<string> vars;
  vector<string> bnds;
  int d = 0;
  for (int b : bounds) {
    vars.push_back("d" + str(d));
    bnds.push_back("0 <= " + vars.at(d) + " < " + str(b));
    d++;
  }
  string sstr = curlies(buf + bracket_list(vars) + " : " + sep_list(bnds, "", "", " and "));
  return rdset(prg.ctx, sstr);
}

int nearest_larger_multiple_of(const int factor, const int val) {
  assert(val >= 0);
  int residue = val % factor;
  if (residue == 0) {
    return val;
  }
  int mult = val + (factor - residue);
  assert(mult % factor == 0);
  return mult;
}
vector<int> extend_bounds_to_multiple(const int factor, const std::string& buf, prog& prg) {
  assert(contains_key(buf, prg.buffer_bounds));

  vector<int> bounds = map_find(buf, prg.buffer_bounds);
  vector<int> new_bounds = bounds;
  new_bounds[0] = nearest_larger_multiple_of(factor, bounds[0]);
  return new_bounds;
}

bool all_inputs(std::set<isl_set*>& bounds, prog& prg) {
  bool all_inputs = true;
  for (auto b : bounds) {
    if (!prg.is_input(name(b))) {
      all_inputs = false;
      break;
    }
  }

  return all_inputs;
}

void extend_bounds_to_multiple_of(const int factor, const std::string& buf, prog& prg) {
  vector<int> int_bounds = extend_bounds_to_multiple(factor, buf, prg);
  prg.buffer_bounds[buf] = int_bounds;

  std::vector<string> kernels = get_kernels_in_order(prg);
  reverse(kernels);

  isl_set* bound_set = make_bound_set(buf, int_bounds, prg);

  std::set<isl_set*> bounds{bound_set};
  std::set<string> bounded;

  auto m = prg.producer_maps_no_domain();

  while (bounds.size() > 0) {
    isl_set* bound_set = nullptr;

    if (all_inputs(bounds, prg)) {
      break;
    }

    string next_kernel = "";
    bool found = false;
    for (auto k : kernels) {
      for (auto prod : get_produced_buffers(k, prg)) {
        for (auto s : bounds) {
          if (name(s) == prod) {
            next_kernel = k;
            bound_set = s;
            found = true;
            break;
          }
        }
        if (found) {
          break;
        }
      }
      if (found) {
        break;
      }
    }
    assert(bound_set != nullptr);
    assert(next_kernel != "");

    cout << "==== Inferring bounds for buffer: " << name(bound_set) << ", produced by: " << next_kernel << endl;

    bounds.erase(bound_set);
    string buf = name(bound_set);
    if (prg.is_input(buf)) {
      continue;
    }

    cout << "Kernel: " << next_kernel << " produces " << buf << endl;
    op* dop = nullptr;
    for (auto op : prg.find_loop(next_kernel)->descendant_ops()) {
      if (!op->is_loop()) {
        dop = op;
        break;
      }
    }
    assert(dop != nullptr);

    std::vector<string> wvs = write_vars(buf, dop, prg);

    isl_map* prod = map_find(dop, m);
    cout << tab(1) << "op    : " << dop->name << endl;
    cout << tab(1) << "bounds: " << str(bound_set) << endl;
    cout << tab(1) << "prod  : " << str(prod) << endl;

    auto loop_bounds =
      domain(its_range(prod, bound_set));
    cout << tab(1) << "loop bounds: " << str(loop_bounds) << endl;
    for (int i = 0; i < num_dims(loop_bounds); i++) {
      string val = dim_name(loop_bounds, i);
      if (elem(val, wvs)) {
        auto pr = project_all_but(loop_bounds, i);
        int lb = to_int(lexminval(pr));
        int ub = to_int(lexmaxval(pr)) + 1;
        prg.extend_bounds(val, lb, ub);

        if (val == wvs.front()) {
          int old_trip_count = prg.trip_count(val);
          auto val_loop = prg.find_loop(val);

          cout << "factor                  = " << factor << endl;
          //cout << "lb                      = " << lb << endl;
          //cout << "ub                      = " << ub << endl;
          cout << "original start          = " << val_loop->start << endl;
          cout << "original end_exclusive  = " << val_loop->end_exclusive << endl;
          cout << "original trip_count     = " << old_trip_count << endl;

          int new_length = nearest_larger_multiple_of(factor, old_trip_count);

          cout << "new length              = " << new_length << endl;

          int new_ub = val_loop->start + new_length;

          //cout << "new ub                  = " << ub << endl;
          assert(new_ub >= ub);
          prg.extend_bounds(val, val_loop->start, new_ub);

          int new_trip_count = val_loop->trip_count();
          cout << "new trip count          = " << new_trip_count << endl;

          assert(new_trip_count == new_length);
          assert(new_trip_count >= old_trip_count);
          assert(new_trip_count % factor == 0);
        } else {
        }
      }
    }

    for (auto op : prg.find_loop(next_kernel)->descendant_ops()) {
      auto data_read =
        consumer_umap(op, prg);
      assert(data_read != nullptr);
      cout << tab(1) << "op: " << op->name << " reads: " << str(data_read) << endl;
      auto ms = coalesce(range(data_read));
      cout << tab(1) << "dom  : " << str(domain(data_read)) << endl;
      cout << tab(1) << "range: " << str(ms) << endl;
      for (auto s : get_sets(ms)) {
        bool obvious_duplicate = false;
        for (auto other : bounds) {
          if (isl_set_plain_is_equal(s, other)) {
            obvious_duplicate = true;
            break;
          }
        }
        if (!obvious_duplicate && !elem(name(s), bounded) && name(s) != buf) {
          bounds.insert(s);
        }
      }
    }

    cout << "Next bound sets..." << endl;
    for (auto s : bounds){
      cout << tab(1) << str(s) << endl;
    }

    vector<int> int_bounds_for_s = extents(bound_set);
    int_bounds_for_s = extend_bounds_to_multiple(factor, name(bound_set), prg);
    prg.buffer_bounds[name(bound_set)] = int_bounds_for_s;
    bounded.insert(name(bound_set));
  }

  for (auto bound_set : bounds) {
    vector<int> int_bounds_for_s = extents(bound_set);
    prg.buffer_bounds[name(bound_set)] = int_bounds_for_s;
  }

  prg.pretty_print();
  //assert(inner_loops_unrollable(buf, factor, prg));
  sanity_check_all_reads_defined(prg);
}

void infer_bounds(const std::string& buf, const std::vector<int>& int_bounds, prog& prg) {
  prg.buffer_bounds[buf] = int_bounds;

  //std::vector<string> kernels = topologically_sort_kernels(prg);
  std::vector<string> kernels = get_kernels_in_order(prg);
  reverse(kernels);
  cout << "Reverse order kernels..." << endl;
  for (auto k : kernels) {
    cout << tab(1) << k << endl;
  }

  isl_set* bound_set = make_bound_set(buf, int_bounds, prg);

  std::set<isl_set*> bounds{bound_set};
  std::set<string> bounded;

  auto m = prg.producer_maps_no_domain();

  while (bounds.size() > 0) {

    bool all_inputs = true;
    for (auto b : bounds) {
      if (!prg.is_input(name(b))) {
        all_inputs = false;
        break;
      }
    }

    if (all_inputs) {
      break;
    }

    isl_set* bound_set = nullptr;
    string next_kernel = "";
    bool found = false;
    for (auto k : kernels) {
      for (auto prod : get_produced_buffers(k, prg)) {
        for (auto s : bounds) {
          if (name(s) == prod) {
            next_kernel = k;
            bound_set = s;
            found = true;
            break;
          }
        }
        if (found) {
          break;
        }
      }
      if (found) {
        break;
      }
    }
    assert(bound_set != nullptr);

    cout << "==== Inferring bounds for buffer: " << name(bound_set) << ", produced by: " << next_kernel << endl;

    bounds.erase(bound_set);
    string buf = name(bound_set);
    if (prg.is_input(buf)) {
      continue;
    }

    assert(next_kernel != "");

    cout << tab(1) << "Kernel: " << next_kernel << " produces " << buf << endl;
    op* dop = nullptr;
    for (auto op : prg.find_loop(next_kernel)->descendant_ops()) {
      if (!op->is_loop()) {
        dop = op;
        break;
      }
    }
    assert(dop != nullptr);

    std::vector<string> wvs = write_vars(buf, dop, prg);

    isl_map* prod = map_find(dop, m);
    cout << tab(1) << "bounds: " << str(bound_set) << endl;
    cout << tab(1) << "prod  : " << str(prod) << endl;
    auto loop_bounds =
      domain(its_range(prod, bound_set));
    cout << tab(1) << "loop bounds: " << str(loop_bounds) << endl;
    for (int i = 0; i < num_dims(loop_bounds); i++) {
      string val = dim_name(loop_bounds, i);
      if (elem(val, wvs)) {
        auto pr = project_all_but(loop_bounds, i);
        int lb = to_int(lexminval(pr));
        int ub = to_int(lexmaxval(pr)) + 1;
        prg.extend_bounds(val, lb, ub);
      }
    }

    cout << "Got bounds..." << endl;

    //auto cm = prg.consumer_maps();

    cout << "Got consumer maps" << endl;
    for (auto op : prg.find_loop(next_kernel)->descendant_ops()) {
      //auto data_read = map_find(op, cm);
      auto data_read =
        consumer_umap(op, prg);
      //cout << "op: " << endl;
      //op->pretty_print(cout, 1);
      //cout << "consumer map: " << str(map_find(op, cm)) << endl;
      assert(data_read != nullptr);

      cout << tab(1) << "Getting op " << op->name << endl;
      cout << tab(1) << "op: " << op->name << " reads: " << str(data_read) << endl;
      auto ms = coalesce(range(data_read));
      cout << tab(1) << "dom  : " << str(domain(data_read)) << endl;
      cout << tab(1) << "range: " << str(ms) << endl;
      for (auto s : get_sets(ms)) {
        bool obvious_duplicate = false;
        for (auto other : bounds) {
          if (isl_set_plain_is_equal(s, other)) {
            obvious_duplicate = true;
            break;
          }
        }
        if (!obvious_duplicate && !elem(name(s), bounded) && name(s) != buf) {
          bounds.insert(s);
        }
      }
    }

    cout << "Next bound sets..." << endl;
    for (auto s : bounds){
      cout << tab(1) << str(s) << endl;
    }

    vector<int> int_bounds_for_s;
    for (int d = 0; d < num_dims(bound_set); d++) {
      auto pr = project_all_but(bound_set, d);
      int lb = to_int(lexminval(pr));
      int ub = to_int(lexmaxval(pr)) + 1;
      int_bounds_for_s.push_back(ub - lb);
    }
    prg.buffer_bounds[name(bound_set)] = int_bounds_for_s;
    bounded.insert(name(bound_set));

  }

  for (auto bound_set : bounds) {
    vector<int> int_bounds_for_s;
    for (int d = 0; d < num_dims(bound_set); d++) {
      auto pr = project_all_but(bound_set, d);
      int lb = to_int(lexminval(pr));
      int ub = to_int(lexmaxval(pr)) + 1;
      int_bounds_for_s.push_back(ub - lb);
    }
    prg.buffer_bounds[name(bound_set)] = int_bounds_for_s;
  }

}

isl_schedule* prog::optimized_schedule() {
  auto domain = whole_iteration_domain();

  auto order_deps = relative_orders();
  cout << "Order deps..." << endl;
  cout << tab(1) << str(order_deps) << endl;
  cout << "Getting validity deps..." << endl;
  isl_union_map *raw_deps = validity_deps();
  cout << "Got validity deps..." << endl;
  auto validity =
    unn(order_deps, raw_deps);
  isl_union_map *proximity =
    cpy(raw_deps);

  cout << "Computing schedule for: " << str(domain) << endl << tab(1) << " subject to " << str(validity) << endl;
  cout << "Getting schedule..." << endl;

  double total_elapsed = 0.;
  auto start = std::chrono::system_clock::now();

  isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);

  auto end = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed = end - start;
  total_elapsed += elapsed.count();

  cout << "### Schedule elapsed: " << total_elapsed << endl;

  cout << endl;
  cout << "Result: " << str(sched) << endl;

  //assert(false);

  return sched;
}

void get_op_levels(op* node, map<string,int>& variable_map, int current_level){
	if(!node->is_loop()){
    variable_map[node->name] = current_level;
	} else {
		variable_map[node->name] = current_level;
		current_level++;
		for(auto child : node->children){
			get_op_levels(child, variable_map, current_level);
		}
	}
}

map<string, int> get_op_levels(prog& prg){
	map<string, int> variable_map;
	get_op_levels(prg.root, variable_map, 0);
	return variable_map;
}

void get_variable_levels(op* node, map<string,int>& variable_map, int current_level){
	if(node->is_op()){
		return;

	}if (node->is_if()){
        //Do not increment level but look into it's children
		for(auto child : node->children){
			get_variable_levels(child, variable_map, current_level);
		}
    }else{
		variable_map[node->name] = current_level;
		current_level++;
		for(auto child : node->children){
			get_variable_levels(child, variable_map, current_level);
		}
	}
}

map<string, int> get_variable_levels(prog& prg){
	map<string, int> variable_map;
	get_variable_levels(prg.root, variable_map, 0);
	return variable_map;
}

std::set<op*> find_writers(const string& buff, prog& prg){
	std::set<op*> readers;

	for(auto op : prg.all_ops()){
		if(elem(buff, op->buffers_written())){
			readers.insert(op);
		}
	}

	return readers;
}
std::set<op*> find_readers(const string& buff, prog& prg){
	std::set<op*> readers;

	for(auto op : prg.all_ops()){
		if(elem(buff, op->buffers_read())){
			readers.insert(op);
		}
	}

	return readers;
}


// std::set<std::set<string>>group_kernels_for_compilation(prog& prg,map<string,int>& kernel_costs,const int max_area_cost_per_group){

// 	std::vector<string> topologically_sorted_kernels = topologically_sort_kernels(prg);
// 	std::set<std::set<string>> groups;
// 	std::set<string> current_group;
// 	int current_group_cost = 0;

// 	assert(topologically_sorted_kernels.size() == get_kernels(prg).size());

// 	cout << "Topologically sorted kernels:" << endl;
// 	for(auto kernel : topologically_sorted_kernels){
// 		cout << kernel << endl;
// 		if (current_group_cost + map_find(kernel, kernel_costs) > max_area_cost_per_group) {
// 			groups.insert(current_group);
// 			current_group = {kernel};
// 			current_group_cost = map_find(kernel, kernel_costs);
// 		} else {
// 			current_group.insert({kernel});
// 			current_group_cost += map_find(kernel, kernel_costs);
// 		}
// 	}

// 	groups.insert(current_group);

// 	// Sanity check
// 	int num_kernels_in_groups = 0;
// 	for (auto g : groups) {
// 		num_kernels_in_groups += g.size();
// 	}

// 	assert(num_kernels_in_groups == get_kernels(prg).size());

// 	return groups;
// }


prog extract_group_to_separate_prog(const std::set<std::string>& group, prog& original) {
	prog extracted;
	string prg_name = "Extracted_";
	for(auto g : group){
	prg_name += g + "_";
	}
	extracted.name = prg_name;

	for(auto kernel : get_kernels_in_order(original)){
		if(elem(kernel, group)){
			op* kernel_copy = extracted.add_loop(kernel, original.start(kernel), original.end_exclusive(kernel));
			for(auto child : original.find_loop(kernel)->children){
				deep_copy_child(kernel_copy, child, original);
			}
		}
	}
	cout << "Programs copied" << endl;

	std::set<string> all_consumed_buffers = get_consumed_buffers(group, original);
	std::set<string> all_produced_buffers = get_produced_buffers(group, original);
  cout << tab(1) << "All consumed buffers" << endl;
  for (auto c : all_consumed_buffers) {
    cout << tab(1) << c << endl;
  }
	for(auto consumed : all_consumed_buffers){
		if(!elem(consumed, all_produced_buffers)){
			extracted.add_input(consumed);
			cout << "Input added: " << consumed << endl;
			extracted.buffer_port_widths[consumed] =
        original.buffer_port_width(consumed);
        //map_find(consumed, original.buffer_port_widths);
			cout << "Input width: " << extracted.buffer_port_widths[consumed] << endl;
		}
	}

	for(auto produced : all_produced_buffers){
		if(!elem(produced, all_consumed_buffers)){
			extracted.add_output(produced);
			cout << "Output added: " << produced << endl;
			extracted.buffer_port_widths[produced] =
        original.buffer_port_width(produced);
			//extracted.buffer_port_widths[produced] = map_find(produced, original.buffer_port_widths);
			cout << "Output width: " << extracted.buffer_port_widths[produced] << endl;
		}
	}

	return extracted;
}

void release(ir_node* op) {
  delete op;
}

void release(prog& prg) {
  delete prg.root;
}

ir_node::~ir_node() {
  for (auto c : children) {
    release(c);
  }
}

op* ir_node::add_op_after(op* after, const std::string& name) {
    auto fo = new op();
    fo->parent = this;
    fo->name = name;
    fo->ctx = ctx;

    vector<op*> new_children;
    bool found_sr = false;
    for (auto c : children) {
      new_children.push_back(c);
      if (c == after) {
        new_children.push_back(fo);
        found_sr = true;
      }
    }
    cout << "After inserting " << name << " we have " << children.size() << " children" << endl;


    assert(found_sr);
    assert(new_children.size() == children.size() + 1);

    this->children = new_children;

    return fo;

}

std::string remove_whitespace(const std::string& addr) {
  string fresh = "";
  for (auto c : addr) {
    if (!isspace(c)) {
      fresh += c;
    }
  }
  return fresh;
}

piecewise_address remove_whitespace(const piecewise_address& addr) {
  piecewise_address r;
  for (auto a : addr) {
    r.push_back({remove_whitespace(a.first), remove_whitespace(a.second)});
  }
  return r;
}

pair<std::string, std::string> remove_whitespace(const pair<std::string, std::string>& addr) {
  return {remove_whitespace(addr.first), remove_whitespace(addr.second)};
}

void infer_bounds_and_unroll(const std::string& out, const std::vector<int>& bounds, const int unroll_factor, prog& prg) {

  infer_bounds(out, bounds, prg);
  prg.reset_context();

  extend_bounds_to_multiple_of(unroll_factor, out, prg);
  //assert(inner_loops_unrollable(out, unroll_factor, prg));

  unroll_reduce_loops(prg);
  //assert(inner_loops_unrollable(out, unroll_factor, prg));

  normalize_bounds(prg);
  //assert(inner_loops_unrollable(out, unroll_factor, prg));

  merge_basic_block_ops(prg);
  //assert(inner_loops_unrollable(out, unroll_factor, prg));

  unroll_producer_matching(out, unroll_factor, prg);
  merge_basic_block_ops(prg);
}

void normalize_bounds(prog& prg) {
  auto loops = prg.all_loops();
  for (auto l : loops) {
    if (l->start != 0) {
      int old_tc = l->trip_count();
      int old_start = l->start;
      int old_end = l->end_exclusive;

      l->start = 0;
      l->end_exclusive = old_tc;

      string replacement =
        parens(l->name + " + " + str(old_start));
      for (auto c : l->descendant_ops()) {
        c->replace_variable(l->name, replacement);
      }
      assert(old_tc == l->trip_count());
    }
  }
}

op* strip_mine(const int factor, const std::string& loop, prog& prg) {
  return strip_mine(factor, prg.find_loop(loop), prg);
}

op* strip_mine(const int factor, op* loop, prog& prg) {
  assert(loop->is_loop());
  assert(loop->trip_count() % factor == 0);

  cout << "strip mining loop: " << loop->name << ", start: " << loop->start << ", end exclusive: " << loop->end_exclusive << endl;
  cout << tab(1) << "trip count: " << loop->trip_count() << endl;

  int original_trip_count = loop->trip_count();
  int new_tc = loop->trip_count() / factor;
  cout << tab(1) << "new tc = " << new_tc << endl;
  int new_start = loop->start;

  auto inner = loop->add_loop(prg.un("sm"), 0, factor);
  loop->start = new_start;
  loop->end_exclusive = new_start + new_tc;

  auto children = loop->children;
  // Remove the strip mined loop
  children.pop_back();

  string index =
    parens(str(factor) + "*" + loop->name + " + " + inner->name);
  for (auto c : children) {
    c->replace_variable(loop->name, index);
    inner->children.push_back(c);
  }

  loop->children = {};
  loop->children.push_back(inner);

  cout << "inner tc = " << inner->trip_count() << endl;
  cout << "outer tc = " << loop->trip_count() << endl;
  cout << "orig     = " << original_trip_count << endl;
  assert(inner->trip_count() * loop->trip_count() == original_trip_count);
  return inner;
}

map<string, int> compute_unroll_factors(const std::string& buf, const int unroll_factor, prog& prg) {

  prg.pretty_print();

  umap* deps = pad_map(prg.validity_deps());
  cout << "Done padding validity deps" << endl;
  auto umaps = get_maps(deps);
  vector<isl_map*> projected_deps;
  for (auto m : umaps) {
    isl_map* projected = project_all_but(m, num_in_dims(m) - 1);
    projected_deps.push_back(projected);
  }
  cout << "Computing qfactors..." << endl;
  map<string, isl_val*> qfs = compute_qfactors(projected_deps);
  cout << "Got qfactors..." << endl;
  for (auto q : qfs) {
    cout << tab(1) << q.first << " -> " << str(q.second) << endl;
  }

  auto writers = find_writers(buf, prg);
  cout << "Writers of " << buf << endl;
  for (auto w : writers) {
    cout << tab(1) << w->name << endl;
    assert(!w->is_loop());
  }
  string src = pick(writers)->name;
  cout << "src = " << src << endl;
  int src_q = to_int(map_find("s_" + src, qfs));
  cout << "src_q = " << src_q << endl;

  //assert(false);
  map<string, int> factors;
  std::set<op*> inner_loops = get_inner_loops(prg);
  for (auto loop : inner_loops) {
    auto op = pick(loop->children);
    int qf = to_int(map_find("s_" + op->name, qfs));

    int factor = std::max((int) 1, (int) ceil(unroll_factor / qf));

    assert(factor > 0);

    factors[loop->name] = factor;
  }

  return factors;
}

bool inner_loops_unrollable(const std::string& buf, const int unroll_factor, prog& prg) {
  std::set<op*> inner_loops = get_inner_loops(prg);

  for (auto loop : inner_loops) {
    int factor = unroll_factor;
    //int unroll_factor = map_find(loop->name, unroll_factors);
    int tc = loop->trip_count();

    if (tc % factor != 0) {
      cout << "Error: Trip count " << tc << " is not evenly divisible by " << factor << endl;
      cout << "Loop is..." << endl;
      loop->pretty_print(1);
      return false;
    }
  }
  return true;
}

void unroll_producer_matching(const std::string& buf, const int unroll_factor, prog& prg) {
  std::set<op*> inner_loops = get_inner_loops(prg);
  std::map<string, int> unroll_factors =
    compute_unroll_factors(buf, unroll_factor, prg);

  prg.pretty_print();
  cout << "Unroll factors..." << endl;
  for (auto f : unroll_factors) {
    cout << tab(1) << f.first << " -> " << f.second << endl;
    assert(f.second > 0);
  }
  //assert(false);
  for (auto loop : inner_loops) {
    int factor = map_find(loop->name, unroll_factors);
    int tc = loop->trip_count();

    if (tc % factor != 0) {
      cout << "Error: Trip count " << tc << " is not evenly divisible by " << factor << endl;
      cout << "Loop is..." << endl;
      loop->pretty_print(1);
    }
    assert(tc % factor == 0);
    strip_mine(factor, loop, prg);
  }

  std::set<op*> new_inner_loops = get_inner_loops(prg);
  for (auto loop : new_inner_loops) {
    unroll(prg, loop->name);
  }
}

simplified_addr simplify(const piecewise_address& ar) {
  simplified_addr sa = "";
  for (auto piece : ar) {
    sa += brackets(remove_whitespace(piece.first) + " ? " + remove_whitespace(piece.second));
  }
  return sa;
}

compute_unit_internals compound_compute_unit(op* loop, prog& prg) {
  compute_unit_internals cu;
  cu.name = prg.un(loop->name + "_cu");
  cu.operations = loop->children;

  for (auto op : cu.operations) {
    string name = "res_" + op->name;
    cu.result_names[op] = name;
  }

  map<simplified_addr, cu_val> addr_sources;
  for (auto op : cu.operations) {
    cu.arg_names[op] = {};

    //for (auto b : op->buffers_read()) {
      //for (auto ar : op->read_addrs(b)) {
      for (auto cp : op->consume_locs_pair) {
        string b = cp.first;
        auto ar = cp.second;
        simplified_addr as = simplify(ar);
        as = b + brackets(as);
        if (contains_key(as, addr_sources)) {
          auto val = addr_sources[as];
          cu.arg_names[op].push_back(val);
        } else {
          int index = cu.num_lanes(b);
          cu.arg_names[op].push_back({true, b, index, prg.buffer_port_width(b)});
          cu.raddrs.push_back({b, ar});
        }
      }
      //}
    //}

    for (auto b : op->buffers_written()) {
      // Update addr_sources
      for (auto ar : op->write_addrs(b)) {
        auto as = simplify(ar);
        as = b + brackets(as);
        addr_sources[as] = {false, map_find(op, cu.result_names), 0, prg.buffer_port_width(b)};

        assert(ar.size() == 1);
        pair<string, address> wa{b, remove_whitespace(ar.at(0).second)};
        if (!elem(wa, cu.waddrs)) {
          cu.waddrs.push_back(wa);
        }
      }
    }
  }

  auto rev_children = cu.operations;
  reverse(rev_children);

  for (auto w : cu.waddrs) {

    bool found_last_writer = false;
    for (auto op : rev_children) {
      for (auto b : op->buffers_written()) {
        if (b == w.first) {
          for (auto ar : op->write_addrs(b)) {
            pair<string, address> wa{b, remove_whitespace(ar.at(0).second)};
            if (wa == w) {
              cout << "Found last writer" << endl;
              cu.output_producers.push_back(op);
              found_last_writer = true;
              break;
            }
          }
        }
        if (found_last_writer) {
          break;
        }
      }

      if (found_last_writer) {
        break;
      }
    }

    assert(found_last_writer);
  }

  return cu;
}

void merge_basic_block_ops(prog& prg) {
  std::set<op*> inner_loops = get_inner_loops(prg);

  string new_compute_file = prg.compute_unit_file + "_merged_compute_units.h";

  ofstream out(new_compute_file);
  out << "#include \"" << prg.compute_unit_file << "\"" << endl << endl;

  for (auto loop : inner_loops) {
    if (loop->children.size() > 1) {
      auto compute_unit = compound_compute_unit(loop, prg);

      bool all_ops_cpy = true;
      for (auto op : compute_unit.operations) {
        if (op->func != "") {
          all_ops_cpy = false;
          break;
        }
      }

      vector<string> args;
      map<string, int> arg_pixel_widths;
      for (auto r : compute_unit.buffers_read()) {
        args.push_back("hw_uint<" + str(prg.buffer_port_width(r)) + "*" + str(compute_unit.num_lanes(r)) + ">& " + r);
        arg_pixel_widths[r] = prg.buffer_port_width(r);
      }
      int write_width = 0;
      int write_pixel_width = -1;
      for (auto w : compute_unit.waddrs) {
        write_width += prg.buffer_port_width(w.first);
        write_pixel_width = prg.buffer_port_width(w.first);
      }
      assert(write_pixel_width > 0);

      if (all_ops_cpy) {
        assert(compute_unit.buffers_read().size() == 1);
        out << "hw_uint<" << write_width << "> " << compute_unit.name << "(" << comma_list(args) << ") {" << endl;
        out << tab(1) << "return " << pick(compute_unit.buffers_read()) << ";" << endl;
      } else {

        vector<string> child_calls;
        string last_res = "";
        for (auto c : compute_unit.operations) {
          ostringstream cc;
          vector<string> arg_names;

          vector<cu_val> args = map_find(c, compute_unit.arg_names);
          vector<vector<cu_val> > arg_groups;

          if (args.size() > 0) {
            arg_groups.push_back({args.at(0)});
          }

          for (int i = 1; i < (int) args.size(); i++) {
            cu_val a = arg_groups.back().back();
            cu_val b = args.at(i);
            if ((a.is_arg || b.is_arg) && a.name == b.name) {
              arg_groups.back().push_back(b);
            } else {
              arg_groups.push_back({b});
            }
          }

          for (vector<cu_val> ag : arg_groups) {
            assert(ag.size() > 0);

            vector<string> lanes;
            for (auto v : ag) {
              lanes.push_back(v.str());
            }
            pack_bv(1,
                cc,
                ag.back().str() + "_pack",
                lanes,
                pick(ag).width);
            arg_names.push_back(ag.back().str() + "_pack");
          }


          cc << tab(1) << "auto " << map_find(c, compute_unit.result_names) << " = " << c->func << "(" << comma_list(arg_names) << ");" << endl;
          child_calls.push_back(cc.str());
          last_res = map_find(c, compute_unit.result_names);
        }

        vector<string> prods;
        for (auto prod : compute_unit.output_producers) {
          prods.push_back(map_find(prod, compute_unit.result_names));
        }

        string rname = prg.un("return_value");
        assert(last_res != "");

        out << "hw_uint<" << write_width << "> " << compute_unit.name << "(" << comma_list(args) << ") {" << endl;
        for (auto r : compute_unit.buffers_read()) {
          split_bv(1, out, r, prg.buffer_port_width(r), compute_unit.num_lanes(r));
        }

        out << "\n\t" << endl;
        out << sep_list(child_calls, "", "", "\n");
        pack_bv(1, out, rname, prods, write_pixel_width);
        out << tab(1) << "return " << rname << ";" << endl;
        out << endl;

      }

      out << "}" << endl << endl;

      for (auto c : compute_unit.operations) {
        loop->delete_child(c);
      }
      assert(loop->children.size() == 0);

      auto merged = loop->add_op(prg.un(loop->name + "_merged"));
      for (auto a : compute_unit.raddrs) {
        merged->add_load(a.first, a.second);
      }
      for (auto a : compute_unit.waddrs) {
        merged->add_store(a.first, a.second);
      }
      merged->add_function(compute_unit.name);
    }
  }

  out.close();

  prg.compute_unit_file = new_compute_file;

}

template<typename F>
void bft(op* op, F test) {
  for (auto c : op->children) {
    test(op);
  }
  for (auto c : op->children) {
    bft(c, test);
  }
}

template<typename F>
void dft(op* op, F test) {
  test(op);
  for (auto c : op->children) {
    dft(c, test);
  }
}

template<typename F>
void bft(prog& prg, F test) {
  bft(prg.root, test);
}

template<typename F>
void dft(prog& prg, F test) {
  dft(prg.root, test);
}

std::vector<op*> get_dft_nodes(prog& prg) {
  std::vector<op*> inner;
  dft(prg, [&inner](op* node) {
      inner.push_back(node);
      });
  return inner;
}

std::vector<op*> get_dft_ops(prog& prg) {
  std::vector<op*> inner;
  dft(prg, [&inner](op* node) {
      if (!node->is_loop()) {
      inner.push_back(node);
      }
      });
  return inner;
}

std::vector<op*> get_ordered_inner_loops(prog& prg) {
  std::vector<op*> inner;
  bft(prg, [&inner](op* node) {
      if (is_inner_loop(node)) {
      inner.push_back(node);
      }
      });
  return inner;
}

std::set<op*> get_inner_loops(prog& prg) {
  std::set<op*> inner;
  for (auto lp_pair : get_variable_levels(prg)) {
    bool all_children_ops = true;
    string vr = lp_pair.first;
    auto v = prg.find_loop(vr);
    for (auto c : v->children) {
      if (c->is_loop()) {
        all_children_ops = false;
        break;
      }
    }
    if (all_children_ops) {
      inner.insert(v);
    }
  }
  return inner;
}

std::string level_name(const std::string& n) {
  return "for_" + n;
}

isl_set* iteration_domain(op* loop, prog& prg) {
  auto surrounding = surrounding_vars(loop, prg);
  surrounding.push_back(loop->name);

  string dom = level_name(loop->name) + brackets(comma_list(surrounding));
  vector<string> ranges;
  for (auto l : surrounding) {
    auto loop = prg.find_loop(l);
    ranges.push_back(str(loop->start) + " <= " + loop->name + " < " + str(loop->end_exclusive));
  }
  string bound_str = curlies(dom + " : " + sep_list(ranges, "", "", " and "));
  isl_set* bounds = isl_set_read_from_str(prg.ctx, bound_str.c_str());
  return bounds;
}

isl_map* producer_map(op* loop, const std::string& b, prog& prg) {
  auto reads = written_at(loop->name, b, prg);

  if (reads == nullptr) {
    return nullptr;
  }

  isl_map* m = nullptr;
  auto level = map_find(loop->name, get_variable_levels(prg));

  for (auto rm : get_maps(reads)) {
    int base = num_in_dims(rm) - 1;
    assert(base >= level);
    int diff = base - level;
    auto r = rm;
    if (diff != 0) {
      r = isl_map_project_out(r, isl_dim_in, level + 1, diff);
    }
    r = set_domain_name(r, level_name(loop->name));
    m = unn(m, r);
  }
  assert(m != nullptr);
  return m;
}

umap* producer_umap(op* op, prog& prg) {
  vector<umap*> maps;
  umap* res = isl_union_map_read_from_str(prg.ctx, "{}");
  maps.push_back(res);
  for (auto m : write_addrs(op, prg)) {
    maps.push_back(to_umap(to_map(m)));
  }

  auto vars = surrounding_vars(op, prg);
  vector<string> constraints;
  for (int d = 0; d < vars.size(); d++) {
    auto lp = prg.find_loop(vars.at(d));
    constraints.push_back(
        str(lp->start) + " <= " + vars.at(d) + " < " + str(lp->end_exclusive));
  }

  isl_set* dom = rdset(prg.ctx, curlies(op->name + bracket_list(vars) + " : " + sep_list(constraints, "", "", " and ")));
  return its(unn(maps), to_uset(dom));
}

umap* consumer_umap(op* op, prog& prg) {
  vector<umap*> maps;
  umap* res = isl_union_map_read_from_str(prg.ctx, "{}");
  maps.push_back(res);
  for (auto m : read_addrs(op, prg)) {
    maps.push_back(to_umap(to_map(m)));
  }

  auto vars = surrounding_vars(op, prg);
  vector<string> constraints;
  for (int d = 0; d < vars.size(); d++) {
    auto lp = prg.find_loop(vars.at(d));
    constraints.push_back(
        str(lp->start) + " <= " + vars.at(d) + " < " + str(lp->end_exclusive));
  }

  isl_set* dom = rdset(prg.ctx, curlies(op->name + bracket_list(vars) + " : " + sep_list(constraints, "", "", " and ")));
  return its(unn(maps), to_uset(dom));
}

isl_map* consumer_map(op* loop, const std::string& b, prog& prg) {
  auto reads = read_at(loop->name, b, prg);
  isl_map* m = nullptr;
  auto level = map_find(loop->name, get_variable_levels(prg));

  for (auto rm : get_maps(reads)) {
    int base = num_in_dims(rm) - 1;
    assert(base >= level);
    int diff = base - level;
    auto r = rm;
    if (diff != 0) {
      r = isl_map_project_out(r, isl_dim_in, level + 1, diff);
    }
    r = set_domain_name(r, level_name(loop->name));
    m = unn(m, r);
  }
  assert(m != nullptr);
  return m;
}

vector<isl_multi_aff*> write_addrs(op* op, const std::string& buf, prog& prg) {
  assert(!op->is_loop() && !op->is_if());
  auto surrounding = surrounding_vars(op, prg);

  vector<isl_multi_aff*> affs;
  for (auto cp : op->produces_pair()) {
    if (cp.first == buf) {
      assert(cp.second.size() == 1);
      vector<string> aff_terms{cp.second.at(0).second};
      auto aff = rdmultiaff(prg.ctx, curlies(op->name + bracket_list(surrounding) + " -> " + sep_list(aff_terms, "[", "]", ", ")));
      affs.push_back(aff);
    }
  }
  return affs;
}

vector<isl_multi_aff*> write_addrs(op* op, prog& prg) {
  assert(!op->is_loop() && !op->is_if());
  auto surrounding = surrounding_vars(op, prg);

  vector<isl_multi_aff*> affs;
  for (auto cp : op->produces_pair()) {
    assert(cp.second.size() == 1);
    vector<string> aff_terms{cp.second.at(0).second};
    auto aff = rdmultiaff(prg.ctx, curlies(op->name + bracket_list(surrounding) + " -> " + cp.first + sep_list(aff_terms, "[", "]", ", ")));
    affs.push_back(aff);
  }
  return affs;
}

vector<isl_multi_aff*> read_addrs(op* op, prog& prg) {
  assert(!op->is_loop() && !op->is_if());
  auto surrounding = surrounding_vars(op, prg);

  vector<isl_multi_aff*> affs;
  for (auto cp : op->consumes_pair()) {
    assert(cp.second.size() == 1);
    vector<string> aff_terms{cp.second.at(0).second};
    auto aff = rdmultiaff(prg.ctx, curlies(op->name + bracket_list(surrounding) + " -> " + cp.first + sep_list(aff_terms, "[", "]", ", ")));
    affs.push_back(aff);
  }
  return affs;
}

vector<isl_multi_aff*> read_addrs(op* op, const std::string& buf, prog& prg) {
  assert(!op->is_loop() && !op->is_if());
  auto surrounding = surrounding_vars(op, prg);

  vector<isl_multi_aff*> affs;
  for (auto cp : op->consumes_pair()) {
    if (cp.first == buf) {
      assert(cp.second.size() == 1);
      vector<string> aff_terms{cp.second.at(0).second};
      auto aff = rdmultiaff(prg.ctx, curlies(op->name + bracket_list(surrounding) + " -> " + sep_list(aff_terms, "[", "]", ", ")));
      affs.push_back(aff);
    }
  }
  return affs;
}

umap* written_at(const std::string& level, const std::string& buffer, prog& prg) {
  auto loop = prg.find_loop(level);
  auto read_maps = get_maps(prg.producer_map(buffer));

  std::set<string> users;
  for (auto op : loop->descendant_ops()) {
    if (elem(buffer, op->buffers_referenced())) {
      users.insert(op->name);
    }
  }

  umap* all_reads = nullptr;
  for (auto m : read_maps) {
    if (elem(domain_name(m), users)) {
      if (all_reads == nullptr) {
        all_reads = to_umap(m);
      } else {
        all_reads = unn(all_reads, to_umap(m));
      }
    }
  }

  return all_reads;
}

umap* read_at(const std::string& level, const std::string& buffer, prog& prg) {
  auto loop = prg.find_loop(level);
  auto read_maps = get_maps(prg.consumer_map(buffer));

  std::set<string> users;
  for (auto op : loop->descendant_ops()) {
    if (elem(buffer, op->buffers_referenced())) {
      users.insert(op->name);
    }
  }

  umap* all_reads = nullptr;
  for (auto m : read_maps) {
    if (elem(domain_name(m), users)) {
      if (all_reads == nullptr) {
        all_reads = to_umap(m);
      } else {
        all_reads = unn(all_reads, to_umap(m));
      }
    }
  }

  return all_reads;
}

umap* first_iteration_reads(umap* reads, const std::string& level, prog& prg) {
  auto loop = prg.find_loop(level);
  int outer_vars = surrounding_vars(loop, prg).size();
  int level_index = outer_vars;

  umap* fst = nullptr;
  for (auto m : get_maps(reads)) {
    auto prj = isl_map_fix_si(m, isl_dim_in, level_index, loop->start);
    if (fst == nullptr) {
      fst = to_umap(prj);
    } else {
      fst = unn(fst, to_umap(prj));
    }
  }
  return fst;
}

isl_map* get_initial_data(const std::string& level, const std::string& buffer, prog& prg) {

  umap* reads = read_at(level, buffer, prg);

  auto loop = prg.find_loop(level);
  int outer_vars = surrounding_vars(loop, prg).size();

  umap* first_reads = first_iteration_reads(reads, level, prg);

  isl_map* initial_data = nullptr;
  for (auto m : get_maps(first_reads)) {
    assert(outer_vars < num_in_dims(m));
    int to_remove = num_in_dims(m) - outer_vars;
    auto prj = isl_map_project_out(cpy(m), isl_dim_in, outer_vars + 1, num_in_dims(m) - outer_vars - 1);
    if (initial_data == nullptr) {
      initial_data = prj;
    } else {
      initial_data = unn(initial_data, prj);
    }
  }
  return initial_data;
}

void sanity_check_all_reads_defined(prog& prg) {
  auto read = prg.consumer_map();
  auto written = prg.producer_map();

  auto read_locs = range(read);
  auto written_locs = range(written);
  auto read_but_never_written = diff(read_locs, written_locs);

  cout << "Read but never written: " << str(read_but_never_written) << endl;
  for (auto m : get_sets(read_but_never_written)) {
    string mname = name(m);
    //cout << tab(1) << str(m) << endl;
    if (!prg.is_input(mname)) {
      cout << "Error: Buffer " << mname << " is read but not written at: " << str(m) << endl;
      cout << tab(1) << "Read locs : " << str(read_locs) << endl;
      cout << tab(1) << "Write locs: " << str(written_locs) << endl;
      print_box_bounds(mname, m);
      assert(false);
    }
  }
}

  map<op*, umap*> prog::consumer_maps() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    map<op*, umap*> maps;
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");

      // for boundary condition expressions
      for (auto top_pair : op->consumes_pair()) {
        string cond = "{ ";
        for (auto sec_pair : top_pair.second) {
          cond = cond + string(op->name + ivar_str + " -> " + top_pair.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
        }
        cond = cond.substr(0, cond.length() - 2);
        cond = cond + string(" }");
        umap* vmap = its(isl_union_map_read_from_str(ctx, cond.c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);

        release(vmap);
      }
      maps[op] = pmap;
    }
    return maps;
  }

bool is_inner_loop(op* op) {
  if (!op->is_loop()) {
    return false;
  }

  for (auto c : op->children) {
    if (c->is_loop()) {
      return false;
    }
  }
  return true;
}


map<op*, isl_map*> prog::producer_maps(const std::string& buf) {
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
      if (range_name(to_map(vmap)) == buf) {
        pmap = unn(pmap, vmap);
      }
    }
    if (!empty(pmap)) {
      m[op] = to_map(pmap);
    }
  }
  return m;
}

void prog::shift_address_range(const std::string& buf, const std::vector<int>& min_locs) {
  auto ops = root->all_ops();
  for (auto  op : ops) {
    op->shift_address(buf, min_locs);
  }
}

map<op*, isl_map*> prog::consumer_maps(const std::string& buf) {
  auto ivars = iter_vars();
  auto doms = domains();

  auto ops = root->all_ops();
  map<op*, isl_map*> maps;
  for (auto op : ops) {
    auto vars = map_find(op, ivars);
    string ivar_str = sep_list(vars, "[", "]", ", ");
    auto dom = map_find(op, doms);

    isl_map* pmap = nullptr;

    // for boundary condition expressions
    for (auto top_pair : op->consumes_pair()) {
      if (top_pair.first == buf) {
        string cond = "{ ";
        for (auto sec_pair : top_pair.second) {
          cond = cond + string(op->name + ivar_str + " -> " + top_pair.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
        }
        cond = cond.substr(0, cond.length() - 2);
        cond = cond + string(" }");
        isl_map* vmap = its(isl_map_read_from_str(ctx, cond.c_str()), dom);
        if (pmap == nullptr) {
          pmap = cpy(vmap);
        } else {
          pmap = unn(pmap, vmap);
        }

        release(vmap);
      }
    }
    maps[op] = pmap;
  }
  return maps;
}

std::set<string> all_buffers(prog& prg) {
  std::set<string> bufs;
  for (auto op : prg.all_ops()) {
    for (auto b : op->buffers_referenced()) {
      bufs.insert(b);
    }
  }
  return bufs;
}

bool is_reduce_buffer(const std::string& buff, prog& prg) {
  auto writers = find_writers(buff, prg);

  return writers.size() > 1;
}

int num_write_ports(const std::string& b, prog& prg) {
  int num_reads = 0;
  for (auto op : prg.all_ops()) {
    num_reads += op->write_addrs(b).size();
  }
  return num_reads;
}

int num_read_ports(const std::string& b, prog& prg) {
  int num_reads = 0;
  for (auto op : prg.all_ops()) {
    num_reads += op->read_addrs(b).size();
  }
  return num_reads;
}

bool is_rate_matchable(prog& prg) {
  auto rvars = reduce_vars(prg);
  bool perfect = all_perfect_loop_nests(prg);

  return rvars.size() == 0 && perfect;
}

int loop_depth(op* op) {
  int d = op->is_loop();
  int max_child_depth = 0;
  for (auto c : op->children) {
    max_child_depth = max(loop_depth(c), max_child_depth);
  }
  return d + max_child_depth;

}

vector<int> loop_depth_vector(op* op) {
  if( op->is_loop()){
    int depth = op->trip_count();

    vector<int> vec = loop_depth_vector(pick(op->children));
    vec.insert(vec.begin(), depth);
    return vec;
  } else if (op->is_if()) {
    vector<int> vec = loop_depth_vector(pick(op->children));
    return vec;
  } else {
    return {};
  }
}

bool all_loop_nests_same_depth(prog& prg) {
  auto ops = prg.all_ops();

  if (ops.size() == 0) {
    return true;
  }
  std::set<int> depths;
  for (auto op : ops) {
    depths.insert(surrounding_vars(op, prg).size());
  }
  return depths.size() == 1;
}

bool is_perfect(op* loop, prog& prg) {
  assert(loop->is_loop());
  if (is_inner_loop(loop)) {
    return true;
  }

  if (loop->children.size() > 1) {
    return false;
  }

  return is_perfect(loop->children.at(0), prg);
}
bool all_perfect_loop_nests(prog& prg) {
  for (auto l : prg.all_loops()) {
    if (l->name != "root") {
      if (!is_perfect(l, prg)) {
        return false;
      }
    }
  }
  return true;
}

void build_schedule_exprs(op* parent, map<op*, QExpr>& schedule_exprs, schedule_info& sched, prog& prg) {
  if (parent->is_op()) {
    return;
  }

  QExpr parent_sched = map_find(parent, schedule_exprs);
  for (auto c : parent->children) {
    if (c->is_loop()) {
      QTerm root_sched_t{{qconst(map_find(c->name, sched.loop_iis)), qvar(c->name)}};
      QExpr root_sched{{root_sched_t}};

      QAV delayv = qconst(map_find(c, sched.op_offset_within_parent));
      QTerm delayt{{delayv}};
      QExpr delay{{delayt}};

      root_sched = parent_sched + root_sched + delay;
      schedule_exprs[c] = root_sched;
    } else {
      QAV delayv = qconst(map_find(c, sched.op_offset_within_parent));
      QTerm delayt{{delayv}};
      QExpr delay{{delayt}};

      auto root_sched = parent_sched + delay;
      schedule_exprs[c] = root_sched;
    }
    build_schedule_exprs(c, schedule_exprs, sched, prg);
  }
}

map<op*, isl_aff*> op_start_times(schedule_info& sched, prog& prg) {
  op* root = prg.root;
  QTerm root_sched_t{{qconst(map_find(root->name, sched.loop_iis)), qvar(root->name)}};
  QExpr root_sched{{root_sched_t}};

  map<op*, QExpr> schedule_exprs{{root, root_sched}};
  map<op*, isl_aff*> schedule_affs;
  build_schedule_exprs(root, schedule_exprs, sched, prg);

  //cout << "==== Schedules..." << endl;
  for (auto opl : schedule_exprs) {
    auto op = opl.first;
    //cout << tab(1) << op->name << " -> " << opl.second << endl;
    ostringstream ss;
    ss << opl.second;
    if (!op->is_loop()) {
      isl_aff* aff = isl_aff_read_from_str(prg.ctx,
          curlies(op->name + sep_list(surrounding_vars(op, prg), "[", "]", ", ") + " -> " + brackets(parens(ss.str()))).c_str());
      schedule_affs[op] = aff;
    }
  }

  return schedule_affs;
}

map<op*, isl_aff*> op_end_times(schedule_info& sched, prog& prg) {
  op* root = prg.root;
  QTerm root_sched_t{{qconst(map_find(root->name, sched.loop_iis)), qvar(root->name)}};
  QExpr root_sched{{root_sched_t}};

  map<op*, QExpr> schedule_exprs{{root, root_sched}};
  map<op*, isl_aff*> schedule_affs;
  build_schedule_exprs(root, schedule_exprs, sched, prg);

  //cout << "==== Schedules..." << endl;
  for (auto opl : schedule_exprs) {
    auto op = opl.first;
    QExpr expr = opl.second;
    QAV val = qconst(sched.total_latency(op)); //map_find(op, sched.total_op_latencies));
    QTerm offsett{{val}};
    QExpr offset{{offsett}};
    expr = expr + offset;
    //cout << tab(1) << op->name << " -> " << expr << endl;
    ostringstream ss;
    ss << expr;
    if (!op->is_loop()) {
      isl_aff* aff = isl_aff_read_from_str(prg.ctx,
          curlies(op->name + sep_list(surrounding_vars(op, prg), "[", "]", ", ") + " -> " + brackets(parens(ss.str()))).c_str());
      schedule_affs[op] = aff;
    }
  }

  return schedule_affs;
}

map<string, isl_set*> op_start_times_domains(prog& prg) {
  auto start_times = prg.whole_iteration_domain();

  map<string, isl_set*> sets;
  for (auto a : get_sets(start_times)) {
    a = set_name(a, "start_" + name(a));

    sets[name(a)] = a;
  }

  return sets;
}

uset* op_start_times_domain(prog& prg) {
  auto start_times = prg.whole_iteration_domain();

  uset* s = isl_union_set_read_from_str(prg.ctx, "{}");
  for (auto a : get_sets(start_times)) {
    a = set_name(a, "start_" + name(a));
    s = unn(s, to_uset(a));
    release(a);
  }

  return s;
}

umap* op_times_map(schedule_info& sched, prog& prg) {
  auto start_times = op_start_times(sched, prg);

  map<string, isl_aff*> hs;
  for (auto a : start_times) {
    hs[a.first->name] = a.second;
  }

  return to_umap(hs);
}
umap* op_start_times_map(schedule_info& sched, prog& prg) {
  auto start_times = op_start_times(sched, prg);

  map<string, isl_aff*> hs;
  for (auto a : start_times) {
    hs["start_" + a.first->name] = a.second;
  }

  return to_umap(hs);
}

umap* op_end_times_map(schedule_info& sched, prog& prg) {
  auto start_times = op_end_times(sched, prg);

  map<string, isl_aff*> hs;
  for (auto a : start_times) {
    hs["end_" + a.first->name] = a.second;
  }

  return to_umap(hs);
}


isl_map* prog::map_from_expr(op* op, pair<string, piecewise_address>& top_pair) {
  auto ivars = iter_vars();
  auto doms = domains();
  auto vars = map_find(op, ivars);
  auto dom = map_find(op, doms);
  string ivar_str = sep_list(vars, "[", "]", ", ");
  string cond = "{ ";
  for (auto sec_pair : top_pair.second) {
    cond = cond + string(op->name + ivar_str + " -> " + top_pair.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
  }
  cond = cond.substr(0, cond.length() - 2);
  cond = cond + string(" }");
  isl_map* vmap = its(isl_map_read_from_str(ctx, cond.c_str()), dom);
  return vmap;
}

void remove_div(prog& prg) {
  prg.pretty_print();
  /*
  for (auto b : all_buffers(prg)) {
    cout << "Buffer: " << b << endl;
    map<op*, isl_map*> prods = prg.producer_maps(b);
    cout << tab(1) << "Producers..." << endl;
    for (auto opm : prods) {
      cout << "\tProducer map: " << str(opm.second) << endl;
      auto aff = get_aff(opm.second);
      for (int d = 0; d < num_div_dims(aff); d++) {
        auto div_dim = isl_aff_get_div(aff, d);
        cout << tab(2) << "===div: " << str(div_dim) << endl;
        int denom = to_int(isl_aff_get_denominator_val(div_dim));
        cout << tab(2) << "denom: " << denom << endl;
      }
    }

    map<op*, isl_map*> cons = prg.consumer_maps(b);

    cout << "Got consumers" << endl;
    for (auto opm : cons) {
      cout << "\t op: " << opm.first->name << endl;
      if (opm.second != nullptr) {
        cout << "\t Consumer map: " << str(opm.second) << endl;
        //for (auto buffer_addr: opm.first->consume_locs_pair) {
        //  isl_map* rdmap = prg.map_from_expr(opm.first, buffer_addr);
        //  cout << "\t\t sub map: " << str(rdmap) << endl;
        //}
        for (auto bmap: get_basic_maps(opm.second)) {
          cout << "\t\t bmap: " << str(bmap) << endl;
          for (auto aff: get_aff_vec(to_map(bmap))) {
            cout << "\t\t\t" << str(aff) << endl;
          }
        }
      }
    }
  }*/
  for (auto op: prg.all_ops()) {
    cout << "\tVisit op: " << op->name << endl;
    for (auto read_buf_addr_pair : op->consume_locs_pair) {
      isl_map* rdmap = prg.map_from_expr(op, read_buf_addr_pair);
      cout << "\t\tread sub map: " << str(simplify(rdmap)) << endl;
      for (auto aff: get_aff_vec(rdmap)) {
        cout << "\t\t\t" << str(aff) << endl;
        map<int, int> split_dims;
        for (int d = 0; d < num_div_dims(aff); d++) {
          auto div_dim = isl_aff_get_div(aff, d);
          cout << tab(8) << "===div: " << str(div_dim) << endl;
          int denom = to_int(isl_aff_get_denominator_val(div_dim));
          cout << tab(8) << "denom: " << denom << endl;

          for (int di = 0; di < num_in_dims(rdmap); di++) {
            if (!is_zero(get_coeff(aff, di))) {
              split_dims[di] = denom;
            }
          }
          break;
        }
        if (split_dims.size()) {
          for (auto it: split_dims)
            cout << "\tDim: " << it.first << " denom: " << it.second << endl;
          vector<string> dvars;
          vector<string> origin_vars;
          for (int d = 0; d < num_in_dims(rdmap); d ++) {
            if (contains_key(d, split_dims)) {
              int denom = split_dims.at(d);
              dvars.push_back("floor(d" + str(d) + "/" + str(denom) + ")");
              dvars.push_back("d"+str(d) + "%" + str(denom));
            } else {
              dvars.push_back("d" + str(d));
            }
            origin_vars.push_back("d" + str(d));
          }
          string trans_str =
            curlies(
                ::domain_name(rdmap) +  bracket_list(origin_vars)
                + "->" +
                ::domain_name(rdmap) + bracket_list(dvars)
                );
          cout << "\tTrans str" << trans_str << endl;
          auto trans_map = isl_map_read_from_str(ctx(rdmap), trans_str.c_str());
          auto stripmining_rdmap= dot(inv(trans_map), rdmap);
          cout << "\t After strip mining: " << str(simplify_expr(stripmining_rdmap)) << endl;
        }
      }
    }
    for (auto write_buf_addr_pair : op->produce_locs) {
      isl_map* wtmap = prg.map_from_expr(op, write_buf_addr_pair);
      cout << "\t\twrite map: " << str(wtmap) << endl;
    }
  }
  assert(false);
}

void normalize_address_offsets(prog& prg) {
  prg.pretty_print();
  for (auto b : all_buffers(prg)) {
    cout << "Buffer: " << b << endl;
    map<op*, isl_map*> prods = prg.producer_maps(b);
    cout << tab(1) << "Producers..." << endl;
    vector<int> min_offset;
    if (prods.size() > 0) {
      int ndims = num_dims((range(pick(prods).second)));
      for (int d = 0; d < ndims; d++) {
        min_offset.push_back(INT_MAX); // TODO: Replace with int max value
      }

      for (auto opm : prods) {
        op* op = opm.first;
        auto writes = range(opm.second);
        for (int d = 0; d < num_dims(writes); d++) {
          auto mincoeff = to_int(lexminval(project_all_but(writes, d)));
          if (mincoeff < min_offset.at(d)) {
            min_offset[d] = mincoeff;
          }
        }
      }
    }

    map<op*, isl_map*> cons = prg.consumer_maps(b);
    if (prods.size() == 0) {
      // Probably if there are no producers and consumers then
      // we can ignore the buffer for normalization, since
      // there are no accesses to it
      assert(cons.size() > 0);
      cout << cons.size() << endl;
      isl_map* tmp = nullptr;
      for (auto con: cons) {
          if (con.second) {
            tmp = con.second;
            break;
          }
      }
      assert(tmp != nullptr);
      //cout << str(pick(cons).second) << endl;
      int ndims = num_dims(range(tmp));
      for (int d = 0; d < ndims; d++) {
        min_offset.push_back(INT_MAX); // TODO: Replace with int max value
      }
    }

    cout << "Got consumers" << endl;
    for (auto opm : cons) {
      op* op = opm.first;
      if (opm.second != nullptr) {
        auto writes = range(opm.second);
        cout << "Writes: " << str(writes) << endl;
        for (int d = 0; d < num_dims(writes); d++) {
          auto mincoeff = to_int(lexminval(project_all_but(writes, d)));
          if (mincoeff < min_offset.at(d)) {
            min_offset[d] = mincoeff;
          }
        }
      }
    }
    cout << tab(2) << "Min offset (counting only writers): " << sep_list(min_offset, "", "", ", ") << endl;

    prg.shift_address_range(b, min_offset);
    //prg.pretty_print();
  }
}

vector<op*> ops_at_level(const int level, prog& prg) {
  vector<op*> at_level;
  vector<op*> ops = get_dft_nodes(prg);
  map<string, int> op_levels = get_op_levels(prg);
  for (auto op : ops) {
    //cout << tab(1) << op->name << " is at " << map_find(op->name, op_levels) << endl;
    if (map_find(op->name, op_levels) == level) {
      at_level.push_back(op);
    }
  }
  return at_level;
}

umap* written_at(const std::string& level, prog& prg) {
  auto ops = prg.find_loop(level)->descendant_ops();
  std::set<string> buffers;
  for (auto op : ops) {
    for (auto b : op->buffers_written()) {
      buffers.insert(b);
    }
  }
  umap* rd = nullptr;
  for (auto b : buffers) {
    auto rdmap = written_at(level, b, prg);

    if (rd == nullptr) {
      rd = rdmap;
    } else {
      rd = unn(rd, rdmap);
      release(rdmap);
    }
  }
  return rd;
}

umap* read_at(const std::string& level, prog& prg) {
  auto ops = prg.find_loop(level)->descendant_ops();
  std::set<string> buffers;
  for (auto op : ops) {
    for (auto b : op->buffers_read()) {
      buffers.insert(b);
    }
  }
  umap* rd = nullptr;
  for (auto b : buffers) {
    auto rdmap = read_at(level, b, prg);

    if (rd == nullptr) {
      rd = rdmap;
    } else {
      rd = unn(rd, rdmap);
      release(rdmap);
    }
  }
  return rd;
}

int schedule_info::instance_latency(op* op) {
  if (op->is_loop()) {
    int maxoffset = 1;
    for (auto c : op->children) {
      int delay = map_find(c, op_offset_within_parent);
      int latency = total_latency(c);
      int inner_delay = delay + latency;
      maxoffset = max(maxoffset, inner_delay);
    }

    //cout << "Offset for " << op->name << endl;
    //op->pretty_print();
    //cout << "instance latency in map     = " << map_find(op, instance_latencies) << endl;
    //cout << "calculated instance latency = " << maxoffset << endl;

    //assert(map_find(op, instance_latencies) == maxoffset);

    return maxoffset;
  }

  return op_latency(op, *this);
  //assert(contains_key(op, instance_latencies));
  //return map_find(op, instance_latencies);
}

bool is_op_scheduled(op* op, schedule_info& sched, prog& prg) {
  //bool has_latency = contains_key(op, sched.instance_latencies);
  bool has_offset = contains_key(op, sched.op_offset_within_parent);
  bool has_ii = contains_key(op->name, sched.loop_iis);

  if (op == prg.root) {
    //return has_latency && has_ii;
    return has_ii;
  }

  if (op->is_loop()) {
    //return has_latency && has_ii && has_offset;
    return has_ii && has_offset;
  }
  //return has_latency && has_offset;
  return has_offset;
}


bool share_resource(const std::string& op0, const std::string& op1, schedule_info& sched) {
  resource_instance i0;
  for (auto r : sched.resource_assignment) {
    if (r.first->name == op0) {
      i0 = r.second;
    }
  }
  resource_instance i1;
  for (auto r : sched.resource_assignment) {
    if (r.first->name == op1) {
      i1 = r.second;
    }
  }
  return i0 == i1;
}

bool no_violated_resource_assignments(schedule_info& sched, prog& prg) {
  auto sched_exprs =
    its(op_times_map(sched, prg), prg.whole_iteration_domain());
  //cout << "Times: " << str(sched_exprs) << endl;
  for (auto op0 : get_maps(sched_exprs)) {
    for (auto op1 : get_maps(sched_exprs)) {
      string name0 = domain_name(op0);
      string name1 = domain_name(op1);
      if (name0 != name1 && share_resource(name0, name1, sched)) {
        //cout << tab(1) << name0 << " and " << name1 << " use the same resource" << endl;
        auto times = range(op0);
        auto times1 = range(op1);
        auto overlap = its(times, times1);
        //cout << tab(2) << "Overlap: " << str(overlap) << endl;
        if (!empty(overlap)) {
          return false;
        }
      }
    }
  }
  return true;
}

bool share_buf_write_port(const std::string& op0, const std::string& op1, schedule_info& sched, prog& prg) {
  string buf0, buf1;
  for (auto r : sched.buf_write_assignment) {
    if (r.first->name == op0) {
      buf0 = r.second;
    }
  }
  for (auto r : sched.buf_write_assignment) {
    if (r.first->name == op1) {
      buf1 = r.second;
    }
  }
  if (buf0 == buf1) {
    //Check if those two op can partition
    umap* pmap0 = producer_umap(prg.find_op(op0), prg);
    umap* pmap1 = producer_umap(prg.find_op(op1), prg);
    cout << "buf " << buf0 << endl;
    bool is_pond =
      sched.buf2level.at(buf0) == "regfile";
    return is_pond && !empty(its(range(pmap0), range(pmap1)));
  } else {
    return false;
  }
}

bool no_violated_buf_write_port_assignments(CodegenOptions& options, schedule_info& sched, prog& prg) {
  auto sched_exprs =
    its(op_times_map(sched, prg), prg.whole_iteration_domain());
  //cout << "Times: " << str(sched_exprs) << endl;
  for (auto op0 : get_maps(sched_exprs)) {
    for (auto op1 : get_maps(sched_exprs)) {
      string name0 = domain_name(op0);
      string name1 = domain_name(op1);
        cout << "name0: " << name0 << endl;
        cout << "name1: " << name1 << endl;

      if (name0 != name1 && share_buf_write_port(name0, name1, sched, prg)) {
        auto times = range(op0);
        auto times1 = range(op1);
        auto overlap = its(times, times1);
        cout << "name0: " << name0 << endl;
        cout << "name1: " << name1 << endl;
        cout << "overlap: " << str(overlap) << endl;
        if (!empty(overlap)) {
          cout << tab(1) << name0 << " and " << name1 << " use the same resource" << endl;
          cout << tab(2) << "Overlap: " << str(overlap) << endl;
          return false;
        }
      }
    }
  }
  return true;

}


void ir_node::replace_writes_to(const std::string& source_buf, const std::string& replacement) {
  if (is_loop()) {
    for (auto c : children) {
      c->replace_writes_to(source_buf, replacement);
    }
  }
  for (auto& b : produce_locs) {
    if (b.first == source_buf) {
      b.first = replacement;
    }
  }
}

void ir_node::replace_reads_from(const std::string& source_buf, const std::string& replacement) {
  if (is_loop()) {
    for (auto c : children) {
      c->replace_reads_from(source_buf, replacement);
    }
  }
  for (auto& b : consume_locs_pair) {
    if (b.first == source_buf) {
      b.first = replacement;
    }
  }
}

isl_map* next_iteration(isl_set* domain) {
  vector<string> invars;
  vector<string> outvars;
  for (int d = 0; d < num_dims(domain); d++) {
    string v = "v_" + str(d);
    invars.push_back(v);
    if (d == num_dims(domain) - 1) {
      outvars.push_back(v + " + 1");
    } else {
      outvars.push_back(v);
    }
  }

  string sname = name(domain);
  return isl_map_read_from_str(ctx(domain), curlies(arrow(sname + bracket_list(invars), sname + bracket_list(outvars))).c_str());
}

void write_out(op* loop, isl_set* read_data, const std::string& rb_name, prog& prg) {
  assert(loop->is_loop());

  string buf = name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  //for (auto v : surrounding_vars(loop, prg)) {
    //store_addrs.push_back(v);
  //}
  //store_addrs.push_back(loop->name);

  for (int d = 0; d < num_dims(read_data); d++) {
    auto ps = project_all_but(read_data, d);
    int lb = to_int(lexminval(ps));
    int ub = to_int(lexmaxval(ps)) + 1;
    string lname = prg.unique_name(buf + "_st");
    next_lp = next_lp->add_loop(lname, lb, ub);
    load_addrs.push_back(lname);
    store_addrs.push_back(lname);
  }

  auto ld = next_lp->add_op(prg.unique_name("store_from_" + rb_name));
  ld->add_load(rb_name, comma_list(store_addrs));
  ld->add_store(buf, comma_list(load_addrs));
}

void write_out_at_end(op* iloop, isl_map* read_data, const std::string& rb_name, prog& prg) {
  assert(iloop->is_loop());

  if (empty(read_data)) {
    return;
  }

  op* loop = iloop;
  string buf = range_name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  auto minpw =
    isl_map_lexmin_pw_multi_aff(cpy(read_data));
  auto maxpw =
    isl_map_lexmax_pw_multi_aff(cpy(read_data));

  auto min_ma = get_pieces(minpw).at(0).second;
  auto max_ma = get_pieces(maxpw).at(0).second;

  for (int d = 0; d < num_out_dims(read_data); d++) {
    isl_aff* min = isl_multi_aff_get_aff(min_ma, d);
    isl_aff* max = isl_multi_aff_get_aff(max_ma, d);
    isl_aff* diff = sub(max, min);

    cout << "Diff = " << str(diff) << endl;
    assert(isl_aff_is_cst(diff));

    int ext = to_int(const_coeff(diff)) + 1;
    isl_aff* addr =
      set_const_coeff(min, zero(prg.ctx));

    int lb = 0;
    int ub = ext;
    string lname = prg.unique_name(buf + "_ld");
    if (d == 0) {
      next_lp = next_lp->add_loop(lname, lb, ub);
    } else {
      next_lp = next_lp->add_loop(lname, lb, ub);
    }
    load_addrs.push_back(lname + " + " + codegen_c(addr));
    store_addrs.push_back(lname + " + " + codegen_c(addr));
  }

  auto ld = next_lp->add_op(prg.unique_name("store_to_" + rb_name));
  ld->add_store(buf, comma_list(load_addrs));
  ld->add_load(rb_name, comma_list(store_addrs));
}


void read_in_at_start(op* iloop, isl_map* read_data, const std::string& rb_name, prog& prg) {
  assert(iloop->is_loop());

  if (empty(read_data)) {
    return;
  }

  op* loop = iloop;
  string buf = range_name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  auto minpw =
    isl_map_lexmin_pw_multi_aff(cpy(read_data));
  auto maxpw =
    isl_map_lexmax_pw_multi_aff(cpy(read_data));

  auto min_ma = get_pieces(minpw).at(0).second;
  auto max_ma = get_pieces(maxpw).at(0).second;

  for (int d = 0; d < num_out_dims(read_data); d++) {
    isl_aff* min = isl_multi_aff_get_aff(min_ma, d);
    isl_aff* max = isl_multi_aff_get_aff(max_ma, d);
    isl_aff* diff = sub(max, min);

    cout << "Diff = " << str(diff) << endl;
    assert(isl_aff_is_cst(diff));

    int ext = to_int(const_coeff(diff)) + 1;
    isl_aff* addr =
      set_const_coeff(min, zero(prg.ctx));

    int lb = 0;
    int ub = ext;
    string lname = prg.unique_name(buf + "_ld");
    if (d == 0) {
      next_lp = next_lp->add_loop_front(lname, lb, ub);
    } else {
      next_lp = next_lp->add_loop(lname, lb, ub);
    }
    load_addrs.push_back(lname + " + " + codegen_c(addr));
    store_addrs.push_back(lname + " + " + codegen_c(addr));
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));
}

void read_in_before(op* iloop, isl_map* read_data, const std::string& rb_name, prog& prg) {
  assert(iloop->is_loop());
  string container = surrounding_vars(iloop, prg).back();
  op* loop = prg.find_loop(container);

  string buf = range_name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  auto minpw =
    isl_map_lexmin_pw_multi_aff(cpy(read_data));
  auto maxpw =
    isl_map_lexmax_pw_multi_aff(cpy(read_data));

  auto min_ma = get_pieces(minpw).at(0).second;
  auto max_ma = get_pieces(maxpw).at(0).second;

  for (int d = 0; d < num_out_dims(read_data); d++) {
    isl_aff* min = isl_multi_aff_get_aff(min_ma, d);
    isl_aff* max = isl_multi_aff_get_aff(max_ma, d);
    isl_aff* diff = sub(max, min);

    cout << "Diff = " << str(diff) << endl;
    assert(isl_aff_is_cst(diff));

    int ext = to_int(const_coeff(diff)) + 1;
    isl_aff* addr =
      set_const_coeff(min, zero(prg.ctx));

    int lb = 0;
    int ub = ext;
    string lname = prg.unique_name(buf + "_ld");
    if (d == 0) {
      next_lp = next_lp->add_loop_before(iloop, lname, lb, ub);
    } else {
      next_lp = next_lp->add_loop(lname, lb, ub);
    }
    load_addrs.push_back(lname + " + " + codegen_c(addr));
    store_addrs.push_back(lname + " + " + codegen_c(addr));
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));
}

void read_in_after(op* loop, isl_map* read_data, const std::string& rb_name, prog& prg) {
  assert(loop->is_loop());

  cout << "reading in data: " << str(read_data) << " at " << loop->name << endl;
  if (empty(read_data)) {
    return;
  }

  string buf = range_name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  auto minpw =
    isl_map_lexmin_pw_multi_aff(cpy(read_data));
  auto maxpw =
    isl_map_lexmax_pw_multi_aff(cpy(read_data));

  auto min_ma = get_pieces(minpw).at(0).second;
  auto max_ma = get_pieces(maxpw).at(0).second;

  for (int d = 0; d < num_out_dims(read_data); d++) {
    isl_aff* min = isl_multi_aff_get_aff(min_ma, d);
    isl_aff* max = isl_multi_aff_get_aff(max_ma, d);
    isl_aff* diff = sub(max, min);

    cout << "Diff = " << str(diff) << endl;
    assert(isl_aff_is_cst(diff));

    int ext = to_int(const_coeff(diff)) + 1;
    isl_aff* addr =
      set_const_coeff(min, zero(prg.ctx));

    int lb = 0;
    int ub = ext;
    string lname = prg.unique_name(buf + "_ld");
    next_lp = next_lp->add_loop(lname, lb, ub);
    load_addrs.push_back(lname + " + " + codegen_c(addr));
    store_addrs.push_back(lname + " + " + codegen_c(addr));
    //load_addrs.push_back(lname);
    //store_addrs.push_back(lname);
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));
}

op* copy_after(
    op* location,
    isl_set* read_data,
    const std::vector<int>& loop_order,
    const std::string& rb_name,
    prog& prg) {

  op* loop = prg.parent(location);

  prg.pretty_print();

  assert(loop->is_loop());
  assert(loop_order.size() == num_dims(read_data));

  std::set<int> loops;
  for (auto l : loop_order) {
    loops.insert(l);
    assert(l >= 0);
    assert(l < loop_order.size());
  }

  cout << "Read data: " << str(read_data) << endl;
  cout << "Loops    : " << comma_list(loop_order) << endl;
  assert(loops.size() == loop_order.size());

  string buf = name(read_data);
  vector<string> load_addrs;
  vector<string> store_addrs;
  vector<pair<int, int> > loop_bounds;

  for (int d = 0; d < num_dims(read_data); d++) {
    auto ps = project_all_but(read_data, d);
    int lb = to_int(lexminval(ps));
    int ub = to_int(lexmaxval(ps)) + 1;
    loop_bounds.push_back({lb, ub});
    string lname = prg.unique_name(buf + "_ld");
    load_addrs.push_back(lname);
    store_addrs.push_back(lname);
  }

  vector<int> bounds;
  for (auto b : loop_bounds) {
    bounds.push_back(b.second - b.first + 1);
  }
  prg.buffer_bounds[rb_name] = bounds;

  op* next_lp = loop;
  op* kernel = nullptr;
  for (int d = 0; d < num_dims(read_data); d++) {
    int lb = loop_bounds.at(loop_order.at(d)).first;
    int ub = loop_bounds.at(loop_order.at(d)).second;
    if (d == 0) {
      next_lp = next_lp->add_loop_after(location, load_addrs.at(loop_order.at(d)), lb, ub);
      kernel = next_lp;
    } else {
      next_lp = next_lp->add_loop_front(load_addrs.at(loop_order.at(d)), lb, ub);
    }
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));

  prg.pretty_print();
  return kernel;
}

op* copy_before(
    op* location,
    isl_set* read_data,
    const std::vector<int>& loop_order,
    const std::string& rb_name,
    prog& prg) {

  op* loop = prg.parent(location);
  prg.pretty_print();

  assert(loop->is_loop());
  assert(loop_order.size() == num_dims(read_data));

  std::set<int> loops;
  for (auto l : loop_order) {
    loops.insert(l);
    assert(l >= 0);
    assert(l < loop_order.size());
  }
  assert(loops.size() == loop_order.size());

  string buf = name(read_data);
  vector<string> load_addrs;
  vector<string> store_addrs;
  vector<pair<int, int> > loop_bounds;

  for (int d = 0; d < num_dims(read_data); d++) {
    auto ps = project_all_but(read_data, d);
    int lb = to_int(lexminval(ps));
    int ub = to_int(lexmaxval(ps)) + 1;
    loop_bounds.push_back({lb, ub});
    string lname = prg.unique_name(buf + "_ld");
    load_addrs.push_back(lname);
    store_addrs.push_back(lname);
  }

  vector<int> bounds;
  for (auto b : loop_bounds) {
    bounds.push_back(b.second - b.first + 1);
  }
  prg.buffer_bounds[rb_name] = bounds;

  op* next_lp = loop;
  op* kernel = nullptr;
  for (int d = 0; d < num_dims(read_data); d++) {
    int lb = loop_bounds.at(loop_order.at(d)).first;
    int ub = loop_bounds.at(loop_order.at(d)).second;
    if (d == 0) {
      next_lp = next_lp->add_loop_before(location, load_addrs.at(loop_order.at(d)), lb, ub);
      kernel = next_lp;
    } else {
      next_lp = next_lp->add_loop_front(load_addrs.at(loop_order.at(d)), lb, ub);
    }
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));

  prg.pretty_print();

  return kernel;
}

void read_in_no_dsa(
    op* loop,
    isl_set* read_data,
    const std::vector<int>& loop_order,
    const std::string& rb_name,
    prog& prg) {

  prg.pretty_print();

  assert(loop->is_loop());
  assert(loop_order.size() == num_dims(read_data));

  std::set<int> loops;
  for (auto l : loop_order) {
    loops.insert(l);
    assert(l >= 0);
    assert(l < loop_order.size());
  }
  assert(loops.size() == loop_order.size());

  string buf = name(read_data);
  vector<string> load_addrs;
  vector<string> store_addrs;
  vector<pair<int, int> > loop_bounds;

  for (int d = 0; d < num_dims(read_data); d++) {
    auto ps = project_all_but(read_data, d);
    int lb = to_int(lexminval(ps));
    int ub = to_int(lexmaxval(ps)) + 1;
    loop_bounds.push_back({lb, ub});
    string lname = prg.unique_name(buf + "_ld");
    load_addrs.push_back(lname);
    store_addrs.push_back(lname);
  }

  op* next_lp = loop;
  for (int d = 0; d < num_dims(read_data); d++) {
    int lb = loop_bounds.at(loop_order.at(d)).first;
    int ub = loop_bounds.at(loop_order.at(d)).second;
    next_lp = next_lp->add_loop_front(load_addrs.at(loop_order.at(d)), lb, ub);
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));

  prg.pretty_print();
}

isl_set* data_demands(const int start_of_inner_loops, isl_map* m) {

  int num_params = start_of_inner_loops;
  cout << "params in new set: " << num_params << endl;
  auto pr = isl_map_project_out(cpy(m), isl_dim_in, start_of_inner_loops, num_in_dims(m) - start_of_inner_loops);
  cout << "projected = " << str(pr) << endl;
  auto bms = get_basic_maps(pr);
  isl_set* demands = nullptr;
  for (auto bm : bms) {
    assert(num_div_dims(bm) == 0);
    assert(num_param_dims(bm) == 0);

    auto bs = flatten_bmap_to_bset(bm);
    cout << "bs = " << str(bs) << endl;
    auto eq = isl_basic_set_equalities_matrix(bs, isl_dim_set, isl_dim_param, isl_dim_div, isl_dim_cst);
    auto ineq = isl_basic_set_inequalities_matrix(bs, isl_dim_set, isl_dim_param, isl_dim_div, isl_dim_cst);

    auto space = isl_space_set_alloc(ctx(m), num_params, num_out_dims(pr) + num_in_dims(pr) - num_params);
    auto ps = isl_basic_set_from_constraint_matrices(space, eq, ineq, isl_dim_param, isl_dim_set, isl_dim_div, isl_dim_cst);
    cout << "ps = " << str(ps) << endl;
    if (demands == nullptr) {
      demands = to_set(ps);
    } else {
      demands = unn(demands, to_set(ps));
    }
  }
  demands = set_name(demands, range_name(m));
  return demands;
}

void read_in(op* loop, isl_set* read_data, const std::string& rb_name, prog& prg) {
  assert(loop->is_loop());

  string buf = name(read_data);
  op* next_lp = loop;
  vector<string> load_addrs;
  vector<string> store_addrs;
  for (auto v : surrounding_vars(loop, prg)) {
    store_addrs.push_back(v);
  }
  store_addrs.push_back(loop->name);

  for (int d = 0; d < num_dims(read_data); d++) {
    auto ps = project_all_but(read_data, d);
    int lb = to_int(lexminval(ps));
    int ub = to_int(lexmaxval(ps)) + 1;
    string lname = prg.unique_name(buf + "_ld");
    next_lp = next_lp->add_loop_front(lname, lb, ub);
    load_addrs.push_back(lname);
    store_addrs.push_back(lname);
  }

  auto ld = next_lp->add_op(prg.unique_name("load_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));
}

isl_map* delta_data(loop* loop, const std::string& buffer, prog& prg) {
  auto level_map = get_variable_levels(prg);
  auto ops = loop->descendant_ops();

  auto idom = iteration_domain(loop, prg);
  cout << str(idom) << endl;
  auto earlier = its_range(its(isl_map_lex_gt(get_space(idom)), idom), idom);
  cout << "earlier = " << str(earlier) << endl;
  auto earlier_in_same_level = cpy(earlier);

  auto later_in_same_level = its_range(its(isl_map_lex_lt(get_space(idom)), idom), idom);
  for (int i = 0; i < num_in_dims(later_in_same_level) - 1; i++) {
    later_in_same_level = isl_map_equate(later_in_same_level, isl_dim_in, i, isl_dim_out, i);
    earlier_in_same_level = isl_map_equate(earlier_in_same_level, isl_dim_in, i, isl_dim_out, i);
  }
  cout << "later in same level = " << str(later_in_same_level) << endl;
  auto next = lexmin(later_in_same_level);
  cout << "next iter: " << str(next) << endl;
  cout << endl;


  auto reads = consumer_map(loop, buffer, prg);
  auto read_by_next_iter = dot(next, reads);
  print_box_bounds("read by next iter", read_by_next_iter);
  auto read_before = dot(dot(next, earlier_in_same_level), reads);
  print_box_bounds("already loaded to RB", read_before);
  cout << endl;

  auto diff_data = diff(read_by_next_iter, read_before);

  return diff_data;
}

void add_reuse_buffer_no_delta(const std::string& level, const std::string& buffer, prog& prg) {

  isl_map* reads = consumer_map(prg.find_loop(level), buffer, prg);
  isl_map* writes = producer_map(prg.find_loop(level), buffer, prg);

  cout << "Reads from " << buffer << " at " << level << ": " << str(reads) << endl;
  string rb_name = prg.un(buffer + "_at_" + level);
  auto loop = prg.find_loop(level);
  std::set<op*> users;
  for (auto op : loop->descendant_ops()) {
    if (elem(buffer, op->buffers_referenced())) {
      users.insert(op);
    }
  }
  cout << "Users..." << endl;
  for (auto u : users) {
    cout << tab(1) << u->name << endl;
  }
  for (auto rd : users) {
    rd->replace_reads_from(buffer, rb_name);
  }
  for (auto rd : users) {
    rd->replace_writes_to(buffer, rb_name);
  }

  read_in_at_start(prg.find_loop(level), reads, rb_name, prg);
  write_out_at_end(prg.find_loop(level), writes, rb_name, prg);

}

void add_reuse_buffer(const std::string& level, const std::string& buffer, prog& prg) {

  auto loop = prg.find_loop(level);

  isl_map* initial_data = get_initial_data(level, buffer, prg);
  cout << "initially read: " << str(initial_data) << endl;
  string rb_name = buffer + "_rb_at_" + level;
  read_in_before(loop, initial_data, rb_name, prg);

  auto pr = delta_data(loop, buffer, prg);
  read_in_after(loop, pr, rb_name, prg);

  cout << "pr = " << str(pr) << endl;

  std::set<op*> users;
  for (auto op : loop->descendant_ops()) {
    if (elem(buffer, op->buffers_referenced())) {
      users.insert(op);
    }
  }
  cout << "Users..." << endl;
  for (auto u : users) {
    cout << tab(1) << u->name << endl;
  }
  for (auto rd : users) {
    rd->replace_reads_from(buffer, rb_name);
  }
  for (auto rd : users) {
    rd->replace_writes_to(buffer, rb_name);
  }

}

void write_out_no_dsa(op* loop, isl_set* read_data, const std::vector<int>& loop_order, const std::string& rb_name, prog& prg) {

  prg.pretty_print();

  assert(loop->is_loop());
  assert(loop_order.size() == num_dims(read_data));

  std::set<int> loops;
  for (auto l : loop_order) {
    loops.insert(l);
    assert(l >= 0);
    assert(l < loop_order.size());
  }
  assert(loops.size() == loop_order.size());

  string buf = name(read_data);
  vector<string> load_addrs;
  vector<string> store_addrs;
  vector<pair<int, int> > loop_bounds;

  for (int d = 0; d < num_dims(read_data); d++) {
    auto ps = project_all_but(read_data, d);
    int lb = to_int(lexminval(ps));
    int ub = to_int(lexmaxval(ps)) + 1;
    loop_bounds.push_back({lb, ub});
    string lname = prg.unique_name(buf + "_ld");
    load_addrs.push_back(lname);
    store_addrs.push_back(lname);
  }

  op* next_lp = loop;
  for (int d = 0; d < num_dims(read_data); d++) {
    //int lb = loop_bounds.at((d)).first;
    //int ub = loop_bounds.at((d)).second;
    //next_lp = next_lp->add_loop_front(load_addrs.at((d)), lb, ub);
    int lb = loop_bounds.at(loop_order.at(d)).first;
    int ub = loop_bounds.at(loop_order.at(d)).second;
    next_lp = next_lp->add_loop(load_addrs.at(loop_order.at(d)), lb, ub);
  }

  auto ld = next_lp->add_op(prg.unique_name("store_to_" + rb_name));
  ld->add_load(buf, comma_list(load_addrs));
  ld->add_store(rb_name, comma_list(store_addrs));

  prg.pretty_print();
  //assert(false);


  //assert(loop->is_loop());

  //string buf = name(read_data);
  //op* next_lp = loop;
  //vector<string> load_addrs;
  //vector<string> store_addrs;

  //for (int d = 0; d < num_dims(read_data); d++) {
    //auto ps = project_all_but(read_data, d);
    //int lb = to_int(lexminval(ps));
    //int ub = to_int(lexmaxval(ps)) + 1;
    //string lname = prg.unique_name(buf + "_ld");
    //next_lp = next_lp->add_loop(lname, lb, ub);
    //load_addrs.push_back(lname);
    //store_addrs.push_back(lname);
  //}

  //auto ld = next_lp->add_op(prg.unique_name("store_to_" + rb_name));
  //ld->add_load(buf, comma_list(load_addrs));
  //ld->add_store(rb_name, comma_list(store_addrs));
}

void ir_node::pretty_print(std::ostream& out, int level) const {

  if (is_loop()) {
    out << tab(level) << "for (int " << name << " = " << start << "; " << name << " < " << end_exclusive << "; " << name << "++) {" << endl;
    for (auto c : children) {
      c->pretty_print(out, level + 1);
    }
    out << tab(level) << "}" << endl;
  } else if (is_if()) {
    out << tab(level) << "if (" << condition << ") {" << endl;
    for (auto c : children) {
      c->pretty_print(out, level + 1);
    }
    out << tab(level) << "}" << endl;
  } else {
    assert(is_op());
    vector<string> args;
    out << tab(level) << name << ": " << comma_list(produces()) << " = " << func << "(" << comma_list(consumes()) << ")" << endl;
  }
}

void ancestors(map<op*, vector<op*> >& ancestor_map, const std::vector<op*>& trace, op* current) {
  if (current->is_op()) {
    ancestor_map[current] = trace;
  } else {
    auto trace_cpy = trace;
    trace_cpy.push_back(current);
    for (auto c : current->children) {
      ancestors(ancestor_map, trace_cpy, c);
    }
  }
}

map<op*, isl_set*> prog::domains() {
  map<op*, vector<op*> > ancestor_map;
  ancestors(ancestor_map, {}, root);

  map<op*, isl_set*> domains;
  for (auto op : ancestor_map) {
    vector<string> vars;
    vector<string> constraints;
    for (auto ancestor : op.second) {
      if (ancestor->is_loop()) {
        vars.push_back(ancestor->name);
        constraints.push_back(str(ancestor->start) + " <= " + ancestor->name + " < " + str(ancestor->end_exclusive));
      } else {
        assert(ancestor->is_if());
        constraints.push_back(parens(ancestor->condition));
      }
    }
    string dom_str =
      curlies(op.first->name + sep_list(vars, "[", "]", ", ") + " : " + sep_list(constraints, "", "", " and "));
    domains[op.first] = rdset(ctx, dom_str);
  }
  //assert(false);
  return domains;


  //map<op*, vector<string> > idoms;
  //vector<string> act;
  //root->populate_iteration_domains(idoms, act);

  //map<op*, vector<string> > ivars;
  //root->populate_iter_vars(ivars, act);

  //map<op*, isl_set*> doms;
  //for (auto op : ivars) {
    //auto iters = map_find(op.first, ivars);
    //auto vars = sep_list(iters, "[", "]", ", ");

    //auto dom = map_find(op.first, idoms);
    //auto ds = sep_list(dom, "", "", " and ");

    //doms[op.first] =
      //isl_set_read_from_str(ctx, string("{ " + op.first->name + vars + " : " + ds + " }").c_str());
  //}
  //return doms;
}

void push_below(loop* outer, loop* inner, prog& prg) {
  assert(outer->children.size() == 1);
  assert(pick(outer->children) == inner);

  vector<op*> inner_children = inner->children;

  for (auto lp : prg.all_loops()) {
    if (elem(outer, lp->children)) {
      lp->replace_child(outer, inner);
    }
  }

  outer->children = inner_children;
  inner->children = {outer};

  auto old_parent = outer->parent;
  inner->parent = old_parent;
  outer->parent = inner;
}

void push_to_bottom_of_band_ignoring(const vector<loop*>& base, loop* lp, prog& prg) {
  assert(lp->is_loop());
  assert(lp->children.size() == 1);

  int old_num_loops = prg.all_loops().size();

  if (!is_inner_loop(lp) && !elem(pick(lp->children), base)) {
    auto inner_lp = pick(lp->children);
    push_below(lp, inner_lp, prg);
    push_to_bottom_of_band_ignoring(base, lp, prg);
  }

  assert(prg.all_loops().size() == old_num_loops);
}

op* find_coarse_grained_pipeline_loop(op* lp) {
  assert(lp->is_loop());
  if (lp->children.size() > 1) {
    return lp;
  }
  if (lp->children.size() == 1 && !lp->children.back()->is_loop()) {
    return lp;
  }
  return find_coarse_grained_pipeline_loop(lp->children.back());
}

void find_split_inner_perfect_loop(op* lp_visit, vector<op*> & cgpl_lp,  prog& prg) {
  //this is the new cgpl loop finding function
  //we traverse the AST in post order
  //If a loop with more than one children
  //Then this is a cgpli loop node.
  //
  //Post order visit guarantee that descendant is ahead of its ancestor

  for (auto child: lp_visit->children) {
    find_split_inner_perfect_loop(child, cgpl_lp, prg);
  }
  if ((lp_visit->children).size() > 1 && is_inner_loop(lp_visit)) {
    if (lp_visit != prg.root)
      cgpl_lp.push_back(lp_visit);
  }
}

void find_coarse_grained_pipeline_loops(op* lp_visit, vector<op*> & cgpl_lp,  prog& prg) {
  //this is the new cgpl loop finding function
  //we traverse the AST in post order
  //If a loop with more than one children
  //Then this is a cgpli loop node.
  //
  //Post order visit guarantee that descendant is ahead of its ancestor

  for (auto child: lp_visit->children) {
    find_coarse_grained_pipeline_loops(child, cgpl_lp, prg);
  }
  if ((lp_visit->children).size() > 1 && !(is_inner_loop(lp_visit))) {
    if (lp_visit != prg.root)
      cgpl_lp.push_back(lp_visit);
  }
}

op* find_coarse_grained_pipeline_loop(op* lp, prog& prg) {
  assert(lp->is_loop());
  cout << "\t Visit loop " << lp->name << " for searching coarse pipeline loop" << endl;
  if (lp->children.size() > 1) {
    bool all_perfect = true;
    vector<op*> non_perfect_loops;
    for (auto child: lp->children) {
      if (child->is_loop()) {
        if(!is_perfect(child, prg)) {
          all_perfect = false;
          non_perfect_loops.push_back(child);
        }
      }
    }
    if (all_perfect)
        return lp;
    for (auto loop: non_perfect_loops) {
        return find_coarse_grained_pipeline_loop(loop, prg);
    }
  }
  if (lp->children.size() == 1 && !lp->children.back()->is_loop()) {
    return lp;
  }
  return find_coarse_grained_pipeline_loop(lp->children.back(), prg);
  //if (lp->name != "root" && lp->children.size() == 1) {
    //return lp;
  //}
  //if (lp->name == "root" && lp->children.size() > 1) {
    //return nullptr;
  //}
  //if (lp->name == "root" && lp->children.size() == 1) {
    //return lp->children.back();
  //}
  //return nullptr;
}

vector<string> get_lb_condition(op* root_op, op* inner_most_cgpl_lp) {
    if (root_op == inner_most_cgpl_lp) {
        string cond = "(" + root_op->name + "=" + str(root_op->start) + ")";
        return {cond};
    }
    assert(root_op->children.size() == 1);
    op* child = pick(root_op->children);
    assert(child->is_loop());
    auto str_child = get_lb_condition(child, inner_most_cgpl_lp);
    string cond = "(" + root_op->name + "=" + str(root_op->start) + ")";
    str_child.push_back(cond);
    return str_child;
}

vector<string> get_ub_condition(op* root_op, op* inner_most_cgpl_lp) {
    if (root_op == inner_most_cgpl_lp) {
        string cond = "(" + root_op->name + "=" + str(root_op->end_exclusive - 1) + ")";
        return {cond};
    }
    assert(root_op->children.size() == 1);
    op* child = pick(root_op->children);
    assert(child->is_loop());
    vector<string> str_child = get_ub_condition(child, inner_most_cgpl_lp);
    string cond = "(" + root_op->name + "=" + str(root_op->end_exclusive - 1) + ")";
    str_child.push_back(cond);
    return str_child;
}

void add_prelogue_op(op* op_tbm, op* imperfect_child_lp, op* inner_most_cgpl_lp) {
  //iteratively find the loops under this imperfect_child_loop
  vector<string> lb_condition_string_vec = get_lb_condition(imperfect_child_lp, inner_most_cgpl_lp);
  string cond = sep_list(lb_condition_string_vec, "", "", "&&");
  op* if_node = inner_most_cgpl_lp->add_if_front(op_tbm->name + "_if_prelogue_guard", cond);
  //op_tbm->parent->delete_child(op_tbm);
  //if_node->children.push_back(op_tbm);
  //op_tbm->parent = if_node;
  op_tbm->attach_to(if_node);
}

void add_epilogue_op(op* op_tbm, op* imperfect_child_lp, op* inner_most_cgpl_lp) {
  //iteratively find the loops under this imperfect_child_loop
  vector<string> ub_condition_string_vec = get_ub_condition(imperfect_child_lp, inner_most_cgpl_lp);
  string cond = sep_list(ub_condition_string_vec, "", "", "&&");
  op* if_node = inner_most_cgpl_lp->add_if(op_tbm->name + "_if_epilogue_guard", cond);
  //op_tbm->parent->delete_child(op_tbm);
  //if_node->children.push_back(op_tbm);
  //op_tbm->parent = if_node;
  op_tbm->attach_to(if_node);
}

void loop_perfection(op* target_lp, op* inner_most_cgpl_lp, prog& prg) {
  //pc id is the location of loop child that will subsume all the other children
  int pc_id = -1;
  int child_count = 0;
  for (auto child: target_lp->children) {
    if (!is_perfect(child, prg)) {
        //Can only has one child exist
        assert(pc_id == -1);
        pc_id = child_count;
    }
    child_count ++;
  }
  assert(pc_id != -1);
  for (int i = pc_id-1; i >= 0; i --) {
    add_prelogue_op(target_lp->children.at(i), target_lp->children.at(pc_id), inner_most_cgpl_lp);
    //Move one loop inside need to decrease the index
    pc_id --;
  }
  for (int i = pc_id+1; i < target_lp->children.size(); i ++) {
    add_epilogue_op(target_lp->children.at(i), target_lp->children.at(pc_id), inner_most_cgpl_lp);
  }
}

void loop_perfection(prog& prg) {
  vector<op*> cgpl_lps;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps, prg);
  if (cgpl_lps.size() == 0)
    return;
  op* inner_most_cgpl_lp = cgpl_lps.front();
  for(auto it = cgpl_lps.begin() + 1; it != cgpl_lps.end(); it ++) {
    //Move the ir node under *it into the inner most coarse grained pipeline loop
    loop_perfection(*it, inner_most_cgpl_lp, prg);
  }
}

void loop_perfection_without_glb_op(op* target_lp, op* inner_most_cgpl_lp, prog& prg) {
  //pc id is the location of loop child that will subsume all the other children
  int pc_id = -1;
  int child_count = 0;
  for (auto child: target_lp->children) {
    if (!is_perfect(child, prg)) {
        //Can only has one child exist
        assert(pc_id == -1);
        pc_id = child_count;
    }
    child_count ++;
  }
  assert(pc_id != -1);
  for (int i = pc_id-1; i >= 0; i --) {
    op* move_op = target_lp->children.at(i);
    auto name = move_op->name;
    if (contains(name, "glb"))
        continue;
    cout << "\tADD Prelogue op: " << name << endl;
    add_prelogue_op(move_op, target_lp->children.at(pc_id), inner_most_cgpl_lp);
    //Move one loop inside need to decrease the index
    pc_id --;
  }
  cout << "pc id: " << pc_id << endl;
  cout << "kernel need to be consider: " << target_lp->children << endl;
  for (int i = pc_id+1; i < target_lp->children.size(); i ++) {
    op* move_op = target_lp->children.at(i);
    auto name = move_op->name;
    cout << "\tepilogue op: " << name << endl;
    add_epilogue_op(move_op, target_lp->children.at(pc_id), inner_most_cgpl_lp);
  }
}

void loop_perfection_with_root_op(prog& prg) {
  vector<op*> cgpl_lps;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps, prg);
  if (cgpl_lps.size() == 0)
    return;
  cgpl_lps.push_back(prg.root);
  op* inner_most_cgpl_lp = cgpl_lps.front();
  for(auto it = cgpl_lps.begin() + 1; it != cgpl_lps.end(); it ++) {
    //Move the ir node under *it into the inner most coarse grained pipeline loop
    loop_perfection_without_glb_op(*it, inner_most_cgpl_lp, prg);
  }
}

bool single_coarse_pipeline_loop_nests(prog& prg) {
  vector<op*> cgpl_lps;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps, prg);
  return (cgpl_lps.size() == 1);
}

umap* prog::validity_deps() {

  //umap* naive_sched = unoptimized_schedule();
  //auto domain = whole_iteration_domain();

  map<op*, isl_set*> domains = this->domains();
  map<op*, isl_map*> schedules = this->schedules();
  vector<umap*> validity_dep_maps;
  for (auto b : all_buffers(*this)) {
    cout << "Computing validity deps for " << b << endl;

    vector<uset*> user_domains;
    vector<umap*> user_schedules;
    for (auto op : find_readers(b, *this)) {
      user_domains.push_back(to_uset(map_find(op, domains)));
      user_schedules.push_back(to_umap(map_find(op, schedules)));
    }
    for (auto op : find_writers(b, *this)) {
      user_domains.push_back(to_uset(map_find(op, domains)));
      user_schedules.push_back(to_umap(map_find(op, schedules)));
    }
    uset* domain = unn(user_domains);
    umap* naive_sched = unn(user_schedules);

    auto writes =
      its(producer_map(b), domain);
    auto reads =
      its(consumer_map(b), domain);

    auto writers_to_readers = dot(writes, inv(reads));

    umap* user_sched = its(naive_sched, domain);
    auto before = lex_lt(user_sched, user_sched);
    auto validity =
      its(writers_to_readers, before);

    validity_dep_maps.push_back(validity);
  }

  auto valid = unn(validity_dep_maps);
  assert(valid != nullptr);
  return valid;
}


void sanity_check_iis(schedule_info& sched) {
  for (auto lii : sched.loop_iis) {
    if (!(lii.second > 0)) {
      cout << "Error ii for " << lii.first << " = " << lii.second << endl;
    }
    assert(lii.second > 0);
  }
}

int logical_dimension(const std::string& buf, prog& prg) {
  if (!prg.is_input(buf)) {
    return num_out_dims(producer_map(prg.root, buf, prg));
  } else {
    return num_out_dims(consumer_map(prg.root, buf, prg));
  }
}

int logical_capacity(const std::string& buf, prog& prg) {

  uset* addr_range;
  if (!prg.is_input(buf)) {
    addr_range = range(prg.producer_map(buf));
  } else {
    addr_range = range(prg.consumer_map(buf));
  }
  auto range_card = card(addr_range);
  return int_upper_bound(range_card);
}

vector<op*> fully_scheduled_nodes(schedule_info& sched, prog& prg)  {
  vector<op*> ops;
  for (auto op : prg.all_nodes()) {
    if (is_op_scheduled(op, sched, prg)) {
      ops.push_back(op);
    }
  }
  return ops;
}

void print_partial_schedule(schedule_info& sched, prog& prg) {
  auto scheduled = fully_scheduled_nodes(sched, prg);
  cout << "Fully scheduled ops..." << endl;
  for (auto op : scheduled) {
    cout << tab(1) << op->name << endl;
  }
  cout << endl;
  cout << "IIs" << endl;
  for (auto e : sched.loop_iis) {
    cout << tab(1) << e.first << ": " << e.second << endl;
  }
  cout << endl;
  cout << "Offsets in parent" << endl;
  for (auto e : sched.op_offset_within_parent) {
    cout << tab(1) << e.first->name << ": " << e.second << endl;
  }
  cout << endl;
  //cout << "Instance latencies" << endl;
  //for (auto e : sched.instance_latencies) {
    //cout << tab(1) << e.first->name << ": " << e.second << endl;
  //}
}

void fuse_sequentially(const vector<op*>& outer, schedule_info& sched, prog& prg) {
  int delay = 0;
  for (auto outer_loop : outer) {
    for (auto c : outer_loop->children) {
      sched.op_offset_within_parent[c] = delay;
      delay += sched.total_latency(c);
    }
    sched.op_offset_within_parent[outer_loop] = 0;
  }

  for (auto outer_loop : outer) {
    //sched.instance_latencies[outer_loop] = delay;
  }

  for (auto outer_loop : outer) {
    sched.loop_iis[outer_loop->name] = delay;
  }
}

vector<op*> unscheduled_nodes(schedule_info& sched, prog& prg) {
  vector<op*> unscheduled;
  for (auto op : prg.all_nodes()) {
    if (!is_op_scheduled(op, sched, prg)) {
      unscheduled.push_back(op);
    }
  }
  return unscheduled;
}

bool all_ops_scheduled(schedule_info& sched, prog& prg) {
  for (auto op : prg.all_ops()) {
    if (!is_op_scheduled(op, sched, prg)) {
      return false;
    }
  }
  return true;
}

int schedule_info::compute_latency(const std::string& op_name) {
  assert(contains_key(op_name, op_compute_unit_names));
  string cu_name = map_find(op_name, op_compute_unit_names);
  assert(contains_key(cu_name, compute_unit_latencies));
  return map_find(cu_name, compute_unit_latencies);
}

int schedule_info::compute_latency(op* op) {
  if (op->func == "") {
    return 0;
  }
  assert(contains_key(op->name, op_compute_unit_names));
  string cu_name = map_find(op->name, op_compute_unit_names);
  assert(contains_key(cu_name, compute_unit_latencies));
  return map_find(cu_name, compute_unit_latencies);


  //assert(contains_key(op->func + "_pipelined", compute_unit_latencies));
  //int l = map_find(op->func + "_pipelined", compute_unit_latencies);
  //assert(l >= 0);
  //return l;
}

int schedule_info::total_latency(op* op) {
  if (op->is_op()) {
    return instance_latency(op);
    //assert(contains_key(op, instance_latencies));
    //return map_find(op, instance_latencies);
  }
  else if (op->is_loop()) {
    return II(op)*(op->trip_count() - 1) + instance_latency(op);
  } else if (op->is_if()) {
    assert(op->children.size() == 1);
    return total_latency(pick(op->children));
  } else {
    cout << "Did not implement total latency method for IR node type :" << op->tp << endl;
    assert(false);
  }
}

int op_latency(op* op, schedule_info& hwinfo) {
  assert(!op->is_loop());

  int total_latency = 0;

  // Account for time to load data from inputs
  vector<int> load_latencies;
  for (auto b : op->buffers_read()) {
    load_latencies.push_back(map_find(b, hwinfo.buffer_load_latencies));
  }
  sort(begin(load_latencies), end(load_latencies));
  if (load_latencies.size() > 0) {
    total_latency += load_latencies.back();
  }

  // Then we need to wait for the compute unit to finish
  if (op->func != "") {
    //int latency = map_find(op->func, hwinfo.compute_unit_latencies);
    int latency =
      hwinfo.compute_latency(op);
      //map_find(op->func, hwinfo.compute_unit_latencies);
    //assert(latency == 0);
    total_latency += latency;
  }

  // Then we need to wait for the data that comes out of the compute
  // unit to be finished
  vector<int> store_latencies;
  for (auto b : op->buffers_written()) {
    store_latencies.push_back(map_find(b, hwinfo.buffer_store_latencies));
  }
  sort(begin(store_latencies), end(store_latencies));
  if (store_latencies.size() > 0) {
    total_latency += store_latencies.back();
  }

  return total_latency;
}


//Binary search the smallest outer delay
void adjust_outer_delays_exhaustively(schedule_info& sched, prog& prg, int glb_load_latency) {
  auto deps = cycle_accurate_deps(prg);
  cout << "Adjusting delays of " << prg.name << endl;
  //for (auto lp : prg.root->children) {
  //  string name = lp->name;
  for (auto name : topologically_sort_kernels(prg)) {
    auto lp = prg.find_loop(name);
    cout << "Adjusting delay of " << lp->name << endl;

    int earliest_possible_delay = 0;
    int latest_legal_delay =
      map_find(lp, sched.op_offset_within_parent);

    int current_delay = latest_legal_delay;

    assert(latest_legal_delay >= earliest_possible_delay);
    while (latest_legal_delay - earliest_possible_delay > 0) {
      assert(latest_legal_delay >= earliest_possible_delay);
      int try_delay = (latest_legal_delay + earliest_possible_delay) / 2;
      sched.op_offset_within_parent[lp] = try_delay;
      if (no_violated_cycle_accurate_dependencies(deps, sched, prg)) {
        latest_legal_delay = try_delay;
      } else {
        earliest_possible_delay = try_delay + 1;
      }
      cout << "Earliest legal: " << earliest_possible_delay << endl;
      cout << "Latest legal  : " << latest_legal_delay << endl;
    }

    if (!contains(name, "glb_s0"))
        latest_legal_delay = std::max(latest_legal_delay, glb_load_latency);
    if (contains(name, "hw_output")){
        //FIXME: override GLB output latency with sequential schedule
        latest_legal_delay = 0;
        for (string prod: get_producers(name, prg)) {
            op* prod_op = prg.find_loop(prod);
            latest_legal_delay = std::max(latest_legal_delay,
                    sched.total_latency(prod_op) + sched.op_offset_within_parent.at(prod_op));
        }
    }
    sched.op_offset_within_parent[lp] = latest_legal_delay;
  }
}

void adjust_outer_delays(schedule_info& sched, prog& prg) {
  auto deps = cycle_accurate_deps(prg);
  cout << "Adjusting delays of " << prg.name << endl;
  for (auto lp : prg.root->children) {
    string name = lp->name;
  //for (auto name : topologically_sort_kernels(prg)) {
    //auto lp = prg.find_loop(name);
    cout << "Adjusting delay of " << lp->name << endl;

    int earliest_possible_delay = 0;
    int latest_legal_delay =
      map_find(lp, sched.op_offset_within_parent);

    int current_delay = latest_legal_delay;

    assert(latest_legal_delay >= earliest_possible_delay);
    while (latest_legal_delay - earliest_possible_delay > 100) {
      assert(latest_legal_delay >= earliest_possible_delay);
      int try_delay = (latest_legal_delay + earliest_possible_delay) / 2;
      sched.op_offset_within_parent[lp] = try_delay;
      if (no_violated_cycle_accurate_dependencies(deps, sched, prg)) {
        latest_legal_delay = try_delay;
      } else {
        earliest_possible_delay = try_delay;
      }
      cout << "Earliest legal: " << earliest_possible_delay << endl;
      cout << "Latest legal  : " << latest_legal_delay << endl;
    }

    sched.op_offset_within_parent[lp] = latest_legal_delay;

    //int old_delay = map_find(lp, sched.op_offset_within_parent);

    //int try_delay = 1;
    //bool found_smaller_delay = false;
    //while (try_delay < old_delay) {
      //sched.op_offset_within_parent[lp] = try_delay;
      //if (no_violated_cycle_accurate_dependencies(sched, prg)) {
        //found_smaller_delay = true;
        //break;
      //}
      //try_delay = try_delay + 1000;
      ////try_delay = max(try_delay * 2, try_delay + 1000);
      ////try_delay = min(try_delay * 2, try_delay + 1000);
      ////try_delay *= 2;
    //}

    //if (!found_smaller_delay) {
      //sched.op_offset_within_parent[lp] = old_delay;
    //}
  }
}

void adjust_outer_pipeline_delays(schedule_info& sched, prog& prg) {
  auto deps = cycle_accurate_deps(prg);
  cout << "Adjusting delays of " << prg.name << endl;
  for (auto lp : find_coarse_grained_pipeline_loop(prg.root)->children) {

    int old_delay = map_find(lp, sched.op_offset_within_parent);
    int try_delay = 1;
    bool found_smaller_delay = false;
    while (try_delay < old_delay) {
      sched.op_offset_within_parent[lp] = try_delay;
      if (no_violated_cycle_accurate_dependencies(deps, sched, prg)) {
        found_smaller_delay = true;
        break;
      }
      try_delay = max(try_delay * 2, try_delay + 1000);
      //try_delay = min(try_delay * 2, try_delay + 1000);
      //try_delay *= 2;
    }

    if (!found_smaller_delay) {
      sched.op_offset_within_parent[lp] = old_delay;
    }
  }
}

void adjust_inner_iis(schedule_info& sched, prog& prg) {
  auto deps = cycle_accurate_deps(prg);
  cout << "Adjusting iis of " << prg.name << endl;
  for (auto lp : get_inner_loops(prg)) {
    cout << "Adjusting ii of " << lp->name << endl;
    int old_ii = map_find(lp->name, sched.loop_iis);
    int try_ii = 1;
    bool found_smaller_ii = false;
    while (try_ii < old_ii) {
      sched.loop_iis[lp->name] = try_ii;
      if (no_violated_cycle_accurate_dependencies(deps, sched, prg)) {
        found_smaller_ii = true;
        break;
      }
      try_ii *= 2;
    }

    if (!found_smaller_ii) {
      sched.loop_iis[lp->name] = old_ii;
    }
  }
}


void pad_top_level_ops_with_loops(prog& prg) {
  int max_depth = max_loop_depth(prg);
  vector<op*> old_children = prg.root->children;
  prg.root->children = {};
  for (auto c : old_children) {
    if (c->is_loop()) {
      prg.root->children.push_back(c);
    } else {
      op* lp = prg.root->add_loop(prg.un("pad_wrapper"), 0, 1);
      for (int d = 1; d < max_depth - 1; d++) {
        lp = lp->add_loop(prg.un("pad_wrapper"), 0, 1);
      }
      lp->children.push_back(c);
      c->parent = lp;
    }
  }

}

void move_node(op* node_to_be_moved, op* dst, prog& prg) {
  op* src = prg.parent(node_to_be_moved);
  remove(node_to_be_moved, src->children);
  dst->children.push_back(node_to_be_moved);
  node_to_be_moved->parent = dst;
}


void loop_split(prog& prg) {
  vector<op*> cgpl_lp;
  find_split_inner_perfect_loop(prg.root, cgpl_lp, prg);
  for (auto lp: cgpl_lp) {
      cout << tab(4) << lp->name << endl;
    perfect_loop_split(lp, prg);
  }
}

void remove_loop(op* lp) {
    auto p = lp->parent;
    vector<op*> new_children;
    for (auto c: p->children) {
        if( c != lp) {
            new_children.push_back(c);
        }
    }
    p->children = new_children;
}

bool share_index_var(vector<op*> & children) {
    std::set<string> shared_vars;
    for(auto child: children) {
        for (auto idx: child->index_variables_needed_by_compute) {
            if (shared_vars.count(idx)) {
                return true;
            } else {
                shared_vars.insert(idx);
            }
        }
    }
    return false;
}

//Before we calling this function, we have check lp is a perfect loop nest
void perfect_loop_split(op* lp, prog& prg) {
    //lp is the loop level that has multiple children,
    //we will duplicate the loop level from lp to root and add each child into the splitted loop nest
    int child_cnt = 0;
    op* outtest_lp = prg.root->container_child(lp);
    auto child_list = lp->children;

    //Cannot split loop if they share index variable
    if (share_index_var(child_list))
        return;
    for (op* child: child_list) {
        //Get surrounding loops from root to leave
        cout << "\tVisiting child: " << child->name << endl;
        vector<string> surrounding_loops = surrounding_vars(child, prg);
        vector<op*> loop_nest = surrounding_vars_ops(child, prg);
        loop_nest.erase(loop_nest.begin());

        auto new_lp = prg.root->add_loop_before(outtest_lp,
                outtest_lp->name + "_split_"+str(child_cnt),
                outtest_lp->start, outtest_lp->end_exclusive);
        for (auto it = loop_nest.begin()+1; it != loop_nest.end(); it ++) {
            new_lp = new_lp->add_loop((*it)->name + "_split_" + str(child_cnt),
                    (*it)->start, (*it)->end_exclusive);
        }
        move_node(child, new_lp, prg);
        child->add_var_suffix_to_writes("_split_" + str(child_cnt), surrounding_loops);
        child->add_var_suffix_to_reads("_split_" + str(child_cnt), surrounding_loops);
        child_cnt ++;
    }
    cout << "container child: " << prg.root->container_child(lp)->name << endl;
    remove_loop(outtest_lp);
}


void pad_bottom_level_ops_with_loops(prog& prg) {
  int max_depth = max_loop_depth(prg);
  for (auto c : prg.all_ops()) {
    auto surrounding_loops = surrounding_vars(c, prg);
    if (surrounding_loops.size() < max_depth) {
      cout << "\tOp name: " << c->name << " need to be padded" << endl;
      //loop on top of the op
      op* container_loop = prg.parent(c);
      op* pad_loop = container_loop->add_loop(prg.un("pad_wrapper"), 0, 1);
      move_node(c, pad_loop, prg);
    }
  }
  prg.pretty_print();
}

int max_loop_depth(prog& prg) {
  int maxl = -1;
  for (auto op : prg.all_ops()) {
    int l = surrounding_vars(op, prg).size();
    maxl = max(l, maxl);
  }
  return maxl;
}

std::set<op*> reduce_op(prog & prg) {
    std::set<op*> reduce_op;
    vector<string> rvars = reduce_vars(prg);
    for (string var: rvars) {
      op* loop = prg.find_loop(var);
      auto lower_ops = loop->descendant_ops();
      for (auto lower_op: lower_ops)
        reduce_op.insert(lower_op);
    }
    return reduce_op;
}

//This should apply to the kernel that fully unrolled
//
void dsa_writers_new(prog& prg) {
    std::set<op*> r_ops = reduce_op(prg);

    std::set<string> all_buffers;
    std::set<string> multi_write_buffers;
    map<string, std::set<string> > producer_kernels;
    std::set<string> reduced_kernels;
    for (auto op : prg.all_ops()) {
      //should not rewrite the real reduce kernel
      if (r_ops.count(op))
        continue;
      auto read = op->buffers_read();
      auto written = op->buffers_written();
      for (auto b : intersection(read, written)) {
        reduced_kernels.insert(b);
        cout << "reduced kernel : " << b << endl;
      }
    }

    for (auto k : get_kernels(prg)) {
      for (auto b : get_produced_buffers(k, prg)) {
        all_buffers.insert(b);
        producer_kernels[b].insert(k);
        cout << "insert kernel: " << k << " to producer buffer: " << b << endl;
      }
    }

    cout << "Producer kernels..." << endl;
    for (auto p : producer_kernels) {
      cout << tab(1) << p.first << " -> ";
      for (auto k : p.second) {
        cout << k << " ";
      }
      cout << endl;
      if (p.second.size() > 1) {
        cout << tab(2) << "MULTIPLE PRODUCERS" << endl;
      }
    }
    for (auto k : get_kernels(prg)) {
      for (auto b : get_produced_buffers(k, prg)) {
        auto producers = producer_kernels[b];

        if (elem(b, reduced_kernels) && producers.size() >= 1) {
          cout << b << " has " << producers.size() << " producers" << endl;
          for (auto p : producers) {
            cout << tab(1) << p << endl;
          }
          auto writers = find_writers(b, prg);
          prg.pretty_print();
          //assert(writers.size() <= 2);
          if (writers.size() > 1) {
            multi_write_buffers.insert(b);
          }
        }

      }
    }

    cout << "Multi-write buffers" << endl;
    map<string, std::set<op*> >initializers;
    map<string, std::set<op*> > updaters;
    for (auto b : multi_write_buffers) {
      cout << tab(1) << b << endl;
      auto writers = find_writers(b, prg);
      vector<op*> ws;
      for (auto w : writers) {
        ws.push_back(w);
      }

      for (auto w : ws) {
        if (w->read_addrs().size() == 0) {
          initializers[b].insert(w);
        } else {
          updaters[b].insert(w);
        }

      }
      //op* w0 = ws.at(0);
      //op* w1 = ws.at(1);

      //if (w0->read_addrs().size() == 0) {
      //initializers[b] = w0;
      //updaters[b] = w1;
      //} else {
      //initializers[b] = w1;
      //updaters[b] = w0;
      //}
    }

    cout << "Built initializer / update maps" << endl;
    cout << tab(1) << "# multi_write buffers = " << multi_write_buffers.size() << endl;
    //assert(false);
    for (auto b : multi_write_buffers) {
      string init_buffer = prg.un(b + "_clkwrk_dsa");
      for (auto init : initializers[b]) {
        init->replace_writes_to(b, init_buffer);
      }
      for (auto updated : updaters[b]) {
        updated->replace_reads_from(b, init_buffer);
      }
      //auto init = initializers[b];
      //assert(init != 0);
      //auto updated = updaters[b];
      //assert(updated != 0);
      //cout << "Replacing writes" << endl;
      //init->replace_writes_to(b, init_buffer);
      //cout << "Replacing reads from " << b << " in " << updated->name << endl;
      //updated->replace_reads_from(b, init_buffer);
      prg.buffer_port_widths[init_buffer] = prg.buffer_port_width(b);
    }

    prg.pretty_print();
    //assert(false);

    // Split up buffers that are read at constants in one of their components
    for (auto b : all_buffers) {
      auto writers = find_writers(b, prg);
      auto readers = find_readers(b, prg);

      if (writers.size() > 1 && readers.size() == 0) {
        cout << b << " has " << writers.size() << " writers and " << readers.size() << " readers" << endl;
        assert(prg.is_output(b));
        for (auto writer : writers) {
          string init_buffer = prg.un(b + "_clkwrk_write_duplicate");
          writer->replace_writes_to(b, init_buffer);
          prg.add_output(init_buffer);
          prg.buffer_port_widths[init_buffer] = prg.buffer_port_width(b);
        }

        prg.outs.erase(b);
      }
    }
}

void dsa_writers(prog& prg) {
  if (is_rate_matchable(prg)) {
    prg.pretty_print();
    cout << "Is rate matchable" << endl;

    std::set<string> all_buffers;
    std::set<string> multi_write_buffers;
    map<string, std::set<string> > producer_kernels;
    std::set<string> reduced_kernels;
    for (auto op : prg.all_ops()) {
      auto read = op->buffers_read();
      auto written = op->buffers_written();
      for (auto b : intersection(read, written)) {
        reduced_kernels.insert(b);
        cout << "reduced kernel : " << b << endl;
      }
    }

    for (auto k : get_kernels(prg)) {
      for (auto b : get_produced_buffers(k, prg)) {
        all_buffers.insert(b);
        producer_kernels[b].insert(k);
        cout << "insert kernel: " << k << " to producer buffer: " << b << endl;
      }
    }

    cout << "Producer kernels..." << endl;
    for (auto p : producer_kernels) {
      cout << tab(1) << p.first << " -> ";
      for (auto k : p.second) {
        cout << k << " ";
      }
      cout << endl;
      if (p.second.size() > 1) {
        cout << tab(2) << "MULTIPLE PRODUCERS" << endl;
      }
    }
    for (auto k : get_kernels(prg)) {
      for (auto b : get_produced_buffers(k, prg)) {
        auto producers = producer_kernels[b];

        if (elem(b, reduced_kernels) && producers.size() >= 1) {
          cout << b << " has " << producers.size() << " producers" << endl;
          for (auto p : producers) {
            cout << tab(1) << p << endl;
          }
          auto writers = find_writers(b, prg);
          prg.pretty_print();
          //assert(writers.size() <= 2);
          if (writers.size() > 1) {
            multi_write_buffers.insert(b);
          }
        }

      }
    }

    cout << "Multi-write buffers" << endl;
    map<string, std::set<op*> >initializers;
    map<string, std::set<op*> > updaters;
    for (auto b : multi_write_buffers) {
      cout << tab(1) << b << endl;
      auto writers = find_writers(b, prg);
      vector<op*> ws;
      for (auto w : writers) {
        ws.push_back(w);
      }

      for (auto w : ws) {
        if (w->read_addrs().size() == 0) {
          initializers[b].insert(w);
        } else {
          updaters[b].insert(w);
        }

      }
      //op* w0 = ws.at(0);
      //op* w1 = ws.at(1);

      //if (w0->read_addrs().size() == 0) {
      //initializers[b] = w0;
      //updaters[b] = w1;
      //} else {
      //initializers[b] = w1;
      //updaters[b] = w0;
      //}
    }

    cout << "Built initializer / update maps" << endl;
    cout << tab(1) << "# multi_write buffers = " << multi_write_buffers.size() << endl;
    //assert(false);
    for (auto b : multi_write_buffers) {
      string init_buffer = prg.un(b + "_clkwrk_dsa");
      for (auto init : initializers[b]) {
        init->replace_writes_to(b, init_buffer);
      }
      for (auto updated : updaters[b]) {
        updated->replace_reads_from(b, init_buffer);
      }
      //auto init = initializers[b];
      //assert(init != 0);
      //auto updated = updaters[b];
      //assert(updated != 0);
      //cout << "Replacing writes" << endl;
      //init->replace_writes_to(b, init_buffer);
      //cout << "Replacing reads from " << b << " in " << updated->name << endl;
      //updated->replace_reads_from(b, init_buffer);
      prg.buffer_port_widths[init_buffer] = prg.buffer_port_width(b);
    }

    prg.pretty_print();
    //assert(false);

    // Split up buffers that are read at constants in one of their components
    for (auto b : all_buffers) {
      auto writers = find_writers(b, prg);
      auto readers = find_readers(b, prg);

      if (writers.size() > 1 && readers.size() == 0) {
        cout << b << " has " << writers.size() << " writers and " << readers.size() << " readers" << endl;
        assert(prg.is_output(b));
        for (auto writer : writers) {
          string init_buffer = prg.un(b + "_clkwrk_write_duplicate");
          writer->replace_writes_to(b, init_buffer);
          prg.add_output(init_buffer);
          prg.buffer_port_widths[init_buffer] = prg.buffer_port_width(b);
        }

        prg.outs.erase(b);
      }
    }

  }
}

int buffer_store_latency(CodegenOptions& options) {
  if (options.rtl_options.target_tile == TARGET_TILE_REGISTERS ||
      options.rtl_options.target_tile == TARGET_TILE_PLATONIC) {
    return 1;
  }

  if (options.rtl_options.target_tile == TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN) {
    return 1;
  }

  if (options.rtl_options.target_tile == TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN) {
    return 0;
  }

  if (options.rtl_options.target_tile == TARGET_TILE_GENERIC_SRAM) {
    return 1;
  }

  if (options.rtl_options.target_tile == TARGET_TILE_BRAM) {
    return 2;
  }

  if (options.rtl_options.target_tile == TARGET_TILE_M3 ||
      options.rtl_options.target_tile == TARGET_TILE_M1) {
    return 1;
  }
  assert(false);
}

int buffer_load_latency(CodegenOptions& options) {
  if (options.rtl_options.target_tile == TARGET_TILE_REGISTERS ) {
    return 0;

  } else if (options.rtl_options.target_tile == TARGET_TILE_WIDE_FETCH_WITH_ADDRGEN ) {
    return 0;
  } else if(options.rtl_options.target_tile == TARGET_TILE_PLATONIC)
  {
    return 0;
  }

  if (options.rtl_options.target_tile == TARGET_TILE_DUAL_SRAM_WITH_ADDRGEN) {
    return 1;
  }

  if (options.rtl_options.target_tile == TARGET_TILE_GENERIC_SRAM) {
    return 1;
  }

  if (options.rtl_options.target_tile == TARGET_TILE_BRAM) {
    return 2;
  }

  if (options.rtl_options.target_tile == TARGET_TILE_M3 ||
      options.rtl_options.target_tile == TARGET_TILE_M1) {
    return 1;
  }
  assert(false);
}


bool all_kernel_inputs_are_outputs_of_another_kernel(app_dag& dag) {
  for (auto& g : dag.fusion_group_progs) {
    for (auto in : g.second.ins) {
      bool found_in = false;
      if (elem(in, dag.prg.ins)) {
        found_in = true;
      } else {
        for (auto& other : dag.fusion_group_progs) {
          if (other.first != g.first) {
            for (auto out : other.second.outs) {
              if (out == in) {
                found_in = true;
                break;
              }
            }
          }
        }
      }

      if (!found_in) {
        dag.prg.pretty_print();

        cout << endl;

        g.second.pretty_print();
        cout << "Error: " << in << " on kernel " << g.first << " is not an output of any other kernel" << endl;
        cout << "progs..." << endl;
        for (auto gp : dag.fusion_group_progs) {
          gp.second.pretty_print();
        }
        return false;
      }

    }
  }

  return true;
}

bool all_kernel_inputs_are_program_inputs(app_dag& dag) {
  for (auto& g : dag.fusion_group_progs) {
    auto& gp = g.second;
    for (auto buf : buffers_read(gp)) {
      if ((dag.is_boundary(buf) || dag.producer_group(buf) != g.first) &&
          !elem(buf, gp.ins)) {
        cout << buf << " is not an in of " << endl;
        gp.pretty_print();
        return false;
      }
    }
  }
  return true;
}

bool all_kernel_outputs_have_fanout_one(app_dag& dag) {
  for (auto& g : dag.fusion_groups) {
    assert(contains_key(g.first, dag.fusion_group_progs));
    for (auto out : dag.fusion_group_progs.at(g.first).outs) {
      int num_receivers = 0;
      for (auto& other : dag.fusion_group_progs) {
        for (auto in : other.second.ins) {
          if (out == in) {
            num_receivers++;
          }
        }
      }
      if (num_receivers >= 2) {
        cout << out << " has " << num_receivers << " readers" << endl;
        return false;
      }
    }
  }
  return true;
}

void set_channel_depths_ilp(const int kernel_depth, app_dag& dag) {
  std::set<std::string> done;
  std::set<std::string> to_size;
  for (auto& buf : dag.prg.boundary_buffers()) {
    done.insert(buf);
  }

  for (auto& gp : dag.fusion_group_progs) {
    for (auto& buf : gp.second.boundary_buffers()) {
      if (!elem(buf, done)) {
        int depth = kernel_depth;
        dag.channel_sizes[buf] = depth;
        to_size.insert(buf);
      }
    }
  }

  cout << "Channels to size" << endl;
  for (auto t : to_size) {
    cout << tab(1) << t << endl;
    cout << tab(2) << "Producer: " << dag.producer_group(t) << endl;
    cout << tab(2) << "Consumer: " << dag.consumer_group(t) << endl;
    vector<string> lp = dag.longest_reconvergent_path(t);
    cout << tab(2) << "Longest path..." << endl;
    for (auto p : lp) {
      cout << tab(3) << p << endl;
    }
    assert(lp.size() >= 1);

    dag.channel_sizes[t] = std::max((int) 2, (int) (kernel_depth*(lp.size() - 1)));
  }

  ilp_builder builder(dag.prg.ctx);
  vector<pair<string, isl_val*> > obj;
  for (auto channel : to_size) {
    // Ready valid channels must be at least two
    // deep to max out throughput.
    builder.add_gt(channel, 1);
    obj.push_back({channel, isl_val_one(builder.ctx)});
  }

  for (auto src : dag.all_nodes()) {
    for (auto dst : dag.all_nodes()) {
      if (src != dst) {
        cout << "Getting all paths" << endl;
        vector<path> paths = dag.all_paths(src, dst);
        cout << "Got all paths" << endl;
        cout << tab(1) << "# of paths from " << src << " to " << dst << " = " << paths.size() << endl;
        for (auto p0 : paths) {
          for (auto p1 : paths) {
            if (p0 != p1) {
              assert(p0.size() >= 2);
              assert(p1.size() >= 2);

              // Dynamic path length of p0 must be at least as large as the
              // static path length of p1
              int static_length_p1 = kernel_depth*(p1.size() - 2);
              cout << tab(1) << "Static length of: " << p1 << " = " << static_length_p1 << endl;


              map<string, isl_val*> coeffs;
              for (int i = 0; i < (int) p0.size() - 1; i++) {
                // Note: This assumes at most one channel between
                // any two stages.
                string s = p0.at(i);
                string d = p0.at(i + 1);

                cout << "Getting edge between" << endl;
                string connector = dag.edge_between(s, d);
                cout << "Got edge between" << endl;
                coeffs[connector] = isl_val_one(builder.ctx);
              }
              cout << "Adding constraint" << endl;
              builder.add_geq(coeffs, isl_val_int_from_si(builder.ctx, -static_length_p1));
              cout << "Done adding constraint" << endl;
            }
          }
        }
      }
    }
  }

  builder.minimize(simplify(obj));
  cout << "Solution: " << endl;
  for (auto v : builder.variable_positions) {
    cout << v.first << " = " << str(builder.value(v.first)) << endl;
    dag.channel_sizes[v.first] = to_int(builder.value(v.first));
  }

}

void set_channel_depths_by_kernel_depth(const int kernel_depth, app_dag& dag) {

  std::set<std::string> done;
  std::set<std::string> to_size;
  for (auto& buf : dag.prg.boundary_buffers()) {
    done.insert(buf);
  }

  for (auto& gp : dag.fusion_group_progs) {
    for (auto& buf : gp.second.boundary_buffers()) {
      if (!elem(buf, done)) {
        int depth = kernel_depth;
        dag.channel_sizes[buf] = depth;
        to_size.insert(buf);
      }
    }
  }

  cout << "Channels to size" << endl;
  for (auto t : to_size) {
    cout << tab(1) << t << endl;
    cout << tab(2) << "Producer: " << dag.producer_group(t) << endl;
    cout << tab(2) << "Consumer: " << dag.consumer_group(t) << endl;
    vector<string> lp = dag.longest_reconvergent_path(t);
    cout << tab(2) << "Longest path..." << endl;
    for (auto p : lp) {
      cout << tab(3) << p << endl;
    }
    assert(lp.size() >= 1);

    dag.channel_sizes[t] = std::max((int) 2, (int) (kernel_depth*(lp.size() - 1)));
  }

}

void set_channel_depths_by_stage_depths(app_dag& dag) {
  ifstream in("pipeline_depths.txt");
  std::string line;
  std::map<string, int> depths;
  std::set<string> lines;
  while (std::getline(in, line))
  {
    std::istringstream iss(line);
    cout << "\t" << line << endl;
    lines.insert(split_at(line, ",")[0]);
    depths[split_at(line, ",")[0]] = stoi(split_at(line, ",")[1]);
  }

  for (auto gp : dag.fusion_group_progs) {
    if (!elem(gp.second.name, lines)) {
      cout << "Error: No line for " << gp.second.name << endl;
      for (auto l : lines) {
        if (is_prefix(l, gp.second.name) || is_prefix(gp.second.name, l)) {
          cout << tab(1) << "Found prefix for " << gp.second.name << " at: " << l << endl;
        }
      }
    } else {
      cout << "success, found group: " << gp.second.name << endl;
    }
  }

  in.close();
  assert(false);
}

void set_channel_depths_by_assumed_stage_depth(const int kernel_depth, app_dag& dag) {
  std::set<std::string> done;
  std::set<std::string> to_size;
  for (auto& buf : dag.prg.boundary_buffers()) {
    done.insert(buf);
  }

  for (auto& gp : dag.fusion_group_progs) {
    for (auto& buf : gp.second.boundary_buffers()) {
      if (!elem(buf, done)) {
        int depth = kernel_depth;
        dag.channel_sizes[buf] = depth;
        to_size.insert(buf);
      }
    }
  }

  std::set<string> processed_nodes;
  std::set<path> in_progress_paths;
  ilp_builder builder(dag.prg.ctx);
  vector<pair<string, isl_val*> > obj;
  for (auto channel : to_size) {
    // Ready valid channels must be at least two
    // deep to max out throughput.
    builder.add_gt(channel, 1);
    obj.push_back({channel, isl_val_one(builder.ctx)});
  }

  vector<string> sorted_groups = dag.sorted_fusion_groups().get_value();
  cout << "# of nodes to process: " << sorted_groups.size() << endl;
  int processed = 0;
  for (auto next_group : sorted_groups) {

    in_progress_paths.insert({next_group});

    std::set<path> to_insert;
    for (auto ancestor : dag.ancestors(next_group)) {
      cout << "Checking on ancestor of " << ancestor << " of " << next_group << endl;
      for (auto p : in_progress_paths) {
        cout << tab(1) << "Path: " << p << endl;
        if (p.back() == ancestor) {
          path cpy = p;
          cpy.push_back(next_group);
          to_insert.insert(cpy);
        }
      }
    }

    for (auto p0 : to_insert) {
      for (auto p1 : to_insert) {
        if (p0 != p1) {
          assert(p0.size() >= 2);
          assert(p1.size() >= 2);

          // Dynamic path length of p0 must be at least as large as the
          // static path length of p1
          int static_length_p1 = kernel_depth*(p1.size() - 2);
          cout << tab(1) << "Static length of: " << p1 << " = " << static_length_p1 << endl;


          map<string, isl_val*> coeffs;
          for (int i = 0; i < (int) p0.size() - 1; i++) {
            // Note: This assumes at most one channel between
            // any two stages.
            string s = p0.at(i);
            string d = p0.at(i + 1);

            cout << "Getting edge between" << endl;
            string connector = dag.edge_between(s, d);
            cout << "Got edge between" << endl;
            coeffs[connector] = isl_val_one(builder.ctx);
          }
          cout << "Adding constraint" << endl;
          builder.add_geq(coeffs, isl_val_int_from_si(builder.ctx, -static_length_p1));
          cout << "Done adding constraint" << endl;
        }
      }
    }

    for (auto p : to_insert) {
      in_progress_paths.insert(p);
    }

    processed_nodes.insert(next_group);

    std::vector<path> to_erase;
    for (auto p : in_progress_paths) {
      string head = p.back();
      bool all_children_processed = true;
      for (auto c : dag.children(head)) {
        if (!elem(c, processed_nodes)) {
          all_children_processed = false;
          break;
        }
      }
      if (all_children_processed) {
        to_erase.push_back(p);
      }
    }

    cout << "#Erasing " << to_erase.size() << " paths" << endl;
    for (auto p : to_erase) {
      cout << "Erasing: " << p << endl;
      in_progress_paths.erase(p);
    }
    processed++;
    cout << "# processed = " << processed << " (" << (processed / (double) sorted_groups.size()) << ")" << endl;
  }

  cout << "# of paths: " << in_progress_paths.size() << endl;
  builder.minimize(simplify(obj));
  cout << "Solution: " << endl;
  for (auto v : builder.variable_positions) {
    cout << v.first << " = " << str(builder.value(v.first)) << endl;
    dag.channel_sizes[v.first] = to_int(builder.value(v.first));
  }
}

void set_channel_depths_to_constant(const int constant, app_dag& dag) {
  std::set<std::string> done;
  for (auto& buf : dag.prg.boundary_buffers()) {
    done.insert(buf);
  }

  for (auto& gp : dag.fusion_group_progs) {
    for (auto& buf : gp.second.boundary_buffers()) {
      if (!elem(buf, done)) {
        int depth = constant;
        dag.channel_sizes[buf] = depth;
      }
    }
  }
}

umap* clockwork_schedule_prog(prog& prg) {
  auto valid_deps = prg.validity_deps();
  double total_elapsed = 0.;
  auto start = std::chrono::system_clock::now();

  auto ss =
    clockwork_schedule_umap_reversed(prg.whole_iteration_domain(), valid_deps, valid_deps);

  auto end = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed = end - start;
  total_elapsed += elapsed.count();

  cout << "### Clockwork Schedule elapsed: " << total_elapsed << endl;
  auto global_sched =
    its(ss, prg.whole_iteration_domain());

  return global_sched;
}

void generate_resource_sharing_code(
    CodegenOptions& options,
    app_dag& dag) {

  auto valid_deps = dag.prg.validity_deps();
  auto global_sched =
    its(clockwork_schedule_umap_reversed(dag.prg.whole_iteration_domain(), valid_deps, valid_deps),
        dag.prg.whole_iteration_domain());
  cout << "Sched: " << str(global_sched) << endl;

  string code_string = resource_sharing_loop_codegen(global_sched);

  cout << "Code: " << endl;
  cout << code_string << endl;

  // What are the major changes that are needed?
  //  - We have to have one C++ function that takes in
  //    inputs from every channel and does compute ops on them
  //  - Compute units in other operations have to be done
  //    by writing data to a channel and then reading it back
  //    from another channel
  // Q: How much of this can be done by modifying the existing
  //    DAG codegen that I have?

  assert(false);
}

bool in_group(op* op, const std::set<string>& group, prog& prg) {
  for (auto g : group) {
    auto lp = prg.find_loop(g);
    if (op == lp) {
      return true;
    }
    for (auto d : lp->descendant_ops()) {
      if (d == op) {
        return true;
      }
    }
  }
  return false;
}

isl_set* read_by_group(const std::string& buf, const std::set<string>& group, prog& prg) {
  auto consumers = prg.consumer_maps(buf);
  vector<isl_set*> read;
  for (auto m : consumers) {
    if (m.second != nullptr && in_group(m.first, group, prg)) {
      auto dom = range(m.second);
      read.push_back(dom);
    }
  }

  isl_set* s = unn(read);
  return s;
}

isl_set* read_by_group(const std::string& buf, const std::string& group_name, app_dag& dag) {
  auto consumers = dag.prg.consumer_maps(buf);
  vector<isl_set*> read;
  for (auto m : consumers) {
    if (m.second != nullptr && dag.in_group(m.first, group_name)) {
      auto dom = range(m.second);
      read.push_back(dom);
    }
  }

  isl_set* s = unn(read);
  return s;
}

vector<int> write_permutation(const std::string& buf, prog& pp) {
  auto readers = find_writers(buf, pp);
  op* reader = pick(readers);
  auto addr_rep = pick(write_addrs(reader, buf, pp));
  cout << tab(1) << "Addr rep: " << str(addr_rep) << endl;
  auto levels = get_variable_levels(pp);
  vector<int> level_permutation;
  level_permutation.resize(isl_multi_aff_dim(addr_rep, isl_dim_set), -1);
  vector<int> constant_levels;
  for (int i = 0; i < isl_multi_aff_dim(addr_rep, isl_dim_set); i++) {
    isl_aff* addr_comp = isl_multi_aff_get_aff(addr_rep, i);

    bool found_addr = false;
    cout << tab(2) << str(addr_comp) << endl;
    for (int d = 0; d < num_in_dims(addr_comp); d++) {
      if (!is_zero(get_coeff(addr_comp, d))) {
        string var = surrounding_vars(reader, pp).at(d);
        int lvl = map_find(var, levels) - 1;
        cout << tab(3) << "var: " << var << endl;
        cout << tab(3) << "lvl: " << map_find(var, levels) << endl;
        assert(lvl >= 0);
        //cout << tab(3) << "address component " << i << " of " << b.first << " should be loaded at level " << lvl << endl;
        level_permutation[i] = lvl;
        found_addr = true;
        break;
      } else {
        cout << tab(3) << "Address component is zero" << endl;
      }
    }
    if (!found_addr) {
      constant_levels.push_back(i);
    }
  }

  if (constant_levels.size() > 0) {
    cout << "Components " << comma_list(constant_levels) << " of " << buf << " are only accessed at constant locations" << endl;
    int total_comps = isl_multi_aff_dim(addr_rep, isl_dim_set);
    int constant_comps = constant_levels.size();
    int next_pad_level = max_e(level_permutation) + 1;
    for (auto i : constant_levels) {
      level_permutation[i] = next_pad_level;
      next_pad_level++;
    }
  }

  cout << "Permutation for " << buf << ": " << comma_list(level_permutation) << endl;
  assert(level_permutation.size() == isl_multi_aff_dim(addr_rep, isl_dim_set));
  assert(is_permutation(level_permutation));

  return level_permutation;
}

vector<int> read_permutation(const std::string& buf, prog& gp) {
  vector<int> level_permutation;

  auto readers = find_readers(buf, gp);
  op* reader = pick(readers);
  auto addr_rep = pick(read_addrs(reader, buf, gp));
  auto levels = get_variable_levels(gp);
  level_permutation.resize(isl_multi_aff_dim(addr_rep, isl_dim_set));
  for (int i = 0; i < isl_multi_aff_dim(addr_rep, isl_dim_set); i++) {
    isl_aff* addr_comp = isl_multi_aff_get_aff(addr_rep, i);
    for (int d = 0; d < num_in_dims(addr_comp); d++) {
      if (!is_zero(get_coeff(addr_comp, d))) {
        string var = surrounding_vars(reader, gp).at(d);
        int lvl = map_find(var, levels) - 1;
        assert(lvl >= 0);
        level_permutation[i] = lvl;
      }
    }
  }
  return level_permutation;
}

int get_start_pos(const std::set<string>& group, prog& prg) {
  int start_pos = INT_MAX;
  for (auto g : group) {
    int pos = -1;
    for (int i = 0; i < (int) prg.root->children.size(); i++) {
      if (prg.root->children.at(i)->name == g) {
        pos = i;
        break;
      }
    }

    if (pos < 0) {
      prg.pretty_print();
      cout << "Error: No start pos for " << g << endl;
    }
    assert(pos >= 0);
    if (pos < start_pos) {
      start_pos = pos;
    }
  }
  return start_pos;
}

int position(const std::string& kernel, prog& prg) {
  for (int i = 0; i < (int) prg.root->children.size(); i++) {
    if (prg.root->children.at(i)->name == kernel) {
      return i;
    }
  }
  assert(false);
  return -1;
}

vector<string> sort_group(const std::set<string>& group, prog& prg) {
  vector<string> sorted;
  vector<pair<string, int> > positions;
  for (auto g : group) {
    positions.push_back({g, position(g, prg)});
  }

  sort_lt(positions, [](const pair<string, int>& e) { return e.second; });

  for (auto p : positions) {
    sorted.push_back(p.first);
  }
  return sorted;
}

string container(const std::string& val, const std::map<std::string, std::set<std::string> >& fusion_groups) {
  for (auto g : fusion_groups) {
    if (elem(val, g.second)) {
      return g.first;
    }
  }
  assert(false);
}

void make_groups_contiguous(const std::map<std::string, std::set<std::string> >& fusion_groups, prog& prg) {

  if (prg.root->children.size() == 0) {
    return;
  }

  string active_group =
    container(prg.root->children[0]->name, fusion_groups);
  auto unprocessed_kernels = get_kernels(prg);

  vector<op*> sorted_kernels;
  while (unprocessed_kernels.size() > 0) {
    string next_kernel = "";
    for (auto k : unprocessed_kernels) {
      if (container(k, fusion_groups) == active_group) {

        bool all_ancestors_processed = true;
        for (auto a : parents(k, prg)) {
          if (elem(a, unprocessed_kernels)) {
            all_ancestors_processed = false;
            break;
          }
        }
        if (all_ancestors_processed) {
          next_kernel = k;
          break;
        }
      }
    }

    if (next_kernel == "") {
      for (auto k : unprocessed_kernels) {
        bool all_ancestors_processed = true;
        for (auto a : parents(k, prg)) {
          if (elem(a, unprocessed_kernels)) {
            all_ancestors_processed = false;
            break;
          }
        }
        if (all_ancestors_processed) {
          next_kernel = k;
          break;
        }
      }
    }
    assert(next_kernel != "");

    sorted_kernels.push_back(prg.find_loop(next_kernel));
    active_group = container(next_kernel, fusion_groups);
    unprocessed_kernels.erase(next_kernel);
  }

  assert(sorted_kernels.size() == prg.root->children.size());
  prg.root->children = sorted_kernels;
}

op* last_writer_in_group(const std::string& buf, const std::set<string>& kernels, prog& prg) {
  vector<op*> rc = prg.root->children;
  reverse(rc);
  for (auto c : rc) {
    if (elem(c->name, kernels)) {
      if (elem(buf, buffers_written(c))) {
        return c;
      }
    }
  }
  cout << "No writer for " << buf << endl;
  assert(false);
}

op* first_reader_in_group(const std::string& buf, const std::set<string>& kernels, prog& prg) {
  for (auto c : prg.root->children) {
    if (elem(c->name, kernels)) {
      if (elem(buf, buffers_read(c))) {
        return c;
      }
    }
  }
  assert(false);
}

std::map<std::string, std::set<std::string> >
insert_inter_group_buffers(const std::map<std::string, std::set<std::string> >& fusion_groups, prog& prg) {

  cout << "Making contiguous" << endl;
  make_groups_contiguous(fusion_groups, prg);
  cout << "Done contiguous" << endl;

  // Map from buffers to the kernels they read
  map<string, std::set<string> > produced_bufs;
  map<string, std::set<string> > consumed_bufs;
  map<string, string> producer_groups;
  for (auto gp : fusion_groups) {
    cout << "GP..." << endl;
    produced_bufs[gp.first] = get_produced_buffers(gp.second, prg);
    consumed_bufs[gp.first]= get_consumed_buffers(gp.second, prg);
    for (auto b : produced_bufs[gp.first]) {
      producer_groups[b] = gp.first;
    }
  }

  cout << "=== Creating broadcast data structures..." << endl;
  map<string, vector<int> > kernel_orders;
  map<string, vector<string> > kernel_broadcasts;
  for (auto gp : fusion_groups) {
    cout << "GP..." << endl;
    auto produced = map_find(gp.first, produced_bufs);
    for (auto other_gp : fusion_groups) {
      cout << "OtherGP GP..." << endl;
      if (gp != other_gp) {
        auto consumed = map_find(other_gp.first, consumed_bufs);
        for (auto buf : consumed) {
          if (elem(buf, produced)) {
            kernel_broadcasts[buf].push_back(other_gp.first);
            cout << "=== Finding write permutation..." << endl;
            kernel_orders[buf] =
              write_permutation(buf, prg);
            cout << tab(1) << "Found write permutation..." << endl;
          }
        }
      }
    }
  }

  map<pair<string, string>, isl_set*> read_by_gp;
  for (auto b : kernel_broadcasts) {
    for (auto group_name : b.second) {
      isl_set* s = read_by_group(b.first, map_find(group_name, fusion_groups), prg);
      read_by_gp[{group_name, b.first}] = s;
    }
  }


  cout << "Original program before partitioning..." << endl;
  prg.pretty_print();

  map<string, std::set<string> > fresh_groups = fusion_groups;
  for (auto b : kernel_broadcasts) {
    vector<int> kernel_order = map_find(b.first, kernel_orders);
    for (auto group_name : b.second) {
      isl_set* s = map_find({group_name, b.first}, read_by_gp);

      string broadcast = prg.un(b.first + "_to_" + group_name);
      string incoming_channel = broadcast;
      string producer_group = map_find(b.first, producer_groups);

      prg.buffer_port_widths[broadcast] = prg.buffer_port_width(name(s));

      op* copy_insert_point = last_writer_in_group(b.first, map_find(producer_group, fusion_groups), prg);
      op* copy_loop = copy_after(copy_insert_point, s, kernel_order, broadcast, prg);
      fresh_groups[producer_group].insert(copy_loop->name);

      string replacement = prg.un(b.first + "_FIFO_buf");
      prg.buffer_port_widths[replacement] = prg.buffer_port_width(incoming_channel);
      for (auto kernel : map_find(group_name, fusion_groups)) {
        prg.find_loop(kernel)->replace_reads_from(b.first, replacement);
      }

      isl_set* incoming = set_name(cpy(s), incoming_channel);
      op* copy_r_insert_point = first_reader_in_group(replacement, map_find(group_name, fusion_groups), prg);
      op* copy_loop_r = copy_before(copy_r_insert_point, incoming, kernel_order, replacement, prg);
      fresh_groups[group_name].insert(copy_loop_r->name);
    }
  }

  return fresh_groups;
}

app_dag partition_groups(const std::map<std::string, std::set<std::string> >& fresh_groups, prog& prg) {
  cout << "=== Extracting groups..." << endl;
  app_dag dag{prg, fresh_groups};

  for (auto& g : dag.fusion_groups) {
    dag.fusion_group_progs[g.first] =
      extract_group_to_separate_prog(g.second, dag.prg);
  }

  for (auto prg : dag.fusion_group_progs) {
    sanity_check_all_reads_defined(prg.second);
  }

  assert(all_kernel_outputs_have_fanout_one(dag));
  assert(all_kernel_inputs_are_program_inputs(dag));
  assert(all_kernel_inputs_are_outputs_of_another_kernel(dag));

  return dag;
}

app_dag partition_application(const std::map<std::string, std::set<std::string> >& fusion_groups, prog& prg) {

  auto fresh_groups = insert_inter_group_buffers(fusion_groups, prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
  return partition_groups(fresh_groups, prg);
}

void prog::reset_context() {
  isl_ctx_free(ctx);
  ctx = isl_ctx_alloc();
}

maybe<vector<string> > app_dag::sorted_fusion_groups() {
  assert(fusion_groups.size() == fusion_group_progs.size());

  vector<string> sorted;
  std::set<string> finished_buffers;
  for (auto b : prg.ins) {
    finished_buffers.insert(b);
  }

  while (sorted.size() < fusion_groups.size()) {
    cout << "Sorted size: " << sorted.size() << endl;
    bool found_sorted = false;
    for (auto& g : fusion_group_progs) {
      if (!elem(g.first, sorted)) {
        cout << tab(1) << g.first << " is not sorted" << endl;
        bool all_deps_done = true;
        for (auto b : g.second.ins) {
          if (!elem(b, finished_buffers)) {
            cout << tab(2) << "Dependency: " << b << " is not in finished buffers" << endl;
            all_deps_done = false;
            break;
          }
        }

        if (all_deps_done) {
          for (auto b : g.second.outs) {
            finished_buffers.insert(b);
          }
          sorted.push_back(g.first);
          found_sorted = true;
        }
      }
    }
    if (!found_sorted) {
      for (auto pg : fusion_group_progs) {
        cout << "Program for " << pg.first << "..." << endl;
        pg.second.pretty_print();
        cout << endl;
      }
      return {};
    }
    //assert(found_sorted);
  }
  return sorted;
}

bool is_pointwise_kernel(const std::string& name, prog& prg) {
  return buffers_read(prg.find_loop(name)).size() == 1 &&
    buffers_written(prg.find_loop(name)).size() == 1;
}

void merge_into(
    const std::string& to_merge,
    const std::string& dst,
    map<std::string, std::set<string> >& groups) {

  auto values = map_find(to_merge, groups);
  for (auto v : values) {
    groups.at(dst).insert(v);
  }
  groups.erase(to_merge);
}

std::set<string> parents(const std::string& to_merge, map<string, std::set<string> >& fusion_groups, prog& prg) {
  std::set<string> parent_set;

  auto read = buffers_read(to_merge, fusion_groups, prg);
  for (auto fg : fusion_groups) {
    auto written = buffers_written(fg.first, fusion_groups, prg);
    if (intersection(read, written).size() > 0) {
      parent_set.insert(fg.first);
    }
  }

  return parent_set;
}

std::set<string> buffers_written(const std::string& to_merge, map<string, std::set<string> >& fusion_groups, prog& prg) {
  std::set<string> written;
  for (auto k : map_find(to_merge, fusion_groups)) {
    for (auto b : buffers_written(prg.find_loop(k))) {
      written.insert(b);
    }
  }
  return written;
}

std::set<string> buffers_read(const std::string& to_merge, map<string, std::set<string> >& fusion_groups, prog& prg) {
  std::set<string> read;
  for (auto k : map_find(to_merge, fusion_groups)) {
    for (auto b : buffers_read(prg.find_loop(k))) {
      read.insert(b);
    }
  }
  return read;
}

std::set<string> parents(const std::string& kernel, prog& prg) {
  std::set<string> parent_set;

  auto read = buffers_read(prg.find_loop(kernel));
  for (auto k : get_kernels(prg)) {
    auto written = buffers_written(prg.find_loop(k));
    if (intersection(read, written).size() > 0) {
      parent_set.insert(k);
    }
  }

  return parent_set;
}

std::set<string> children(const std::string& kernel, prog& prg) {
  std::set<string> parent_set;

  auto written = buffers_written(prg.find_loop(kernel));
  for (auto k : get_kernels(prg)) {
    auto read = buffers_read(prg.find_loop(k));
    if (intersection(read, written).size() > 0) {
      parent_set.insert(k);
    }
  }

  return parent_set;
}

std::set<string> children(const std::string& to_merge, map<string, std::set<string> >& fusion_groups, prog& prg) {
  std::set<string> parent_set;

  auto written = buffers_written(to_merge, fusion_groups, prg);
  for (auto fg : fusion_groups) {
    auto read = buffers_read(fg.first, fusion_groups, prg);
    if (intersection(read, written).size() > 0) {
      parent_set.insert(fg.first);
    }
  }

  return parent_set;

}

string parent_group(const std::string& to_merge, map<string, std::set<string> >& fusion_groups, prog& prg) {
  std::set<string> parent_set = parents(to_merge, fusion_groups, prg);

  assert(parent_set.size() == 1);

  return pick(parent_set);
}

map<std::string, std::set<string> > fuse_pointwise_stages(prog& prg) {
  map<std::string, std::set<string> > fusion_groups = one_stage_per_group(prg);

  bool found_mergeable = true;
  while (found_mergeable) {
    found_mergeable = false;

    string to_merge = "";
    for (auto g : fusion_groups) {
      auto kernels = g.second;
      if (parents(g.first, fusion_groups, prg).size() == 1 && kernels.size() == 1) {
        if (is_pointwise_kernel(pick(kernels), prg)) {
          cout << "Candidate pointwise fusion group: " << g.first << endl;
          to_merge = g.first;
          found_mergeable = true;
          break;
        }
      }
    }

    if (found_mergeable) {
      assert(to_merge != "");

      string parent = parent_group(to_merge, fusion_groups, prg);
      merge_into(to_merge, parent, fusion_groups);

      assert(!contains_key(to_merge, fusion_groups));
    }

  }

  return fusion_groups;
}

map<std::string, std::set<string> > one_stage_per_group(prog& prg) {
  map<std::string, std::set<string> > fusion_groups;
  int i = 0;
  for (auto gp : get_kernels(prg)) {
    fusion_groups["gp_" + str(i)] = {gp};
    i++;
  }

  return fusion_groups;
}

bool no_violated_dependencies(umap* schedule, umap* deps) {
  return sw_schedule_respects_deps(schedule, deps);
}

bool sw_schedule_respects_deps(umap* schedule, umap* deps) {
  auto before = lex_gt(schedule, schedule);
  auto violated = its(before, deps);
  return empty(violated);
}



void unroll_mismatched_inner_loops(prog& prg) {
  if (!all_loop_nests_same_depth(prg)) {
    cout << "Not all nests are the same depth!" << endl;
    int min_depth = INT_MAX;
    for (auto l : prg.all_ops()) {
      int num_surrounding = surrounding_vars(l, prg).size();
      if (num_surrounding < min_depth) {
        min_depth = num_surrounding;
      }
    }
    cout << "Min depth: " << min_depth << endl;

    for (auto op : prg.all_ops()) {
      auto surrounding = surrounding_vars(op, prg);
      int num_surrounding = surrounding.size();
      for (int v = min_depth; v < num_surrounding; v++) {
        unroll(prg, surrounding.at(v));
      }
    }
  }



}


vector<string> app_dag::longest_reconvergent_path(const std::string& buf) {
  string src = producer_group(buf);
  string dst = consumer_group(buf);

  vector<path> finished_paths = all_paths(src, dst);

  assert(finished_paths.size() > 0);

  return max_e(finished_paths, [](const path& p) { return p.size(); });
}

std::set<string> app_dag::children(const std::string& location) {
  std::set<string> ch;

  assert(contains_key(location, fusion_group_progs));

  for (auto buf : buffers_written(fusion_group_progs.at(location))) {
    if (!elem(buf, prg.boundary_buffers())) {
      ch.insert(consumer_group(buf));
    }
  }

  return ch;
}

vector<path> app_dag::all_paths(const std::string& src, const std::string& dst) {
  assert(src != dst);

  path start_path{src};
  std::set<string> visited;
  vector<path> active_paths{start_path};
  vector<path> finished_paths;

  while (active_paths.size() > 0) {
    path p = active_paths.back();
    active_paths.pop_back();

    string node = p.back();
    visited.insert(node);


    for (auto c : children(node)) {
      if (c == dst) {
        path pcpy = p;
        pcpy.push_back(dst);
        finished_paths.push_back(pcpy);
      } else {
        if (!elem(c, visited)) {
          path fresh = p;
          fresh.push_back(c);
          active_paths.push_back(fresh);
        }
      }
    }
  }

  return finished_paths;
}

string app_dag::edge_between(const std::string& src, const std::string& dst) {
  assert(contains_key(src, fusion_group_progs));
  assert(contains_key(dst, fusion_group_progs));

  vector<string> edges;
  auto read = buffers_read(fusion_group_progs.at(dst));
  for (auto b : buffers_written(fusion_group_progs.at(src))) {
    if (elem(b, read)) {
      edges.push_back(b);
    }
  }

  assert(edges.size() == 1);

  return pick(edges);
}

std::set<string> app_dag::inter_group_channels() {
  std::set<std::string> done;
  std::set<std::string> to_size;
  for (auto& buf : prg.boundary_buffers()) {
    done.insert(buf);
  }

  for (auto& gp : fusion_group_progs) {
    for (auto& buf : gp.second.boundary_buffers()) {
      if (!elem(buf, done)) {
        to_size.insert(buf);
      }
    }
  }
  return to_size;
}

bool group_is_contiguous(const std::set<string>& fusion_groups, prog& prg) {
  int start_pos = INT_MAX;
  int end_pos = INT_MIN;
  for (auto g : fusion_groups) {
    int pos = -1;
    for (int i = 0; i < (int) prg.root->children.size(); i++) {
      if (prg.root->children.at(i)->name == g) {
        pos = i;
        break;
      }
    }
    assert(pos >= 0);
    if (pos < start_pos) {
      start_pos = pos;
    }
    if (pos > end_pos) {
      end_pos = pos;
    }
  }

  assert(end_pos >= start_pos);
  return (end_pos - start_pos + 1) == (int) fusion_groups.size();
}

bool groups_are_contiguous(const map<string, std::set<string> >& fusion_groups, prog& prg) {
  for (auto gp : fusion_groups) {
    if (!group_is_contiguous(gp.second, prg)) {
      return false;
    }
  }
  return true;
}

bool no_violated_cycle_accurate_dependencies(umap* deps, schedule_info& sched, prog& prg) {
  prg.pretty_print();
  sanity_check_iis(sched);
  sanity_check_negative_starts(sched, prg);

  auto start_times = op_start_times_map(sched, prg);
  auto end_times = op_end_times_map(sched, prg);
  auto all_times = unn(start_times, end_times);

  cout << "Schedule..." << endl;
  for (auto m : get_maps(start_times)) {
    cout << tab(1) << str(m) << endl;
    release(m);
  }
  cout << tab(1) << "Cycle deps: " << str(deps) << endl;

  deps = inv(deps);
  auto earlier = lex_lt(all_times, all_times);

  cout << tab(1) << "Earlier deps: " << str(earlier) << endl;

  auto violated = its(earlier, deps);

  cout << tab(1) << "Violated deps: " << str(violated) << endl;
  bool safe = empty(violated);

  if (!safe) {
    cout << "Schedule..." << endl;
    for (auto s : get_maps(start_times)) {
      cout << str(s) << endl << endl;
    }
    cout << endl;
    cout << "Violated deps..." << endl;
    for (auto m : get_maps(violated)) {
      cout << str(m) << endl << endl;
    }
  }
  release(violated);
  release(earlier);
  release(start_times);
  release(end_times);
  release(all_times);
  //assert(false);
  return safe;
}

bool no_violated_cycle_accurate_dependencies(schedule_info& sched, prog& prg) {
  auto deps = cycle_accurate_deps(prg);
  return no_violated_cycle_accurate_dependencies(deps, sched, prg);
}

umap* cycle_accurate_deps(prog& prg) {
  auto valid = prg.validity_deps();
  umap* final_dep = rdmap(prg.ctx, "{}");
  for (auto m : get_maps(valid)) {
    string dom_name = "end_" + domain_name(m);
    string rname = "start_" + range_name(m);
    m = set_domain_name(set_range_name(m, rname), dom_name);
    auto um = to_umap(m);
    final_dep = unn(final_dep, um);
    release(m);
    release(um);
  }

  release(valid);
  return final_dep;
}

void sanity_check_negative_starts(schedule_info& sched, prog& prg) {
  auto start_times = its(op_start_times_map(sched, prg), op_start_times_domain(prg));
  cout << "Start times..." << endl;
  //cout << str(start_times) << endl;
  for (auto m : get_maps(start_times)) {
    cout << tab(1) << str(m) << endl;
  }
  //assert(false);
  auto ranges = range(start_times);
  auto range_set = to_set(ranges);
  int min = to_int(lexminval(range_set));

  cout << tab(1) << "min: " << str(lexmin(ranges)) << endl;
  assert(min >= 0);
}

int max_completion_time(schedule_info& sched, prog& prg) {
  auto start_times =
    its(op_start_times_map(sched, prg), op_start_times_domain(prg));

  int done_time = INT_MIN;

  for (auto s : get_sets(range(start_times))) {
    int max_dim = to_int(lexmaxval(s));
    done_time = max(max_dim, done_time);
  }
  return done_time;
}

void prepare_for_clockwork_scheduling(prog& prg) {
  unroll_reduce_loops(prg);
  merge_basic_block_ops(prg);
  normalize_bounds(prg);
  normalize_address_offsets(prg);
  unroll_mismatched_inner_loops(prg);
  merge_basic_block_ops(prg);
}

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


prog prog::deep_copy() {
  prog cpy;
  cpy.unique_num = unique_num;
  cpy.name = name;
  cpy.ctx = ctx;

  cpy.ins = ins;
  cpy.outs = outs;
  cpy.buffer_port_widths = buffer_port_widths;
  cpy.compute_unit_file = compute_unit_file;

  cpy.buffer_bounds = buffer_bounds;

  for (auto c : root->children) {
    deep_copy_child(cpy.root, c, *this);
  }

  return cpy;
}


std::set<string> app_dag::ancestors(const std::string& location) {
  assert(contains_key(location, fusion_group_progs));

  std::set<string> ch;
  for (auto buf : buffers_read(fusion_group_progs.at(location))) {
    if (!elem(buf, prg.boundary_buffers())) {
      string pg = producer_group(buf);
      if (pg != location) {
        ch.insert(pg);
      }
    }
  }

  return ch;

}
