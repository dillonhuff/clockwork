#include "codegen.h"
#include "rdai_collateral.h"

void generate_vivado_tcl(std::string& name) {
  ofstream of(name + "_hls.tcl");

  of << "open_project -reset " << name << "_proj" << endl;

  of << "set_top " << name << endl;
  of << "add_files -cflags \"-I ../../ -std=c++11 -D__VIVADO_SYNTH__\" " + name + ".cpp" << endl;
  //of << "add_files -cflags \"-I ../../ -std=c++11 -D__VIVADO_SYNTH__\" " + name + ".cpp" << endl;
  //of << "add_files -cflags \"-I ../.. -std=c++11 -D__VIVADO_SYNTH__\" -tb tb_soda_" + name + ".cpp" << endl;
  of << "open_solution -reset \"solution1\"" << endl;
  of << "set_part {xcvu9p-flgb2104-2-i}" << endl;
  //of << "set_part {xc7k160tfbg484-2}" << endl;
  of << "list_core" << endl;
  of << "create_clock -period 5" << endl;
  of << "csynth_design" << endl;
  //of << "export_design -rtl verilog" << endl;
  //of << "cosim_design -rtl verilog" << endl;
  of << "exit" << endl;
  of.close();
}

//TODO: helper function should be moved into utils.h
std::string us(const std::string& a, const std::string& b) {
  return a + "_" + b;
}

std::string us(const pair<std::string, std::string>& a) {
  return us(a.first, a.second);
}

std::string dot(const pair<std::string, std::string>& a) {
  return a.first + "." + a.second;
}

isl_set* mk_set(isl_ctx* c, const vector<string>& vars, const vector<string>& constraints) {
  string s = curlies(bracket_list(vars) + " : " + sep_list(constraints, "", "", " and "));
  return isl_set_read_from_str(c, s.c_str());
}


std::string vanilla_c_pixel_type_string(const int w) {
  if (w == 1) {
    return "bool";
  }

  if (w == 8) {
    return "uint8_t";
  }

  if (w == 16) {
    return "uint16_t";
  }

  if (w == 32) {
    return "uint32_t";
  }

  cout << "Error: No primitive C type for width: " << w << endl;
  assert(false);
}

std::string vanilla_c_pixel_type_string(const std::string& buf, map<string, UBuffer>& buffers) {
  return vanilla_c_pixel_type_string(map_find(buf, buffers).port_widths);
}


std::set<pair<string, string> > inputs(map<string, UBuffer>& buffers, prog& prg) {
  std::set<pair<string, string> > edges;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);

    //assert(buf.get_out_bundles().size() == 1);
    //auto bundle = pick(buf.get_out_bundles());
    //edges.insert({buf.name, bundle});

    for (auto bundle : buf.get_out_bundles()) {
      edges.insert({buf.name, bundle});
    }
  }
  return edges;
}

std::vector<pair<string, string> > outgoing_bundles(map<string, UBuffer>& buffers, prog& prg) {
  std::vector<pair<string, string> > edges;
  for (auto in : prg.outs) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_in_bundles().size() == 1);

    auto bundle = pick(buf.get_in_bundles());
    edges.push_back({in, bundle});
  }
  return edges;
}

std::vector<pair<string, string> > incoming_bundles(map<string, UBuffer>& buffers, prog& prg) {
  std::vector<pair<string, string> > edges;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);

    auto bundle = pick(buf.get_out_bundles());
    edges.push_back({in, bundle});
  }
  return edges;
}

std::set<string> in_bundles(map<string, UBuffer>& buffers, prog& prg) {
  std::set<string> edges;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    for (auto bundle : buf.get_out_bundles()) {
      edges.insert(bundle);
    }
    //assert(buf.get_out_bundles().size() == 1);

    //auto bundle = pick(buf.get_out_bundles());
    //edges.insert(bundle);
  }
  return edges;
}


std::set<pair<string, string> > outputs(map<string, UBuffer>& buffers, prog& prg) {
  std::set<pair<string, string> > edges;
  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    cout << "# in bundles: " << buf.get_in_bundles().size() << endl;
    for (auto bundle : buf.get_in_bundles()) {
      //assert(buf.get_in_bundles().size() == 1);
      //auto bundle = pick(buf.get_in_bundles());
      edges.insert({buf.name, bundle});
    }

    //edges.insert({buf.name, bundle});
  }

  return edges;
}

std::set<string> out_bundles(map<string, UBuffer>& buffers, prog& prg) {
  std::set<string> edges;
  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    for (auto bundle : buf.get_in_bundles()) {
      edges.insert(bundle);
    }
/*    assert(buf.get_in_bundles().size() == 1);*/
    //auto bundle = pick(buf.get_in_bundles());

    //edges.insert(bundle);
  }

  return edges;
}

std::set<pair<string, string> > edge_buffers(map<string, UBuffer>& buffers, prog& prg) {
  std::set<pair<string, string> > edges;
  for (auto b : inputs(buffers, prg)) {
    edges.insert(b);
  }

  for (auto b : outputs(buffers, prg)) {
    edges.insert(b);
  }
  return edges;
}

std::set<string> edge_bundles(map<string, UBuffer>& buffers, prog& prg) {
  std::set<string> edges;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    for (auto bundle : buf.get_out_bundles()) {
      edges.insert(bundle);
    }
    //assert(buf.get_out_bundles().size() == 1);

    //auto bundle = pick(buf.get_out_bundles());
    //edges.insert(bundle);
  }

  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    for (auto bundle : buf.get_in_bundles()) {
      edges.insert(bundle);
    }
    //assert(buf.get_in_bundles().size() == 1);
    //auto bundle = pick(buf.get_in_bundles());

    //edges.insert(bundle);
  }

  return edges;
}

void ocl_program_device(ostream& out, prog& prg, const std::string& suffix) {
  out << tab(1) << "auto devices = xcl::get_xil_devices();" << endl;
  out << tab(1) << "auto fileBuf = xcl::read_binary_file(binaryFile);" << endl;
  out << tab(1) << "cl::Program::Binaries bins{{fileBuf.data(), fileBuf.size()}};" << endl;
  out << tab(1) << "int valid_device = 0;" << endl;
  out << tab(1) << "for (unsigned int i = 0; i < devices.size(); i++) {" << endl;
  out << tab(2) << "auto device = devices[i];" << endl;
  out << tab(2) << "OCL_CHECK(err, context = cl::Context({device}, NULL, NULL, NULL, &err));" << endl;
  out << tab(2) << "OCL_CHECK(err," << endl;
  out << tab(3) << "q = cl::CommandQueue(" << endl;
  out << tab(3) << "context, {device}, CL_QUEUE_PROFILING_ENABLE, &err));" << endl << endl;

  out << tab(2) << "std::cout << \"Trying to program device[\" << i" << endl;
  out << tab(3) << "<< \"]: \" << device.getInfo<CL_DEVICE_NAME>() << std::endl;" << endl;
  out << tab(2) << "OCL_CHECK(err, cl::Program program(context, {device}, bins, NULL, &err));" << endl;
  out << tab(2) << "if (err != CL_SUCCESS) {" << endl;
  out << tab(3) << "std::cout << \"Failed to program device[\" << i" << endl;
  out << tab(3) << "<< \"] with xclbin file!\\n\";" << endl;
  out << tab(2) << "} else {" << endl;
  out << tab(3) << "std::cout << \"Device[\" << i << \"]: program successful!\\n\";" << endl;
  out << tab(3) << "OCL_CHECK(err, krnl_vector_add = cl::Kernel(program, \"" << prg.name << suffix << "\", &err));" << endl;
  out << tab(3) << "valid_device++;" << endl;
  out << tab(3) << "break;" << endl;
  out << tab(2) << "}" << endl;
  out << tab(1) << "}" << endl;
  out << tab(1) << "if (valid_device == 0) {" << endl;
  out << tab(2) << "std::cout << \"Failed to program any device found, exit!\\n\";" << endl;
  out << tab(2) << "exit(EXIT_FAILURE);" << endl;
  out << tab(1) << "}" << endl << endl;
}

void ocl_timing_suffix(std::ostream& out) {
  out << tab(1) << "double dnsduration = ((double)nsduration);" << endl;
  out << tab(1) << "double dsduration = dnsduration / ((double)1000000000);" << endl;

  out << tab(1) << "double dbytes = total_size_bytes;" << endl;
  out << tab(1) << "double bpersec = (dbytes / dsduration);" << endl;
  out << tab(1) << "double gbpersec = bpersec / ((double)1024 * 1024 * 1024);" << endl;

  out << tab(1) << "std::cout << \"bytes       = \" << dbytes << std::endl;" << endl;
  out << tab(1) << "std::cout << \"bytes / sec = \" << bpersec << std::endl;" << endl;
  out << tab(1) << "std::cout << \"GB / sec    = \" << gbpersec << std::endl;" << endl;
  out << tab(1) << "printf(\"Execution time = %f (sec) \\n\", dsduration);" << endl;
}

void run_kernel(CodegenOptions& options, std::ostream& out, map<string, UBuffer>& buffers, prog& prg) {
  assert(options.num_pipelines > 0);

  out << tab(1) << "std::cout << \"Migrating memory\" << std::endl;" << endl;
  vector<string> in_bufs;
  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    for (auto b : in_bundles(buffers, prg)) {
      in_bufs.push_back(pipe_cpy(b, pipe) + "_ocl_buf");
    }
  }

  out << tab(1) << "OCL_CHECK(err, err = q.enqueueMigrateMemObjects({" << comma_list(in_bufs) << "}, 0));" << endl << endl;

  out << tab(1) << "unsigned long start, end, nsduration;" << endl;
  out << tab(1) << "cl::Event event;" << endl << endl;

  out << tab(1) << "std::cout << \"Starting kernel\" << std::endl;" << endl;
  out << tab(1) << "OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add, NULL, &event));" << endl;
  out << tab(1) << "OCL_CHECK(err, err = event.wait());" << endl;
  out << tab(1) << "end =" << endl;
  out << tab(1) << "OCL_CHECK(err, event.getProfilingInfo<CL_PROFILING_COMMAND_END>(&err));" << endl;
  out << tab(1) << "start = OCL_CHECK(err," << endl;
  out << tab(1) << "event.getProfilingInfo<CL_PROFILING_COMMAND_START>(&err));" << endl;
  out << tab(1) << "nsduration = end - start;" << endl;

  //out << tab(1) << "OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add));" << endl << endl;

  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    for (auto out_bundle: out_bundles(buffers, prg)) {
      out << tab(1) << "OCL_CHECK(err, err = q.enqueueMigrateMemObjects({" << pipe_cpy(out_bundle, pipe) << "_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));" << endl;
    }
  }

  out << endl;
  out << tab(1) << "q.finish();" << endl << endl;

  ocl_timing_suffix(out);
}

void ocl_check_args(CodegenOptions& options, std::ostream& out) {
  out << tab(1) << "srand(234);" << endl;
  out << tab(1) << "if (argc != 2) {" << endl;
  out << tab(2) << "std::cout << \"Usage: \" << argv[0] << \" <XCLBIN File>\" << std::endl;" << endl;
  out << tab(2) << "return EXIT_FAILURE;" << endl;
  out << tab(1) << "}" << endl << endl;

  out << tab(1) << "std::string binaryFile = argv[1];" << endl << endl;
  if (options.num_input_epochs < 0) {
    out << tab(1) << "int num_epochs = 1;" << endl << endl;
  } else {
    out << tab(1) << "int num_epochs = " << options.num_input_epochs << ";" << endl << endl;
  }
  out << tab(1) << "std::cout << \"num_epochs = \" << num_epochs << std::endl;" << endl << endl;
}

void ocl_command_queue(std::ostream& out) {
  out << tab(1) << "cl_int err;" << endl;
  out << tab(1) << "cl::Context context;" << endl;
  out << tab(1) << "cl::Kernel krnl_vector_add;" << endl;
  out << tab(1) << "cl::CommandQueue q;" << endl << endl;
}

void populate_input(std::ostream& out, const std::string& edge_bundle, const string& tp) {
  string instream =
    "input_" + edge_bundle;

  out << tab(1) << "std::ofstream input_" << edge_bundle << "(\"" << edge_bundle << ".csv\");" << endl;
  out << tab(1) << "for (int i = 0; i < " << edge_bundle << "_pipe0_DATA_SIZE; i++) {" << endl;
  out << "#ifdef __FLOAT_OUTPUT__" << endl;
  string fval = "static_cast <float> (rand()) / static_cast <float> (RAND_MAX)";
  out << tab(2) << "float " << " val = " << fval << ";" << endl;
  //out << tab(2) << "float " << " val = (rand() % 256);" << endl;
  out << "#else // __FLOAT_OUTPUT__" << endl;
  out << tab(2) << tp << " val = (rand() % 256);" << endl;
  out << "#endif // __FLOAT_OUTPUT__" << endl << endl;

  out << "#ifdef __FLOAT_OUTPUT__" << endl;
  out << tab(2) << "input_" << edge_bundle << " << val << std::endl;" << endl;
  out << "#else // __FLOAT_OUTPUT__" << endl;
  out << tab(2) << "input_" << edge_bundle << " << val << std::endl;" << endl;
  out << "#endif // __FLOAT_OUTPUT__" << endl << endl;


  out << "#ifdef __FLOAT_OUTPUT__" << endl;
  out << tab(2) << "((" << tp << "*) (" << edge_bundle << "_pipe0.data()))[i] = bitcast<" << tp << ", " << "float" << ">(val);" << endl;
  out << "#else // __FLOAT_OUTPUT__" << endl;
  out << tab(2) << "((" << tp << "*) (" << edge_bundle << "_pipe0.data()))[i] = val;" << endl;
  out << "#endif // __FLOAT_OUTPUT__" << endl;
  out << tab(1) << "}" << endl << endl;
  out << tab(1) << "input_" << edge_bundle << ".close();" << endl;
}

