#include "isl_utils.h"

#include <regex>
#include <cassert>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>

#include "algorithm.h"

using namespace dbhc;
using namespace std;

template<typename T>
T pick(const std::set<T>& s) {
  return *(begin(s));
}

std::string sep_list(const std::vector<std::string>& strs, const std::string& ldelim, const std::string& rdelim, const std::string& sep) {
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

  return res;
}

class UBuffer {
  public:
    struct isl_ctx* ctx;
    isl_space* space;
    isl_space* map_space;
    string name;

    std::map<string, bool> isIn;
    std::map<string, isl_set*> domain;
    std::map<string, isl_map*> access_map;
    std::map<string, isl_union_map*> schedule;
    std::map<string, set<string> > port_bundles;

    std::map<string, int> varInds;

    std::vector<string> physical_addr_vars;
    std::vector<string> writer_vars;
    std::vector<string> reader_vars;

    // Map from writer vars to logical addr vars
    map<string, isl_map*> write_funcs;

    // Map from reader vars to logical addr vars
    map<string, isl_map*> read_funcs;
    
    isl_map* physical_address_mapping;

    isl_union_map* global_schedule() {
      umap* s = isl_union_map_read_from_str(ctx, "{ }");
      for (auto other : schedule) {
        //s = unn(s, isl_union_map_from_map(cpy(other.second)));
        s = unn(s, (cpy(other.second)));
      }

      return s;
    }

    bool is_out_pt(const std::string& name) const {
      return !isIn.at(name);
    }

    void add_port_bundle(const std::string& bundle_name, const set<string>& port_names) {
      port_bundles[bundle_name] = port_names;
    }
    
    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = (sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = (sched);
      isIn[name] = true;
    }
    
    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = to_umap(sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      domain[name] = dm;
      access_map[name] = access;
      schedule[name] = to_umap(sched);
      isIn[name] = true;
    }

    void add_out_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      add_pt(name, dm, access, sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      add_pt(name, dm, access, sched);
      isIn[name] = true;
    }

    void add_pt(const std::string& name,
        const std::string& dm,
        const std::string& access,
        const std::string& sched) {
      domain[name] =
        isl_set_read_from_str(ctx, dm.c_str());
      access_map[name] =
        isl_map_read_from_str(ctx, access.c_str());
      schedule[name] =
        isl_union_map_read_from_str(ctx, sched.c_str());
    }

    isl_basic_set* build_domain(const std::vector<int>& ranges) {
      assert(ranges.size() % 2 == 0);

      isl_basic_set* bset = isl_basic_set_universe(cpy(space));
      isl_constraint* c;
      isl_local_space* ls = isl_local_space_from_space(space);

      for (size_t i = 0; i < ranges.size(); i += 2) {
        int start = ranges.at(i);
        int end = ranges.at(i + 1);
        int varNum = i / 2;

        c = isl_constraint_alloc_inequality(cpy(ls));
        c = isl_constraint_set_constant_si(c, -start);
        c = isl_constraint_set_coefficient_si(c, isl_dim_set, varNum, 1);
        bset = isl_basic_set_add_constraint(bset, c);

        c = isl_constraint_alloc_inequality(cpy(ls));
        c = isl_constraint_set_constant_si(c, end);
        c = isl_constraint_set_coefficient_si(c, isl_dim_set, varNum, -1);
        bset = isl_basic_set_add_constraint(bset, c);
      }

      return bset;
    }

    isl_map* build_map(const int offset) {
      isl_basic_map* m = isl_basic_map_universe(cpy(map_space));
      isl_local_space* ls = isl_local_space_from_space(map_space);

      int varNum = 0;
      isl_constraint* c = isl_constraint_alloc_equality(cpy(ls));
      c = isl_constraint_set_constant_si(c, -offset);
      c = isl_constraint_set_coefficient_si(c, isl_dim_out, varNum, 1);
      c = isl_constraint_set_coefficient_si(c, isl_dim_in, varNum, -1);
      m = isl_basic_map_add_constraint(m, c);

      return isl_map_from_basic_map(m);
    }

