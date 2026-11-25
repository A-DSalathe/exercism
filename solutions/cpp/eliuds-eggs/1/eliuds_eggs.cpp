#include "eliuds_eggs.h"

namespace chicken_coop {

// TODO: add your solution here
int positions_to_quantity(int positions) {
    if (positions == 0) {
        return 0;
    }
    int eggs = 0;
    while (positions > 0) {
        if(positions % 2 == 1) {
            eggs++;
        }
        positions /= 2;
    }
    return eggs;
}
}  // namespace chicken_coop
