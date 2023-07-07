#include "prog.h"

//Resource reservation table
struct RTableEntry {

    int ins_num;
    std::set<string> kernels;
    map<string, int> timestamps;
    map<int, vector<string>> modulo_table;

    void insertKernel(string& k) {
        kernels.insert(k);
    }

    bool moduloTableInsert(string& k, int t) {
        assert(modulo_table.count(t));
        vector<string>& slots = modulo_table.at(t);
        for (int i = 0; i < slots.size(); i ++) {
            if (slots.at(i) == "") {
                slots.at(i) = k;
                return true;
            }
        }
        return false;
    }

    bool scheduleKernel(string& k, int t) {
        cout << "\t Schedule kernel : " << k << " at time = " << t << endl;
        assert(kernels.count(k));
        bool find_slot = moduloTableInsert(k, t);
        if (find_slot) {
            timestamps[k] = t;
        }
        return find_slot;
    }

    void clearSchedule() {
        modulo_table.clear();
    }

    void initModuloTable(int II) {
        assert(ins_num > 0);
        for (int t = 0; t < II; t ++) {
            modulo_table[t] =
                vector<string>(ins_num);
        }
    }

    void print() {
      for (auto k: kernels) {
        cout << tab(4) << k;
        if (timestamps.count(k)) {
          cout << " timestamp: " << timestamps.at(k) << endl;
        } else {
          cout << " timestamp: undef" << endl;
        }
      }
    }

    int getMinimumII() {
        return (kernels.size() + ins_num - 1) / ins_num;
    }

    vector<string> getKernels(int coarse_t) {
        assert(modulo_table.count(coarse_t));
        vector<string> ret;
        for (string k : modulo_table.at(coarse_t)) {
            if (k != "") {
                ret.push_back(k);
            }
        }
        return ret;
    }
};

struct RTable {
    map<string, int> timestamp;
    map<string, RTableEntry> memWriteTable;
    map<string, RTableEntry> memReadTable;
    map<string, RTableEntry> compTable;


    int getTimeStamp(string& k) {
        return timestamp.at(k);
    }

    vector<vector<string>> getSortedKernels() {
        int max_time = 0;
        for (auto it: timestamp) {
            max_time = std::max(max_time, it.second);
        }
        vector<vector<string>> sorted_kernels;
        for (int i = 0; i < max_time+1; i++) {
            sorted_kernels.push_back({});
        }
        for (auto it: timestamp) {
            sorted_kernels.at(it.second).push_back(it.first);
        }
        return sorted_kernels;
    }

    void setTimeStamp(string& k, int t) {
        timestamp[k] = t;
    }

    void clearSchedule() {
        timestamp.clear();
        for (auto & it: memWriteTable) {
            it.second.clearSchedule();
        }
        for (auto & it: memReadTable) {
            it.second.clearSchedule();
        }
        for (auto & it: compTable) {
            it.second.clearSchedule();
        }
    }

    void initModuloTable(int size) {
        for (auto & it: memWriteTable) {
            it.second.initModuloTable(size);
        }
        for (auto & it: memReadTable) {
            it.second.initModuloTable(size);
        }
        for (auto & it: compTable) {
            it.second.initModuloTable(size);
        }
    }

    void addKernel2MemWr(string & b, string& k, int r_cnt) {
      if (memWriteTable.count(b)) {
        memWriteTable.at(b).insertKernel(k);
        assert(r_cnt == memWriteTable.at(b).ins_num);
      } else {
          RTableEntry rrt;
          rrt.insertKernel(k);
          rrt.ins_num = r_cnt;
          memWriteTable[b] = rrt;
      }
    }

    void addKernel2MemRd(string & b, string& k, int r_cnt) {
      if (memReadTable.count(b)) {
        memReadTable.at(b).insertKernel(k);
        assert(r_cnt == memReadTable.at(b).ins_num);
      } else {
          RTableEntry rrt;
          rrt.insertKernel(k);
          rrt.ins_num = r_cnt;
          memReadTable[b] = rrt;
      }
    }


    void addKernel2Comp(string & func, string& k) {
      if (compTable.count(func)) {
        compTable.at(func).insertKernel(k);
      } else {
          RTableEntry rrt;
          rrt.insertKernel(k);
          //By Default, there is one compute unit per op
          rrt.ins_num = 1;
          compTable[func] = rrt;
      }
    }


    int getMinimumII() {
        int min_II = 1;
        for (auto it: memWriteTable) {
            min_II = std::max(it.second.getMinimumII(), min_II);
        }
        for (auto it: memReadTable) {
            min_II = std::max(it.second.getMinimumII(), min_II);
        }
        for (auto it: compTable) {
            min_II = std::max(it.second.getMinimumII(), min_II);
        }
        return min_II;
    }

    void filterEdgeMemory() {
        vector<string> omems, imems;
        for (auto & it: memWriteTable) {
            if (memReadTable.count(it.first) == 0) {
                omems.push_back(it.first);
            }
        }
        for (auto & it: memReadTable) {
            if (memWriteTable.count(it.first) == 0) {
                imems.push_back(it.first);
            }
        }
        for (string m: omems) {
            memWriteTable.erase(m);
        }
        for (string m: imems) {
            memReadTable.erase(m);
        }
    }

