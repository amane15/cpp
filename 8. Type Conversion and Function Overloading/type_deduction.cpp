#include <iostream>

// Trailing return type syntax
auto add(int x, int y) -> int {
    return x + y;
}

int main() {
    using namespace std::literals;

    auto d{5.0};
    auto i{1 + 2};
    auto x{i};

    auto s{"string"};  // will be char*
    auto s1{"foo"s};
    auto s2{"baz"sv};

    return 0;
}