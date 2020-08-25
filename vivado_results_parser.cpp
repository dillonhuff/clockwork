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

	doc.print(cout);
	auto used_FF =  doc.child("profile").child("AreaEstimates").child("Resources").child("FF").child_value();
	auto used_LUT = doc.child("profile").child("AreaEstimates").child("Resources").child("LUT").child_value();
	auto used_BRAM_18K = doc.child("profile").child("AreaEstimates").child("Resources").child("BRAM_18K").child_value();
	auto used_DSP48E = doc.child("profile").child("AreaEstimates").child("Resources").child("DSP48E").child_value();
	auto used_URAM = doc.child("profile").child("AreaEstimates").child("Resources").child("URAM").child_value();


	auto available_FF = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("FF").child_value();
	auto available_LUT = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("LUT").child_value();
	auto available_BRAM_18K = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("BRAM_18K").child_value();
	auto available_DSP48E = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("DSP48E").child_value();
	auto available_URAM = doc.child("profile").child("AreaEstimates").child("AvailableResources").child("URAM").child_value();

	double FF = std::stoi(used_FF)*100.00/std::stoi(available_FF);
	double LUT = std::stoi(used_LUT)*100.00/std::stoi(available_LUT);
	double BRAM_18K = std::stoi(used_BRAM_18K)*100.00/std::stoi(available_BRAM_18K);
	double DSP48E = std::stoi(used_DSP48E)*100.00/std::stoi(available_DSP48E);
	//double URAM = std::stoi(used_URAM)*100.00/std::stoi(available_URAM);
	double URAM = 0;

	cout << "FF: " << used_FF << " out of " << available_FF << " = " << FF << "%" << endl;
	cout << "LUT: " << used_LUT << " out of " << available_LUT << " = " << LUT << "%" << endl;
	cout << "BRAM_18K: " << used_BRAM_18K << " out of " << available_BRAM_18K << " = " << BRAM_18K << "%" << endl;
	cout << "DSP48E: " << used_DSP48E << " out of " << available_DSP48E << " = " << DSP48E << "%" << endl;
	cout << "URAM: " << used_URAM <<  " out of " << available_URAM << " = " << URAM << "%" << endl;
	cout << "Done parsing vivado" << endl;
	
	//ifstream vivado_file ("./conv_3_3_halide_proj/solution1/syn/report/conv_3_3_halide_csynth.xml");
}
