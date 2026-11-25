#include "rotational_cipher.h"

namespace rotational_cipher {

// TODO: add your solution here
std::string rotate(const std::string& input, int rotation_factor) {
    std::string result;
    rotation_factor %= 26;  // Normalize rotation factor for letters
    for (char c : input) {
        if (std::isalpha(c)) {
            char base = std::islower(c) ? 'a' : 'A';
            c = (c - base + rotation_factor) % 26 + base;
        }
        result += c;
    }
    return result;
}
}  // namespace rotational_cipher
