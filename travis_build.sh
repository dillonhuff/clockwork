source ./user_settings/travis_settings.sh
./make_code.sh
if [ $? -eq 0 ]; then
  echo "Cmd: " $1
  echo "LD_LIBRARY_PATH:"$LD_LIBRARY_PATH
  ./clockwork $1
else
  echo "Build FAILED"
fi
