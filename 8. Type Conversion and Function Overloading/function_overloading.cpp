#include <iostream>

// Note that a function’s return type is not used to
// differentiate overloaded functions.

// Matches made by applying numeric promotions take precedence
//  over any matches made by applying numeric conversions.

int add(int x, int y) {
    return x + y;
}

double add(double x, double y) {
    return x + y;
}

int main() {}