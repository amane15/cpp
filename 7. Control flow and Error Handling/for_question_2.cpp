#include <iostream>

int sumTo(int x) {
    int sum{};

    for (int i = 1; i <= x; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int sum{};

    sum = sumTo(10);
    std::cout << "Sum is " << sum << '\n';
    return 0;
}