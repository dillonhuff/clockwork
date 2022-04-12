#pragma once

#include "utils.h"
#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>


#define US + "_" +

struct buffer_list
{
	map<string, int> buffers_and_sizes;
	void add_element(string buf, int size)
	{
		buffers_and_sizes.insert(pair<string, int>(buf, size));
	}
	map<string, int> return_all_buffers()
	{
		return buffers_and_sizes;
	}
};
void generate_catapult_tcl(std::string& name, bool is_halide_app, buffer_list& buffer_list);//* = nullptr);
