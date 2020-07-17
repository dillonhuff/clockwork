#include "prog_splitting_test.h"

#include "prog.h"

#include <cassert>

#define INT_MULTIPLIER_COST 1
#define INT_ADDER_COST 1
#define INT_CONSTANT_DIVIDER_COST 1

prog brighten_blur() {
  prog prg;
  prg.compute_unit_file = "clockwork_standard_compute_units.h";
  prg.name = "brighten_blur";
  prg.add_input("off_chip_input");
  prg.add_output("off_chip_output");
  prg.buffer_port_widths["off_chip_input"] = 16;
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["brightened"] = 16;
  prg.buffer_port_widths["blurred"] = 16;
  prg.buffer_port_widths["off_chip_output"] = 16;


  int input_image_rows = 256;
  int input_image_cols = 256;

  // Actually you dont have to fill these
  // buffer bounds in. I am just adding them for completeness.
  prg.buffer_bounds["off_chip_input"] = {input_image_cols, input_image_rows};
  prg.buffer_bounds["in"] = {input_image_cols, input_image_rows};
  prg.buffer_bounds["brightened"] = {input_image_cols, input_image_rows};
  prg.buffer_bounds["blurred"] = {input_image_cols - 2, input_image_rows - 2};
  prg.buffer_bounds["off_chip_output"] = {input_image_cols - 2, input_image_rows - 2};

  auto p = prg.add_nest("po", 0, input_image_rows, "pi", 0, input_image_cols);
  auto write = p->add_op("load_image_from_off_chip");
  write->add_load("off_chip_input", "pi, po");
  write->add_store("in", "pi, po");

  auto br = prg.add_nest("bo", 0, input_image_rows, "bi", 0, input_image_cols);
  auto scale = br->add_op("brighten_image");
  scale->add_function("multiply_by_two");
  scale->add_load("in", "bi, bo");
  scale->add_store("brightened", "bi, bo");

  auto blr = prg.add_nest("y", 0 , input_image_rows - 2, "x", 0, input_image_cols - 2);
  auto blur = blr->add_op("blur_image");
  blur->add_function("blur_3_3");
  for (size_t wy = 0; wy < 3; wy ++) {
    for (size_t wx = 0; wx < 3; wx ++) {
      blur->add_load("brightened", "x + " + to_string(wy) + ", y + " + to_string(wx));
    }
  }
  blur->add_store("blurred", "x, y");

  auto write_out = prg.add_nest("m", 0, input_image_rows - 2, "n", 0, input_image_cols - 2);
  auto write_op = write_out->add_op("write_blurred_off_chip");
  write_op->add_load("blurred", "n, m");
  write_op->add_store("off_chip_output", "n, m");

  return prg;
}

struct TargetTechlibInfo {
  map<string, int> compute_unit_costs;
  int sram_cost_per_bit;
  int reg_cost_per_bit;
};

map<string, int> estimate_kernel_areas(prog& prg, TargetTechlibInfo& target_info) {

  // TODO: Come up with a better area estimate
  map<string, int> costs;

  for (string kernel : get_kernels(prg)) {

    op* loop = prg.find_loop(kernel);
    auto ops_in_kernel = loop -> descendant_ops();
    cout << "ops_in_kernel " << kernel << ":" << endl;
    int kernel_cost = 0;

    for (auto op: ops_in_kernel){
	cout << tab(1) << op -> name << endl;
	if(op -> func != ""){
	    if( contains_key(op -> func, target_info.compute_unit_costs)){
		kernel_cost += map_find(op -> func, target_info.compute_unit_costs);
	    }
	    cout << tab(2) << op -> func << endl;
	}
    }

    costs[kernel] = kernel_cost;
    cout << "Kernel: " << costs[kernel] << endl;
  }

  return costs;
}

std::set<string> get_producers(string next_kernel, prog& prg){

  cout << "next kernel: " << next_kernel<< endl;
  std::set<string> producers;
  op* loop = prg.find_loop(next_kernel);

  std::set<string> buffers_read;
  for(auto op : prg.find_loop(next_kernel)->descendant_ops()){
	for(auto buff : op -> buffers_read()){
	    buffers_read.insert(buff);
	    cout << tab(1) << buff << endl;
	}
  }

  cout << "getting other_kernels"<< endl;
  for(auto other_kernel : get_kernels(prg)){
	  if(other_kernel != next_kernel){
		  std::set<string> buffers_written;
		  for(auto op : prg.find_loop(other_kernel)->descendant_ops()){
			  for(auto buff : op -> buffers_written()){
				  buffers_written.insert(buff);
			  }
		  }


		  if(intersection(buffers_written, buffers_read).size() > 0){
			  producers.insert(other_kernel);
			  cout << "producer name: " << other_kernel << endl;
		  }
	  }

  }
  return producers;
}

