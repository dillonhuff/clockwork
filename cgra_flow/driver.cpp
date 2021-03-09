#include "cgra_flow.h"
#include "conv_3_3_memory.h"

int main(int argc, char** argv) {
    auto prg = conv_3_3();
    string dir = "./cgra_flow/result";
    compile_app_for_garnet_single_port_mem(prg, dir);

    return 0;
}
