# Fibonacci numbers

It is a command line application to generate [Fibonacci numbers](https://en.wikipedia.org/wiki/Fibonacci_number).

The goal is to learn C++ language features, testing library and static analysis tooling.

## How to run

| Description | Command |
| :--- | :--- |
| Compile and run cli | `make cli && ./cli <amount_of_numbers>` |
| Compile and run tests | `make test && ./test` |
| Run static analysis | `make lint` |
| Format source code | `make format` |

## Preview

```
$ ./cli 
Missing amount of numbers to generate.
Usage: ./cli <amount_of_numbers>
```

```
$ ./cli 10
Calculating 10 fibonacci numbers
0
1
1
2
3
5
8
13
21
34
```

```
$ ./test
[==========] Running 4 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 4 tests from FibonacciSeries
[ RUN      ] FibonacciSeries.ZeroNumbers
[       OK ] FibonacciSeries.ZeroNumbers (0 ms)
[ RUN      ] FibonacciSeries.OneNumber
[       OK ] FibonacciSeries.OneNumber (0 ms)
[ RUN      ] FibonacciSeries.TwoNumbers
[       OK ] FibonacciSeries.TwoNumbers (0 ms)
[ RUN      ] FibonacciSeries.ManyNumbers
[       OK ] FibonacciSeries.ManyNumbers (0 ms)
[----------] 4 tests from FibonacciSeries (0 ms total)

[----------] Global test environment tear-down
[==========] 4 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 4 tests.
```
