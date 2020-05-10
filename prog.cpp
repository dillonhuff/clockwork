#include "prog.h"
#include "codegen.h"

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

set<pair<string, string> > inputs(map<string, UBuffer>& buffers, prog& prg) {
  set<pair<string, string> > edges;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);

    auto bundle = pick(buf.get_out_bundles());
    edges.insert({buf.name, bundle});
  }
  return edges;
}

set<string> in_bundles(map<string, UBuffer>& buffers, prog& prg) {
  set<string> edges;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);

    auto bundle = pick(buf.get_out_bundles());
    edges.insert(bundle);
  }
  return edges;
}


set<pair<string, string> > outputs(map<string, UBuffer>& buffers, prog& prg) {
  set<pair<string, string> > edges;
  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());

    edges.insert({buf.name, bundle});
  }

  return edges;
}

set<string> out_bundles(map<string, UBuffer>& buffers, prog& prg) {
  set<string> edges;
  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());

    edges.insert(bundle);
  }

  return edges;
}

set<pair<string, string> > edge_buffers(map<string, UBuffer>& buffers, prog& prg) {
  set<pair<string, string> > edges;
  for (auto b : inputs(buffers, prg)) {
    edges.insert(b);
  }

  for (auto b : outputs(buffers, prg)) {
    edges.insert(b);
  }
  return edges;
}

set<string> edge_bundles(map<string, UBuffer>& buffers, prog& prg) {
  set<string> edges;
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
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());

    edges.insert(bundle);
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

void run_kernel(std::ostream& out, map<string, UBuffer>& buffers, prog& prg) {
  out << tab(1) << "std::cout << \"Starting kernel\" << std::endl;" << endl;
  vector<string> in_bufs;
  for (auto b : in_bundles(buffers, prg)) {
    in_bufs.push_back(b + "_ocl_buf");
  }

  out << tab(1) << "OCL_CHECK(err, err = q.enqueueMigrateMemObjects({" << comma_list(in_bufs) << "}, 0));" << endl << endl;

  out << "unsigned long start, end, nsduration;" << endl;
  out << "cl::Event event;" << endl << endl;

  out << "OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add, NULL, &event));" << endl;
  out << "OCL_CHECK(err, err = event.wait());" << endl;
  out << "end =" << endl;
  out << "OCL_CHECK(err, event.getProfilingInfo<CL_PROFILING_COMMAND_END>(&err));" << endl;
  out << "start = OCL_CHECK(err," << endl;
  out << "event.getProfilingInfo<CL_PROFILING_COMMAND_START>(&err));" << endl;
  out << "nsduration = end - start;" << endl;

  //out << tab(1) << "OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add));" << endl << endl;

  for (auto out_bundle: out_bundles(buffers, prg)) {
    out << tab(1) << "OCL_CHECK(err, err = q.enqueueMigrateMemObjects({" << out_bundle << "_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));" << endl;
  }

  out << endl;
  out << tab(1) << "q.finish();" << endl << endl;
}

void ocl_check_args(std::ostream& out) {
  out << tab(1) << "srand(234);" << endl;
  out << tab(1) << "if (argc != 2) {" << endl;
  out << tab(2) << "std::cout << \"Usage: \" << argv[0] << \" <XCLBIN File>\" << std::endl;" << endl;
  out << tab(2) << "return EXIT_FAILURE;" << endl;
  out << tab(1) << "}" << endl << endl;

  out << tab(1) << "std::string binaryFile = argv[1];" << endl << endl;
  out << tab(1) << "int num_epochs = 1;" << endl << endl;
  out << tab(1) << "std::cout << \"num_epochs = \" << num_epochs << std::endl;" << endl << endl;
}