void generate_sw_bmp_test_harness(map<string, UBuffer>& buffers, prog& prg) {
  cout << "Generating bmp harness" << endl;

  ofstream out(prg.name + "_sw_bmp_test_harness.cpp");
  sw_test_headers(out, prg);

  out << "int main(int argc, char **argv) {" << endl;
  out << tab(1) << "bitmap_image input(\"./images/taxi_slice_256.bmp\");" << endl;
  vector<string> args;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    auto bundle = pick(buf.get_out_bundles());
    string in_bundle_tp = buf.bundle_type_string(bundle);

    out << tab(1) << "HWStream<" << in_bundle_tp << " > " << bundle << "_channel;" << endl;
    args.push_back(bundle + "_channel");
  }

  for (auto in : prg.outs) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    auto bundle = pick(buf.get_in_bundles());
    string in_bundle_tp = buf.bundle_type_string(bundle);

    out << tab(1) << "HWStream<" << in_bundle_tp << " > " << bundle << "_channel;" << endl;
    args.push_back(bundle + "_channel");
  }

  cout << "Generated channels" << endl;

  for (auto in_rep : inputs(buffers, prg)) {
    //auto in_rep = pick(inputs(buffers, prg));
    auto& in_buf = buffers.at(in_rep.first);
    string in_bundle_tp = in_buf.bundle_type_string(in_rep.second);
    int pixel_width = in_buf.port_widths;
    int lanes = in_buf.port_bundles.at(in_rep.second).size();
    out << tab(1) << "// In lanes = " << lanes << endl;

    cout << "Generating inputs" << endl;

    int in_dim = prg.buffer_bounds[in_rep.first].size();
    cout << "in dim = " << in_dim << endl;
    bool in_rgb = in_dim == 3;
    if (!(in_dim > 1 && in_dim <= 3)) {
      out << tab(1) << "Unsupported input dimension: " << in_dim << endl;
      return;
    }

    int in_rows;
    int in_cols;
    if (!in_rgb) {
      in_cols = prg.buffer_bounds[in_rep.first].at(0);
      in_rows = prg.buffer_bounds[in_rep.first].at(1);
    } else {
      in_cols = prg.buffer_bounds[in_rep.first].at(1);
      in_rows = prg.buffer_bounds[in_rep.first].at(2);
    }
    cout << "in_cols = " << in_cols << endl;
    cout << "lanes   = " << lanes << endl;
    if (!(in_cols % lanes == 0)) {
      out << tab(1) << "// Error: no support for uneven lanes in sw bmp test harness generation" << endl;
      return;
    }
    //assert(in_cols % lanes == 0);

    out << tab(1) << "for (int r = 0; r < " << in_rows << "; r++) {" << endl;
    out << tab(2) << "for (int cl = 0; cl < " << in_cols << " / " << lanes << "; cl++) {" << endl;

    out << tab(3) << in_bundle_tp << " packed;" << endl;
    for (int l = 0; l < lanes; l++) {
      out << tab(3) << "{" << endl;

      if (!in_rgb) {
        out << tab(3) << "int c = " << lanes << "*cl + " << l << ";" << endl;
        out << tab(3) << "if (r < input.height() && c < input.width()) {" << endl;
        out << tab(4) << "rgb_t pix;" << endl;
        out << tab(4) << "input.get_pixel(c, r, pix);" << endl;
        out << tab(4) << "auto val = (pix.red + pix.green + pix.blue) / 3;" << endl;
        out << tab(4) << "set_at<" << l*pixel_width << ", " << lanes*pixel_width << ", " << pixel_width << ">(" <<
          "packed, val);" << endl;
        out << tab(3) << "} else {" << endl;
        out << tab(4) << "set_at<" << l*pixel_width << ", " << lanes*pixel_width << ", " << pixel_width << ">(" <<
          "packed, 0);" << endl;
        out << tab(3) << "}" << endl;
      } else {
        out << tab(3) << "int c = " << lanes << "*cl + " << l << ";" << endl;
        out << tab(3) << "if (r < input.height() && c < input.width()) {" << endl;
        out << tab(4) << "rgb_t pix;" << endl;
        out << tab(4) << "input.get_pixel(c, r, pix);" << endl;
        out << tab(4) << in_rep.second << "_channel.write(pix.red);" << endl;
        out << tab(4) << in_rep.second << "_channel.write(pix.green);" << endl;
        out << tab(4) << in_rep.second << "_channel.write(pix.blue);" << endl;

        out << tab(3) << "} else {" << endl;
        out << tab(4) << in_rep.second << "_channel.write(0);" << endl;
        out << tab(4) << in_rep.second << "_channel.write(0);" << endl;
        out << tab(4) << in_rep.second << "_channel.write(0);" << endl;
        out << tab(3) << "}" << endl;
      }

      out << tab(3) << "}" << endl;
    }
    if (!in_rgb) {
      out << tab(4) << in_rep.second << "_channel.write(packed);" << endl;
    }
    out << tab(2) << "}" << endl;
    out << tab(1) << "}" << endl;

  }

  out << tab(1) << prg.name << sep_list(args, "(", ")", ", ") << ";" << endl;

  cout << "Generating outputs" << endl;

  {
    auto out_rep = pick(outputs(buffers, prg));
    auto& out_buf = buffers.at(out_rep.first);
    string out_bundle_tp = out_buf.bundle_type_string(out_rep.second);
    int pixel_width = out_buf.port_widths;
    int lanes = out_buf.port_bundles.at(out_rep.second).size();
    int out_dims = prg.buffer_bounds[out_rep.first].size();
    bool out_rgb = prg.buffer_bounds[out_rep.first].size() == 3;
    vector<string> sizes;
    if (!(out_dims > 0 && out_dims <= 3)) {
      out << tab(1) << "Unsupported output dimension: " << out_dims << endl;
      return;
    }
    int out_cols;
    int out_rows;
    if (!out_rgb) {
      out_cols = prg.buffer_bounds[out_rep.first].at(0);
      out_rows = prg.buffer_bounds[out_rep.first].at(1);
      for (auto sz : prg.buffer_bounds[out_rep.first]) {
        sizes.push_back(str(sz));
      }
    } else {
      out_cols = prg.buffer_bounds[out_rep.first].at(1);
      out_rows = prg.buffer_bounds[out_rep.first].at(2);
      int d = 0;
      for (auto sz : prg.buffer_bounds[out_rep.first]) {
        if (d > 0) {
          sizes.push_back(str(sz));
        }
        d++;
      }
    }

    out << tab(1) << "bitmap_image output(" << sep_list(sizes, "", "", ", ") << ");" << endl;

    out << tab(1) << "for (int r = 0; r < " << out_rows << "; r++) {" << endl;
    out << tab(2) << "for (int cl = 0; cl < " << out_cols << " / " << lanes << "; cl++) {" << endl;
    if (out_rgb) {
      out << tab(3) << "int c = " << lanes << "*cl + " << "0" << ";" << endl;
      out << tab(3) << "rgb_t pix;" << endl;

      out << tab(3) << "auto red = " << out_rep.second << "_channel.read();" << endl;
      out << tab(3) << "auto g = " << out_rep.second << "_channel.read();" << endl;
      out << tab(3) << "auto b = " << out_rep.second << "_channel.read();" << endl;


      out << tab(3) << "pix.red = " << "red" << ";" << endl;
      out << tab(3) << "pix.green = " << "g" << ";" << endl;
      out << tab(3) << "pix.blue = " << "b" << ";" << endl;
      out << tab(3) << "output.set_pixel(c, r, pix);" << endl;

    } else {
      out << tab(3) << "auto packed_val = " << out_rep.second << "_channel.read();" << endl;
      vector<string> unpacked_values =
        split_bv(3, out, "packed_val", pixel_width, lanes);
      for (int l = 0; l < lanes; l++) {
        //out << tab(3) << "int c = " << lanes << "*cl + " << l << ";" << endl;
        out << tab(3) << "{" << endl;
        out << tab(3) << out_bundle_tp << " packed;" << endl;

        out << tab(3) << "int c = " << lanes << "*cl + " << l << ";" << endl;

        string val = unpacked_values.at(l);
        out << tab(3) << "rgb_t pix;" << endl;
        out << tab(3) << "pix.red = " << val << ";" << endl;
        out << tab(3) << "pix.green = " << val << ";" << endl;
        out << tab(3) << "pix.blue = " << val << ";" << endl;
        out << tab(3) << "output.set_pixel(c, r, pix);" << endl;
        out << tab(3) << "}" << endl;
      }

    }

    out << tab(2) << "}" << endl;
    out << tab(1) << "}" << endl;
    out << tab(1) << "output.save_image(\"./images/" << prg.name << "_bmp_out.bmp\");" << endl;
    out << "}" << endl;
  }

}

void generate_xilinx_accel_soda_host(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg) {
  ofstream out("soda_" + prg.name + "_host.cpp");
  ocl_headers(out);

  out << "int main(int argc, char **argv) {" << endl;

  ocl_check_args(options, out);

  int unroll_factor =
    pick(map_find(pick(prg.ins), buffers).port_bundles).second.size();

  int max_buf_size = -1;
  for (auto eb : edge_buffers(buffers, prg)) {
    string buf = eb.first;
    if (prg.buffer_size(buf) > max_buf_size) {
      max_buf_size = prg.buffer_size(buf);
    }
  }

  out << tab(1) << "size_t total_size_bytes = 0;" << endl;
  out << tab(1) << "size_t total_size_bytes_read = 0;" << endl;
  out << tab(1) << "size_t total_size_bytes_written = 0;" << endl;
  for (auto eb : edge_buffers(buffers, prg)) {
    string edge_bundle = eb.second;
    string buf = eb.first;

    out << tab(1) << "const int " << edge_bundle << "_pipe0_DATA_SIZE = num_epochs*" << max_buf_size << ";" << endl;
    out << tab(1) << "const int " << edge_bundle << "_BYTES_PER_PIXEL = " << map_find(buf, buffers).bundle_lane_width(edge_bundle) << " / 8;" << endl;
    out << tab(1) << "size_t " << edge_bundle << "_size_bytes = " << edge_bundle << "_BYTES_PER_PIXEL * " << edge_bundle << "_pipe0_DATA_SIZE;" << endl << endl;
    out << tab(1) << "total_size_bytes += " << edge_bundle << "_size_bytes;" << endl;
    if (prg.is_output(buf)) {
      out << tab(1) << "total_size_bytes_written += " << edge_bundle << "_size_bytes;" << endl;
    }

    if (prg.is_input(buf)) {
      out << tab(1) << "total_size_bytes_read += " << edge_bundle << "_size_bytes;" << endl;
    }
  }
  out << endl;

  ocl_command_queue(out);

  for (auto edge_bundle : edge_bundles(buffers, prg)) {
    out << tab(1) << "std::vector<uint8_t, aligned_allocator<uint8_t> > " << edge_bundle << "_pipe0" << "(" << edge_bundle << "_size_bytes);" << endl;
  }
  out << endl;

  for (auto edge_in : inputs(buffers, prg)) {
    populate_input(out, edge_in.second, vanilla_c_pixel_type_string(edge_in.first, buffers));
  }

  for (auto edge_out : outputs(buffers, prg)) {
    auto edge_bundle = edge_out.second;
    auto buf = edge_out.first;
    out << tab(1) << "for (int i = 0; i < " << edge_bundle << "_pipe0_DATA_SIZE; i++) {" << endl;
    out << "#ifdef __FLOAT_OUTPUT__" << endl;
    out << tab(2) << "((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << edge_bundle << "_pipe0.data()))[i] = 0;" << endl;
    out << "#else // __FLOAT_OUTPUT__" << endl;
    out << tab(2) << "((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << edge_bundle << "_pipe0.data()))[i] = 0;" << endl;
    out << "#endif // __FLOAT_OUTPUT__" << endl;
    out << tab(1) << "}" << endl << endl;
  }

  ocl_program_device(out, prg, "_kernel");

  int arg_pos = 0;
  for (auto in_bundle : out_bundles(buffers, prg)) {
    out << tab(1) << "OCL_CHECK(err, cl::Buffer " << in_bundle << "_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, " << in_bundle << "_size_bytes, " << in_bundle << "_pipe0.data(), &err));" << endl;
    out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << in_bundle << "_pipe0_ocl_buf));" << endl << endl;
    arg_pos++;
  }

  for (auto in_bundle : in_bundles(buffers, prg)) {
    out << tab(1) << "OCL_CHECK(err, cl::Buffer " << in_bundle << "_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, " << in_bundle << "_size_bytes, " << in_bundle << "_pipe0.data(), &err));" << endl;

    out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << in_bundle << "_pipe0_ocl_buf));" << endl << endl;
    arg_pos++;
  }

  out << tab(1) << "uint64_t transfer_size = num_epochs*(" << max_buf_size << " / " << unroll_factor << ");" << endl;
  out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << "transfer_size));" << endl << endl;

  run_kernel(options, out, buffers, prg);

  for (auto output : outputs(buffers, prg)) {
    auto buf = output.first;
    auto out_bundle = output.second;
    out << tab(1) << "std::ofstream regression_result(\"" << out_bundle << "_accel_result.csv\");" << endl;
    out << tab(1) << "for (int i = 0; i < " << out_bundle << "_pipe0_DATA_SIZE; i++) {" << endl;
    out << "#ifdef __FLOAT_OUTPUT__" << endl;
    out << tab(2) << "regression_result << bitcast<float, " << vanilla_c_pixel_type_string(buf, buffers) << ">(((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << out_bundle << "_pipe0.data()))[i]) << std::endl;" << endl;
    out << "#else // __FLOAT_OUTPUT__" << endl;
    out << tab(2) << "regression_result << ((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << out_bundle << "_pipe0.data()))[i] << std::endl;" << endl;
    out << "#endif // __FLOAT_OUTPUT__" << endl;
    out << tab(1) << "}" << endl;
  }
  out << endl;


  out << tab(1) << "return 0;" << endl;
  out << "}" << endl;

  out.close();
}

void generate_xilinx_accel_host(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg) {

  ofstream out(prg.name + "_host.cpp");

  ocl_headers(out);

  out << "#define __POPULATE_HOST_INPUTS__" << endl << endl;

  out << "int main(int argc, char **argv) {" << endl;

  ocl_check_args(options, out);

  out << tab(1) << "size_t total_size_bytes = 0;" << endl;
  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    for (auto eb : edge_buffers(buffers, prg)) {
      string edge_bundle = eb.second;
      string buf = eb.first;

      int num_pixels = -1;
      if (prg.is_input(buf)) {
        auto cmap = prg.consumer_map(buf);
        auto range_card = card(range(cmap));
        num_pixels = int_upper_bound(range_card);
      } else {
        auto cmap = prg.producer_map(buf);
        auto range_card = card(range(cmap));
        num_pixels = int_upper_bound(range_card);
      }

      // TODO: Unify prg and app size computation syntax
      if (num_pixels < prg.buffer_size(buf)) {
        num_pixels = prg.buffer_size(buf);
      }

      string ebd = pipe_cpy(edge_bundle, pipe);
      out << tab(1) << "const int " << ebd << "_DATA_SIZE = num_epochs*" << num_pixels << ";" << endl;
      out << tab(1) << "const int " << ebd << "_BYTES_PER_PIXEL = " << map_find(buf, buffers).bundle_lane_width(edge_bundle) << " / 8;" << endl;
      out << tab(1) << "size_t " << ebd << "_size_bytes = " << ebd << "_BYTES_PER_PIXEL * " << ebd << "_DATA_SIZE;" << endl << endl;
      out << tab(1) << "total_size_bytes += " << ebd << "_size_bytes;" << endl;
    }
    out << endl;
  }

  ocl_command_queue(out);

  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    for (auto edge_bundle : edge_bundles(buffers, prg)) {
      out << tab(1) << "std::vector<uint8_t, aligned_allocator<uint8_t> > " << pipe_cpy(edge_bundle, pipe) << "(" << pipe_cpy(edge_bundle, pipe) << "_size_bytes);" << endl;
    }

    out << endl;
  }

  out << tab(1) << "// TODO: POPULATE BUFFERS FOR EACH PIPELINE" << endl;
  out << "#ifdef __POPULATE_HOST_INPUTS__" << endl;
  for (auto edge_in : inputs(buffers, prg)) {
    populate_input(out, edge_in.second, vanilla_c_pixel_type_string(edge_in.first, buffers));
  }

  for (auto edge_out : outputs(buffers, prg)) {
    auto edge_bundle = edge_out.second;
    auto buf = edge_out.first;
    out << tab(1) << "for (int i = 0; i < " << edge_bundle << "_pipe0_DATA_SIZE; i++) {" << endl;
    out << tab(2) << "((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << edge_bundle << "_pipe0.data()))[i] = 0;" << endl;
    out << tab(1) << "}" << endl << endl;
  }
  out << "#endif // __POPULATE_HOST_INPUTS__" << endl;

  ocl_program_device(out, prg, "_accel");

  int arg_pos = 0;

  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    for (auto in_bundle : in_bundles(buffers, prg)) {
      string ibd = pipe_cpy(in_bundle, pipe);
      out << tab(1) << "OCL_CHECK(err, cl::Buffer " << ibd << "_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, " << ibd << "_size_bytes, " << ibd << ".data(), &err));" << endl;

      out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << ibd << "_ocl_buf));" << endl << endl;
      arg_pos++;
    }

    for (auto in_bundle : out_bundles(buffers, prg)) {
      string ibd = pipe_cpy(in_bundle, pipe);
      out << tab(1) << "OCL_CHECK(err, cl::Buffer " << ibd << "_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, " << ibd << "_size_bytes, " << ibd << ".data(), &err));" << endl;
      out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << ibd << "_ocl_buf));" << endl << endl;
      arg_pos++;
    }

  }
  out << endl;
  out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", num_epochs));" << endl << endl;

  run_kernel(options, out, buffers, prg);

  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    for (auto output : outputs(buffers, prg)) {
      auto buf = output.first;
      auto out_bundle = output.second;
      string obd = pipe_cpy(out_bundle, pipe);
      out << "{" << endl;
      out << tab(2) << "std::ofstream regression_result(\"" << obd << "_accel_result.csv\");" << endl;
      out << tab(2) << "for (int i = 0; i < " << obd << "_DATA_SIZE; i++) {" << endl;
      out << tab(3) << "regression_result << ((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << obd << ".data()))[i] << std::endl;" << endl;
      out << tab(2) << "}" << endl;
      out << "}" << endl;
    }
  }
  out << endl;

  out << tab(1) << "return 0;" << endl;
  out << "}" << endl;

  out.close();
}

std::string hwstream(const std::string& tp) {
  return "HWStream<" + tp + " >";
}

void generate_distributor(
    CodegenOptions& options,
    std::ostream& out,
    UBuffer& buf,
    const std::string& bundle_name,
    prog& prg) {

  string in_bundle_tp = buf.bundle_type_string(bundle_name);

  vector<string> args;
  args.push_back(hwstream(in_bundle_tp) + "& in");
  args.push_back(hwstream(in_bundle_tp) + "& out0");
  args.push_back(hwstream(in_bundle_tp) + "& out1");

  out << "static void distributor_" << bundle_name << "(" << comma_list(args) << ") {" << endl;
  out << tab(1) << "for (int i = 0; i < num_transfers; i++) {" << endl;
  out << tab(2) << "#pragma HLS pipeline II=1" << endl;
  out << tab(2) << "auto v = in.read();" << endl;
  out << tab(2) << "out0.write(v0);" << endl;
  out << tab(2) << "out1.write(v1);" << endl;
  out << tab(1) << "}" << endl;
  out << "}" << endl << endl;
}

void generate_collector(
    CodegenOptions& options,
    std::ostream& out,
    UBuffer& buf,
    const std::string& bundle_name,
    prog& prg) {

  string in_bundle_tp = buf.bundle_type_string(bundle_name);

  vector<string> args;
  args.push_back(hwstream(in_bundle_tp) + "& in0");
  args.push_back(hwstream(in_bundle_tp) + "& in1");
  args.push_back(hwstream(in_bundle_tp) + "& out");

  out << "static void collector_" << bundle_name << "(" << comma_list(args) << ") {" << endl;
  out << tab(1) << "for (int i = 0; i < num_transfers; i++) {" << endl;
  out << tab(2) << "#pragma HLS pipeline II=1" << endl;
  out << tab(2) << "auto v0 = in0.read();" << endl;
  out << tab(2) << "auto v1 = in1.read();" << endl;
  out << tab(2) << "out.write({v0, v1});" << endl;
  out << tab(1) << "}" << endl;
  out << "}" << endl << endl;
}

