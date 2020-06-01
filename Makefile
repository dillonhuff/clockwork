UNAME = $(shell uname)

ifeq ($(UNAME), Darwin)
LIB_EXT =dylib
else
LIB_EXT =so
endif

TARGET = clockwork

CXX_FLAGS = -std=c++11 -I $(BARVINOK_PATH) -I $(OPT_PATH)
LINK_FLAGS = -L ./lib -L $(OPT_LIB_PATH) -L $(ISL_PATH) -lclkwrk -lbarvinok -lisl -lntl -lgmp -lpolylibgmp -lpthread 

TEST_FILES = build_set_test.cpp
LIB_CPP_FILES = qexpr.cpp app.cpp isl_utils.cpp prog.cpp codegen.cpp minihls.cpp ubuffer.cpp

OBJ_FILES := $(patsubst %.cpp,%.o,$(LIB_CPP_FILES))

# Works on rice and my machine
#$(TARGET): $(LIB_CPP_FILES) $(TEST_FILES)  # clkwrk.a clockwork.o
	#$(CXX) $(CXX_FLAGS) $^ $(LINK_FLAGS) -o $@

# Works on rice and my machine
#$(TARGET): $(OBJ_FILES) clockwork.o
	#$(CXX) $(CXX_FLAGS) $^ $(LINK_FLAGS) -o $@

$(TARGET): libclkwrk.$(LIB_EXT) $(TARGET).o
	$(CXX) $(CXX_FLAGS) $(TARGET).o $(LINK_FLAGS) -o $@

$(TARGET).o: build_set_test.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

libclkwrk.$(LIB_EXT): $(OBJ_FILES)
ifeq ($(UNAME), Darwin)
	$(CXX) $(CXX_FLAGS) -dynamiclib -undefined dynamic_lookup $^ -o lib/$@
else
endif

%.o: %.cpp %.h
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a lib/libclkwrk.so lib/libclkwrk.dylib $(TARGET)


