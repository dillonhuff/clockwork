./build.sh
if [ $? -eq 0 ]; then
  ./a.out
else
  echo "Build FAILED"
fi
