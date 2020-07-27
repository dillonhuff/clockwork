#include "prog.h"

#include "codegen.h"
#include "app.h"
#include "rdai_collateral.h"

std::string us(const std::string& a, const std::string& b) {
  return a + "_" + b;
}

std::string us(const pair<std::string, std::string>& a) {
  return us(a.first, a.second);
}

std::string dot(const pair<std::string, std::string>& a) {
  return a.first + "." + a.second;
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

std::string vanilla_c_pixel_type_string(const int w) {
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

void sw_test_headers(ostream& out, prog& prg) {
  out << "#include <algorithm>" << endl;
  out << "#include <fstream>" << endl;
  out << "#include <vector>" << endl;
  out << "#include \"" << prg.name << ".h\"" << endl;
  out << "#include \"bitmap_image.hpp\"" << endl;
  out << "#include <cstdlib>" << endl << endl;
}

void ocl_headers(ostream& out) {
  out << "#include \"xcl2.hpp\"" << endl;
  out << "#include <algorithm>" << endl;
  out << "#include <fstream>" << endl;
  out << "#include <vector>" << endl;
  out << "#include <cstdlib>" << endl << endl;
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
    conv_out << tab(indent) << "hw_uint<" << lane_width << "> " << ln << ";" << endl;
    conv_out << tab(indent)
      << "set_at<0, " << lane_width << ", " << lane_width << ">(" << ln << ", " << value << ".extract<" << base << ", " << end << ">());" << endl;

    lanes.push_back(ln);
  }

  return lanes;
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
    assert(buf.get_out_bundles().size() == 1);

    auto bundle = pick(buf.get_out_bundles());
    edges.insert(bundle);
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
    assert(buf.get_out_bundles().size() == 1);

    auto bundle = pick(buf.get_out_bundles());
    edges.insert(bundle);
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

  out << "unsigned long start, end, nsduration;" << endl;
  out << "cl::Event event;" << endl << endl;

  out << tab(1) << "std::cout << \"Starting kernel\" << std::endl;" << endl;
  out << tab(1) << "OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add, NULL, &event));" << endl;
  out << tab(1) << "OCL_CHECK(err, err = event.wait());" << endl;
  out << tab(1) << "end =" << endl;
  out << "OCL_CHECK(err, event.getProfilingInfo<CL_PROFILING_COMMAND_END>(&err));" << endl;
  out << "start = OCL_CHECK(err," << endl;
  out << "event.getProfilingInfo<CL_PROFILING_COMMAND_START>(&err));" << endl;
  out << "nsduration = end - start;" << endl;

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
  out << tab(1) << "for (int i = 0; i < " << edge_bundle << "_DATA_SIZE; i++) {" << endl;
  out << tab(2) << tp << " val = (rand() % 256);" << endl;
  out << tab(2) << "input_" << edge_bundle << " << val << std::endl;" << endl;
  out << tab(2) << "((" << tp << "*) (" << edge_bundle << ".data()))[i] = val;" << endl;
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

  auto in_rep = pick(inputs(buffers, prg));
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
  assert(in_cols % lanes == 0);

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

  //}

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
  for (auto eb : edge_buffers(buffers, prg)) {
    string edge_bundle = eb.second;
    string buf = eb.first;

    out << tab(1) << "const int " << edge_bundle << "_DATA_SIZE = num_epochs*" << max_buf_size << ";" << endl;
    out << tab(1) << "const int " << edge_bundle << "_BYTES_PER_PIXEL = " << map_find(buf, buffers).bundle_lane_width(edge_bundle) << " / 8;" << endl;
    out << tab(1) << "size_t " << edge_bundle << "_size_bytes = " << edge_bundle << "_BYTES_PER_PIXEL * " << edge_bundle << "_DATA_SIZE;" << endl << endl;
    out << tab(1) << "total_size_bytes += " << edge_bundle << "_size_bytes;" << endl;
  }
  out << endl;

  ocl_command_queue(out);

  for (auto edge_bundle : edge_bundles(buffers, prg)) {
    out << tab(1) << "std::vector<uint8_t, aligned_allocator<uint8_t> > " << edge_bundle << "(" << edge_bundle << "_size_bytes);" << endl;
  }
  out << endl;

  for (auto edge_in : inputs(buffers, prg)) {
    populate_input(out, edge_in.second, vanilla_c_pixel_type_string(edge_in.first, buffers));
  }

  for (auto edge_out : outputs(buffers, prg)) {
    auto edge_bundle = edge_out.second;
    auto buf = edge_out.first;
    out << tab(1) << "for (int i = 0; i < " << edge_bundle << "_DATA_SIZE; i++) {" << endl;
    out << tab(2) << "((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << edge_bundle << ".data()))[i] = 0;" << endl;
    out << tab(1) << "}" << endl << endl;
  }

  ocl_program_device(out, prg, "_kernel");

  int arg_pos = 0;
  for (auto in_bundle : out_bundles(buffers, prg)) {
    out << tab(1) << "OCL_CHECK(err, cl::Buffer " << in_bundle << "_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, " << in_bundle << "_size_bytes, " << in_bundle << ".data(), &err));" << endl;
    out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << in_bundle << "_ocl_buf));" << endl << endl;
    arg_pos++;
  }

  for (auto in_bundle : in_bundles(buffers, prg)) {
    out << tab(1) << "OCL_CHECK(err, cl::Buffer " << in_bundle << "_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, " << in_bundle << "_size_bytes, " << in_bundle << ".data(), &err));" << endl;

    out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << in_bundle << "_ocl_buf));" << endl << endl;
    arg_pos++;
  }

  out << tab(1) << "uint64_t transfer_size = num_epochs*(" << max_buf_size << " / " << unroll_factor << ");" << endl;
  out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << "transfer_size));" << endl << endl;

  run_kernel(options, out, buffers, prg);


  for (auto output : outputs(buffers, prg)) {
    auto buf = output.first;
    auto out_bundle = output.second;
    out << tab(1) << "std::ofstream regression_result(\"" << out_bundle << "_accel_result.csv\");" << endl;
    out << tab(1) << "for (int i = 0; i < " << out_bundle << "_DATA_SIZE; i++) {" << endl;
    out << tab(2) << "regression_result << ((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << out_bundle << ".data()))[i] << std::endl;" << endl;
    out << tab(1) << "}" << endl;
  }
  /*for (auto out_bundle: out_bundles(buffers, prg)) {*/
    //out << tab(1) << "std::ofstream regression_result(\"" << out_bundle << "_accel_result.csv\");" << endl;
    //out << tab(1) << "for (int i = 0; i < " << out_bundle << "_DATA_SIZE; i++) {" << endl;
    //out << tab(2) << "regression_result << ((uint16_t*) (" << out_bundle << ".data()))[i] << std::endl;;" << endl;
    //out << tab(1) << "}" << endl;
  /*}*/
  out << endl;


  out << tab(1) << "return 0;" << endl;
  out << "}" << endl;

  out.close();
}

