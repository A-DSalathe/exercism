#include "trinary.h"

namespace trinary {

// TODO: add your solution here
int to_decimal(const std::string& trinary_string) {
    int decimal_value = 0;
    int base = 1; // Start with the least significant digit (rightmost)

    // Iterate over the string in reverse order
    for (auto it = trinary_string.rbegin(); it != trinary_string.rend(); ++it) {
        char digit = *it;

        // Check if the character is a valid trinary digit
        if (digit < '0' || digit > '2') {
            return 0; // Invalid character, return 0
        }

        // Convert character to integer and add to decimal value
        decimal_value += (digit - '0') * base;
        base *= 3; // Move to the next power of 3
    }

    return decimal_value;
}
}  // namespace trinary
