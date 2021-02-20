#include <gtest/gtest.h>
#include "fib_test.cc"

using namespace testing;

int main(int argc, char **argv) {
    InitGoogleTest(&argc, argv);

    int result = RUN_ALL_TESTS();

    return result;
}

