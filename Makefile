COMPILER := g++-10
COMPILER_FLAGS := -g -Wall -O2
LIBRARIES := -lgtest

cli: main.cc
	$(COMPILER) $(COMPILER_FLAGS) $^ -o $@

test: main_test.cc
	$(COMPILER) $(COMPILER_FLAGS) $^ -o $@ $(LIBRARIES)

clean:
	@rm -f cli test

lint: main.cc fib.cc
	@clang-tidy --checks=cppcoreguidelines-* $^

format:
	@clang-format -i --style="{BasedOnStyle: llvm, IndentWidth: 4}" *.cc

