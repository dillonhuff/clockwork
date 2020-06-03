#pragma once

#include "isl_utils.h"
#include "utils.h"
#include "qexpr.h"
#include "app.h"
#include "ubuffer.h"

struct ir_node;
struct prog;

typedef ir_node op;
typedef op loop;
typedef std::string buffer_name;
typedef std::string address;

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
  // Locations read
  std::vector<pair<buffer_name, address> > consume_locs;
  std::vector<pair<buffer_name, std::vector<pair<std::string, std::string>>>> consume_locs_pair;
  // The name of the HL C++ function that this op invokes
  std::string func;
  // Name of loop index variables used by this unit
  std::vector<std::string> index_variables_needed_by_compute;
  // Annotation used for debug printouts
  int unroll_factor;

  isl_ctx* ctx;

  ir_node() : parent(nullptr), is_loop(false), unroll_factor(1) {}

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
    }
  }

  string consumed_value_name(pair<string, string>& val_loc) {
    string val_name = c_sanitize(val_loc.first + "_" + val_loc.second + "_value");
    return val_name;
  }

  void add_function(const std::string& n) {
    func = n;
  }

  void add_function(const std::string& n, const vector<string>& args) {
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

  op* add_loop(const std::string& name, const int l, const int u) {
    assert(is_loop);
    //assert(!elem(name, all_existing_loop_names()));

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

  string add_load(const std::string& b, const std::vector<std::pair<std::string, std::string>> loc) {
    assert(!is_loop);
    consume_locs_pair.push_back({b, loc});
    string val_name = b;
    for (auto val : loc) {
      val_name += "_";
      val_name += val.second;
    }
    val_name += "_value";
    val_name = c_sanitize(val_name);
    return val_name;
  }


  string add_load(const std::string& b, const std::string& d0, const std::string& d1, const std::string& d2) {
    return add_load(b, d0 + ", " + d1 + ", " + d2);
  }

  string add_load(const std::string& b, const std::string& d0, const std::string& d1) {
    return add_load(b, d0 + ", " + d1);
  }

  string add_load(const std::string& b, const std::string& loc) {
    assert(!is_loop);
    consume_locs.push_back({b, loc});
    string val_name = c_sanitize(b + "_" + loc + "_value");
    return val_name;
  }

  vector<string> consumes() const {
    vector<string> ps;
    for (auto p : consume_locs) {
      ps.push_back(p.first + "[" + p.second + "]");
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
      cout << tab(1) << b.first << endl;
      //"[" << comma_list(b.second) << "]" << endl;
    }
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

  prog() {
    ctx = isl_ctx_alloc();
    root = new op();
    root->name = "root";
    root->ctx = ctx;
    root->is_loop = true;
    root->start = 0;
    root->end_exclusive = 1;
  }

  ~prog() {
    isl_ctx_free(ctx);
  }

  vector<string> cache_args(op* op) {
    vector<string> args;
    for (auto cs : op->consume_locs) {
      args.push_back(cs.first);
    }
    for (auto cs : op->consume_locs_pair) {
      args.push_back(cs.first);
    }
    for (auto cs : op->produce_locs) {
      args.push_back(cs.first);
    }
    return args;
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

  //map<string, Result> data_demands_maps() {
    //map<string, Result> m;
    //auto ivars = iter_vars();
    //auto doms = domains();

    //auto ops = root->all_ops();
    //for (auto op : ops) {
        //if (!op->is_loop) {
            //Window win;
            //string result_buf = "";
            //for (auto p : op->produces()) {
                //result_buf= take_until(p, "[");
                //cout << "Producer :" << p << endl;
            //}
            //assert(result_buf != "");

            //auto vars = map_find(op, ivars);
            ////TODO: fix this hack
            ////reverse(vars);
            ////vars.pop_back();
            ////reverse(vars);
            //string ivar_str = sep_list(vars, "[", "]", ", ");
            //auto dom = map_find(op, doms);

            //umap* pmap = rdmap(ctx, "{}");
            //int cnt_ld_st_pair = 0;
            //auto producers = op->produces();
            //for (auto p : op->consumes()) {
                //cout << "DEBUG:" << result_buf + ivar_str <<", " << producers[cnt_ld_st_pair] << endl;
                //isl_union_map* vmap =
                  //rdmap(ctx, string("{ " + producers[cnt_ld_st_pair] + " -> " + p + " }").c_str());
                  ////rdmap(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str());
                //pmap = unn(pmap, vmap);
                //cnt_ld_st_pair ++;
                //cout << "Consumer map : " << str(pmap) << endl;
            //}
            //win.needed = pmap;
            //Result res;
            //res.srcs.push_back(win);
            //m[op->name] = res;
        //}
    //}
      //return m;
  //}


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
     // original
       for (auto p : op->consumes()) {
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
      
     // original case
     for (auto p : op-> consumes()){
      cout << "second for loop" << endl;
       umap* vmap =
          its(isl_union_map_read_from_str(ctx, string("{ " + op->name + ivar_str + " -> " + p + " }").c_str()), to_uset(dom));

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

    isl_union_map *validity =
      its(dot(writes, inv(reads)), before);

    //assert(false);
    return validity;
  }

  isl_schedule* optimized_schedule() {
    auto domain = whole_iteration_domain();

    auto order_deps = relative_orders();
    cout << "Order deps..." << endl;
    cout << tab(1) << str(order_deps) << endl;
    cout << "Getting validity deps..." << endl;
    isl_union_map *raw_deps = validity_deps();
    cout << "Got validity deps..." << endl;
    auto validity =
      unn(order_deps, raw_deps);
    isl_union_map *proximity =
      cpy(raw_deps);

    cout << "Computing schedule for: " << str(domain) << endl << tab(1) << " subject to " << str(validity) << endl;
    isl_schedule* sched = isl_union_set_compute_schedule(domain, validity, proximity);

    cout << endl;
    cout << "Result: " << str(sched) << endl;

    //assert(false);

    return sched;
  }

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
void generate_unoptimized_code(prog& prg);

// Re-schedules all loops using ISL 
// and then emits HLS C++ code for the program
void generate_optimized_code(prog& prg);

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
