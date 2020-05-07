build_dir=$1
target=$2

/home/centos/aws-fpga/Vitis/tools/create_vitis_afi.sh -xclbin=${build_dir}/${target}.xclbin -o=${target} -s3_bucket=iccad-2020-bucket -s3_dcp_key=dcp_folder -s3_logs_key=logs_folder

#aws s3 mb s3://iccad-2020-bucket/app-results/${app}/our_code/

#aws s3 sync . s3://iccad-2020-bucket/app-results/${app}/our_code/ --exclude '*' --include ${build_dir}/${app}_pnr*.rpt
#aws s3 cp host s3://iccad-2020-bucket/app-results/${app}/our_code/
#aws s3 cp ${build_dir}/${target}.xclbin.info s3://iccad-2020-bucket/app-results/${app}/our_code/
#aws s3 cp ${build_dir}/${target}.xclbin s3://iccad-2020-bucket/app-results/${app}/our_code/
#aws s3 cp ${target}.awsxclbin s3://iccad-2020-bucket/app-results/${app}/our_code/




