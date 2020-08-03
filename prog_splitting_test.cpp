#include "example_progs.h"
#include "prog_splitting_test.h"
#include "prog.h"
#include <cassert>
#include <iostream>

#define INT_MULTIPLIER_COST 1
#define INT_ADDER_COST 1
#define INT_CONSTANT_DIVIDER_COST 1

typedef address normalized_address;

struct TargetTechlibInfo {
  map<string, int> compute_unit_costs;
  int sram_cost_per_bit;
  int reg_cost_per_bit;
};

//-----------------------------------------ESTIMATE_KERNEL_AREAS-------------------------------------------

map<string, int> estimate_kernel_areas(prog& prg, TargetTechlibInfo& target_info) {

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

std::set<normalized_address> get_normalized_addresses(const string& buff, prog& prg){
	
	std::set<op*> buff_readers = find_readers(buff, prg);
	op* buff_writer = find_writer(buff, prg);
	std::set<address> addresses;
	auto levels = get_variable_levels(prg);
	std::set<normalized_address> normalized_addresses;

	// Add addresses from reader ops
	for(auto reader : buff_readers){
		for(auto addr : reader->read_addrs(buff)){
			addresses.insert(addr.at(0).second);	
		}
	}

	// Add addresses from writer op
	for(auto addr : buff_writer->write_addrs(buff)){
		addresses.insert(addr.at(0).second);	
	}

	// Change every address' variable name for its <level> (normalize it)
	for(auto addr : addresses){
		normalized_address normalized = addr;
		for(auto level : levels){
			string var = level.first;
			int level_index = level.second;
			string new_var_name = "<" + str(level_index) + ">";
			normalized = ReplaceString(normalized, var, new_var_name); 
		}
		normalized_addresses.insert(normalized);
	}

	// Print addresses before and after being normalized
	cout << "Addresses in:  " << buff << endl;
	for(auto addr : addresses){
		cout << addr << endl;

	}
	cout << "Normalized addresses in:  " << buff << endl;
	for(auto addr : normalized_addresses){
		cout << addr << endl;
	}

	return normalized_addresses;
}

//-------------------------------------------------STRIDE-------------------------------------------------------
int stride(int variable, normalized_address addr){

	int stride = 0;
	vector<string> vars = split_at(addr, ",");
	vector<string> strs = split_at(vars.at(variable), "<");
	if(strs.at(0) == "" || strs.at(0) == " "){
		stride = 0;
	} else{
		stride = std::stoi(strs.at(0));
	}

	return stride;
}

//-----------------------------------------VARIABLES_WITH_NONZERO_STRIDE-----------------------------------------

std::set<int> variables_with_nonzero_stride(normalized_address addr){
	std::set<int> nonzero_variables;
	int var = 2;
	for(int i = 0; i < var; i++){
		if(stride(i, addr) > 0){
			nonzero_variables.insert(var);
		}
	}
	
	return nonzero_variables;
}

//------------------------------------------------IS_POINTWISE--------------------------------------------------

bool is_pointwise(const string& buff, prog& prg){
	if(get_normalized_addresses(buff, prg).size() == 1){
		cout << buff << " is POINTWISE!" << endl;
		return true;
	}	

	return false;
}

//------------------------------------------------IS_STENCIL--------------------------------------------------

bool is_stencil(const string& buff, prog& prg){
	// Get the normalized addresses
	std::set<normalized_address> normalized_addresses = get_normalized_addresses(buff, prg);
	std::set<int> variable_counts;

	// For each addr get the number of variables with nonzero stride
	for(auto addr : normalized_addresses){
		int num_nonzero_variables = variables_with_nonzero_stride(addr).size();
		variable_counts.insert(num_nonzero_variables);
		cout << "num_nonzero_variables = " << num_nonzero_variables << endl;
	}

	// If not all the addrs have the same amount of nonzero-stride vars, the buff isn't stencil
	if(variable_counts.size() != 1){
		cout << "NOT STENCIL!"<< endl;
		return false;
	}

	// If all the addrs have the same amount of nonzero-stride vars, get that number 
	for(auto variable : variable_counts){ // Isn't this going to be a single value?
		std::set<int> strides;
		for(auto addr : normalized_addresses){
			strides.insert(stride(variable, addr)); 
		}
		// If all the strides aren't the same value, the buff isn't stencil
		if(strides.size() != 1){
			cout << "NOT STENCIL!"<< endl;
			return false;
		}
	}

	cout << buff << " is STENCIL!" << endl;
	return true;
}

//----------------------------------------------NUM_LOCS_WRITTEN------------------------------------------------

int num_locs_written(const string& buff, prog& prg){

	int kernel_cost = 0;
	uset* all_locs_written = nullptr;
	auto ops_to_writes = prg.producer_maps();

	// Loop through all ops in the prog checking whether they are producers and writing on the buff
	// Update all_locs_written if necessary at each op
	for (auto op: prg.all_ops()){
		isl_map* write = map_find(op, ops_to_writes);
		if(range_name(write)==buff){
			cout << tab(1) << op -> name << endl;
			auto locs_written = write;
			cout << tab(2) << str(locs_written) << endl;
			auto locs = range(locs_written);
			cout << tab(2) << str(locs) << endl;
			if(all_locs_written == nullptr){
				all_locs_written = to_uset(locs);
			}else{
				all_locs_written = unn(to_uset(locs), all_locs_written);
			}
		}
	}

	int num_locs_written = int_upper_bound(card(all_locs_written));
	cout << tab(2) << "Number of locations written: " << num_locs_written << endl;
	return num_locs_written;
}

//-----------------------------------------ESTIMATE_KERNEL_MEMORY_AREA-------------------------------------------

 map<string, int> estimate_kernel_memory_area(prog& prg, TargetTechlibInfo& target_info){

	prg.pretty_print();

	// Get and print all var levels
	auto levels = get_variable_levels(prg);
	cout << "Variable levels: " << endl;
	for(auto level : levels){
		cout << tab(1) << level.first << " -> " << level.second << endl;
	}

	// Get all buffers
	std::set<string> buffers = all_buffers(prg);
	map<string, int> estimated_buffer_sizes;

	// Check each buff to estimate its size
	for(auto buff : buffers){
		if(prg.is_boundary(buff)){
			estimated_buffer_sizes[buff] = 0;
		} else if(is_pointwise(buff, prg)){
			estimated_buffer_sizes[buff] = 0;
		} else if(is_stencil(buff, prg)){	
			estimated_buffer_sizes[buff] = 0; //To be implemented!
			cout << "Access to " << buff << " is a STENCIL!" << endl;
			assert(false);
		} else{
			estimated_buffer_sizes[buff] = num_locs_written(buff, prg);
		}
	}

	
	map<string, int> estimated_areas;
	auto locations_written = prg.producer_maps();

	return estimated_areas;
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


prog simple_stencil(){

  prog prg;
  prg.compute_unit_file = "clockwork_standard_compute_units.h";
  prg.name = "brighten_blur";
  prg.add_input("off_chip_input");
  prg.add_output("off_chip_output");
  prg.buffer_port_widths["off_chip_input"] = 16;
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["off_chip_output"] = 16;

  int input_image_rows = 256;
  int input_image_cols = 256;

  prg.buffer_bounds["off_chip_input"] = {input_image_cols, input_image_rows};
  prg.buffer_bounds["in"] = {input_image_cols, input_image_rows};
  prg.buffer_bounds["off_chip_output"] = {input_image_cols - 2, input_image_rows - 2};

  auto p = prg.add_nest("po", 0, input_image_rows, "pi", 0, input_image_cols);
  auto write = p->add_op("load_image_from_off_chip");
  write->add_load("off_chip_input", "pi, po");
  write->add_store("in", "pi, po");

  auto write_out = prg.add_nest("m", 0, input_image_rows-2, "n", 0, input_image_cols-2);
  auto write_op = write_out->add_op("write_blurred_off_chip");
  write_op->add_load("in", "n, m");
  write_op->add_load("in", "23n, m+1");
  write_op->add_load("in", "n, m+2");
  write_op->add_load("in", "n+1, m");
  write_op->add_load("in", "n+1, m+1");
  write_op->add_load("in", "n+1, m+2");
  write_op->add_load("in", "n+2, m");
  write_op->add_load("in", "n+2, m+1");
  write_op->add_load("in", "n+2, m+2");
  write_op->add_store("off_chip_output", "n, m");

  return prg;

}

//--------------------------------------------------TOY_TASK----------------------------------------------------------
void toy_task(){


	vector<prog> example_progs;
	example_progs.push_back(simple_stencil());
	example_progs.push_back(brighten_blur());
	//example_progs.push_back(unet_conv_3_3());
	//example_progs.push_back(resnet());

	vector<pair<string, int>> prog_costs;

	for(auto prg : example_progs){
		//	generate_optimized_code(prg);
		//	generate_unoptimized_code(prg);
		//	assert(false);

		// Estimate the area required for each kernel in the application
		TargetTechlibInfo target_info;
		target_info.sram_cost_per_bit = 1;
		target_info.reg_cost_per_bit = 1;

		if(prg.name == "resnet"){
			target_info.compute_unit_costs["hcompute_hw_input_stencil"] = 0;
			target_info.compute_unit_costs["hcompute_hw_kernel_stencil"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_1"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_2"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_3"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_4"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_5"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_6"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_7"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_8"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_9"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_10"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_11"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_12"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_13"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_14"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_15"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_conv_stencil_16"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
			target_info.compute_unit_costs["hcompute_output_stencil"] = INT_ADDER_COST*2 + INT_MULTIPLIER_COST*2;
		} else if(prg.name == "conv_3_3"){
			target_info.compute_unit_costs["hcompute_hw_input_stencil"] = 0;
			target_info.compute_unit_costs["hcompute_hw_kernel_stencil"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_1"] = 0;
			target_info.compute_unit_costs["hcompute_hw_input_stencil"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_2"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_3"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_4"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_5"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_6"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_7"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_8"] = 0;
			target_info.compute_unit_costs["hcompute_conv_stencil_9"] = 0;
			target_info.compute_unit_costs["hcompute_hw_output_stencil"] = 0;
		} else if(prg.name == "brighten_blur" || prg.name == "simple_stencil"){
			target_info.compute_unit_costs["multiply_by_two"] = INT_MULTIPLIER_COST;
			target_info.compute_unit_costs["blur_3_3"] = INT_ADDER_COST*8 + INT_CONSTANT_DIVIDER_COST;
			target_info.compute_unit_costs["inc"] = INT_ADDER_COST*8 + INT_CONSTANT_DIVIDER_COST;
		}

		estimate_kernel_memory_area(prg, target_info);
		assert(false);	

		map<string, int> kernel_areas = estimate_kernel_areas(prg, target_info);
		int total_cost = 0;
		for(auto estimate_area : kernel_areas){
			total_cost += estimate_area.second;
			//		cout << "Each cost: " << estimate_area.second << endl;
		}
		
		   cout << endl << "Grouping kernels..." << endl;
		   int max_area_cost_per_group = 9;
		   std::set<std::set<string>> kernel_grouping = group_kernels_for_compilation(prg, kernel_areas, max_area_cost_per_group);
		//		assert(kernel_grouping.size() == 2);

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
		 
		pair<string, int> result;
		result.first = prg.name;
		result.second = total_cost; 
		prog_costs.push_back(result);
	}
	//	generate_optimized_code_for_program_dag(group_programs);

	cout << endl << "Programs costs:" << endl;
	for(auto cost : prog_costs){
		cout << cost.first << " => " << cost.second << endl;
	}
	assert(false);

}

//-----------------------------------------VOID PROG_SPLITTING_TESTS-------------------------------------------
void prog_splitting_tests() {
	toy_task();
}

