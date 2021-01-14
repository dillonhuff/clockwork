source ./user_settings/private_settings.sh
cd dse_flow
# make clean
make
cd ../

if [ $? -eq 0 ]; then
  echo "Cmd: clockwork_dse_flow " $@
  dse_flow/clockwork_dse_flow $@
else
  echo "Build FAILED"
fi


