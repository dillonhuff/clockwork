#pragma once

#include <string>
#include "algorithm.h"
#include <sstream>
#include <fstream>

using namespace dbhc;
using namespace std;

#define INT_INF 999999

namespace minihls {
  static inline
    std::string str(const int i) {
      return to_string(i);
    }

  static inline
    int clog2(const int val) {
      return ceil(log2(val));
    }

  static inline
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

  static inline
    bool
    is_prefix( std::string const& lhs, std::string const& rhs )
    {
      return std::equal(
          lhs.begin(),
          lhs.begin() + std::min( lhs.size(), rhs.size() ),
          rhs.begin() );
    }

  static inline
    std::string tab(const int i) {
      string s = "";
      for (int k = 0; k < i; k++) {
        s += "  ";
      }
      return s;
    }

  class port {
    public:

      string name;
      int width;
      bool is_in;

      string system_verilog_decl_string() const {
        return string(is_in ? "input" : "output") + " [" + to_string(width - 1) + ":0]";
      }

      string system_verilog_type_string() const {
        return "logic [" + to_string(width - 1) + ":0]";
      }

      string get_name() {
        return name;
      }
  };

  static inline
    port outpt(const string& s, const int w) {
      return {s, w, false};
    }

  static inline
    port inpt(const string& s, const int w) {
      return {s, w, true};
    }

  class module_type {
    public:

      string name;
      vector<port> ports;
      string body;

      port get_port(const std::string& pname) const {
        for (auto p : ports) {
          if (p.name == pname) {
            return p;
          }
        }
        cout << "Error: No port named: " << pname << " in " << name << endl;
        assert(false);
        return {};
      }

      string get_name() const { return name; }

      string verilog_decl_string() const {
        ostringstream ss;
        vector<string> strs;
        for (auto pt : ports) {
          strs.push_back(pt.system_verilog_decl_string() + " " + pt.get_name());
        }
        ss << "module " << name << "(" << comma_list(strs) << ");" << endl;
        ss << body << endl;
        ss << "endmodule" << endl;
        return ss.str();
      }
  };

  class module_instance {

    public:

      string name;
      module_type* tp;
      bool internal;

      module_type* get_type() const { return tp; }

      port get_port(const string& n) const {
        for (auto p : tp->ports) {
          if (p.name == n) {
            return p;
          }
        }
        cout << "Error: No port named " << n << endl;
        assert(false);
      }

      vector<port> ports() const {
        return tp->ports;
      }

      string get_name() const {
        return name;
      }

      bool is_internal() const {
        return internal;
      }

      bool is_external() const {
        return !internal;
      }
  };

  class instruction_type {
    public:

      string name;

      string get_name() const { return name; }
  };

  class instruction_binding {
    public:

      string name;
      string output_wire;
      string en;

      map<int, string> arg_map;
      instruction_type* target;
      module_type* mtp;
      int latency;

      int get_latency() const { return latency; }

      string get_name() const { return name; }

      module_type* mod_type() const {
        return mtp;
      }

      instruction_type* target_instr() const {
        return target;
      }
  };

  class instruction_instance {

    public:
      string name;
      module_instance* unit;
      instruction_binding* binding;
      vector<instruction_instance*> operands;
      instruction_type* tp;

      instruction_type* get_type() const {
        return tp;
      }

      bool is_bound() const {
        return binding != nullptr;
      }

      bool has_output() const {
        assert(is_bound());
        return get_binding()->output_wire != "";
      }

      port output_port() const {
        return unit->get_port(get_binding()->output_wire);
      }

      instruction_binding* get_binding() const {
        return binding;
      }

      string get_name() const {
        return name;
      }


      module_instance* get_unit() const {
        return unit;
      }

      void bind_unit(module_instance* u) {
        unit = u;
      }

      void bind_procedure(instruction_binding* p) {
        binding = p;
      }
  };

  typedef instruction_instance instr;

  class schedule {
    public:
      int II;
      map<instr*, int> start_times;
      map<instr*, int> end_times;