void ocl_timing_suffix(std::ostream& out) {
  out << tab(1) << "double dnsduration = ((double)nsduration);" << endl;
  out << "double dsduration = dnsduration / ((double)1000000000);" << endl;

  out << "double dbytes = total_size_bytes;" << endl;
  out << "double bpersec = (dbytes / dsduration);" << endl;
  out << "double gbpersec = bpersec / ((double)1024 * 1024 * 1024);" << endl;

  out << "std::cout << \"bytes / sec = \" << bpersec << std::endl;" << endl;
  out << "std::cout << \"GB / sec = \" << gbpersec << std::endl;" << endl;
  out << "printf(\"Execution time = %f (sec) \\n\", dsduration);" << endl;
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

void generate_xilinx_accel_soda_host(map<string, UBuffer>& buffers, prog& prg) {
  ofstream out("soda_" + prg.name + "_host.cpp");
  ocl_headers(out);

  out << "int main(int argc, char **argv) {" << endl;

  ocl_check_args(out);

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

  run_kernel(out, buffers, prg);

  ocl_timing_suffix(out);

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

void generate_xilinx_accel_host(map<string, UBuffer>& buffers, prog& prg) {
  ofstream out(prg.name + "_host.cpp");

  ocl_headers(out);

  out << "int main(int argc, char **argv) {" << endl;

  ocl_check_args(out);
  
  out << tab(1) << "size_t total_size_bytes = 0;" << endl;
  for (auto eb : edge_buffers(buffers, prg)) {
    string edge_bundle = eb.second;
    string buf = eb.first;

    out << tab(1) << "const int " << edge_bundle << "_DATA_SIZE = num_epochs*" << prg.buffer_size(buf) << ";" << endl;
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
  //for (auto edge_bundle : in_bundles(buffers, prg)) {
    //populate_input(out, edge_bundle);
  //}

  //for (auto edge_bundle : out_bundles(buffers, prg)) {
    //out << tab(1) << "for (int i = 0; i < " << edge_bundle << "_DATA_SIZE; i++) {" << endl;
    //out << tab(1) << "// TODO: Add support for other widths" << endl;
    //out << tab(2) << "((uint16_t*) (" << edge_bundle << ".data()))[i] = 0;" << endl;
    //out << tab(1) << "}" << endl << endl;
  //}

  for (auto edge_out : outputs(buffers, prg)) {
    auto edge_bundle = edge_out.second;
    auto buf = edge_out.first;
    out << tab(1) << "for (int i = 0; i < " << edge_bundle << "_DATA_SIZE; i++) {" << endl;
    out << tab(2) << "((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << edge_bundle << ".data()))[i] = 0;" << endl;
    out << tab(1) << "}" << endl << endl;
  }

  ocl_program_device(out, prg, "_accel");

  int arg_pos = 0;
  for (auto in_bundle : in_bundles(buffers, prg)) {
    out << tab(1) << "OCL_CHECK(err, cl::Buffer " << in_bundle << "_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, " << in_bundle << "_size_bytes, " << in_bundle << ".data(), &err));" << endl;

    out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << in_bundle << "_ocl_buf));" << endl << endl;
    arg_pos++;
  }

  for (auto in_bundle : out_bundles(buffers, prg)) {
    out << tab(1) << "OCL_CHECK(err, cl::Buffer " << in_bundle << "_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, " << in_bundle << "_size_bytes, " << in_bundle << ".data(), &err));" << endl;
    out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << in_bundle << "_ocl_buf));" << endl << endl;
    arg_pos++;
  }

  out << endl;
  out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", num_epochs));" << endl << endl;

  //for (auto b : out_bundles(buffers, prg)) {
    //out << tab(1) << "int " << b << "_size = " << b << "_DATA_SIZE;" << endl;
    //out << tab(1) << "OCL_CHECK(err, err = krnl_vector_add.setArg(" << arg_pos << ", " << b << "_size));" << endl << endl;
  //}

  run_kernel(out, buffers, prg);

  ocl_timing_suffix(out);

  for (auto output : outputs(buffers, prg)) {
    auto buf = output.first;
    auto out_bundle = output.second;
    out << tab(1) << "std::ofstream regression_result(\"" << out_bundle << "_accel_result.csv\");" << endl;
    out << tab(1) << "for (int i = 0; i < " << out_bundle << "_DATA_SIZE; i++) {" << endl;
    out << tab(2) << "regression_result << ((" << vanilla_c_pixel_type_string(buf, buffers) << "*) (" << out_bundle << ".data()))[i] << std::endl;" << endl;
    out << tab(1) << "}" << endl;
  }
  out << endl;

  out << tab(1) << "return 0;" << endl;
  out << "}" << endl;

  out.close();
}

void generate_xilinx_accel_wrapper(std::ostream& out, map<string, UBuffer>& buffers, prog& prg) {

  cout << "Generating accel wrapper" << endl;
  string driver_func = prg.name + "_accel";

  out << "#include \"" << prg.name << ".h\"" << endl << endl;

  for (auto eb : edge_buffers(buffers, prg)) {
    string out_rep = eb.first;
    string out_bundle = eb.second;

    UBuffer out_buf = map_find(out_rep, buffers);
    string out_bundle_tp = out_buf.bundle_type_string(out_bundle);

    int num_pixels = prg.buffer_size(out_rep);

    int pix_per_burst =
      out_buf.lanes_in_bundle(out_bundle);
    int num_in_bursts = num_pixels / pix_per_burst;

    out << "const int " << out_bundle << "_num_transfers = " << num_in_bursts << ";" << endl;
  }
  out << endl;

  string in_rep = pick(prg.ins);
  UBuffer& in_buf = buffers.at(in_rep);
  string in_bundle = pick(in_buf.port_bundles).first;
  string in_bundle_tp = in_buf.bundle_type_string(in_bundle);

  cout << "Got in bundle" << endl;

  string out_rep = pick(prg.outs);
  UBuffer& out_buf = buffers.at(out_rep);
  string out_bundle = pick(out_buf.port_bundles).first;
  string out_bundle_tp = out_buf.bundle_type_string(out_bundle);

  int in_pix = prg.buffer_size(in_rep);
  int pix_per_in_burst =
    in_buf.lanes_in_bundle(in_bundle);
  int in_burst = in_pix / pix_per_in_burst;

  int out_pix = prg.buffer_size(out_rep);
  int pix_per_out_burst =
    out_buf.lanes_in_bundle(out_bundle);
  int out_burst = out_pix / pix_per_out_burst;

  out << "// TODO: Adapt to have one size for each edge buffer" << endl;
  out << "#define INPUT_SIZE " << in_burst << endl;
  out << "#define OUTPUT_SIZE " << out_burst << endl;

  out << "extern \"C\" {" << endl << endl;

  for (auto in_bundle : in_bundles(buffers, prg)) {
    out << "static void read_" << in_bundle << "(" << in_bundle_tp << "* input, HWStream<" << in_bundle_tp << " >& v, const int size) {" << endl;
    out << tab(1) << in_bundle_tp << " burst_reg;" << endl;
    //out << tab(1) << "for (int i = 0; i < INPUT_SIZE*size; i++) {" << endl;
    out << tab(1) << "for (int i = 0; i < " << in_bundle << "_num_transfers*size; i++) {" << endl;
    out << tab(2) << "#pragma HLS pipeline II=1" << endl;
    out << tab(2) << "burst_reg = input[i];" << endl;
    out << tab(2) << "v.write(burst_reg);" << endl;
    out << tab(1) << "}" << endl;
    out << "}" << endl << endl;
  }

  for (auto out_bundle : out_bundles(buffers, prg)) {
    out << "static void write_" << out_bundle << "(" << out_bundle_tp << "* output, HWStream<" << out_bundle_tp << " >& v, const int size) {" << endl;
    out << tab(1) << out_bundle_tp << " burst_reg;" << endl;
    //out << tab(1) << "for (int i = 0; i < OUTPUT_SIZE*size; i++) {" << endl;
    out << tab(1) << "for (int i = 0; i < " << out_bundle << "_num_transfers*size; i++) {" << endl;
    out << tab(2) << "#pragma HLS pipeline II=1" << endl;
    out << tab(2) << "burst_reg = v.read();" << endl;
    out << tab(2) << "output[i] = burst_reg;" << endl;
    out << tab(1) << "}" << endl;
    out << "}" << endl << endl;
  }

  cout << "Generating arg list" << endl;
  vector<string> ptr_args;
  vector<string> ptr_arg_decls;
  vector<string> buffer_args;
  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);

    cout << "picking from bundle" << endl;
    auto bundle = pick(buf.get_out_bundles());
    cout << "bundle: " << bundle << endl;

    string out_bundle_tp = buf.bundle_type_string(bundle);
    ptr_arg_decls.push_back(out_bundle_tp + "* " + bundle);
    ptr_args.push_back(bundle);
    buffer_args.push_back(bundle + "_channel");
  }

  for (auto out : prg.outs) {
    assert(contains_key(out, buffers));
    auto& buf = buffers.at(out);
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());
    string in_bundle_tp = buf.bundle_type_string(bundle);

    ptr_arg_decls.push_back(in_bundle_tp + "* " + bundle);
    ptr_args.push_back(bundle);
    buffer_args.push_back(bundle + "_channel");
  }

  vector<string> all_arg_decls = ptr_arg_decls;
  all_arg_decls.push_back("const int size");
  buffer_args.push_back("size");

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

  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    //assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_out_bundles());
    string in_bundle_tp = buf.bundle_type_string(bundle);

    out << tab(1) << "static HWStream<" << in_bundle_tp << " > " << bundle << "_channel;" << endl;
  }

  for (auto in : prg.outs) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    //assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());
    string in_bundle_tp = buf.bundle_type_string(bundle);

    out << tab(1) << "static HWStream<" << in_bundle_tp << " > " << bundle << "_channel;" << endl;
  }

  out << endl;

  for (auto in : prg.ins) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_out_bundles().size() == 1);
    auto bundle = pick(buf.get_out_bundles());

    //out << tab(1) << "read_input(" << bundle << ", " << bundle << "_channel" << ", size);" << endl;
    out << tab(1) << "read_" << bundle << "(" << bundle << ", " << bundle << "_channel" << ", size);" << endl;
  }

  out << endl << tab(1) << prg.name << "(" << comma_list(buffer_args) << ");" << endl << endl;

  for (auto in : prg.outs) {
    assert(contains_key(in, buffers));
    auto& buf = buffers.at(in);
    assert(buf.get_in_bundles().size() == 1);
    auto bundle = pick(buf.get_in_bundles());

    //out << tab(1) << "write_output(" << bundle << ", " << bundle << "_channel" << ", size);" << endl;
    out << tab(1) << "write_" << bundle << "(" << bundle << ", " << bundle << "_channel" << ", size);" << endl;
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

      cout << "\tAdding input port: " << pt_name << endl;
      cout << "\t\tProduced:: " << str(produced_here) << endl;
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

void generate_soda_tb(map<string, UBuffer>& buffers, prog& prg) {

  {
    ofstream of("tb_soda_" + prg.name + ".cpp");

    int pixel_width =
      pick(prg.buffer_port_widths).second;

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

    of << tab(1) << "const int nrows = " << nrows << ";" << endl;
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
  for (auto a : space_var_decls(s)) {
    buf_srcs.push_back(a);
  }

  cout << "Got iteration variables" << endl;
  conv_out << "inline void " << op->name << sep_list(buf_srcs, "(", ")", ", ") << " {" << endl;
  vector<pair<string, string> > in_buffers;
  set<string> distinct;
  for (auto con : op->consume_locs) {
    if (!elem(con.first, distinct)) {
      in_buffers.push_back(con);
      distinct.insert(con.first);
    }
  }

  cout << "got in_buffers" << endl;
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

      conv_out << endl;
      open_debug_scope(conv_out);

      //auto& buf = buffers.at(in_buffer);
      //int bundle_width = buf.port_bundle_width(bundle_name);

      //int unroll_factor = op->unroll_factor;
      ////int element_width = bundle_width / op->unroll_factor;

      //string dbg_res_name = "debug_" + value_name;
      //conv_out << tab(1) << "hw_uint<" << bundle_width << "> " << dbg_res_name << " = " << value_name << ";" << endl;

  //vector<string> lane_values =
    //split_bv(1, conv_out, dbg_res_name, element_width, op->unroll_factor);

  //for (int lane = 0; lane < unroll_factor; lane++) {
    //conv_out << tab(1) << "*global_debug_handle << \"" << op->name << ",\" << ";
    //int i = 0;
    //for (auto v : kernel.iteration_variables) {
      //if (i == 0) {
        //conv_out << "(" << unroll_factor << "*" << v << " + " << lane << ") << \", \" << ";
      //} else {
        //conv_out << v << "<< \",\" << ";
      //}
      //i++;
    //}
    //assert(lane < lane_values.size());
    //conv_out << " " << lane_values.at(lane) << " << endl;" << endl;
  //}




      conv_out << tab(1) << "*global_debug_handle << \"" << op->name << "_" << in_buffer << ",\" << ";
      for (auto v : kernel.iteration_variables) {
        conv_out << v << "<< \",\" << ";
      }
      conv_out << " " << value_name << " << endl;" << endl;
      close_debug_scope(conv_out);
      conv_out << endl;

    }
    buf_args.push_back(value_name);
    res = value_name;
  }

  cout << "created res" << endl;
  if (op->func != "") {
    conv_out << "\tauto compute_result = " << op->func << "(" << comma_list(buf_args) << ");" << endl;
    res = "compute_result";
  }

  cout << "finding out buffers" << endl;
  set<string> out_buffers;
  for (auto con : op->produce_locs) {
    out_buffers.insert(con.first);
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
      comma_list(arg_names) << ");" << endl;
  }

  conv_out << endl;
  open_debug_scope(conv_out);

  //cout << "emitting bundle code" << endl;
  auto& buf = buffers.at(out_buffer);
  int bundle_width = buf.port_bundle_width(bundle_name);

  int unroll_factor = op->unroll_factor;
  int element_width = bundle_width / op->unroll_factor;


  string dbg_res_name = "debug_" + res;
  conv_out << tab(1) << "hw_uint<" << bundle_width << "> " << dbg_res_name << "(" << res << ");" << endl;
  vector<string> lane_values =
    split_bv(1, conv_out, dbg_res_name, element_width, op->unroll_factor);

  for (int lane = 0; lane < unroll_factor; lane++) {
    conv_out << tab(1) << "*global_debug_handle << \"" << op->name << ",\" << ";
    int i = 0;
    for (auto v : kernel.iteration_variables) {
      if (i == 0) {
        conv_out << "(" << unroll_factor << "*" << v << " + " << lane << ") << \", \" << ";
      } else {
        conv_out << v << "<< \",\" << ";
      }
      i++;
    }
    assert(lane < lane_values.size());
    conv_out << " " << lane_values.at(lane) << " << endl;" << endl;
  }

  close_debug_scope(conv_out);
  conv_out << endl;
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
  vector<string> arg_buf_list = get_args(buffers, prg);
  string outer_arg_buffers = sep_list(arg_buf_list, "(", ")", ", ");

  auto inner_args = arg_buf_list;
  inner_args.push_back("int num_epochs");
  string inner_arg_buffers = sep_list(inner_args, "(", ")", ", ");

  conv_out << "void " << prg.name << inner_arg_buffers << " {" << endl << endl;

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

  conv_out << "#ifdef __VIVADO_SYNTH__" << endl;
  conv_out << "#pragma HLS inline recursive" << endl;
  conv_out << "#endif // __VIVADO_SYNTH__" << endl << endl;

  conv_out << tab(1) << "for (int epoch = 0; epoch < num_epochs; epoch++) {" << endl;
  conv_out << code_string << endl;
  conv_out << tab(1) << "}" << endl << endl;

  open_debug_scope(conv_out);
  conv_out << tab(1) << "debug_file.close();" << endl;
  close_debug_scope(conv_out);

  conv_out << "}" << endl << endl;

  {
    conv_out << "void " << prg.name << outer_arg_buffers << " {" << endl << endl;
    vector<string> arg_strings = get_arg_names(buffers, prg);
    arg_strings.push_back("1");
    conv_out << tab(1) << prg.name << sep_list(arg_strings, "(", ")", ", ") << ";" << endl;
    conv_out << "}" << endl;
  }

  open_synth_scope(conv_out);
  generate_xilinx_accel_wrapper(conv_out, buffers, prg);
  close_synth_scope(conv_out);

  conv_out << endl;

  generate_app_code_header(buffers, prg);
  generate_soda_tb(buffers, prg);
  generate_xilinx_accel_soda_host(buffers, prg);
  generate_xilinx_accel_host(buffers, prg);
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

void generate_optimized_code(prog& prg) {
  auto sched = its(isl_schedule_get_map(prg.optimized_schedule()), prg.whole_iteration_domain());

  cout << "Optimized schedule..." << endl;
  cout << tab(1) << ": " << str(sched) << endl << endl;
  cout << codegen_c(sched) << endl;

  auto buffers = build_buffers(prg, sched);

  cout << "Buffers..." << endl;
  for (auto b : buffers) {
    cout << b.second << endl;
  }

  //assert(false);
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

  auto buffers = build_buffers(prg, prg.unoptimized_schedule());

  CodegenOptions options;
  options.internal = true;
  options.all_rams = true;

  generate_app_code(options, buffers, prg, sched);

  prg.name = old_name;
}