void generate_xilinx_accel_wrapper(CodegenOptions& options, std::ostream& out, map<string, UBuffer>& buffers, prog& prg) {

  cout << "Generating accel wrapper" << endl;
  string driver_func = prg.name + "_accel";


  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    for (auto eb : edge_buffers(buffers, prg)) {
      string out_rep = eb.first;
      string out_bundle = eb.second;

      UBuffer out_buf = map_find(out_rep, buffers);
      string out_bundle_tp = out_buf.bundle_type_string(out_bundle);

      int num_pixels = -1;
      if (prg.is_input(out_rep)) {

        auto cmap = prg.consumer_map(out_rep);
        out << tab(1) << "// " << str(cmap) << endl;
        auto range_card = card(range(cmap));
        num_pixels = int_upper_bound(range_card);
      } else {
        auto cmap = prg.producer_map(out_rep);
        out << tab(1) << "// " << str(cmap) << endl;
        auto range_card = card(range(cmap));
        num_pixels = int_upper_bound(range_card);
      }

      assert(num_pixels >= 0);
      // TODO: Unify prg and app size computation syntax
      if (num_pixels < prg.buffer_size(out_rep)) {
        num_pixels = prg.buffer_size(out_rep);
      }

      int pix_per_burst =
        out_buf.lanes_in_bundle(out_bundle);
      int num_in_bursts = num_pixels / pix_per_burst;

      out << "const int " << pipe_cpy(out_bundle, pipe) << "_num_transfers = " << num_in_bursts << ";" << endl;
    }
    out << endl;
  }
  out << endl;
  out << "extern \"C\" {" << endl << endl;

  cout << "Generating arg list" << endl;
  vector<string> ptr_args;
  vector<string> ptr_arg_decls;
  vector<vector<string> > buffer_args;

  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    vector<string> bas;
    for (auto in : prg.ins) {
      assert(contains_key(in, buffers));
      auto& buf = buffers.at(in);

      for (auto bundle : buf.get_out_bundles()) {
        //cout << "picking from bundle" << endl;
        //auto bundle = pick(buf.get_out_bundles());
        //cout << "bundle: " << bundle << endl;

        string out_bundle_tp = buf.bundle_type_string(bundle);
        ptr_arg_decls.push_back(out_bundle_tp + "* " + pipe_cpy(bundle, pipe));
        ptr_args.push_back(pipe_cpy(bundle, pipe));
        bas.push_back(pipe_cpy(bundle, pipe) + "_channel");

      }

      //assert(buf.get_out_bundles().size() == 1);

      //cout << "picking from bundle" << endl;
      //auto bundle = pick(buf.get_out_bundles());
      //cout << "bundle: " << bundle << endl;

      //string out_bundle_tp = buf.bundle_type_string(bundle);
      //ptr_arg_decls.push_back(out_bundle_tp + "* " + pipe_cpy(bundle, pipe));
      //ptr_args.push_back(pipe_cpy(bundle, pipe));
      //bas.push_back(pipe_cpy(bundle, pipe) + "_channel");
    }

    for (auto out : prg.outs) {
      assert(contains_key(out, buffers));
      auto& buf = buffers.at(out);
      for (auto bundle : buf.get_in_bundles()) {
        string in_bundle_tp = buf.bundle_type_string(bundle);

        ptr_arg_decls.push_back(in_bundle_tp + "* " + pipe_cpy(bundle, pipe));
        ptr_args.push_back(pipe_cpy(bundle, pipe));
        bas.push_back(pipe_cpy(bundle, pipe) + "_channel");
      }
    }
    bas.push_back("size");
    buffer_args.push_back(bas);
  }
  vector<string> all_arg_decls = ptr_arg_decls;
  all_arg_decls.push_back("const int size");

  cout << "Generating driver function" << endl;

  out << "void " << driver_func << "(" << comma_list(all_arg_decls) << ") { " << endl;
  out << "#pragma HLS dataflow" << endl;

  int bank_no = 0;
  for (auto pt : ptr_args) {
    out << "#pragma HLS INTERFACE m_axi port = " << pt << " offset = slave depth = 65536 bundle = gmem" << bank_no << endl;
    if (bank_no < 3) {
      bank_no++;
    }
  }
  out << endl;
  for (auto pt : ptr_args) {
    out << "#pragma HLS INTERFACE s_axilite port = " << pt << " bundle = control" << endl;
  }
  out << "#pragma HLS INTERFACE s_axilite port = size bundle = control" << endl;
  out << "#pragma HLS INTERFACE s_axilite port = return bundle = control" << endl;
  out << endl;

  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    out << endl;
    out << tab(1) << "// Pipeline # " << pipe << endl;
    for (auto in : prg.ins) {
      assert(contains_key(in, buffers));
      auto& buf = buffers.at(in);
      auto bundle = pick(buf.get_out_bundles());
      string in_bundle_tp = buf.bundle_type_string(bundle);

      out << tab(1) << "static HWStream<" << in_bundle_tp << " > " << pipe_cpy(bundle, pipe) << "_channel;" << endl;
    }

    for (auto in : prg.outs) {
      assert(contains_key(in, buffers));
      auto& buf = buffers.at(in);
      auto bundle = pick(buf.get_in_bundles());
      string in_bundle_tp = buf.bundle_type_string(bundle);

      out << tab(1) << "static HWStream<" << in_bundle_tp << " > " << pipe_cpy(bundle, pipe) << "_channel;" << endl;
    }

    out << endl;

    for (auto in : prg.ins) {
      assert(contains_key(in, buffers));
      auto& buf = buffers.at(in);
      cout << "buf = " << buf.name << endl;
      //assert(buf.get_out_bundles().size() == 1);
      //auto bundle = pick(buf.get_out_bundles());

      for (auto bundle : buf.get_out_bundles()) {
        string num_transfers = pipe_cpy(bundle, pipe) + "_num_transfers*size";
        if (options.num_input_epochs < 0) {
        } else {
          num_transfers = pipe_cpy(bundle, pipe) + "_num_transfers" + "*" + str(options.num_input_epochs);
        }

        out << tab(1) << "burst_read<" << buf.port_bundle_width(bundle) << ">" << "(" << pipe_cpy(bundle, pipe) << ", " << pipe_cpy(bundle, pipe) << "_channel" << ", " << num_transfers << ");" << endl;
      }
    }

    out << endl << tab(1) << prg.name << "_wrapper" << "(" << comma_list(buffer_args.at(pipe)) << ");" << endl << endl;

    for (auto in : prg.outs) {
      assert(contains_key(in, buffers));
      auto& buf = buffers.at(in);
      for (auto bundle : buf.get_in_bundles()) {
        string num_transfers = pipe_cpy(bundle, pipe) + "_num_transfers*size";
        if (options.num_input_epochs < 0) {
        } else {
          num_transfers = pipe_cpy(bundle, pipe) + "_num_transfers" + "*" + str(options.num_input_epochs);
        }

        out << tab(1) << "burst_write<" << buf.port_bundle_width(bundle) << ">" << "(" << pipe_cpy(bundle, pipe) << ", " << pipe_cpy(bundle, pipe) << "_channel" << ", " << num_transfers << ");" << endl;
      }
    }
  }

  out << "}" << endl << endl;
  out << "}" << endl;
  cout << "Generated accel wrapper" << endl;
}

void generate_op_code(map<string, UBuffer>& buffers, op* op) {
  assert(op->func != "");
  string name = op->func;

  ofstream out(name + "_wrapper.cpp");
  vector<string> decls;

  for (auto consumed : op->consume_locs_pair) {
    decls.push_back(buffers.at(consumed.first).bundle_type_string(op->name) + "& " + consumed.first);
  }

  for (auto consumed : op->buffers_written()) {
    if (contains_key(consumed, buffers)) {
      decls.push_back(buffers.at(consumed).bundle_type_string(op->name) + "& " + consumed);
    }
  }
  out << "void " << name << sep_list(decls, "(", ")", ", ") << "{}";
  out.close();
}

