#include <iostream>

int main() {
    int value{51};
    int* ptr{nullptr};
    int* ptr2{&value};
    ptr2 = nullptr;

    if (ptr2 == nullptr) {
        std::cout << "pointer is null" << '\n';
    }

    if (!ptr) {
        std::cout << "pointer is null" << '\n';
    }
}