      int last_use_time(instr* v) const {
        int utime = -1;
        for (auto s : start_times) {
          instr* user = s.first;
          for (auto op : user->operands) {
            if (op == v) {
              cout << "User: " << user->get_name() << ": " << s.second << endl;
              if (utime < s.second) {
                utime = s.second;
              }
            }
          }
        }

        cout << "No users for: " << v->get_name() << endl;

        assert(utime >= 0);

        return utime;
      }

      int num_stages() const {
        int ns = 0;
        for (auto e : end_times) {
          if (e.second > ns){
            ns = e.second;
          }
        }
        return ns + 1;
      }
  };

  class micro_architecture {
    public:
      schedule sched;
      map<instr*, map<int, string> > source_registers;
      map<instr*, map<int, string> > source_wires;

      string wire_at(const int stage, instr* v) {
        if (!contains_key(v, source_wires)) {
          cout << "No source wire for " << v->get_name() << " at stage: " << stage << endl;
        }
        assert(contains_key(v, source_wires));
        auto wires = map_find(v, source_wires);
        //cout << "Finding " << v->get_name() << " in stage: " << stage << endl;
        assert(contains_key(stage, wires));
        return map_find(stage, wires);
      }
  };

  template<typename N, typename E>
    class directed_graph {
      public:
        map<N, set<pair<N, E > > > out_edges;

        set<pair<pair<N, N>, E> > edges() const {
          set<pair<pair<N, N>, E> > es;

          for (auto edge_set : out_edges) {
            for (auto e : edge_set.second) {
              es.insert({{edge_set.first, e.first}, e.second});
            }
          }
          return es;
        }

        set<N> vertices() const {
          set<N> verts;
          for (auto e : out_edges) {
            verts.insert(e.first);
          }
          return verts;
        }

        void add_edge(const N& a, const N& b, const E& v) {
          out_edges[a].insert({b, v});
        }

        void add_node(const N& v) {
          out_edges[v] = {};
        }
    };

  template<typename N, typename E>
    void diff_lte(directed_graph<N, E>& g, const N& a, const N& b, const E& v) {
      g.add_edge(b, a, v);
    }

  template<typename N, typename E>
    void diff_eq(directed_graph<N, E>& g, const N& a, const N& b, const E& v) {
      diff_lte(g, a, b, v);
      diff_lte(g, a, b, -v);
    }

  static inline
    string endstr(instr* i) {
      return "$end_" + i->get_name();
    }

  static inline
    string startstr(instr* i) {
      return "$start_" + i->get_name();
    }

  struct constraint {
    string l;
    string r;
    int d;
  };

  class block {

    int un;
    vector<instr*> instr_list;
    map<instr*, pair<instr*, int> > data_deps;

    map<string, instr*> instrs;
    map<string, module_instance*> instances;
    map<string, module_type*> module_types;
    map<string, instruction_binding*> instruction_bindings;
    map<string, instruction_type*> instruction_types;

    vector<constraint> extra_constraints;

    public:

    micro_architecture arch;
    string name;

    block() : un(0) {}

    void eq(const string& a, const string& b, const int d) {
      extra_constraints.push_back({a, b, d});
      extra_constraints.push_back({a, b, -d});
    }

    void add_data_dependence(instr* a, instr* b, const int dd) {
      assert(dd == 0);
      data_deps[a] = {b, dd};
    }

    vector<instr*> instruction_list() const {
      return instr_list;
    }

    bool lexically_later_than(instr* a, instr* b) {
      for (auto instr : instr_list) {
        if (instr == b) {
          break;
        }

        if (instr == a) {
          return true;
        }
      }
      return false;
    }

    string wire_at(instr* location, instr* v) {
      if (lexically_later_than(v, location)) {
        return arch.wire_at(arch.sched.start_times[location], v);
      }

      //int read_stage = arch.sched.start_times[location];
      int source_stage = arch.sched.end_times[v];

      return arch.source_wires[v][source_stage + arch.sched.II];

      cout << "Error: " << v->get_name() << " is lexically before " << location->get_name() << endl;
      assert(false);
    }

