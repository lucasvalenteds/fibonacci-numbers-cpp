#include "fib_test.cc"
#include <gtest/gtest.h>

using namespace testing;

int main(int argc, char **argv) {
    InitGoogleTest(&argc, argv);

    int result = RUN_ALL_TESTS();

    return result;
}
