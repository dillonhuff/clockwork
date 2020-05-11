build_dir=build_dir.hw.xilinx_aws-vu9p-f1_shell-v04261818_201920_1
target=${app}

/home/centos/aws-fpga/Vitis/tools/create_vitis_afi.sh -xclbin=${build_dir}/${target}.xclbin -o=${target} -s3_bucket=iccad-2020-bucket -s3_dcp_key=dcp_folder -s3_logs_key=logs_folder