    set<instruction_binding*> all_bindings() const {
      set<instruction_binding*> bs;
      for (auto b : instruction_bindings) {
        bs.insert(b.second);
      }
      return bs;
    }

    set<instr*> all_instrs() const {
      set<instr*> allis;
      for (auto i : instrs) {
        allis.insert(i.second);
      }
      return allis;
    }

    string is_iter_0_wire(const int i) const {
      return "stage_" + to_string(i) + "_at_iter_0";
    }

    string stage_active_var(const int i) const {
      return "stage_" + to_string(i) + "_active";
    }

    set<instr*> bound_instrs(module_instance* inst) {
      set<instr*> bnd;
      for (auto instr : instrs) {
        if (instr.second->get_unit() == inst) {
          bnd.insert(instr.second);
        }
      }
      return bnd;
    }

    std::string unique_name(const string& pre) {
      int n = un;
      un++;
      return pre + "_" + to_string(n);
    }

    set<module_instance*> instance_set() {
      set<module_instance*> insts;
      for (auto i : instances) {
        insts.insert(i.second);
      }
      return insts;
    }

    // Primitive difference logic solver. For details see:
    // https://www.cs.upc.edu/~erodri/webpage/cps/theory/sat/SMT-DL/slides.pdf
    void make_schedule() {
      cout << "Scheduling" << endl;

      directed_graph<string, int> constraints;
      constraints.add_node("$base");
      for (auto c : extra_constraints) {
        diff_lte(constraints, c.l, c.r, c.d);
      }

      for (pair<string, instr*> instr : instrs) {
        cout << "Adding instruction to graph" << endl;
        auto i = instr.second;
        constraints.add_node(startstr(i));
        constraints.add_node(endstr(i));

        constraints.add_edge("$base", startstr(i), 0);
        constraints.add_edge("$base", endstr(i), 0);

        diff_eq(constraints, startstr(i), endstr(i), i->get_binding()->get_latency());
      }

      for (pair<string, instr*> instr : instrs) {
        for (auto op : instr.second->operands) {
          diff_lte(constraints,
              endstr(op),
              startstr(instr.second),
              0);
        }
      }

      for (auto dep : data_deps) {
        assert(dep.second.second == 0);

        instr* src = dep.first;
        instr* dst = dep.second.first;

        assert(lexically_later_than(src, dst));

        diff_lte(constraints, endstr(src), startstr(dst), 0);
      }

      map<string, int> distance;
      map<string, string> predecessor;
      for (auto v : constraints.vertices()) {
        distance[v] = INT_INF;
        predecessor[v] = "";
      }
      distance["$base"] = 0;

      for (int i = 1; i < constraints.vertices().size(); i++) {
        for (auto e : constraints.edges()) {
          auto u = e.first.first;
          auto v = e.first.second;
          auto w = e.second;
          if (distance[u] + w < distance[v]) {
            distance[v] = distance[u] + w;
            predecessor[v] = u;
          }
        }
      }

      int min_distance = INT_INF;
      for (auto v : constraints.vertices()) {
        cout << tab(1) << v << " -> " << distance[v] << endl;
        if (distance[v] < min_distance) {
          min_distance = distance[v];
        }
      }

      for (auto e : constraints.edges()) {
        auto u = e.first.first;
        auto v = e.first.second;
        auto w = e.second;
        if (distance[u] + w < distance[v]) {
          cout << "Error: Graph contains a negative weight cycle with: " << u << ", and " << v << endl;
          assert(false);
        }
      }

      int shift = -min_distance;
      schedule sched;
      sched.II = 1;
      for (auto instr : instrs) {
        auto i = instr.second;
        sched.start_times[i] = distance[startstr(i)] + shift;
        sched.end_times[i] = distance[endstr(i)] + shift;
      }

      cout << "Done with scheduling" << endl;
      for (auto instrP : instrs) {
        auto instr = instrP.second;
        cout << "Start of " << (instr->get_name()) << " -> " << sched.start_times[instr] << endl;
        cout << "End of " << (instr->get_name()) << " -> " << sched.end_times[instr] << endl;
      }

      arch.sched = sched;

      for (auto instrP : instrs) {
        auto instr = instrP.second;
        if (instr->has_output()) {
          arch.source_wires[instr][arch.sched.end_times[instr]] =
            instr->get_name();
          for (int s = arch.sched.end_times[instr] + 1; s <= arch.sched.num_stages(); s++) {
            arch.source_wires[instr][s] = instr->get_name() + "_stage_" + to_string(s);
          }
        }
      }
    }

