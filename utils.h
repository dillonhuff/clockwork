#pragma once


#include "algorithm.h"
#include <sstream>
#include <regex>

using namespace dbhc;
using namespace std;

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
  return sep_list(vals, ldelim, rdelim, sep);
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

