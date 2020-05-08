app=$1
aws s3 cp s3://iccad-2020-bucket/app-results/${app}/ . --exclude "*" --include "*.rpt"

