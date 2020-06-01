TARGET = clockwork

CXX_FLAGS = -std=c++11 -fPIC -I $(BARVINOK_PATH) -I $(OPT_PATH)
LINK_FLAGS = -L $(OPT_LIB_PATH) -L $(ISL_PATH) -lclkwrk -lbarvinok -lisl -lntl -lgmp -lpolylibgmp -lpthread 

TEST_FILES = build_set_test.cpp
LIB_CPP_FILES = qexpr.cpp app.cpp isl_utils.cpp prog.cpp codegen.cpp minihls.cpp ubuffer.cpp

OBJ_FILES := $(patsubst %.cpp,%.o,$(LIB_CPP_FILES))

#$(TARGET): $(LIB_CPP_FILES) $(TEST_FILES)  # clkwrk.a clockwork.o
#$(TARGET): $(OBJ_FILES) clockwork.o
$(TARGET): libclkwrk.so clockwork.o
	$(CXX) $(CXX_FLAGS) clockwork.o $(LINK_FLAGS) -o $@

$(TARGET).o: build_set_test.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

libclkwrk.so: $(OBJ_FILES)
	@mkdir -p lib
	$(CXX) $(CXX_FLAGS) $^ -shared -o lib/$@

%.o: %.cpp %.h
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a *.so $(TARGET)


