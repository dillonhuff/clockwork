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

  auto blr = prg.add_nest("y", 0 , input_image_rows, "x", 0, input_image_cols);
  auto blur = blr->add_op("blur_image");
  blur->add_function("inc");
  blur->add_load("brightened", "x","y");
  blur->add_store("blurred", "x","y");

  auto write_out = prg.add_nest("m", 0, input_image_rows, "n", 0, input_image_cols);
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

//-----------------------------------------ESTIMATE_KERNEL_AREAS-------------------------------------------

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
				if(contains_key(op -> func, target_info.compute_unit_costs)){
					kernel_cost += map_find(op -> func, target_info.compute_unit_costs);
				}
				cout << tab(2) << op -> func << endl;
			}
		}

		costs[kernel] = kernel_cost;
		cout << "Kernel '" << kernel << "' cost: " << costs[kernel] << endl;
	}

	return costs;
}

//-----------------------------------------GROUP_KERNELS_FOR_COMPILATION-------------------------------------------

std::set<std::set<string>>group_kernels_for_compilation(prog& prg,map<string,int>& kernel_costs,const int max_area_cost_per_group){

	// TODO: Improve this greedy algorithm

	std::vector<string> topologically_sorted_kernels = topologically_sort_kernels(prg); 
	std::set<std::set<string>> groups;
	std::set<string> current_group;
	int current_group_cost = 0;

	assert(topologically_sorted_kernels.size() == get_kernels(prg).size());

	cout << "Topologically sorted kernels:" << endl;
	for(auto kernel : topologically_sorted_kernels){
		cout << kernel << endl;
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


//-----------------------------------------GROUP_TO_SEPARATE_PROG-----------------------------------------------------

prog extract_group_to_separate_prog(std::set<std::string>& group, prog& original) {
	// TODO: Implement this function
	prog extracted;
	string prg_name = "Extracted_";
	for(auto g : group){
	prg_name += g + "_";
	}
	extracted.name = prg_name;

	for(auto kernel : topologically_sort_kernels(original)){
		if(elem(kernel, group)){
			op* kernel_copy = extracted.add_loop(kernel, original.start(kernel), original.end_exclusive(kernel));
			for(auto child : original.find_loop(kernel)->children){
				deep_copy_child(kernel_copy, child, original);
			}
		}
	}
	cout << "Programs copied" << endl;

	std::set<string> all_consumed_buffers = get_consumed_buffers(group, original);
	std::set<string> all_produced_buffers = get_produced_buffers(group, original);
	for(auto consumed : all_consumed_buffers){
		if(!elem(consumed, all_produced_buffers)){
			extracted.add_input(consumed);
			cout << "Input added: " << consumed << endl;
			// Do I need to calculate the width?
			 extracted.buffer_port_widths[consumed] = map_find(consumed, original.buffer_port_widths);
			cout << "Input width: " << extracted.buffer_port_widths[consumed] << endl;
		}
	}
	
	for(auto produced : all_produced_buffers){
		if(!elem(produced, all_consumed_buffers)){
			extracted.add_output(produced);
			cout << "Output added: " << produced << endl;
			extracted.buffer_port_widths[produced] = map_find(produced, original.buffer_port_widths);
			cout << "Output width: " << extracted.buffer_port_widths[produced] << endl;
		}
	}
	
	return extracted;
}

//-----------------------------------GENERATE_OPTIMIZED_CODE_FOR_PROGRAM_DAG-------------------------------------------

void generate_optimized_code_for_program_dag(std::vector<prog>& group_programs) {
  // TODO: Implement this function
  for(auto& prg : group_programs){
	generate_unoptimized_code(prg);
  }
}

void toy_task(){

  prog prg = brighten_blur();

  cout << "Original program..." << endl;
  prg.pretty_print();

  // Compile the application into
  // one large module.
   generate_optimized_code(prg);
   assert(false);

  // Run the code on a tiny test image
  // and save it to brighten_blur_bmp_out.bmp
//  system("clang++ -std=c++11 brighten_blur_sw_bmp_test_harness.cpp brighten_blur.cpp -I ./aws_collateral/ -I .");
//  system("./a.out");

  // Estimate the area required for each
  // kernel in the application
  TargetTechlibInfo target_info;
  target_info.compute_unit_costs["multiply_by_two"] = INT_MULTIPLIER_COST;
  target_info.compute_unit_costs["inc"] = INT_ADDER_COST*8 + INT_CONSTANT_DIVIDER_COST;
  target_info.sram_cost_per_bit = 1;
  target_info.reg_cost_per_bit = 1;

  cout << endl << "Estimating area costs..." << endl;
  map<string, int> kernel_areas = estimate_kernel_areas(prg, target_info);

  cout << endl << "Grouping kernels..." << endl;
  int max_area_cost_per_group = 9;
  std::set<std::set<string>> kernel_grouping = group_kernels_for_compilation(prg, kernel_areas, max_area_cost_per_group);
  assert(kernel_grouping.size() == 2);

  for(auto group : kernel_grouping){
	cout << "current group: "<< endl;
	for(auto kernel : group){
	cout << tab(1) << kernel << endl;
	}
  }

  vector<prog> group_programs;
  cout << endl << "Extracting progs..." << endl;
  for (auto group : kernel_grouping) {
    prog prog_for_group = extract_group_to_separate_prog(group, prg);
    cout << "Group program..." << endl;
    prog_for_group.pretty_print();
    group_programs.push_back(prog_for_group);
  }

  generate_optimized_code_for_program_dag(group_programs);

  assert(false);

}

//-----------------------------------------VOID PROG_SPLITTING_TESTS-------------------------------------------
void prog_splitting_tests() {
	toy_task();
}
