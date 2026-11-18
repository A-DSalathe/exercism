#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
std::string convert(int number) {
    std::string result;
    if (!(number % 3)) {
        result += "Pling";
    }
    if (!(number % 5)) {
        result += "Plang";
    }
    if (!(number % 7)) {
        result += "Plong";
    }
    if (result.empty()) {
        result = std::to_string(number);
    }
    return result;
}
}  // namespace raindrops
