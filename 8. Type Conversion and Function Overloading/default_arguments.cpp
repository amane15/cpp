#include <iostream>

// Default arguments can only be provided for the rightmost parameters.
void print(int x, int y = 10) {
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}

int main() {
    print(1, 2);
    print(10);
    return 0;
}