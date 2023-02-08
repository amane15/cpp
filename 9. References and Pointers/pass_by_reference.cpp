#include <iostream>
#include <string>

void printValue(const std::string& str) {
    std::cout << str << '\n';
}

// void foo(int a, const int& b, const std::string& str) {}

void printByReference(const std::string& ref) {
    std::cout << ref << '\n';
}

void printByAddress(const std::string* ptr) {
    std::cout << *ptr << '\n';
}

int main() {
    int n{5};
    std::string x{"Hello"};

    printValue(x);
    // foo(0, n, x);
    printByReference(x);
    printByAddress(&x);

    std::string* ptrStr{&x};
    printByAddress(ptrStr);

    return 0;
}