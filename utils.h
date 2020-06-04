#pragma once

#include "algorithm.h"
#include <fstream>
#include <streambuf>
#include <sstream>
#include <regex>

using namespace dbhc;
using namespace std;

template<typename T>
static inline
T pop(deque<T>& d) {
  auto v = d.back();
  d.pop_back();
  return v;
}

static inline
string c_sanitize(const std::string& str) {
  string res = "";
  for (auto c : str) {
    if (c == '+') {
      res += "_p_";
    } else if (c == ')') {
      res += "_rp_";
    } else if (c == '(') {
      res += "_lp_";
    } else if (c == '*') {
      res += "_m_";
    } else if (c == ' ') {
      res += "_";
    } else if (c == ',') {
      res += "_c_";
    } else if (c == '-') {
      res += "_m_";
    } else {
      res += c;
    }
  }
  return res;
}

static inline
vector<string> split_at(const string& t, const string& delimiter) {
  string s = t;
  size_t pos = 0;
  std::string token;
  vector<string> tokens;
  while ((pos = s.find(delimiter)) != std::string::npos) {
    token = s.substr(0, pos);
    //std::cout << token << std::endl;
    tokens.push_back(token);
    s.erase(0, pos + delimiter.length());
  }

  //cout << s << endl;
  tokens.push_back(s);

  return tokens;
}

static inline
string take_until(const std::string& s, const std::string& delim) {
  std::size_t found = s.find_first_of(delim);
  return s.substr(0, found);
}

static inline
bool is_number(string s) {

  if (s[0] != '-' && !isdigit(s[0])) {
    return false;
  }

  for (int i = 1; i < s.length(); i++)  {
    if (isdigit(s[i]) == false) {
      return false;
    }
  }
  return true;
}

static inline
int safe_stoi(const string s) {
  cout << "safe stoi " << s << endl;
  if (is_number(s)) {
    return stoi(s);
  }
  cout << "String: " << s << " is not a number!" << endl;
  assert(false);
  return -1;
}

static inline
string tab(const int n) {
  string t = "";
  for (int i = 0; i < n; i++) {
    t += "  ";
  }
  return t;
}

static inline
bool
is_prefix( std::string const& lhs, std::string const& rhs )
{
    return std::equal(
        lhs.begin(),
        lhs.begin() + std::min( lhs.size(), rhs.size() ),
        rhs.begin() );
}

static inline bool
is_suffix( std::string const& lhs, std:: string const& rhs )
{
    return std::equal(
            lhs.end() - rhs.size(),
            lhs.end(),
            rhs.begin() );
}

template<typename A, typename B>
static inline
pair<A, B> pick(const map<A, B>& s) {
  assert(s.size() > 0);
  return *(begin(s));
}

template<typename T>
static inline
T pick(const std::vector<T>& s) {
  assert(s.size() > 0);
  return *(begin(s));
}

template<typename T>
static inline
T pick(const std::set<T>& s) {
  assert(s.size() > 0);
  return *(begin(s));
}

static inline
std::string sep_list(const std::vector<std::string>& strs, const std::string& ldelim, const std::string& rdelim, const std::string& sep) {

  //cout << "Starting sep list" << endl;
  string res = ldelim;

  if (strs.size() > 0) {
    for (size_t i = 0; i < strs.size(); i++) {
      res += strs[i];
      if (strs.size() > 1 && i < strs.size() - 1) {
        res += sep;
      }
    }
  }
  res += rdelim;

  //cout << "Done with sep list" << endl;

  return res;
}

template<typename T>
static inline
std::string sep_list(const std::vector<T>& vals, const std::string& ldelim, const std::string& rdelim, const std::string& sep) {
  vector<string> strs;
  for (auto v : vals) {
    ostringstream ss;
    ss << v;
    strs.push_back(ss.str());
  }
  return sep_list(strs, ldelim, rdelim, sep);
}

static inline
std::string comma_list(const std::vector<std::string>& strs) {
  return sep_list(strs, "", "", ", ");
}

template<typename T>
static inline
std::string comma_list(const std::vector<T>& vals) {
  vector<string> strs;
  for (auto v : vals) {
    ostringstream ss;
    ss << v;
    strs.push_back(ss.str());
  }
  return sep_list(strs, "", "", ", ");
}

static inline
std::string comma_list(const std::set<std::string>& strs) {
  vector<string> strv(begin(strs), end(strs));
  return sep_list(strv, "", "", ", ");
}

static inline
std::string ReplaceString(std::string subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
    return subject;
}

template<typename T>
std::string str(const std::vector<T>& t) {
  vector<string> strs;
  for (auto v : t) {
    ostringstream ss;
    ss << v;
    strs.push_back(ss.str());
  }
  return comma_list(strs);
}

static inline
vector<int> parse_pt(const string& pt) {
  //cout << "pt: " << pt << endl;
  regex cm("\\{ \\[(.*)\\] \\}");
  smatch match;
  auto res = regex_search(pt, match, cm);

  if (res) {

    string coefs = match[1];
    //cout << "coefs: " << coefs << endl;
    vector<int> coords;

    auto vals = split_at(coefs, ", ");
    for (auto v : vals) {
      coords.push_back(safe_stoi(v));
    }

    return coords;
  } else {
    regex cm("\\{ (.*)\\[(.*)\\] \\}");
    smatch match;
    auto res = regex_search(pt, match, cm);


    string coefs = match[2];
    //cout << "coefs: " << coefs << endl;
    vector<int> coords;

    auto vals = split_at(coefs, ", ");
    for (auto v : vals) {
      coords.push_back(safe_stoi(v));
    }

    return coords;
  }


}

static inline
string set_string(const vector<string>& vars, const string& s) {
  return "{ " + sep_list(vars, "[", "]", ", ") + " : " + s + " }";
}

template<typename T>
static inline
std::ostream& operator<<(std::ostream& out, vector<T>& v) {
  out << sep_list(v, "{", "}", ", ");
  return out;
}

static inline
string str(const int i) {
  return to_string(i);
}

static inline
string parens(const std::string& s) {
  return "(" + s + ")";
}

static inline
void make_exe(const std::string& file) {
  system(("chmod +x " + file).c_str());
}

static inline
void move_naive_to_benchmarks_folder(const std::string& app_name) {
  string out_name = app_name;
  string app_dir =
    "./soda_codes/" + app_name + "_opt";
  string isl_dir =
    "./soda_codes/" + app_name + "_opt/isl_code/";

  system(("mkdir " + isl_dir).c_str());

  system(("cp ./aws_collateral/xrt.ini " + isl_dir).c_str());
  system(("cp ./aws_collateral/Makefile " + isl_dir).c_str());
  system(("cp ./aws_collateral/utils.mk " + isl_dir).c_str());

  system(("mv " + out_name + "_naive.cpp " + isl_dir).c_str());
  system(("mv " + out_name + "_naive_compute_units.h " + isl_dir).c_str());
  system(("mv " + out_name + "_naive.h " + isl_dir).c_str());
  system(("mv regression_tb_" + out_name + "_naive.cpp " + isl_dir).c_str());
}

static inline
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

static inline 
void compare_to_gold(const std::string& name) {
  std::ifstream t(name);
  std::string test_str((std::istreambuf_iterator<char>(t)),
      std::istreambuf_iterator<char>());

  std::ifstream gold("./gold_files/" + name);
  std::string gold_str((std::istreambuf_iterator<char>(gold)),
      std::istreambuf_iterator<char>());
  assert(test_str == gold_str);
}