isl_map* prog::read_map(op* op, const std::string& buf) {
  umap* read = isl_union_map_read_from_str(ctx, "{}");
  for (auto consumed : op->consume_locs_pair) {
    string name = consumed.first;

    if (name == buf) {
      string cond = "{ ";
      for (auto sec_pair : consumed.second) {
        if (sec_pair.first == "") {
          cond = cond + string(op_iter(op) + " -> " + consumed.first + "[" + sec_pair.second + "]; ");
        } else {
          cond = cond + string(op_iter(op) + " -> " + consumed.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
        }
      }
      cond = cond.substr(0, cond.length() - 2);
      cond = cond + string(" }");

      isl_map* consumed_here =
        isl_map_read_from_str(ctx, cond.c_str());
      read = unn(read, to_umap(consumed_here));
    }
  }
  return to_map(read);
}

umap* prog::read_map(op* op) {
  umap* read = isl_union_map_read_from_str(ctx, "{}");
  for (auto consumed : op->consume_locs_pair) {
    string name = consumed.first;

    string cond = "{ ";
    for (auto sec_pair : consumed.second) {
      if (sec_pair.first == "") {
        cond = cond + string(op_iter(op) + " -> " + consumed.first + "[" + sec_pair.second + "]; ");

      } else {
        cond = cond + string(op_iter(op) + " -> " + consumed.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
      }
    }
    cond = cond.substr(0, cond.length() - 2);
    cond = cond + string(" }");

    isl_map* consumed_here =
      isl_map_read_from_str(ctx, cond.c_str());
    read = unn(read, to_umap(consumed_here));
  }
  return read;
}

map<string, UBuffer> build_buffers(prog& prg) {
  umap* opt_sched = prg.optimized_codegen();
  return build_buffers(prg, opt_sched);
}

isl_set* prog::domain(op* op) {
  return map_find(op, domains());
}

void tag_coarse_grained_loop_to_ubuf(map<string, UBuffer> & buffers, prog& prg) {
  auto all_op = prg.all_ops();

  //sort all ops by its name instead of ptr addres
  //to avoid uncertainty in buffer name
  vector<op*> all_op_vec(all_op.begin(), all_op.end());
  std::sort(all_op_vec.begin(), all_op_vec.end(), [](op* l, op* r){return l->name > r->name;});
  //op* cgpl_lp = find_coarse_grained_pipeline_loop(prg.root, prg);
  //cout << "Coarse grained loop: " << cgpl_lp->name << endl;
  vector<op*> cgpl_lps;
  find_coarse_grained_pipeline_loops(prg.root, cgpl_lps,  prg);
  //if (cgpl_lp == nullptr || cgpl_lp->name == "root") {
  //  return;
  //}
  for (auto lp : cgpl_lps) {
    cout << "All cgpl loop: " << lp->name << endl;
    auto op_under_cgpl = lp->descendant_op_names();
    //for (auto op_name: op_under_cgpl) {
    //  cout << "OP: " << op_name << " is under coarse granularity loop" << endl;
    //}
    for (auto & it: buffers) {
      auto & buf = it.second;
      auto buf_ops = buf.get_ops();
      bool buffer_under_cgpl = std::includes(
              op_under_cgpl.begin(), op_under_cgpl.end(),
              buf_ops.begin(), buf_ops.end());
      if (buffer_under_cgpl) {
        buf.coarse_grained_pipeline_loop_level =
            max(buf.coarse_grained_pipeline_loop_level, max_loop_depth(prg) - loop_depth(lp));
        cout << "\tBuffer: " << buf.name << " was tagged coarse grained pipeline loop, level = " << buf.coarse_grained_pipeline_loop_level << endl;
      }
    }
  }
}

map<string, UBuffer> build_buffers(prog& prg, umap* opt_sched) {
  int usuffix = 0;

  map<string, UBuffer> buffers;
  auto domains = prg.domains();
  auto all_op = prg.all_ops();

  //sort all ops by its name instead of ptr addres
  //to avoid uncertainty in buffer name
  vector<op*> all_op_vec(all_op.begin(), all_op.end());
  std::sort(all_op_vec.begin(), all_op_vec.end(), [](op* l, op* r){return l->name > r->name;});

  for (auto op : all_op_vec) {

    for (auto consumed : op->produce_locs) {
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
      buf.port_bundles[op->name + "_write"].push_back(pt_name);

      string cond = "{ ";
      for (auto sec_pair : consumed.second) {
        if (sec_pair.first == "") {
          cond = cond + string(prg.op_iter(op) + " -> " + consumed.first + "[" + sec_pair.second + "]; ");

        } else {
          cond = cond + string(prg.op_iter(op) + " -> " + consumed.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
        }
      }
      cond = cond.substr(0, cond.length() - 2);
      cond = cond + string(" }");

      cout << "cond = " << cond.c_str() << endl;
      isl_map* consumed_here =
        its(isl_map_read_from_str(buf.ctx, cond.c_str()), cpy(domains.at(op)));

      assert(consumed_here != nullptr);

      assert(contains_key(op, domains));

      cout << "\tAdding output port: " << pt_name << endl;
      cout << "\t\tConsumed: " << str(consumed_here) << endl;
      buf.add_in_pt(pt_name, domains.at(op), consumed_here, its(opt_sched, domains.at(op)));

      if (op->dynamic_reads(name)) {
        buf.dynamic_ports.insert(pt_name);
      }

      vector<string> inpt = buf.get_in_ports();
      cout << "current out port name: " << endl;
      for_each(inpt.begin(), inpt.end(), [](string pt_name){cout <<"\t" << pt_name;});
      cout << endl;

      usuffix++;
    }

    for (auto consumed : op->consume_locs_pair) {
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

      string cond = "{ ";
      for (auto sec_pair : consumed.second) {
        if (sec_pair.first == "") {
          cond = cond + string(prg.op_iter(op) + " -> " + consumed.first + "[" + sec_pair.second + "]; ");

        } else {
          cond = cond + string(prg.op_iter(op) + " -> " + consumed.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
        }
      }
      cond = cond.substr(0, cond.length() - 2);
      cond = cond + string(" }");

      cout << "cond = " << cond.c_str() << endl;
      isl_map* consumed_here =
        its(isl_map_read_from_str(buf.ctx, cond.c_str()), cpy(domains.at(op)));

      assert(consumed_here != nullptr);

      assert(contains_key(op, domains));

      cout << "\tAdding output port: " << pt_name << endl;
      cout << "\t\tConsumed: " << str(consumed_here) << endl;
      cout << "Opt sched: " << str(opt_sched) << endl;
      cout << "Dom      : " << str(domains.at(op)) << endl;
      auto sched_dom = domain(opt_sched);
      cout << "SDom     : " << str(sched_dom) << endl;

      auto domain_its = its(sched_dom, to_uset(domains.at(op)));
      cout << "Dom ITS  : " << str(domain_its) << endl;
      cout << "Dom UNN  : " << str(unn(sched_dom, to_uset(domains.at(op)))) << endl;

      cout << "Per group..." << endl;
      for (auto dset : get_sets(sched_dom)) {
        if (::name(dset) == op->name) {
          isl_space* dspace = get_space(dset);
          isl_space* other_dspace = get_space(domains.at(op));

          isl_id* dspace_id = isl_space_get_tuple_id(dspace, isl_dim_set);
          cout << tab(1) << "dspace_id       = " << str(dspace_id) << endl;
          isl_id* other_dspace_id = isl_space_get_tuple_id(other_dspace, isl_dim_set);
          cout << tab(1) << "other_dspace_id = " << str(other_dspace_id) << endl;

          assert(dspace_id == other_dspace_id);
          assert(isl_space_has_equal_params(dspace, other_dspace));
          assert(isl_space_has_equal_tuples(dspace, other_dspace));
          assert(isl_space_is_equal(dspace, other_dspace));
          cout << tab(1) << "Schedule domain set: " << str(dset) << endl;
          cout << tab(1) << "Domain set from prg: " << str(domains.at(op)) << endl;
          cout << tab(1) << "ITS: " << str(its(dset, domains.at(op))) << endl;
        }
      }
      auto op_sched_its = its(opt_sched, to_uset(domains.at(op)));
      cout << "ITS      : " << str(op_sched_its) << endl;

      assert(ctx(opt_sched) == ctx(domains.at(op)));

      buf.add_out_pt(pt_name, domains.at(op), consumed_here, its(opt_sched, domains.at(op)));

      if (op->dynamic_reads(name)) {
        buf.dynamic_ports.insert(pt_name);
      }

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

vector<string> get_arg_names(const map<string, UBuffer>& buffers, prog& prg) {
  vector<string> args;
  for (auto& b : prg.ins) {
    cout << "Trying to find " << b << " in buffers" << endl;
    assert(contains_key(b, buffers));
    auto& buf = buffers.at(b);

    bool found_bundle = false;
    for (auto bndl : buf.port_bundles) {
      cout << "Trying bundle: " << bndl.first << endl;
      if (is_prefix(b, bndl.first)) {
        cout << "Found" << endl;
        string bname = bndl.first;
        vector<string> ports = bndl.second;
        args.push_back(buf.name);
        found_bundle = true;
        break;
      }
    }
    cout << "done trying bundles" << endl;

    if (!found_bundle) {
      cout << "No bundle for input: " << b << endl;
      cout << "No bundle for input: " << b << endl;
      auto bndl = pick(buf.port_bundles);
      string bname = bndl.first;
      vector<string> ports =
        map_find(bname, buf.port_bundles);
      args.push_back(buf.name);
    }
  }

  for (auto& b : prg.outs) {

    if (!contains_key(b, buffers)) {
      cout << "No buffer for: " << b << ", available buffers..." << endl;
      for (auto buf : buffers) {
        cout << tab(1) << buf.first << endl;
      }
    }

    assert(contains_key(b, buffers));
    auto& buf = buffers.at(b);

    bool found_bundle = false;
    for (auto bndl : buf.port_bundles) {
      cout << "Trying bundle: " << bndl.first << endl;
      if (is_prefix(b, bndl.first)) {
        string bname = bndl.first;
        vector<string> ports = bndl.second;
        args.push_back(buf.name);
        found_bundle = true;
        break;
      }
    }
    cout << "done trying bundle" << endl;
    if (!found_bundle) {
      // TODO: Should really be an error
      cout << "No bundle for input: " << b << endl;
      auto bndl = pick(buf.port_bundles);
      string bname = bndl.first;
      vector<string> ports =
        map_find(bname, buf.port_bundles);
      args.push_back(buf.name);
    }

  }
  cout << "Got args" << endl;
  return args;
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
        cout << "Found" << endl;
        string bname = bndl.first;
        vector<string> ports = bndl.second;
        args.push_back("HWStream<" + buf.bundle_type_string(bname) + " >& /* get_args num ports = " + to_string(ports.size()) + " */" + buf.name);
        found_bundle = true;
        break;
      }
    }
    cout << "done trying bundles" << endl;

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
      cout << "No buffer for: " << b << ", available buffers..." << endl;
      for (auto buf : buffers) {
        cout << tab(1) << buf.first << endl;
      }
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
    cout << "done trying bundle" << endl;
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
  cout << "Got args" << endl;
  return args;
}

void generate_soda_tb(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg) {

  assert(prg.ins.size() > 0);
  //assert(prg.buffer_port_widths.size() > 0);
  {
    ofstream of("tb_soda_" + prg.name + ".cpp");

    auto in_rep = pick(prg.ins);
    int pixel_width =
      prg.buffer_port_width(in_rep);
      //pick(prg.buffer_port_widths).second;

    int unroll_factor =
      pick(map_find(pick(prg.ins), buffers).port_bundles).second.size();

    int burst_width = pixel_width*unroll_factor;

    of << "// AUTO GEN SODA TB" << endl;
    of << "#include \"" << prg.name << "_kernel.h\"" << endl;
    of << "#include <iostream>" << endl;
    of << "#include <fstream>" << endl << endl;
    of << "#define PIXEL_WIDTH " << pixel_width << endl;
    of << "#define BURST_WIDTH " << burst_width << endl << endl;

    of << "#include \"runtime/test_utils.h\"" << endl << endl;
    of << "using namespace std;" << endl << endl;
    of << "int main() {" << endl;
    of << tab(1) << "srand(234);" << endl;
    string rep_buf = pick(prg.ins);

    int ncols = -1;
    if (prg.buffer_bounds[rep_buf].size() > 0) {
      cout << "Getting 0" << endl;
      ncols = prg.buffer_bounds[rep_buf].at(0);
    }
    int nrows = -1;
    if (prg.buffer_bounds[rep_buf].size() > 1) {
      cout << "Getting 1" << endl;
      nrows = prg.buffer_bounds[rep_buf].at(1);
    }

    if (options.num_input_epochs < 0) {
      of << tab(1) << "const int nrows = " << nrows << ";" << endl;
    } else {
      of << tab(1) << "const int nrows = " << options.num_input_epochs << "*" << nrows << ";" << endl;
    }
    of << tab(1) << "const int ncols = " << ncols << ";" << endl;

    of << tab(1) << "uint64_t img_pixels = nrows*ncols;" << endl;

    of << tab(1) << "const uint64_t bits_per_pixel = PIXEL_WIDTH;" << endl;
    of << tab(1) << "uint64_t img_bits = bits_per_pixel*img_pixels;" << endl;

    of << tab(1) << "const uint64_t num_transfers = img_bits / BURST_WIDTH;" << endl;

    of << tab(1) << "const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;" << endl << endl;

    of << tab(1) << "cout << \"num transfers    : \" << num_transfers << endl;" << endl;
    of << tab(1) << "cout << \"pixels / transfer: \" << pixels_per_burst << endl;" << endl << endl;

    of << tab(1) << "const uint64_t transfer_cols = ncols / pixels_per_burst;" << endl;

    vector<string> args;
    for (auto out : prg.outs) {
      of << tab(1) << "ap_uint<BURST_WIDTH>* " << out << " = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);" << endl;
      args.push_back(out);

    }

    for (auto in : prg.ins) {
      of << tab(1) << "ap_uint<BURST_WIDTH>* " << in << " = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);" << endl;
    of << tab(1) << "fill_array_decimal<bits_per_pixel>(\"" << in << "_input_pixel.csv\", " << in << ", nrows, ncols, transfer_cols);" << endl;

      args.push_back(in);
    }

    args.push_back("num_transfers");

    of << tab(1) << prg.name << "_kernel(" << comma_list(args) << ");" << endl;

    for (auto out : prg.outs) {
      of << tab(1) << "write_results_decimal<bits_per_pixel>(\"soda_" << prg.name << "_regression_result.csv\", " << out << ", nrows, ncols, transfer_cols);" << endl;
    }

    for (auto in : prg.ins) {
      of << tab(1) << "free(" << in << ");" << endl;
    }
    for (auto in : prg.outs) {
      of << tab(1) << "free(" << in << ");" << endl;
    }
    of << "}" << endl;

    of.close();
  }
}

void generate_tb_compare_scripts(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg) {
  {
    ofstream of(prg.name + "_kernel.h");
    of << "#include \"ap_int.h\"" << endl << endl;
    of << "extern \"C\" {" << endl << endl;
    vector<string> decls;
    //for (auto out : prg.outs) {
    for (auto b : outputs(buffers, prg)) {
      auto out = b.first;
      auto bundle = b.second;
      string tp_string =
        "ap_uint<" + str(map_find(out, buffers).port_bundle_width(bundle)) + ">*";
        //"ap_uint<" + str(prg.buffer_port_width(out)) + ">*";
      decls.push_back(tp_string + " " + out);
    }

    //for (auto out : prg.ins) {
    for (auto b : inputs(buffers, prg)) {
      auto out = b.first;
      auto bundle = b.second;
      string tp_string =
        "ap_uint<" + str(map_find(out, buffers).port_bundle_width(bundle)) + ">*";
        //"ap_uint<" + str(prg.buffer_port_width(out)) + ">*";
      decls.push_back(tp_string + " " + out);
    }

    decls.push_back("uint64_t coalesced_data_num");
    of << "void " << prg.name << "_kernel(" << comma_list(decls) << ");" << endl;
    of << "}" << endl;
    of.close();
  }

  {
    ofstream of("set_app.sh");
    of << "export app=" << prg.name << endl;
    of << "export HLS_CLOCK_FREQUENCY=" << options.rtl_options.hls_clock_target_Hz << endl;
    of.close();
  }

  {
    ofstream of("build_kernel.sh");
    of << "~/soda-compiler/src/sodac ${app}.soda --xocl-kernel ${app}_kernel.cpp --xocl-platform \"$VITIS_DIR/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1\"" << endl;
    of.close();
  }

  {
    ofstream of("run_tb.sh");
    of << "~/soda-compiler/src/sodac ${app}.soda --xocl-kernel ${app}_kernel.cpp --xocl-platform \"$VITIS_DIR/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1\"" << endl;
    of << "g++ -std=c++0x tb_soda_${app}.cpp ${app}_kernel.cpp -I ../../../ -I ${XILINX_VIVADO}/include || { echo 'compilation failed'; exit 1; }" << endl;
    of << "./a.out" << endl;
    of.close();
  }

  {
    ofstream of("aws_run_tb_" + prg.name + ".sh");
    of << "make clean" << endl;
    of << "make check TARGET=sw_emu DEVICE=$AWS_PLATFORM all" << endl;
    of.close();
  }

  {
    ofstream of("aws_compare_regressions.sh");
    of << "source set_app.sh" << endl;
    of << "cd soda_code" << endl;
    of << "./run_tb.sh || { echo 'soda compilation failed'; exit 1; }" << endl;
    of << "cd .." << endl;

    of << "cd our_code" << endl;
    of << "./aws_run_tb_${app}.sh || { echo 'our compilation failed'; exit 1; }" << endl;
    of << "cd .." << endl;

    auto out_bundle = pick(outputs(buffers, prg)).second;
    of << "../../aligner ./our_code/" + out_bundle + "_accel_result.csv ./soda_code/soda_${app}_regression_result.csv" << endl;

    of.close();
  }
  {
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


//vector<string> buffer_arg_names(const map<string, UBuffer>& buffers, op* op, prog& prg) {
vector<string> buffer_arg_names(op* op, prog& prg) {
  std::set<string> done;
  vector<string> buf_srcs;

  for (auto p : op->consume_locs_pair) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      buf_srcs.push_back(buf_name + " /* buf name */");
      done.insert(buf_name);
    }
  }

  for (auto p : op->buffers_written()) {
    auto buf_name = p;
    if (!elem(buf_name, done)) {
      buf_srcs.push_back(buf_name);
      done.insert(buf_name);
    }
  }
  return buf_srcs;
}

vector<string> outgoing_buffers(const map<string, UBuffer>& buffers, op* op, prog& prg) {
  vector<string> incoming;
  std::set<string> done;
  for (auto p : op->buffers_written()) {
    //auto buf_name = p.first;
    auto buf_name = p;
    if (!elem(buf_name, done)) {
      incoming.push_back(buf_name);
      done.insert(buf_name);
    }
  }
  return incoming;
}

vector<string> incoming_buffers(const map<string, UBuffer>& buffers, op* op, prog& prg) {
  cout << "getting incoming buffers to " << op->name << endl;
  vector<string> incoming;
  std::set<string> done;
  for (auto p : op->consume_locs_pair) {
    auto buf_name = p.first;
    cout << tab(1) << "consumed: " << buf_name << endl;
    if (!elem(buf_name, done)) {
      incoming.push_back(buf_name);
      done.insert(buf_name);
    }
  }
  return incoming;
}

vector<string> buffer_args(const map<string, UBuffer>& buffers, op* op, prog& prg) {
  std::set<string> done;
  vector<string> buf_srcs;
  for (auto p : op->consume_locs_pair) {
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

  for (auto p : op->buffers_written()) {
    //auto buf_name = p.first;
    auto buf_name = p;
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

void generate_compute_op(
    ostream& conv_out,
    prog& prg,
    op* op,
    map<string, UBuffer>& buffers,
    map<string, isl_set*>& domain_map) {

  cout << "Generating compute for: " << op->name << endl;

  vector<string> buf_srcs;
  concat(buf_srcs, buffer_args(buffers, op, prg));

  cout << "Got srcs" << endl;

  auto s = get_space(domain_map.at(op->name));
  vector<string> dim_args;
  for (auto a : space_var_args(s)) {
    dim_args.push_back(a);
  }
  dim_args.push_back("0");

  for (auto a : space_var_decls(s)) {
    buf_srcs.push_back(a);
  }

  cout << "Got iteration variables" << endl;
  conv_out << "inline void " << op->name << sep_list(buf_srcs, "(", ")", ", ") << " {" << endl;
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

  map<string, string> buf_vals;
  for (auto ib : in_buffers) {
    auto in_buffer = ib.first;
    conv_out << "\t// Consume: " << in_buffer << endl;
    string value_name = op->consumed_value_name(ib);
    buf_vals[in_buffer] = value_name;
    conv_out << "\tauto " << value_name << " = ";

    string bundle_name = op->name + "_read";

    if (prg.is_boundary(in_buffer)) {
      conv_out << in_buffer << ".read();" << endl;
    } else {
      if (op->dynamic_reads(in_buffer)) {
        string dynaddr = "";
        for (auto dr : op->dynamic_load_addresses) {
          if (dr.buffer == in_buffer) {
            dynaddr = buf_vals[dr.table];
          }
        }
        assert(dynaddr != "");
        dim_args[dim_args.size() - 1] = dynaddr;
      }
      vector<string> source_delays{in_buffer};
      cout << "op = " << op->name << endl;
      conv_out << in_buffer << "_" << op->name << "_read_bundle_read(" << comma_list(source_delays) << "/* source_delay */, " << comma_list(dim_args) << ");" << endl;

      conv_out << endl;
      open_debug_scope(conv_out);

      close_debug_scope(conv_out);
      conv_out << endl;

    }
    buf_args.push_back(value_name);
    res = value_name;
  }

  for (auto var : op->index_variables_needed_by_compute)  {
    buf_args.push_back(var);
  }

  cout << "created res" << endl;
  if (op->func != "") {
    conv_out << "\tauto compute_result = " << op->func << "(" << comma_list(buf_args) << ");" << endl;
    res = "compute_result";
  }

  cout << "finding out buffers" << endl;
  std::set<string> out_buffers;
  for (auto con : op->buffers_written()) {
    out_buffers.insert(con);
  }
  if (!(out_buffers.size() == 1)) {
    cout << "Error: " << out_buffers.size() << " out_buffers in " << op->name << endl;
  }
  assert(out_buffers.size() == 1);
  string out_buffer = pick(out_buffers);

  conv_out << "\t// Produce: " << out_buffer << endl;

  string bundle_name = op->name + "_write";

  cout << "Checking if program is a boundary" << endl;

  if (prg.is_boundary(out_buffer)) {
    conv_out << "\t" << out_buffer << ".write(" << res << ");" << endl;
  } else {
    assert(contains_key(out_buffer, buffers));

    auto& buf = buffers.at(out_buffer);
    vector<string> arg_names{res, buf.name};
    concat(arg_names, dim_args);
    conv_out << "\t" << out_buffer << "_" << op->name << "_write_bundle_write(" <<
      "/* arg names */" + comma_list(arg_names) << ");" << endl;
  }

  conv_out << endl;
  open_debug_scope(conv_out);


  close_debug_scope(conv_out);
  conv_out << endl;
  conv_out << "}" << endl << endl;

}

UBuffer write_latency_adjusted_buffer(
    CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo) {

  UBuffer cpy = buf;
  cout << "Adjusted latencies" << endl;
  for (auto l : hwinfo.compute_unit_latencies) {
    cout << tab(1) << l.first << " -> " << l.second << endl;
  }
  for (auto pt : buf.get_in_ports()) {
    string op_name = domain_name(pick(get_maps(buf.access_map.at(pt))));
    cout << "latency adjustment for op name = " << op_name << endl;
    op* op = prg.find_op(op_name);
    int write_start = hwinfo.compute_latency(op);

    if (op->buffers_read().size() > 0) {
      write_start += hwinfo.load_latency(pick(op->buffers_read()));
    }

    isl_aff* adjusted =
      add(get_aff(buf.schedule.at(pt)), (int)write_start);
    cpy.schedule[pt] =
      its(to_umap(to_map(adjusted)),buf.domain.at(pt));
  }

  return cpy;
}

std::string resource_sharing_loop_codegen(umap* schedmap, const int d) {
  auto time_range = coalesce(range(schedmap));
  auto sets = get_sets(time_range);

  assert(sets.size() == 1);
  isl_set* s = pick(get_sets(time_range));
  assert(s != nullptr);

  if (d == num_dims(s) - 1) {
    return perfect_loop_codegen(schedmap);
  }

  vector<isl_map*> maps = get_maps(schedmap);
  vector<pair<string, pair<int, int> > > bounds;
  vector<int> split_points;
  for (auto m : maps) {
    isl_set* rng = project_all_but(range(m), d);
    bounds.push_back({domain_name(m), {to_int(lexminval(rng)), to_int(lexmaxval(rng))}});
    split_points.push_back(bounds.back().second.first);
    split_points.push_back(bounds.back().second.second);
  }

  cout << "Bounds..." << endl;
  for (auto b : bounds) {
    cout << b.first << " -> " << b.second.first << ", " << b.second.second << endl;
  }

  vector<int> breakpts = sort_unique(split_points);
  cout << "Points to split..." << endl;
  for (auto b : breakpts) {
    cout << tab(1) << b << endl;
  }

  assert(breakpts.size() > 0);

  vector<pair<int, int> > intervals;
  for (int i = 0; i < (int) breakpts.size() - 1; i++) {
    intervals.push_back({breakpts[i], breakpts[i + 1]});
  }

  if (intervals.size() == 0) {
    return resource_sharing_loop_codegen(schedmap, d + 1);
  }

  cout << "Intervals..." << endl;
  vector<isl_set*> interval_sets;
  int idx = 0;
  for (auto i : intervals) {
    cout << tab(1) << i.first << ", " << i.second << endl;
    vector<string> constraints;
    vector<string> vars;
    for (int di = 0; di < num_dims(s); di++) {
      string v = "d" + str(di);
      vars.push_back(v);
      if (di == d) {
        constraints.push_back(str(i.first) + " <= " + v + ((idx == (int) intervals.size() - 1) ? " <= " : " < ") + str(i.second));
      }
    }
    isl_set* is = mk_set(ctx(s), vars, constraints);
    interval_sets.push_back(is);
    idx++;
  }
  cout << endl;
  cout << "Restrictions..." << endl;
  idx = 0;
  ostringstream out;
  for (auto is : interval_sets) {
    out << tab(1) << "{" << endl;
    auto i = intervals.at(idx);
    string var = "d" + str(d);
    //cout << "for (" << var << " = " << i.first << "; " << var << " " << ((idx == (int) intervals.size() - 1) ? " <= " : " < ") << " " << i.second << "; " << var << "++)" << endl;
    umap* r = its_range(schedmap, to_uset(is));
    //out << perfect_loop_codegen(r) << endl << endl;
    out << resource_sharing_loop_codegen(r, d + 1) << endl << endl;
    out << tab(1) << "}" << endl;
    idx++;
  }

  cout << "Schedule maps..." << endl;

  return out.str();
}

std::string resource_sharing_loop_codegen(umap* schedmap) {
  return resource_sharing_loop_codegen(schedmap, 0);
}

std::string non_blocking_loop_codegen(umap* schedmap, prog& prg) {
  ostringstream conv_out;
  auto time_range = coalesce(range(schedmap));
  conv_out << "// time range: " << str(time_range) << endl;
  auto sets = get_sets(time_range);

  conv_out << "// # sets: " << sets.size() << endl;
  assert(sets.size() == 1);
  isl_set* s = pick(get_sets(time_range));
  //isl_set* index_ranges = isl_set_project_out(cpy(s), isl_dim_set, num_dims(s) - 1, 1);
  vector<int> lower_bounds;
  vector<int> upper_bounds;
  vector<string> constraint_list;
  vector<string> dvs;
  for (int d = 0; d < num_dims(s); d++) {
    auto ds = project_all_but(s, d);
    auto lm = lexminval(ds);
    auto lmax = lexmaxval(ds);
    lower_bounds.push_back(to_int(lm));
    upper_bounds.push_back(to_int(lmax));

    if (d < num_dims(s) - 1) {
      string vn = "d" + str(d);
      dvs.push_back(vn);
      constraint_list.push_back(str(lower_bounds.back()) + " <= " + vn + " <= " + str(upper_bounds.back()));
    }
  }


  string range_set =
    curlies(bracket_list(dvs) + " : " + sep_list(constraint_list, "", "", " and "));
  isl_set* index_ranges =
    rdset(ctx(schedmap), range_set);

  conv_out << tab(1) << "int current_stmt = 0;";
  for (int i = 0; i < lower_bounds.size() - 1; i++) {
    int trip_count = upper_bounds.at(i) - lower_bounds.at(i) + 1;
    if (trip_count == 1) {
      conv_out << tab(i) << "int i" << str(i) << " = " << lower_bounds.at(i) << ";" << endl;
    } else {
      string var = "i" + str(i);
      conv_out << tab(i) << "int i" << str(i) << " = " << lower_bounds.at(i) << ";" << endl;
      conv_out << tab(i) << "while (" << var << " <= " << upper_bounds.at(i) << ") {" << endl;
    }
    if (i == ((int) lower_bounds.size()) - 2) {
      conv_out << "#pragma HLS pipeline II=1" << endl;
    }
  }

  map<string, int> order;
  for (auto time_to_val : get_maps(inv(schedmap))) {
    //cout << "Time to val: " << str(time_to_val) << endl;
    auto val_to_time = inv(time_to_val);
    //cout << "Val to time: " << str(val_to_time) << endl;
    auto last_dim =
      isl_map_project_out(cpy(val_to_time), isl_dim_out, 0, lower_bounds.size() - 1);
    //cout << "Val to last: " << str(last_dim) << endl;
    isl_aff* lda = get_aff(last_dim);
    int const_val = -1;
    if (is_cst(lda)) {
      //cout << tab(1) << "Constant!" << endl;
      const_val = to_int(const_coeff(lda));
    } else {
      cout << "Error: Final schedule dimension: " << str(lda) << " is not constant" << endl;
      assert(false);
    }
    assert(const_val >= 0);
    //cout << tab(1) << "C = " << const_val << endl;
    //cout << endl;
    order[range_name(time_to_val)] = const_val;
  }

  vector<isl_map*> maps = get_maps(inv(schedmap));
  sort_lt(maps, [order](isl_map* x) {
      return map_find(range_name(x), order);
      });

  int num_stmts = maps.size();
  assert(num_stmts > 0);

  int last_stmt = num_stmts - 1;
  assert(last_stmt >= 0);

  conv_out << tab(lower_bounds.size() - 2) << "if (current_stmt == " << last_stmt + 1 << ") { current_stmt = 0; }" << endl << endl;

  int current_stmt = 0;
  for (auto tv : maps) {
    auto time_to_val = isl_map_project_out(cpy(tv), isl_dim_in, num_in_dims(tv) - 1, 1);

    cout << "Getting statement name from: " << str(time_to_val) << endl;
    string stmt = range_name(time_to_val);

    auto pw = isl_pw_multi_aff_from_map(time_to_val);
    vector<pair<isl_set*, isl_multi_aff*> > pieces =
      get_pieces(pw);
    assert(pieces.size() == 1);

    auto saff = pieces.at(0).second;
    auto dom = pieces.at(0).first;
    dom = gist(dom, index_ranges);


    cout << "Stmt: " << stmt << endl;

    op* s = prg.find_op(stmt);
    vector<string> check_str{"true"};
    for (auto b : s->buffers_read()) {
      if (elem(b, prg.ins)) {
        check_str.push_back("!" + parens(b + ".is_empty()"));
      }
    }
    string not_blocked = sep_list(check_str, "(", ")", " && ");


    conv_out << tab(lower_bounds.size()) << "if (" << "current_stmt == " << current_stmt << " && !" << codegen_c(dom) << ") {" << endl;
    conv_out << tab(lower_bounds.size() + 1) << "current_stmt++;" << endl;
    conv_out << tab(lower_bounds.size()) << "} else if (" << "current_stmt == " << current_stmt << " && " << not_blocked << " && " << codegen_c(dom) << ") {" << endl;
    conv_out << tab(lower_bounds.size() + 1) << codegen_c(saff) << ";" << endl;
    conv_out << tab(lower_bounds.size() + 1) << "current_stmt++;" << endl;
    conv_out << tab(lower_bounds.size()) << "}" << endl;

    current_stmt++;
  }

  for (int i = ((int) lower_bounds.size()) - 2; i >= 0; i--) {
    int trip_count = upper_bounds.at(i) - lower_bounds.at(i) + 1;
    if (trip_count == 1) {
    } else {
      conv_out << tab(i+1) << "i" << i << " = current_stmt == " << last_stmt + 1 << " ? i" << i << " + 1 : i" << i << ";" << endl;
      conv_out << tab(i) << "}" << endl;
    }

  }

  return conv_out.str();
}

std::string perfect_loop_codegen(umap* schedmap) {
  ostringstream conv_out;
  auto time_range = coalesce(range(schedmap));
  conv_out << "// time range: " << str(time_range) << endl;
  auto sets = get_sets(time_range);

  conv_out << "// # sets: " << sets.size() << endl;
  assert(sets.size() == 1);
  isl_set* s = pick(get_sets(time_range));
  //isl_set* index_ranges = isl_set_project_out(cpy(s), isl_dim_set, num_dims(s) - 1, 1);
  vector<int> lower_bounds;
  vector<int> upper_bounds;
  vector<string> constraint_list;
  vector<string> dvs;
  for (int d = 0; d < num_dims(s); d++) {
    auto ds = project_all_but(s, d);
    auto lm = lexminval(ds);
    auto lmax = lexmaxval(ds);
    lower_bounds.push_back(to_int(lm));
    upper_bounds.push_back(to_int(lmax));

    if (d < num_dims(s) - 1) {
      string vn = "d" + str(d);
      dvs.push_back(vn);
      constraint_list.push_back(str(lower_bounds.back()) + " <= " + vn + " <= " + str(upper_bounds.back()));
    }
  }


  string range_set =
    curlies(bracket_list(dvs) + " : " + sep_list(constraint_list, "", "", " and "));
  isl_set* index_ranges =
    rdset(ctx(schedmap), range_set);

  for (int i = 0; i < lower_bounds.size() - 1; i++) {
    int trip_count = upper_bounds.at(i) - lower_bounds.at(i) + 1;
    if (trip_count == 1) {
      conv_out << tab(i) << "int i" << str(i) << " = " << lower_bounds.at(i) << ";" << endl;
    } else {
      conv_out << tab(i) << "for (int i" << str(i) << " = " << lower_bounds.at(i) << "; i" << str(i) << " <= " << upper_bounds.at(i) << "; i" << i << "++) {" << endl;
    }
    if (i == ((int) lower_bounds.size()) - 2) {
      conv_out << "#pragma HLS pipeline II=1" << endl;
    }
  }

  map<string, int> order;
  for (auto time_to_val : get_maps(inv(schedmap))) {
    //cout << "Time to val: " << str(time_to_val) << endl;
    auto val_to_time = inv(time_to_val);
    //cout << "Val to time: " << str(val_to_time) << endl;
    auto last_dim =
      isl_map_project_out(cpy(val_to_time), isl_dim_out, 0, lower_bounds.size() - 1);
    //cout << "Val to last: " << str(last_dim) << endl;
    isl_aff* lda = get_aff(last_dim);
    int const_val = -1;
    if (is_cst(lda)) {
      //cout << tab(1) << "Constant!" << endl;
      const_val = to_int(const_coeff(lda));
    } else {
      cout << "Error: Final schedule dimension: " << str(lda) << " is not constant" << endl;
      assert(false);
    }
    assert(const_val >= 0);
    //cout << tab(1) << "C = " << const_val << endl;
    //cout << endl;
    order[range_name(time_to_val)] = const_val;
  }

  vector<isl_map*> maps = get_maps(inv(schedmap));
  sort_lt(maps, [order](isl_map* x) {
      return map_find(range_name(x), order);
      });

  for (auto tv : maps) {
    //cout << tab(1) << "tv: " << str(tv) << endl;
    //cout << tab(2) << "start project out at: " << num_in_dims(tv) - 1 << endl;
    auto time_to_val = isl_map_project_out(cpy(tv), isl_dim_in, num_in_dims(tv) - 1, 1);
    //cout << "time to val: " << str(time_to_val) << endl;
    auto pw = isl_pw_multi_aff_from_map(time_to_val);
    vector<pair<isl_set*, isl_multi_aff*> > pieces =
      get_pieces(pw);
    assert(pieces.size() == 1);

    auto saff = pieces.at(0).second;
    auto dom = pieces.at(0).first;
    //cout << "dom: " << str(dom) << endl;
    //cout << "irn: " << str(index_ranges) << endl;
    dom = gist(dom, index_ranges);
    //cout << "ctx: " << str(dom) << endl;
    //assert(false);
    conv_out << tab(lower_bounds.size()) << "// " << str(dom) << endl;
    for (auto bs : get_basic_sets(dom)) {
      conv_out << tab(lower_bounds.size()) << "// " << str(bs) << endl;
      for (auto c : constraints(bs)) {
        conv_out << tab(lower_bounds.size() + 1) << "// " << str(c) << endl;
      }
    }
    conv_out << tab(lower_bounds.size()) << "if (" << codegen_c(dom) << ") {" << endl;
    conv_out << tab(lower_bounds.size() + 1) << codegen_c(saff) << ";" << endl;
    conv_out << tab(lower_bounds.size()) << "}" << endl;
  }

  //assert(false);

  for (int i = 0; i < lower_bounds.size() - 1; i++) {
    int trip_count = upper_bounds.at(i) - lower_bounds.at(i) + 1;
    if (trip_count == 1) {
    } else {
      conv_out << tab(lower_bounds.size() - 1 - i) << "}" << endl;
    }
    //conv_out << tab(lower_bounds.size() - 1 - i) << "}" << endl;
  }

  return conv_out.str();
}


void generate_app_code_op_logic(
    CodegenOptions& options,
    ostream& conv_out,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map) {

  conv_out << "// Operation logic" << endl;
  for (auto op : prg.all_ops()) {
    generate_compute_op(conv_out, prg, op, buffers, domain_map);
  }

  generate_driver_function_prefix(options, conv_out, buffers, prg);

  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      conv_out << tab(1) << b.first << "_cache " << b.second.name << ";" << endl;
      open_synth_scope(conv_out);
      if (b.second.banking.partition == "register_file") {
        assert(b.second.bank_list.size() == 1);
        string var = b.second.name + "." + pick(b.second.bank_list).name + ".RAM";
        conv_out << "#pragma HLS array_partition variable=" << var << " dim=0 complete" << endl;
      } else if (b.second.banking.partition == "cyclic") {
        assert(false);
        //assert(b.second.bank_list.size() == 1);
        for (int d = 0; d < b.second.logical_dimension(); d++) {
          string var = b.second.name + "." + pick(b.second.bank_list).name + ".RAM";
          assert(d < (int) b.second.banking.cycle_factors.size());
          int factor = b.second.banking.cycle_factors.at(d);
          conv_out << "#pragma HLS array_partition variable=" << var << " dim=" << d << " factor=" << factor << endl;
        }
      }
      close_synth_scope(conv_out);
    }
  }


  string code_string =
    options.code_string;
  if (options.hls_loop_codegen == HLS_LOOP_CODEGEN_CUSTOM) {
    // Do nothing, leave code string
  } else if (options.hls_loop_codegen == HLS_LOOP_CODEGEN_PERFECT) {
    code_string = perfect_loop_codegen(schedmap);
  } else if (options.hls_loop_codegen == HLS_LOOP_CODEGEN_CYLINDRICAL) {
    code_string = resource_sharing_loop_codegen(schedmap);
  } else if (options.hls_loop_codegen == HLS_LOOP_CODEGEN_NON_BLOCKING) {
    code_string = non_blocking_loop_codegen(schedmap, prg);
  } else {
    assert(options.hls_loop_codegen == HLS_LOOP_CODEGEN_ISL);
    code_string = codegen_c(schedmap);
  }

  string original_isl_code_string = code_string;

  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");

  for (auto op : prg.all_ops()) {
    regex re("(\n\t\\s+)" + op->name + "\\((.*)\\);");
    string args_list = sep_list(buffer_arg_names(op, prg), "", "", ", ");
    code_string = regex_replace(code_string, re, "$1" + op->name + "(" + args_list + ", $2);");
  }

  conv_out << "#ifdef __VIVADO_SYNTH__" << endl;
  conv_out << "#pragma HLS inline recursive" << endl;
  conv_out << "#endif // __VIVADO_SYNTH__" << endl << endl;

  conv_out << "// schedule: " << str(schedmap) << endl;
  for (auto s : get_maps(schedmap)) {
    conv_out << "// " << tab(1) << str(s) << endl;
    conv_out << "// Condition for " << domain_name(s) << codegen_c(range(s)) << endl;
  }
  conv_out << endl;

  conv_out << code_string << endl;

  generate_driver_function_suffix(options, conv_out, buffers, prg);
}

void generate_app_code(
    CodegenOptions& options,
    app_dag& dag) {

  std::set<string> boundary_bufs;
  for (auto& gp : dag.fusion_group_progs) {
    for (auto b : gp.second.boundary_buffers()) {
      boundary_bufs.insert(b);
    }
  }

  auto valid_deps = dag.prg.validity_deps();
  auto global_sched =
    its(clockwork_schedule_umap_reversed(dag.prg.whole_iteration_domain(), valid_deps, valid_deps),
        dag.prg.whole_iteration_domain());
  cout << "Sched: " << str(global_sched) << endl;

  assert(no_violated_dependencies(global_sched, valid_deps));

  auto sms = get_maps(global_sched);
  map<string, isl_map*> mps;
  for (auto m : sms) {
    mps[domain_name(m)] = m;
  }

  auto buffers = build_buffers(dag.prg, global_sched);


  //auto global_sched = dag.prg.optimized_codegen();



  cout << "Generating code for " << dag.prg.name << endl;
  map<string, UBuffer> reps;
  for (auto b : buffers) {
    cout << endl << b.second << endl;
    assert(all_schedules_defined(b.second));
    if (elem(b.first, boundary_bufs)) {
      reps[b.first] = b.second;
    }
  }

  ofstream conv_out(dag.prg.name + ".cpp");
  generate_app_prefix(options, conv_out, dag.prg);

  int capacity = 0;
  for (auto& b : buffers) {
    if (!elem(b.first, boundary_bufs)) {
      generate_hls_code(options, conv_out, b.second);
      capacity += buffer_capacity(b.second);
    }
  }
  conv_out << "// Total re-use buffer capacity: " << capacity << " bits" << endl;


  for (auto& gp : dag.fusion_group_progs) {
    vector<umap*> sched_maps;
    map<string, isl_set*> domains;
    umap* emp = isl_union_map_read_from_str(gp.second.ctx, "{}");
    sched_maps.push_back(emp);
    std::set<string> opnames;
    for (auto n : gp.second.all_ops()) {
      opnames.insert(n->name);
    }
    for (auto m : get_maps(global_sched)) {
      if (elem(domain_name(m), opnames)) {
        sched_maps.push_back(to_umap(m));
        domains[gp.second.find_op(domain_name(m))->name] = domain(m);
      } else {
        release(m);
      }
    }

    // There is one schedule map for each op, plus
    // a default empty schedule map
    assert(sched_maps.size() == opnames.size() + 1);

    auto sched = unn(sched_maps);

    map<string, UBuffer> local_buffers;
    for (auto& buf : buffers) {
      if (elem(buf.first, all_buffers(gp.second))) {
        local_buffers[buf.first] = buf.second;
      }
    }

    generate_app_code_op_logic(options,
        conv_out,
        local_buffers,
        gp.second,
        sched,
        domains);
  }

  generate_driver_function_prefix(options, conv_out, buffers, dag.prg);

  conv_out << endl;
  open_synth_scope(conv_out);
  conv_out << "#pragma HLS dataflow" << endl;
  close_synth_scope(conv_out);
  conv_out << endl;

  std::set<std::string> done;
  for (auto& buf : dag.prg.boundary_buffers()) {
    done.insert(buf);
  }

  if (options.slack_matching.tp == SLACK_MATCHING_TYPE_FIXED) {
    set_channel_depths_to_constant(options.slack_matching.depth, dag);
  } else {
    set_channel_depths_by_assumed_stage_depth(options.slack_matching.depth, dag);
  }

  int bits_for_causality = 0;
  int bits_for_slack_matching = 0;
  for (auto c : dag.inter_group_channels()) {
    cout << tab(1) << c << endl;
    UBuffer buf = map_find(c, buffers);
    //cout << buf << endl << endl;
    auto readers = find_readers(c, dag.prg);
    auto writers = find_writers(c, dag.prg);

    cout << tab(2) << "Readers..." << endl;
    for (auto r : readers) {
      cout << tab(3) << str(map_find(r->name, mps)) << endl;
      //auto read_map = consumer_umap(r, dag.prg);
      //cout << tab(3) << str(read_map) << endl;
    }
    cout << tab(2) << "Writers..." << endl;
    for (auto r : writers) {
      cout << tab(3) << str(map_find(r->name, mps)) << endl;
      //auto read_map = producer_umap(r, dag.prg);
      //cout << tab(3) << str(read_map) << endl;
    }
    cout << endl;

    {
      int max_dd = 0;
      assert(buf.get_in_bundles().size() == 1);
      string rep = pick(buf.get_in_bundles());
      max_dd =
        compute_max_dd(buf, pick(map_find(rep, buf.port_bundles)));

      int channel_width =
        map_find(rep, buf.port_bundles).size();
      int slack_bits = (buf.port_widths)*dag.channel_sizes[c]*channel_width;
      bits_for_slack_matching += slack_bits;

      conv_out << tab(1) << "// channel width: " << channel_width << endl;
      conv_out << tab(1) << "// port width   : " << buf.port_widths << endl;
      conv_out << tab(1) << "// dag size     : " << dag.channel_sizes[c] << endl;
      conv_out << "// Bits to slack match " << c << " = " << slack_bits << endl;
      conv_out << "// Bits to slack match " << c << " = " << slack_bits << endl;

      bits_for_causality += (buf.port_widths) * max_dd * channel_width;

      dag.channel_sizes[c] += max_dd;
    }

  }

  conv_out << "// Bits in internal re-use buffers               : " << capacity << " bits" << endl;
  conv_out << "// Bits in channels needed to guarantee causality: " << bits_for_causality << endl;
  conv_out << "// Bits in channels needed to match slack        : " << bits_for_slack_matching << endl;

  for (auto& gp : dag.fusion_group_progs) {
    for (auto& buf : gp.second.boundary_buffers()) {
      if (!elem(buf, done)) {
        UBuffer rep_buf = map_find(buf, reps);
        assert(rep_buf.port_bundles.size() > 0);

        string bundle = pick(rep_buf.port_bundles).first;
        string tp = rep_buf.bundle_type_string(bundle);
        conv_out << tab(1) << "HWStream< " << tp << " > " << buf << ";" << endl;
        open_synth_scope(conv_out);
        int depth = map_find(buf, dag.channel_sizes);
        conv_out << "#pragma HLS stream variable=" << buf << ".values depth=" << depth << endl;
        close_synth_scope(conv_out);
        done.insert(buf);
      }
    }
  }

  conv_out << endl << endl;

  auto sorted_gps = dag.sorted_fusion_groups();
  vector<string> gps;
  for (auto g : dag.fusion_groups) {
    gps.push_back(g.first);
  }
  if (sorted_gps.has_value()) {
    gps = sorted_gps.get_value();
  }
  //for (auto& gpn : dag.sorted_fusion_groups()) {
  for (auto& gpn : gps) {
    auto& gp = dag.fusion_group_progs.at(gpn);
    vector<string> args;
    for (auto in : gp.ins) {
      args.push_back(in);
    }
    for (auto out : gp.outs) {
      args.push_back(out);
    }
    conv_out << tab(1) << gp.name << sep_list(args, "(", ")", ", ") << ";" << endl;
  }

  conv_out << endl;

  generate_driver_function_suffix(options, conv_out, buffers, dag.prg);

  {
    vector<string> arg_buf_list = get_args(buffers, dag.prg);
    vector<string> ls = arg_buf_list;
    ls.push_back("const int num_epochs");
    string outer_arg_buffers = sep_list(ls, "(", ")", ", ");
    conv_out << "void " << dag.prg.name << "_wrapper" << outer_arg_buffers << " {" << endl << endl;
    vector<string> arg_strings = get_arg_names(buffers, dag.prg);
    conv_out << tab(1) << "for (int epoch = 0; epoch < num_epochs; epoch++) {" << endl;
    conv_out << tab(2) << dag.prg.name << sep_list(arg_strings, "(", ")", ", ") << ";" << endl;
    conv_out << tab(1) << "}" << endl;
    conv_out << "}" << endl;
  }

  generate_app_collateral(options, conv_out, buffers, dag.prg, global_sched);
}

void generate_xilinx_aws_ddr_config(CodegenOptions& options, map<string, UBuffer>& buffers, prog prg) {
  ofstream out(prg.name + "_config.ini");
  out << "[connectivity]" << endl;
  int i = 0;
  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    for (auto e : edge_bundles(buffers, prg)) {
      out << "sp=" << prg.name << "_accel_1." << pipe_cpy(e, pipe) << ":DDR[" << i << "]" << endl;
      i++;
    }
  }

  out.close();
}

void generate_app_prefix(CodegenOptions& options, ofstream& conv_out, prog& prg) {
  open_debug_scope(conv_out);
  conv_out << "#include <fstream>" << endl;
  conv_out << "using namespace std;" << endl << endl;
  conv_out << tab(1) << "// Debug utility" << endl;
  conv_out << tab(1) << "ofstream* global_debug_handle;" << endl << endl;
  close_debug_scope(conv_out);

  assert(prg.compute_unit_file != "");
  conv_out << "// compute file: " << prg.compute_unit_file << endl;
  conv_out << "#include \"" << prg.compute_unit_file << "\"" << endl << endl;
}

void generate_app_epoch_wrapper(CodegenOptions& options,
    ostream& conv_out,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap)  {
  vector<string> arg_buf_list = get_args(buffers, prg);
  vector<string> ls = arg_buf_list;
  ls.push_back("const int num_epochs");
  string outer_arg_buffers = sep_list(ls, "(", ")", ", ");
  conv_out << "void " << prg.name << "_wrapper" << outer_arg_buffers << " {" << endl << endl;
  vector<string> arg_strings = get_arg_names(buffers, prg);
  conv_out << tab(1) << "for (int epoch = 0; epoch < num_epochs; epoch++) {" << endl;
  conv_out << tab(2) << prg.name << sep_list(arg_strings, "(", ")", ", ") << ";" << endl;
  conv_out << tab(1) << "}" << endl;
  conv_out << "}" << endl;
}

void generate_app_collateral(CodegenOptions& options,
    ostream& conv_out,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap) {

  open_synth_scope(conv_out);
  generate_xilinx_accel_wrapper(options, conv_out, buffers, prg);
  generate_xilinx_accel_rdai_wrapper(options, conv_out, buffers, prg);
  close_synth_scope(conv_out);

  conv_out << endl;

  // Collateral generation
  generate_vivado_tcl(prg.name);
  generate_sw_bmp_test_harness(buffers, prg);
  generate_app_code_header(buffers, prg);
  generate_soda_tb(options, buffers, prg);
  generate_xilinx_aws_ddr_config(options, buffers, prg);
  generate_xilinx_accel_soda_host(options, buffers, prg);
  generate_xilinx_accel_host(options, buffers, prg);
  generate_tb_run_scripts(prg);
  generate_tb_compare_scripts(options, buffers, prg);

}

void generate_driver_function_prefix(CodegenOptions& options, ostream& conv_out, map<string, UBuffer>& buffers, prog& prg) {

  conv_out << "// Driver function" << endl;
  vector<string> arg_buf_list = get_args(buffers, prg);
  auto inner_args = arg_buf_list;
  string inner_arg_buffers = sep_list(inner_args, "(", ")", ", ");

  conv_out << "void " << prg.name << inner_arg_buffers << " {" << endl << endl;

  open_debug_scope(conv_out);
  conv_out << tab(1) << "ofstream debug_file(\"" << prg.name + "_debug.csv\");" << endl;
  conv_out << tab(1) << "global_debug_handle = &debug_file;" << endl;
  close_debug_scope(conv_out);
}

void generate_driver_function_suffix(CodegenOptions& options, ostream& conv_out, map<string, UBuffer>& buffers, prog& prg) {
  open_debug_scope(conv_out);
  conv_out << tab(1) << "debug_file.close();" << endl;
  close_debug_scope(conv_out);

  conv_out << "}" << endl << endl;
}

void generate_buffer_code(
    CodegenOptions& options,
    ostream& conv_out,
    map<string, UBuffer>& buffers,
    prog& prg) {

  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      generate_hls_code(options, conv_out, b.second);
    }
  }

  int capacity = 0;
  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      capacity += buffer_capacity(b.second);
    }
  }


  conv_out << "// Total re-use buffer capacity: " << capacity << " bits" << endl;

  conv_out << endl << endl;
}


void generate_app_code_body(
    CodegenOptions& options,
    ostream& conv_out,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map) {

  generate_buffer_code(
    options,
    conv_out,
    buffers,
    prg);

  cout << "Prog: " << prg.name << endl;

  generate_app_code_op_logic(
    options,
    conv_out,
    buffers,
    prg,
    schedmap,
    domain_map);

}

void generate_app_code(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map) {

  ofstream conv_out(prg.name + ".cpp");
  generate_app_prefix(options, conv_out, prg);

  generate_app_code_body(options,
      conv_out,
      buffers,
      prg,
      schedmap,
      domain_map);

  generate_app_epoch_wrapper(options,
      conv_out,
      buffers,
      prg,
      schedmap);


  generate_app_collateral(options,
      conv_out,
      buffers,
      prg,
      schedmap);

  conv_out.close();
}

void generate_app_code(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg, umap* schedmap) {
  auto domains = prg.domains();
  map<string, isl_set*> domain_map;
  for (auto d : domains) {
    domain_map[d.first->name] = d.second;
  }

  generate_app_code(options, buffers, prg, schedmap, domain_map);
}

void generate_optimized_code(CodegenOptions& options, prog& prg) {
  umap* sched = nullptr;

  if (options.scheduling_algorithm == SCHEDULE_ALGORITHM_CW) {

    assert(all_loop_nests_same_depth(prg));

    auto valid_deps = prg.validity_deps();

    auto dom = prg.whole_iteration_domain();

    int num_stmts_in_domain = get_sets(dom).size();
    int num_ops_in_prog = prg.all_ops().size();

    //cout << "Stmts in domain: " << num_stmts_in_domain << endl;
    //cout << "Ops in prog        : " << num_ops_in_prog << endl;

    assert(num_stmts_in_domain == prg.all_ops().size());

    umap* pre_its_sched =
      clockwork_schedule_umap_reversed(cpy(dom), valid_deps, valid_deps);
    sched =
      its(pre_its_sched, dom);
    cout << "Post its sched: " << str(sched) << endl;
  } else {
    sched = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());
  }

  assert(sched != nullptr);

  int num_stmts_in_schedule = get_maps(sched).size();
  int num_ops = prg.all_ops().size();

  cout << "Num stmts in schedule: " << num_stmts_in_schedule << endl;
  cout << "Num ops in prog      : " << num_ops << endl;
  for (auto s : get_maps(sched)) {
    cout << tab(1) << str(s) << endl;
  }
  assert(num_stmts_in_schedule == num_ops);

  cout << "Optimized schedule..." << endl;
  cout << tab(1) << ": " << str(sched) << endl << endl;
  cout << codegen_c(sched) << endl;

  auto buffers = build_buffers(prg, sched);

  assert(prg.compute_unit_file != "");
  cout << "Compute unit file: "
    << prg.compute_unit_file << endl;
  generate_app_code(options, buffers, prg, sched);

  release(sched);
}

