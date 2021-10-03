#include "example_progs.h"
#include "prog_splitting_test.h"
#include "codegen.h"
#include <cassert>
#include <iostream>
#include <string>
#define INT_MULTIPLIER_COST 1
#define INT_ADDER_COST 1
#define INT_CONSTANT_DIVIDER_COST 1

typedef address normalized_address;

struct TargetTechlibInfo {
  map<string, int> compute_unit_costs;
  int sram_cost_per_bit;
  int reg_cost_per_bit;
};
const std::string whiteSpaces( " \f\n\r\t\v" );


void trimRight( std::string& str,
      const std::string& trimChars = whiteSpaces )
{
   std::string::size_type pos = str.find_last_not_of( trimChars );
   str.erase( pos + 1 );
}


void trimLeft( std::string& str,
      const std::string& trimChars = whiteSpaces )
{
   std::string::size_type pos = str.find_first_not_of( trimChars );
   str.erase( 0, pos );
}


void trim( std::string& str, const std::string& trimChars = whiteSpaces )
{
   trimRight( str, trimChars );
   trimLeft( str, trimChars );
}

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

struct normalized_address_components {
vector<vector<int>> components;
vector<int> offsets;
};

//-----------------------------------------PRINT_ADDR-------------------------------------------

void print_addr(normalized_address_components addr){
	cout << "PRINTING ADDRESS::" << endl;
	int components_size = addr.components.at(0).size();
	cout << tab(1) << "components: " << endl;
	for(int i = 0; i < components_size; i++){
		cout << tab(2);
		for(int j = 0; j < addr.components.size(); j++){
			cout <<addr.components.at(j).at(i) << "  ";
		}
		cout << endl;
	}

	cout << tab(1) << "Offsets: " << endl;
	cout << tab(2) << addr.offsets.at(0) << "  " << addr.offsets.at(1) << endl;
}

bool operator < (const normalized_address_components& x, const normalized_address_components& y){
	int sum_of_strides_x = 0;
	for(auto component : x.components){
		for(auto stride : component){
			sum_of_strides_x += stride;
		}
	}

	int sum_of_strides_y = 0;
	for(auto component : y.components){
		for(auto stride : component){
			sum_of_strides_y += stride;
		}
	}

	int sum_of_offsets_x = 0;
	for(auto off : x.offsets){
		sum_of_offsets_x += off;
	}

	int sum_of_offsets_y = 0;
	for(auto off : y.offsets){
		sum_of_offsets_y += off;
	}

	if(sum_of_strides_x < sum_of_strides_y){
		return true;
	} else if(sum_of_strides_x == sum_of_strides_y){
		if(sum_of_offsets_x < sum_of_offsets_y){
			return true;
		}
	}
	return false;
}

//-----------------------------------------GET_COMPONENTS-------------------------------------------

normalized_address_components get_components(const normalized_address& addr, prog& prg, op* op){
	normalized_address_components all_comps;

	vector<std::string> surrounding_vars_vector = surrounding_vars(op, prg);
	cout << "vars around " << op->name << ": " << comma_list(surrounding_vars_vector) << endl;
	int total_variables = surrounding_vars(op, prg).size();
	cout << "Total variables: " << total_variables << endl;
	// First split: creating components
	vector<string> components = split_at(addr, ",");
	vector<vector<int>> comp_strides;
	for(auto comp : components){
		if(contains(comp, "(")){
			vector<string> sides = split_at(comp, "(");
			comp = sides.at(1);
		}
		if(contains(comp, ")")){
			vector<string> sides = split_at(comp, ")");
			comp = sides.at(0);
		}

		// Second split: creating terms of a component
		vector<string> terms = split_at(comp, "+");
		vector<string> consts;
		vector<string> vars;
		// Sorting the terms into constants or variables
		for(auto term : terms){
			if(contains(term, "<")){
				vars.push_back(term);
			} else{
				consts.push_back(term);
			}
		}

		// Calculating the sum of constants
		int accum = 0;
		for(auto c : consts){
			cout << "stoi 1: " << c << endl;
			if(c != " " && c != "" && c != "  "){
				accum += std::stoi(c);
			}
		}
		all_comps.offsets.push_back(accum);

		// Calculating the sum of variable strides
		map<string, vector<int>> variable_strides;
		for(auto v : vars){
			vector<string> parts = split_at(v,"<");
			assert(parts.size() <= 2);
			assert(parts.size() > 0);
			auto string_to_pars = parts.at(0);
			if(parts.size() == 1 || string_to_pars == " " || string_to_pars == ""){ // In this case stride is 1
				vector<string> remaining_part = split_at(parts.at(1),">");
				variable_strides[remaining_part.at(0)].push_back(1);
			} else{ // In this case we have to find the stride
				cout << "stoi 2: " << string_to_pars << endl;
				int stride_value = std::stoi(string_to_pars);
				vector<string> remaining_part = split_at(parts.at(1),">");
				variable_strides[remaining_part.at(0)].push_back(stride_value);
			}
		}

		vector<int> reduced_strides;
		reduced_strides.resize(total_variables, 0);
		for(auto pair : variable_strides){
			auto pair_first = pair.first;
			cout << "stoi 3: " << pair_first << endl;
			int variable_index = std::stoi(pair_first);
			int accum_strides = 0;
			for(auto value : pair.second){
				accum_strides += value;
			}
			assert(variable_index < reduced_strides.size());
			reduced_strides[variable_index] = accum_strides;
		}

		all_comps.components.push_back(reduced_strides);

	}
	return all_comps;
}

