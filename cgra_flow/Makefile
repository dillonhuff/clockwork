UNAME = $(shell uname)

ifeq ($(UNAME), Darwin)
LIB_EXT =dylib
else
LIB_EXT =so
endif

TARGET = clockwork_cgra_flow

CXX_FLAGS = -std=c++17 -g -O0 -I $(BARVINOK_PATH) -I $(OPT_PATH)

#ifneq ($(COREIR),1)
#CXX_FLAGS = -std=c++11 -I $(BARVINOK_PATH) -I $(OPT_PATH)
#endif

ifneq ($(UNAME), Darwin)
CXX_FLAGS += -fPIC
endif

LINK_FLAGS = -L ../lib -L $(OPT_LIB_PATH) -L $(ISL_PATH) -lclkwrk -lbarvinok -lisl -lntl -lgmp -lpolylibgmp -lpthread 

ifeq ($(COREIR),1)
ifndef COREIR_PATH
$(error COREIR_PATH is not set)
endif
$(info CoreIR Path is [${COREIR_PATH}])
COREIR_INCLUDE = $(COREIR_PATH)/include
COREIR_LIB = $(COREIR_PATH)/lib

CXX_FLAGS += -I $(COREIR_INCLUDE) -D COREIR -D CGRAFLOW
LINK_FLAGS += -L $(COREIR_LIB) -Wl,-rpath $(COREIR_LIB) -lcoreir -lcoreirsim -lcoreir-commonlib
endif

TEST_FILES = driver.cpp
TEST_HEADER_FILES = $(patsubst %.cpp,%.h,$(TEST_FILES))

LIB_CPP_FILES = ../build_set_test.cpp ../prog_splitting_test.cpp ../qexpr.cpp ../expr.cpp ../app.cpp ../isl_utils.cpp ../prog.cpp ../codegen.cpp ../ubuffer.cpp ../coreir_backend.cpp ../cgralib.cpp ../cwlib.cpp ../options.cpp ../lake_target.cpp ../utils.cpp ../example_progs.cpp ../simple_example_progs.cpp ../rdai_collateral.cpp ../verilog_backend.cpp  
LIB_HEADER_FILES = $(patsubst %.cpp,%.h,$(LIB_CPP_FILES)) 

CXX_FLAGS += -I ..
LIB_HEADER_FILES += ../cgra_flow.h

TEST_OBJ_FILES := $(patsubst %.cpp,%.o,$(TEST_FILES))
OBJ_FILES := $(patsubst %.cpp,%.o,$(LIB_CPP_FILES)) 


$(TARGET): libclkwrk.$(LIB_EXT) $(TEST_OBJ_FILES)
	$(CXX) $(CXX_FLAGS) $(TEST_OBJ_FILES) $(LINK_FLAGS) -o $@

$(TARGET).o: $(TEST_FILES) $(LIB_HEADER_FILES) $(TEST_HEADER_FILES)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

libclkwrk.$(LIB_EXT): $(OBJ_FILES)
ifeq ($(UNAME), Darwin)
	$(CXX) $(CXX_FLAGS) -dynamiclib -undefined dynamic_lookup $^ -o ../lib/$@
else
	$(CXX) $(CXX_FLAGS) -g -fPIC -rdynamic -shared $^ -o ../lib/$@
endif

%.o: %.cpp $(LIB_HEADER_FILES)
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a 


