#include <iostream>
#include <typeinfo>

int main() {
    int x{5};

    std::cout << x << '\n';
    std::cout << &x << '\n';  // & -> address of operator
    // * -> derefernce operator (indirection operator)
    std::cout << *(&x) << '\n';

    // Pointers
    // A pointer is an object that holds a memory address (typically of
    // another variable) as its value.
    // int* nullPtr{};
    int* ptrX{&x};  // a pointer to an int value
    std::cout << ptrX << '\n';
    std::cout << *ptrX << '\n';
    // int* ptr{5};           // not okay
    // int* ptr{0x0012FF7C};  // not okay, 0x0012FF7C is treated as an integer literal

    // changing value being pointed at
    *ptrX = 10;

    std::cout << x << '\n';
    std::cout << typeid(&x).name() << '\n';

    char* charPtr{};
    int* intPtr{};
    long double* ldPtr{};

    std::cout << sizeof(charPtr) << '\n';
    std::cout << sizeof(intPtr) << '\n';
    std::cout << sizeof(ldPtr) << '\n';

    // pointer to constant value
    const int val{10};
    const int* ptrVal{&val};

    const int newVal{12};
    ptrVal = &newVal;

    // Const pointer
    // A const pointer is a pointer whose address can not be changed
    // after initialization.
    int c_x{3};
    int* const ptrCx{&c_x};

    // But if value being pointed to non-const, it is possible to change
    // the value being pointed via dereferencing const pointer
    *ptrCx = 13;

    // Const pointer to a const value
    // A const pointer to a const value can not have its address changed,
    // nor can the value it is pointing to be changed through the pointer.
    const int* const ptrConst{&c_x};

    int value{5};

    int* ptr0{&value};              // ptr0 points to an "int" and is not const itself, so this is a normal pointer.
    const int* ptr1{&value};        // ptr1 points to a "const int", but is not const itself, so this is a pointer to a const value.
    int* const ptr2{&value};        // ptr2 points to an "int", but is const itself, so this is a const pointer (to a non-const value).
    const int* const ptr3{&value};  // ptr3 points to an "const int", and it is const itself, so this is a const pointer to a const value.

    return 0;
}