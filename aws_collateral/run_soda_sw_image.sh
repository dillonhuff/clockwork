../../../aws_collateral/rebuild_host.sh soda_${app}_host.cpp || { echo 'failed to build host'; exit 1; }
./build_kernel.sh
make check TARGET=sw_emu TARGET=$AWS_PLATFORM all
echo 'done'
