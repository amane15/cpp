/*
 * Question #1

 * Write a function called calculate() that takes two integers and a
 * char representing one of the following mathematical operations:
 * +, -, *, /, or % (modulus).
 * Use a switch statement to perform the appropriate mathematical
 * operation on the integers, and return the result.
 * If an invalid operator is passed into the function,
 * the function should print an error. For the division operator,
 * do an integer division.
*/

#include <iostream>

int calculate(char operation, int x, int y) {
    switch (operation) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return x % y;
        default:
            std::cerr << "calculate(): Unhandled case\n";
            return 0;
    }
}

int main() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter an another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator (+, -, *, / or %): ";
    char operation{};
    std::cin >> operation;

    std::cout << x << ' ' << operation << ' ' << y << " is " << calculate(operation, x, y) << '\n';

    return 0;
}