UNAME = $(shell uname)

ifeq ($(UNAME), Darwin)
LIB_EXT =dylib
else
LIB_EXT =so
endif

TARGET = clockwork

CXX_FLAGS = -std=c++17 -I $(BARVINOK_PATH) -I $(OPT_PATH)
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
LINK_FLAGS += -L $(COREIR_LIB) -Wl,-rpath $(COREIR_LIB) -lcoreir -lcoreirsim -lcoreir-commonlib
endif

TEST_FILES = build_set_test.cpp
LIB_CPP_FILES = qexpr.cpp app.cpp isl_utils.cpp prog.cpp codegen.cpp minihls.cpp ubuffer.cpp coreir_backend.cpp coreir_lib.cpp
LIB_HEADER_FILES = $(patsubst %.cpp,%.h,$(LIB_CPP_FILES))

OBJ_FILES := $(patsubst %.cpp,%.o,$(LIB_CPP_FILES))

$(TARGET): libclkwrk.$(LIB_EXT) $(TARGET).o
	$(CXX) $(CXX_FLAGS) $(TARGET).o $(LINK_FLAGS) -o $@

$(TARGET).o: build_set_test.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

libclkwrk.$(LIB_EXT): $(OBJ_FILES)
ifeq ($(UNAME), Darwin)
	$(CXX) $(CXX_FLAGS) -dynamiclib -undefined dynamic_lookup $^ -o lib/$@
else
	$(CXX) $(CXX_FLAGS) -g -fPIC -rdynamic -shared $^ -o lib/$@
endif

%.o: %.cpp $(LIB_HEADER_FILES)
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a lib/libclkwrk.so lib/libclkwrk.dylib $(TARGET)


