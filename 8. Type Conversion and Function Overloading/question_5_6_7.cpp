#include <iostream>

template <typename T>
T add(T x, T y) {
    return x + y;
}

template <typename T>
T sub(T x, T y) {
    return x - y;
}

template <typename T>
T mul(T x, T y) {
    return x * y;
}

int main() {
    std::cout << add(1, 2) << '\n';
    std::cout << sub(10.5, 2.3) << '\n';
    std::cout << mul<double>(1, 2) << '\n';
}