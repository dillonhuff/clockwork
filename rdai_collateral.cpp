#include <algorithm>
#include <cassert>
#include <sstream>
#include <vector>
#include <utility>

#include "rdai_collateral.h"
#include "prog.h"

void generate_xilinx_accel_rdai_wrapper(CodegenOptions &options, std::ostream &out, map<string, UBuffer> &buffers, prog &prg) {
    std::cout << "[INFO] generating RDAI xcel wrapper\n";
    std::string wrapper_name = prg.name + "_rdai";

    assert((options.num_pipelines == 1) && "[ERROR] currently supporting 1 pipeline only");

    auto input_namer = [](){
        static int counter = 0;
        std::string name = "arg_in" + std::to_string(counter);
        ++counter;
        return name;
    };

    // wrapper arguments
    std::vector<std::pair<string, int>> args;

    // input arguments
    std::vector<std::pair<string, int>> input_args;
    for(const auto &in : prg.ins) {
        auto &buf = buffers.at(in);
        assert(contains_key(in, buffers));
        assert((buf.get_out_bundles().size() == 1) && "[ERROR] currently supporting one output bundle per input stream");

        std::string bundle_name = buf.get_out_bundles()[0];
        int bundle_width = buf.bundle_lane_width(bundle_name);
        std::pair<string, int> arg = {input_namer(), bundle_width};
        input_args.push_back(arg);
        args.push_back(arg);
    }

    // output arguments
    std::vector<std::pair<string, int>> output_args;
    for(const auto &out : prg.outs) {
        auto &buf = buffers.at(out);
        assert(contains_key(out, buffers));
        assert((buf.get_in_bundles().size() == 1) && "[ERROR] currently supporting one input bundle per output stream");

        auto bundle_name = buf.get_in_bundles()[0];
        int bundle_width = buf.bundle_lane_width(bundle_name);
        std::pair<string, int> arg = {"arg_out", bundle_width};
        output_args.push_back(arg);
        args.push_back(arg);
        break;
    }

    // packed struct
    out << "\ntemplate <int WIDTH>\n"
        << "struct hls_packed_struct {\n"
        << tab(1) << "ap_uint<WIDTH> data;\n"
        << tab(1) << "ap_uint<1> tlast;\n"
        << "};\n\n";

    // Wrapper Function
    std::vector<string> arg_decls;
    std::for_each(args.begin(), args.end(), [&arg_decls](const auto &arg){
            std::ostringstream ss;
            ss << "hls::stream<hls_packed_struct<" << arg.second << "> > &" << arg.first;
            arg_decls.push_back(ss.str());
            });

    out << "void " << wrapper_name << "(" << comma_list(arg_decls) << ") {\n";
    out << "#pragma HLS DATAFLOW";
    for(const auto &arg: args) {
        out << "\n#pragma HLS INTERFACE axis register port=" << arg.first << " name=" << arg.first;
    }
    out << "\n#pragma HLS INTERFACE ap_ctrl_none port=return";
    out << "\n\n";

    // input HW streams
    out << tab(1) << "// input HW streams";
    std::for_each(input_args.begin(), input_args.end(), [&out](const auto &arg) {
            out << "\n" << tab(1) << "HWStream<hw_uint<" << arg.second << "> > " << arg.first << "_hwstream;";
            });

    // output unpacking
    out << "\n\n" << tab(1) << "// output unpacking\n";
    out << tab(1) << "hls_packed_struct<" << output_args[0].second << "> temp;\n";
    out << tab(1) << "HWStream<hw_uint<" << output_args[0].second << "> > arg_out_data;\n";
    out << tab(1) << "HWStream<hw_uint<1> > arg_out_tlast;\n";

    // input hls::stream to HWStream
    out << "\n" << tab(1) << "// input hls::stream to HWStream";
    std::for_each(input_args.begin(), input_args.end(), [&out](const auto &arg) {
            out << "\n" << tab(1) << arg.first << "_hwstream.write((int) " << arg.first << ".read().data);";
            });

    // Xcel call
    out << "\n\n" << tab(1) << "// Xcel call\n";
    out << tab(1) << prg.name << "(";
    for(size_t i = 0; i < input_args.size(); i++) {
        out << input_args[i].first << "_hwstream, ";
    }
    out << "arg_out_data, arg_out_tlast);\n";

    // output packing
    out << "\n" << tab(1) << "// output packing\n";
    out << tab(1) << "temp.data = (int) arg_out_data.read();\n";
    out << tab(1) << "temp.tlast = (int) arg_out_tlast.read();\n";
    out << "\n" << tab(1) << "arg_out.write(temp);\n";
    out << "}\n";
}

void generate_xilinx_accel_rdai_wrapper_bak(CodegenOptions& options, std::ostream& out, map<string, UBuffer>& buffers, prog& prg) {
  cout << "Generating accel wrapper" << endl;
  string driver_func = prg.name + "_rdai";

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
        string out_bundle_tp = buf.bundle_type_string(bundle);
        ptr_arg_decls.push_back("HWStream<" + out_bundle_tp + " >& " + pipe_cpy(bundle, pipe));
        ptr_args.push_back(pipe_cpy(bundle, pipe));
      }

    }

    for (auto out : prg.outs) {
      assert(contains_key(out, buffers));
      auto& buf = buffers.at(out);
      for (auto bundle : buf.get_in_bundles()) {
        string in_bundle_tp = buf.bundle_type_string(bundle);
        ptr_arg_decls.push_back("HWStream<" + in_bundle_tp + " >&  " + pipe_cpy(bundle, pipe));
        ptr_args.push_back(pipe_cpy(bundle, pipe));
      }
    }
    buffer_args.push_back(ptr_args);
  }
  vector<string> all_arg_decls = ptr_arg_decls;

  cout << "Generating driver function" << endl;

  out << "void " << driver_func << "(" << comma_list(all_arg_decls) << ") { " << endl;
  out << "#pragma HLS dataflow" << endl;

  int bank_no = 0;
  for (auto pt : ptr_args) {
    out << "#pragma HLS INTERFACE axis register port = " << pt << endl;
    if (bank_no < 3) {
      bank_no++;
    }
  }
  out << endl;
  out << "#pragma HLS INTERFACE ap_ctrl_none port = return" << endl;
  out << endl;

  for (int pipe = 0; pipe < options.num_pipelines; pipe++) {
    out << endl;
    out << tab(1) << "// Pipeline # " << pipe << endl;

    out << endl << tab(1) << prg.name << "(" << comma_list(buffer_args.at(pipe)) << ");" << endl << endl;

  }

  out << "}" << endl << endl;
  out << "}" << endl;
}
