#include <iostream>

void doSomething(int&) {}

int main() {
    std::cout << "2 + 3 = " << 5 << std::endl;
    /*
     * Using std::endl can be a bit inefficient,
     * as it actually does two jobs:
     * it moves the cursor to the next line of the console, and
     * it makes sure that any cached output shows up on the
     * screen immediately (this is called flushing the output).
     */

    // << -> Insertion Operator
    // >> -> Extraction Operator
    int x{};
    std::cout << "Enter a value of x: ";
    std::cin >> x;
    std::cout << "The value of x is: " << x << '\n';

    // Uninitialized variables
    int y;
    doSomething(y);
    std::cout << y << '\n';
    return 0;
}