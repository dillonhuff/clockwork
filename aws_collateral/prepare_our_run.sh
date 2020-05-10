../../../aws_collateral/rebuild_host.sh ${app}_host.cpp 
../../../aws_collateral/load_our_awsxclbin.sh
aws ec2 describe-fpga-images >& fpgas.txt
