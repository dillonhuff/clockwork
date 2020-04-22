#include "prog.h"
#include "codegen.h"

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
    conv_out << tab(indent) << "hw_uint<" << lane_width << "> " << ln << ";" << endl;
    conv_out << tab(indent)
      << "set_at<0, " << lane_width << ">(" << ln << ", " << value << ".extract<" << base << ", " << end << ">());" << endl;

    lanes.push_back(ln);
  }

  return lanes;
}

void generate_xilinx_accel_wrapper(map<string, UBuffer>& buffers, prog& prg) {

  string driver_func = prg.name + "_accel";

  ofstream out(driver_func + ".cpp");
  out << "#include \"" << prg.name << ".h\"" << endl << endl;

  out << "#define INPUT_SIZE (18*18)" << endl;
  out << "#define OUTPUT_SIZE (16*16)" << endl << endl;

  out << "extern \"C\" {" << endl << endl;

  out << "static void read_input(int* input, hls::stream<hw_uint<32> >& v, const int size) {" << endl;
  out << tab(1) << "for (int i = 0; i < INPUT_SIZE; i++) {" << endl;
  out << tab(2) << "#pragma HLS pipeline II=1" << endl;
  out << tab(2) << "v.write(input[i]);" << endl;
  out << tab(1) << "}" << endl;
  out << "}" << endl << endl;

  out << "static void write_output(int* output, hls::stream<hw_uint<32> >& v, const int size) {" << endl;
  out << tab(1) << "for (int i = 0; i < OUTPUT_SIZE; i++) {" << endl;
  out << tab(2) << "#pragma HLS pipeline II=1" << endl;
  out << tab(2) << "output[i] = v.read();" << endl;
  out << tab(1) << "}" << endl;
  out << "}" << endl << endl;

  vector<string> ptr_args;
  vector<string> ptr_arg_decls;
  vector<string> buffer_args;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);
    auto bundle = pick(buf.get_out_bundles());

    ptr_arg_decls.push_back("int* " + bundle + "_arg");
    ptr_args.push_back(bundle);
    buffer_args.push_back(buf.name);
  }

  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());

    ptr_arg_decls.push_back("int* " + bundle + "_arg");
    ptr_args.push_back(bundle);
    buffer_args.push_back(buf.name);
  }

  vector<string> all_arg_decls = ptr_arg_decls;
  all_arg_decls.push_back("const int size");

  out << "void " << driver_func << "(" << comma_list(all_arg_decls) << ") { " << endl;
  out << "#pragma HLS dataflow" << endl;

  for (auto pt : ptr_args) {
    out << "#pragma HLS INTERFACE m_axi port = " << pt << " offset = slave bundle = gmem" << endl;
  }
  out << endl;
  for (auto pt : ptr_args) {
    out << "#pragma HLS INTERFACE s_axilite port = " << pt << " bundle = control" << endl;
  }
  out << "#pragma HLS INTERFACE s_axilite port = size bundle = control" << endl;
  out << "#pragma HLS INTERFACE s_axilite port = return bundle = control" << endl;
  out << endl;

  for (auto in : prg.ins) {
    out << tab(1) << "static hls::stream<hw_uint<32> > " << in << ";" << endl;
  }

  for (auto in : prg.outs) {
    out << tab(1) << "static hls::stream<hw_uint<32> > " << in << ";" << endl;
  }
  out << endl;

  // TODO: Change to bundle names!!
  for (auto in : prg.ins) {
    out << tab(1) << "read_input(" << in << "_arg" << ", " << in << ", size);" << endl;
  }

  out << endl << tab(1) << prg.name << "(" << comma_list(buffer_args) << ");" << endl << endl;

  for (auto in : prg.outs) {
    out << tab(1) << "write_output(" << in << "_arg" << ", " << in << ", size);" << endl;
  }

  out << "}" << endl << endl;
  out << "}" << endl;

  out.close();
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
      buf.add_access_pattern(pt_name, op->name, name);

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
      buf.add_access_pattern(pt_name, op->name, name);

      vector<string> inpt = buf.get_out_ports();
      cout << "current out port name: " << endl;
      for_each(inpt.begin(), inpt.end(), [](string pt_name){cout <<"\t" << pt_name;});
      cout << endl;

      usuffix++;
    }

  }

  return buffers;
}


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

  out << "#define PIXEL_WIDTH " << 32 << endl;
  out << "#define BURST_WIDTH " << 32 << endl;

  out << "using namespace std;" << endl << endl;

  for (auto b : buffers) {
    if (prg.is_input(b.first)) {
      out << "// In : " << b.first << " dimensions..." << endl;
      int dim = b.second.num_dims();
      auto all_mem = coalesce(b.second.all_memory());
      out << tab(1) << "// " << str(all_mem) << endl;
      out << tab(1) << "// Min: " << str(lexmin(all_mem)) << endl;
      out << tab(1) << "// Max: " << str(lexmax(all_mem)) << endl;
    }

    if (prg.is_output(b.first)) {
      out << "// Out: " << b.first << " dimensions..." << endl;
      int dim = b.second.num_dims();
      auto all_mem = coalesce(b.second.all_memory());
      out << tab(1) << "// " << str(all_mem) << endl;
      out << tab(1) << "// Min: " << str(lexmin(all_mem)) << endl;
      out << tab(1) << "// Max: " << str(lexmax(all_mem)) << endl;
    }
  }

  out <<"int main() {" << endl;
  cout << "starting" << endl;

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

