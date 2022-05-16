UNAME = $(shell uname)
BUILD_DIR = bin

ifeq ($(UNAME), Darwin)
LIB_EXT =dylib
else
LIB_EXT =so
endif

TARGET = clockwork

CXX_FLAGS = -std=c++17 -g -O0 -I $(BARVINOK_PATH) -I $(OPT_PATH) -I .

#ifneq ($(COREIR),1)
#CXX_FLAGS = -std=c++11 -I $(BARVINOK_PATH) -I $(OPT_PATH)
#endif

ifneq ($(UNAME), Darwin)
CXX_FLAGS += -fPIC
endif

LINK_FLAGS = -L ./lib -L $(OPT_LIB_PATH) -L $(ISL_PATH) -lclkwrk -lbarvinok -lisl -lntl -lgmp -lpolylibgmp -lpthread 

ifeq ($(COREIR),1)
ifndef COREIR_PATH
$(error COREIR_PATH is not set)
endif
$(info CoreIR Path is [${COREIR_PATH}])
COREIR_INCLUDE = $(COREIR_PATH)/include
COREIR_LIB = $(COREIR_PATH)/lib

CXX_FLAGS += -I $(COREIR_INCLUDE) -D COREIR
LINK_FLAGS += -L $(COREIR_LIB) -Wl,-rpath $(COREIR_LIB) -lcoreir -lcoreirsim -lcoreir-commonlib -lcoreir-float -lcoreir-float_DW
endif

ifeq ($(CGRAFLOW),1)
CXX_FLAGS += -D CGRAFLOW
endif

TEST_FILES = build_set_test.cpp prog_splitting_test.cpp
LIB_HEADER_FILES = $(patsubst %.cpp,%.h,$(TEST_FILES))

PROGS_CPP_FILES := $(shell find example_progs -name "*.cpp")
PROGS_OBJ := $(patsubst example_progs/%.cpp, $(BUILD_DIR)/%.o, $(PROGS_CPP_FILES))

LIB_CPP_FILES = qexpr.cpp expr.cpp app.cpp isl_utils.cpp prog.cpp codegen.cpp ubuffer.cpp coreir_backend.cpp cgralib.cpp cwlib.cpp options.cpp lake_target.cpp utils.cpp simple_example_progs.cpp rdai_collateral.cpp verilog_backend.cpp cgra_flow.cpp
LIB_CPP_FILES += build_set_test.cpp prog_splitting_test.cpp
LIB_HEADER_FILES = $(patsubst %.cpp,%.h,$(LIB_CPP_FILES))
#LIB_CPP_FILES += $(PROGS_CPP_FILES)

TEST_OBJ_FILES := $(patsubst %.cpp,%.o,$(TEST_FILES))
OBJ_FILES := $(patsubst %.cpp,%.o,$(LIB_CPP_FILES))

$(TARGET): libclkwrk.$(LIB_EXT) $(TEST_OBJ_FILES)
	$(CXX) $(CXX_FLAGS) $(TEST_OBJ_FILES) $(LINK_FLAGS) -o $@

$(TARGET).o: $(TEST_FILES) $(LIB_HEADER_FILES) $(TEST_HEADER_FILES)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

libclkwrk.$(LIB_EXT): $(OBJ_FILES) $(PROGS_OBJ)
ifeq ($(UNAME), Darwin)
	$(CXX) $(CXX_FLAGS) -dynamiclib -undefined dynamic_lookup $^ -o lib/$@
else
	$(CXX) $(CXX_FLAGS) -g -fPIC -rdynamic -shared $^ -o lib/$@
endif

libcoreir-cwlib.$(LIB_EXT): cwlib.o
ifeq ($(UNAME), Darwin)
	$(CXX) $(CXX_FLAGS) -dynamiclib -undefined dynamic_lookup $^ -o lib/$@
else
	$(CXX) $(CXX_FLAGS) -g -fPIC -rdynamic -shared $^ -o lib/$@
endif

libcoreir-cgralib.$(LIB_EXT): cgralib.o
ifeq ($(UNAME), Darwin)
	$(CXX) $(CXX_FLAGS) -dynamiclib -undefined dynamic_lookup $^ -o lib/$@
else
	$(CXX) $(CXX_FLAGS) -g -fPIC -rdynamic -shared $^ -o lib/$@
endif

$(PROGS_OBJ): $(BUILD_DIR)/%.o: example_progs/%.cpp
	@ mkdir -p $(BUILD_DIR)
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

%.o: %.cpp $(LIB_HEADER_FILES)
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

coreirlib: libcoreir-cwlib.$(LIB_EXT) libcoreir-cgralib.$(LIB_EXT)

all: clockwork libclkwrk.$(LIB_EXT) coreirlib

clean:
	rm -f *.o *.a bin/* lib/libclkwrk.so lib/libclkwrk.dylib lib/libcoreir-cwlib.so lib/libcoreir-cwlib.dylib lib/libcoreir-cgralib.so lib/libcoreir-cgralib.dylib $(TARGET)

