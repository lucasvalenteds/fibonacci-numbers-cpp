#include "fib.cc"
#include <iostream>

using namespace std;

long interpret_user_input(int argc, char **argv) {
    if (argc >= 2) {
        long amount_of_numbers = atol(argv[1]);
        cout << "Calculating " << amount_of_numbers << " fibonacci numbers"
             << endl;

        return amount_of_numbers;
    }

    cout << "Missing amount of numbers to generate." << endl;
    cout << "Usage: " << argv[0] << " <amount_of_numbers>" << endl;

    return 0;
}

int main(int argc, char **argv) {
    long amount_of_numbers = interpret_user_input(argc, argv);

    for (auto &number : fibonacci_series(amount_of_numbers)) {
        cout << number << endl;
    }

    return 0;
}