    bool scheduleKernel(op* k_op, int t){

        string k = k_op->name;
        for (auto b : buffers_written_by_kernel(k_op)) {
          if (memWriteTable.count(b)) {
            bool can_schedule =
              memWriteTable.at(b).scheduleKernel(k, t);
            if (!can_schedule)
              return false;

          }
        }
        for (auto b : buffers_read_by_kernel(k_op)) {
          if (memReadTable.count(b)) {
            bool can_schedule =
              memReadTable.at(b).scheduleKernel(k, t);
            if (!can_schedule)
              return false;
          }
        }
        for (auto func : kernel_func(k_op)) {
          if (compTable.count(func)) {
            bool can_schedule =
             compTable.at(func).scheduleKernel(k, t);
            if (!can_schedule)
              return false;
          }
        }
        return true;
    }

    void print() {
        cout << tab(1) <<"mem: " << endl;
        for (auto & it: memWriteTable) {
            cout << tab(2) << "BUF Name: " << it.first << endl;
            cout << tab(3) << "write: " << endl;
            it.second.print();
            cout << tab(3) << "read: " << endl;
            memReadTable.at(it.first).print();
        }
        cout << tab(1) <<"compute module: " << endl;
        for (auto & it: compTable) {
            cout << tab(2) << "PE Name:" << it.first << endl;
            it.second.print();
        }
            cout << tab(1) << "TimeStamp: " << endl;
        for (auto & it: timestamp) {
            cout << tab(2) << "Kernel: " << it.first <<
                ", Time = " << it.second << endl;
        }

    }

    int getCycleAccurateII(schedule_info& sched, prog& prg, int II) {
        int max_II = 0;
        for (int coarse_t = 0; coarse_t < II; coarse_t ++) {
            int max_step_latency = 0;
            for (auto & it: memWriteTable) {
                string mem = it.first;
                for(string k: memWriteTable.at(mem).getKernels(coarse_t)) {
                    op* lp = prg.find_non_op(k);
                    int latency = sched.total_latency(lp);
                    int dc = calculate_duty_cycle(lp->origin_lp);
                    max_step_latency = std::max(latency/dc, max_step_latency);
                }
                for(string k: memReadTable.at(mem).getKernels(coarse_t)) {
                    op* lp = prg.find_non_op(k);
                    int latency = sched.total_latency(lp);
                    int dc = calculate_duty_cycle(lp->origin_lp);
                    max_step_latency = std::max(latency/dc, max_step_latency);
                }
            }
            //cout << tab(2) << "coarse t = " << coarse_t << endl;
            //cout << "\tstep II = " << max_step_latency << endl;
            //cout << "\tmax II = " << max_II << endl;
            max_II += max_step_latency;
        }
        return max_II;
    }

};


/*
 * We assume there is only one stmt under each kernel,
 * that stmt could be unrolled,
 * so that we can always duplicate buffer to feed that stmt
 * */
RTable build_modulo_resource_reservation_table(CodegenOptions& options,
        schedule_info& sched, op* cgpl, prog & prg) {
    RTable resource_reservation_table;
    for (auto op : cgpl->children) {
      //cout << "sub kernel: " << op->name << endl;
      //cout << tab(1) << "Completion time: " << sched.total_latency(op) << endl;
      //cout << tab(1) << "Offset         : " << sched.offset_in_parent(op) << endl;
      //cout << endl;
      for (auto b : buffers_written_by_kernel(op)) {
        string mem_level = sched.buf2level.at(b);
        //cout << tab(2) << "write buffer: " << b << endl;
        //cout << tab(3) << "buf level: " << mem_level << endl;
        //cout << tab(3) << "resource count: "
        //    << options.mem_hierarchy.at(mem_level).interconnect_in_num << endl;
        int resource_cnt =
            options.mem_hierarchy.at(mem_level).interconnect_in_num;
        resource_reservation_table.addKernel2MemWr(b, op->name, resource_cnt);

      }
      for (auto b : buffers_read_by_kernel(op)) {
        string mem_level = sched.buf2level.at(b);
        //cout << tab(2) << "Read buffer: " << b << endl;
        //cout << tab(3) << "buf level: " << mem_level << endl;
        //cout << tab(3) << "resource count: "
        //    << options.mem_hierarchy.at(mem_level).interconnect_out_num << endl;
        int resource_cnt =
            options.mem_hierarchy.at(mem_level).interconnect_out_num;
        resource_reservation_table.addKernel2MemRd(b, op->name, resource_cnt);
      }

      //cout << tab(2) << "compute unit: " <<  op->func << endl;
      for (string func : kernel_func(op)) {
        resource_reservation_table.addKernel2Comp(func, op->name);
      }
    }
    resource_reservation_table.filterEdgeMemory();
    resource_reservation_table.print();
    return resource_reservation_table;
    //int min_II  = resource_reservation_table.getMinimumII();
    //cout << "Min II: " << min_II << endl;
    //assert(false);
}
