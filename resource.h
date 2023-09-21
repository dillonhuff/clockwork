#include "prog.h"

struct CATimeStamp{
    int min_time, max_time;
    int latency;

    CATimeStamp(int min_time_, int max_time_, int latency_) {
        min_time = min_time_;
        max_time = max_time_;
        latency = latency_;
    }

    bool hasSlack() {
        return min_time +latency < max_time;
    }

    void removeSlack() {
        min_time = max_time - latency;
    }

    void print() {
        cout << tab(2) << "min time: " << min_time << endl;
        cout << tab(2) << "max time: " << max_time << endl;
        cout << tab(2) << "latency: " << latency << endl;
        cout << tab(2) << "has slack = " << hasSlack() << endl;
    }
};

//Resource reservation table
struct RTableEntry {

    int ins_num;
    std::set<string> kernels;
    map<string, int> timestamps;
    map<int, vector<string>> modulo_table;

    //Helper data structures to keep track of the memory partition
    map<string, vector<string> > partition_groups;

    void insertKernel(string& k) {
        kernels.insert(k);
    }

    bool moduloTableInsert(string& k, int t) {
        assert(modulo_table.count(t));
        vector<string>& slots = modulo_table.at(t);
        for (int i = 0; i < slots.size(); i ++) {
            if (slots.at(i) == "") {
                slots.at(i) = k;
                map_insert(partition_groups, k, k);
                return true;
            }
        }
        return false;
    }

