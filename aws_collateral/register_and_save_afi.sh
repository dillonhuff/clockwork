build_dir=$1

/home/centos/aws-fpga/Vitis/tools/create_vitis_afi.sh -xclbin=${build_dir}/${app}.xclbin -o=${app} -s3_bucket=iccad-2020-bucket -s3_dcp_key=dcp_folder -s3_logs_key=logs_folder

aws s3 mb s3://iccad-2020-bucket/app-results/${app}/our_codes/

aws s3 sync . s3://iccad-2020-bucket/app-results/${app}/our_codes/ --exclude '*' --include *.rpt
aws s3 cp host s3://iccad-2020-bucket/app-results/${app}/our_codes/
aws s3 cp ${build_dir}/${app}.xclbin.info s3://iccad-2020-bucket/app-results/${app}/our_codes/
aws s3 cp ${build_dir}/${app}.xclbin s3://iccad-2020-bucket/app-results/${app}/our_codes/
aws s3 cp ${app}.awsxclbin s3://iccad-2020-bucket/app-results/${app}/our_codes/




