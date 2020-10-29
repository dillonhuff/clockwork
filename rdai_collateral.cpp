#include "rdai_collateral.h"

#include "prog.h"

void generate_xilinx_accel_rdai_wrapper(CodegenOptions& options, std::ostream& out, map<string, UBuffer>& buffers, prog& prg) {
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
