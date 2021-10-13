#include "utils.h"

vector<string> get_files(const std::string& path) {
    vector<string> file_list;
    DIR* dir;
    struct dirent* diread;
    if ((dir = opendir(path.c_str())) != nullptr) {
        while ((diread = readdir(dir)) != nullptr) {
            string fname = string(diread->d_name);
            string full_path = path + "/" +string(diread->d_name);
            cout << "\tPush file: " << fname << "into list\n";
            if (fname != "." && fname!= "..")
                file_list.push_back(full_path);
        }
        closedir(dir);
    } else {
        cout << "Directory path: " << path << " cannot be found!" << endl ;
        perror("opendir");
        assert(false);
    }
    return file_list;
}


int run_sw_bmp_test_harness(const std::string& app_name) {
  int res = cmd("g++ -std=c++11 " + app_name + "_sw_bmp_test_harness.cpp " + app_name + ".cpp -I . -I ./aws_collateral");
  assert(res == 0);
  return cmd("./a.out");
}

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

  if (!(unoptimized_res.size() == optimized_res.size())) {
      cout << "Error in " << name << ": After optimization " << optimized_res.size() << " lines, but before: " << unoptimized_res.size() << " lines" << endl;
  }
  assert(unoptimized_res.size() == optimized_res.size());
  for (size_t i = 0; i < unoptimized_res.size(); i++) {

    if (!(unoptimized_res.at(i) == optimized_res.at(i))) {
      cout << "Error in " << name << ": After optimization, at output " << i << " unoptimized_res != optimized_res" << endl;
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

  system(("mkdir -p " + app_dir).c_str());
  system(("mkdir -p " + synth_dir).c_str());
  system(("mkdir -p " + soda_dir).c_str());

  system(("mkdir -p " + isl_dir).c_str());

  system(("cp ./aws_collateral/xrt.ini " + soda_dir).c_str());
  system(("cp ./aws_collateral/soda_makefile.mk " + soda_dir + "/Makefile").c_str());
  system(("cp ./aws_collateral/utils.mk " + soda_dir).c_str());

  system(("cp ./aws_collateral/xrt.ini " + synth_dir).c_str());
  system(("cp ./aws_collateral/Makefile " + synth_dir).c_str());
  system(("cp ./aws_collateral/utils.mk " + synth_dir).c_str());

  system(("cp ./aws_collateral/xrt.ini " + isl_dir).c_str());
  system(("cp ./aws_collateral/Makefile " + isl_dir).c_str());
  system(("cp ./aws_collateral/utils.mk " + isl_dir).c_str());

  make_exe("set_app.sh");
  system(("mv set_app.sh " + app_dir).c_str());

  system(("mv " + out_name + "_kernel.h " + soda_dir).c_str());
  system(("mv " + out_name + ".soda " + soda_dir).c_str());

  system(("mv " + out_name + "*.tcl " + synth_dir).c_str());
  system(("mv " + out_name + "*.ini " + synth_dir).c_str());
  system(("cp " + out_name + "*.cpp " + synth_dir).c_str());
  system(("cp regression_tb_" + out_name + ".cpp " + synth_dir).c_str());
  system(("cp " + out_name + "*.h " + synth_dir).c_str());
  system(("cp clockwork_standard_compute_units.h_merged_compute_units.h " + synth_dir).c_str());

  make_exe("run_tb_" + out_name + ".sh");
  system(("mv run_tb_" + out_name + ".sh " + synth_dir).c_str());

  make_exe("aws_run_tb_" + out_name + ".sh");
  system(("mv aws_run_tb_" + out_name + ".sh " + synth_dir).c_str());

  make_exe("compare_regressions.sh");
  system(("mv compare_regressions.sh " + app_dir).c_str());

  make_exe("aws_compare_regressions.sh");
  system(("mv aws_compare_regressions.sh " + app_dir).c_str());

  //system(("mv " + out_name + ".soda " + soda_dir).c_str());

  system(("mv soda_" + out_name + "*_host.cpp " + soda_dir).c_str());
  system(("mv tb_soda_" + out_name + "*.cpp " + soda_dir).c_str());

  make_exe("build_kernel.sh");
  system(("mv build_kernel.sh " + soda_dir).c_str());

  make_exe("run_tb.sh");
  system(("mv run_tb.sh " + soda_dir).c_str());

  cout << "INFO: Moved code and collateral for " << app_name << " to " << app_dir << endl;
}

bool is_int( const std::string& str ) { // check with regex (does not accept leading zeroes before first digit)

    static constexpr auto max_digits = std::numeric_limits<int>::digits10 ;
    static const std::string ub = std::to_string(max_digits-1) ;
    static const std::regex int_re( "^\\s*([+-]?[1-9]\\d{0," + ub + "}|0)\\s*$" ) ;

    return std::regex_match( str, int_re ) ;
}

bool is_number(string s) {
  return is_int(s);

  //if (s[0] != '-' && !isdigit(s[0])) {
    //return false;
  //}

  //for (int i = 1; i < s.length(); i++)  {
    //if (isdigit(s[i]) == false) {
      //return false;
    //}
  //}
  //return true;
}

string isl_sanitize(const std::string& str) {
  string res = "";
  for (auto c : str) {
    if (c == '-') {
      res += "_m_";
    } else {
      res += c;
    }
  }
  return res;

}

bool is_permutation(const vector<int>& level_permutation) {
  std::set<int> loops;
  for (auto l : level_permutation) {
    loops.insert(l);
    if (l < 0) {
      return false;
    }
    if (!(l < level_permutation.size())) {
      return false;
    }
  }

  if (level_permutation.size() != loops.size()) {
    return false;
  }
  return true;
}

