#include <iostream>
#include <vector>

using namespace std;

const long FIRST_FIBONACCI_NUMBER = 0;
const long SECOND_FIBONACCI_NUMBER = 1;

vector<long> fibonacci_series(int amount_of_numbers) {
    if (amount_of_numbers == 0) {
        return {};
    }

    if (amount_of_numbers == 1) {
        return {FIRST_FIBONACCI_NUMBER};
    }

    vector<long> series {FIRST_FIBONACCI_NUMBER, SECOND_FIBONACCI_NUMBER};
    for (int i = series.size(); i < amount_of_numbers; i++) {
        long last = series[series.size() - 1];
        long before_last = series[series.size() - 2];
        series.push_back(before_last + last);
    }

    return series;
}

