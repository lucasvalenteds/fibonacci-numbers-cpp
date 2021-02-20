COMPILER := g++-10
COMPILER_FLAGS := -g -Wall -O2
LIBRARIES := -lgtest

cli: main.cpp
	$(COMPILER) $(COMPILER_FLAGS) $^ -o $@

test: main_test.cpp
	$(COMPILER) $(COMPILER_FLAGS) $^ -o $@ $(LIBRARIES)

clean:
	@rm -f cli test

lint: main.cpp fib.cpp
	@clang-tidy --checks=cppcoreguidelines-* $^

format:
	@clang-format -i --style="{BasedOnStyle: llvm, IndentWidth: 4}" *.cpp

