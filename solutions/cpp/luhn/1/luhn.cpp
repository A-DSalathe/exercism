#include "luhn.h"

namespace luhn {

// TODO: add your solution here
bool valid(const std::string& candidate) {
    // Implementation of the Luhn algorithm to validate the input string
    int sum = 0;
    bool alternate = false;
    std::string trimmed_candidate;
    for (char c : candidate) {
        if (c != ' ') {
            trimmed_candidate += c; // Remove spaces from the input
        }
    }
    if (trimmed_candidate.length() <= 1) {
        return false; // Invalid if the length is less than or equal to 1 after trimming
    }
    for (auto it = trimmed_candidate.rbegin(); it != trimmed_candidate.rend(); ++it) {
        char c = *it;
        if (c == ' ') {
            continue; // Skip spaces
        }
        if (!isdigit(c)) {
            return false; // Invalid character found
        }

        int digit = c - '0';
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9; // Subtract 9 if the result is greater than 9
            }
        }
        sum += digit;
        alternate = !alternate; // Toggle the alternate flag
    }

    return (sum % 10 == 0); // Valid if the sum is divisible by 10
}
}  // namespace luhn
