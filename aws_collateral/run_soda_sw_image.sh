../../../aws_collateral/rebuild_host.sh soda_${app}_host.cpp || { echo 'failed to build host'; exit 1; }
make check TARGET=sw_emu TARGET=$AWS_PLATFORM all
echo 'done'
