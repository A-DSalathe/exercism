#include "armstrong_numbers.h"

namespace armstrong_numbers {

// TODO: add your solution here
bool is_armstrong_number(int number) {
    int original_number = number;
    int sum = 0;
    int num_digits = 0;

    // Count the number of digits
    while (number > 0) {
        number /= 10;
        num_digits++;
    }

    number = original_number;

    // Calculate the sum of the digits raised to the power of num_digits
    while (number > 0) {
        int digit = number % 10;
        sum += std::pow(digit, num_digits);
        number /= 10;
    }

    return sum == original_number;
}
}  // namespace armstrong_numbers
