#pragma once

#include "isl_utils.h"
#include "utils.h"

using namespace std;

struct stack_bank {
  std::string name;
  std::string pt_type_string;
  vector<int> read_delays;
  int num_readers;
  int maxdelay;
};

class AccessPattern {
  public:
      string buf_name, op_name;

      int var_dim;
      vector<int> in_range;
      vector<int> stride;
      map<string, int> name2idx;

      int addr_dim;
      vector<int> out_range;
      vector<int> start_addr;
      vector<int> vec_stride_in_addr;

      //y is output dim, x is input dim
      vector<vector<int> > access_matrix;

      AccessPattern(){}
      AccessPattern(string buf, string op):buf_name(buf), op_name(op){}

      AccessPattern(const AccessPattern & a) {
          op_name = a.op_name;
          buf_name = a.buf_name;
          var_dim = a.var_dim;
          in_range = a.in_range;
          stride = a.stride;
          name2idx = a.name2idx;

          addr_dim = a.addr_dim;
          out_range = a.out_range;
          start_addr = a.start_addr;
          vec_stride_in_addr = a.vec_stride_in_addr;

          access_matrix = a.access_matrix;
      }

      isl_set* get_domain(isl_ctx* ctx) {
          vector<string> var_list(var_dim-1);
          vector<string> bd_list(var_dim-1);
          for (auto itr: name2idx) {
              if (itr.first == "const")
                  continue;
              var_list[itr.second-1] = itr.first;
              string bd = "0 <= " + itr.first + " <= " + std::to_string(in_range[itr.second-1]-1);
              bd_list[itr.second-1] = bd;
          }
          auto vars = sep_list(var_list, "[", "]", "," );
          auto ds = sep_list(bd_list, "", "", " and ");
          return isl_set_read_from_str(ctx, string("{ " + op_name + vars + " : " + ds + "}").c_str());
      }

      umap* get_access_map(isl_ctx* ctx) {
          vector<string> var_list(var_dim-1);
          vector<string> expr_list;
          for (auto itr: name2idx) {
              if (itr.first == "const")
                  continue;
              var_list[itr.second-1] = itr.first;
          }
          auto vars = sep_list(var_list, "[", "]", "," );
          vector<string> nd_expr;
          for (auto row: access_matrix) {
              vector<string> sum_list;
              for (auto itr = row.begin()+1; itr != row.end(); itr ++ ){
                  int item = *itr;
                  int cnt = itr - row.begin() - 1;
                  if (item == 0 ) {
                      continue;
                  }
                  else if(item == 1) {
                      sum_list.push_back(var_list[cnt]);
                  }
                  else{
                      sum_list.push_back(std::to_string(item) + "*" + var_list[cnt]);
                  }
              }

              //const
              if (sum_list.size() == 0 || (row.front() != 0)) {
                  sum_list.push_back(std::to_string(row.front()));
              }
              nd_expr.push_back(sep_list(sum_list, "", "", "+"));
          }
          string nd_expr_str = sep_list(nd_expr, "[", "]", ", ");
          cout << "access map expr:" << nd_expr_str << endl;
          auto access_map = isl_map_read_from_str(ctx, string("{ " + op_name + vars + " -> " + buf_name + nd_expr_str + "}").c_str());
          auto domain = get_domain(ctx);
          return to_umap(its(access_map, domain));
      }

