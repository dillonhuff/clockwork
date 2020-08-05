#pragma once

#include "ubuffer.h"
#include "isl_utils.h"
#include "utils.h"
#include "qexpr.h"
#include "app.h"

struct ir_node;
struct prog;

typedef ir_node op;
typedef op loop;
typedef std::string buffer_name;
typedef std::string address;
typedef std::vector<std::pair<std::string, std::string> > piecewise_address;

static inline
std::string pipe_cpy(const std::string& a, const int pipe) {
  return a + "_pipe" + str(pipe);
}

isl_multi_aff*
to_multi_aff(isl_ctx* context, const std::vector<std::string>& vars, const std::string& addr);

isl_pw_multi_aff*
to_pw_multi_aff(isl_ctx* context, const std::vector<std::string>& vars, const piecewise_address& addr);


string str(const piecewise_address& addr);

struct ir_node {

  ir_node* parent;

  // Every ir_node is either a loop or an operation
  bool is_loop;

  // Loop bounds
  // TODO: Change these to either strings or QExprs
  // so that we can do automatic bounds analysis
  int start;
  int end_exclusive;

  // Operations / other loops contained in this loop nest
  std::vector<op*> children;

  // Operation fields
  std::string name;
  // Locations written
  std::vector<pair<buffer_name, address> > produce_locs;
  std::vector<dynamic_address> dynamic_store_addresses;

  // Locations read
  std::vector<pair<buffer_name, piecewise_address> > consume_locs_pair;
  std::vector<dynamic_address> dynamic_load_addresses;

  // The name of the HLS C++ function that this op invokes
  std::string func;
  // Name of loop index variables used by this unit
  std::vector<std::string> index_variables_needed_by_compute;
  // Annotation used for debug printouts
  int unroll_factor;

  isl_ctx* ctx;

  ir_node() : parent(nullptr), is_loop(false), unroll_factor(1) {}

  ~ir_node();

  void copy_fields_from(op* other);
  void copy_memory_operations_from(op* other);
  void replace_variable(const std::string& var, const int val);
  void replace_variable(const std::string& var, const std::string& val);

  void delete_child(op* c) {
    vector<op*> new_children;
    for (auto ch : children) {
      if (ch != c) {
        new_children.push_back(ch);
      }
    }
    children = new_children;
  }

  bool dynamic_writes(const std::string& buf) {
    for (auto d : dynamic_store_addresses) {
      if (d.buffer == buf) {
        return true;
      }
    }
    return false;
  }

  bool dynamic_reads(const std::string& buf) {
    for (auto d : dynamic_load_addresses) {
      if (d.buffer == buf) {
        return true;
      }
    }
    return false;
  }

  int trip_count() const {
    assert(is_loop);
    return end_exclusive - start;
  }

  void add_prefix_to_writes(const std::string& prefix,
      const std::string& buf) {
    for (auto& b : produce_locs) {
      if (b.first == buf) {
        b.second = prefix + ", " + b.second;
      }
    }
  }

  void add_prefix_to_reads(const std::string& prefix,
      const std::string& buf) {
    for (auto& b : consume_locs_pair) {
      if (b.first == buf) {
        for (auto& p : b.second) {
          p.second = prefix + ", " + p.second;
        }

      }
    }
  }

  void replace_writes_to(const std::string& source_buf, const std::string& replacement) {
    for (auto& b : produce_locs) {
      if (b.first == source_buf) {
        b.first = replacement;
      }
    }
  }
  void replace_reads_from(const std::string& source_buf, const std::string& replacement) {
    for (auto& b : consume_locs_pair) {
      if (b.first == source_buf) {
        b.first = replacement;
      }
    }
  }

  void replace_child(op* c, op* replacement) {
    for (int i = 0; i < (int) children.size(); i++) {
      if (children.at(i) == c) {
        children[i] = replacement;
        return;
      }
    }
    assert(false);
  }

  vector<piecewise_address> write_addrs() const {
    vector<piecewise_address> addrs;
    for (auto l : produce_locs) {
      addrs.push_back({l});
    }
    return addrs;
  }

  vector<piecewise_address> write_addrs(const std::string& buf) const {
    vector<piecewise_address> addrs;
    for (auto l : produce_locs) {
      if (l.first == buf) {
        addrs.push_back({{"", l.second}});
      }
    }
    return addrs;
  }

  vector<piecewise_address> read_addrs(const std::string& buf) const {
    vector<piecewise_address> addrs;
    for (auto l : consumes_pair()) {
      if (l.first == buf) {
        addrs.push_back(l.second);
      }
    }
    return addrs;
  }

  int num_read_ports(const std::string& buf) const {
    int reads = 0;
    for (auto l : consumes_pair()) {
      if (l.first == buf) {
        reads++;
      }
    }
    return reads;
  }

  std::set<string> buffers_referenced() const {
    std::set<string> written = buffers_written();
    for (auto b : buffers_read()) {
      written.insert(b);
    }
    return written;
  }

