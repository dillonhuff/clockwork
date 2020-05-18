build_dir=build_dir.hw.xilinx_aws-vu9p-f1_shell-v04261818_201920_2
target=${app}

aws s3 mb s3://iccad-2020-bucket/app-results/${app}/our_code/

aws s3 sync . s3://iccad-2020-bucket/app-results/${app}/our_code/ --exclude '*' --include *.rpt
aws s3 cp host s3://iccad-2020-bucket/app-results/${app}/our_code/
aws s3 cp ${build_dir}/${target}.xclbin.info s3://iccad-2020-bucket/app-results/${app}/our_code/
aws s3 cp ${build_dir}/${target}.xclbin s3://iccad-2020-bucket/app-results/${app}/our_code/
aws s3 cp ${target}.awsxclbin s3://iccad-2020-bucket/app-results/${app}/our_code/

aws s3 cp ${target}.awsxclbin s3://iccad-2020-bucket/app-results/${app}/our_code/start_time.txt
aws s3 cp ${target}.awsxclbin s3://iccad-2020-bucket/app-results/${app}/our_code/end_time.txt