    vector<string> get_in_bundles() const {
      vector<string> outpts;
      for (auto m : port_bundles) {
        if (!is_out_pt(pick(m.second))) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    vector<string> get_in_ports() const {
      vector<string> outpts;
      for (auto m : isIn) {
        if (m.second) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    vector<string> get_out_ports() const {
      vector<string> outpts;
      for (auto m : isIn) {
        if (!m.second) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    string get_in_port() const {
      for (auto m : isIn) {
        if (m.second) {
          return m.first;
        }
      }
      assert(false);
    }

    void add_out_port(const std::string& name, const std::vector<int>& ranges) {
      isIn[name] = false;
      domain[name] = isl_set_from_basic_set(build_domain(ranges));
    }

};

isl_constraint* eq(isl_space* const space, const int value, const std::vector<int>& in_coeffs, const std::vector<int>& out_coeffs) {
  isl_local_space* ls = isl_local_space_from_space(space);
  isl_constraint* c = isl_constraint_alloc_equality(cpy(ls));
  c = isl_constraint_set_constant_si(c, -value);
  for (size_t i = 0; i < in_coeffs.size(); i++) {
    c = isl_constraint_set_coefficient_si(c, isl_dim_in, i, -in_coeffs[i]);
  }
  for (size_t i = 0; i < out_coeffs.size(); i++) {
    c = isl_constraint_set_coefficient_si(c, isl_dim_out, i, out_coeffs[i]);
  }

  return c;
}

isl_constraint* le(isl_space* const space, const int value, const std::vector<int>& in_coeffs, const std::vector<int>& out_coeffs) {
  isl_local_space* ls = isl_local_space_from_space(space);
  isl_constraint* c = isl_constraint_alloc_inequality(cpy(ls));
  c = isl_constraint_set_constant_si(c, value);
  for (size_t i = 0; i < in_coeffs.size(); i++) {
    c = isl_constraint_set_coefficient_si(c, isl_dim_in, i, -in_coeffs[i]);
  }
  for (size_t i = 0; i < out_coeffs.size(); i++) {
    c = isl_constraint_set_coefficient_si(c, isl_dim_out, i, out_coeffs[i]);
  }

  return c;
}

isl_constraint* ge(isl_space* const space, const int value, const std::vector<int>& in_coeffs, const std::vector<int>& out_coeffs) {
  isl_local_space* ls = isl_local_space_from_space(space);
  isl_constraint* c = isl_constraint_alloc_inequality(cpy(ls));
  c = isl_constraint_set_constant_si(c, value);
  for (size_t i = 0; i < in_coeffs.size(); i++) {
    c = isl_constraint_set_coefficient_si(c, isl_dim_in, i, in_coeffs[i]);
  }
  for (size_t i = 0; i < out_coeffs.size(); i++) {
    c = isl_constraint_set_coefficient_si(c, isl_dim_out, i, -out_coeffs[i]);
  }

  return c;
}

// What questions do I have about spaces / variable names by index?
//  1. is a copy of a space equal to the original space?
//  2. What are these tuple things that keep getting mentioned?
//  3. Can you intersect sets from different spaces?
//  4. When sets from different spaces are operated on w/named variables
//     are constraints merged by variable names or indexes?
//  5. What is the space of the inverse of a map? Does it make a new space
//     with in and out variables reversed?
void test_swizzle_buffer() {

  struct isl_ctx *ctx;

  ctx = isl_ctx_alloc();

  // 2 image variables
  // time
  // physical position variable
  UBuffer buf;

  // Logical addresses

  // Add ports, say two in, three out
  // Want to add read / write schedules, and domains
  // Should the domain describe all logical addresses
  // as a restriction of r / c
  // Or should it describe all logical addresses as
  // the union of the ranges of all address write functions
  buf.ctx = ctx;
  buf.space = isl_space_set_alloc(ctx, 0, 2);
  buf.map_space = isl_space_alloc(ctx, 0, 2, 3);


  buf.physical_address_mapping =
    isl_map_from_basic_map(isl_basic_map_universe(cpy(buf.map_space)));

  // Mapping: (x, y) -> (x, y % 3)
  // How to represent modulus? y % 3 === k, exists q. 3*q + k = y
  //int x = 0;
  //int y = 1;

  //int k = 0;
  //int k = 1;
  //int q = 2;

  // How do you create a space if you dont know how many
  // variables you will need?
  auto c = eq(buf.map_space, 0, {1}, {1});
  buf.physical_address_mapping = isl_map_add_constraint(buf.physical_address_mapping, c);

  c = eq(buf.map_space, 0, {0, 1}, {0, 1, 3});
  buf.physical_address_mapping = isl_map_add_constraint(buf.physical_address_mapping, c);
  
  c = ge(buf.map_space, 2, {0, 0}, {0, 1, 0});
  buf.physical_address_mapping = isl_map_add_constraint(buf.physical_address_mapping, c);
  
  cout << "Physical address mapping" << endl;
  print(ctx, buf.physical_address_mapping);
  cout << endl;
  
  c = le(buf.map_space, 0, {0, 0}, {0, 1, 0});
  buf.physical_address_mapping = isl_map_add_constraint(buf.physical_address_mapping, c);
  
  cout << "Physical address mapping" << endl;
  print(ctx, buf.physical_address_mapping);
  cout << endl;

  buf.physical_address_mapping = isl_map_project_out(buf.physical_address_mapping, isl_dim_out, 2, 1);

  cout << "Physical address mapping" << endl;
  print(ctx, buf.physical_address_mapping);
  cout << endl;

  // Now: Create a domain for input / output ports

  isl_ctx_free(ctx);
}

void basic_space_tests() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();



  auto s0 = isl_space_set_alloc(ctx, 0, 2);
  auto s1 = isl_space_set_alloc(ctx, 0, 2);
  auto s2 = isl_space_set_alloc(ctx, 0, 3);

  // A space is equal to itself
  assert(isl_space_is_equal(s0, s0));

  auto copyS0 = cpy(s0);

  // A space is equal to a copy of itself
  assert(isl_space_is_equal(s0, copyS0));

  // A space is equal to another space with the same construction params
  assert(isl_space_is_equal(s0, s1));

  // A space is not equal to another space with different numbers of
  // variables
  assert(!isl_space_is_equal(s0, s2));

  auto set0 = isl_basic_set_universe(s0);
  auto set2 = isl_basic_set_universe(s2);

  cout << "s0 before naming..." << endl;
  print(ctx, s0);

  s0 = isl_space_set_dim_name(s0, isl_dim_set, 0, "x");
  s0 = isl_space_set_dim_name(s0, isl_dim_set, 1, "y");
  s0 = isl_space_set_tuple_name(s0, isl_dim_set, "Q");

  cout << "s0 after naming..." << endl;
  print(ctx, s0);

  // This fails because set0 is not equal to set2
  //auto res = isl_basic_set_intersect(set0, set2);
  //assert(false);
  //
  // So maybe what we need is several different spaces
  //  - Logical address space (set space)
  //  - Physical address space (set space)
  //  - Schedule space (la -> t)
  //  - PMap space (la -> pa) (what about extra variables?)
  //  To add extra variables to remove via projection we need
  //   to insert variables in the local space

  isl_ctx_free(ctx);
}

//void ubuffer_test() {
  //struct isl_ctx *ctx;

  //ctx = isl_ctx_alloc();

  //UBuffer buf;
  //buf.ctx = ctx;
  //buf.space = isl_space_set_alloc(ctx, 0, 1);
  //buf.map_space = isl_space_alloc(ctx, 0, 1, 1);

  //buf.isIn["in"] = true;
  //buf.domain["in"] = isl_set_from_basic_set(buf.build_domain({0, 7}));
  //buf.schedule["in"] = buf.build_map(0);
  
  //buf.add_out_port("out0", {0, 5});
  //buf.schedule["out0"] = buf.build_map(2);
  //buf.add_out_port("out1", {1, 6});
  //buf.schedule["out1"] = buf.build_map(1);
  //buf.add_out_port("out2", {2, 7});
  //buf.schedule["out2"] = buf.build_map(0);

  //cout << "--- Domains" << endl;
  //for (auto d : buf.domain) {
    //cout << "Set for: " << d.first << endl;
    //print(buf.ctx, d.second);
  //}

  //cout << "--- Schedules" << endl;
  //for (auto d : buf.schedule) {
    //cout << "Schedule for: " << d.first << endl;
    //print(buf.ctx, d.second);
  //}

  //cout << "Adding domains to schedules..." << endl;
  //for (auto d : buf.schedule) {
    //isl_set* s = buf.domain.at(d.first);
    //isl_map* m = isl_map_intersect_domain(cpy(d.second), cpy(s));
    //cout << "Schedule with domain for " << d.first << endl;
    //print(buf.ctx, m);
    //cout << "Cardinality of domain..." << endl;
    //print(buf.ctx, isl_set_card(cpy(s)));
  //}

  //string in_name = buf.get_in_port();
  //isl_map* in_sched = buf.schedule.at(in_name);
  //isl_set* in_domain = buf.domain.at(in_name);
  //isl_pw_multi_aff* write_time =
    //isl_map_lexmax_pw_multi_aff(in_sched);
  //cout << "Write times..." << endl;
  //print(ctx, write_time);
  //for (auto d : buf.isIn) {
    //if (!d.second) {
      //string out_name = d.first;
      //cout << "Output port: " << d.first << endl;
      //isl_map* out_sched = buf.schedule.at(out_name);
      //isl_pw_multi_aff* first_read_time =
        //isl_map_lexmin_pw_multi_aff(out_sched);

      //auto diff =
        //isl_pw_multi_aff_sub(cpy(first_read_time), cpy(write_time));

      //cout << "Write -> read Difference..." << endl;
      //print(ctx, diff);

      //auto diff_map =
        //isl_map_from_pw_multi_aff(diff);
      
      //isl_set* out_domain = buf.domain.at(out_name);
      //diff_map = isl_map_intersect_domain(diff_map, cpy(out_domain));
      //auto range = isl_map_range(diff_map);

      //// Intersect with range?
      //isl_basic_set* less_value = isl_basic_set_universe(cpy(buf.space));
      //isl_local_space* ls = isl_local_space_from_space(buf.space);
      //isl_constraint* c = isl_constraint_alloc_inequality(cpy(ls));
      //c = isl_constraint_set_constant_si(c, -1);
      //c = isl_constraint_set_coefficient_si(c, isl_dim_set, 0, -1);
      //less_value = isl_basic_set_add_constraint(less_value, c);

      //cout << "LTZ..." << endl;
      //print(buf.ctx, less_value);

      //range = isl_set_intersect(isl_set_from_basic_set(less_value), range);

      //cout << "Range of output..." << endl;
      //print(ctx, range);

      //if (isl_set_is_empty(range)) {
        //cout << "\tPassed, no violated deps" << endl;
      //} else {
        //cout << "\tERROR: Some values read before being written" << endl;
        //assert(false);
      //}
    //}
  //}

  //isl_ctx_free(buf.ctx);

//}

isl_stat get_const(isl_set* s, isl_qpolynomial* qp, void* user) {
  vector<int>* vals = (vector<int>*) user;
  cout << "getting piece" << endl;
  print(isl_qpolynomial_get_ctx(qp), qp);
  print(isl_set_get_ctx(s), s);

  isl_val* v = isl_qpolynomial_get_constant_val(qp);
  print(isl_val_get_ctx(v), v);
  long vs = isl_val_get_num_si(v);
  cout << "value = " << vs << endl;
  if (vals->size() == 0 ||
      vals->back() != vs) {
    vals->push_back(vs);
  }
  return isl_stat_ok;
}

int check_value_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto ctx = buf.ctx;
  //isl_map* sched = buf.schedule.at(write_port);
  umap* sched = buf.schedule.at(write_port);
  assert(sched != nullptr);
  
  auto WritesAfterWrite = lex_lt(sched, sched);

  assert(WritesAfterWrite != nullptr);

  auto port0WritesInv =
    inv(buf.access_map.at(write_port));

  auto WriteThatProducesReadData =
    dot(buf.access_map.at(read_port), port0WritesInv);

  auto WritesBeforeRead =
    lex_gt(buf.schedule.at(read_port), buf.schedule.at(write_port));

  auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

  auto WritesBtwn = its(WritesAfterProduction, WritesBeforeRead);

  auto c = card(WritesBtwn);
  
  //cout << "Cardinality..." << endl;
  //print(ctx, c);

  //cout << "Cardinality after simpification..." << endl;
  //print(ctx, isl_pw_qpolynomial_fold_coalesce(cpy(c)));
  //auto s = isl_pw_qpolynomial_n_piece(c);
  //cout << "s = " << s << endl;

  //assert(s <= 1);

  assert(false);
  return 0;
  //if (s == 0) {
    //return 0;
  //} else {
    //vector<int> nums;
    //void* user = (void*) &nums;
    //isl_pw_qpolynomial_foreach_lifted_piece(c, get_const, user);
    ////assert(nums.size() == 1);
    //return nums[0];
  //}
}

std::string ReplaceString(std::string subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
    return subject;
}

string codegen_c_constraint(isl_constraint* c) {

  string resstr;
  stringstream ss(resstr);
  isl_space* s = get_space(c);
  if (isl_space_is_map(s)) {
    int ndims = isl_space_dim(s, isl_dim_in);
    for (int i = 0; i < ndims; i++) {
      //ss << str(isl_constraint_get_coefficient_val(c, isl_dim_in, i)) << "*" << "i_" << i << " + ";
      ss << str(isl_constraint_get_coefficient_val(c, isl_dim_in, i)) << "*" << str(isl_space_get_dim_id(s, isl_dim_out, i)) << " + ";
    }
    {
      int ndims = isl_space_dim(s, isl_dim_out);
      for (int i = 0; i < ndims; i++) {
        ss << str(isl_constraint_get_coefficient_val(c, isl_dim_in, i)) << "*" << str(isl_space_get_dim_id(s, isl_dim_out, i)) << " + ";
        //ss << str(isl_constraint_get_coefficient_val(c, isl_dim_out, i)) << "*" << "i_" << i << "_p" << " + ";
          //<< str(isl_space_get_dim_id(s, isl_dim_out, i)) << "_p" << " + ";
      }
    }
  } else {
    assert(isl_space_is_set(s));
    for (int i = 0; i < num_dims(s); i++) {
      //ss << str(isl_constraint_get_coefficient_val(c, isl_dim_set, i)) << "*" << "i_" << i << " + ";
      ss << str(isl_constraint_get_coefficient_val(c, isl_dim_set, i)) << "*" << str(isl_space_get_dim_id(s, isl_dim_set, i)) << " + ";
    }
  }

  ss << str(isl_constraint_get_constant_val(c)) << " ";
  if (isl_constraint_is_equality(c)) {
    ss << " == " << "0";
  } else {
    ss << " >= " << "0";
  }
  return ss.str();
}

isl_stat codegen_constraint(isl_constraint* c, void* user) {

  // TODO: Update to get DIV!!!
  vector<string>& code_holder = *((vector<string>*) user);
  string cc = codegen_c_constraint(c);
  code_holder.push_back(cc);
  return isl_stat_ok;
}

isl_stat bset_codegen_c(isl_basic_set* m, void* user) {
  isl_basic_set_foreach_constraint(m, codegen_constraint, user);
  return isl_stat_ok;
}

isl_stat bmap_codegen_c(isl_basic_map* m, void* user) {
  //isl_basic_set* s = domain(m);
  //vector<string>& code_holder = *((vector<string>*) user);
  //string code = "";
  //cout << "\t BASIC MAP" << endl;
  //code_holder.push_back(code);
  isl_basic_map_foreach_constraint(m, codegen_constraint, user);
  //isl_basic_set_foreach_constraint(s, codegen_constraint, user);

  return isl_stat_ok;
}

std::string codegen_c(isl_set* s) {
  //cout << "Generating code for set..." << endl;
  //auto ctx = isl_set_get_ctx(s);
  //print(ctx, s);

  //isl_printer *p;
  //p = isl_printer_to_str(ctx);

  //cout << "Set print string..." << endl;

  //p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  
  //cout << "set output format..." << endl;
  
  //p = isl_printer_print_set(p, cpy(s));
  
  //cout << "Built printer..." << endl;

  //char* rs = isl_printer_get_str(p);
  //string r(rs);
  //isl_printer_free(p);
  //free(rs);

  //cout << "Done..." << endl;

  //return r;
  
  vector<string> code_holder;
  isl_set_foreach_basic_set(s, bset_codegen_c, &code_holder);
  return sep_list(code_holder, "(", ")", " && ");
}

isl_stat return_piece(isl_set* domain, isl_qpolynomial* val, void* user) {
  vector<pair<isl_set*, isl_qpolynomial*> >* v = (vector<pair<isl_set*, isl_qpolynomial*> >*) user;
  v->push_back({domain, val});
  return isl_stat_ok;
}

vector<pair<isl_set*, isl_qpolynomial*> >
get_pieces(isl_pw_qpolynomial* p) {
  vector<pair<isl_set*, isl_qpolynomial*> > terms;
  isl_pw_qpolynomial_foreach_piece(p, return_piece, &terms);
  return terms;
}

isl_stat get_pw_qpolynomial_fold(isl_pw_qpolynomial_fold* qp, void* user) {
  vector<isl_pw_qpolynomial_fold*>* v = (vector<isl_pw_qpolynomial_fold*>*) user;
  v->push_back(qp);

  return isl_stat_ok;
}

isl_stat get_pw_qpolynomial(isl_pw_qpolynomial* qp, void* user) {
  vector<isl_pw_qpolynomial*>* v = (vector<isl_pw_qpolynomial*>*) user;
  v->push_back(qp);

  return isl_stat_ok;
}

isl_stat return_pieces(isl_pw_qpolynomial* qp, void* user) {
  vector<pair<isl_set*, isl_qpolynomial*> >* v = (vector<pair<isl_set*, isl_qpolynomial*> >*) user;
  auto pieces = get_pieces(qp);
  for (auto p : pieces) {
    v->push_back(p);
  }

  return isl_stat_ok;
}

vector<pair<isl_set*, isl_qpolynomial*> >
get_pieces(isl_union_pw_qpolynomial* p) {
  vector<pair<isl_set*, isl_qpolynomial*> > terms;
  isl_union_pw_qpolynomial_foreach_pw_qpolynomial(p, return_pieces, &terms);
  return terms;
}

vector<isl_pw_qpolynomial_fold*>
get_polynomial_folds(isl_union_pw_qpolynomial_fold* p) {
  vector<isl_pw_qpolynomial_fold*> terms;
  isl_union_pw_qpolynomial_fold_foreach_pw_qpolynomial_fold(p, get_pw_qpolynomial_fold, &terms);
  return terms;
}

vector<isl_pw_qpolynomial*>
get_polynomials(isl_union_pw_qpolynomial* p) {
  vector<isl_pw_qpolynomial*> terms;
  isl_union_pw_qpolynomial_foreach_pw_qpolynomial(p, get_pw_qpolynomial, &terms);
  return terms;
}

isl_stat return_term(isl_term* t, void* user) {
  vector<isl_term*>* v = (vector<isl_term*>*) user;
  v->push_back(t);
  return isl_stat_ok;
}

vector<isl_term*> get_terms(isl_qpolynomial* qp) {
  vector<isl_term*> terms;
  isl_qpolynomial_foreach_term(qp, return_term, &terms);
  return terms;
}

std::string codegen_c(isl_term* t) {
  cout << "\tterm dim = " << isl_term_dim(t, isl_dim_set) << endl;
  vector<string> exps;
  for (int i = 0; i < isl_term_dim(t, isl_dim_set); i++) {
    int exp = isl_term_get_exp(t, isl_dim_set, i);
    //if (exp != 0) {
    exps.push_back("pow(i_" + to_string(i) + ", " + to_string(exp) + ")");
    //cout << "Aff " << i << ": " << str(div) << endl;
    //} else {
      //exps.push_back("1");
    //}
  }

  //isl_aff* div = isl_term_get_div(t, 0);
  //cout << "Aff " << ": " << str(div) << endl;

  return "(" + str(isl_term_get_coefficient_val(t)) + "*" + sep_list(exps, "", "", "*") + ")";
}

std::string codegen_c(isl_qpolynomial* qp) {
  auto ctx = isl_qpolynomial_get_ctx(qp);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_qpolynomial(p, cpy(qp));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  string r(rs);
  free(rs);
  return r;
}

isl_stat codegen_domain(isl_set* domain, isl_qpolynomial* qp, void* user) {
  vector<string>& code_holder = *((vector<string>*) user);
  code_holder.push_back(codegen_c(domain));
  return isl_stat_ok;
}

isl_stat codegen_value(isl_set* domain, isl_qpolynomial* qp, void* user) {
  vector<string>& code_holder = *((vector<string>*) user);
  code_holder.push_back(codegen_c(qp));
  return isl_stat_ok;
}

std::string codegen_c(isl_union_pw_qpolynomial* pqp) {

  auto ct = ctx(pqp);
  isl_printer *p;
  p = isl_printer_to_str(ct);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_union_pw_qpolynomial(p, cpy(pqp));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  string r(rs);
  free(rs);
  return r;
}

std::string codegen_c(isl_pw_qpolynomial* pqp) {

  auto ctx = isl_pw_qpolynomial_get_ctx(pqp);
  isl_printer *p;
  p = isl_printer_to_str(ctx);
  p = isl_printer_set_output_format(p, ISL_FORMAT_C);
  p = isl_printer_print_pw_qpolynomial(p, cpy(pqp));

  char* rs = isl_printer_get_str(p);
  isl_printer_free(p);
  string r(rs);
  free(rs);
  return r;

  //vector<string> code_holder;
  //isl_pw_qpolynomial_foreach_lifted_piece(p, codegen_domain, (void*)(&code_holder));

  //vector<string> val_holder;
  //isl_pw_qpolynomial_foreach_lifted_piece(p, codegen_value, (void*)(&val_holder));

  //assert(code_holder.size() == val_holder.size());
  //string res = "0";
  //for (size_t i = 0; i < code_holder.size(); i++) {
    //string cond = code_holder[i];
    //string val = val_holder[i];
    //res = "(" + cond + " ? " + val + " : " + res + ")";
  //}
  //return res;

  ////vector<string> code_holder;
  ////isl_set_foreach_basic_set(s, bset_codegen_c, &code_holder);
  ////return sep_list(code_holder, "(", ")", " && ");
}

isl_stat map_codegen_c(isl_map* m, void* user) {
  //cout << "Visiting map..." << endl;
  //print(isl_map_get_ctx(m), m);
  //cout << "Cardinality of this map..." << endl;
  auto cardm = card(m);
  //print(isl_map_get_ctx(m), cardm);

  vector<string>& code_holder = *((vector<string>*) user);
  isl_pw_qpolynomial_foreach_lifted_piece(cardm, codegen_domain, (void*)(&code_holder));
  
  //isl_map_foreach_basic_map(m, bmap_codegen_c, (void*)(&code_holder));
  return isl_stat_ok;
}

isl_stat umap_codegen_c_comp(isl_map* m, void* user) {
  map<string, string>& mc = *((map<string, string>*) user);
  mc[range_name(get_space(m))] = str(m);
  for (auto r : mc) {
    cout << "\t" << r.first << ": " << r.second << endl;
  }

  vector<string> holder;
  map_codegen_c(m, &holder);
  mc[range_name(get_space(m))] = sep_list(holder, "(", ")", " || ");

  return isl_stat_ok;
}

map<string, string> umap_codegen_c(umap* const um) {
  cout << "##### Codgen for umap: " << str(um) << endl;
  map<string, string> cm;
  isl_union_map_foreach_map(um, umap_codegen_c_comp, (void*) (&cm));
  return cm;
}

isl_union_pw_qpolynomial* compute_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto ctx = buf.ctx;
  isl_union_map* sched = buf.schedule.at(write_port);
  assert(sched != nullptr);
  
  auto WritesAfterWrite = lex_lt(sched, sched);

  assert(WritesAfterWrite != nullptr);

  auto port0WritesInv =
    inv(buf.access_map.at(write_port));


  assert(port0WritesInv != nullptr);

  auto WritesBeforeRead =
    lex_gt(buf.schedule.at(read_port), buf.schedule.at(write_port));

  assert(WritesBeforeRead != nullptr);
  cout << "WritesBeforeRead = " << str(WritesBeforeRead) << endl;

  auto WriteThatProducesReadData =
    its(dot(buf.access_map.at(read_port), port0WritesInv), WritesBeforeRead);

  cout << "----Writes that produces read data: " << endl;
  cout << "\t" << str(WriteThatProducesReadData) << endl;

  auto time_to_event = inv(sched);
  auto LastWriteBeforeRead =
    dot(lexmax(dot(WriteThatProducesReadData, sched)), time_to_event);

  cout << "----Last Write that produce read data before read: " << endl;
  cout << "\t" << str(LastWriteBeforeRead) << endl;

  WriteThatProducesReadData = LastWriteBeforeRead;
  //auto lex_max_events =
    //dot(lexmax(dot(src_map, sched)), time_to_event);

  cout << "----Writes before read: " << endl;
  cout << "\t" << str(WritesBeforeRead) << endl;

  auto WritesAfterProduction = dot(WriteThatProducesReadData, WritesAfterWrite);

  cout << "----Writes after production: " << endl;
  cout << "\t" << str(WritesAfterProduction) << endl;

  auto WritesBtwn = its(WritesAfterProduction, WritesBeforeRead);

  cout << "----WritesBtwn" << endl;
  print(ctx, WritesBtwn);

  auto c = card(WritesBtwn);
  return c;
}

int compute_dd_bound(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);
  int tight;
  int* b = &tight;
  auto bound = isl_union_pw_qpolynomial_bound(c, isl_fold_max, b);
  auto folds  = get_polynomial_folds(bound);
  int bint;
  if (folds.size() == 0) {
    bint = 0;
  } else {
    assert(folds.size() == 1);
    bint = stoi(codegen_c(folds[0]));
  }
  return bint;
}

string evaluate_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto c = compute_dd(buf, read_port, write_port);

  cout << "Computed dd" << endl;
  auto folds  = get_polynomials(c);
  if (folds.size() == 1) {
    return codegen_c(folds[0]);
  }
  return "0";
}

void generate_vivado_tcl(UBuffer& buf) {
  ofstream of(buf.name + "_hls.tcl");

  of << "open_project -reset " << buf.name << "_proj" << endl;
  of << "set_top " << buf.name << endl;
  of << "add_files -cflags \"-D__VIVADO_SYNTH__\" " + buf.name + ".cpp" << endl;
  of << "add_files -cflags \"-D__VIVADO_SYNTH__\" -tb tb_" + buf.name + ".cpp" << endl;
  of << "open_solution -reset \"solution1\"" << endl;
  of << "set_part {xc7k160tfbg484-2}" << endl;
  of << "list_core" << endl;
  of << "create_clock -period 10" << endl;
  of << "csynth_design" << endl;
  of << "export_design -rtl verilog" << endl;
  of << "cosim_design -rtl verilog" << endl;
  of << "exit" << endl;
  of.close();
}

void generate_memory_struct(std::ostream& out, const std::string& inpt, UBuffer& buf, const int maxdelay) {
  out << "struct " + inpt + "_cache {" << endl;
  out << "\t// Capacity: " << maxdelay + 1 << endl;
  vector<int> read_delays;
  for (auto outpt : buf.get_out_ports()) {
    auto qpd = compute_dd_bound(buf, outpt, inpt);
    read_delays.push_back(qpd);

    out << "\t// DD expr = " << qpd << endl;
  }

  read_delays = sort_unique(read_delays);

  out << "\t// Peak points" << endl;
  for (auto dd : read_delays) {
    out << "\t// DD = " << dd << endl;
  }

  vector<int> break_points;
  if (read_delays.size() == 1) {
    break_points = {read_delays[0], read_delays[0]};
  } else {
    for (size_t i = 0; i < read_delays.size(); i++) {
      break_points.push_back(read_delays[i]);
      if (i < read_delays.size() - 1 && read_delays[i] != read_delays[i + 1] + 1) {
        break_points.push_back(read_delays[i] + 1);
      }
    }
  }
  read_delays = break_points;

  out << "\t// Break points in parition" << endl;
  for (auto dd : read_delays) {
    out << "\t// BP = " << dd << endl;
  }

  vector<string> partitions;
  vector<int> end_inds;
  if (read_delays.size() > 0) {
    for (size_t i = 0; i < read_delays.size(); i++) {
      int current = read_delays[i];
      int partition_capacity = -1;
      if (i < read_delays.size() - 1) {
        if (read_delays[i] != read_delays[i + 1]) {
          int next = read_delays[i + 1];
          partition_capacity = next - current;
          out << "\t// Parition [" << current << ", " << next << ") capacity = " << partition_capacity << endl;
          out << "\tfifo<" << partition_capacity << "> f" << i << ";" << endl;
          partitions.push_back("f" + to_string(i));
          end_inds.push_back(current + partition_capacity - 1);
        }
      } else {
        partition_capacity = 1;
        out << "\t// Parition [" << current << ", " << current << "] capacity = " << partition_capacity << endl;
        out << "\tfifo<" << partition_capacity << "> f" << i << ";" << endl;
        partitions.push_back("f" + to_string(i));
        end_inds.push_back(current + partition_capacity - 1);
      }
    }

    out << endl << endl;
    int nind = 0;
    for (auto p : partitions) {
      int dv = end_inds[nind];
      out << "\tinline int peek_" + to_string(dv) + "() {" << endl;
      out << "\t\treturn " << p << ".back();" << endl;
      out << "\t}" << endl << endl;
      nind++;
    }

    out << endl << endl;

    out << "\tinline int peek(const int offset) {" << endl;
    nind = 0;
    for (auto p : partitions) {
      int dv = end_inds[nind];
      out << "\t\tif (offset == " << dv << ") {" << endl;
      out << "\t\t\treturn " << p << ".back();" << endl;
      out << "\t\t}" << endl;
      nind++;
    }
    out << "\t\tcout << \"Error: Unsupported offset: \" << offset << endl;" << endl;
    out << "\t\tassert(false);" << endl;
    out << "\t\treturn 0;\n" << endl;
    out << "\t}" << endl << endl;

    out << "\tinline void push(const int value) {" << endl;
    if (partitions.size() > 0) {
      for (size_t i = partitions.size() - 1; i >= 1; i--) {
        auto current = partitions[i];
        auto prior = partitions[i - 1];
        out << "\t\t" << current << ".push(" << prior << ".back());" << endl;
      }
      out << "\t\t" << partitions[0] << ".push(value);" << endl;
    }
    out << "\t}" << endl << endl;
  }
  out << "};" << endl << endl;
}

void generate_hls_code(UBuffer& buf) {

  if (buf.port_bundles.size() == 0) {
    for (auto pt : buf.get_out_ports()) {
      buf.port_bundles[pt] = {pt};
    }
    for (auto pt : buf.get_in_ports()) {
      buf.port_bundles[pt] = {pt};
    }
  }
  string inpt = buf.get_in_port();

  cout << "Computing maxdelay..." << endl;

  int maxdelay = 0;
  for (auto outpt : buf.get_out_ports()) {
    int r0 = compute_dd_bound(buf, outpt, inpt);
    if (r0 > maxdelay) {
      maxdelay = r0;
    }
  }

  isl_union_map* res = buf.global_schedule();
  cout << "Map to schedule.." << endl;
  print(buf.ctx, res);

  string code_string = codegen_c(res);
  cout << "Code string..." << endl;
  cout << code_string << endl;

  code_string = "\t" + ReplaceString(code_string, "\n", "\n\t");
  string delay_list = "";
  size_t nd = 0;
  for (auto inpt : buf.get_in_ports()) {
    delay_list += inpt + "_delay";
    if (nd < buf.get_in_ports().size() - 1) {
      delay_list += ", ";
    }
    nd++;
  }

  // Replace fill-ins from polyhedral code generator with calls to memory actions 
  for (auto b : buf.port_bundles) {
    if (buf.is_out_pt(*(begin(b.second)))) {
    } else {
      regex re(b.first + "(.*);");
      string inpt = pick(b.second);
      code_string = regex_replace(code_string, re, inpt + "_write(" + b.first + ", " + inpt + "_delay);");
      //code_string = regex_replace(code_string, re, b.first + "_bundle_action(" + b.first + ", " + delay_list + ");");
      //inpt + "_delay);");
    }
  }
  for (auto b : buf.port_bundles) {
    if (buf.is_out_pt(*(begin(b.second)))) {
      regex re0(b.first + "\\((.*)\\);");
      code_string = regex_replace(code_string, re0, b.first + ".write(" + b.first + "_bundle_action(" + delay_list + ", $1" + "));");
    } else {
    }
  }

  cout << "Code generation..." << endl;
  ofstream os(buf.name + ".cpp");
  std::ostream& out = os;

  out << "#include \"hw_classes.h\"" << endl << endl;
  for (auto inpt : buf.get_in_ports()) {
    generate_memory_struct(out, inpt, buf, maxdelay);
  }

  out << endl << endl;
  for (auto inpt : buf.get_in_ports()) {
  //for (auto inpt : buf.get_in_bundles()) {
    out << "inline void " << inpt << "_write(" << "InputStream& " << inpt << ", " << inpt + "_cache& " << inpt << "_delay) {" << endl;
    out << "\tint " + inpt + "_value = " + inpt + ".read(); " + inpt + "_delay.push(" + inpt + "_value);" << endl;
    out << "}" << endl << endl;
  }

  for (auto outpt : buf.get_out_ports()) {
    umap* src_map = nullptr;
    for (auto inpt : buf.get_in_ports()) {
      auto beforeAcc = lex_gt(buf.schedule.at(outpt), buf.schedule.at(inpt));
      if (src_map == nullptr) {
        src_map =
          ((its(dot(buf.access_map.at(outpt),
                    inv(buf.access_map.at(inpt))), beforeAcc)));
      } else {
        src_map =
          unn(src_map, ((its(dot(buf.access_map.at(outpt), inv(buf.access_map.at(inpt))), beforeAcc))));
      }
    }

    auto sched = buf.global_schedule();
    auto after = lex_gt(sched, sched);

    src_map = its(src_map, after);
    src_map = lexmax(src_map);

    auto time_to_event = inv(sched);

    auto lex_max_events =
      dot(lexmax(dot(src_map, sched)), time_to_event);
    print(ctx(src_map), lex_max_events);

    // Maybe: Get the schedule position, take the lexmax and then get it back?source map and then?? Creating more code?
    out << "// Select if: " << str(src_map) << endl;
    out << "inline int " + outpt + "_select(";
    size_t nargs = 0;
    for (auto pt : buf.get_in_ports()) {
      out << pt + "_cache& " << pt << "_delay" << endl;
      out << ", ";
      nargs++;
    }
    isl_space* s = get_space(buf.domain.at(outpt));
    assert(isl_space_is_set(s));
    vector<string> dim_decls;
    for (int i = 0; i < num_dims(s); i++) {
      dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
    }
    out << sep_list(dim_decls, "", "", ", ");

    out << ") {" << endl;


    // Body of select function
    if (buf.get_in_ports().size() == 1) {
      string delay_expr = evaluate_dd(buf, outpt, inpt);
      auto qpd = compute_dd(buf, outpt, inpt);
      auto pieces = get_pieces(qpd);
      out << "// Pieces..." << endl;
      auto out_domain = buf.domain.at(outpt);
      for (auto p : pieces) {
        out << "// " << str(p.first) << " -> " << str(p.second) << endl;
        out << "// \tis always true on iteration domain: " << isl_set_is_subset(cpy(out_domain), cpy(p.first)) << endl;
      }
      inpt = *(buf.get_in_ports().begin());

      if (pieces.size() == 0) {
        out << "\tint value_" << inpt << " = " << inpt << "_delay.peek_" << 0 << "()" << ";\n";
        out << "\treturn value_" + inpt + ";" << endl;
      } else if (pieces.size() == 1 &&
          isl_set_is_subset(cpy(out_domain), cpy(pieces[0].first))) {
        string dx = codegen_c(pieces[0].second);
        out << "\tint value_" << inpt << " = " << inpt << "_delay.peek_" << dx << "()" << ";\n";
        out << "\treturn value_" + inpt + ";" << endl;
      } else {
        out << "\tint value_" << inpt << " = " << inpt << "_delay.peek(" << "(" << delay_expr << ")" << ");\n";
        out << "\treturn value_" + inpt + ";" << endl;
      }
    } else {
      map<string, string> ms = umap_codegen_c(lex_max_events);
      for (auto e : ms) {
        out << "\tbool select_" << e.first << " = " << e.second << ";" << endl;
      }
      for (auto inpt : buf.get_in_ports()) {
        if (contains_key(inpt, ms)) {
          string delay_expr = evaluate_dd(buf, outpt, inpt);
          out << "\tint value_" << inpt << " = " << inpt << "_delay.peek(" << "(" << delay_expr << ")" << ");\n";
          out << "\tif (select_" + inpt + ") { return value_"+ inpt + "; }\n";
        }
      }
      out << "\tassert(false);\n\treturn 0;\n";
    }

    out << "}" << endl << endl;
  }

  out << "// Bundles..." << endl;
  for (auto b : buf.port_bundles) {
    out << "// " << b.first << endl;
    for (auto pt : b.second) {
      out << "//\t" << pt << endl;
    }
    string rep = pick(b.second);
    if (buf.is_out_pt(rep)) {
      out << "inline int " + b.first + "_bundle_action(";
      vector<string> dim_decls;
      vector<string> dim_args;
      for (auto pt : buf.get_in_ports()) {
        dim_decls.push_back(pt + "_cache& " + pt + "_delay");
        dim_args.push_back(pt + "_delay");
      }
      auto outpt = *begin(b.second);
      isl_space* s = get_space(buf.domain.at(outpt));
      assert(isl_space_is_set(s));
      for (int i = 0; i < num_dims(s); i++) {
        dim_decls.push_back("int " + str(isl_space_get_dim_id(s, isl_dim_set, i)));
        dim_args.push_back(str(isl_space_get_dim_id(s, isl_dim_set, i)));
      }
      string param_string = sep_list(dim_decls, "", "", ", ");
      string arg_string = sep_list(dim_args, "", "", ", ");
      out << param_string;

      out << ") {" << endl;
      if (buf.is_out_pt(outpt)) {
        for (auto p : b.second) {
          out << "\tint " << p << "_res = " << p << "_select(" << arg_string << ");" << endl;
        }
        out << "\treturn " << *(begin(b.second)) << "_res;" << endl;
      }
    } else {
      out << "inline void " + b.first + "_bundle_action(";
      vector<string> dim_decls;
      dim_decls.push_back("InputStream& " + b.first);
      vector<string> dim_args;
      dim_args.push_back(b.first);
      for (auto pt : buf.get_in_ports()) {
        if (elem(pt, b.second)) {
          dim_decls.push_back(pt + "_cache& " + pt + "_delay");
          dim_args.push_back(pt + "_delay");
        }
      }
      string param_string = sep_list(dim_decls, "", "", ", ");
      string arg_string = sep_list(dim_args, "", "", ", ");
      out << param_string;

      out << ") {" << endl;
      out << "\t" << rep << "_write(" << b.first << ", " << rep + "_delay);" << endl;

    }
    out << "}" << endl << endl;
  }
  out << endl << endl;

  out << "void " << buf.name << "(";
  size_t nargs = 0;
  for (auto pt : buf.port_bundles) {
    bool input_bundle = buf.isIn.at(*begin(pt.second));
    out << (input_bundle ? "Input" : "Output") << "Stream& " << pt.first << endl;
    if (nargs < buf.port_bundles.size() - 1) {
      out << ", ";
    }
    nargs++;
  }
  out << ") {" << endl;
  for (auto inpt : buf.get_in_ports()) {
    out << "\t" + inpt + "_cache " + inpt + "_delay;\n\n";
  }
  out << code_string << endl;
  out << "}" << endl;

  cout << "Header file generation..." << endl;
  ofstream of(buf.name + ".h");
  of << "#pragma once\n\n" << endl;
  of << "#include \"hw_classes.h\"" << endl << endl;
  of << "void " << buf.name << "(";
  nargs = 0;
  for (auto pt : buf.port_bundles) {
    bool input_bundle = buf.isIn.at(*begin(pt.second));
    of << (input_bundle ? "Input" : "Output") << "Stream& " << pt.first << endl;
    if (nargs < buf.port_bundles.size() - 1) {
      of << ", ";
    }
    nargs++;
  }
  of << ");" << endl;

  generate_vivado_tcl(buf);
}

void synth_reduce_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();

