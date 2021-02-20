#include "fib.cpp"
#include <gtest/gtest.h>
#include <vector>

using namespace std;
using namespace testing;

TEST(FibonacciSeries, ZeroNumbers) {
    auto numbers = fibonacci_series(0);

    EXPECT_EQ(0, numbers.size());
}

TEST(FibonacciSeries, OneNumber) {
    auto numbers = fibonacci_series(1);

    EXPECT_EQ(1, numbers.size());
    EXPECT_EQ(0, numbers.at(0));
}

TEST(FibonacciSeries, TwoNumbers) {
    auto numbers = fibonacci_series(2);

    EXPECT_EQ(2, numbers.size());
    EXPECT_EQ(0, numbers.at(0));
    EXPECT_EQ(1, numbers.at(1));
}

TEST(FibonacciSeries, ManyNumbers) {
    vector<long> expected_numbers{0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    vector<long> numbers = fibonacci_series(10);

    EXPECT_EQ(expected_numbers.size(), numbers.size());
    for (auto &number : numbers) {
        auto index = &number - &numbers[0];

        EXPECT_EQ(expected_numbers[index], number);
    }
}