      void initial_access_mat(isl_map* access_map, isl_set* domain, isl_ctx* ctx) {
          cout << "\t\tProduced: " << str(access_map) << endl;

          for (size_t i = 0; i < isl_map_dim(access_map, isl_dim_in); i++) {
              if (!isl_map_has_dim_id(access_map, isl_dim_in, i)) {
                  access_map = set_map_dim_name(ctx, access_map, i, "p"+to_string(i));
              }
              cout << "has id:" << str(isl_map_get_dim_id(access_map, isl_dim_in, i)) << endl;
          }

          auto mpa = isl_pw_multi_aff_from_map(access_map);
          cout << str(mpa) << endl;
          addr_dim = isl_pw_multi_aff_dim(mpa, isl_dim_out);
          map<string, int> var_related;
          for (int i = 0; i < addr_dim; i ++) {
              auto pa = isl_pw_multi_aff_get_pw_aff(mpa, i);
              cout << i << str(pa) << endl;
              isl_pw_aff_foreach_piece(pa, &isl_pw_aff_get_var_id, &var_related);
          }
          var_related["const"] = -1;

          vector<pair<string, int>> pairs;
          for (auto itr : var_related)
              pairs.push_back(itr);

          sort(pairs.begin(), pairs.end(),
                  [=](std::pair<string, int>& a, std::pair<string, int>& b){
                  return a.second < b.second;
                  });

          int cnt = 0;
          for (auto itr: pairs) {
              name2idx[itr.first] = cnt++;
          }

          var_dim = name2idx.size();

          //iniital the input var range
          in_range = vector<int>(var_dim - 1, 0);
          for (auto it = pairs.begin(); it != pairs.end(); it ++) {
              if (it->first == "const")
                  continue;
              int min, max;
              min = get_dim_min(domain, it->second);
              max = get_dim_max(domain, it->second);
              cout << "Domain space on <"<< it->first;
              cout << "> is: [" << min << ", " << max <<"]"<< endl;
              //assert(min == 0);
              int offset = it - pairs.begin()-1;
              in_range[offset] = max - min + 1;
          }

          //initial the output addr range
          out_range = vector<int>(addr_dim, 0);
          start_addr = vector<int>(addr_dim, 0);
          for(int i = 0; i < addr_dim; i ++) {
              int min, max;
              //cout << int_upper_bound(card(to_uset(isl_map_range(isl_map_from_pw_aff(isl_map_dim_max(cpy(access_map), i))))))<< endl;
              int range_val = int_upper_bound(get_out_range(access_map, i));
              out_range[i] = range_val;
              auto vec_stride = isl_set_get_stride(isl_map_range(cpy(access_map)), i);
              vec_stride_in_addr.push_back(isl_val_get_num_si(vec_stride));
              int range_max = get_dim_max(isl_map_domain(inv(access_map)),i);
              if (range_val == 1) {
                  start_addr[i] = range_max;
              }
              else {
                  start_addr[i] = range_max % isl_val_get_num_si(vec_stride);
              }
              cout << "ADDR dim <" << i << "> range: " << range_val << ", offset: " << start_addr[i] << endl;
              //TODO: save stride in the upper level data struct when we bundle those port
          }

          access_matrix = vector<vector<int>>(addr_dim, vector<int>(var_dim, 0));
          for (int i = 0; i < addr_dim; i++) {
              auto pa = isl_pw_multi_aff_get_pw_aff(mpa, i);
              map<string,  int> coef;
              isl_pw_aff_foreach_piece(pa, isl_pw_aff_get_coefficient, &coef);
              cout << "output_dim: " << i << endl;
              for (auto cc: coef) {
                  cout << "\tvar_name: " << cc.first <<", idx: " << name2idx[cc.first] << ", coef: " << cc.second << endl;
                  access_matrix[i][name2idx[cc.first]] = cc.second / vec_stride_in_addr[i];
              }
          }
      }

      //one of the rewrite rule
      void get_flatten_stride(vector<int>& st, const vector<int>& dim_sequence) {
          st = vector<int>(var_dim-1, 0);
          vector<int> sorted_out_range(addr_dim, 1);

          for (auto it = dim_sequence.begin(); it != dim_sequence.end() - 1; it ++) {
              int tmp = sorted_out_range[*it] * out_range[*it];
              sorted_out_range[*(it+1)] = tmp;
          }

          //cout << "out_range: ";
          //for_each(out_range.begin(), out_range.end(), [](int val) {cout <<"\t" << val;});
          //cout << endl;
          //cout << "dim_stride: ";
          //for_each(sorted_out_range.begin(), sorted_out_range.end(), [](int val) {cout <<"\t" << val;});
          //cout << endl;

          //matrix multiply with the linearization vector
          for (int addr_it = 0; addr_it < addr_dim; addr_it ++) {
              for (int var_it = 0; var_it < var_dim-1; var_it ++) {
                  st[var_it] += sorted_out_range[addr_it] * access_matrix[addr_it][var_it+1];
              }
          }
      }