  // for i in 0, 4:
  //    m[i] = 0
  //    for j in 0 3:
  //      r = m[i]
  //      m[i] = r + 1
  //    out = m[i]
	isl_union_set *domain =
    isl_union_set_read_from_str(ctx, "{ init[i] : 0 <= i <= 4;  read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3; update[i, j] : 0 <= i <= 4 and 0 <= j <= 3; out[i] : 0 <= i <= 4 }");
  auto naive_sched =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> [0, i, 0, 0, 0]; read0[i, j] -> [0, i, 1, j, 0]; update[i, j] -> [0, i, 1, j, 1]; out[i] -> [0, i, 2, 0, 0] }"), domain);
  cout << "Code for naive schedule..." << endl;
  cout << codegen_c(naive_sched) << endl;

  auto before = lex_lt(naive_sched, naive_sched);
  auto writes =
    its(isl_union_map_read_from_str(ctx, "{ init[i] -> M[i]; update[i, j] -> M[i] }"), domain);
  auto reads =
    its(isl_union_map_read_from_str(ctx, "{ read0[i, j] -> M[i]; out[i] -> M[i] }"), domain);
	isl_union_map *validity =
    its(dot(writes, inv(reads)), before);
  cout << "Validity" << endl;
  print(ctx, validity);
	isl_union_map *proximity =
    cpy(validity);

  isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
  auto schedmap = its(isl_schedule_get_map(sched), domain);
  cout << "Reduce schedule..." << endl;
  print(ctx, schedmap);

  cout << "Code for reduce..." << endl;
  cout << codegen_c(schedmap) << endl;
  
  UBuffer buf;
  buf.name = "reduce";
  buf.ctx = ctx;

  buf.add_in_pt("init",
    "{ init[i] : 0 <= i <= 4}",
    "{ init[i] -> M[i] : 0 <= i <= 4 }",
    "{ init[i] -> [0, i, 0, 0, 0] : 0 <= i <= 4 }");

  buf.add_in_pt("update",
    "{ update[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ update[i, j] -> [0, i, 1, j, 1] : 0 <= i <= 4 and 0 <= j <= 3 }");

  buf.add_out_pt("read0",
    "{ read0[i, j] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> M[i] : 0 <= i <= 4 and 0 <= j <= 3 }",
    "{ read0[i, j] -> [0, i, 1, j, 0] : 0 <= i <= 4 and 0 <= j <= 3 }");
  
  buf.add_out_pt("out",
    "{ out[i] : 0 <= i <= 4 }",
    "{ out[i] -> M[i] : 0 <= i <= 4 }",
    "{ out[i] -> [0, i, 2, 0, 0] : 0 <= i <= 4 }");

  generate_hls_code(buf);

  int res = system("clang++ tb_reduce.cpp reduce.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_upsample_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "upsample";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    isl_map_read_from_str(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i, j] : 0 <= i < 10 and 0 <= j < 2}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ read0[i, j] -> M[i] : 0 <= i < 10 and 0 <= j < 2}");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i, j] -> [i, 1, j] : 0 <= i < 10 and 0 <= j < 2 }");
  buf.isIn["read0"] = false;

  generate_hls_code(buf);

  int res = system("clang++ tb_upsample.cpp upsample.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_sr_boundary_condition_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "shift_reg_bc";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    isl_map_read_from_str(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 10}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ read0[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 10}");
  buf.access_map["read1"] =
    isl_map_read_from_str(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 9; read1[i] -> M[9] : 9 <= i < 10 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 10 }");
  buf.access_map["read2"] =
    isl_map_read_from_str(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8; read2[i] -> M[9] : 8 <= i < 10}");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 10 }");
  buf.isIn["read2"] = false;
  
  generate_hls_code(buf);

  int res = system("clang++ tb_shift_reg_bc.cpp shift_reg_bc.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);

}

