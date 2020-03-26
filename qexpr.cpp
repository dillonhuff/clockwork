#include "qexpr.h"


void print_while_loop(int level,
    ostream& out,
    const vector<string>& op_order,
    const Box& whole_dom,
    map<string, Box>& index_bounds,
    map<string, vector<QExpr> >& scheds) {

  int max_time = whole_dom.cardinality();
  vector<string> loop_counters;
  for (int i = 0; i < whole_dom.dimension(); i++) {
    string next = "c" + str(i);
    loop_counters.push_back(next);
    out << tab(1) << "int " << next << " = " << whole_dom.min(i) << ";" << endl;
  }

  out << tab(1) << "int global_time = 0;" << endl;

  out << "#ifdef __VIVADO_SYNTH__" << endl;
  out << tab(1) << "while(true) {" << endl;
  out << "#else" << endl;
  out << tab(1) << "while(global_time < " << max_time << ") {" << endl;
  out << "#endif // __VIVADO_SYNTH__" << endl;
  print_body(2,
    out,
    op_order,
    whole_dom,
    index_bounds,
    scheds);

  for (int i = 0; i < whole_dom.dimension(); i++) {
    out << tab(2) << "bool " << loop_counters.at(i) << "_at_max = "
      << loop_counters.at(i) << " == " << whole_dom.max(i) << ";" << endl;
  }

  for (int i = 0; i < whole_dom.dimension(); i++) {
    string all_at_max = "1";
    out << tab(2) << "if (" << all_at_max << ") {" << endl;
    out << tab(3) << "if (" << loop_counters.at(i) << "_at_max" << ") {" << endl;
    out << tab(4) << loop_counters.at(i) << " = " << whole_dom.min(i) << ";" << endl;
    out << tab(3) << "} else {" << endl;
    out << tab(4) << loop_counters.at(i) << "++;" << endl;
    out << tab(3) << "}" << endl;
    out << tab(2) << "}" << endl;
    out << tab(2) << "cout << \"" << loop_counters.at(i) << " = \" << " << loop_counters.at(i) << " << endl;" << endl;
  }
  out << tab(2) << "global_time++;" << endl;
  out << tab(1) << "}" << endl;
}


void print_body(int level,
    ostream& out,
    const vector<string>& op_order,
    const Box& whole_dom,
    map<string, Box>& index_bounds,
    map<string, vector<QExpr> >& scheds) {
  int ndims = pick(index_bounds).second.intervals.size();
  int next_level = level + 1;
    out << endl;
    out << "#ifdef __VIVADO_SYNTH__" << endl;
    out << "#pragma HLS pipeline II=1" << endl;
    out << "#endif // __VIVADO_SYNTH__" << endl << endl;

    vector<string> vars;
    for (int i = 0; i < ndims; i++) {
      vars.push_back("c" + str(i));
    }
    // NOTE: This is because scheduling reverses order of component variables
    reverse(vars);

    for (auto f : op_order) {
      auto box = index_bounds.at(f);
      vector<int> rates;
      vector<int> delays;
      for (auto s : scheds.at(f)) {
        rates.push_back(s.linear_coeff_int());
        auto ct = s.const_term();
        ct.simplify();
        delays.push_back(ct.to_int());
      }

      assert(delays.size() == vars.size() + 1);
      assert(rates.size() == vars.size() + 1);

      delays.pop_back();
      reverse(delays);
      rates.pop_back();
      reverse(rates);

      out << tab(next_level) << "if (" << sep_list(ifconds(vars, box, rates, delays), "", "", " && ") << ") {" << endl;

      vector<string> var_exprs;

      for (int i = 0; i < vars.size(); i++) {
        var_exprs.push_back("(" + vars.at(i) + " - " + str(delays.at(i)) + ") / " + str(rates.at(i)));
      }

      out << tab(next_level + 1) << f << "(" << comma_list(var_exprs) << ");" << endl;
      out << tab(next_level) << "}" << endl << endl;
    }
}