void generate_optimized_code(prog& prg) {
  CodegenOptions options;
  options.internal = true;
  generate_optimized_code(options, prg);
}


void generate_vanilla_hls_code(prog& prg) {

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  all_unbanked(prg, options);
  options.inner_bank_offset_mode =
    INNER_BANK_OFFSET_MULTILINEAR;
  string old_name = prg.name;

  prg.name = "vanilla_" + prg.name;

  auto sched = prg.unoptimized_schedule();

  auto buffers = build_buffers(prg, prg.unoptimized_schedule());

  generate_app_code(options, buffers, prg, sched);

  prg.name = old_name;
}


void generate_unoptimized_code(CodegenOptions& options, prog& prg) {

  string old_name = prg.name;

  prg.name = "unoptimized_" + prg.name;

  cout << "Unoptimized schedule..." << endl;
  auto sched = prg.unoptimized_schedule();
  cout << tab(1) << ": " << str(sched) << endl;

  cout << codegen_c(prg.unoptimized_schedule());

  auto buffers = build_buffers(prg, prg.unoptimized_schedule());
  generate_app_code(options, buffers, prg, sched);

  prg.name = old_name;
}

void generate_unoptimized_code(prog& prg) {

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;
  all_unbanked(prg, options);
  options.inner_bank_offset_mode =
    //INNER_BANK_OFFSET_MULTILINEAR;
    INNER_BANK_OFFSET_LINEAR;
  //assert(false);
  generate_unoptimized_code(options, prg);
}