void synth_wire_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "shift_reg";
  buf.ctx = ctx;

  buf.domain["write"] =
    isl_set_read_from_str(ctx, "{ write[i] : 0 <= i < 10 }");
  buf.access_map["write"] =
    isl_map_read_from_str(ctx, "{ write[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write"] =
    isl_union_map_read_from_str(ctx, "{ write[i] -> [i, 0] : 0 <= i < 10 }");
  buf.isIn["write"] = true;

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ read0[i] : 0 <= i < 8}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ read0[i] -> M[i] : 0 <= i < 8 }");
  buf.schedule["read0"] =
    isl_union_map_read_from_str(ctx, "{ read0[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read0"] = false;

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ read1[i] : 0 <= i < 8}");
  buf.access_map["read1"] =
    isl_map_read_from_str(ctx, "{ read1[i] -> M[i + 1] : 0 <= i < 8 }");
  buf.schedule["read1"] =
    isl_union_map_read_from_str(ctx, "{ read1[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read1"] = false;

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ read2[i] : 0 <= i < 8}");
  buf.access_map["read2"] =
    isl_map_read_from_str(ctx, "{ read2[i] -> M[i + 2] : 0 <= i < 8 }");
  buf.schedule["read2"] =
    isl_union_map_read_from_str(ctx, "{ read2[i] -> [i + 2, 1] : 0 <= i < 8 }");
  buf.isIn["read2"] = false;
  
  generate_hls_code(buf);

  int res = system("clang++ tb_shift_reg.cpp shift_reg.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void synth_lb_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "linebuffer_3x3";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i, j] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> M[j, i] : 0 <= i < 64 and 0 <= j < 64 }",
      "{ write0[i, j] -> [i, j, 0] : 0 <= i < 64 and 0 <= j < 64 }"
      );

  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      string rn = "read_" + to_string(r) + "_" + to_string(c);
      buf.add_out_pt(rn,
          "{ " + rn + "[i, j] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> M[j + " + to_string(c) + ", i + " + to_string(r)  + "] : 0 <= i < 62 and 0 <= j < 62 }",
          "{ " + rn + "[i, j] -> [i + 2, j + 2, 1] : 0 <= i < 62 and 0 <= j < 62 }"
          );

      //int r0 = check_value_dd(buf, rn, "write0");
      int r0 = compute_dd_bound(buf, rn, "write0");
      cout << "Delay (" << c << ", " << r << "): " << r0 << endl;
    }
  }

  generate_hls_code(buf);

  int res = system("clang++ tb_linebuffer_3x3.cpp linebuffer_3x3.cpp");
  assert(res == 0);

  res = system("./a.out");
  assert(res == 0);

  isl_ctx_free(buf.ctx);
}