//-----------------------------------------GET_NORMALIZED_ADDRESSES------------------------------------------

std::set<normalized_address_components> get_normalized_addresses(const string& buff, prog& prg){

	// Create a map here from key = buff >> value = addr
	std::set<op*> buff_readers = find_readers(buff, prg);
	std::set<op*> buff_writers = find_writers(buff, prg);
	std::set<address> addresses;
	auto levels = get_variable_levels(prg);
	vector<pair<std::string, int>> ordered_levels;
	std::set<normalized_address> normalized_addresses;
	map<address, op*> buffer_addresses;
	std::set<normalized_address_components> normalized_addresses_comps;

	// Ordering levels
	for(auto level : levels){
		ordered_levels.push_back(level);
	}

	sort_gt(ordered_levels, [](const pair<string, int>& e){
		return e.first.size();
	});


	// Add addresses from reader ops
	for(auto reader : buff_readers){
		for(auto addr : reader->read_addrs(buff)){
			addresses.insert(addr.at(0).second);
			//fill the map
			buffer_addresses[addr.at(0).second] = reader;
		}
	}

	// Add addresses from writer op
	for(auto writer : buff_writers){
		for(auto addr : writer->write_addrs(buff)){
			addresses.insert(addr.at(0).second);
			//fill the map
			buffer_addresses[addr.at(0).second] = writer;
		}
	}

	// Change every address' variable name for its <level> (normalize it)
	for(auto addr : addresses){
		normalized_address normalized = addr;
		for(auto level : ordered_levels){
			string var = level.first;
			int level_index = level.second;
			string new_var_name = "<" + str(level_index) + ">";
			normalized = ReplaceString(normalized, var, new_var_name);
		}
		//auto node = buffer_addresses.extract(addr);
		//node.key() = normalized;
		//buffer_addresses.insert(std::move(node));
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

	// Create a loop here to go through each addr and call get components
	for(auto addr : normalized_addresses){
		cout << "normalized address: " << addr << endl;
		assert(contains_key(addr, buffer_addresses));
		op* buff = buffer_addresses[addr];
		normalized_address_components component = get_components(addr, prg, buff);
		normalized_addresses_comps.insert(component);
	}
	return normalized_addresses_comps;
}


//-------------------------------------------------STRIDE-------------------------------------------------------
int stride(int variable, int component, normalized_address_components addr){
	return addr.components.at(component).at(variable);
}

//-----------------------------------------VARIABLES_WITH_NONZERO_STRIDE-----------------------------------------

int variable_with_nonzero_stride(int component, normalized_address_components addr){
	int nonzero_variable = 0;
	int var = 3; //Can we use int total_variables = surrounding_vars(op, prg).size(); to calculate this value?
	for(int i = 0; i < var; i++){
		if(stride(i, component, addr) > 0){
			nonzero_variable = i;
		}
	}

	return nonzero_variable;
}

//------------------------------------------------IS_POINTWISE--------------------------------------------------

bool is_pointwise(const string& buff, prog& prg){
	std::set<string> all_buffs = all_buffers(prg);
	assert(elem(buff,all_buffs));
	if(get_normalized_addresses(buff, prg).size() == 1){
		cout << buff << " is POINTWISE!" << endl;
		return true;
	}
	return false;
}

//------------------------------------------------IS_STENCIL--------------------------------------------------

bool is_stencil(const string& buff, prog& prg){
	// Get the normalized addresses
	std::set<normalized_address_components> normalized_addresses = get_normalized_addresses(buff, prg);
	if(normalized_addresses.size() == 0){
		return false;
	}
	std::set<int> num_levels;
	cout << "Set of normalized addresses: " << endl;
	for(auto addr : normalized_addresses){
		print_addr(addr);
		for(auto c : addr.components){
			num_levels.insert(c.size());
		}
	}
	if(num_levels.size() > 1){
		return false;
	}
	for(int component = 0; component < pick(normalized_addresses).components.size(); component++){
		std::set<int> variable_counts; // Has to be a set of the stride values of the variables
		// For each component get the number of variables/addresses with nonzero stride
		for(auto addr : normalized_addresses){
			int variable = variable_with_nonzero_stride(component, addr);
			int stride = addr.components.at(component).at(variable);
			variable_counts.insert(stride);
		}

		// If not all the addrs have the same amount of nonzero-stride vars, the buff isn't stencil
		if(variable_counts.size() != 1){
			cout << "NOT STENCIL! -> variable_count size != 1"<< endl;
			cout << "variable_count: " << endl;
			for(auto var : variable_counts){
				cout << tab(1) << var << endl;
			}
			cout << "size =  "<< variable_counts.size() << endl;
			return false;
		}

		// If all the addrs have the same amount of nonzero-stride vars, get that number
		for(auto variable : variable_counts){ // Isn't this going to be a single value?
			std::set<int> strides;
			for(auto addr : normalized_addresses){
				strides.insert(stride(variable, component,addr));
			}
			// If all the strides aren't the same value, the buff isn't stencil
			if(strides.size() != 1){
				cout << "NOT STENCIL! -> strides size = 1"<< endl;
				return false;
			}
		}
	}

	cout << buff << " IS STENCIL!" << endl;
	return true;
}

//------------------------------------------------IS_REDUCTION--------------------------------------------------

bool is_reduction(const string& buff, prog& prg){

	// Create a set with all the ops that write in the given buff
	std::set<op*> buff_writers = find_writers(buff, prg);

	//For each op, use the buff's addr to get the set of variables being used
	std::map<op*, std::set<string>> op_variables;
	for(auto writer : buff_writers){
		std::set<string> variables;
		for(auto addr : writer->write_addrs(buff)){
			vector<string> vars = split_at(addr.at(0).second, ",");
			for(auto v : vars){
				trim(v);
				variables.insert(v);
			}
		}
		op_variables[writer] = variables;
	}

	// For each op, find the surrounding variables and check if the variable is 1) being used and 2) iterated than once
	cout << "op_variables map:" << endl;
	for(auto pair : op_variables){
		cout << tab(3) << pair.first->name << endl;
		for(auto var : pair.second){
			cout << tab(4) << " " << var << endl;
		}

		vector<op*> surrounding_vars_ops_vector = surrounding_vars_ops(pair.first, prg);
		for(auto var : surrounding_vars_ops_vector){
			if(!elem(var->name, pair.second) && (var->end_exclusive - var->start) > 1){
				cout << tab(6) << "Buff doesn't read " << var->name << " with " << (var->end_exclusive - var->start) << " iterations" << endl;
				cout << buff << " IS REDUCTION!" << endl;
				return true;
			}
		}
	}
	cout << buff << " is not reduction" << endl;
	return false;
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

//----------------------------------------------STENCIL_MEMORY_COST------------------------------------------------

int stencil_memory_cost(const string& buff, prog& prg){
	int cost = 0;
	int width = prg.buffer_port_widths[buff];

	//Get dimension and size of the img
	int image_dimension = 0;
	std::set<normalized_address_components> addrs = get_normalized_addresses(buff, prg);
	vector<int> image_size = prg.buffer_bounds[buff]; //doesnt work for every app cause not all have the bounds declared
	if(image_size.size() == 0 && prg.name == "gaussian"){
		image_size.push_back(64);
	} else if (image_size.size() == 0 && prg.name == "resnet"){
		image_size.push_back(30);
	} else if (image_size.size() == 0 && prg.name == "cascade"){
		image_size.push_back(64);
	}
	image_dimension = addrs.begin()->offsets.size();
	assert(image_dimension >= 2);
	//Get size of the grid
	std::vector<int> grid_size;
	std::set<int> grid_offsets_col;
	std::set<int> grid_offsets_row;
	std::set<int> grid_offsets_len;

	cout << "Before getting the values" << endl;
	for(auto addr : addrs){
		for(int i = 0; i < addr.components.size(); i++){
			if(addr.components.at(i).at(1)!= 0){
				grid_offsets_col.insert(addr.offsets.at(i));
			} else if(addr.components.at(i).at(2) != 0){
				grid_offsets_row.insert(addr.offsets.at(i));
			} else if(image_dimension > 2){
				if(addr.components.at(i).at(3) != 0){
					 grid_offsets_len.insert(addr.offsets.at(i));
				}
			}
		}
	}
	cout << "Before calculating the cost" << endl;
	grid_size.push_back(grid_offsets_col.size());
	grid_size.push_back(grid_offsets_row.size());
	grid_size.push_back(grid_offsets_len.size());

	//Make the math
	if(image_dimension == 2){
		cost = ((image_size.at(0)*(grid_size.at(1)-1)) + grid_size.at(0)) * width;
	} else if (image_dimension == 3){
		cost = 42; //Not implemented!
	}
	cout << "After calculating the cost"<< endl;
	cout << "Stencil memory cost: " << cost << endl;
	return cost;
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
			estimated_buffer_sizes[buff] = stencil_memory_cost(buff, prg);
		} else if(is_reduction(buff, prg)){
			estimated_buffer_sizes[buff] = num_locs_written(buff, prg); // To be implemented
		}  else{
			cout << tab(3) << "NOT pointwise or stencil or reduction..." << endl;
			estimated_buffer_sizes[buff] = num_locs_written(buff, prg);
		}
	}


	auto locations_written = prg.producer_maps();
	int total_cost = 0;
	for(auto cost : estimated_buffer_sizes){
		cout << tab(1) << "Cost of " << cost.first << " is " << cost.second << endl;
		total_cost += cost.second;
	}
	cout << "Total cost: " << total_cost << endl;
	return estimated_buffer_sizes;
 }