void generate_tb_compare_scripts(prog& prg) {
  {
    ofstream of(prg.name + "_kernel.h");
    of << "#include \"ap_int.h\"" << endl << endl;
    of << "extern \"C\" {" << endl << endl;
    of << "void " << prg.name << "_kernel();" << endl;
    of << "}" << endl;
    of.close();
  }

  {
    ofstream of("tb_soda_" + prg.name + ".cpp");

    of << "#include \"" << prg.name << "_kernel.h\"" << endl;
    of << "#include <iostream>" << endl;
    of << "#include <fstream>" << endl;
    of << "#define PIXEL_WIDTH 32" << endl;
    of << "#define BURST_WIDTH 32" << endl;

    of << "#include \"runtime/test_utils.h\"" << endl << endl;
    of << "using namespace std;" << endl << endl;
    of << "int main() {" << endl;
    of << tab(1) << "const int nrows = 32;" << endl;
    of << tab(1) << "const int ncols = 32;" << endl;

    of << tab(1) << "uint64_t img_pixels = nrows*ncols;" << endl;

    of << tab(1) << "const uint64_t bits_per_pixel = PIXEL_WIDTH;" << endl;
    of << tab(1) << "uint64_t img_bits = bits_per_pixel*img_pixels;" << endl;

    of << "const uint64_t num_transfers = img_bits / BURST_WIDTH;" << endl;

    of << "const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;" << endl;

    of << tab(1) << "cout << \"num transfers    : \" << num_transfers << endl;" << endl;
    of << "cout << \"pixels / transfer: \" << pixels_per_burst << endl;" << endl;

    of << "const uint64_t transfer_cols = ncols / pixels_per_burst;" << endl;

    of << tab(1) << "ap_uint<BURST_WIDTH>* y_res = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);" << endl;
    of << "ap_uint<BURST_WIDTH>* u = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>) * num_transfers);" << endl;
    of << "ap_uint<BURST_WIDTH>* f = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>) * num_transfers);" << endl;

    of << "fill_array<bits_per_pixel>(\"u_input_pixel.csv\", u, nrows, ncols, transfer_cols);" << endl;
    of << "fill_array<bits_per_pixel>(\"f_input_pixel.csv\", f, nrows, ncols, transfer_cols);" << endl;

    of << prg.name << "_kernel(y_res, f, u, num_transfers);" << endl;
    of << tab(1) << "write_results<bits_per_pixel>(\"soda_" << prg.name << "_regression_result.csv\", y_res, nrows, ncols, transfer_cols);" << endl;
    of << tab(1) << "free(y_res);" << endl;
    of << "}" << endl;

    of.close();
  }

  {
    ofstream of("run_tb.sh");
    of << "../../common/gen_app.sh" << endl;
    of << "g++ -std=c++0x tb_soda_${app}.cpp ${app}_kernel.cpp -I ../../../ -I /cad/xilinx/vivado/2017.2/Vivado_HLS/2017.2/include/ || { echo 'compilation failed'; exit 1; }" << endl;
    of << "./a.out" << endl;
    of.close();
  }
  
  ofstream of("compare_regressions.sh");
  of << "app_name=" << prg.name << endl;

  of << "cd soda_code" << endl;
  of << "./run_tb.sh || { echo 'soda compilation failed'; exit 1; }" << endl;
  of << "cd .." << endl;

  of << "cd our_code" << endl;
  of << "./run_tb_${app_name}.sh || { echo 'our compilation failed'; exit 1; }" << endl;
  of << "cd .." << endl;

  of << "cd ../../" << endl;
  of << "./run_aligner.sh ./soda_codes/${app_name}/our_code/regression_result_${app_name}.txt ./soda_codes/${app_name}/soda_code/soda_${app_name}_regression_result.csv" << endl;

  of.close();
}

void generate_tb_run_scripts(prog& prg) {
  ofstream of("run_tb_" + prg.name + ".sh");
  of << "g++ -std=c++0x regression_tb_" << prg.name << ".cpp " << prg.name << ".cpp -I ../../.. -I /cad/xilinx/vivado/2017.2/Vivado_HLS/2017.2/include/ || { echo 'testbench compilation failed'; exit 1; }" << endl;
  of << "./a.out" << endl;

  of.close();
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

  auto& buf = buffers.at(out_buffer);
  int bundle_width = buf.port_bundle_width(bundle_name);
  int nlanes = buf.port_bundles.at(bundle_name).size();

  assert(nlanes == op->unroll_factor);
  assert(bundle_width % nlanes == 0);

  int element_width = bundle_width / nlanes;


  string dbg_res_name = "debug_" + res;
  conv_out << tab(1) << "hw_uint<" << bundle_width << "> " << dbg_res_name << "(" << res << ");" << endl;
  vector<string> lane_values =
    split_bv(1, conv_out, dbg_res_name, element_width, nlanes);
  for (int lane = 0; lane < nlanes; lane++) {
    conv_out << tab(1) << "*global_debug_handle << \"" << op->name << ",\" << ";
    int i = 0;
    for (auto v : kernel.iteration_variables) {
      if (i == 0) {
        conv_out << "(" << nlanes << "*" << v << " + " << lane << ") << \", \" << ";
      } else {
        conv_out << v << "<< \",\" << ";
      }
      i++;
    }
    conv_out << " " << lane_values.at(lane) << " << endl;" << endl;
    //conv_out << " " << res << " << endl;" << endl;
  }

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
  generate_xilinx_accel_wrapper(buffers, prg);
  generate_verilog_code(options, buffers, prg, schedmap, domain_map, kernels);
  generate_tb_run_scripts(prg);
  generate_tb_compare_scripts(prg);
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


