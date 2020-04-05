#include "ubuffer.h"

map<string, isl_union_map*> UBuffer::produce_vectorized_schedule(string in_bd_name, string out_bd_name) {
    /*
     * Previously we have two ops, input and output.In order to do the vectorization
     * we need to create 2 other ops, input_vec and output_vec
     * */
    string in_pt_name = pick(port_bundles.at(in_bd_name));
    string out_pt_name = pick(port_bundles.at(out_bd_name));
    cout << in_pt_name << out_pt_name << endl;
    string in_op = access_pattern.at(in_pt_name).op_name;
    string out_op = access_pattern.at(out_pt_name).op_name;
    auto in_sched = schedule.at(in_pt_name);
    auto out_sched = schedule.at(out_pt_name);
    auto in_sched_vec = collect_sched_vec(in_sched);
    auto out_sched_vec = collect_sched_vec(out_sched);
    cout << "\tin vec: " << in_sched_vec << "\n\tout vec: " << out_sched_vec << endl;
    auto in_sched_new = gen_map_from_sched_vec(ctx, in_sched_vec, in_op);
    auto out_sched_new = gen_map_from_sched_vec(ctx, out_sched_vec, out_op);
    cout << "\tin sched: " << str(in_sched_new) << "\n\tout sched: " << str(out_sched_new) << endl;
    cout << "\tin domain: " << str(its(in_sched_new, domain.at(in_pt_name)))  << "\n\tout domain: " << str(its(out_sched_new, domain.at(out_pt_name))) << endl;
    assert(false);

    map<string, isl_union_map*> new_sched;
    return new_sched;
}


void UBuffer::add_vectorized_pt_to_ubuf(UBuffer & target_buf, umap* rewrite_buf2op, string origin_pt_name, string bd_name, int dim_id, int fetch_width, bool is_out) {

    AccessPattern acc_pattern = access_pattern.at(origin_pt_name);
    auto constraint_slices = acc_pattern.get_buf_slice(ctx, target_buf.name, dim_id, fetch_width);
    size_t new_pt_cnt = 0;
    for (auto slice : constraint_slices) {
        cout << "Constraint: " << str(slice) << endl;
        cout << "Rewrited Access Map" << str(simplify(dot(inv(rewrite_buf2op), slice))) << endl;
        auto rewrite_access_map = dot(inv(rewrite_buf2op), slice);
        if (is_out) {
            string pt_name = origin_pt_name + "_out_" + std::to_string(new_pt_cnt);
            target_buf.port_bundles[bd_name].push_back(pt_name);
            auto schedule_origin = schedule.at(origin_pt_name) ;
            cout << "Original Schedule:"<< collect_sched_vec(range(schedule_origin)) << endl;
            assert(false);
            target_buf.add_out_pt(pt_name, range(to_map(rewrite_buf2op)), to_map(rewrite_access_map), schedule.at(origin_pt_name));
            target_buf.add_access_pattern(pt_name, acc_pattern.op_name+"_vec", target_buf.name);
        }
        else {
            string pt_name = origin_pt_name + "_in_" + std::to_string(new_pt_cnt);
            target_buf.port_bundles[bd_name].push_back(pt_name);
            target_buf.add_in_pt(pt_name, range(to_map(rewrite_buf2op)), to_map(rewrite_access_map), schedule.at(origin_pt_name));
            target_buf.add_access_pattern(pt_name, acc_pattern.op_name+"_vec", target_buf.name);
        }
        new_pt_cnt ++;
    }
}


