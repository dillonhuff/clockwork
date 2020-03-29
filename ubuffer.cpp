#include "ubuffer.h"

void UBuffer::vectorization(int dim_id, int fetch_width) {
        vector<string> in_bundle = get_in_bundles();
        for (auto bd_name : in_bundle) {
            cout << "Vectorize input port bundle: " << bd_name << endl;
            for (auto in_pt_name : port_bundles.at(bd_name) ) {
                cout << "\tvectorize input port: " << in_pt_name << endl;
                auto acc_pattern = access_pattern.at(in_pt_name);
                std::cout << "before rewrite: " << acc_pattern << endl;
                auto acc_pattern_vec = acc_pattern.vectorization(dim_id, fetch_width);

                //TODO: create a iostream overload for debug
                for (auto acc_pattern_rewrite: acc_pattern_vec) {
                    std::cout << "\t\trewrited access patter:\n" << acc_pattern_rewrite << endl;
                }
            }
        }
    }
