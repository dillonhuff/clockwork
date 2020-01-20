#include "isl_utils.h"

#include <cassert>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class UBuffer {
  public:
    struct isl_ctx* ctx;
    isl_space* space;
    isl_space* map_space;

    std::map<string, bool> isIn;
    std::map<string, isl_set*> domain;
    std::map<string, isl_map*> access_map;
    std::map<string, isl_map*> schedule;

    std::map<string, int> varInds;

    std::vector<string> logical_addr_vars;
    std::vector<string> physical_addr_vars;
    std::vector<string> writer_vars;
    std::vector<string> reader_vars;

    // Map from writer vars to logical addr vars
    map<string, isl_map*> write_funcs;

    // Map from reader vars to logical addr vars
    map<string, isl_map*> read_funcs;
    
    isl_map* physical_address_mapping;

    void add_out_port(const std::string& name) {

    }

    void add_in_port(const std::string& name) {

    }

    void add_var(const std::string& name) {

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
  buf.add_var("c");
  buf.add_var("r");

  // Physical addresses
  buf.add_var("pc");
  buf.add_var("pr");

  // Writer loop nest
  buf.add_var("wy");
  buf.add_var("wx");

  // Reader loop nest
  buf.add_var("ry");
  buf.add_var("rxo");
  buf.add_var("rxi");

  // Time
  buf.add_var("t");

  // Add ports, say two in, three out
  buf.add_in_port("in0");
  buf.add_in_port("in1");

  buf.add_out_port("out0");
  buf.add_out_port("out1");
  buf.add_out_port("out2");

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

void ubuffer_test() {
  struct isl_ctx *ctx;

  ctx = isl_ctx_alloc();

  UBuffer buf;
  buf.ctx = ctx;
  buf.space = isl_space_set_alloc(ctx, 0, 1);
  buf.map_space = isl_space_alloc(ctx, 0, 1, 1);

  buf.isIn["in"] = true;
  buf.domain["in"] = isl_set_from_basic_set(buf.build_domain({0, 7}));
  buf.schedule["in"] = buf.build_map(0);
  
  buf.add_out_port("out0", {0, 5});
  buf.schedule["out0"] = buf.build_map(2);
  buf.add_out_port("out1", {1, 6});
  buf.schedule["out1"] = buf.build_map(1);
  buf.add_out_port("out2", {2, 7});
  buf.schedule["out2"] = buf.build_map(0);

  cout << "--- Domains" << endl;
  for (auto d : buf.domain) {
    cout << "Set for: " << d.first << endl;
    print(buf.ctx, d.second);
  }

  cout << "--- Schedules" << endl;
  for (auto d : buf.schedule) {
    cout << "Schedule for: " << d.first << endl;
    print(buf.ctx, d.second);
  }

  cout << "Adding domains to schedules..." << endl;
  for (auto d : buf.schedule) {
    isl_set* s = buf.domain.at(d.first);
    isl_map* m = isl_map_intersect_domain(cpy(d.second), cpy(s));
    cout << "Schedule with domain for " << d.first << endl;
    print(buf.ctx, m);
    cout << "Cardinality of domain..." << endl;
    print(buf.ctx, isl_set_card(cpy(s)));
  }

  string in_name = buf.get_in_port();
  isl_map* in_sched = buf.schedule.at(in_name);
  isl_set* in_domain = buf.domain.at(in_name);
  isl_pw_multi_aff* write_time =
    isl_map_lexmax_pw_multi_aff(in_sched);
  cout << "Write times..." << endl;
  print(ctx, write_time);
  for (auto d : buf.isIn) {
    if (!d.second) {
      string out_name = d.first;
      cout << "Output port: " << d.first << endl;
      isl_map* out_sched = buf.schedule.at(out_name);
      isl_pw_multi_aff* first_read_time =
        isl_map_lexmin_pw_multi_aff(out_sched);

      auto diff =
        isl_pw_multi_aff_sub(cpy(first_read_time), cpy(write_time));

      cout << "Write -> read Difference..." << endl;
      print(ctx, diff);

      auto diff_map =
        isl_map_from_pw_multi_aff(diff);
      
      isl_set* out_domain = buf.domain.at(out_name);
      diff_map = isl_map_intersect_domain(diff_map, cpy(out_domain));
      auto range = isl_map_range(diff_map);

      // Intersect with range?
      isl_basic_set* less_value = isl_basic_set_universe(cpy(buf.space));
      isl_local_space* ls = isl_local_space_from_space(buf.space);
      isl_constraint* c = isl_constraint_alloc_inequality(cpy(ls));
      c = isl_constraint_set_constant_si(c, -1);
      c = isl_constraint_set_coefficient_si(c, isl_dim_set, 0, -1);
      less_value = isl_basic_set_add_constraint(less_value, c);

      cout << "LTZ..." << endl;
      print(buf.ctx, less_value);

      range = isl_set_intersect(isl_set_from_basic_set(less_value), range);

      cout << "Range of output..." << endl;
      print(ctx, range);

      if (isl_set_is_empty(range)) {
        cout << "\tPassed, no violated deps" << endl;
      } else {
        cout << "\tERROR: Some values read before being written" << endl;
        assert(false);
      }
    }
  }

  isl_ctx_free(buf.ctx);

}

isl_stat get_const(isl_set* s, isl_qpolynomial* qp, void* user) {
  vector<int>* vals = (vector<int>*) user;
  cout << "getting piece" << endl;
  isl_val* v = isl_qpolynomial_get_constant_val(qp);
  print(isl_val_get_ctx(v), v);
  long vs = isl_val_get_num_si(v);
  cout << "value = " << vs << endl;
  vals->push_back(vs);
  return isl_stat_ok;
}

int check_value_dd(UBuffer& buf, const std::string& read_port, const std::string& write_port) {
  auto ctx = buf.ctx;
  isl_map* sched = buf.schedule.at(write_port);
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
  
  cout << "Cardinality..." << endl;
  print(ctx, c);

  auto s = isl_pw_qpolynomial_n_piece(c);
  cout << "s = " << s << endl;

  assert(s <= 1);

  if (s == 0) {
    return 0;
  } else {
    vector<int> nums;
    void* user = (void*) &nums;
    isl_pw_qpolynomial_foreach_piece(c, get_const, user);
    assert(nums.size() == 1);
    return nums[0];
  }
}

void synth_wire_test() {
  struct isl_ctx *ctx;
  ctx = isl_ctx_alloc();
  
  UBuffer buf;
  buf.ctx = ctx;

  buf.domain["write0"] =
    isl_set_read_from_str(ctx, "{ W[i] : 0 <= i < 10 }");
  buf.access_map["write0"] =
    isl_map_read_from_str(ctx, "{ W[i] -> M[i] : 0 <= i < 10 }");
  buf.schedule["write0"] =
    isl_map_read_from_str(ctx, "{ W[i] -> [i, 0] : 0 <= i < 10 }");

  // Read 0 through 7
  buf.domain["read0"] =
    isl_set_read_from_str(ctx, "{ R0[i] : 0 <= i < 8}");
  buf.access_map["read0"] =
    isl_map_read_from_str(ctx, "{ R0[i] -> M[i] : 0 <= i < 8 }");
  buf.schedule["read0"] =
    isl_map_read_from_str(ctx, "{ R0[i] -> [i + 2, 1] : 0 <= i < 8 }");

  // Read 1 through 8
  buf.domain["read1"] =
    isl_set_read_from_str(ctx, "{ R1[i] : 0 <= i < 8}");
  buf.access_map["read1"] =
    isl_map_read_from_str(ctx, "{ R1[i] -> M[i + 1] : 0 <= i < 8 }");
  buf.schedule["read1"] =
    isl_map_read_from_str(ctx, "{ R1[i] -> [i + 2, 1] : 0 <= i < 8 }");

  // Read 2 through 9
  buf.domain["read2"] =
    isl_set_read_from_str(ctx, "{ R2[i] : 0 <= i < 8}");
  buf.access_map["read2"] =
    isl_map_read_from_str(ctx, "{ R2[i] -> M[i + 2] : 0 <= i < 8 }");
  buf.schedule["read2"] =
    isl_map_read_from_str(ctx, "{ R2[i] -> [i + 2, 1] : 0 <= i < 8 }");

  int r0 = check_value_dd(buf, "read0", "write0");
  assert(r0 == 2);
  int r1 = check_value_dd(buf, "read1", "write0");
  assert(r1 == 1);
  int r2 = check_value_dd(buf, "read2", "write0");
  assert(r2 == 0);
  
  isl_ctx_free(buf.ctx);
}

int main() {

  ubuffer_test();
  test_swizzle_buffer();
  basic_space_tests();

  synth_wire_test();

  return 0;
}
