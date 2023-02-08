#include <iostream>

int main() {
    int x{5};
    int& ref{x};

    std::cout << x << '\n';
    std::cout << ref << '\n';

    double z{6.0};
    double& refZ{z};

    // References can’t be reseated (changed to refer to another object)

    int var{};
    int& ref1{var};   // an lvalue reference bound to var
    int& ref2{ref1};  // an lvalue reference bound to var

    // Lvalue reference to const
    const int y{5};
    const int& refY{y};

    // Initializing an lvalue reference to const with a modifiable lvalue
    int a{5};
    const int& refA{a};
    // refA = 7; // <- this is not allowed
    a = 7;  // we can still modifiy it through the original identifier

    // Initializing an lvalue reference to const with an rvalue
    /*
     * When this happens, a temporary object is created and initialized
     * with the rvalue, and the reference to const is bound to that
     * temporary object.
     * A temporary object (also sometimes called an anonymous object) is
     * an object that is created for temporary use (and then destroyed)
     * within a single expression. Temporary objects have no scope at all
     * (this makes sense, since scope is a property of an identifier, and
     * temporary objects have no identifier). This means a temporary
     * object can only be used directly at the point where it is created,
     * since there is no way to refer to it beyond that point.
     */
    const int& refAnonymous{6};
    std::cout << refAnonymous << '\n';
    // When a const lvalue reference is bound to a temporary object,
    // the lifetime of the temporary object is extended to match the
    // lifetime of the reference.

    return 0;
}