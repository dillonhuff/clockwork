aws s3 sync . s3://iccad-2020-bucket/app-results/bxy_ur_opt_32/soda_codes/ --exclude '*' --include *.rpt
aws s3 cp bxy_ur_32_opt_kernel.xclbin.info s3://iccad-2020-bucket/app-results/soda_codes/
aws s3 cp bxy_ur_32_opt_kernel.xclbin s3://iccad-2020-bucket/app-results/soda_codes/
aws s3 cp bxy_ur_32_opt_kernel.awsxclbin s3://iccad-2020-bucket/app-results/bxy_ur_32_opt/soda_codes/
/home/centos/aws-fpga/Vitis/tools/create_vitis_afi.sh -xclbin=bxy_ur_32_opt_kernel.xclbin -o=bxy_ur_32_opt_kernel -s3_bucket=iccad-2020-bucket -s3_dcp_key=dcp_folder -s3_logs_key=logs_folder
