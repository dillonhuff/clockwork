source ./user_settings/dhuff_settings.sh
$CXX -std=c++11 build_set_test.cpp isl_utils.cpp -I $BARVINOK_PATH -L $ISL_PATH -lbarvinok -lisl -I $OPT_PATH -lbarvinok -lgmp -L $OPT_LIB_PATH -lntl -lpolylibgmp