vector<pair<string, string> >
outgoing_bundles(op* op,
    map<string, UBuffer>& buffers,
    prog& prg) {

  vector<pair<string, string> > incoming;
  for (auto b : outgoing_buffers(buffers, op, prg)) {
    incoming.push_back({b, op->name + "_write"});
  }
  return incoming;
}

vector<pair<string, string> >
incoming_bundles(op* op,
    map<string, UBuffer>& buffers,
    prog& prg) {

  vector<pair<string, string> > incoming;
  for (auto b : incoming_buffers(buffers, op, prg)) {
    incoming.push_back({b, op->name + "_read"});
  }
  return incoming;
}


void generate_regression_testbench(prog& prg, map<string, UBuffer>& buffers) {
  ofstream rgtb("regression_tb_" + prg.name + ".cpp");
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"" << prg.name << ".h\"" << endl;
  rgtb << "#include \"clockwork_standard_compute_units.h\"" << endl << endl;

  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "srand(234);" << endl;
  rgtb << tab(1) << "ofstream in_pix(\"" << "input_pixels_regression_result_" << prg.name << ".txt\");" << endl;
  rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << ".txt\");" << endl;

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
      string next_val = parens(str(num_ports) + "*i + " + str(p));
      //rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << next_val << ");" << endl;
      rgtb << "#ifdef __INT_OUTPUT__" << endl;
      rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << next_val << ");" << endl;
      rgtb << "#elif defined(__FLOAT_OUTPUT__)" << endl;
      string fval = "static_cast <float> (rand()) / static_cast <float> (RAND_MAX)";
      //rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << parens("to_bits" + parens(parens("float") + next_val)) << ");" << endl;
      rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << parens("to_bits" + parens(parens("float") + fval)) << ");" << endl;
      //rgtb << tab(2) << "fout << to_float(actual_lane_" << p << ") << endl;" << endl;
      rgtb << "#else // No specified output type" << endl;
      rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << next_val << ");" << endl;
      //rgtb << tab(2) << "fout << actual_lane_" << p << " << endl;" << endl;
      rgtb << "#endif" << endl;


      rgtb << "#ifdef __INT_OUTPUT__" << endl;
      rgtb << tab(2) << "in_pix << in_val << endl;" << endl;
      //rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << next_val << ");" << endl;
      rgtb << "#elif defined(__FLOAT_OUTPUT__)" << endl;
      rgtb << tab(2) << "in_pix << to_float(in_val) << endl;" << endl;
      //rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << parens("to_bits" + parens(parens("float") + next_val)) << ");" << endl;
      //rgtb << tab(2) << "fout << to_float(actual_lane_" << p << ") << endl;" << endl;
      rgtb << "#else // No specified output type" << endl;
      rgtb << tab(2) << "in_pix << in_val << endl;" << endl;
      //rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << next_val << ");" << endl;
      rgtb << "#endif" << endl;
      //rgtb << tab(2) << "in_pix << in_val << endl;" << endl;
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

      rgtb << "#ifdef __INT_OUTPUT__" << endl;
      rgtb << tab(2) << "fout << (int) actual_lane_" << p << " << endl;" << endl;
      rgtb << "#elif defined(__FLOAT_OUTPUT__)" << endl;
      rgtb << tab(2) << "fout << to_float(actual_lane_" << p << ") << endl;" << endl;
      rgtb << "#else // No specified output type" << endl;
      rgtb << tab(2) << "fout << actual_lane_" << p << " << endl;" << endl;
      rgtb << "#endif" << endl;
    }

    rgtb << tab(1) << "}" << endl << endl;
  }

  for (auto b : prg.boundary_buffers()) {
    rgtb << tab(1) << "assert(" << b << ".is_empty());" << endl;
  }

  rgtb << tab(1) << "in_pix.close();" << endl;
  rgtb << tab(1) << "fout.close();" << endl;
  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}

