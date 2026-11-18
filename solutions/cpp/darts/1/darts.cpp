#include "darts.h"

namespace darts {

// TODO: add your solution here
float get_distance_2D(float x, float y) {
    return std::sqrt(x * x + y * y);
}  // namespace darts

int score(float x, float y) {
    float distance = get_distance_2D(x, y);
    if (distance <= 1.0f) {
        return 10;
    } else if (distance <= 5.0f) {
        return 5;
    } else if (distance <= 10.0f) {
        return 1;
    } else {
        return 0;
    }
}
}  // namespace darts