    instr* add_instr(const std::string& name, instruction_type* tp) {
      vector<instr*> noargs;
      return add_instr(name, tp, noargs);
    }

    instr* add_instr(const std::string& name, instruction_type* tp,
        const vector<instr*>& args) {

      assert(!contains_key(name, instrs));

      auto instr = new instruction_instance();
      instr->binding = nullptr;
      instr->name = name;
      instr->operands = args;
      instr->tp = tp;

      instrs[name] = instr;

      instr_list.push_back(instr);

      return instr;
    }

    instruction_binding*
      add_instruction_binding(const std::string& name,
          instruction_type* target,
          module_type* mtp,
          const string& output_wire,
          const map<int, string>& arg_map) {
        return add_instruction_binding(name, target, mtp, output_wire, arg_map, 0);
      }

    instruction_binding*
      add_instruction_binding(const std::string& name,
          instruction_type* target,
          module_type* mtp,
          const string& output_wire,
          const map<int, string>& arg_map,
          const int latency) {
        auto inst = new instruction_binding();
        inst->name = name;
        inst->target = target;
        inst->mtp = mtp;
        inst->output_wire = output_wire;
        inst->arg_map = arg_map;
        inst->latency = latency;
        instruction_bindings[name] = inst;
        return inst;
      }

    instruction_binding* get_instruction_binding(const std::string& name) const {
      assert(has_instruction_binding(name));
      return map_find(name, instruction_bindings);
    }

    bool has_instruction_binding(const std::string& name) const {
      return contains_key(name, instruction_bindings);
    }

    instruction_type* add_instruction_type(const std::string& name) {
      auto inst = new instruction_type();
      inst->name = name;
      instruction_types[name] = inst;
      return inst;
    }

    instruction_type* get_instruction_type(const std::string& name) const {
      assert(has_instruction_type(name));
      return map_find(name, instruction_types);
    }

    bool has_instruction_type(const std::string& name) const {
      return contains_key(name, instruction_types);
    }

    set<module_type*> module_type_set() const {
      set<module_type*> ms;
      for (auto mt : module_types) {
        ms.insert(mt.second);
      }
      return ms;
    }

    module_type* add_module_type(const std::string& name, const vector<port>& pts) {
      return add_module_type(name, pts, "");
    }

    module_type* add_module_type(const std::string& name, const vector<port>& pts, const std::string& body) {
      auto inst = new module_type();
      inst->name = name;
      inst->ports = pts;
      inst->body = body;
      module_types[name] = inst;
      return inst;
    }

    module_type* get_module_type(const std::string& name) const {
      assert(has_module_type(name));
      return map_find(name, module_types);
    }

    bool has_module_type(const std::string& name) const {
      return contains_key(name, module_types);
    }

    module_instance* add_external_inst(const std::string& name, module_type* tp) {
      auto inst = new module_instance();
      inst->name = name;
      inst->tp = tp;
      inst->internal = false;
      instances[name] = inst;
      return inst;
    }

    module_instance* add_inst(const std::string& name, module_type* tp) {
      auto inst = new module_instance();
      inst->name = name;
      inst->tp = tp;
      inst->name = name;
      inst->internal = true;
      instances[name] = inst;
      return inst;
    }

    module_instance* get_inst(const std::string& name) const {
      assert(has_inst(name));
      return map_find(name, instances);
    }

