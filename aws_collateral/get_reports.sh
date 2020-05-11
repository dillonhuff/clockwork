app_name=$1
aws s3 cp s3://iccad-2020-bucket/app-results/${app_name} . --recursive --exclude "*" --include "*kernel_util_routed.rpt"
aws s3 cp s3://iccad-2020-bucket/app-results/${app_name} . --recursive --exclude "*" --include "*.xclbin.info"

aws s3 cp s3://iccad-2020-bucket/app-results/${app_name} . --recursive --exclude "*" --include "*start_time.txt"
aws s3 cp s3://iccad-2020-bucket/app-results/${app_name} . --recursive --exclude "*" --include "*end_time.txt"