void generate_xilinx_accel_host(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg) {

  ofstream out(prg.name + "_host.cpp");

  ocl_headers(out);

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
  //for (auto edge_in : inputs(buffers, prg)) {
    //populate_input(out, edge_in.second, vanilla_c_pixel_type_string(edge_in.first, buffers));
  //}

  //for (auto edge_out : outputs(buffers, prg)) {
    //auto edge_bundle = edge_out.second;
    //auto buf = edge_out.first;
    //out << tab(1) << "for (int i = 0; i < " << edge_bundle << "_DATA_SIZE; i++) {" << endl;
    //out << tab(2) << "((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << edge_bundle << ".data()))[i] = 0;" << endl;
    //out << tab(1) << "}" << endl << endl;
  //}

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

//void generate_xilinx_multi_channel_accel_wrapper(
    //CodegenOptions& options,
    //std::ostream& out,
    //map<string, UBuffer>& buffers,
    //prog& prg) {

  //cout << "Generating accel wrapper" << endl;
  //string driver_func = prg.name + "_accel";

  //for (auto eb : edge_buffers(buffers, prg)) {
    //string out_rep = eb.first;
    //string out_bundle = eb.second;

    //UBuffer out_buf = map_find(out_rep, buffers);
    //string out_bundle_tp = out_buf.bundle_type_string(out_bundle);

    //generate_collector(options, out, out_buf, eb.second, prg);
    //generate_distributor(options, out, out_buf, eb.second, prg);

    //int num_pixels = -1;
    //if (prg.is_input(out_rep)) {

      //auto cmap = prg.consumer_map(out_rep);
      //out << tab(1) << "// " << str(cmap) << endl;
      //auto range_card = card(range(cmap));
      //num_pixels = int_upper_bound(range_card);
    //} else {
      //auto cmap = prg.producer_map(out_rep);
      //out << tab(1) << "// " << str(cmap) << endl;
      //auto range_card = card(range(cmap));
      //num_pixels = int_upper_bound(range_card);
    //}

    //assert(num_pixels >= 0);
    //// TODO: Unify prg and app size computation syntax
    //if (num_pixels < prg.buffer_size(out_rep)) {
      //num_pixels = prg.buffer_size(out_rep);
    //}

    //int pix_per_burst =
      //out_buf.lanes_in_bundle(out_bundle);
    //int num_in_bursts = num_pixels / pix_per_burst;

    //out << "const int " << out_bundle << "_num_transfers = " << num_in_bursts << ";" << endl;
  //}
  //out << endl;

  //string in_rep = pick(prg.ins);
  //UBuffer& in_buf = buffers.at(in_rep);
  //string in_bundle = pick(in_buf.port_bundles).first;
  //string in_bundle_tp = in_buf.bundle_type_string(in_bundle);

  //cout << "Got in bundle" << endl;

  //string out_rep = pick(prg.outs);
  //UBuffer& out_buf = buffers.at(out_rep);
  //string out_bundle = pick(out_buf.port_bundles).first;
  //string out_bundle_tp = out_buf.bundle_type_string(out_bundle);

  //int in_pix = prg.buffer_size(in_rep);
  //int pix_per_in_burst =
    //in_buf.lanes_in_bundle(in_bundle);
  //int in_burst = in_pix / pix_per_in_burst;

  //int out_pix = prg.buffer_size(out_rep);
  //int pix_per_out_burst =
    //out_buf.lanes_in_bundle(out_bundle);
  //int out_burst = out_pix / pix_per_out_burst;

  //out << endl;
  //out << "extern \"C\" {" << endl << endl;

  //for (auto in_bundle : in_bundles(buffers, prg)) {

    //out << "static void read_" << in_bundle << "(" << in_bundle_tp << "* input, HWStream<" << in_bundle_tp << " >& v, const int size) {" << endl;

    //out << tab(1) << in_bundle_tp << " burst_reg;" << endl;
    //if (options.num_input_epochs < 0) {
      //out << tab(1) << "int num_transfers = " << in_bundle << "_num_transfers" << "*size;" << endl;
    //} else {
      //out << tab(1) << "int num_transfers = " << in_bundle << "_num_transfers" << "*" << options.num_input_epochs << ";" << endl;
    //}

    //out << tab(1) << "for (int i = 0; i < num_transfers; i++) {" << endl;
    //out << tab(2) << "#pragma HLS pipeline II=1" << endl;
    //out << tab(2) << "burst_reg = input[i];" << endl;
    //out << tab(2) << "v.write(burst_reg);" << endl;
    //out << tab(1) << "}" << endl;
    //out << "}" << endl << endl;
  //}

  //for (auto out_bundle : out_bundles(buffers, prg)) {
    //out << "static void write_" << out_bundle << "(" << out_bundle_tp << "* output, HWStream<" << out_bundle_tp << " >& v, const int size) {" << endl;
    //out << tab(1) << out_bundle_tp << " burst_reg;" << endl;
    //if (options.num_input_epochs < 0) {
      //out << tab(1) << "int num_transfers = " << out_bundle << "_num_transfers" << "*size;" << endl;
    //} else {
      //out << tab(1) << "int num_transfers = " << out_bundle << "_num_transfers" << "*" << options.num_input_epochs << ";" << endl;
    //}

    //out << tab(1) << "for (int i = 0; i < num_transfers; i++) {" << endl;
    //out << tab(2) << "#pragma HLS pipeline II=1" << endl;
    //out << tab(2) << "burst_reg = v.read();" << endl;
    //out << tab(2) << "output[i] = burst_reg;" << endl;
    //out << tab(1) << "}" << endl;
    //out << "}" << endl << endl;
  //}

  //cout << "Generating arg list" << endl;
  //vector<string> ptr_args;
  //vector<string> ptr_arg_decls;
  //vector<string> buffer_args;
  //for (auto in : prg.ins) {
    //assert(contains_key(in, buffers));
    //auto& buf = buffers.at(in);
    //assert(buf.get_out_bundles().size() == 1);

    //cout << "picking from bundle" << endl;
    //auto bundle = pick(buf.get_out_bundles());
    //cout << "bundle: " << bundle << endl;

    //string out_bundle_tp = buf.bundle_type_string(bundle);
    //ptr_arg_decls.push_back(out_bundle_tp + "* " + bundle);
    //ptr_args.push_back(bundle);
    //buffer_args.push_back(bundle + "_channel");
  //}

  //for (auto out : prg.outs) {
    //assert(contains_key(out, buffers));
    //auto& buf = buffers.at(out);
    //for (auto bundle : buf.get_in_bundles()) {
      ////auto bundle = pick(buf.get_in_bundles());
      //string in_bundle_tp = buf.bundle_type_string(bundle);

      //ptr_arg_decls.push_back(in_bundle_tp + "* " + bundle);
      //ptr_args.push_back(bundle);
      //buffer_args.push_back(bundle + "_channel");
    //}
  //}

  //vector<string> all_arg_decls = ptr_arg_decls;
  //all_arg_decls.push_back("const int size");

  //cout << "Generating driver function" << endl;

  //out << "void " << driver_func << "(" << comma_list(all_arg_decls) << ") { " << endl;
  //out << "#pragma HLS dataflow" << endl;

  //int bank_no = 0;
  //for (auto pt : ptr_args) {
    //out << "#pragma HLS INTERFACE m_axi port = " << pt << " offset = slave depth = 65536 bundle = gmem" << bank_no << endl;
    //if (bank_no < 3) {
      //bank_no++;
    //}
  //}
  //out << endl;
  //for (auto pt : ptr_args) {
    //out << "#pragma HLS INTERFACE s_axilite port = " << pt << " bundle = control" << endl;
  //}
  //out << "#pragma HLS INTERFACE s_axilite port = size bundle = control" << endl;
  //out << "#pragma HLS INTERFACE s_axilite port = return bundle = control" << endl;
  //out << endl;

  //for (auto in : prg.ins) {
    //assert(contains_key(in, buffers));
    //auto& buf = buffers.at(in);
    ////assert(buf.get_in_bundles().size() == 1);
    //auto bundle = pick(buf.get_out_bundles());
    //string in_bundle_tp = buf.bundle_type_string(bundle);

    //out << tab(1) << "static HWStream<" << in_bundle_tp << " > " << bundle << "_channel;" << endl;
  //}

  //for (auto in : prg.outs) {
    //assert(contains_key(in, buffers));
    //auto& buf = buffers.at(in);
    ////assert(buf.get_in_bundles().size() == 1);
    //auto bundle = pick(buf.get_in_bundles());
    //string in_bundle_tp = buf.bundle_type_string(bundle);

    //out << tab(1) << "static HWStream<" << in_bundle_tp << " > " << bundle << "_channel;" << endl;
  //}

  //out << endl;

  //for (auto in : prg.ins) {
    //assert(contains_key(in, buffers));
    //auto& buf = buffers.at(in);
    //assert(buf.get_out_bundles().size() == 1);
    //auto bundle = pick(buf.get_out_bundles());

    ////out << tab(1) << "read_input(" << bundle << ", " << bundle << "_channel" << ", size);" << endl;
    //out << tab(1) << "read_" << bundle << "(" << bundle << ", " << bundle << "_channel" << ", size);" << endl;
  //}

  //out << endl << tab(1) << prg.name << "(" << comma_list(buffer_args) << ");" << endl << endl;

  //for (auto in : prg.outs) {
    //assert(contains_key(in, buffers));
    //auto& buf = buffers.at(in);
    //for (auto bundle : buf.get_in_bundles()) {
      ////auto bundle = pick(buf.get_in_bundles());
      //out << tab(1) << "write_" << bundle << "(" << bundle << ", " << bundle << "_channel" << ", size);" << endl;
    //}
  //}

  //out << "}" << endl << endl;
  //out << "}" << endl;
  //cout << "Generated accel wrapper" << endl;
//}


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
      assert(buf.get_out_bundles().size() == 1);
      auto bundle = pick(buf.get_out_bundles());

      string num_transfers = pipe_cpy(bundle, pipe) + "_num_transfers*size";
      if (options.num_input_epochs < 0) {
      } else {
        num_transfers = pipe_cpy(bundle, pipe) + "_num_transfers" + "*" + str(options.num_input_epochs);
      }

      out << tab(1) << "burst_read<" << buf.port_bundle_width(bundle) << ">" << "(" << pipe_cpy(bundle, pipe) << ", " << pipe_cpy(bundle, pipe) << "_channel" << ", " << num_transfers << ");" << endl;
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
  //for (auto consumed : op->consume_locs) {
    //decls.push_back(buffers.at(consumed.first).bundle_type_string(op->name) + "& " + consumed.first);
  //}

  for (auto consumed : op->consume_locs_pair) {
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

      cout << "\tAdding input port: " << pt_name << endl;
      cout << "\t\tProduced:: " << str(produced_here) << endl;
      buf.add_in_pt(pt_name, domains.at(op), produced_here, its(opt_sched, domains.at(op)));

      if (op->dynamic_writes(name)) {
        buf.dynamic_ports.insert(pt_name);
      }

      vector<string> inpt = buf.get_in_ports();
      cout << "current in port name: " << endl;
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

void generate_tb_compare_scripts(map<string, UBuffer>& buffers, prog& prg) {
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


vector<string> buffer_arg_names(const map<string, UBuffer>& buffers, op* op, prog& prg) {
  std::set<string> done;
  vector<string> buf_srcs;

  //for (auto p : op->consume_locs) {
    //auto buf_name = p.first;
    //if (!elem(buf_name, done)) {
      //buf_srcs.push_back(buf_name);
      //done.insert(buf_name);
    //}
  //}

  for (auto p : op->consume_locs_pair) {
    auto buf_name = p.first;
    if (!elem(buf_name, done)) {
      buf_srcs.push_back(buf_name + " /* buf name */");
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

vector<string> outgoing_buffers(const map<string, UBuffer>& buffers, op* op, prog& prg) {
  vector<string> incoming;
  std::set<string> done;
  for (auto p : op->produce_locs) {
    auto buf_name = p.first;
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
  //for (auto p : op->consume_locs) {
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

compute_kernel generate_compute_op(
    ostream& conv_out,
    prog& prg,
    op* op,
    map<string, UBuffer>& buffers,
    map<string, isl_set*>& domain_map) {

  cout << "Generating compute for: " << op->name << endl;

  compute_kernel kernel;
  kernel.name = op->name;
  kernel.functional_unit = op->func;

  vector<string> buf_srcs;
  concat(buf_srcs, buffer_args(buffers, op, prg));

  cout << "Got srcs" << endl;

  auto s = get_space(domain_map.at(op->name));
  vector<string> dim_args;
  for (auto a : space_var_args(s)) {
    dim_args.push_back(a);
    kernel.iteration_variables.push_back(a);
  }
  dim_args.push_back("0");

  for (auto a : space_var_decls(s)) {
    buf_srcs.push_back(a);
  }

  cout << "Got iteration variables" << endl;
  conv_out << "inline void " << op->name << sep_list(buf_srcs, "(", ")", ", ") << " {" << endl;
  //vector<pair<string, string> > in_buffers;
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
    kernel.input_buffers.push_back({in_buffer, bundle_name});

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
  for (auto con : op->produce_locs) {
    out_buffers.insert(con.first);
  }
  if (!(out_buffers.size() == 1)) {
    cout << "Error: " << out_buffers.size() << " out_buffers in " << op->name << endl;
  }
  assert(out_buffers.size() == 1);
  string out_buffer = pick(out_buffers);

  conv_out << "\t// Produce: " << out_buffer << endl;

  string bundle_name = op->name + "_write";
  kernel.output_buffer = {out_buffer, bundle_name};

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

  return kernel;
}

//module_type* generate_rtl_buffer(CodegenOptions& options,
    //minihls::context& minigen,
    //UBuffer& buffer) {

  //minihls::block* blk = minigen.add_block(buffer.name);
  //for (auto bank_struct : buffer.get_banks()) {
    //auto bankprog = minigen.add_block(bank_struct.name);

    //map<string, minihls::module_instance*> partitions;
    //map<string, minihls::instruction_instance*> read_partitions;
    //for (auto part : bank_struct.get_partitions()) {
      //auto part_tp = sr_buffer(*bankprog,
          //32,
          //part.second);
      //partitions[part.first] =
        //bankprog->add_module_instance(part.first, part_tp);
    //}

    //auto bankmod = minigen.compile(bankprog);
    //blk->add_module_instance(bank_struct.name, bankmod);
  //}

  //for (auto osel : buffer.selectors) {
    //selector sel = osel.second;
    //vector<minihls::port> ports{{"clk", 1, true}, {"rst", 1, true}};
    //for (auto pt : sel.vars) {
      //ports.push_back(minihls::inpt(pt, 32));
    //}
    //ports.push_back(minihls::outpt("out", 32));

    //ostringstream body;
    //for (int i = 0; i < sel.bank_conditions.size(); i++) {
      //body << tab(1) << "always @(*) begin" << endl;
      //body << tab(2) << "if (" << sel.bank_conditions.at(i) << ") begin" << endl;
      //body << tab(3) << "out = " << sel.inner_bank_offsets.at(i) << ";" << endl;
      //body << tab(2) << "end" << endl;
      //body << tab(1) << "end" << endl;
    //}
    //auto ubufmod =
      //blk->add_module_type(sel.name, ports, body.str());
    //blk->add_module_instance("selector_" + sel.name,
        //ubufmod);
  //}


  //for (auto out_bundle : buffer.get_in_bundles()) {
    //// Here I need to get all banks which receive data from this bundle
    //// and write to them
    //in_wire_read(*blk, out_bundle US "wen", 1);
    //in_wire_read(*blk, out_bundle US "wdata", buffer.port_bundle_width(out_bundle));
  //}

  //for (auto out_bundle : buffer.get_out_bundles()) {
    //auto dummy = in_wire_read(*blk, out_bundle US "dummy", buffer.port_bundle_width(out_bundle));
    //// Here I need to get all sources of this bundle and concatenate
    //// them together
    //out_wire_write(*blk, out_bundle US "rdata", buffer.port_bundle_width(out_bundle), dummy);
  //}

  //auto mod = minigen.compile(blk);

  //for (auto out_bundle : buffer.get_in_bundles()) {
    //auto wr_bundle =
      //blk->add_instruction_type(buffer.name US out_bundle US "write");
    //auto wr_bind =
      //blk->add_instruction_binding(buffer.name US out_bundle US "write_binding",
          //wr_bundle,
          //mod,
          //out_bundle US "wdata",
          //{});
    //wr_bind->latency = 1;
    //wr_bind->en = out_bundle US "wen";
  //}

  //for (auto bundle : buffer.get_out_bundles()) {
    //auto rd_bundle =
      //blk->add_instruction_type(buffer.name US bundle US "read");
    //auto rd_bind =
      //blk->add_instruction_binding(buffer.name US bundle US "read_binding",
          //rd_bundle,
          //mod,
          //bundle US "rdata",
          //{});
    //rd_bind->latency = 1;
  //}

  //return mod;
//}

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

std::string perfect_loop_codegen(umap* schedmap) {
  ostringstream conv_out;
  auto time_range = coalesce(range(schedmap));
  conv_out << "// time range: " << str(time_range) << endl;
  auto sets = get_sets(time_range);

  conv_out << "// # sets: " << sets.size() << endl;
  assert(sets.size() == 1);
  for (auto s : get_sets(time_range)) {
    vector<int> lower_bounds;
    vector<int> upper_bounds;
    for (int d = 0; d < num_dims(s); d++) {
      auto ds = project_all_but(s, d);
      auto lm = lexminval(ds);
      auto lmax = lexmaxval(ds);
      lower_bounds.push_back(to_int(lm));
      upper_bounds.push_back(to_int(lmax));
    }

    for (int i = 0; i < lower_bounds.size(); i++) {
      conv_out << tab(i) << "for (int i" << str(i) << " = " << lower_bounds.at(i) << "; i" << str(i) << " <= " << upper_bounds.at(i) << "; i" << i << "++) {" << endl;
    }

    for (auto time_to_val : get_maps(inv(schedmap))) {
      auto pw = isl_pw_multi_aff_from_map(time_to_val);
      vector<pair<isl_set*, isl_multi_aff*> > pieces =
        get_pieces(pw);
      assert(pieces.size() == 1);

      auto saff = pieces.at(0).second;
      auto dom = pieces.at(0).first;
      conv_out << tab(lower_bounds.size()) << "// " << str(dom) << endl;
      conv_out << tab(lower_bounds.size()) << "if (" << codegen_c(dom) << ") {" << endl;
      conv_out << tab(lower_bounds.size() + 1) << codegen_c(saff) << ";" << endl;
      conv_out << tab(lower_bounds.size()) << "}" << endl;
    }

    for (int i = 0; i < lower_bounds.size(); i++) {
      conv_out << tab(lower_bounds.size() - 1 - i) << "}" << endl;
    }

  }

  return conv_out.str();
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

void generate_app_code(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map) {
  //for (auto b : buffers) {
    //cout << b.second << endl;
  //}
  //assert(false);

  ofstream conv_out(prg.name + ".cpp");

  open_debug_scope(conv_out);
  conv_out << "#include <fstream>" << endl;
  conv_out << "using namespace std;" << endl << endl;
  conv_out << tab(1) << "// Debug utility" << endl;
  conv_out << tab(1) << "ofstream* global_debug_handle;" << endl << endl;
  close_debug_scope(conv_out);

  assert(prg.compute_unit_file != "");
  conv_out << "// compute file: " << prg.compute_unit_file << endl;
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
  vector<string> arg_buf_list = get_args(buffers, prg);
  string outer_arg_buffers = sep_list(arg_buf_list, "(", ")", ", ");

  auto inner_args = arg_buf_list;
  //inner_args.push_back("int num_epochs");
  string inner_arg_buffers = sep_list(inner_args, "(", ")", ", ");

  conv_out << "void " << prg.name << inner_arg_buffers << " {" << endl << endl;

  open_debug_scope(conv_out);
  conv_out << tab(1) << "ofstream debug_file(\"" << prg.name + "_debug.csv\");" << endl;
  conv_out << tab(1) << "global_debug_handle = &debug_file;" << endl;
  close_debug_scope(conv_out);

  for (auto& b : buffers) {
    if (!prg.is_boundary(b.first)) {
      conv_out << tab(1) << b.first << "_cache " << b.second.name << ";" << endl;
      open_synth_scope(conv_out);
      if (b.second.banking.partition == "register_file") {
        assert(b.second.bank_list.size() == 1);
        string var = b.second.name + "." + pick(b.second.bank_list).name + ".RAM";
        conv_out << "#pragma HLS array_partition variable=" << var << " dim=0 complete" << endl;
      } else if (b.second.banking.partition == "cyclic") {
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
    //perfect_loop_codegen(schedmap);
    options.code_string;
  if (!options.use_custom_code_string) {
    code_string = codegen_c(schedmap);
    //code_string = perfect_loop_codegen(schedmap);
  } else {
    cout << "Code string = " << code_string << endl;
    //assert(false);
  }

  string original_isl_code_string = code_string;

  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");

  for (auto op : prg.all_ops()) {
    regex re("(\n\t\\s+)" + op->name + "\\((.*)\\);");
    string args_list = sep_list(buffer_arg_names(buffers, op, prg), "", "", ", ");
    //code_string = regex_replace(code_string, re, "\n\t" + op->name + "(" + args_list + ", $1);");
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

  conv_out << tab(1) << "/*" << endl;
  conv_out << original_isl_code_string << endl;
  conv_out << tab(1) << "*/" << endl;
  //if (options.num_input_epochs < 0) {
    //conv_out << tab(1) << "for (int epoch = 0; epoch < num_epochs; epoch++) {" << endl;
  //} else {
    //conv_out << tab(1) << "for (int epoch = 0; epoch < " << options.num_input_epochs << "; epoch++) {" << endl;
  //}
  conv_out << code_string << endl;
  //conv_out << tab(1) << "}" << endl << endl;

  open_debug_scope(conv_out);
  conv_out << tab(1) << "debug_file.close();" << endl;
  close_debug_scope(conv_out);

  conv_out << "}" << endl << endl;

  {
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

  open_synth_scope(conv_out);
  generate_xilinx_accel_wrapper(options, conv_out, buffers, prg);
  generate_xilinx_accel_rdai_wrapper(options, conv_out, buffers, prg);
  close_synth_scope(conv_out);

  conv_out << endl;

  //ofstream test_out("multi_channel_accel_wrapper.cpp");
  //generate_xilinx_multi_channel_accel_wrapper(options, test_out, buffers, prg);
  //test_out.close();

  // Collateral generation
  generate_vivado_tcl(prg.name);
  generate_sw_bmp_test_harness(buffers, prg);
  generate_app_code_header(buffers, prg);
  generate_soda_tb(options, buffers, prg);
  generate_xilinx_aws_ddr_config(options, buffers, prg);
  generate_xilinx_accel_soda_host(options, buffers, prg);
  generate_xilinx_accel_host(options, buffers, prg);
  generate_verilog_code(options, buffers, prg, schedmap, domain_map, kernels);
  generate_tb_run_scripts(prg);
  generate_tb_compare_scripts(buffers, prg);

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
  auto sched = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());

  cout << "Optimized schedule..." << endl;
  cout << tab(1) << ": " << str(sched) << endl << endl;
  cout << codegen_c(sched) << endl;

  auto buffers = build_buffers(prg, sched);

  cout << "Buffers..." << endl;
  for (auto b : buffers) {
    //b.second.generate_bank_and_merge(options);
    cout << b.second << endl;
  }

  assert(prg.compute_unit_file != "");
  cout << "Compute unit file: " << prg.compute_unit_file << endl;
  //assert(false);
  generate_app_code(options, buffers, prg, sched);
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

  //cout << "Unoptimized schedule..." << endl;
  auto sched = prg.unoptimized_schedule();
  //cout << tab(1) << ": " << str(sched) << endl;
  //cout << codegen_c(prg.unoptimized_schedule());

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
  //for (auto b : buffers) {
    //cout << b.second << endl;
  //}
  //assert(false);

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
  rgtb << "#include \"" << prg.name << ".h\"" << endl << endl;

  rgtb << "int main() {" << endl;
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
      string next_val = str(num_ports) + "*i + " + str(p);
      rgtb << tab(2) << "set_at<" << p << "*" << port_width << ", " << bundle_width << ", " << port_width << ">(in_val, " << next_val << ");" << endl;
      rgtb << tab(2) << "in_pix << in_val << endl;" << endl;
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

      rgtb << tab(2) << "fout << actual_lane_" << p << " << endl;" << endl;
      //rgtb << tab(2) << "fout << (uint64_t) actual_lane_" << p << " << endl;" << endl;
    }

    rgtb << tab(1) << "}" << endl << endl;
  }

  rgtb << tab(1) << "in_pix.close();" << endl;
  rgtb << tab(1) << "fout.close();" << endl;
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

  //vector<string> unoptimized_streams;
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
    rgtb << tab(1) << "// rng card: " << str(range_card) << endl;
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

void compile_compute(const std::string& name) {
  int res = cmd("g++ -c -fstack-protector-all -std=c++11 " + name);
}

std::vector<std::string> run_regression_tb(const std::string& name) {
  //int res = system(string("g++ -fstack-protector-all -std=c++11 regression_tb_" + name + ".cpp " + name + ".cpp").c_str());
  int res = cmd("g++ -fstack-protector-all -std=c++11 regression_tb_" + name + ".cpp " + name + ".cpp");
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


void regression_test(prog& prg) {

  CodegenOptions options;
  options.internal = true;
  regression_test(options, prg);
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

std::set<std::string> get_kernels(prog& prg) {
  std::set<string> kernels;
  for (auto child : prg.root->children) {
    if (child->is_loop) {
      kernels.insert(child->name);
    }
  }
  return kernels;
}

std::vector<piecewise_address> addrs_written(op* p, const std::string& buffer) {
  vector<piecewise_address> addrs;
  for (auto b : p->produce_locs) {
    if (b.first == buffer) {
      addrs.push_back({{"", b.second}});
    }
  }
  return addrs;
}

std::vector<piecewise_address> addrs_referenced(op* p, const std::string& buffer) {
  vector<piecewise_address> addrs;
  for (auto b : p->produce_locs) {
    if (b.first == buffer) {
      addrs.push_back({{"", b.second}});
    }
  }

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

vector<string> upsample_vars(const std::string& target_buf, op* reader, prog& prg) {

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

std::vector<string> topologically_sort_kernels(prog& prg){
	std::vector<string> topologically_sorted_kernels;
	std::set<string> not_yet_sorted = get_kernels(prg);

  map<string, std::set<string> > other_producers;
  for (auto next_kernel : not_yet_sorted) {
    std::set<string> producers = get_producers(next_kernel, prg);
    producers.erase(next_kernel);
    other_producers[next_kernel] = producers;
  }

	while(not_yet_sorted.size() > 0){
		for(auto next_kernel : not_yet_sorted){
			bool all_producers_sorted = true;
			for (auto producer : other_producers.at(next_kernel)) {
				if(!elem(producer, topologically_sorted_kernels)) {
					all_producers_sorted = false;
					break;
				}
			}
			if(all_producers_sorted){
				topologically_sorted_kernels.push_back(next_kernel);
				not_yet_sorted.erase(next_kernel);
				break;
			}
		}
	}

  assert(topologically_sorted_kernels.size() == get_kernels(prg).size());
	return topologically_sorted_kernels;
}

std::set<string> buffers_written(op* p) {
  assert(!p->is_loop);

  std::set<string> bufs;
  for (auto b : p->produce_locs) {
    bufs.insert(b.first);
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
    assert(!elem(lp->name, loop_names));
    loop_names.insert(lp->name);
  }

  for (auto op : all_ops()) {
    for (auto b : op->buffers_read()) {
      buffer_names.insert(b);
      assert(!is_output(b));
    }

    for (auto b : op->buffers_written()) {
      buffer_names.insert(b);
      if (is_input(b)) {
        cout << "Error: " << b << " is written, but is not an input" << endl;
      }
      assert(!is_input(b));
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
	if(source -> is_loop){
		kernel_copy = dest -> add_loop(source->name, original.start(source->name), original.end_exclusive(source->name));
		for(auto child : original.find_loop(source->name)->children){
			deep_copy_child(kernel_copy, child, original);
		}
	}else{
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

  compute_kernel kernel;
  kernel.name = op->name;
  kernel.functional_unit = op->func;

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


void prog::merge_ops(const std::string& loop) {
  cout << "Merging ops at: " << loop << endl;
  auto lp = find_loop(loop);
  vector<op*> children_copies = lp->children;
  lp->children = {};
  op* merged = lp->add_op(unique_name("merged"));
  for (auto c : children_copies) {
    assert(!c->is_loop);
    merged->copy_memory_operations_from(c);
  }
  lp->pretty_print(1);
}

void ir_node::copy_memory_operations_from(op* other) {
  assert(!other->is_loop);

  concat(produce_locs, other->produce_locs);
  concat(dynamic_store_addresses, other->dynamic_store_addresses);
  concat(consume_locs_pair, other->consume_locs_pair);
  concat(dynamic_load_addresses, other->dynamic_load_addresses);
}

prog extract_group_to_separate_prog(std::set<std::string>& group, prog& original) {
	prog extracted;
	string prg_name = "Extracted_";
	for(auto g : group){
	prg_name += g + "_";
	}
	extracted.name = prg_name;

	for(auto kernel : topologically_sort_kernels(original)){
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
	for(auto consumed : all_consumed_buffers){
		if(!elem(consumed, all_produced_buffers)){
			extracted.add_input(consumed);
			cout << "Input added: " << consumed << endl;
			 extracted.buffer_port_widths[consumed] = map_find(consumed, original.buffer_port_widths);
			cout << "Input width: " << extracted.buffer_port_widths[consumed] << endl;
		}
	}
	
	for(auto produced : all_produced_buffers){
		if(!elem(produced, all_consumed_buffers)){
			extracted.add_output(produced);
			cout << "Output added: " << produced << endl;
			extracted.buffer_port_widths[produced] = map_find(produced, original.buffer_port_widths);
			cout << "Output width: " << extracted.buffer_port_widths[produced] << endl;
		}
	}
	
	return extracted;
}

vector<string> surrounding_vars(op* loop, prog& prg) {
  vector<string> surrounding;
  op* current = prg.root;
  while (current != loop) {
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
replace_variable(const address& addr, const std::string& var, const int v) {
  cout << "addr = " << addr << endl;
  vector<string> comps = split_at(addr, ",");
  vector<string> new_addr;
  for (auto c : comps) {
    cout << tab(1) << c << endl;
    new_addr.push_back(simplify_address_component(ReplaceString(c, var, str(v))));
  }
  return comma_list(new_addr);
}

void ir_node::replace_variable(const std::string& var, const int val) {

  for (auto& addr : produce_locs) {
    addr.second =
      ::replace_variable(addr.second, var, val);
  }

  for (auto& addr : consume_locs_pair) {
    piecewise_address pw;
    for (auto& comp : addr.second) {
      pw.push_back({comp.first, ::replace_variable(comp.second, var, val)});
    }
    addr.second = pw;
  }

}

void unroll(prog& prg, const std::string& var) {
  op* p = prg.find_loop(var);
  vector<op*> children = p->children;
  op* container = prg.parent(p);

  for (auto v : indexes(p)) {
    for (auto child : children) {
      string name = prg.unique_name(child->name + "_" + var + "_" + str(v));
      auto val = container->add_op(prg.unique_name(child->name + "_" + var + "_" + str(v)));
      val->copy_fields_from(child);
      val->replace_variable(var, v);
      val->name = name;
    }
  }

  container->delete_child(p);
}

vector<int> indexes(op* p) {
  assert(p->is_loop);
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

void infer_bounds(const std::string& buf, const std::vector<int>& int_bounds, prog& prg) {
  prg.buffer_bounds[buf] = int_bounds;

  std::vector<string> kernels = topologically_sort_kernels(prg);
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
    isl_set* bound_set = nullptr;

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
    //auto bound_set = pick(bounds);
    
    bounds.erase(bound_set);
    string buf = name(bound_set);
    if (prg.is_input(buf)) {
      continue;
    }

    assert(next_kernel != "");

    cout << "Kernel: " << next_kernel << " produces " << buf << endl;
    op* dop = nullptr;
    for (auto op : prg.find_loop(next_kernel)->descendant_ops()) {
      if (!op->is_loop) {
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

    auto cm = prg.consumer_maps();
    for (auto op : prg.find_loop(next_kernel)->descendant_ops()) {
      auto data_read = map_find(op, cm);
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

  //prg.pretty_print();
  //assert(false);
  //auto ms = prg.consumer_maps();
  //cout << "Consumer maps..." << endl;
  //for (auto m : ms) {
  //cout << tab(1) << m.first->name << "-> " << str(m.second) << endl;
  //}
  //assert(false);
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

  isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);

  cout << endl;
  cout << "Result: " << str(sched) << endl;

  //assert(false);

  return sched;
}

