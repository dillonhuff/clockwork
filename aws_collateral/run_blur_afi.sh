awsxclbin_file=$1
target_afi=$2

sudo fpga-describe-local-image-slots -H
sudo fpga-clear-local-image -S 0 -H
sudo fpga-load-local-image -S 0 -I ${target_afi} -H
#sudo fpga-load-local-image -S 0 -I agfi-0749e24d4a285374b -H

./host ${awsxclbin_file}
#bxy_ur_16_opt.awsxclbin

