TARGET = clockwork

CXX_FLAGS = -std=c++11 -I $(BARVINOK_PATH) -I $(OPT_PATH)
LINK_FLAGS = -L $(ISL_PATH) -lbarvinok -lisl -lbarvinok -lgmp -L $(OPT_LIB_PATH) -lntl -lpolylibgmp -lpthread

TEST_FILES = build_set_test.cpp
LIB_CPP_FILES = qexpr.cpp app.cpp isl_utils.cpp prog.cpp codegen.cpp minihls.cpp ubuffer.cpp

OBJ_FILES := $(patsubst %.cpp,%.o,$(LIB_CPP_FILES))

$(TARGET): clockwork.o clkwrk.a
	$(CXX) $(LINK_FLAGS) $^ -o $@

$(TARGET).o: build_set_test.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clkwrk.a: $(OBJ_FILES)
	ar rcs $@ $^

%.o: %.cpp %.h
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a $(TARGET)