void UBuffer::vectorization(int dim_id, int fetch_width, UBuffer& agg_buf, UBuffer& sram, UBuffer& tb) {

    agg_buf.name = name + "_agg";
    agg_buf.ctx = ctx;
    agg_buf.port_widths = port_widths;

    tb.name = name + "_tb";
    tb.ctx = ctx;
    tb.port_widths = port_widths;

    sram.name = name + "_sram";
    sram.ctx = ctx;
    sram.port_widths = port_widths;

    vector<string> in_bundle = get_in_bundles();
    vector<string> out_bundle = get_out_bundles();

    //Only test bundle size = 1
    assert(in_bundle.size() == 1 && out_bundle.size() == 1);

    //produce naive schedule for the rewrited buffer
    map<string, isl_union_map*> new_sched =  produce_vectorized_schedule(pick(in_bundle), pick(out_bundle));

    for (auto bd_name : in_bundle) {
        cout << "Vectorize input port bundle: " << bd_name << endl;
        for (auto in_pt_name : port_bundles.at(bd_name) ) {
            cout << "\tvectorize input port: " << in_pt_name << endl;
            auto acc_pattern = access_pattern.at(in_pt_name);
            auto acc_pattern_vec = acc_pattern.vectorization(dim_id, fetch_width);
            std::cout << "before rewrite: " << acc_pattern << endl;

            //produce the operation transfomation
            isl_map* op_trans = acc_pattern.get_op_transform(ctx, dim_id, fetch_width);
            std::cout << "transform rewrite: " << str(op_trans) << endl;

            auto rewrite_buf2op = dot(inv(access_map.at(in_pt_name)), op_trans);
            cout << "rewrite buffer to op map: " << str(access_map.at(in_pt_name)) << endl;

            //add in port to agg_buf
            auto inpt_acc_map = remap_access_to_new_buffer(in_pt_name, "_agg");
            cout << "Access map add to agg_in: " << str(inpt_acc_map) << endl;
            agg_buf.add_in_pt(in_pt_name+"_in", domain.at(in_pt_name), inpt_acc_map, access_map.at(in_pt_name));
            agg_buf.port_bundles[bd_name].push_back(in_pt_name + "_in");

            //add out port to agg_buf
            add_vectorized_pt_to_ubuf(agg_buf, rewrite_buf2op, in_pt_name, bd_name, dim_id, fetch_width, true);
            //add in port to sram
            add_vectorized_pt_to_ubuf(sram, rewrite_buf2op, in_pt_name, bd_name, dim_id, fetch_width, false);
       }
    }

    for (auto bd_name: out_bundle) {
        cout << "Vectorize output port bundle: " << bd_name << endl;
        for (auto out_pt_name : port_bundles.at(bd_name) ) {
            cout << "\tVectorize output port: " << out_pt_name << endl;
            auto acc_pattern = access_pattern.at(out_pt_name);

            auto acc_pattern_vec = acc_pattern.vectorization(dim_id, fetch_width);
            std::cout << "before rewrite: " << acc_pattern << endl;

            //produce the operation transfomation
            isl_map* op_trans = acc_pattern.get_op_transform(ctx, dim_id, fetch_width);
            std::cout << "transform rewrite: " << str(op_trans) << endl;

            auto rewrite_buf2op = dot(inv(access_map.at(out_pt_name)), op_trans);
            cout << "rewrite buffer to op map: " << str(access_map.at(out_pt_name)) << endl;

            auto outpt_acc_map = acc_pattern.get_access_map_and_decouple_reuse(ctx, dim_id);
            cout << "Access map decouple reuse: " << str(outpt_acc_map) << endl;
            tb.add_out_pt(out_pt_name+"_out", domain.at(out_pt_name), outpt_acc_map, access_map.at(out_pt_name));
            tb.port_bundles[bd_name].push_back(out_pt_name + "_out");

            //add out port to agg_buf
            add_vectorized_pt_to_ubuf(tb, rewrite_buf2op, out_pt_name, bd_name, dim_id, fetch_width, false);
            //add in port to sram
            add_vectorized_pt_to_ubuf(sram, rewrite_buf2op, out_pt_name, bd_name, dim_id, fetch_width, true);
        }
    }
    assert(false);
    //TODO: need create a pass to get schedule
    cout << agg_buf.get_out_ports() << endl;
    cout <<"\tAGG buffer param:" << agg_buf << endl;
}
