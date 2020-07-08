#include <iostream>
#include <cassert>
#include "pugixml.hpp"
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(const int argc, char** argv){
	assert (argc == 2);
	string file_name(argv [1]);
	cout << "File name: " << file_name << endl;

	pugi::xml_document doc;
	pugi::xml_parse_result result = doc.load_file(file_name.c_str());
	if (!result){
		cout << "Error finding file"<< endl;
		return -1;
	}

	//area.print(cout);
	auto used_FF = (int) doc.child("profile").child("AreaEstimates").child("Resources").child("FF").child_value();
	auto used_LUT = doc.child("profile").child("AreaEstimates").child("Resources").child("LUT").child_value();
	auto used_BRAM_18K = doc.child("profile").child("AreaEstimates").child("Resources").child("BRAM_18K").child_value();
	auto used_DSP48E = doc.child("profile").child("AreaEstimates").child("Resources").child("DSP48E").child_value();
	auto used_URAM = doc.child("profile").child("AreaEstimates").child("Resources").child("URAM").child_value();


	auto available_FF = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("FF").child_value();
	auto available_LUT = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("LUT").child_value();
	auto available_BRAM_18K = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("BRAM_18K").child_value();
	auto available_DSP48E = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("DSP48E").child_value();
	auto available_URAM = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("URAM").child_value();

	cout << "Used FF: " << used_FF << " = " << available_FF << endl;
	cout << "Used LUT: " << used_LUT << endl;
	cout << "Used BRAM_18K: " << used_BRAM_18K << endl;
	cout << "Used DSP48E: " << used_DSP48E << endl;
	cout << "Used URAM: " << used_URAM << endl;
	cout << "Done parsing vivado" << endl;
	
	//ifstream vivado_file ("./conv_3_3_halide_proj/solution1/syn/conv_3_3_halide_csynth.xml");
}