    bool has_inst(const std::string& name) const {
      return contains_key(name, instances);
    }

  };

  static inline
    std::ostream& operator<<(std::ostream& out, block& blk) {
      out << blk.name << ": " << endl;
      for (auto instr : blk.instruction_list()) {
        vector<string> args;
        for (auto op : instr->operands) {
          args.push_back(op->get_name());
        }
        out << tab(1) << instr->get_name() << " = " << instr->get_type()->get_name() << " " << comma_list(args) << endl;
      }

      return out;
    }

  static inline
    void schedule_block(block& blk) {
      blk.make_schedule();
    }

  static inline
    void finish_binding(block& blk) {
      for (auto instr : blk.all_instrs()) {

        if (!instr->is_bound()) {
          bool bound = false;

          for (auto binding : blk.all_bindings()) {
            cout << "Trying binding: " << binding->get_name() << endl;

            if (binding->target_instr() == instr->get_type()) {
              instr->bind_unit(blk.add_inst(
                    blk.unique_name(instr->get_name()),
                    binding->mod_type()));
              instr->bind_procedure(binding);
              bound = true;
              break;
            }
          }

          if (!bound) {
            cout << "Error: No binding for " << instr->get_name() << endl;
          }
          assert(bound);
        }
      }
    }

  static inline
    void emit_verilog(block& blk) {
      std::ofstream out(blk.name + ".v");
      vector<string> pts{"input clk", "input rst", "input start", "output done"};
      for (auto m : blk.instance_set()) {
        if (m->is_external()) {
          for (auto pt : m->ports()) {
            pts.push_back(pt.system_verilog_type_string() + " " + m->get_name() + "_" + pt.get_name());
          }
        }
      }

      out << "module " << blk.name << "(" << comma_list(pts) << ");" << endl;
      out << endl;

      for (auto instr : blk.all_instrs()) {
        if (instr->has_output()) {
          out << tab(1) << instr->output_port().system_verilog_type_string()
            << " " << instr->get_name() << ";" << endl;
        }
      }

      out << endl;
      out << tab(1) << "logic started;" << endl << endl;
      for (int i = 0; i < blk.arch.sched.num_stages(); i++) {
        out << tab(1) << "logic " << blk.stage_active_var(i) << ";" << endl;
      }
      out << endl;
      for (int i = 0; i < blk.arch.sched.num_stages(); i++) {
        out << tab(1) << "logic " << blk.is_iter_0_wire(i) << ";" << endl;
      }
      out << endl;

      out << tab(1) << "assign " << blk.stage_active_var(0) << " = start | started;" << endl;
      out << tab(1) << "assign " << blk.is_iter_0_wire(0) << " = start;" << endl;
      out << tab(1) << "assign done = " << blk.stage_active_var(blk.arch.sched.num_stages() - 1) << ";" << endl;
      out << endl;

      out << tab(1) << "// Pipeline datapath registers..." << endl;
      for (auto instr : blk.arch.source_wires) {
        for (pair<int, string> time : instr.second) {
          if (time.first > blk.arch.sched.end_times[instr.first]) {
            string output =
              instr.first->get_binding()->output_wire;
            port pt =
              instr.first->get_unit()->get_port(output);
            out << tab(1) << "reg [" << (pt.width - 1) << ":0]" << " " << time.second << ";" << endl;
          }
        }
      }
      out << endl << endl;

      out << tab(1) << "always @(posedge clk) begin" << endl;
      out << tab(2) << "if (rst) begin" << endl;
      out << tab(3) << "started <= 0;" << endl;
      for (int i = 1; i < blk.arch.sched.num_stages(); i++) {
        out << tab(3) << blk.stage_active_var(i) << " <= 0;" << endl;
      }
      out << tab(2) << "end else begin" << endl << endl;

      out << tab(3) << "if (start) begin" << endl;
      out << tab(4) << "started <= 1;" << endl;
      out << tab(3) << "end" << endl << endl;

      for (int i = 1; i < blk.arch.sched.num_stages(); i++) {
        out << tab(3) << blk.stage_active_var(i) << " <= " << blk.stage_active_var(i - 1) << ";" << endl;
        out << tab(3) << blk.is_iter_0_wire(i) << " <= " << blk.is_iter_0_wire(i - 1) << ";" << endl;
      }
      out << endl;

      for (auto instr : blk.arch.source_wires) {
        vector<string> pipeline_sequence;
        pipeline_sequence.resize(instr.second.size());

        for (pair<int, string> time : instr.second) {
          pipeline_sequence[time.first - blk.arch.sched.end_times[instr.first]] =
            time.second;
        }

        for (int i = 1; i < pipeline_sequence.size(); i++) {
          out << tab(3) << pipeline_sequence[i] << " <= " << pipeline_sequence[i - 1] << ";" << endl;
        }
      }

      out << endl << endl;
      out << tab(2) << "end" << endl << endl;
      out << tab(1) << "end" << endl;

      out << endl << endl;

      out << tab(1) << "// Data processing units..." << endl;
      for (auto m : blk.instance_set()) {
        if (m->is_internal()) {
          out << tab(1) << "// " << m->get_name() << endl;
          vector<string> port_strings;
          vector<string> port_decls_strings;
          for (auto pt : m->get_type()->ports) {
            port_strings.push_back("." + pt.name + "(" + m->get_name() + "_" + pt.name + ")");
            port_decls_strings.push_back(pt.system_verilog_type_string() + " " + m->get_name() + "_" + pt.name + ";");
          }
          out << tab(1) << sep_list(port_decls_strings, "", "", "\n" + tab(1)) << endl;

          out << tab(1) << m->get_type()->get_name() << " " << m->get_name()
            << "(" << comma_list(port_strings) << ");" << endl;
          for (auto pt : m->get_type()->ports) {
            if (pt.name == "clk") {
              out << tab(1) << "assign " << m->get_name() + "_" + pt.name + " = clk;" << endl;
            } else if (pt.name == "rst") {
              out << tab(1) << "assign " << m->get_name() + "_" + pt.name + " = rst;" << endl;
            }
          }
        }

        out << tab(1) << "// Bindings to " << m->get_name() << endl;
        for (auto bound_instr : blk.bound_instrs(m)) {
          out << tab(2) << "// " << bound_instr->get_name() << endl;
          auto binding = bound_instr->get_binding();

          if (binding->output_wire != "") {
            out << tab(1) << "assign " << bound_instr->get_name() << " = " << bound_instr->get_unit()->get_name() << "_" << binding->output_wire << ";" << endl;
          }

          if (binding->en!= "") {
            string en_wire = blk.stage_active_var(blk.arch.sched.start_times[bound_instr]);
            out << tab(1) << "assign " << bound_instr->get_unit()->get_name() << "_" << binding->en << " = " << en_wire << ";" << endl;
          }

          for (auto b : binding->arg_map) {
            assert(bound_instr->operands.size() >= b.first);
            out << tab(1) << "assign "
              << bound_instr->get_unit()->get_name() << "_" << b.second
              << " = "
              << blk.wire_at(bound_instr, bound_instr->operands.at(b.first))
              << ";" << endl;
          }

          if (is_prefix("phi_", m->get_type()->get_name())) {
            int start_time =
              blk.arch.sched.start_times[bound_instr];

            out << tab(1) << "assign "
              << m->get_name() << "_is_iter_0"
              << " = "
              << blk.is_iter_0_wire(start_time)
              << ";" << endl;
          }
        }


        out << endl;
      }

      out << endl;
      out << "endmodule" << endl;
      out.close();
    }

  static inline
    void emit_techlib(block& blk) {
      ofstream out(blk.name + "_techlib.v");
      for (auto m : blk.module_type_set()) {
        out << m->verilog_decl_string() << endl << endl;
      }
      out << endl;
    }

  static inline
    void compile(block& blk) {
      finish_binding(blk);
      schedule_block(blk);
      emit_verilog(blk);
      emit_techlib(blk);
    }
}
