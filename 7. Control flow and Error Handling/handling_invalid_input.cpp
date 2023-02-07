#include <iostream>
#include <limits>

void ignoreLine() {
    /*
     * std::numeric_limits<std::streamsize>::max() returns the largest
     * value that can be stored in a variable of type std::streamsize.
     * Passing this value to std::cin.ignore() causes it to disable the
     * count check.
     */
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble() {
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    if (!std::cin) {  // has previous extraction failed?
        std::cin.clear();
        ignoreLine();
    } else {
        ignoreLine();
        return x;
    }
}

char getOperator() {
    while (true) {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char operation{};
        std::cin >> operation;

        switch (operation) {
            case '+':
            case '-':
            case '*':
            case '/':
                return operation;
            default:
                std::cerr << "Invalid input. Please try again. \n";
        }
    }
}

void printResult(double x, char operation, double y) {
    switch (operation) {
        case '+':
            std::cout << x << " + " << y << " is " << x + y << '\n';
            break;
        case '-':
            std::cout << x << " - " << y << " is " << x - y << '\n';
            break;
        case '*':
            std::cout << x << " * " << y << " is " << x * y << '\n';
            break;
        case '/':
            std::cout << x << " / " << y << " is " << x / y << '\n';
            break;
        default:
            std::cerr << "Something went wrong: printResult() got an invalid operator \n";
    }
}

int main() {
    double x{getDouble()};
    char operation{getOperator()};
    double y{getDouble()};

    printResult(x, operation, y);

    return 0;
}