  std::set<string> buffers_written() const {
    std::set<string> written;
    for (auto l : produce_locs) {
      written.insert(l.first);
    }
    return written;
  }

  std::set<string> buffers_read() const {
    std::set<string> read;
    for (auto l : consumes_pair()) {
      read.insert(l.first);
    }
    return read;
  }

  std::set<std::string> descendant_op_names() {
    std::set<std::string> names;
    for (auto d : descendant_ops()) {
      names.insert(d->name);
    }
    return names;
  }

  std::set<op*> descendant_ops() {
    std::set<op*> dec = descendants();
    std::set<op*> ops;
    for (auto d : dec) {
      if (!d->is_loop) {
        ops.insert(d);
      }
    }
    return ops;
  }

  std::set<op*> descendants() {
    std::set<op*> anc{this};
    for (auto c : children) {
      for (auto d : c->descendants()) {
        anc.insert(d);
      }
      anc.insert(c);
    }
    return anc;
  }

  std::set<op*> ancestors() {
    std::set<op*> anc;
    if (parent != nullptr) {
      for (auto a : parent->ancestors()) {
        anc.insert(a);
      }
    }
    return anc;
  }

  void compute_unit_needs_index_variable(const std::string& v) {
    index_variables_needed_by_compute.push_back(v);
  }

  map<op*, Box> get_domain_boxes() {
      Box empty;
      map<op*, Box> domain_map;
      get_domain_boxes(empty, domain_map);
      return domain_map;
  }

  void get_domain_boxes(Box b, map<op*, Box> & domain_map) {
      domain_map[this] = b;
      if (is_loop) {
          b.intervals.push_back({start, end_exclusive-1});
      }
      for (auto c : children) {
          c->get_domain_boxes(b, domain_map);
      }
  }

  void pretty_print() const {
    pretty_print(std::cout, 0);
  }

  void pretty_print(int level) const {
    pretty_print(std::cout, level);
  }

  void pretty_print(std::ostream& out, int level) const {

    if (is_loop) {
      out << tab(level) << "for (int " << name << " = " << start << "; " << name << " < " << end_exclusive << "; " << name << "++) {" << endl;
      for (auto c : children) {
        c->pretty_print(out, level + 1);
      }
      out << tab(level) << "}" << endl;
    } else {
      vector<string> args;
      out << tab(level) << name << ": " << comma_list(produces()) << " = " << func << "(" << comma_list(consumes()) << ")" << endl;
      //out << tab(level) << name << ": " << comma_list(produces()) << " = " << func << "(" << comma_list(consumes()) << ")" << endl;
    }
  }

  string consumed_value_name(const pair<string, vector<pair<string, string> > >& val_loc) {
    string b = val_loc.first;
    auto loc = val_loc.second;

    string val_name = b;
    for (auto val : loc) {
      val_name += "_";
      val_name += val.second;
    }
    val_name += "_value";
    val_name = c_sanitize(val_name);
    return val_name;

    //string val_name = c_sanitize(val_loc.first + "_" + val_loc.second + "_value");
    //return val_name;
  }
  string consumed_value_name(pair<string, string>& val_loc) {
    string val_name = c_sanitize(val_loc.first + "_" + val_loc.second + "_value");
    return val_name;
  }

  void add_function(const std::string& n) {
    //assert(n != name);
    func = n;
  }

  void add_function(const std::string& n, const vector<string>& args) {
    //assert(n != name);
    func = n;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    return xl;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    auto yl = xl->add_loop(y, y_min, y_max);
    return yl;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    auto yl = xl->add_loop(y, y_min, y_max);
    auto cl = yl->add_loop(c, c_min, c_max);
    return cl;
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max,
      const std::string& k, int k_min, int k_max) {
    auto xl = this->add_loop(x, x_min, x_max);
    auto yl = xl->add_loop(y, y_min, y_max);
    auto cl = yl->add_loop(c, c_min, c_max);
    auto kl = cl->add_loop(k, k_min, k_max);
    return kl;
  }

  op* container_child(op* source) {
    for (auto c : children) {
      if (source == c) {
        return c;
      }
    }

    for (auto c : children) {
      auto sr = c->container_child(source);
      if (sr != nullptr) {
        return c;
      }
    }
    return nullptr;
  }

  op* add_loop_before(op* source, const std::string& name, const int l, const int u) {
    assert(is_loop);

    op* sr = container_child(source);
    assert(sr != nullptr);

    cout << "Before inserting " << name << " we have " << children.size() << " children" << endl;

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this;
    lp->is_loop = true;
    lp->start = l;
    lp->end_exclusive = u;
    vector<op*> new_children;
    bool found_sr = false;
    for (auto c : children) {
      if (c == sr) {
        new_children.push_back(lp);
        found_sr = true;
      }
      new_children.push_back(c);
    }
    cout << "After inserting " << name << " we have " << children.size() << " children" << endl;


    assert(found_sr);
    assert(new_children.size() == children.size() + 1);

    this->children = new_children;

    return lp;
  }
  