std::set<std::set<string>>group_kernels_for_compilation(prog& prg,map<string,int>& kernel_costs,const int max_area_cost_per_group){

  // TODO: Improve this greedy algorithm
  std::set<std::set<string> > groups;
  int current_group_cost = 0;
  std::set<string> current_group;
  std::vector<string> topologically_sorted_kernels;
  std::set<string> not_yet_sorted = get_kernels(prg);

  // Sorting the kernels:
  while(not_yet_sorted.size() > 0){
	for(auto next_kernel : not_yet_sorted){
	//string next_kernel = *begin(not_yet_sorted);
	std::set<string> producers = get_producers(next_kernel, prg);
	producers.erase(next_kernel);
	bool all_producers_sorted = true;
	for(auto producer : producers){
	    if(!elem(producer, topologically_sorted_kernels)){
		all_producers_sorted = false;
		break;
	    }
	}
	if(all_producers_sorted){
	     topologically_sorted_kernels.push_back(next_kernel);
	     not_yet_sorted.erase(next_kernel);
	     break;
	}
	}
  }
 
  cout << "topologically_sorted_kernels:"<< endl;
  for(int i = 0; i < 4; i++){
	cout << topologically_sorted_kernels[i] << endl;
  }
	
  assert(topologically_sorted_kernels.size() == get_kernels(prg).size());

  for(auto kernel : topologically_sorted_kernels){
    if (current_group_cost + map_find(kernel, kernel_costs) > max_area_cost_per_group) {
      groups.insert(current_group);
      current_group = {kernel};
      current_group_cost = map_find(kernel, kernel_costs);
    } else {
      current_group.insert({kernel});
      current_group_cost += map_find(kernel, kernel_costs);
    }
  }

  groups.insert(current_group);

  // Sanity check
  int num_kernels_in_groups = 0;
  for (auto g : groups) {
    num_kernels_in_groups += g.size();
  }

  assert(num_kernels_in_groups == get_kernels(prg).size());

  return groups;
}

void deep_copy_child(op* dest, op* source){
    if(source -> is_loop){
	
//	    op* kernel_copy = dest -> add_loop(source -> name, original.end_exclusive(source -> name));
    }
}

prog extract_group_to_separate_prog(std::set<std::string>& group, prog& original) {
  // TODO: Implement this function
  prog extracted;
 /* for(auto kernel : get_kernels(original)){
	if(elem(kernel, group)){
		op* kernel_copy = extracted.add_loop(kernel, original.start(kernel), original.end_exclusive(kernel));
		for(auto child : original.find_loop(kernel)){
		    deep_copy_child(kernel_copy, child);
		}
	}
  }*/
  return extracted;
}

void generate_optimized_code_for_program_dag(std::vector<prog>& group_programs) {
  // TODO: Implement this function
}

void prog_splitting_tests() {
  prog prg = brighten_blur();

  cout << "Original program..." << endl;
  prg.pretty_print();

  // Compile the application into
  // one large module.
//  generate_optimized_code(prg);

  // Run the code on a tiny test image
  // and save it to brighten_blur_bmp_out.bmp
//  system("clang++ -std=c++11 brighten_blur_sw_bmp_test_harness.cpp brighten_blur.cpp -I ./aws_collateral/ -I .");
//  system("./a.out");

  // Estimate the area required for each
  // kernel in the application
  TargetTechlibInfo target_info;
  target_info.compute_unit_costs["multiply_by_two"] = INT_MULTIPLIER_COST;
  target_info.compute_unit_costs["blur_3_3"] = INT_ADDER_COST*8 + INT_CONSTANT_DIVIDER_COST;
  target_info.sram_cost_per_bit = 1;
  target_info.reg_cost_per_bit = 1;

  map<string, int> kernel_areas = estimate_kernel_areas(prg, target_info);
  cout << "Estimated area costs..." << endl;
  for (auto kernel_and_area : kernel_areas) {
    string kernel_name = kernel_and_area.first;
    int area = kernel_and_area.second;
    cout << tab(1) << kernel_name << " has area cost: " << area << endl;
  }

  int max_area_cost_per_group = 9;
  std::set<std::set<string> > kernel_grouping = group_kernels_for_compilation(prg, kernel_areas, max_area_cost_per_group);
  assert(kernel_grouping.size() == 2);
  for(auto group : kernel_grouping){
	cout << "current group: "<< endl;
	for(auto kernel : group){
	cout << tab(1) << kernel << endl;
	}
  }

  vector<prog> group_programs;
  cout << "Kernel grouping..." << endl;
  for (auto group : kernel_grouping) {
    prog prog_for_group = extract_group_to_separate_prog(group, prg);
    cout << "Group program..." << endl;
    prog_for_group.pretty_print();
    group_programs.push_back(prog_for_group);
  }

  generate_optimized_code_for_program_dag(group_programs);

  //assert(false);
}