//-----------------------------------------GROUP_KERNELS_FOR_COMPILATION-------------------------------------------

std::set<std::set<string>>group_kernels_for_compilation(prog& prg,map<string,int>& kernel_costs,const int max_area_cost_per_group){

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

//prog extract_group_to_separate_prog(std::set<std::string>& group, prog& original) {
	//prog extracted;
	//string prg_name = "Extracted_";
	//for(auto g : group){
	//prg_name += g + "_";
	//}
	//extracted.name = prg_name;

	//for(auto kernel : topologically_sort_kernels(original)){
		//if(elem(kernel, group)){
			//op* kernel_copy = extracted.add_loop(kernel, original.start(kernel), original.end_exclusive(kernel));
			//for(auto child : original.find_loop(kernel)->children){
				//deep_copy_child(kernel_copy, child, original);
			//}
		//}
	//}
	//cout << "Programs copied" << endl;

	//std::set<string> all_consumed_buffers = get_consumed_buffers(group, original);
	//std::set<string> all_produced_buffers = get_produced_buffers(group, original);
	//for(auto consumed : all_consumed_buffers){
		//if(!elem(consumed, all_produced_buffers)){
			//extracted.add_input(consumed);
			//cout << "Input added: " << consumed << endl;
			//extracted.buffer_port_widths[consumed] = map_find(consumed, original.buffer_port_widths);
			//cout << "Input width: " << extracted.buffer_port_widths[consumed] << endl;
		//}
	//}

	//for(auto produced : all_produced_buffers){
		//if(!elem(produced, all_consumed_buffers)){
			//extracted.add_output(produced);
			//cout << "Output added: " << produced << endl;
			//extracted.buffer_port_widths[produced] = map_find(produced, original.buffer_port_widths);
			//cout << "Output width: " << extracted.buffer_port_widths[produced] << endl;
		//}
	//}

	//return extracted;
//}

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
  write_op->add_load("in", "n, m+1");
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
	example_progs.push_back(unet_conv_3_3());
	example_progs.push_back(gaussian());
	example_progs.push_back(harris());
	example_progs.push_back(cascade());
	example_progs.push_back(resnet());
	example_progs.push_back(accumulation());

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

//		assert(false);
/*
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
*/
	}