  op* add_op_after(op* source, const std::string& name);

  op* add_loop_after(op* source, const std::string& name, const int l, const int u) {
    assert(is_loop);

    op* sr = container_child(source);
    assert(sr != nullptr);

    cout << "Before inserting " << name << " we have " << children.size() << " children" << endl;

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this;
    lp->is_loop = true;
    lp->start = l;
    lp->end_exclusive = u;
    vector<op*> new_children;
    bool found_sr = false;
    for (auto c : children) {
      new_children.push_back(c);
      if (c == sr) {
        new_children.push_back(lp);
        found_sr = true;
      }
    }
    cout << "After inserting " << name << " we have " << children.size() << " children" << endl;


    assert(found_sr);
    assert(new_children.size() == children.size() + 1);

    this->children = new_children;

    return lp;
  }
  
  op* add_loop_front(const std::string& name, const int l, const int u) {
    assert(is_loop);
    //assert(!elem(name, all_existing_loop_names()));

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this;
    lp->is_loop = true;
    lp->start = l;
    lp->end_exclusive = u;
    children.insert(begin(children), lp);

    return lp;
  }
  op* add_loop(const std::string& name, const int l, const int u) {
    assert(is_loop);
    //assert(!elem(name, all_existing_loop_names()));

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this;
    lp->is_loop = true;
    lp->start = l;
    lp->end_exclusive = u;
    children.push_back(lp);

    return lp;
  }

  op* store(const pair<string, string>& dst, const pair<string, string>& src) {
    auto op = add_op("store_" + dst.first + "_from_" + src.first);
    op->add_load(src.first, src.second);
    op->add_store(dst.first, dst.second);
    return op;
  }

  op* stencil(const pair<string, string>& src,
      const std::string& func_name,
      const std::vector<string>& vars,
      const std::vector<vector<int> >& offsets) {
    assert(false);
    return nullptr;
  }

  op* stencil_op(const string& out_name, const string& cu, const string& in_buf, vector<string> vars, const vector<vector<int> >& offsets) {
    string var_str = comma_list(vars);
    vector<string> loads = {};
    for (auto offset : offsets) {
      assert(offset.size() == vars.size());

      loads.push_back(in_buf);
      vector<string> ofstrs;
      int i = 0;
      for (auto val : offset) {
        ofstrs.push_back(vars.at(i) + " + " + to_string(val));
        i++;
      }
      loads.push_back(comma_list(ofstrs));
    }
    cout << "Loads in stencil op: " << endl;
    for (auto ld : loads) {
      cout << "\t" << ld << endl;
    }
    return add_op({out_name, var_str}, cu, loads);
  }

  op* add_op(const pair<string, string>& src, const std::string& func_name, const std::vector<string>& loads) {
    int n_ops = children.size();
    auto res = add_op(src.first + "_" + func_name + to_string(n_ops));
    assert(loads.size() % 2 == 0);
    vector<string> ops;
    for (int i = 0; i < loads.size(); i += 2) {
      auto r = res->add_load(loads[i], loads[i + 1]);
      ops.push_back(r);
    }
    assert(ops.size() == loads.size() / 2);
    res->add_function(func_name, ops);
    res->add_store(src.first, src.second);
    return res;
  }

  op* add_op(const std::string& name) {
    //assert(!elem(name, all_existing_op_names()));

    auto fo = new op();
    fo->parent = this;
    fo->name = name;
    fo->ctx = ctx;
    children.push_back(fo);
    return fo;
  }

  void add_dynamic_store(const std::string& buf,
      const std::string& addr_table,
      const std::string& table_offset) {
    add_load(addr_table, table_offset);
    dynamic_load_addresses.push_back({buf, addr_table, table_offset});
    add_store(buf, "0");
  }

  void add_dynamic_load(const std::string& buf,
      const std::string& addr_table,
      const std::string& table_offset) {
    add_load(addr_table, table_offset);
    dynamic_store_addresses.push_back({buf, addr_table, table_offset});
    add_load(buf, "0");
  }

  string add_load(const std::string& b, const std::vector<std::pair<std::string, std::string>> loc) {
    assert(!is_loop);
    consume_locs_pair.push_back({b, loc});
    return consumed_value_name({b, loc});
    //string val_name = b;
    //for (auto val : loc) {
      //val_name += "_";
      //val_name += val.second;
    //}
    //val_name += "_value";
    //val_name = c_sanitize(val_name);
    //return val_name;
  }


  string add_load(const std::string& b, const std::string& d0, const std::string& d1, const std::string& d2, const std::string& d3) {
    return add_load(b, d0 + ", " + d1 + ", " + d2 + ", " + d3);
  }
  string add_load(const std::string& b, const std::string& d0, const std::string& d1, const std::string& d2) {
    return add_load(b, d0 + ", " + d1 + ", " + d2);
  }