      void init_flatten_stride(const vector<int>& dim_sequence) {
          stride = vector<int>(var_dim-1, 0);
          vector<int> sorted_out_range(addr_dim, 1);

          for (auto it = dim_sequence.begin(); it != dim_sequence.end() - 1; it ++) {
              int tmp = sorted_out_range[*it] * out_range[*it];
              sorted_out_range[*(it+1)] = tmp;
          }
          /*
          cout << "out_range: ";
          for_each(out_range.begin(), out_range.end(), [](int val) {cout <<"\t" << val;});
          cout << endl;
          cout << "dim_stride_: ";
          for_each(sorted_out_range.begin(), sorted_out_range.end(), [](int val) {cout <<"\t" << val;});
          cout << endl;*/

          //matrix multiply with the linearization vector
          for (int addr_it = 0; addr_it < addr_dim; addr_it ++) {
              for (int var_it = 0; var_it < var_dim-1; var_it ++) {
                  stride[var_it] += sorted_out_range[addr_it] * access_matrix[addr_it][var_it+1];
              }
          }

          //cout << "flatten stride: " << endl;
          //for_each(stride.begin(), stride.end(), [](int val) {cout <<"\t" << val;});
          //cout << endl;
      }

      void get_flatten_offset(int& start_addr, const vector<int>& dim_sequence) {
          start_addr = 0;
          vector<int> sorted_out_range(addr_dim, 1);

          for (auto it = dim_sequence.begin(); it != dim_sequence.end() - 1; it ++) {
              int tmp = sorted_out_range[*it] * out_range[*it];
              sorted_out_range[*(it+1)] = tmp;
          }

          //matrix multiply with the linearization vector
          for (int addr_it = 0; addr_it < addr_dim; addr_dim ++) {
              start_addr += sorted_out_range[addr_it] * access_matrix[addr_it][0];
          }
      }

      bool merge_lastdim() {
          //cout << "inner most range: " << in_range.back() << ", stride above: " << *(stride.rbegin()+1)<< endl;
          if (in_range.back() == *(stride.rbegin()+1)) {
              *(in_range.rbegin()+1) *= in_range.back();
              in_range.pop_back();
              stride.pop_back();
              stride.back() = 1;
              return true;
          }
          else
              return false;
      }

      bool is_1D_contigous_access() {
          return (in_range.size() == 1) && (stride.back() == 1);
      }

      bool is_access_matrix_col_empty(int id) {
          for (size_t i = 0; i < addr_dim; i ++) {
              if (access_matrix[i][id])
                  return false;
          }
          return true;
      }

      void remove_access_matrix_column(int id) {
          for (size_t i = 0; i < addr_dim; i ++) {
              auto row = access_matrix[i];
              row.erase(row.begin() + id);
          }
      }

      isl_map* get_op_transform(isl_ctx* ctx, int dim_id, int fetch_width) {
          vector<int> & stride_in_target = access_matrix[dim_id];
          vector<string> var_list(var_dim);
          vector<string> origin_var_list(var_dim);
          var_list.front() = "root";
          origin_var_list.front() = "root";
          //TODO: handle reuse pattern
          for (auto it: name2idx) {
              if (it.first == "const")
                  continue;
              int id = it.second;
              if (stride_in_target[id] != 0 && (stride_in_target[id] < 4)) {
                  string trans = "floor("+ it.first + "/" + to_string(fetch_width) + ")";
                  var_list[it.second] = trans;
                  origin_var_list[it.second] = it.first;
              }
              else {
                  var_list[it.second] = it.first;
                  origin_var_list[it.second] = it.first;
              }
          }
          auto vars = sep_list(var_list, "[", "]", "," );
          auto origin_vars = sep_list(origin_var_list, "[", "]", "," );
          cout <<"OP name: " << op_name << endl;
          isl_map* multi_map = to_map(rdmap(ctx, string("{ " + op_name + origin_vars + " -> " + op_name +"_vec" + vars + "}").c_str()));
          return multi_map;
      }

      /*
       * This Function create a vector of map of the constraints on output buffer,
       * and map that to each port*/
      vector<isl_map*> get_buf_slice(isl_ctx* ctx, string new_buf_name, int dim_id, int fetch_width) {
          vector<string> var_list;
          vector<isl_map*> slices;
          for (size_t dim = 0; dim < addr_dim; dim ++) {
              var_list.push_back("p" + to_string(dim));
          }

          auto vars = sep_list(var_list, "[", "]", ",");
          for(size_t i = 0; i < fetch_width; i ++) {
              string constraint = "p" + to_string(dim_id) + "%" + to_string(fetch_width) + "=" + to_string(i);
              isl_map* slice_constriant = to_map(rdmap(ctx, string("{" + buf_name + vars + " -> " + new_buf_name + vars + ":" +constraint + "}" ).c_str()));
              slices.push_back(slice_constriant);
          }
          return slices;
      }


