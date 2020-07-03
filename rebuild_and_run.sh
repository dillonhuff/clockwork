source ./user_settings/private_settings.sh
./make_code.sh
if [ $? -eq 0 ]; then
  echo "Cmd: " $1
  ./clockwork $1
else
  echo "Build FAILED"
fi


