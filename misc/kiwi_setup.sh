cp ./user_settings/linux_settings_template.sh ./user_settings/private_settings.sh
source ./user_settings/private_settings.sh

source ./misc/install_deps_linux.sh

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${PWD}/lib
