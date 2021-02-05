afid=$(../../../aws_collateral/get_afid.py $app 2>&1)
echo 'afid ='$afid
../../../aws_collateral/rebuild_host.sh ${app}_host.cpp || { echo 'failed to build host'; exit 1; }
../../../aws_collateral/load_our_awsxclbin.sh || { echo 'failed to load awsxclbin'; exit 1; }
../../../aws_collateral/run_blur_afi.sh ${app}.awsxclbin ${afid}
echo 'done'

