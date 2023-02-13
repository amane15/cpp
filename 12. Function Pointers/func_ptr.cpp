#include <iostream>

int foo() {
    return 5;
}

int baz() {
    return 10;
}

int hoo(int x) {
    return x;
}

int main() {
    int (*fncPtr)(){&foo};
    fncPtr = &baz;
    // const function pointer
    // int (*const fncPtr2)();
    [[maybe_unused]] int (*fncPtr3)(int){&hoo};

    // calling function
    std::cout << (*fncPtr)() << '\n';
    // implicit dereference
    std::cout << fncPtr3(200) << '\n';

    return 0;
}