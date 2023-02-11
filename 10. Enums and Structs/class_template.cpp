#include <iostream>

template <typename T> 
struct Pair {
  T first{};
  T second{};
};

template <typename T>
constexpr T max(Pair<T> pair) {
    return (pair.first < pair.second ? pair.second : pair.first); 
}

int main() {
    Pair<int> p1{5, 6};
    std::cout << p1.first << '\n';
    std::cout << max<int>(p1) << '\n';

    Pair<double> p2{1.2, 3.4};
    std::cout << p2.second << '\n';

    return 0;
}