      vector<AccessPattern> vectorization(int dim_id, int fetch_width) {
          AccessPattern origin(*this);
          vector<int> & stride_in_target = access_matrix[dim_id];
          vector<int> var_list;
          for (size_t i = 1; i < stride_in_target.size(); i ++) {
              if (stride_in_target[i] == 0)
                  continue;
              if (stride_in_target[i] < fetch_width) {
                  var_list.push_back(i);
                  cout << "var need to be vectorize: " << i << endl;
              }
          }
          assert(var_list.size()  > 0);
          for (size_t i = 0; i < var_list.size(); i ++) {
            //Currently just support divisible
            int id = var_list[i];
            if (i == 0) {
                //the first variable
                assert(fetch_width % stride_in_target[id] == 0);
                int factor =  fetch_width / stride_in_target[id];
                stride_in_target[id] = fetch_width;
                assert(in_range[id - 1] % factor== 0);
                in_range[id - 1] /= factor;

            }
            else {
                //all the other stride should be strip off
                if (is_access_matrix_col_empty(id)) {
                    remove_access_matrix_column(id);
                    in_range.erase(in_range.begin() + id - 1);
                }
            }
          }

          vector<AccessPattern> access_pattern_vec;
          for (size_t i = 0; i < fetch_width; i ++) {
            access_matrix[dim_id][0] = i;
            //update out_range after we have the new access map

            access_pattern_vec.push_back(AccessPattern(*this));
          }

          //assign the original value
          *this = origin;
          return access_pattern_vec;
      }
};

class UBuffer {

  public:
    int port_widths;
    struct isl_ctx* ctx;
    string name;

    std::map<string, bool> isIn;
    std::map<string, isl_set*> domain;
    std::map<string, umap*> access_map;
    std::map<string, isl_union_map*> schedule;
    std::map<string, vector<string> > port_bundles;
    //post processed access map
    std::map<string, AccessPattern> access_pattern;

    map<pair<string, string>, stack_bank > stack_banks;

    void replace_bank(stack_bank& target, stack_bank& replacement) {
      for (auto bnk : stack_banks) {
        if (bnk.second.name == target.name) {
          stack_banks[bnk.first] = replacement;
          break;
        }
      }
    }

    vector<stack_bank> get_banks() {
      vector<stack_bank> bnk;
      set<string> done;
      for (auto bs : stack_banks) {
        if (!elem(bs.second.name, done)) {
          bnk.push_back(bs.second);
          done.insert(bs.second.name);
        }
      }
      return bnk;
    }

    void add_bank_between(const std::string& inpt, const std::string& outpt, stack_bank& bank) {
      stack_banks[{inpt, outpt}] = bank;
    }

    bool has_bank_between(const std::string& inpt, const std::string& outpt) const {
      for (auto bs : stack_banks) {
        if (bs.first.first == inpt && bs.first.second == outpt) {
          return true;
        }
      }

      return false;
    }

    string bank_between(const std::string& inpt, const std::string& outpt) const {

      for (auto bs : stack_banks) {
        if (bs.first.first == inpt && bs.first.second == outpt) {
          return bs.second.name;
        }
      }

      cout << "Error: No bank between: " << inpt << " and " << outpt << endl;
      assert(false);
      return "";
    }

    vector<stack_bank> receiver_banks(const std::string& inpt) {
      vector<stack_bank> bnks;
      vector<string> done;
      for (auto bs : stack_banks) {
        if (bs.first.first == inpt) {

          if (!elem(bs.second.name, done)) {
            bnks.push_back(bs.second);
            done.push_back(bs.second.name);
          }

          assert(bnks.back().read_delays.size() == bs.second.read_delays.size());
        }
      }
      return bnks;
    }

    UBuffer() : port_widths(32) {}

    isl_union_map* bundle_access(const std::string& bn) {
      auto d = isl_union_map_read_from_str(ctx, "{}");
      for (auto pt : port_bundles.at(bn)) {
        d = unn(d, cpy((access_map.at(pt))));
      }
      return d;
    }

    isl_union_set* bundle_domain(const std::string& bn) {
      auto d = isl_union_set_read_from_str(ctx, "{}");
      for (auto pt : port_bundles.at(bn)) {
        d = unn(d, cpy(to_uset(domain.at(pt))));
      }
      return d;
    }

