#include <iostream>
#include <string>
#include <utility>

template <class T>
void mySwapCopy(T& a, T& b) {
    T temp{a};  // invokes copy constructor
    a = b;      // invokes copy assigment
    b = temp;   // invokes copy assignment
}

template <class T>
void myMoveSwap(T& a, T& b) {
    T temp{std::move(a)};  // invokes move constructor
    a = std::move(b);      // invokes move assignment
    b = std::move(temp);   // invokes move assignment
}

int main() {
    std::string x{"abc"};
    std::string y{"de"};

    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';

    mySwapCopy(x, y);

    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';

    return 0;
}