void permute_test() {

  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.name = "permute";
  buf.ctx = ctx;

  buf.add_in_pt("write0",
      "{ write0[i] : 0 <= i < 10 }",
      "{ write0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ write0[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_in_pt("write1",
      "{ write1[i] : 0 <= i < 10 }",
      "{ write1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ write1[i] -> [0, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read0",
      "{ read0[i] : 0 <= i < 10 }",
      "{ read0[i] -> M[2*i] : 0 <= i < 10 }",
      "{ read0[i] -> [1, i] : 0 <= i < 10 }"
      );

  buf.add_out_pt("read1",
      "{ read1[i] : 0 <= i < 10 }",
      "{ read1[i] -> M[2*i + 1] : 0 <= i < 10 }",
      "{ read1[i] -> [1, i] : 0 <= i < 10 }"
      );

  generate_hls_code(buf);
}

struct op {

  op* parent;
  bool is_loop;
  int start;
  int end_exclusive;
  std::string name;
  std::vector<op*> children;
  std::set<std::string> produces;
  std::set<pair<std::string, std::string> > produce_locs;

  std::set<std::string> consumes;
  std::set<pair<std::string, std::string> > consume_locs;

  isl_ctx* ctx;

  op() : parent(nullptr), is_loop(false) {}

  op* add_loop(const std::string& name, const int l, const int u) {
    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this ;
    lp->is_loop = true;
    lp->start = l;
    lp->end_exclusive = u;
    children.push_back(lp);

    return lp;
  }

