#include "utils.h"

void move_to_synthesis_folder(const std::string& app_name) {
  string out_name = app_name;
  string synth_dir =
    "./synthesis/" + app_name;
  cmd("mkdir -p " + synth_dir);

  system(("cp ./aws_collateral/xrt.ini " + synth_dir).c_str());
  system(("cp ./aws_collateral/Makefile " + synth_dir).c_str());
  system(("cp ./aws_collateral/utils.mk " + synth_dir).c_str());

  make_exe("set_app.sh");
  system(("mv set_app.sh " + synth_dir).c_str());

  system(("mv " + out_name + "*.tcl " + synth_dir).c_str());
  system(("mv " + out_name + "*.cpp " + synth_dir).c_str());
  system(("mv " + out_name + "*.h " + synth_dir).c_str());
  system(("mv regression_tb_" + out_name + ".cpp " + synth_dir).c_str());

  //system(("mv regression_tb_" + out_name + "_naive.cpp " + isl_dir).c_str());

  //make_exe("run_tb_" + out_name + ".sh");
  //system(("mv run_tb_" + out_name + ".sh " + synth_dir).c_str());

  //make_exe("aws_run_tb_" + out_name + ".sh");
  //system(("mv aws_run_tb_" + out_name + ".sh " + synth_dir).c_str());

  //make_exe("compare_regressions.sh");
  //system(("mv compare_regressions.sh " + app_dir).c_str());

  //make_exe("aws_compare_regressions.sh");
  //system(("mv aws_compare_regressions.sh " + app_dir).c_str());

  //system(("mv " + out_name + ".soda " + soda_dir).c_str());

  //system(("mv soda_" + out_name + "*_host.cpp " + soda_dir).c_str());
  //system(("mv tb_soda_" + out_name + "*.cpp " + soda_dir).c_str());

  //make_exe("build_kernel.sh");
  //system(("mv build_kernel.sh " + soda_dir).c_str());

  //make_exe("run_tb.sh");
  //system(("mv run_tb.sh " + soda_dir).c_str());
}


void compare(const std::string& name,
    vector<string>& optimized_res,
    vector<string>& unoptimized_res) {
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

void move_to_benchmarks_folder(const std::string& app_name) {
  string out_name = app_name;
  string app_dir =
    "./soda_codes/" + app_name;
  string soda_dir =
    "./soda_codes/" + app_name + "/soda_code/";
  string synth_dir =
    "./soda_codes/" + app_name + "/our_code/";
  string isl_dir =
    "./soda_codes/" + app_name + "/isl_code/";

  system(("mkdir " + app_dir).c_str());
  system(("mkdir " + synth_dir).c_str());
  system(("mkdir " + soda_dir).c_str());

  system(("mkdir " + isl_dir).c_str());

  system(("cp ./aws_collateral/xrt.ini " + soda_dir).c_str());
  system(("cp ./aws_collateral/soda_makefile.mk " + soda_dir + "/Makefile").c_str());
  system(("cp ./aws_collateral/utils.mk " + soda_dir).c_str());

  system(("cp ./aws_collateral/xrt.ini " + synth_dir).c_str());
  system(("cp ./aws_collateral/Makefile " + synth_dir).c_str());
  system(("cp ./aws_collateral/utils.mk " + synth_dir).c_str());

  system(("cp ./aws_collateral/xrt.ini " + isl_dir).c_str());
  system(("cp ./aws_collateral/Makefile " + isl_dir).c_str());
  system(("cp ./aws_collateral/utils.mk " + isl_dir).c_str());

  system(("mv set_app.sh " + app_dir).c_str());
  make_exe("set_app");

  system(("mv " + out_name + "_kernel.h " + soda_dir).c_str());

  system(("mv " + out_name + "*.ini " + synth_dir).c_str());
  system(("mv " + out_name + "*.cpp " + synth_dir).c_str());
  system(("mv " + out_name + "*.h " + synth_dir).c_str());
  system(("mv regression_tb_" + out_name + ".cpp " + synth_dir).c_str());
  //system(("mv regression_tb_" + out_name + "_naive.cpp " + isl_dir).c_str());

  make_exe("run_tb_" + out_name + ".sh");
  system(("mv run_tb_" + out_name + ".sh " + synth_dir).c_str());

  make_exe("aws_run_tb_" + out_name + ".sh");
  system(("mv aws_run_tb_" + out_name + ".sh " + synth_dir).c_str());

  make_exe("compare_regressions.sh");
  system(("mv compare_regressions.sh " + app_dir).c_str());

  make_exe("aws_compare_regressions.sh");
  system(("mv aws_compare_regressions.sh " + app_dir).c_str());

  system(("mv " + out_name + ".soda " + soda_dir).c_str());

  system(("mv soda_" + out_name + "*_host.cpp " + soda_dir).c_str());
  system(("mv tb_soda_" + out_name + "*.cpp " + soda_dir).c_str());

  make_exe("build_kernel.sh");
  system(("mv build_kernel.sh " + soda_dir).c_str());

  make_exe("run_tb.sh");
  system(("mv run_tb.sh " + soda_dir).c_str());
}
