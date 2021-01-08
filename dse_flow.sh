source ./user_settings/private_settings.sh
cd dse_flow
# make clean
make
cd ../

if [ $? -eq 0 ]; then
  echo "Cmd: " $1 $2 $3
  dse_flow/clockwork_dse_flow $1 $2 $3
else
  echo "Build FAILED"
fi