//	assert(false);

}


void accumulation_reduce_test(){
	prog prg = accumulation();
	assert(!is_reduction("hw_input_stencil", prg));
//	assert(is_stencil("hw_input_stencil", prg));
	assert(is_reduction("conv_stencil", prg));
	assert(!is_reduction("hw_output_stencil", prg));
//	assert(is_stencil("hw_output_stencil", prg));
}

void unet_conv_3_3_reduce_test(){
	prog prg = unet_conv_3_3();
	assert(is_reduction("conv_stencil", prg));
	assert(!is_reduction("hw_output_stencil", prg));
//	assert(is_stencil("hw_output_stencil", prg));
//	assert(is_stencil("conv_stencil", prg));
}

void resnet_reduce_test(){
	prog prg = resnet();
	assert(!is_stencil("conv_stencil",prg));
	assert(is_reduction("conv_stencil", prg));
}

void cascade_stencil_test(){
	prog prg = cascade();
	assert(is_stencil("conv1_stencil", prg));
	assert(!is_reduction("conv1_stencil", prg));
	assert(is_stencil("hw_input_global_wrapper_stencil", prg));
}

void gaussian_stencil_test(){
	prog prg = gaussian();
	assert(is_stencil("blur_stencil", prg));
	assert(!is_reduction("blur_stencil", prg));
	assert(is_stencil("blur_unnormalized_stencil", prg));
	assert(is_stencil("hw_input_stencil", prg));
}