    int port_width(const std::string& port_name) const {
      return port_widths;
    }

    std::string port_type_string() const {
      if (port_widths == 32) {
        return "hw_uint<32> ";
      }
      return "hw_uint<" + to_string(port_widths) + ">";
    }
    std::string port_type_string(const std::string& name) const {
      if (port_width(name) == 32) {
        return "hw_uint<32> ";
      }
      return "hw_uint<" + to_string(port_width(name)) + ">";
    }

    int port_bundle_width(const std::string& bundle_name) {
      int len = 0;
      for (auto pt : map_find(bundle_name, port_bundles)) {
        len += port_width(pt);
      }

      return len;
    }

    std::string bundle_type_string(const std::string& bundle_name) const {
      int len = 0;
      for (auto pt : map_find(bundle_name, port_bundles)) {
        len += port_width(pt);
      }

      return "hw_uint<" + to_string(len) + ">";
    }

    std::string bundle_stream(const std::string& bundle_name) const {
      bool input_bundle = isIn.at(pick(port_bundles.at(bundle_name)));
      string bundle_type_str = bundle_type_string(bundle_name);
      return string(input_bundle ? "Input" : "Output") + "Stream<" + bundle_type_str + " >& " + bundle_name;
    }

    isl_union_set* global_domain() {
      uset* s = isl_union_set_read_from_str(ctx, "{ }");
      for (auto other : domain) {
        s = unn(s, to_uset(cpy(other.second)));
      }
      return s;
    }
    isl_union_map* global_schedule() {
      umap* s = isl_union_map_read_from_str(ctx, "{ }");
      for (auto other : schedule) {
        s = unn(s, (cpy(other.second)));
      }

      return s;
    }

    bool is_out_pt(const std::string& name) const {
      return !isIn.at(name);
    }

    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      domain[name] = dm;
      access_map[name] = to_umap(access);
      schedule[name] = (sched);
      isIn[name] = false;
    }

    void add_access_pattern(const std::string& pt_name,
            const std::string & op_name,
            const std::string & buf_name) {
        auto io = isIn.at(pt_name)? "input" : "output";
        isl_map* access = to_map(access_map.at(pt_name));
        isl_set* dm = domain.at(pt_name);
        cout << "\tAdding access pattern for " << io  <<" port: " << pt_name << "in buf: " << this->name <<  endl;
        cout << "\top name :" << op_name << endl;
        AccessPattern acc_p(buf_name, op_name);
        acc_p.initial_access_mat(access, dm, ctx);
        access_pattern[pt_name] = acc_p;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_union_map* sched) {
      domain[name] = dm;
      access_map[name] = to_umap(access);
      schedule[name] = sched;
      isIn[name] = true;
    }

    void add_in_pt_with_access_pattern(
            const std::string& name,
            AccessPattern & acc_pattern ) {
      domain[name] = acc_pattern.get_domain(ctx);
      access_map[name] = acc_pattern.get_access_map(ctx);
      access_pattern[name] = acc_pattern;
      schedule[name] = NULL;
      isIn[name] = true;
    }

    void add_out_pt_with_access_pattern(
            const std::string& name,
            AccessPattern & acc_pattern ) {
      domain[name] = acc_pattern.get_domain(ctx);
      access_map[name] = acc_pattern.get_access_map(ctx);
      access_pattern[name] = acc_pattern;
      //schedule[name] = (sched);
      isIn[name] = false;
    }

    void add_out_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      domain[name] = dm;
      access_map[name] = to_umap(access);
      schedule[name] = to_umap(sched);
      isIn[name] = false;
    }

    void add_in_pt(const std::string& name,
        isl_set* dm,
        isl_map* access,
        isl_map* sched) {
      domain[name] = dm;
      access_map[name] = to_umap(access);
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
        rdmap(ctx, access.c_str());
      schedule[name] =
        isl_union_map_read_from_str(ctx, sched.c_str());
    }

    vector<string> get_out_bundles() const {
      vector<string> outpts;
      for (auto m : port_bundles) {
        if (is_out_pt(pick(m.second))) {
          outpts.push_back(m.first);
        }
      }
      return outpts;
    }

    void set_default_bundles() {
      for (auto pt : get_out_ports()) {
        port_bundles[pt] = {pt};
      }

      for (auto pt : get_in_ports()) {
        port_bundles[pt] = {pt};
      }

      assert(get_in_bundles().size() >= get_in_ports().size());
    }

    string get_bundle(const std::string& port) const {
      for (auto b : port_bundles) {
        for (auto bp : b.second) {
          cout << "Trying bundle: " << bp << endl;
          if (bp == port) {
            return b.first;
          }
        }
      }

      cout << "Error: No bundle for: " << port << endl;
      assert(false);
      return "";
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

    //ppint the same access pattern to a different buffer domain
    isl_map* remap_access_to_new_buffer(string pt_name, string suffix) {
        auto origin_map = access_map.at(pt_name);
        string new_buf_name = name + suffix;
        vector<string> addr_var;
        for (size_t i = 0; i < get_out_dim(to_map(origin_map)); i ++) {
            addr_var.push_back("p" + to_string(i));
        }
        string vars = sep_list(addr_var, "[", "]", ",");
        isl_map* buf_map = isl_map_read_from_str(ctx, string("{" + name + vars + " -> " + new_buf_name + vars + "}").c_str());
        return to_map(dot(origin_map, buf_map));
    }

    //change the input and output and return the agg and tb ubuffer stucture
    void vectorization(int dim_id, int fetch_width, UBuffer& agg, UBuffer& sram, UBuffer& tb);

    void add_vectorized_pt_to_ubuf(UBuffer & target_buf, umap* rewrite_buf2op, string origin_pt_name, string bd_name, int dim_id, int fetch_width, bool is_out);

};