  op* add_op(const std::string& name) {
    auto fo = new op();
    fo->name = name;
    fo->ctx = ctx;
    children.push_back(fo);
    return fo;
  }

  void add_load(const std::string& b, const std::string& loc) {
    consumes.insert(b + "[" + loc + "]");
    consume_locs.insert({b, loc});
  }

  void add_store(const std::string& b, const std::string& loc) {
    produces.insert(b + "[" + loc + "]");
    produce_locs.insert({b, loc});
  }

  void add_args(const std::vector<op*>& args) {
    for (auto a : args) {
      consumes.insert(a->name);
    }
  }
  
  void populate_iteration_domains(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    if (is_loop) {
      auto nds = active_vecs;
      nds.push_back(to_string(start) + " <= " + name + " < " + to_string(end_exclusive));
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, nds);
      }
    } else {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, active_vecs);
      }
    }
  }

  void populate_schedule_vectors(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    cout << "Populating schedule for " << name << ", active vecs: " << active_vecs.size() << endl;
    if (is_loop) {
      auto nds = active_vecs;
      cout << "At loop: " << this->name << endl;
      assert(nds.size() > 0);
      //nds.at(nds.size() - 1) = to_string(stoi(nds.at(nds.size() - 1)) + 1);

      nds.push_back(name);
      nds.push_back("0");
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, nds);
        nds[nds.size() - 1] = to_string(stoi(nds[nds.size() - 1]) + 1);
      }
    } else {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, active_vecs);
      }
    }
  }

  void populate_iter_vars(map<op*, vector<string> >& varmap, vector<string>& active_vars) {
    if (is_loop) {
      auto nv = active_vars;
      nv.push_back(name);
      for (auto c : children) {
        c->populate_iter_vars(varmap, nv);
      }
    } else {
      varmap[this] = active_vars;
      for (auto c : children) {
        c->populate_iter_vars(varmap, active_vars);
      }
    }
  }

  set<op*> all_ops() {
    set<op*> ops{this};
    if (is_loop) {
      ops = {};
    }
    for (auto c : children) {
      for (auto op : c->all_ops()) {
        ops.insert(op);
      }
    }
    return ops;
  }


};