  string add_load(const std::string& b, const std::string& d0, const std::string& d1) {
    return add_load(b, d0 + ", " + d1);
  }

  string add_load(const std::string& b, const std::string& loc) {
    return add_load(b, {{"", loc}});
    //assert(!is_loop);
    //consume_locs.push_back({b, loc});
    //string val_name = c_sanitize(b + "_" + loc + "_value");
    //return val_name;
  }

  vector<string> consumes() const {
    vector<string> ps;
    for (auto p : consume_locs_pair) {
      ps.push_back(p.first + str(p.second));
      //"[" + p.second + "]");
    }
    return ps;
  }

  vector<pair<string, vector<pair<string, string>>>> consumes_pair() const {
   return consume_locs_pair;
  }

  vector<string> produces() const {
    vector<string> ps;
    for (auto p : produce_locs) {
      ps.push_back(p.first + "[" + p.second + "]");
    }
    return ps;
  }

  void add_store(const std::string& b, const std::string& d0, const std::string& d1, const std::string& d2, const std::string& d3) {
    add_store(b, d0 + ", " + d1 + ", " + d2 + ", " + d3);
  }

  void add_store(const std::string& b, const std::string& d0, const std::string& d1, const std::string& d2) {
    add_store(b, d0 + ", " + d1 + ", " + d2);
  }

  void add_store(const std::string& b, const std::string& d0, const std::string& d1) {
    add_store(b, d0 + ", " + d1);
  }

