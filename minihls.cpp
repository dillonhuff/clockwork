#include "minihls.h"

namespace minihls {

    module_type* context::add_module_type(const std::string& name, const vector<port>& pts, const std::string& body) {
      auto inst = new module_type();
      inst->name = name;
      inst->ports = pts;
      inst->body = body;
      module_types[name] = inst;
      return inst;
    }


    module_type* context::compile(block* const blkc) {
      auto& blk = *blkc;

      finish_binding(blk);
      schedule_block(blk);

      vector<port> pts{inpt("clk", 1), inpt("rst", 1), inpt("start", 1), outpt("done", 1)};
      for (auto m : blk.instance_set()) {
        if (m->is_external()) {
          for (auto pt : m->ports()) {
            pts.push_back(m->external(pt));
          }
        }
      }

      ostringstream out;
      //out << "module " << blk.name << "(" << comma_list(pts) << ");" << endl;
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

      return add_module_type(blk.get_name(), pts, out.str());
    }

    block* context::add_block(const std::string& name) {
      auto blk = new block();
      blk->name = name;
      blk->context = this;
      blocks[name] = blk;
      return blk;
    }


}