void harris_stencil_test(){
	prog prg = harris();
	assert(is_stencil("padded16_stencil", prg));
	assert(is_stencil("lgxx_stencil", prg));
	assert(is_stencil("lxx_stencil", prg));
	assert(is_stencil("lxy_stencil", prg));
	assert(is_stencil("cim_stencil", prg));
}

void pointwise_pointwise_test(){
	prog prg = pointwise();
	prg.pretty_print();
	assert(is_pointwise("hw_input_stencil", prg));
	assert(is_pointwise("mult_stencil", prg));
}

void brighten_blur_stencil_test(){
	prog prg = brighten_blur();
	prg.pretty_print();
	assert(is_stencil("in", prg));
	assert(is_stencil("brightened", prg));
	assert(is_stencil("blurred", prg));
	assert(!is_reduction("in", prg));
}

void camera_pipeline_stencil_test(){
	prog prg = camera_pipeline();
	assert(is_stencil("denoised_1_stencil", prg));
	assert(is_stencil("demosaicked_1_stencil", prg));
	assert(is_stencil("corrected_stencil", prg));
}

void no_stencil_test(){

  prog prg;
  prg.compute_unit_file = "clockwork_standard_compute_units.h";
  prg.name = "no_stencil_test";
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
  write_op->add_load("in", "23n, m");
  write_op->add_load("in", "1n, m+1");
  write_op->add_load("in", "n, m+2");
  write_op->add_load("in", "n+1, m");
  write_op->add_load("in", "n+1, m+1");
  write_op->add_load("in", "n+1, m+2");
  write_op->add_load("in", "n+2, m");
  write_op->add_load("in", "n+2, m+1");
  write_op->add_load("in", "n+2, m+2");
  write_op->add_store("off_chip_output", "n, m");

  prg.pretty_print();
  assert(!is_stencil("in", prg));

}

void one_stencil_test(){

  prog prg;
  prg.compute_unit_file = "clockwork_standard_compute_units.h";
  prg.name = "one_stencil_test";
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
  write_op->add_load("in", "n, m+1");
  write_op->add_load("in", "n, m+2");
  write_op->add_load("in", "n+1, m");
  write_op->add_load("in", "n+1, m+1");
  write_op->add_load("in", "n+1, m+2");
  write_op->add_load("in", "n+2, m");
  write_op->add_load("in", "n+2, m+1");
  write_op->add_load("in", "n+2, m+2");
  write_op->add_store("off_chip_output", "n, m");

  prg.pretty_print();
  assert(is_stencil("in", prg));

}

void prog_splitting_unit_tests(){
	no_stencil_test();
	one_stencil_test();
	brighten_blur_stencil_test();
	cascade_stencil_test();
	harris_stencil_test();
	gaussian_stencil_test();
	camera_pipeline_stencil_test();
	pointwise_pointwise_test();
	resnet_reduce_test();
	accumulation_reduce_test();
	unet_conv_3_3_reduce_test();
}

//-----------------------------------------VOID PROG_SPLITTING_TESTS-------------------------------------------
void prog_splitting_tests() {
//	prog_splitting_unit_tests();
	toy_task();
//	brighten_blur_stencil_test();
}

