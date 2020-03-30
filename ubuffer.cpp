#include "ubuffer.h"

void UBuffer::vectorization(int dim_id, int fetch_width, UBuffer& agg_buf, UBuffer& tb) {

    agg_buf.name = name + "_agg";
    agg_buf.ctx = ctx;
    agg_buf.port_widths = port_widths;
    vector<string> in_bundle = get_in_bundles();
    for (auto bd_name : in_bundle) {
        cout << "Vectorize input port bundle: " << bd_name << endl;
       for (auto in_pt_name : port_bundles.at(bd_name) ) {
           cout << "\tvectorize input port: " << in_pt_name << endl;
           auto acc_pattern = access_pattern.at(in_pt_name);
           auto acc_pattern_vec = acc_pattern.vectorization(dim_id, fetch_width);
           std::cout << "before rewrite: " << acc_pattern << endl;

           agg_buf.add_in_pt_with_access_pattern(in_pt_name + "_in", acc_pattern);
           agg_buf.port_bundles[bd_name + "_in"].push_back(in_pt_name + "_in");

           size_t new_pt_cnt = 0;
           for (auto acc_pattern_rewrite: acc_pattern_vec) {
               std::cout << "\t\trewrited access patter:\n" << acc_pattern_rewrite << endl;
               string suffix = "_out";
               if (acc_pattern_vec.size() > 1)
                   suffix += "_" + std::to_string(new_pt_cnt);
               agg_buf.add_out_pt_with_access_pattern(in_pt_name + suffix, acc_pattern_rewrite);
               new_pt_cnt ++;
               agg_buf.port_bundles[bd_name + "_out"].push_back(in_pt_name + suffix);
           }
       }
    }
    //TODO: need create a pass to get schedule
    cout << agg_buf.get_out_ports() << endl;
    cout <<"\tAGG buffer param:" << agg_buf << endl;
}
