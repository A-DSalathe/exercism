#include "hexadecimal.h"

namespace hexadecimal {

// TODO: add your solution here
int convert(const std::string& hex_str) {
    int decimal_value = 0;
    for (char c : hex_str) {
        decimal_value *= 16;
        if (c >= '0' && c <= '9') {
            decimal_value += c - '0';
        } else if (c >= 'a' && c <= 'f') {
            decimal_value += c - 'a' + 10;
        } else if (c >= 'A' && c <= 'F') {
            decimal_value += c - 'A' + 10;
        } else {
            return 0; // Invalid character
        }
    }
    return decimal_value;
}
}  // namespace hexadecimal