typedef op loop;

struct prog {

  struct isl_ctx* ctx;
  op* root;

  prog() {
    ctx = isl_ctx_alloc();
    root = new op();
    root->name = "root";
    root->ctx = ctx;
    root->is_loop = true;
    root->start = 0;
    root->end_exclusive = 1;
  }

  set<op*> all_ops() { return root->all_ops(); }

  loop* add_loop(const std::string& name, const int l, const int u) {
    return root->add_loop(name, l, u);
  }

  string op_iter(op* const o) {
    vector<string> act;
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    auto iters = map_find(o, ivars);
    auto vars = sep_list(iters, "[", "]", ", ");

    return o->name + vars;
  }

  isl_union_set* whole_iteration_domain() {
    map<op*, isl_set*> doms = domains();
    isl_union_set* whole_d = isl_union_set_read_from_str(ctx, "{ }");
    for (auto d : doms) {
      whole_d = unn(whole_d, to_uset(d.second));
    }
    return whole_d;
  }

  map<op*, vector<string> > iter_vars() {
    vector<string> act;
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);
    return ivars;
  }

  map<op*, isl_set*> domains() {
    vector<string> sched_coeffs{"0"};
    vector<string> sched_domains;
    
    map<op*, vector<string> > idoms;
    vector<string> act;
    root->populate_iteration_domains(idoms, act);
    
    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    map<op*, isl_set*> doms;
    for (auto op : ivars) {
      cout << "Getting op production:" << op.first->name << endl;
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto ds = sep_list(dom, "", "", " and ");

      doms[op.first] =
        isl_set_read_from_str(ctx, string("{ " + op.first->name + vars + " : " + ds + " }").c_str());

      cout << "Got op..." << endl;
    }
    return doms;
  }

  map<op*, isl_map*> schedules() {
    map<op*, isl_map*> scheds;
    vector<string> sched_coeffs{"0"};
    vector<string> sched_domains;
    
    map<op*, vector<string> > idoms;
    vector<string> act;
    root->populate_iteration_domains(idoms, act);
    
    map<op*, vector<string> > vecs;
    vector<string> base{"0"};
    cout << "Calling populate sched vectors" << endl;
    root->populate_schedule_vectors(vecs, base);

    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    for (auto op : vecs) {
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto doms = sep_list(dom, "", "", " and ");

      cout << "\t" << op.first->name << vars << " -> " << sep_list(op.second, "[", "]", ", ") << " : " << doms << endl;
      scheds[op.first] =
        isl_map_read_from_str(ctx, string("{ " + op.first->name + vars + " -> " + sep_list(op.second, "[", "]", ", ") + " : " + doms + " }").c_str());

    }
    return scheds;
  }

  umap* unoptimized_schedule() {
    map<op*, isl_map*> prog_ops = schedules();
    umap* m = isl_union_map_read_from_str(ctx, "{ }");
    for (auto o : prog_ops) {
      m = unn(m, to_umap(o.second));
    }
    return m;
  }

  umap* producer_map() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->produces) {
        umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* consumer_map() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      cout << op->name << endl;
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->consumes) {
        cout << "\tConsumes: " << p << endl;
        umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      m = unn(m, pmap);
    }
    return m;
  }

  isl_union_map* optimized_codegen() {
    umap* naive_sched = unoptimized_schedule();
    auto before = lex_lt(naive_sched, naive_sched);
    auto domain = whole_iteration_domain();
    auto writes =
      its(producer_map(), domain);
    auto reads =
      its(consumer_map(), domain);

    cout << "Producer map..." << str(writes) << endl;
    cout << "Consumer map..." << str(reads) << endl;

    isl_union_map *validity =
      its(dot(writes, inv(reads)), before);
    print(ctx, validity);
    isl_union_map *proximity =
      cpy(validity);

    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);
    auto schedmap = its(isl_schedule_get_map(sched), domain);
    cout << "Optimized schedule..." << endl;
    cout << codegen_c(schedmap);
    return schedmap;
  }

  void unoptimized_codegen() {
    umap* sched = unoptimized_schedule();
    cout << codegen_c(sched);
  }
};