  void add_store(const std::string& b, const std::string& loc) {
    assert(!is_loop);
    produce_locs.push_back({b, loc});
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
    if (is_loop) {
      auto nds = active_vecs;
      assert(nds.size() > 0);

      nds.push_back(name);
      nds.push_back("0");
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, nds);
        nds[nds.size() - 1] = to_string(safe_stoi(nds[nds.size() - 1]) + 1);
      }
    } else {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, active_vecs);
      }
    }

    size_t max_len = 1;
    for (auto& v : sched_vecs) {
      auto& vecs = v.second;
      if (vecs.size() > max_len) {
        max_len = vecs.size();
      }
    }

    for (auto& v : sched_vecs) {
      size_t diff = max_len - v.second.size();
      for (size_t d = 0; d < diff; d++) {
        v.second.push_back("0");
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

  std::set<op*> all_loops() {
    std::set<op*> loops{this};
    if (!is_loop) {
      loops = {};
    }
    for (auto c : children) {
      for (auto op : c->all_loops()) {
        loops.insert(op);
      }
    }
    return loops;
  }

  std::set<std::string> all_existing_loop_names() {
    std::set<string> names;
    for (auto op : all_root_ops()) {
      if (op->is_loop) {
        names.insert(op->name);
      }
    }
    return names;
  }

  std::set<std::string> all_existing_op_names() {
    std::set<string> names;
    for (auto op : all_root_ops()) {
      if (!op->is_loop) {
        names.insert(op->name);
      }
    }
    return names;
  }

  ir_node* find_root() {
    if (parent != nullptr) {
      return this;
    }
    return parent->find_root();
  }

  std::set<op*> all_root_ops() {
    return find_root()->all_ops();
  }

  std::set<op*> all_ops() {
    std::set<op*> ops{this};
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


struct prog {

  int unique_num;
  std::string name;
  struct isl_ctx* ctx;

  ir_node* root;

  // Names of input and output buffers
  std::set<string> ins;
  std::set<string> outs;
  map<string, int> buffer_port_widths;

  // The C++ source file which holds HLS code
  // for the compute unit implementations
  string compute_unit_file;

  map<string, vector<int> > buffer_bounds;

  void sanity_check();

  op* parent(op* p);

  void set_bounds(const std::string& loop, const int start, const int end_exclusive);
  void extend_bounds(const std::string& loop, const int start, const int end_exclusive);

  std::string un(const std::string& prefix) {
    return unique_name(prefix);
  }

  std::string unique_name(const std::string& prefix) {
    auto name = prefix + str(unique_num);
    unique_num++;
    return name;
  }

  op* merge_ops(const std::string& loop);

  op* add_loop(const int l, const int u) {
    return add_loop(unique_name("l"), l, u);
  }

  isl_set* domain(op* op);
  umap* read_map(op* op);
  isl_map* read_map(op* op, const std::string& buf);

  isl_point* max_point(op* op) {
    std::vector<string> surrounding_loops = map_find(op, iter_vars());

    isl_point* pt =
      isl_point_zero(set_space(ctx, surrounding_loops.size()));
    int i = 0;
    for (auto lp : surrounding_loops) {
      pt = isl_point_set_coordinate_val(pt, isl_dim_set, i, isl_val_int_from_si(ctx, end_exclusive(lp) - 1));
      i++;
    }
    return pt;
  }

  isl_point* min_point(op* op) {
    std::vector<string> surrounding_loops = map_find(op, iter_vars());

    isl_point* pt =
      isl_point_zero(set_space(ctx, surrounding_loops.size()));
    int i = 0;
    for (auto lp : surrounding_loops) {
      pt = isl_point_set_coordinate_val(pt, isl_dim_set, i, isl_val_int_from_si(ctx, start(lp)));
      i++;
    }
    return pt;
  }

  op* find_loop(const std::string& target_op) {
    for (auto v : all_loops()) {
      if (v->name == target_op) {
        return v;
      }
    }
    cout << "Error: No loop named " << target_op << " in" << endl;
    pretty_print();
    assert(false);
  }

  int start(const std::string& loop) {
    return find_loop(loop)->start;
  }

  int end_exclusive(const std::string& loop) {
    return find_loop(loop)->end_exclusive;
  }

  op* find_op(const std::string& target_op) {
    for (auto v : all_ops()) {
      if (v->name == target_op) {
        return v;
      }
    }
    cout << "Error: No op named " << target_op << " in" << endl;
    pretty_print();
    assert(false);
  }

  int trip_count(const std::string& loop_level) {
    return find_loop(loop_level)->trip_count();
  }

  int buffer_size(const std::string& buf) const {
    if (!(contains_key(buf, buffer_bounds))) {
      return 0;
    }
    assert(contains_key(buf, buffer_bounds));

    auto dims = map_find(buf, buffer_bounds);
    if (dims.size() == 0) {
      return 0;
    }
    //assert(dims.size() > 0);

    int sz = dims.at(0);
    for (int i = 1; i < dims.size(); i++) {
      sz *= dims.at(i);
    }
    return sz;
  }

  map<op*, Box> get_domain_boxes() {
      return root->get_domain_boxes();
  }


  void pretty_print() {
    cout << "program: " << name << endl;
    cout << "buffers..." << endl;
    for (auto b : buffer_bounds) {
      cout << tab(1) << b.first << bracket_list(b.second) << endl;
    }
    cout << "operations..." << endl;
    root->pretty_print(cout, 0);
  }

  int buffer_port_width(const string& name) const {
    if (!contains_key(name, buffer_port_widths)) {
      return 32;
    }
    assert(contains_key(name, buffer_port_widths));

    auto width = buffer_port_widths.at(name);
    return width;
  }

  string buffer_element_type_string(const string& name) const {
    if (!contains_key(name, buffer_port_widths)) {
      return "hw_uint<32> ";
    }
    assert(contains_key(name, buffer_port_widths));

    auto width = buffer_port_widths.at(name);
    return "hw_uint<" + to_string(width) + ">";
  }

  int dim(const string& buf, const int dim) {
    if (!(contains_key(buf, buffer_bounds))) {
      cout << "No key for: " << buf << " in buffer_bounds" << endl;
    }
    assert(contains_key(buf, buffer_bounds));
    return map_find(buf, buffer_bounds).at(dim);
  }

  void stencil2(const std::string& operation) {
    regex opRe("(.*)\\((.*)\\) = (.*)\\((.*)\\((.*)\\)\\)");
    smatch match;
    auto res = regex_search(operation, match, opRe);
    assert(res);
    cout << "ResultBuffer : " << match[1] << endl;
    cout << "Index        : " << match[2] << endl;
    cout << "Operation    : " << match[3] << endl;
    cout << "Input buffer : " << match[4] << endl;
    cout << "Input inds   : " << match[5] << endl;
    assert(false);
  }

  vector<string> vector_load(const std::string& img, const std::string& rbase, const int ro, const int re) {
    vector<string> conv_loads;
    for (int r = ro; r < re; r++) {
      conv_loads.push_back(img);
      conv_loads.push_back(rbase + " + " + to_string(r));
    }
    return conv_loads;
  }

  vector<string> vector_load(const std::string& img, const std::string& rbase, const int ro, const int re,
      const std::string& cbase, const int co, const int ce) {
    vector<string> conv_loads;
    for (int r = ro; r < re; r++) {
      for (int c = co; c < ce; c++) {
        conv_loads.push_back(img);
        conv_loads.push_back(rbase + " + " + to_string(r) + ", " + cbase + " + " + to_string(c));
      }
    }
    return conv_loads;
  }

  vector<string> vector_load(const std::string& img, const std::string& rbase, const int ro, const int re,
      const std::string& cbase, const int co, const int ce,
      const std::string& bbase, const int bo, const int be) {
    vector<string> conv_loads;
    for (int r = ro; r < re; r++) {
      for (int c = co; c < ce; c++) {
        for (int b = bo; b < be; b++) {
          conv_loads.push_back(img);
          conv_loads.push_back(rbase + " + " + to_string(r) + ", " + cbase + " + " + to_string(c) + ", " + bbase + " + " + to_string(b));
        }
      }
    }
    return conv_loads;
  }

  loop* add_nest(
      const std::string& x, int x_min, int x_max) {
    return root->add_nest(x, x_min, x_max);
  }

  loop* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max) {
    return root->add_nest(x, x_min, x_max, y, y_min, y_max);
  }

  loop* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max) {
    return root->add_nest(x, x_min, x_max, y, y_min, y_max, c, c_min, c_max);
  }

  op* add_nest(
      const std::string& x, int x_min, int x_max,
      const std::string& y, int y_min, int y_max,
      const std::string& c, int c_min, int c_max,
      const std::string& k, int k_min, int k_max) {
    return root->add_nest(x, x_min, x_max, y, y_min, y_max, c, c_min, c_max, k, k_min, k_max);
  }

  bool is_output(const std::string& name) {
    return elem(name, outs);
  }

  bool is_input(const std::string& name) {
    return elem(name, ins);
  }

  bool is_boundary(const std::string& name) {
    return elem(name, ins) || elem(name, outs);
  }

  void add_output(const std::string& name) {
    outs.insert(name);
  }

  void add_input(const std::string& name) {
    ins.insert(name);
  }


  prog() : unique_num(0) {
    ctx = isl_ctx_alloc();
    root = new op();
    root->name = "root";
    root->ctx = ctx;
    root->is_loop = true;
    root->start = 0;
    root->end_exclusive = 1;
    compute_unit_file = "clockwork_standard_compute_units.h";
  }

  prog(const std::string& name_) : unique_num(0) {
    ctx = isl_ctx_alloc();
    root = new op();
    root->name = "root";
    root->ctx = ctx;
    root->is_loop = true;
    root->start = 0;
    root->end_exclusive = 1;
    name = name_;
    compute_unit_file = "clockwork_standard_compute_units.h";
  }

  ~prog() {
    //isl_ctx_free(ctx);
  }

  std::set<op*> all_loops() { return root->all_loops(); }
  std::set<op*> all_ops() { return root->all_ops(); }

  op* add_op(const std::string& name) {
    return root->add_op(name);
  }

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

  vector<string> iter_vars(op* o) {
    return map_find(o, iter_vars());
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
      //cout << "Getting op production:" << op.first->name << endl;
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto ds = sep_list(dom, "", "", " and ");

      doms[op.first] =
        isl_set_read_from_str(ctx, string("{ " + op.first->name + vars + " : " + ds + " }").c_str());

      //cout << "Got op..." << endl;
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
    //cout << "Calling populate sched vectors" << endl;
    root->populate_schedule_vectors(vecs, base);

    map<op*, vector<string> > ivars;
    root->populate_iter_vars(ivars, act);

    for (auto op : vecs) {
      auto iters = map_find(op.first, ivars);
      auto vars = sep_list(iters, "[", "]", ", ");

      auto dom = map_find(op.first, idoms);
      auto doms = sep_list(dom, "", "", " and ");

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

  std::string optimized_loop_nest() {
    umap* opt_sched = optimized_codegen();
    auto domain = whole_iteration_domain();
    auto schedmap = its(opt_sched, domain);
    return codegen_c(schedmap);
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

      for (auto p : op->produces()) {
        umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      m = unn(m, pmap);
    }
    return m;
  }

  map<op*, isl_map*> producer_maps_no_domain();

  map<op*, isl_map*> producer_maps() {
    map<op*, isl_map*> m;
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = rdmap(ctx, "{}");
      for (auto p : op->produces()) {
          isl_union_map* vmap =
            its(rdmap(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
      }
      m[op] = to_map(pmap);
    }
    return m;

  }

  umap* producer_map(const std::string& buf_name) {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      for (auto p : op->produces()) {
        string buf = take_until(p, "[");
        if (buf == buf_name) {
          umap* vmap =
            its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
        }
      }
      m = unn(m, pmap);
    }
    return m;
  }

  umap* consumer_map(const std::string& buf_name) {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
     // adding vector pair
      for (auto top_pair : op->consumes_pair()) {
        if (top_pair.first == buf_name) {
          string cond = "{ ";
          for (auto sec_pair : top_pair.second) {
            cond = cond + string(op->name + ivar_str + " -> " + top_pair.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
          }
          cond = cond.substr(0, cond.length() - 2);
          cond = cond + string(" }");

          umap* vmap = its(isl_union_map_read_from_str(ctx, cond.c_str()), to_uset(dom));
          pmap = unn(pmap, vmap);
        }
     }
     m = unn(m, pmap);
    }
    return m;
  }

  map<op*, umap*> consumer_maps() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    map<op*, umap*> maps;
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");

      // for boundary condition expressions
      for (auto top_pair : op->consumes_pair()) {
        string cond = "{ ";
        for (auto sec_pair : top_pair.second) {
          cond = cond + string(op->name + ivar_str + " -> " + top_pair.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
        }
        cond = cond.substr(0, cond.length() - 2);
        cond = cond + string(" }");
        umap* vmap = its(isl_union_map_read_from_str(ctx, cond.c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
      }
      maps[op] = pmap;
    }
    return maps;
  }

  umap* consumer_map() {
    auto ivars = iter_vars();
    auto doms = domains();

    auto ops = root->all_ops();
    auto m = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : ops) {
      auto vars = map_find(op, ivars);
      string ivar_str = sep_list(vars, "[", "]", ", ");
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");

      // for boundary condition expressions
      for (auto top_pair : op->consumes_pair()) {
        string cond = "{ ";
        for (auto sec_pair : top_pair.second) {
          cond = cond + string(op->name + ivar_str + " -> " + top_pair.first + "[" + sec_pair.second + "] : " + sec_pair.first + "; ");
        }
        cond = cond.substr(0, cond.length() - 2);
        cond = cond + string(" }");
        umap* vmap = its(isl_union_map_read_from_str(ctx, cond.c_str()), to_uset(dom));
        pmap = unn(pmap, vmap);
     }
     m = unn(m, pmap);

    }
    return m;
  }

  umap* relative_orders() {
    // Relative order of accesses for each op must be the same
    umap* rel_order = isl_union_map_read_from_str(ctx, "{}");
    for (auto op : schedules()) {
      auto op_sched = to_umap(op.second);
      auto op_order = lex_lt(op_sched, op_sched);
      rel_order = unn(rel_order, op_order);
    }

    cout << "Rel order = " << str(rel_order) << endl;
    return rel_order;
  }

  umap* validity_deps() {
    umap* naive_sched = unoptimized_schedule();
    cout << "Naive sched: " << str(naive_sched) << endl;

    auto before = lex_lt(naive_sched, naive_sched);

    cout << "Getting iteration domain..."<< endl;

    auto domain = whole_iteration_domain();

    cout << "Got domain..." << endl;

    auto writes =
      its(producer_map(), domain);
    auto reads =
      its(consumer_map(), domain);

    cout << "Got producer / consumer maps" << endl;

    //isl_union_map *validity =
      //its(dot(writes, inv(writes)), before);
    auto validity =
      its(dot(writes, inv(reads)), before);
    //isl_union_map *validity =
      //its(dot(writes, inv(reads)), before);

    //assert(false);
    return validity;
  }

  isl_schedule* optimized_schedule();

  isl_union_map* optimized_codegen() {
    auto domain = whole_iteration_domain();

    isl_schedule* sched = optimized_schedule();
    cout << "Sched: " << str(sched) << endl;
    //assert(false);
    auto schedmap = its(isl_schedule_get_map(sched), domain);
    //cout << "Schedule map: " << str(schedmap) << endl;
    //assert(false);
    return schedmap;
  }

  void unoptimized_codegen() {
    umap* sched = unoptimized_schedule();
    cout << codegen_c(sched);
  }
};

// Schedules all loops in sequential order
// and emits HLS C++ code for the program
void generate_vanilla_hls_code(prog& prg);
void generate_unoptimized_code(prog& prg);
void generate_unoptimized_code(CodegenOptions& options, prog& prg);

// Re-schedules all loops using ISL
// and then emits HLS C++ code for the program
void generate_optimized_code(prog& prg);
void generate_optimized_code(CodegenOptions& options, prog& prg);

std::set<pair<string, string> > edge_buffers(map<string, UBuffer>& buffers, prog& prg);

std::set<pair<string, string> > outputs(map<string, UBuffer>& buffers, prog& prg);

std::set<pair<string, string> > inputs(map<string, UBuffer>& buffers, prog& prg);

// Variants on code generation functions
void generate_app_code(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap,
    map<string, isl_set*>& domain_map);

void generate_app_code(map<string, UBuffer>& buffers, prog& prg, umap* sched);

void generate_app_code(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg, umap* schedmap);

void generate_app_code(map<string, UBuffer>& buffers, prog& prg);

map<string, UBuffer> build_buffers(prog& prg, umap* opt_sched);

map<string, UBuffer> build_buffers(prog& prg);

void generate_app_code(CodegenOptions& options, map<string, UBuffer>& buffers, prog& prg, umap* schedmap);

prog duplicate_interface(prog& p);

vector<pair<string, string> > incoming_bundles(op* op, map<string, UBuffer>& buffers, prog& prg);
vector<pair<string, string> > outgoing_bundles(op* op, map<string, UBuffer>& buffers, prog& prg);


std::vector<string> unoptimized_result(prog& prg);
void generate_regression_testbench(prog& prg);
void generate_regression_testbench(prog& prg, map<string, UBuffer>& buffers);


std::vector<std::string> run_regression_tb(const std::string& name);

std::vector<std::string> run_regression_tb(prog& prg);


void run_tb(prog& prg);

void regression_test(prog& prg);
void regression_test(CodegenOptions& options, prog& prg);

std::set<std::string> get_kernels(prog& prg);

std::vector<piecewise_address> addrs_referenced(op* p, const std::string& buffer);

vector<string> upsample_vars(const std::string& target_buf, op* reader, prog& prg);

void make_constant_dd(const std::string& target_op, const std::string& target_buf, prog& prg);

std::vector<string> topologically_sort_kernels(prog& prg);

std::set<string> buffers_written(op* p);

bool writes(const std::string& target_buf, op* p);

op* find_writer(const std::string& target_buf, prog& prg);

std::set<string> get_producers(string next_kernel, prog& prg);

void deep_copy_child(op* dest, op* source, prog& original);

std::set<string> get_consumed_buffers(const std::string& kernel, prog& original);
std::set<string> get_produced_buffers(const std::string& kernel, prog& original);

std::set<string> get_consumed_buffers(const std::set<std::string>& group, prog& original);
std::set<string> get_produced_buffers(const std::set<std::string>& group, prog& original);

void generate_verilog(CodegenOptions& options,
    map<string, UBuffer>& buffers,
    prog& prg,
    umap* schedmap);

umap* hardware_schedule(prog& prg);

std::string optimized_code_string(prog& prg);

void generate_trace(prog& prg, umap* sched);

void all_register_files(prog& prg, CodegenOptions& options);
int compile_compute(const std::string& name);

vector<string> surrounding_vars(op* loop, prog& prg);
prog extract_group_to_separate_prog(std::set<std::string>& group, prog& original);


void unroll(prog& prg, const std::string& var);

vector<int> indexes(op* p);
vector<string> write_vars(const std::string& target_buf, op* reader, prog& prg);

void all_unbanked(prog& prg, CodegenOptions& options);
void infer_bounds(const std::string& buf, const std::vector<int>& int_bounds, prog& prg);

void get_variable_levels(op* node, map<string,int>& variable_map, int current_level);
map<string, int> get_variable_levels(prog& prg);

std::set<string> all_buffers(prog& prg);
std::set<op*> find_readers(const string& buff, prog& prg);

void release(ir_node* op);
void release(prog& prg);

void unroll_reduce_loops(prog& prg);


void
pack_bv(const int indent,
    ostream& conv_out,
    const string& value,
    const std::vector<string>& lanes,
    const int lane_width);

vector<string>
split_bv(const int indent,
    ostream& conv_out,
    const string& value,
    const int lane_width,
    const int nlanes);

pair<std::string, std::string> remove_whitespace(const pair<std::string, std::string>& addr);
std::string remove_whitespace(const std::string& addr);
piecewise_address remove_whitespace(const piecewise_address& addr);

std::set<op*> find_writers(const string& buff, prog& prg);


void extend_bounds_to_multiple_of(const int factor, const std::string& buf, prog& prg);


void infer_bounds_and_unroll(const std::string& out, const std::vector<int>& bounds, const int unroll_factor, prog& prg);

void unroll_producer_matching(const std::string& buf, const int unroll_factor, prog& prg);

void strip_mine(const int factor, op* loop, prog& prg);


typedef std::string simplified_addr;

struct cu_val {
  bool is_arg;
  string name;
  int arg_buf_pos;

  std::string str() const {
    if (is_arg) {
      return name + "_lane_" + ::str(arg_buf_pos);
    } else {
      return name;
    }
  }
};

struct compute_unit_internals {
  std::string name;
  vector<op*> operations;
  map<op*, string> result_names;
  map<op*, vector<cu_val> > arg_names;
  vector<op*> output_producers;

  map<op*, map<string, map<address, string> > > res_names;
  vector<pair<buffer_name, piecewise_address> > raddrs;
  vector<pair<buffer_name, address> > waddrs;

  vector<string> buffers_read() {
    vector<string> br;
    for (auto b : raddrs) {
      if (!elem(b.first, br)) {
        br.push_back(b.first);
      }
    }
    return br;
  }

  int num_lanes(const std::string& buf) {
    int cnt = 0;
    for (auto b : raddrs) {
      if (b.first == buf) {
        cnt++;
      }
    }
    return cnt;
  }

};

simplified_addr simplify(const piecewise_address& ar);


void merge_basic_block_ops(prog& prg);

std::set<op*> get_inner_loops(prog& prg);


isl_set* iteration_domain(op* loop, prog& prg);

isl_map* consumer_map(op* loop, const std::string& b, prog& prg);
umap* read_at(const std::string& level, const std::string& buffer, prog& prg);
umap* first_iteration_reads(umap* reads, const std::string& level, prog& prg);
isl_map* get_initial_data(const std::string& level, const std::string& buffer, prog& prg);


void all_exhaustive_banked(prog& prg, CodegenOptions& options);


vector<string> reduce_vars(prog& prg);

void sanity_check_all_reads_defined(prog& prg);
