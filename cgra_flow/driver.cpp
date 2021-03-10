#include "cgra_flow.h"
#include "conv_3_3_memory.h"

int main(int argc, char** argv) {
    auto prg = conv_3_3();
    string dir = "./cgra_flow/result";
    preprocess_prog(prg);

    //Run Frontend Test, generate gold TB
    auto cpu = unoptimized_result(prg);

    //Run Memory Mapper and dump collateral into dir
    compile_app_for_garnet_single_port_mem(prg, dir);
    //Run interconnect agnostic tb
    auto cgra = cgra_flow_result(prg, dir);

    sanity_check(prg, cpu, cgra);

    return 0;
}