    bool moduloTableInsert(string& k, int t, op* cgpl, prog & prg) {
        assert(modulo_table.count(t));
        vector<string>& slots = modulo_table.at(t);
        for (int i = 0; i < slots.size(); i ++) {
            if (slots.at(i) == "") {
                slots.at(i) = k;
                map_insert(partition_groups, k, k);
                return true;
            } else {
                string key_kernel = slots.at(i);
                //Go over all kernels check the prod consumer relations
                bool can_partition = true;
                for (string k_added : partition_groups.at(key_kernel)) {
                    cout << "K add: " << k_added << ", current k: " << k << endl;
                    if (is_prod_or_cons(k, k_added, cgpl, prg)) {
                        cout << k_added << " is prd or cons of " << k << endl;
                        can_partition = false;
                        break;
                    }
                }
                if (can_partition) {
                    map_insert(partition_groups, key_kernel,  k);
                    return true;
                }
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

    bool scheduleKernel(string& k, int t, op* cgpl, prog & prg) {
        cout << "\t Schedule kernel : " << k << " at time = " << t << endl;
        assert(kernels.count(k));
        bool find_slot = moduloTableInsert(k, t, cgpl, prg);
        if (find_slot) {
            timestamps[k] = t;
        }
        return find_slot;
    }

    void clearSchedule() {
        modulo_table.clear();
        partition_groups.clear();
    }

    void initModuloTable(int II) {
        assert(ins_num > 0);
        for (int t = 0; t < II; t ++) {
            modulo_table[t] =
                vector<string>(ins_num);
        }
    }

    void print() {
        cout << tab(4) << "Instance count: " << ins_num << endl;
      for (auto k: kernels) {
        cout << tab(4) << k;
        if (timestamps.count(k)) {
          cout << " timestamp: " << timestamps.at(k) << endl;
        } else {
          cout << " timestamp: undef" << endl;
        }
        if (partition_groups.count(k)) {
            cout << tab(5) << "Partition group of " << k << endl;
            for (string p: partition_groups.at(k)) {
                cout << tab(6) << "group member: " << p << endl;
            }
        }
      }
    }

    int getMinimumII() {
        return (kernels.size() + ins_num - 1) / ins_num;
    }

    std::set<string> getKernels(int coarse_t) {
        assert(modulo_table.count(coarse_t));
        std::set<string> ret;
        for (string k : modulo_table.at(coarse_t)) {
            if (k != "") {
                ret.insert(k);
                //This data structure is memory only, compute unit won't enter here
                if (partition_groups.count(k)) {
                  for (string g: partition_groups.at(k)) {
                    ret.insert(g);
                  }
                }
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

    int target_II;
    map<string, CATimeStamp> cycle_accurate_time_map;

    map<string, int> duty_cycle_map;
    map<string, bool> is_epilogue;
    op* cgpl;

    void calculateDutyCycle(prog & prg, int CG_target_II) {

        for(auto it : timestamp) {
            string k = it.first;
            op* lp = prg.find_non_op(k);
            int dc = calculate_duty_cycle(lp->origin_lp);
            //FIXME: should do a conditional loop perfection,
            //did not count duty cycle when there is resource sharing
            //cout << "target II when set dc: " << CG_target_II << endl;
            if (CG_target_II > 1)
                dc = 1;
            duty_cycle_map[k] = dc;
            //cout << "kernel : " << k << " duty cycle: " << dc << endl;
        }
    }

    void markEpilogue(prog & prg) {

        for(auto it : timestamp) {
            string k = it.first;
            if (contains(k, "epilogue")) {
                is_epilogue[k] = true;
            } else {
                is_epilogue[k] = false;
            }
        }
    }

    void initCycleAccurateStartTime(string & kernel, int st, int latency) {
        CATimeStamp t_stamp(st, st + target_II - 1, latency);
        cycle_accurate_time_map.insert({kernel, t_stamp});
    }

    int getKernelStartTime(string & kernel) {
        if (cycle_accurate_time_map.count(kernel)) {
            return cycle_accurate_time_map.at(kernel).min_time;
        }
        cout << "Kernel: " << kernel << " is not scheduled yet" << endl;
        assert(false);
    }

    void setKernelMaxTimeStamp(string & kernel, int mt) {
        if (cycle_accurate_time_map.count(kernel)) {
            if (mt < cycle_accurate_time_map.at(kernel).max_time)
                cycle_accurate_time_map.at(kernel).max_time = mt;
            return;
        }
        cout << "Kernel: " << kernel << " is not scheduled yet" << endl;
        assert(false);
    }

    void printCycleAccurateTimeStamps() {
        for (auto & it: cycle_accurate_time_map) {
            cout << "Kernel: " << it.first << endl;
            it.second.print();
        }
    }

    void addInterval(vector<pair<int, bool> > & interval_bounds, string & kernel, int max_duty_cycle) {

        int start = cycle_accurate_time_map.at(kernel).min_time;

        //This is the non-inclusive end time
        int normalized_duty_cycle = max_duty_cycle / duty_cycle_map.at(kernel);
        int end = start + cycle_accurate_time_map.at(kernel).latency
            + (normalized_duty_cycle - 1) * target_II;

        if (is_epilogue[kernel]) {
            start += (max_duty_cycle - 1) * target_II;
            end += (max_duty_cycle - 1) * target_II;
        }

        int true_II = target_II * max_duty_cycle;
        interval_bounds.push_back({start%true_II, true});
        //If it wrap around, since end is non inclusive, we need some tweak
        if (start / true_II != (end-1) / true_II) {
            interval_bounds.push_back({true_II, false});
            interval_bounds.push_back({0, true});
        }
        interval_bounds.push_back({(end-1)%true_II + 1, false});
    }

    void addInterval(vector<pair<int, bool> > & interval_bounds, string & kernel) {

        int start = cycle_accurate_time_map.at(kernel).min_time;

        //This is the non-inclusive end time
        int end = start + cycle_accurate_time_map.at(kernel).latency;
        interval_bounds.push_back({start%target_II, true});
        //If it wrap around, since end is non inclusive, we need some tweak
        if (start / target_II != (end-1) / target_II) {
            interval_bounds.push_back({target_II, false});
            interval_bounds.push_back({0, true});
        }
        interval_bounds.push_back({(end-1)%target_II + 1, false});
    }

    void iterativeRemoveSlack(map<string, RTableEntry> & subTable, unordered_set<string> & k_scheduled,
            string & buffer, string & k) {
        if (subTable.count(buffer) == 0) return;
        if (subTable.at(buffer).partition_groups.count(k) == 0) return;

        bool resource_conflict = true;
        cout << "Check resource conflict for : " << buffer << endl;
        cout << "  when scheduling: " << k << endl;
        while (resource_conflict) {

            vector<pair<int, bool>> interval_bounds;
            vector<string> adjust_candidate;

            //First pass get the max duty cycle
            int max_duty_cycle = duty_cycle_map[k];
            for (string kernel: subTable.at(buffer).kernels) {
                if (k_scheduled.count(kernel)) {
                    max_duty_cycle = max(duty_cycle_map[kernel], max_duty_cycle);
                }
            }
            cout << "max duty_cycle: " << max_duty_cycle << endl;

            for (string kernel: subTable.at(buffer).kernels) {
                if (k_scheduled.count(kernel)) {
                    //Add the resource occupation into the vector
                    //So that we can check if it's overlap
                    if (subTable.at(buffer).partition_groups.count(kernel)) {
                      addInterval(interval_bounds, kernel, max_duty_cycle);
                      //addInterval(interval_bounds, kernel);
                      //cout << "\tadd kernel: " << kernel << endl;

                      //If this kernel has slack, we will just remove the slack,
                      //likely it's a kernel that ahead of the kernel that is scheduled currently
                      if (cycle_accurate_time_map.at(kernel).hasSlack())
                          adjust_candidate.push_back(kernel);
                    }
                }
            }
            //Add current kernel in as well
            addInterval(interval_bounds, k, max_duty_cycle);
            //addInterval(interval_bounds, kernel);

            //Sort the bound
            //Get this method from this link:
            //https://cs.stackexchange.com/questions/153956/best-data-structures-to-store-overlapping-intervals
            sort(interval_bounds.begin(), interval_bounds.end(),
                   [](const pair<int, bool> & l, const pair<int, bool> & r) {
                       if (l.first != r.first) {
                           return l.first < r.first;
                       } else {
                           return l.second < r.second;
                       }
                   });
            int overlap_count = 0;

            //Printout for debug
            for (auto it: interval_bounds) {
                cout <<tab(2)<< it.first << ", " << it.second << endl;
            }
            resource_conflict = false;

            for (auto it: interval_bounds) {
                if (it.second) {
                    overlap_count ++;
                } else {
                    overlap_count --;
                }
                assert(overlap_count >= 0);
                if (overlap_count > subTable.at(buffer).ins_num) {
                    cout << "Resource conflict mem write port for buffer: " << buffer << endl;
                    subTable.at(buffer).print();
                    resource_conflict = true;
                    break;
                }
            }
            if (resource_conflict && adjust_candidate.size()) {
                string k_cand = adjust_candidate.front();
                cycle_accurate_time_map.at(k_cand).removeSlack();
            } else if (resource_conflict) {
                //adjust this kernel to a late time
                cout << "This is the case that slack relax does not work" << endl
                     << "We should build an iterative approach to find a later timestamp," << endl
                     << "Have not implement this yet" << endl;
                assert(false);
            }
        }
    }

    bool checkResourceConflict(string k, unordered_set<string> & k_scheduled, prog & prg){

        op* k_op = prg.find_non_op(k);
        for (auto b : buffers_written_by_kernel(k_op)) {
            iterativeRemoveSlack(memWriteTable, k_scheduled, b, k);
        }
        for (auto b : buffers_read_by_kernel(k_op)) {
            iterativeRemoveSlack(memReadTable, k_scheduled, b, k);
        }
        for (auto func : kernel_func(k_op)) {
            iterativeRemoveSlack(compTable, k_scheduled, func, k);
        }
        return true;
    }

    void parseKernelLatency(schedule_info & sched) {
        for (auto it : cycle_accurate_time_map) {
            string kernel = it.first;
            int offset = it.second.min_time;
            sched.op_offset_within_parent.at(kernel) = offset;
            cout << kernel << " : " << offset << endl;
        }
    }


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

    //This is the schedule method that considers producer consumer relation
    bool scheduleKernel(string k, int t, op* cgpl, prog & prg){

        op* k_op = prg.find_non_op(k);
        for (auto b : buffers_written_by_kernel(k_op)) {
          if (memWriteTable.count(b)) {
            bool can_schedule =
              memWriteTable.at(b).scheduleKernel(k, t, cgpl, prg);
            if (!can_schedule)
              return false;

          }
        }
        for (auto b : buffers_read_by_kernel(k_op)) {
          if (memReadTable.count(b)) {
            bool can_schedule =
              memReadTable.at(b).scheduleKernel(k, t, cgpl, prg);
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


    //A special optimization for optimize the init buffer into a wire
    void align_init_with_update() {
      for (auto & it: memWriteTable) {
        //found the init buffer
        if (contains(it.first, "clkwrk_dsa")) {
          auto & read_entry = memReadTable.at(it.first);
          //Can have multiple kernels just multiple ops that are banked later
          //assert(it.second.kernels.size() == 1);
          //assert(read_entry.kernels.size() == 1);
          //string wr_kernel = pick(it.second.kernels);
          string rd_kernel = pick(read_entry.kernels);
          int cons_timestamp = read_entry.timestamps.at(rd_kernel);
          for (auto wr_kernel : it.second.kernels) {
            it.second.timestamps.at(wr_kernel) = cons_timestamp;
            timestamp.at(wr_kernel) = timestamp.at(rd_kernel);
          }
        }
      }
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
                    //int dc = calculate_duty_cycle(lp->origin_lp);
                    //max_step_latency = std::max(latency/dc, max_step_latency);
                    max_step_latency = std::max(latency, max_step_latency);
                }
                for(string k: memReadTable.at(mem).getKernels(coarse_t)) {
                    op* lp = prg.find_non_op(k);
                    int latency = sched.total_latency(lp);
                    //int dc = calculate_duty_cycle(lp->origin_lp);
                    //max_step_latency = std::max(latency/dc, max_step_latency);
                    max_step_latency = std::max(latency, max_step_latency);
                }
            }
            //cout << tab(2) << "coarse t = " << coarse_t << endl;
            //cout << "\tstep II = " << max_step_latency << endl;
            //cout << "\tmax II = " << max_II << endl;
            max_II += max_step_latency;
        }
        return max_II;
    }

    int getCycleAccurateIIFineGrained(schedule_info& sched, prog& prg, int II) {
        int max_II = 0;
        for (auto & it : memWriteTable) {
          int rd_max_II = 0;
          string mem = it.first;
          for (int coarse_t = 0; coarse_t < II; coarse_t ++) {
            int max_step_latency = 0;
            for(string k: memWriteTable.at(mem).getKernels(coarse_t)) {
              op* lp = prg.find_non_op(k);
              int dc = duty_cycle_map.at(k);
              int latency = sched.total_latency(lp);
              //cout << tab(2) << "t: " << coarse_t << ", kernel: " << lp->name << ", lat = " << latency << endl;
              //cout << tab(4) << "duty cycle: " << dc << endl;;
              max_step_latency = std::max(latency/dc, max_step_latency);
            }
            rd_max_II += max_step_latency;
          }
          max_II = max(rd_max_II, max_II);
        }

        for (auto & it : memReadTable) {
          int wr_max_II = 0;
          string mem = it.first;
          for (int coarse_t = 0; coarse_t < II; coarse_t ++) {
            int max_step_latency = 0;
            for(string k: memReadTable.at(mem).getKernels(coarse_t)) {
              op* lp = prg.find_non_op(k);
              int dc = duty_cycle_map.at(k);
              int latency = sched.total_latency(lp);
              //cout << tab(2) << "t: " << coarse_t << ", kernel: " << lp->name << ", lat = " << latency << endl;
              //cout << tab(4) << "duty cycle: " << dc << endl;;
              max_step_latency = std::max(latency/dc, max_step_latency);
            }
            wr_max_II += max_step_latency;
          }
          max_II = max(wr_max_II, max_II);
        }


        for (auto & it : compTable) {
          int comp_max_II = 0;
          string comp_unit = it.first;
          for (int coarse_t = 0; coarse_t < II; coarse_t ++) {
            int max_step_latency = 0;
            for(string k: compTable.at(comp_unit).getKernels(coarse_t)) {
              op* lp = prg.find_non_op(k);
              int dc = duty_cycle_map.at(k);
              int latency = sched.total_latency(lp);
              //cout << tab(2) << "t: " << coarse_t << ", kernel: " << lp->name << ", lat = " << latency << endl;
              //cout << tab(4) << "duty cycle: " << dc << endl;;
              max_step_latency = std::max(latency / dc, max_step_latency);
            }
            comp_max_II += max_step_latency;
          }
          max_II = max(comp_max_II, max_II);
        }
        //assert(false);

        return max_II;
    }

};


/*
 * We assume there is only one stmt under each kernel,
 * that stmt could be unrolled,
 * so that we can always duplicate buffer to feed that stmt
 * */
RTable build_modulo_resource_reservation_table(CodegenOptions& options,
        schedule_info& sched, op* coarse_loop, prog & prg) {
    RTable resource_reservation_table;
    resource_reservation_table.cgpl = coarse_loop;
    for (auto op : coarse_loop->children) {
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