void conv_1d_test() {
  prog prg;
  auto p = prg.add_loop("p", 0, 10);
  auto write = p->add_op("write");
  write->add_store("M", "p");

  auto c = prg.add_loop("c", 0, 10 - 2);
  auto read0 = c->add_op("read0");
  read0->add_load("M", "c");
  read0->add_load("M", "c + 1");
  read0->add_load("M", "c + 2");
  read0->add_store("T", "c");

  auto compute = c->add_op("compute_out");
  compute->add_load("T", "c");

  cout << "Program code without optimization..." << endl;
  prg.unoptimized_codegen();

  cout << "Program with optimized schedule..." << endl;
  umap* opt_sched = prg.optimized_codegen();

  cout << "---- Generating customized re-use buffers" << endl;
  map<string, UBuffer> buffers;

  auto domains = prg.domains();

  int usuffix = 0;

  cout << "Got ops and domains" << endl;

  for (auto op : prg.all_ops()) {

    for (auto produced : op->produce_locs) {
      string name = produced.first;

      if (!contains_key(name, buffers)) {
        UBuffer buf;
        buf.name = name;
        buf.ctx = prg.ctx;
        buffers[name] = buf;
      }

      UBuffer& buf = buffers.at(name);
      
      string pt_name = name + "_" + op->name + "_" + to_string(usuffix);
      buf.port_bundles[op->name].insert(pt_name);

      assert(contains_key(op, domains));

      // Map from??
      isl_map* produced_here =
        its(isl_map_read_from_str(buf.ctx, string("{ " + prg.op_iter(op) + " -> " + name + "[" + produced.second + "]" + " }").c_str()), cpy(domains.at(op)));

      buf.add_in_pt(pt_name, domains.at(op), produced_here, its(opt_sched, domains.at(op)));

      usuffix++;
      // Add in port..."
    }


    for (auto consumed : op->consume_locs) {
      string name = consumed.first;

      if (!contains_key(name, buffers)) {
        UBuffer buf;
        buf.name = name;
        buf.ctx = prg.ctx;
        buffers[name] = buf;
      }

      UBuffer& buf = buffers.at(name);

      string pt_name = name + "_" + op->name + "_" + to_string(usuffix);
      buf.port_bundles[op->name].insert(pt_name);
      
      isl_map* consumed_here=
        its(isl_map_read_from_str(buf.ctx, string("{ " + prg.op_iter(op) + " -> " + name + "[" + consumed.second + "]" + " }").c_str()), cpy(domains.at(op)));

      assert(contains_key(op, domains));

      buf.add_out_pt(pt_name, domains.at(op), consumed_here, its(opt_sched, domains.at(op)));

      usuffix++;
    }

  }

  cout << "# of buffers: " << buffers.size() << endl;
  for (auto& b : buffers) {
    auto& buf = b.second;
    cout << "--- " << b.second.name << endl;
    cout << "---- In ports" << endl;
    for (auto inpt : b.second.get_in_ports()) {
      cout << "\t" << inpt << endl;
      cout << "\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    }
    cout << "---- Out ports" << endl;
    for (auto inpt : b.second.get_out_ports()) {
      cout << "\t" << inpt << endl;
      cout << "\t\tdom : " << str(buf.domain.at(inpt)) << endl;
      cout << "\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
      cout << "\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    }

    cout << "Generating code..." << endl;
    generate_hls_code(b.second);

    int res = system(string("g++ -c " + b.second.name + ".cpp").c_str());
    assert(res == 0);
  }
}

int main() {

  synth_reduce_test();
  conv_1d_test();

  synth_wire_test();
  synth_sr_boundary_condition_test();
  synth_lb_test();
  synth_upsample_test();

  return 0;

}



