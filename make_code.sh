source ./user_settings/jliu_settings.sh

COREIR_INCLUDE=$COREIR_PATH/include
COREIR_LIB=$COREIR_PATH/lib

$CXX -std=c++17 -g -O0 build_set_test.cpp qexpr.cpp app.cpp isl_utils.cpp prog.cpp codegen.cpp minihls.cpp ubuffer.cpp -I $COREIR_INCLUDE -I $BARVINOK_PATH -L $ISL_PATH -lbarvinok -lisl -I $OPT_PATH -lbarvinok -lgmp -L $OPT_LIB_PATH -lntl -lpolylibgmp -lpthread -L$COREIR_LIB -Wl,-rpath $COREIR_LIB -lcoreir -lcoreirsim -lcoreir-commonlib