void generate_vectorization_unit_testbench(UBuffer & buf) {
  ofstream rgtb("unit_tb_" + buf.name + ".cpp");
  rgtb << "#include \"" << buf.name << ".h\"" << endl << endl;
  rgtb << "#include \"" << buf.name << "_vec.h\"" << endl << endl;
  rgtb << "using namespace std;" << endl << endl;

  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "srand(234);" << endl;
  //rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << ".txt\");" << endl;

  vector<string> origin_streams;
  vector<string> vectorized_streams;
  //map<string, int> unroll_factor;
  for (auto in_bd : buf.get_in_bundles()) {
    int width = 0;
    for (auto input: buf.port_bundles.at(in_bd)) {
      width += buf.port_widths;
    }
    rgtb << tab(1) << "HWStream<hw_uint<" << width << " > > " << in_bd << ";" << endl;
    rgtb << tab(1) << "HWStream<hw_uint<" << width << " > > " << in_bd  + "_vec"<< ";" << endl;
    origin_streams.push_back(in_bd);
    vectorized_streams.push_back(in_bd + "_vec");
  }

  for (auto out_bd : buf.get_out_bundles()) {
    int width = 0;
    for (auto output: buf.port_bundles.at(out_bd)) {
      width += buf.port_widths;
    }
    rgtb << tab(1) << "HWStream<hw_uint<" << width << " > > " << out_bd << ";" << endl;
    rgtb << tab(1) << "HWStream<hw_uint<" << width << " > > " << out_bd  + "_vec" << ";" << endl;
    origin_streams.push_back(out_bd);
    vectorized_streams.push_back(out_bd + "_vec");
  }


  rgtb << endl << endl;

  rgtb << tab(1) << "// Loading input data" << endl;
  for (auto in_bd : buf.get_in_bundles()) {
    auto read_map = buf.access_map.at(pick(buf.port_bundles.at(in_bd)));
    auto rng = range(read_map);
    auto range_card = card(rng);
    int num_pushes = int_upper_bound(range_card);
    int lane_width = buf.port_widths;
    int unroll = 1;
    int bundle_width = lane_width * unroll;

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
    rgtb << tab(2) << in_bd << ".write(value);" << endl;
    rgtb << tab(2) << in_bd << "_vec.write(value);" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }

  std::reverse(origin_streams.begin(), origin_streams.end());
  std::reverse(vectorized_streams.begin(), vectorized_streams.end());
  rgtb << tab(1) << buf.name << "(" << comma_list(origin_streams) << ");" << endl;
  rgtb << tab(1) << buf.name << "_vec(" << comma_list(vectorized_streams) << ");" << endl;

  for (auto out_bd : buf.get_out_bundles()) {
    auto write_map = buf.access_map.at(pick(buf.port_bundles.at(out_bd)));
    auto dom= domain(write_map);
    auto range_card = card(dom);
    int num_pops = int_upper_bound(range_card);
    int unroll = 1;//map_find(out, unroll_factor);
    int lane_width = buf.port_widths;
    int bundle_width = lane_width*unroll;

    rgtb << tab(1) << "for (int i = 0; i < " << num_pops << "; i++) {" << endl;
    rgtb << tab(2) << "auto gold = " << out_bd << ".read();" << endl;
    rgtb << tab(2) << "auto actual = " << out_bd << "_vec.read();" << endl;
    vector<string> results_gold = split_bv(2, rgtb, "gold", lane_width, unroll);
    vector<string> results = split_bv(2, rgtb, "actual", lane_width, unroll);
    assert(results.size() == results_gold.size());
    for (int i = 0; i < results.size(); i ++ ) {
      rgtb << tab(2) << "cout << \"a: \" << (int)" << results.at(i) << " << \" \\tg: \" << (int)"
          << results_gold.at(i) << " << endl;" << endl;
      rgtb << tab(2) << "assert(" << results.at(i) << "==" << results_gold.at(i) <<");" << endl;
    }

    rgtb << tab(1) << "}" << endl << endl;
  }
  concat(vectorized_streams, origin_streams);
  for (auto hw_stream: vectorized_streams) {
    rgtb << tab(1) << "assert(" << hw_stream << ".is_empty());" << endl;
  }

  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}

void generate_verilator_tb_in_streams(
    CodegenOptions& options,
    std::ostream& rgtb,
    prog& prg,
    umap* hw_sched,
    map<string, UBuffer>& buffers) {
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
  rgtb << tab(1) << "srand(" << options.debug_options.test_inputs.seed << ");" << endl;
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
      if (options.debug_options.test_inputs.tp == TEST_DATA_INPUT_STREAM_TYPE_RANDOM) {
        inds.push_back("rand() % 256");
        //inds.push_back("(i) % 256");
      } else {
        assert(options.debug_options.test_inputs.tp == TEST_DATA_INPUT_STREAM_TYPE_INCREMENTING);
        inds.push_back(str(unroll) + "*i + " + str(i));
      }
    }
    pack_bv(2, rgtb, "value", inds, lane_width);
    rgtb << tab(2) << in << ".write(value);" << endl;
    rgtb << tab(1) << "}" << endl << endl;
  }
}

void eval(CodegenOptions& options, ostream& rgtb, int indent) {
    rgtb << tab(indent) << "dut.eval();" << endl;
    if (options.debug_options.traceWave) {
        rgtb << tab(indent) << "dump_trace(tfp);" << endl;
    }
}

void generate_garnet_verilator_tb(
    CodegenOptions& options,
    prog& prg,
    umap* hw_sched,
    map<string, UBuffer>& buffers) {

  ofstream rgtb(prg.name + "_verilog_tb.cpp");
  rgtb << "#include \"hw_classes.h\"" << endl;
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"verilated.h\"" << endl;
  rgtb << "#include \"V" << prg.name << ".h\"" << endl << endl;

  //Add waveform trace dump options for debugging inverilator
  if (options.debug_options.traceWave) {
    rgtb << "#include \"verilated_vcd_c.h\"" << endl << endl;
    rgtb << "vluint64_t main_time = 0;" << endl;
    rgtb << "double sc_time_stamp() {" << endl;
    rgtb << tab(1) <<  "return main_time;" << endl;
    rgtb << "}" << endl << endl;

    rgtb << "void dump_trace(VerilatedVcdC* tfp) {" << endl;
    rgtb << tab(1) << "for (int i = 0; i < 5; i ++) {" << endl;
    rgtb << tab(2) << "tfp->dump(main_time);" << endl;
    rgtb << tab(2) << "main_time++;" << endl;
    rgtb << tab(1) << "}" << endl;
    rgtb << "}" << endl << endl;
  }

  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << "_verilog.txt\");" << endl;

  map<string, int> unroll_factor;
  for (auto in : prg.ins) {
    auto readers = find_readers(in, prg);
    int unroll = 0;
    for (auto reader : readers) {
      for (auto addr : reader->read_addrs(in)) {
        unroll++;
      }
    }
    unroll_factor[in] = unroll;
  }
  for (auto out : prg.outs) {
    auto readers = find_writers(out, prg);
    int unroll = 0;
    for (auto reader : readers) {
      for (auto addr : reader->write_addrs(out)) {
        unroll++;
      }
    }
    unroll_factor[out] = unroll;
  }


  generate_verilator_tb_in_streams(
      options,
      rgtb,
      prg,
      hw_sched,
      buffers);

  rgtb << tab(1) << "V" << prg.name << " dut;" << endl;
  if (options.debug_options.traceWave) {
    rgtb << tab(1) << "V"<< prg.name << "* dut_ptr = &dut;" << endl;
    rgtb << tab(1) << "Verilated::traceEverOn(true);" << endl;
    rgtb << tab(1) << "VerilatedVcdC* tfp = new VerilatedVcdC;" << endl;
    rgtb << tab(1) << "dut_ptr->trace(tfp, 99);" << endl;
    rgtb << tab(1) << "tfp->open(\"sim_wave.vcd\");" << endl << endl;
  }
  rgtb << tab(1) << "dut.clk = 0;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);

  rgtb << tab(1) << "dut.reset= 1;" << endl;
  eval(options, rgtb, 1);
  rgtb << tab(1) << "dut.clk = 1;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);

  //Add a posedge during  reset
  //rgtb << tab(1) << "dut.clk = 0;" << endl;
  ////rgtb << tab(1) << "dut.eval();" << endl;
  //eval(options, rgtb, 1);
  //rgtb << tab(1) << "dut.clk = 1;" << endl;
  ////rgtb << tab(1) << "dut.eval();" << endl;
  //eval(options, rgtb, 1);

  rgtb << tab(1) << "dut.reset= 0;" << endl;
  rgtb << tab(1) << "dut.clk = 0;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);
  for (auto out : inputs(buffers, prg)) {
    string data_name =
      out.first + "_" + out.second;
    rgtb << tab(1) << "*(dut." << data_name << ") = 0;" << endl;
  }

  for (auto out : outputs(buffers, prg)) {
    string ctrl_name =
      //out.first + "_" + out.second + "_en";
      out.first + "_" + out.second + "_valid";
    rgtb << tab(1) << "int " << ctrl_name << "_count = 0;" << endl;
  }

  rgtb << tab(1) << "dut.clk = 0;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);

  int max_time = to_int(lexmaxval(to_set(range(hw_sched)))) + 10;

  //change to the upper bound of hw schedule
  rgtb << tab(1) << "for (int t = 0; t < (int) " + str(max_time) + "; t++) {" << endl;

  //rgtb << tab(1) << "for (int t = 0; t < (int) pow(2, 16); t++) {" << endl;
  //rgtb << tab(1) << "for (int t = 0; t < 30000; t++) {" << endl;
  //rgtb << tab(1) << "for (int t = 0; t < 300; t++) {" << endl;

  rgtb << tab(2) << "cout << \"t = \" << t << endl;" << endl;
  for (auto out : inputs(buffers, prg)) {
    string ctrl_name =
      out.first + "_" + out.second + "_en";
    string data_name =
      "dut." + out.first + "_" + out.second;
    //rgtb << tab(2) << "if (!" << out.first << ".is_empty()) {" << endl;
    rgtb << tab(2) << "if (dut." << ctrl_name << ") {" << endl;
    rgtb << tab(3) << "cout << \"send me data!\" << endl;" << endl;
    rgtb << tab(3) << "*(" << data_name << ") = (int) " << out.first << ".read();" << endl;
    rgtb << tab(2) << "}" << endl;
  }

  rgtb << tab(1) << tab(1) << "dut.clk = 0;" << endl;
  //rgtb << tab(1) << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);

  for (auto out : outputs(buffers, prg)) {
    string ctrl_name =
      out.first + "_" + out.second + "_valid";
    string data_name =
      "dut." + out.first + "_" + out.second;
    rgtb << tab(1) << ctrl_name << "_count += dut." << ctrl_name << ";" << endl;
    rgtb << tab(1) << "if (dut." << ctrl_name << ") {" << endl;
    rgtb << tab(2) << "cout << (int) *(" << data_name << ") << endl;" << endl;
    rgtb << tab(2) << "cout << t << \"Get output val:\" << (int) *(" << data_name << ") << endl << endl;" << endl;
    rgtb << tab(2) << "hw_uint<16> val((int) *(" << data_name << "));" << endl;
    //rgtb << tab(2) << "fout << val << endl;" << endl;
    rgtb << tab(2) << out.first << ".write(val);" << endl;
    rgtb << tab(1) << "}" << endl;
  }

  rgtb << tab(1) << tab(1) << "dut.clk = 1;" << endl;
  //rgtb << tab(1) << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);
  rgtb << tab(1) << "}" << endl;

  for (auto out : outputs(buffers, prg)) {
    string ctrl_name =
      out.first + "_" + out.second + "_valid";
    rgtb << tab(2) << "cout << " << ctrl_name << "_count << endl;" << endl;
  }

  for (auto in : prg.ins) {
    rgtb << tab(1) << "cout << \"# of elements waiting in: " << in << " = \" << " << in << ".num_waiting() << endl;" << endl;
    rgtb << tab(1) << "assert(" << in << ".is_empty());" << endl;
  }

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
  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}

void generate_verilator_tb_reset_sequence(CodegenOptions& options, ostream& rgtb) {
  rgtb << tab(1) << "dut.clk = 0;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);
  rgtb << tab(1) << "dut.rst_n = 0;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);

  rgtb << tab(1) << "dut.rst_n = 1;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);

  rgtb << tab(1) << "dut.clk = 0;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);

  rgtb << tab(1) << "dut.flush = 1;" << endl;
  rgtb << tab(1) << "dut.clk = 1;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);

  rgtb << tab(1) << "dut.flush = 0;" << endl;
  rgtb << tab(1) << "dut.clk = 0;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);

}

void generate_verilator_tb(
    CodegenOptions& options,
    prog& prg,
    umap* hw_sched,
    map<string, UBuffer>& buffers) {

  ofstream rgtb(prg.name + "_verilog_tb.cpp");
  rgtb << "#include \"hw_classes.h\"" << endl;
  rgtb << "#include <fstream>" << endl;
  rgtb << "#include \"verilated.h\"" << endl;
  rgtb << "#include \"V" << prg.name << ".h\"" << endl << endl;

  //Add waveform trace dump options for debugging inverilator
  if (options.debug_options.traceWave) {
    rgtb << "#include \"verilated_vcd_c.h\"" << endl << endl;
    rgtb << "vluint64_t main_time = 0;" << endl;
    rgtb << "double sc_time_stamp() {" << endl;
    rgtb << tab(1) <<  "return main_time;" << endl;
    rgtb << "}" << endl << endl;

    rgtb << "void dump_trace(VerilatedVcdC* tfp) {" << endl;
    rgtb << tab(1) << "for (int i = 0; i < 5; i ++) {" << endl;
    rgtb << tab(2) << "tfp->dump(main_time);" << endl;
    rgtb << tab(2) << "main_time++;" << endl;
    rgtb << tab(1) << "}" << endl;
    rgtb << "}" << endl << endl;
  }


  rgtb << "int main() {" << endl;
  rgtb << tab(1) << "ofstream fout(\"" << "regression_result_" << prg.name << "_verilog.txt\");" << endl;

  map<string, int> unroll_factor;
  for (auto in : prg.ins) {
    auto readers = find_readers(in, prg);
    int unroll = 0;
    for (auto reader : readers) {
      for (auto addr : reader->read_addrs(in)) {
        unroll++;
      }
    }
    unroll_factor[in] = unroll;
  }
  for (auto out : prg.outs) {
    auto readers = find_writers(out, prg);
    int unroll = 0;
    for (auto reader : readers) {
      for (auto addr : reader->write_addrs(out)) {
        unroll++;
      }
    }
    unroll_factor[out] = unroll;
  }

  generate_verilator_tb_in_streams(
      options,
      rgtb,
      prg,
      hw_sched,
      buffers);

  rgtb << tab(1) << "V" << prg.name << " dut;" << endl;

  if (options.debug_options.traceWave) {
    rgtb << tab(1) << "V"<< prg.name << "* dut_ptr = &dut;" << endl;
    rgtb << tab(1) << "Verilated::traceEverOn(true);" << endl;
    rgtb << tab(1) << "VerilatedVcdC* tfp = new VerilatedVcdC;" << endl;
    rgtb << tab(1) << "dut_ptr->trace(tfp, 99);" << endl;
    rgtb << tab(1) << "tfp->open(\"sim_wave.vcd\");" << endl << endl;
  }

  generate_verilator_tb_reset_sequence(options, rgtb);

  for (auto out : inputs(buffers, prg)) {
    string data_name =
      out.first + "_" + out.second;
    rgtb << tab(1) << "*(dut." << data_name << ") = 0;" << endl;
  }

  for (auto out : outputs(buffers, prg)) {
    string ctrl_name =
      //out.first + "_" + out.second + "_en";
      out.first + "_" + out.second + "_valid";
    rgtb << tab(1) << "int " << ctrl_name << "_count = 0;" << endl;
  }

  rgtb << tab(1) << "dut.clk = 0;" << endl;
  //rgtb << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 1);
  rgtb << tab(1) << "for (int t = 0; t < (int) pow(2, 16); t++) {" << endl;

  rgtb << tab(2) << "cout << \"t = \" << t << endl;" << endl;
  for (auto out : inputs(buffers, prg)) {
    string ctrl_name =
      out.first + "_" + out.second + "_en";
    string data_name =
      "dut." + out.first + "_" + out.second;
    rgtb << tab(2) << "if (dut." << ctrl_name << ") {" << endl;
    rgtb << tab(3) << "cout << \"send me data!\" << endl;" << endl;
    rgtb << tab(3) << "*(" << data_name << ") = (int) " << out.first << ".read();" << endl;
    rgtb << tab(2) << "}" << endl;
  }

  for (auto out : outputs(buffers, prg)) {
    string ctrl_name =
      out.first + "_" + out.second + "_valid";
    string data_name =
      "dut." + out.first + "_" + out.second;
    rgtb << tab(1) << ctrl_name << "_count += dut." << ctrl_name << ";" << endl;
    rgtb << tab(1) << "if (dut." << ctrl_name << ") {" << endl;
    rgtb << tab(2) << "cout << \"Got data: \" << (int) *(" << data_name << ") << endl;" << endl;
    //rgtb << tab(2) << "fout << t << \",\" << \"" << data_name << "\" << \",\" << (int) *(" << data_name << ") << endl;" << endl;
    rgtb << tab(2) << "hw_uint<16> val((int) *(" << data_name << "));" << endl;
    //rgtb << tab(2) << "fout << val << endl;" << endl;
    rgtb << tab(2) << out.first << ".write(val);" << endl;
    rgtb << tab(1) << "}" << endl;
  }

  rgtb << tab(1) << tab(1) << "dut.clk = 0;" << endl;
  //rgtb << tab(1) << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 2);
  rgtb << tab(1) << tab(1) << "dut.clk = 1;" << endl;
  //rgtb << tab(1) << tab(1) << "dut.eval();" << endl;
  eval(options, rgtb, 2);
  rgtb << tab(1) << "}" << endl;

  for (auto out : outputs(buffers, prg)) {
    string ctrl_name =
      out.first + "_" + out.second + "_valid";
    rgtb << tab(2) << "cout << " << ctrl_name << "_count << endl;" << endl;
  }

  for (auto in : prg.ins) {
    rgtb << tab(1) << "cout << \"# of elements waiting in: " << in << " = \" << " << in << ".num_waiting() << endl;" << endl;
    rgtb << tab(1) << "assert(" << in << ".is_empty());" << endl;
  }

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
  rgtb << tab(1) << "return 0;" << endl;
  rgtb << "}" << endl;
  rgtb.close();
}


