../../../aws_collateral/rebuild_host.sh soda_${app}_host.cpp || { echo 'failed to build host'; exit 1; }
../../../aws_collateral/soda_build_sw_sim.sh || { echo 'Could not build soda sw sim'; exit 1; }

make check TARGET=sw_emu TARGET=$AWS_PLATFORM all

XCL_EMULATION_MODE=sw_emu ./host ${app}_kernel.xclbin 

