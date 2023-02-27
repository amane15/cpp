#include <iostream>

// Binding refers to the process that is used to convert identifiers
// (such as variable and function names) into addresses.

// Early binding (also called static binding) means the compiler
// (or linker) is able to directly associate the identifier name
// (such as a function or variable name) with a machine address.

// In C++, the term “late binding” is typically used in cases where
// the actual function being called is not known by the compiler or
// linker at the point where the function call is actually being made.
// Instead, the function to be called has been determined (at runtime)
// somewhere prior to that point.

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;

    int y{};
    std::cout << "Enter another number: ";
    std::cin >> y;

    int operation{};
    do {
        std::cout << "Enter an operation (0=add, 1=subtract, 2=multiply): ";
        std::cin >> operation;
    } while (operation < 0 || operation > 2);

    int result{};
    switch (operation) {
        case 0:
            result = add(x, y);
            break;
        case 1:
            result = sub(x, y);
            break;
        case 3:
            result = multiply(x, y);
            break;
    }

    std::cout << "The answer is: " << result << '\n';

    // late binding
    int (*ptrFnc)(int, int){add};
    std::cout << ptrFnc(5, 3) << '\n';

    return 0;
}