void generate_verilog_instance(CodegenOptions& options,
    std::ostream& out,
    UBuffer& buf) {
  vector<string> bundle_fields{".clk(clk)", ".rst_n(rst_n)"};
  //for (auto eb : buf.port_bundles) {
    //bundle_fields.push_back(string(".") + eb.first + parens(us(eb)));
  //}
  out << tab(1) << buf.name << " " << buf.name << "(" << comma_list(bundle_fields) << ");" << endl;
}

void generate_verilog(CodegenOptions& options,
    std::ostream& out,
    UBuffer& buf) {
  vector<string> bundle_fields{"input clk", "input rst_n"};
  for (auto eb : buf.port_bundles) {
    string out_rep = buf.name;
    string out_bundle = eb.first;

    int w = buf.port_bundle_width(out_bundle);
    string out_bundle_tp =
      (buf.is_output_bundle(out_bundle) ? "output" : "input");
    bundle_fields.push_back(out_bundle_tp + " [" + str(w - 1) + ":0] " + out_bundle);
  }
  out << "module " << buf.name << "(" << comma_list(bundle_fields) << ");" << endl;
  for (auto bnk : buf.get_banks()) {
    out << tab(1) << "// " << bnk.name << endl;
  }
  out << endl;

  for (auto pt : buf.get_all_ports()) {
    out << tab(1) << "// " << pt << endl;
  }
  out << "endmodule" << endl << endl;
}

void generate_verilog_instance(CodegenOptions& options,
    ostream& out,
    op* op,
    map<string, UBuffer>& buffers,
    prog& prg) {
  vector<string> op_fields{".clk(clk)", ".rst_n(rst_n)"};

  for (auto ib : incoming_bundles(op, buffers, prg)) {
    if (!prg.is_boundary(ib.first)) {
      op_fields.push_back("." + us(ib) + parens(dot(ib)));
    } else {
      op_fields.push_back("." + us(ib) + parens(us(ib)));
    }
  }

  for (auto ib : outgoing_bundles(op, buffers, prg)) {
    if (!prg.is_boundary(ib.first)) {
      op_fields.push_back("." + us(ib) + parens(dot(ib)));
    } else {
      op_fields.push_back("." + us(ib) + parens(us(ib)));
    }
  }
  out << tab(1) << op->name << " " << op->name << "(" << comma_list(op_fields) << ");" << endl;
}

void generate_verilog(CodegenOptions& options,
    ostream& out,
    op* op,
    map<string, UBuffer>& buffers,
    prog& prg) {
  vector<string> op_fields{"input clk", "input rst_n"};

  for (auto ib : incoming_bundles(op, buffers, prg)) {
    string out_rep = ib.first;
    string out_bundle = ib.second;

    UBuffer out_buf = map_find(out_rep, buffers);
    int w = out_buf.port_bundle_width(out_bundle);
    string out_bundle_tp =
      (out_buf.is_output_bundle(out_bundle) ? "input" : "output");
    op_fields.push_back(out_bundle_tp + " [" + str(w - 1) + ":0] " + us(ib));
  }

  for (auto ib : outgoing_bundles(op, buffers, prg)) {
    string out_rep = ib.first;
    string out_bundle = ib.second;

    UBuffer out_buf = map_find(out_rep, buffers);
    int w = out_buf.port_bundle_width(out_bundle);
    string out_bundle_tp =
      (out_buf.is_output_bundle(out_bundle) ? "input" : "output");
    op_fields.push_back(out_bundle_tp + " [" + str(w - 1) + ":0] " + us(ib));
  }
  out << "module " << op->name << "(" << comma_list(op_fields) << ");" << endl;
  vector<string> ins;
  for (auto ib : incoming_bundles(op, buffers, prg)) {
    string out_rep = ib.first;
    string out_bundle = ib.second;

    UBuffer out_buf = map_find(out_rep, buffers);
    int w = out_buf.port_bundle_width(out_bundle);
    int lanes = out_buf.lanes_in_bundle(out_bundle);
    out << tab(1) << "// " << lanes << endl;
    ins.push_back(us(ib));
  }
  if (ins.size() == 0) {
    ins.push_back("0");
  }
  for (auto eb : outgoing_bundles(op, buffers, prg)) {
    out << tab(1) << "assign " << us(eb) << " = "
      << sep_list(ins, "(", ")", " + ") << ";" << endl;
  }
  out << "endmodule" << endl << endl;
}

void generate_verilog(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap) {
  ofstream out(prg.name + ".v");

  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      generate_verilog(options, out, b.second);
    }
  }
  out << endl;

  for (auto op : prg.all_ops()) {
    generate_verilog(options, out, op, buffers, prg);
  }
  out << endl;

  vector<string> edge_values{"input clk", "input rst_n"};
  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);
    int w = out_buf.port_bundle_width(out_bundle);
    string out_bundle_tp =
      (out_buf.is_output_bundle(out_bundle) ? "input" : "output");
    edge_values.push_back(out_bundle_tp + " [" + str(w - 1) + ":0] " + us(out_rep, out_bundle));
  }
  out << "module " << prg.name << "(" << comma_list(edge_values) << ");" << endl << endl;
  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      generate_verilog_instance(options, out, b.second);
      out << endl;
    }
  }
  out << endl;

  for (auto op : prg.all_ops()) {
    generate_verilog_instance(options, out, op, buffers, prg);
    out << endl;
  }
  out << endl;

  out << "endmodule" << endl;
  out.close();
}

void generate_deepak_power_flow_rtl_tb(
    CodegenOptions& options,
    prog& prg,
    umap* hw_sched,
    map<string, UBuffer>& buffers) {
  ofstream rgtb(prg.name + "_deepak_power_flow_tb.sv");
  rgtb << "`define ASSIGNMENT_DELAY 0.1" << endl;
  rgtb << "`define CONFIG_TIME 4096" << endl;
  rgtb << "`define CLK_PERIOD 10" << endl;
  rgtb << "`define RUN_TIME 10000" << endl;

  //rgtb << "`timescale 1ns / 1ps" << endl;
  rgtb << endl;
  rgtb << "module " << "TB;" << endl;

  rgtb << tab(1) << "logic clk;" << endl;
  rgtb << tab(1) << "logic rst;" << endl;
  rgtb << tab(1) << "logic flush;" << endl;

  rgtb << endl << endl;

  rgtb << tab(1) << "always #(`CLK_PERIOD/2) clk = ~clk;" << endl << endl;

  rgtb << "initial begin" << endl;
  rgtb << "        rst = 1'b1;" << endl;
  rgtb << "        flush = 1'b0;" << endl;
  rgtb <<"        #`CLK_PERIOD" << endl;
  rgtb << "        #`CLK_PERIOD" << endl;
  rgtb << "        rst = 1'b0;" << endl;
  rgtb << tab(1) << "end" << endl << endl;

  rgtb << "    initial begin" << endl;
  rgtb << "      clk <= 0;" << endl;
  rgtb << "    end" << endl << endl;

  rgtb << "    initial begin" << endl;
  rgtb << "      $vcdplusfile(\"dump.vpd\");" << endl;
  rgtb << "      $vcdplusmemon();" << endl;
  rgtb << "      $vcdpluson(0, TB);" << endl;
  rgtb << "      $set_toggle_region(TB);" << endl;
  rgtb << "      #(`CONFIG_TIME);" << endl;
  rgtb << "      $toggle_start();" << endl;
  rgtb << "      #(`RUN_TIME);" << endl;
  rgtb << "      $toggle_stop();" << endl;
  rgtb << "      $toggle_report(\"run.saif\", 1e-9, TB);" << endl;
  rgtb << "      $finish(2);" << endl;
  rgtb << "    end" << endl << endl;

  vector<string> port_decls{".clk(clk)", ".flush(flush)", ".rst_n(rst)"};

  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      string en_name =
        pg(out_rep, out_bundle) + "_en";
      string data_name =
        pg(out_rep, out_bundle);

      rgtb << tab(1) << "logic " << en_name << ";" << endl;
      port_decls.push_back("." + en_name + "(" + en_name + ")");

      int pix_w = pixel_width;
      rgtb << tab(1) << "logic [" << pixel_width - 1 << ":0] " << data_name << " [" << pix_per_burst - 1 << " :0];" << endl;
      port_decls.push_back("." + data_name + "(" + data_name + ")");
      //rgtb << tab(1) << "logic [" << pixel_width - 1 << ":0] " << data_name << "_in" << ";" << endl;

    } else {
      string en_name =
        pg(out_rep, out_bundle) + "_valid";
      string data_name =
        pg(out_rep, out_bundle);

      rgtb << tab(1) << "logic " << en_name << ";" << endl;
      port_decls.push_back("." + en_name + "(" + en_name + ")");

      int pix_w = pixel_width;
      rgtb << tab(1) << "logic [" << pixel_width - 1 << ":0] " << data_name << " [" << pix_per_burst - 1 << " :0];" << endl;

      port_decls.push_back("." + data_name + "(" + data_name + ")");
    }
  }

  rgtb << tab(1) << prg.name << " dut(\n\t\t" << sep_list(port_decls, "\n\t\t", "\n\t\t", ",\n\t\t") << ");" << endl;

  //rgtb << tab(1) << "initial begin" << endl;
  //rgtb << "clk = 0;" << endl;
  //rgtb << "rst = 0;" << endl;
  //rgtb << "flush = 0;" << endl;
  //for (auto eb : edge_buffers(buffers, prg)) {
  //string out_rep = eb.first;
  //string out_bundle = eb.second;

  //UBuffer out_buf = map_find(out_rep, buffers);

  //int pixel_width = out_buf.port_widths;
  //int pix_per_burst =
  //out_buf.lanes_in_bundle(out_bundle);

  //if (prg.is_input(out_rep)) {
  //string en_name =
  //pg(out_rep, out_bundle) + "_en";
  //string data_name =
  //pg(out_rep, out_bundle);

  //rgtb << tab(3) << data_name << "[0] = 0;" << endl;

  //} else {
  //}
  //}
  //rgtb << tab(1) << "end" << endl;
  //rgtb << tab(1) << "always #5 clk = ~clk;" << endl;

  //rgtb << "initial begin" << endl;
  //rgtb << "#2;" << endl;
  //rgtb << "rst = 1;" << endl;
  //rgtb << "flush = 1;" << endl;
  //rgtb << "#10;" << endl;
  //rgtb << "flush = 0;" << endl;

  //rgtb << "end" << endl;

  rgtb << endl << endl;

  //rgtb << tab(1) << "always @(posedge clk) begin" << endl;
  rgtb << tab(1) << "always @(negedge clk) begin" << endl;
  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      string en_name =
        pg(out_rep, out_bundle) + "_en";
      string data_name =
        pg(out_rep, out_bundle);
      string data_in_name = data_name;
      //inputs0[15:0] <= #`ASSIGNMENT_DELAY $urandom;

      rgtb << tab(3) << data_in_name << "[0] <= #`ASSIGNMENT_DELAY $urandom;" << endl;
      //rgtb << tab(2) << "if (" << en_name << ") begin" << endl;
      //rgtb << tab(3) << data_in_name << "[0] <= " << data_in_name << "[0] + 1;" << endl;
      //rgtb << tab(2) << "end" << endl;

    } else {
      //string en_name =
      //pg(out_rep, out_bundle) + "_valid";
      //string data_name =
      //pg(out_rep, out_bundle);
      //rgtb << tab(2) << "if (" << en_name << ") begin" << endl;
      //rgtb << tab(3) << "$display(\"Got data %d from dut." << en_name << "\", " << data_name << "[0]" << ");" << endl;
      //rgtb << tab(2) << "end" << endl;
    }
  }

  rgtb << tab(1) << "end" << endl;

  rgtb << "endmodule";
  rgtb.close();

}

void generate_vivado_rtl_tb(
    CodegenOptions& options,
    prog& prg,
    umap* hw_sched,
    map<string, UBuffer>& buffers) {
  ofstream rgtb(prg.name + "_vivado_verilog_tb.sv");

  rgtb << "`timescale 1ns / 1ps" << endl;
  rgtb << "module " << prg.name << "_tb;" << endl;

  rgtb << tab(1) << "logic clk;" << endl;
  rgtb << tab(1) << "logic rst;" << endl;
  rgtb << tab(1) << "logic flush;" << endl;

  rgtb << endl << endl;
  vector<string> port_decls{".clk(clk)", ".flush(flush)", ".rst_n(rst)"};

  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      string en_name =
        pg(out_rep, out_bundle) + "_en";
      string data_name =
        pg(out_rep, out_bundle);

      rgtb << tab(1) << "logic " << en_name << ";" << endl;
      port_decls.push_back("." + en_name + "(" + en_name + ")");

      int pix_w = pixel_width;
      rgtb << tab(1) << "logic [" << pixel_width - 1 << ":0] " << data_name << " [" << pix_per_burst - 1 << " :0];" << endl;
      port_decls.push_back("." + data_name + "(" + data_name + ")");
      //rgtb << tab(1) << "logic [" << pixel_width - 1 << ":0] " << data_name << "_in" << ";" << endl;

    } else {
      string en_name =
        pg(out_rep, out_bundle) + "_valid";
      string data_name =
        pg(out_rep, out_bundle);

      rgtb << tab(1) << "logic " << en_name << ";" << endl;
      port_decls.push_back("." + en_name + "(" + en_name + ")");

      int pix_w = pixel_width;
      rgtb << tab(1) << "logic [" << pixel_width - 1 << ":0] " << data_name << " [" << pix_per_burst - 1 << " :0];" << endl;

      port_decls.push_back("." + data_name + "(" + data_name + ")");
    }
  }

  rgtb << prg.name << " dut(\n\t" << sep_list(port_decls, "\n\t", "\n\t", ",\n\t") << ");" << endl;

  rgtb << tab(1) << "initial begin" << endl;
  rgtb << "clk = 0;" << endl;
  rgtb << "rst = 0;" << endl;
  rgtb << "flush = 0;" << endl;
  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      string en_name =
        pg(out_rep, out_bundle) + "_en";
      string data_name =
        pg(out_rep, out_bundle);

      rgtb << tab(3) << data_name << "[0] = 0;" << endl;

    } else {
    }
  }
  rgtb << tab(1) << "end" << endl;
  rgtb << tab(1) << "always #5 clk = ~clk;" << endl;

  rgtb << "initial begin" << endl;
  rgtb << "#2;" << endl;
  rgtb << "rst = 1;" << endl;
  rgtb << "flush = 1;" << endl;
  rgtb << "#10;" << endl;
  rgtb << "flush = 0;" << endl;

  rgtb << "end" << endl;

  rgtb << endl << endl;

  //rgtb << tab(1) << "always @(posedge clk) begin" << endl;
  rgtb << tab(1) << "always @(negedge clk) begin" << endl;
  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);

    int pixel_width = out_buf.port_widths;
    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);

    if (prg.is_input(out_rep)) {
      string en_name =
        pg(out_rep, out_bundle) + "_en";
      string data_name =
        pg(out_rep, out_bundle);
      string data_in_name = data_name;

      rgtb << tab(2) << "if (" << en_name << ") begin" << endl;
      rgtb << tab(3) << data_in_name << "[0] <= " << data_in_name << "[0] + 1;" << endl;
      rgtb << tab(2) << "end" << endl;

    } else {
      string en_name =
        pg(out_rep, out_bundle) + "_valid";
      string data_name =
        pg(out_rep, out_bundle);

      rgtb << tab(2) << "if (" << en_name << ") begin" << endl;
      rgtb << tab(3) << "$display(\"Got data %d from dut." << en_name << "\", " << data_name << "[0]" << ");" << endl;
      rgtb << tab(2) << "end" << endl;
    }
  }

  rgtb << tab(1) << "end" << endl;

  rgtb << "endmodule";
  rgtb.close();

}
