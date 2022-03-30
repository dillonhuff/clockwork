#pragma once

//#include "ubuffer.h"
#include "isl_utils.h"
#include "utils.h"
#include "qexpr.h"
#include "app.h"

typedef vector<string> path;

enum ir_node_type {
  IR_NODE_TYPE_OPERATION,
  IR_NODE_TYPE_LOOP,
  IR_NODE_TYPE_IF
};

std::ostream& operator << ( ostream& strm, ir_node_type tt);

struct ir_node;
struct prog;

typedef ir_node op;
typedef op loop;
typedef std::string buffer_name;
typedef std::string address;
typedef std::vector<std::pair<std::string, std::string> > piecewise_address;

struct dynamic_address {
  std::string buffer;
  std::string table;
  std::string table_offset;
};

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
  ir_node_type tp;

  // Loop bounds
  // TODO: Change these to either strings or QExprs
  // so that we can do automatic bounds analysis
  int start;
  int end_exclusive;

  // If statement condition
  std::string condition;

  // Operations / other loops contained in this loop nest
  std::vector<op*> children;

  // Operation fields
  std::string name;

  // Locations written
  //std::vector<pair<buffer_name, address> > produce_locs;
  std::vector<pair<buffer_name, piecewise_address> > produce_locs;
  std::vector<dynamic_address> dynamic_store_addresses;

  // Locations read
  std::vector<pair<buffer_name, piecewise_address> > consume_locs_pair;
  std::vector<dynamic_address> dynamic_load_addresses;

  // The name of the HLS C++ function that this op invokes
  std::string func;
  // Name of loop index variables used by this unit
  std::vector<std::string> index_variables_needed_by_compute;

  // loop index variables used by memory has delay
  int index_variables_prefetch_cycle = 0;
  // latency which further extract by schedule into
  int latency = 0;

  // Annotation used for debug printouts
  int unroll_factor;

  isl_ctx* ctx;

  ir_node() : parent(nullptr),
  tp(IR_NODE_TYPE_OPERATION),
  unroll_factor(1) {}

  ~ir_node();

  bool is_loop() const { return tp == IR_NODE_TYPE_LOOP; }
  bool is_op() const { return tp == IR_NODE_TYPE_OPERATION; }
  bool is_if() const { return tp == IR_NODE_TYPE_IF; }

  void copy_fields_from(op* other);
  void copy_memory_operations_from(op* other);
  void replace_variable(const std::string& var, const int val);
  void replace_variable(const std::string& var, const std::string& val);
  void shift_address(const std::string& var, const std::vector<int>& min_locs);

  bool is_inner_loop() const {
    if (this->is_loop()) {
      return false;
    }
    for (auto c : children) {
      if (c->is_loop()) {
        return false;
      }
    }
    return true;
  }

  bool is_coarse_grained_loop() const {
    if (!is_loop()) {
      return false;
    } else if ((children.size() > 1) && (!is_inner_loop())) {
      return true;
    } else {
      return false;
    }
  }

  void delete_child(op* c) {
    vector<op*> new_children;
    for (auto ch : children) {
      if (ch != c) {
        new_children.push_back(ch);
      }
    }
    children = new_children;
  }

  void attach_to(op* new_parent) {
    parent->delete_child(this);
    new_parent->children.push_back(this);
    parent = new_parent;
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
    assert(is_loop());
    return end_exclusive - start;
  }

  void add_var_suffix_to_writes(const std::string& suffix, vector<string> & loop_var) {
    for (auto& b : produce_locs) {
        //buffer, piecese loc
        for (auto& p : b.second) {
            //condition, address expr
            cout << "orgin expr: " << p.second << endl;
            auto expr_list = split_at(p.second, ",");
            vector<string> new_expr_list;
            for (auto expr: expr_list) {
              cout << "\t"<< expr << endl;
              string new_expr = expr;
              for (auto var: loop_var) {
                if (contains(expr, var)) {
                  new_expr = ReplaceString(expr, var, var + suffix);
                  cout << "\tnew expr: " << new_expr << endl;
                }
              }
              new_expr_list.push_back(new_expr);
            }
            p.second = sep_list(new_expr_list, "", "", ",");
                cout << "new expr list: " << p.second << endl;
        }

    }
  }

  void add_var_suffix_to_reads(const std::string& suffix, vector<string> & loop_var) {
    for (auto& b : consume_locs_pair) {
        //buffer, piecese loc
        for (auto& p : b.second) {
            //condition, address expr
            cout << "orgin expr: " << p.second << endl;
            auto expr_list = split_at(p.second, ",");
            vector<string> new_expr_list;
            for (auto expr: expr_list) {
              cout << "\t"<< expr << endl;
              string new_expr = expr;
              for (auto var: loop_var) {
                if (contains(expr, var)) {
                  new_expr = ReplaceString(expr, var, var + suffix);
                  cout << "\tnew expr: " << new_expr << endl;
                }
              }
              new_expr_list.push_back(new_expr);
            }
            p.second = sep_list(new_expr_list, "", "", ",");
                cout << "new expr list: " << p.second << endl;
        }

    }
  }

  void add_prefix_to_writes(const std::string& prefix,
      const std::string& buf) {
    for (auto& b : produce_locs) {
      if (b.first == buf) {
        for (auto& p : b.second) {
          p.second = prefix + ", " + p.second;
        }

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

  void replace_child(op* c, op* replacement) {
    for (int i = 0; i < (int) children.size(); i++) {
      if (children.at(i) == c) {
        children[i] = replacement;
        return;
      }
    }
    assert(false);
  }

  void replace_reads_from(const std::string& source_buf, const std::string& replacement);
  void replace_writes_to(const std::string& source_buf, const std::string& replacement);
  vector<piecewise_address> read_addrs() const {
    vector<piecewise_address> addrs;
    for (auto l : consume_locs_pair) {
      addrs.push_back(l.second);
    }
    return addrs;
  }

  vector<piecewise_address> write_addrs() const {
    vector<piecewise_address> addrs;
    for (auto l : produces_pair()) {
      addrs.push_back(l.second);
    }
    return addrs;
  }

  vector<piecewise_address> write_addrs(const std::string& buf) const {
    vector<piecewise_address> addrs;
    for (auto l : produces_pair()) {
      if (l.first == buf) {
        addrs.push_back(l.second);
        //addrs.push_back({{"", l.second}});
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
    for (auto l : produces_pair()) {
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
      if (d->is_op()) {
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

  void index_variable_prefetch_cycle(const int v) {
    index_variables_prefetch_cycle = v;
  }

  void add_index_var_suffix(const std::string & suffix) {
    for (auto & compute_var : index_variables_needed_by_compute) {
      compute_var += suffix;
    }
  }

  map<op*, Box> get_domain_boxes() {
      Box empty;
      map<op*, Box> domain_map;
      get_domain_boxes(empty, domain_map);
      return domain_map;
  }

  void get_domain_boxes(Box b, map<op*, Box> & domain_map) {
      domain_map[this] = b;
      if (is_loop()) {
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

  void pretty_print(std::ostream& out, int level) const;

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

  }

  string consumed_value_name(pair<string, string>& val_loc) {
    string val_name = c_sanitize(val_loc.first + "_" + val_loc.second + "_value");
    return val_name;
  }

  void add_function(const std::string& n) {
    //assert(n != name);
    func = n;
  }

  void add_latency(const int l) {
    latency = l;
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
    assert(source != nullptr);
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
    assert(is_loop());

    op* sr = container_child(source);
    assert(sr != nullptr);

    cout << "Before inserting " << name << " we have " << children.size() << " children" << endl;

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this;
    //lp->is_loop() = true;
    lp->tp = IR_NODE_TYPE_LOOP;
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
    assert(is_loop());

    op* sr = container_child(source);
    assert(sr != nullptr);

    cout << sr->name << endl;
    cout << "Before inserting " << name << " we have " << children.size() << " children" << endl;

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this;
    //lp->is_loop() = true;
    lp->tp = IR_NODE_TYPE_LOOP;
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
    assert(is_loop());
    //assert(!elem(name, all_existing_loop_names()));

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this;
    //lp->is_loop() = true;
    lp->tp = IR_NODE_TYPE_LOOP;
    lp->start = l;
    lp->end_exclusive = u;
    children.insert(begin(children), lp);

    return lp;
  }

  op* add_if(const std::string& condition) {
    assert(!is_op());

    auto lp = new op();
    lp->name = this->name + "_if_" + str(children.size());
    lp->condition = condition;
    lp->ctx = ctx;
    lp->parent = this;
    lp->tp = IR_NODE_TYPE_IF;
    children.push_back(lp);

    return lp;
  }

  op* add_if(const std::string& name, const std::string& condition) {
    assert(!is_op());

    auto lp = new op();
    lp->name = name;
    lp->condition = condition;
    lp->ctx = ctx;
    lp->parent = this;
    lp->tp = IR_NODE_TYPE_IF;
    children.push_back(lp);

    return lp;
  }

  op* add_if_front(const std::string& name, const std::string& condition) {
    assert(!is_op());

    auto lp = new op();
    lp->name = name;
    lp->condition = condition;
    lp->ctx = ctx;
    lp->parent = this;
    lp->tp = IR_NODE_TYPE_IF;
    children.insert(begin(children), lp);

    return lp;
  }

  op* add_loop(const std::string& name, const int l, const int u) {
    //TODO: remove this assert due to the if optimization
    //assert(is_loop());
    assert(name != "");
    //assert(!elem(name, all_existing_loop_names()));

    auto lp = new op();
    lp->name = name;
    lp->ctx = ctx;
    lp->parent = this;
    //lp->is_loop() = true;
    lp->tp = IR_NODE_TYPE_LOOP;
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
    assert(is_op());
    consume_locs_pair.push_back({b, loc});
    return consumed_value_name({b, loc});
  }

  string add_load(const std::string& b, const std::string& d0, const std::string& d1, const std::string& d2, const std::string& d3, const std::string& d4, const std::string& d5) {
    return add_load(b, d0 + ", " + d1 + ", " + d2 + ", " + d3 + ", " + d4 + ", " + d5);
  }

  string add_load(const std::string& b, const std::string& d0, const std::string& d1, const std::string& d2, const std::string& d3, const std::string& d4) {
    return add_load(b, d0 + ", " + d1 + ", " + d2 + ", " + d3 + ", " + d4);
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
  }

  vector<string> consumes() const {
    vector<string> ps;
    for (auto p : consume_locs_pair) {
      ps.push_back(p.first + str(p.second));
    }
    return ps;
  }

  vector<pair<string, vector<pair<string, string>>>> consumes_pair() const {
   return consume_locs_pair;
  }

  std::vector<pair<buffer_name, piecewise_address> > produces_pair() const {
    return produce_locs;
  }

  vector<string> produces() const {
    vector<string> ps;
    for (auto p : produces_pair()) {
      ps.push_back(p.first + str(p.second));
    }
    return ps;

  }
  void add_store(const std::string& b, const std::string& d0, const std::string& d1, const std::string& d2, const std::string& d3, const std::string& d4, const std::string& d5) {
    add_store(b, d0 + ", " + d1 + ", " + d2 + ", " + d3 + ", " + d4 + ", " + d5);
  }

  void add_store(const std::string& b, const std::string& d0, const std::string& d1, const std::string& d2, const std::string& d3, const std::string& d4) {
    add_store(b, d0 + ", " + d1 + ", " + d2 + ", " + d3 + ", " + d4);
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
    assert(!is_loop());
    //produce_locs.push_back({b, loc});
    produce_locs.push_back({b, {{"", loc}}});
  }

  void populate_iteration_domains(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    if (is_loop()) {
      auto nds = active_vecs;
      nds.push_back(to_string(start) + " <= " + name + " < " + to_string(end_exclusive));
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, nds);
      }
    } else if(is_if()) {
      auto nds = active_vecs;
      nds.push_back(condition);
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, nds);
      }
    } else if(is_op()){
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_iteration_domains(sched_vecs, active_vecs);
      }
    } else {
      cout << "Have not implemented this IR Node type: " << this->tp << endl;
      assert(false);
    }
  }

  void populate_schedule_vectors(map<op*, vector<string> >& sched_vecs, vector<string>& active_vecs) {
    if (is_loop()) {
      auto nds = active_vecs;
      assert(nds.size() > 0);

      nds.push_back(name);
      nds.push_back("0");
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, nds);
        nds[nds.size() - 1] = to_string(safe_stoi(nds[nds.size() - 1]) + 1);
      }
    } else if(is_if()) {
      //Skip the if node
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, active_vecs);
      }
    } else if(is_op()) {
      sched_vecs[this] = active_vecs;
      for (auto c : children) {
        c->populate_schedule_vectors(sched_vecs, active_vecs);
      }
    } else {
      cout << "Have not implemented this IR Node type: " << this->tp << endl;
      assert(false);
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
    if (is_loop()) {
      auto nv = active_vars;
      nv.push_back(name);
      for (auto c : children) {
        c->populate_iter_vars(varmap, nv);
      }
    } else if (is_if()) {
      for (auto c : children) {
        c->populate_iter_vars(varmap, active_vars);
      }
    } else {
      varmap[this] = active_vars;
      for (auto c : children) {
        c->populate_iter_vars(varmap, active_vars);
      }
    }
  }

  std::set<op*> all_non_ops() {
    std::set<op*> loops{this};
    if (is_op()){
      loops = {};
    }
    for (auto c : children) {
      for (auto op : c->all_non_ops()) {
        loops.insert(op);
      }
    }
    return loops;
  }

  std::set<op*> all_loops() {
    std::set<op*> loops{this};
    if (!is_loop()) {
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
      if (op->is_loop()) {
        names.insert(op->name);
      }
    }
    return names;
  }

  std::set<std::string> all_existing_op_names() {
    std::set<string> names;
    for (auto op : all_root_ops()) {
      if (op->is_op()) {
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

  std::set<op*> all_nodes() {
    std::set<op*> ops{this};
    for (auto c : children) {
      for (auto op : c->all_nodes()) {
        ops.insert(op);
      }
    }
    return ops;
  }

  std::set<op*> all_ops() {
    std::set<op*> ops{this};
    if (is_loop() || is_if()) {
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

  prog deep_copy();

  map<string, vector<int> > buffer_bounds;

  void reset_context();

  void sanity_check();

  op* parent(op* p);

  void set_bounds(const std::string& loop, const int start, const int end_exclusive);
  void extend_bounds(const std::string& loop, const int start, const int end_exclusive);

  std::set<op*> all_nodes() {
    return root->all_nodes();
  }

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

  op* find_non_op(const std::string& target_op) {
    for (auto v : all_non_ops()) {
      if (v->name == target_op) {
        return v;
      }
    }
    cout << "Error: No op named " << target_op << " in" << endl;
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

  void pretty_print();

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

  vector<string> boundary_buffers() const {
    vector<string> bufs;
    for (auto in : ins) {
      bufs.push_back(in);
    }
    for (auto out : outs) {
      bufs.push_back(out);
    }
    return bufs;
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
    //root->is_loop() = true;
    root->tp = IR_NODE_TYPE_LOOP;
    root->start = 0;
    root->end_exclusive = 1;
    compute_unit_file = "clockwork_standard_compute_units.h";
  }

  prog(const std::string& name_) : unique_num(0) {
    ctx = isl_ctx_alloc();
    root = new op();
    root->name = "root";
    root->ctx = ctx;
    //root->is_loop() = true;
    root->tp = IR_NODE_TYPE_LOOP;
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
  std::set<op*> all_non_ops() { return root->all_non_ops(); }

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

  umap* validity_deps();

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

  map<op*, isl_set*> domains();

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

    //Check what's all the domain
    //for (auto it: idoms) {
    //    cout << "OP name: " << it.first->name << endl;
    //    cout << "dom bd: " << it.second << endl << endl;
    //}

    for (auto op : vecs) {
      //cout << op.first->name << endl;
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

  map<op*, isl_map*> producer_maps(const std::string& buf);
  map<op*, isl_map*> consumer_maps(const std::string& buf);

  void shift_address_range(const std::string& buf, const std::vector<int>& min_locs);

  isl_map* map_from_expr(op* op, pair<string, piecewise_address> & top_pair);

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
      //cout << "Find op: " << op->name << endl;
      auto dom = map_find(op, doms);

      umap* pmap = isl_union_map_read_from_str(ctx, "{}");
      //adding vector pair
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

  map<op*, umap*> consumer_maps();

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

prog duplicate_interface(prog& p);

bool unoptimized_compiles(prog& prg);
std::vector<string> unoptimized_result(prog& prg);
void generate_regression_testbench(prog& prg);

std::vector<std::string> run_regression_tb(const std::string& name);

std::vector<std::string> run_regression_tb(prog& prg);


void run_tb(prog& prg);

void regression_test(prog& prg);
void regression_test(CodegenOptions& options, prog& prg);

std::set<std::string> get_kernels(prog& prg);
std::set<std::string> get_kernels(op* root);

std::vector<piecewise_address> addrs_referenced(op* p, const std::string& buffer);

vector<string> upsample_vars(const std::string& target_buf, op* reader, prog& prg);

void make_constant_dd(const std::string& target_op, const std::string& target_buf, prog& prg);

std::vector<string> topologically_sort_kernels(prog& prg);
std::vector<string> topologically_sort_kernels(op* root, prog& prg);

std::set<string> buffers_written(op* p);
std::set<string> buffers_read(op* p);

std::set<string> buffers_written(prog& prg);
std::set<string> buffers_read(prog& prg);

bool writes(const std::string& target_buf, op* p);

op* find_writer(const std::string& target_buf, prog& prg);

std::set<string> get_producers(string next_kernel, prog& prg);
//in sub ast under root
std::set<string> get_producers(string next_kernel, op* root, prog& prg);

void deep_copy_child(op* dest, op* source, prog& original);

std::set<string> get_consumed_buffers(const std::string& kernel, prog& original);
std::set<string> get_produced_buffers(const std::string& kernel, prog& original);

std::set<string> get_consumed_buffers(const std::set<std::string>& group, prog& original);
std::set<string> get_produced_buffers(const std::set<std::string>& group, prog& original);


std::set<string> get_produced_buffers(const std::set<std::string>& group, prog& original);

umap* hardware_schedule(prog& prg);

std::string optimized_code_string(prog& prg);

void generate_trace(prog& prg, umap* sched);

void all_register_files(prog& prg, CodegenOptions& options);
int compile_compute(const std::string& name);
bool compile_regression_tb(const std::string& name);
bool compile_regression_tb(prog& prg);

vector<string> surrounding_vars(op* loop, prog& prg);
vector<string> surrounding_vars(const std::string& op, prog& prg);
vector<op*> surrounding_vars_ops(op* loop, prog& prg);
prog extract_group_to_separate_prog(const std::set<std::string>& group, prog& original);


void unroll(prog& prg, const std::string& var);

vector<int> indexes(op* p);
vector<string> write_vars(const std::string& target_buf, op* reader, prog& prg);

void all_unbanked(prog& prg, CodegenOptions& options);
void infer_bounds(const std::string& buf, const std::vector<int>& int_bounds, prog& prg);

void get_variable_levels(op* node, map<string,int>& variable_map, int current_level);
map<string, int> get_variable_levels(prog& prg);

std::set<string> all_buffers(prog& prg);
std::set<op*> find_readers(const string& buff, prog& prg);

// std::set<std::set<string>>group_kernels_for_compilation(prog& prg,map<string,int>& kernel_costs,const int max_area_cost_per_group);
//prog extract_group_to_separate_prog(std::set<std::string>& group, prog& original);

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

op* strip_mine(const int factor, op* loop, prog& prg);
op* strip_mine(const int factor, const std::string& loop, prog& prg);


typedef std::string simplified_addr;

struct cu_val {
  bool is_arg;
  string name;
  int arg_buf_pos;
  int width;

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
std::vector<op*> get_ordered_inner_loops(prog& prg);


isl_set* iteration_domain(op* loop, prog& prg);

umap* consumer_umap(op* loop, prog& prg);

isl_map* consumer_map(op* loop, const std::string& b, prog& prg);
isl_map* producer_map(op* loop, const std::string& b, prog& prg);

int logical_capacity(const std::string& buf, prog& prg);

umap* read_at(const std::string& level, const std::string& buffer, prog& prg);
umap* read_at(const std::string& level, prog& prg);

umap* written_at(const std::string& level, const std::string& buffer, prog& prg);
umap* written_at(const std::string& level, prog& prg);

umap* first_iteration_reads(umap* reads, const std::string& level, prog& prg);
isl_map* get_initial_data(const std::string& level, const std::string& buffer, prog& prg);


void all_exhaustive_banked(prog& prg, CodegenOptions& options);


vector<string> reduce_vars(prog& prg);

void sanity_check_all_reads_defined(prog& prg);

template<typename T>
void print_box_bounds(const std::string& name, T* pr){
  auto lmin = lexmin(pr);
  auto lmax = lexmax(pr);
  cout << "======= Box bounds for " << name << endl;
  cout << tab(1) << "min              = " << str(lmin) << endl;
  cout << tab(1) << "max              = " << str(lmax) << endl;
}

void normalize_bounds(prog& prg);

bool is_inner_loop(op* op);

class resource_instance {
  public:

    std::string type;
    int number;
};

static
bool operator==(const resource_instance& a, const resource_instance& b) {
  return a.type == b.type && a.number == b.number;
}

struct schedule_info {
  // Miscellaneous
  bool use_metamapper;
  //Memory constraints
  map<op*, string> buf_write_assignment;
  map<string, string> buf2level;
  string dse_compute_filename;
  // Schedule constraints
  map<string, int> buffer_load_latencies;
  map<string, int> buffer_store_latencies;
  map<string, int> compute_unit_latencies;
  map<string, string> op_compute_unit_names;
  //map<string, int> op_compute_unit_latencies;

  // Resource constraints
  map<string, int> resource_quantities;
  map<op*, string> resource_requirements;

  // Resource use info
  map<op*, resource_instance> resource_assignment;

  // Schedule offsets
  map<string, int> loop_iis;
  //map<op*, int> instance_latencies;
  map<op*, int> op_offset_within_parent;

  int compute_latency(const std::string& op_name);
  int compute_latency(op* op);

  int store_latency(const std::string& buf) {
    assert(contains_key(buf, buffer_store_latencies));
    return map_find(buf, buffer_store_latencies);
  }

  int load_latency(const std::string& buf) {
    assert(contains_key(buf, buffer_load_latencies));
    return map_find(buf, buffer_load_latencies);
  }

  int offset_in_parent(op* c) {
    assert(contains_key(c, op_offset_within_parent));
    return map_find(c, op_offset_within_parent);
  }

  int last_update_delay(op* op) {
    assert(op->is_loop());
    int last_delay = 0;
    for (auto c : op->children) {
      int delay = offset_in_parent(c) + total_latency(c);
      if (delay > last_delay) {
        last_delay = delay;
      }
    }
    return last_delay;
  }

  int starting_delay_to_leaf(op* op) {
    if (!op->is_loop()) {
      return offset_in_parent(op);
    } else {
      int min_delay = INT_MAX;
      for (auto c: op->children) {
        min_delay = std::min(min_delay, starting_delay_to_leaf(c));
      }
      return offset_in_parent(op) + min_delay;

    }
  }

  //Above the Coarse grained loop, the II will follow the db update delay
  //We do not need to wait for the latency, since we have N buffer
  int doublebuffer_update_delay(op* op) {
    assert(op->is_loop());
    int last_delay = 0;
    for (auto c : op->children) {
      int delay = 0;
      if (c->is_loop()) {
        delay = II(c) * c->trip_count();
      } else if (c->is_if()){
        auto lp_under_if = pick(c->children);
        delay = II(lp_under_if) * lp_under_if->trip_count();
      } else {
        cout << "Not implemented this op" << endl;
        assert(false);
      }
      if (delay > last_delay) {
        last_delay = delay;
      }
    }
    return last_delay;
  }

  int total_latency(op* op);

  int instance_latency(op* op);

  int II(op* op) {
    assert(op->is_loop());
    assert(contains_key(op->name, loop_iis));
    return map_find(op->name, loop_iis);
  }

  void assign_memory_write_resource(CodegenOptions& options, op* op_, string buf) {
    buf_write_assignment[op_] = buf;
  }


};

std::set<string> all_buffers(prog& prg);
bool is_reduce_buffer(const std::string& buff, prog& prg);
int num_write_ports(const std::string& b, prog& prg);
int num_read_ports(const std::string& b, prog& prg);


bool is_rate_matchable(prog& prg);

int loop_depth(op* op);
vector<int> loop_depth_vector(op* op);
bool all_loop_nests_same_depth(prog& prg);

bool is_perfect(op* loop, prog& prg);
bool all_perfect_loop_nests(prog& prg);
bool single_coarse_pipeline_loop_nests(prog& prg);
std::vector<op*> get_dft_ops(prog& prg);


void build_schedule_exprs(op* parent, map<op*, QExpr>& schedule_exprs, schedule_info& sched, prog& prg);

map<op*, isl_aff*> op_start_times(schedule_info& sched, prog& prg);

map<op*, isl_aff*> op_end_times(schedule_info& sched, prog& prg);

uset* op_start_times_domain(prog& prg);

umap* op_times_map(schedule_info& sched, prog& prg);
umap* op_start_times_map(schedule_info& sched, prog& prg);

umap* op_end_times_map(schedule_info& sched, prog& prg);


map<string, isl_set*> op_start_times_domains(prog& prg);
void normalize_address_offsets(prog& prg);
void remove_div(prog& prg);

vector<op*> ops_at_level(const int level, prog& prg);
bool is_op_scheduled(op* op, schedule_info& sched, prog& prg);
bool no_violated_resource_assignments(schedule_info& sched, prog& prg);


void add_reuse_buffer(const std::string& level, const std::string& buffer, prog& prg);

void read_in(op* loop, isl_set* read_data, const std::string& rb_name, prog& prg);

void read_in_no_dsa(op* loop, isl_set* read_data, const vector<int>& scan_order, const std::string& rb_name, prog& prg);

void write_out_no_dsa(op* loop, isl_set* read_data, const vector<int>& scan_order, const std::string& rb_name, prog& prg);

void push_to_bottom_of_band_ignoring(const vector<loop*>& base, loop* lp, prog& prg);

void push_below(loop* outer, loop* inner, prog& prg);

void add_reuse_buffer_no_delta(const std::string& level, const std::string& buffer, prog& prg);

op* find_coarse_grained_pipeline_loop(op* lp);
op* find_coarse_grained_pipeline_loop(op* lp, prog& prg);
void find_coarse_grained_pipeline_loops(op* lp, vector<op*> & cgpl_lps, prog& prg);

void loop_perfection(prog& prg);
void loop_perfection_with_root_op(prog& prg);
void sanity_check_iis(schedule_info& sched);

int logical_dimension(const std::string& buf, prog& prg);


vector<op*> fully_scheduled_nodes(schedule_info& sched, prog& prg);

void print_partial_schedule(schedule_info& sched, prog& prg);

void fuse_sequentially(const vector<op*>& outer, schedule_info& sched, prog& prg);

vector<op*> unscheduled_nodes(schedule_info& sched, prog& prg);

bool all_ops_scheduled(schedule_info& sched, prog& prg);

int op_latency(op* op, schedule_info& hwinfo);

void adjust_outer_delays(schedule_info& sched, prog& prg);
void adjust_outer_delays_exhaustively(schedule_info& sched, prog& prg, int glb_load_latency);

void adjust_outer_pipeline_delays(schedule_info& sched, prog& prg);

bool no_violated_cycle_accurate_dependencies(schedule_info& sched, prog& prg);
bool sw_schedule_respects_deps(umap* schedule, umap* deps);
bool no_violated_dependencies(umap* schedule, umap* deps);
bool no_violated_buf_write_port_assignments(CodegenOptions& options, schedule_info& sched, prog& prg);

bool schedule_bounds_fit_controller_bitwidth(const int bitwidth, schedule_info& sched, prog& prg);

void adjust_inner_iis(schedule_info& sched, prog& prg);

void loop_split(prog& prg);
void perfect_loop_split(op*, prog& );

void pad_top_level_ops_with_loops(prog& prg);
void pad_bottom_level_ops_with_loops(prog& prg);

int max_loop_depth(prog& prg);

void dsa_writers(prog& prg);
void dsa_writers_new(prog& prg);
void dsa_readers(prog& prg);


int buffer_store_latency(CodegenOptions& options);
int buffer_load_latency(CodegenOptions& options);


vector<isl_multi_aff*> write_addrs(op* op, const std::string& buf, prog& prg);

vector<isl_multi_aff*> write_addrs(op* op, prog& prg);
vector<isl_multi_aff*> read_addrs(op* op, prog& prg);
vector<isl_multi_aff*> read_addrs(op* op, const std::string& buf, prog& prg);

struct app_dag {
  prog prg;
  map<string, std::set<string> > fusion_groups;

  // This is constructed later.
  map<string, prog> fusion_group_progs;
  map<string, int> channel_sizes;

  string edge_between(const std::string& src, const std::string& dst);

  std::set<string> inter_group_channels();

  vector<path> all_paths(const std::string& src, const std::string& dst);

  std::set<string> all_nodes() {
    std::set<string> nodes;
    for (auto& g : fusion_groups) {
      nodes.insert(g.first);
    }
    return nodes;
  }

  maybe<vector<string> > sorted_fusion_groups();

  std::set<string> children(const std::string& location);
  std::set<string> ancestors(const std::string& location);

  bool is_boundary(const std::string& buf) {
    return prg.is_boundary(buf);
  }

  vector<string> longest_reconvergent_path(const std::string& buf);

  string consumer_group(const std::string& buf) {
    assert(fusion_groups.size() == fusion_group_progs.size());

    for (auto& gp : fusion_group_progs) {
      if (elem(buf, buffers_read(gp.second))) {
        return gp.first;
      }
    }
    cout << "Error: No consumer group for: " << buf << endl;
    cout << "Program..." << endl;
    prg.pretty_print();
    cout << endl;

    cout << "Fusion group progs..." << endl;
    for (auto& gp : fusion_group_progs) {
      gp.second.pretty_print();
      cout << endl;
    }
    assert(false);
  }

  string producer_group(const std::string& buf) {
    assert(fusion_groups.size() == fusion_group_progs.size());

    for (auto& gp : fusion_group_progs) {
      if (elem(buf, buffers_written(gp.second))) {
        return gp.first;
      }
    }
    cout << "Error: No producer group for: " << buf << endl;
    cout << "Program..." << endl;
    prg.pretty_print();
    cout << endl;

    cout << "Fusion group progs..." << endl;
    for (auto& gp : fusion_group_progs) {
      gp.second.pretty_print();
      cout << endl;
    }
    assert(false);
  }

  bool in_group(op* op, const std::string& group_name) {
    for (std::string g : map_find(group_name, fusion_groups)) {
      //cout << "checking if " << op->name << " is in " << g << endl;
      auto lp = prg.find_loop(g);
      //lp->pretty_print();
      if (lp == op || elem(op, lp->descendant_ops())) {
        return true;
      }
    }
    return false;
  }
};


bool all_kernel_inputs_are_program_inputs(app_dag& dag);

bool all_kernel_outputs_have_fanout_one(app_dag& dag);

void generate_app_code(CodegenOptions& options,
    app_dag& dag);

app_dag partition_groups(const std::map<std::string, std::set<std::string> >& fresh_groups, prog& prg);

app_dag partition_application(const std::map<std::string, std::set<std::string> >& fusion_groups, prog& prg);

std::map<std::string, std::set<std::string> >
insert_inter_group_buffers(const std::map<std::string, std::set<std::string> >& fusion_groups, prog& prg);

map<std::string, std::set<string> > one_stage_per_group(prog& prg);

map<std::string, std::set<string> > fuse_pointwise_stages(prog& prg);

vector<string> buffer_arg_names(op* op, prog& prg);

void set_channel_depths_to_constant(const int constant, app_dag& dag);
void set_channel_depths_ilp(const int kernel_depth, app_dag& dag);
void set_channel_depths_by_assumed_stage_depth(const int kernel_depth, app_dag& dag);
void set_channel_depths_by_stage_depths(app_dag& dag);
void set_channel_depths_by_kernel_depth(const int kernel_depth, app_dag& dag);

void unroll_mismatched_inner_loops(prog& prg);


std::set<string> children(const std::string& to_merge, map<string, std::set<string> >& fusion_groups, prog& prg);
std::set<string> parents(const std::string& to_merge, map<string, std::set<string> >& fusion_groups, prog& prg);


std::set<string> buffers_read(const std::string& to_merge, map<string, std::set<string> >& fusion_groups, prog& prg);
std::set<string> buffers_written(const std::string& to_merge, map<string, std::set<string> >& fusion_groups, prog& prg);

std::set<string> children(const std::string& kernel, prog& prg);
std::set<string> parents(const std::string& kernel, prog& prg);


bool groups_are_contiguous(const map<string, std::set<string> >& fusion_groups, prog& prg);

bool no_violated_cycle_accurate_dependencies(umap* deps, schedule_info& sched, prog& prg);
bool no_violated_cycle_accurate_dependencies(schedule_info& sched, prog& prg);

umap* cycle_accurate_deps(prog& prg);

void sanity_check_negative_starts(schedule_info& sched, prog& prg);

int max_completion_time(schedule_info& sched, prog& prg);

void prepare_for_clockwork_scheduling(prog& prg);

bool inner_loops_unrollable(const std::string& buf, const int unroll_factor, prog& prg);

void generate_resource_sharing_code(
    CodegenOptions& options,
    app_dag& dag);


std::string resource_sharing_loop_codegen(umap* schedmap);
std::string perfect_loop_codegen(umap* schedmap);

umap* clockwork_schedule_prog(prog& prg);

std::vector<std::string> get_kernels_in_order(prog& prg);
