afid=$(../../../aws_collateral/get_afid.py ${app}_kernel 2>&1)
echo 'afid ='$afid
../../../aws_collateral/rebuild_host.sh soda_${app}_host.cpp || { echo 'failed to build host'; exit 1; }
../../../aws_collateral/load_soda_awsxclbin.sh || { ehco 'failed to load awsxclbin'; exit 1; }
../../../aws_collateral/run_blur_afi.sh ${app}_kernel.awsxclbin ${afid}
echo 'done'

