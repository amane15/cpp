#include <cassert>  // for assert()
#include <cmath>    // for std::sqrt
#include <iostream>

// Descriptive asserts
// assert(found && "Car could not be found in database");

// static assert
// static_assert(condition, diagnostic_message)
static_assert(sizeof(long) == 8, "long must be 8 bytes");
static_assert(sizeof(int) == 4, "int must be 4 bytes");

double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity) {
    assert(gravity > 0.0);  // The object won't reach the ground unless there is positive gravity.

    if (initialHeight <= 0.0) {
        // The object is already on the ground. Or buried.
        return 0.0;
    }

    return std::sqrt((2.0 * initialHeight) / gravity);
}

int main() {
    std::cout << "Took " << calculateTimeUntilObjectHitsGround(100.0, -9.8) << " second(s)\n";

    return 0;
}