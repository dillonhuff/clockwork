../../../aws_collateral/rebuild_host.sh soda_sbl_16_opt_host.cpp
../../../aws_collateral/load_soda_awsxclbin.sh
aws ec2 describe-fpga-images >& fpgas.txt
