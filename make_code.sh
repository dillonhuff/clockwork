source ./user_settings/jliu_settings.sh
$CXX -std=c++11 -g -O0 build_set_test.cpp qexpr.cpp app.cpp isl_utils.cpp prog.cpp codegen.cpp minihls.cpp ubuffer.cpp -I $BARVINOK_PATH -L $ISL_PATH -lbarvinok -lisl -I $OPT_PATH -lbarvinok -lgmp -L $OPT_LIB_PATH -lntl -lpolylibgmp -lpthread