int compute_max_dd(UBuffer& buf, const string& inpt);

template <typename T>
std::ostream& operator<< (std::ostream& out, const std::vector<T>& v) {
    if ( !v.empty()  ) {
        out << '[';
        std::copy (v.begin(), v.end(), std::ostream_iterator<T>(out, ", "));
        out << "\b\b]";
    }
    return out;
}

static inline
std::ostream& operator<<(std::ostream& out, const AccessPattern& acc_pattern) {
  out << "--- Variable Dimension: " << acc_pattern.var_dim << endl;
  out << "\t---nameid map: " << endl;
  for (auto it: acc_pattern.name2idx) {
      out << "\t\t name: " << it.first << "\t id: " << it.second << endl;
  }
  out << "\t---- In range: " << acc_pattern.in_range << endl;
  out << "\t---- Out range: "<< acc_pattern.out_range << endl;
  out << "\t---- Stride: "<< acc_pattern.stride << endl;
  out << "\t---- Start Addr: "<< acc_pattern.start_addr << endl;
  out << "\t---- Access Matrix: " << endl << "\t\t[";
  for (const auto & row : acc_pattern.access_matrix) {
      out<< row << "\n\t\t";
  }
  out << "]" << endl;
  return out;
}


static inline
std::ostream& operator<<(std::ostream& out, const UBuffer& buf) {
  out << "--- " << buf.name << endl;
  out << "\t---- In ports" << endl;
  for (auto inpt : buf.get_in_ports()) {
    out << "\t\t" << inpt << endl;
    out << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
    out << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
    //out << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    //out << "\t\t\tbuffer capacity: " << compute_max_dd(buf, inpt) << endl;
    out << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
    out << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
  }

  out << "\t---- Out ports" << endl;
  for (auto inpt : buf.get_out_ports()) {
    out << "\t\t" << inpt << endl;
    out << "\t\t\tdom : " << str(buf.domain.at(inpt)) << endl;
    out << "\t\t\tacc : " << str(buf.access_map.at(inpt)) << endl;
    //out << "\t\t\tsched: " << str(buf.schedule.at(inpt)) << endl;
    out << "\t\t\tmin location: " << str(lexmin(range(buf.access_map.at(inpt)))) << endl;
    out << "\t\t\tmax location: " << str(lexmax(range(buf.access_map.at(inpt)))) << endl;
  }

  out << "\t---- Output Bundles" << endl;
  for (auto out_bundle : buf.get_out_bundles()) {
    out << "\t\t" << out_bundle << endl;
    auto ports = buf.port_bundles.at(out_bundle);
    out << "\t\t---- Ports..." << endl;
    for (auto p : ports) {
      out << "\t\t\t" << p << endl;
    }

    if (buf.get_in_ports().size() == 0) {
      continue;
    }

    auto inpt = pick(buf.get_in_ports());

  }
  return out;
}

