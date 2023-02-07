#include <iostream>

#include "min.h"

/*
 * Function templates

 * A function template is a function-like definition that is used
 * to generate one or more overloaded functions, each with a different
 * set of actual types. This is what will allow us to create functions
 * that can work with many different types.
*/
template <typename T>  // template parameter declaration
T max(T x, T y) {
    return (x > y) ? x : y;
}

/*
 * The process of creating functions (with specific types) from function
 * templates (with template types) is called function template
 * instantiation (or instantiation for short). When this process happens
 * due to a function call, it’s called implicit instantiation.
 * An instantiated function is often called a function instance
 * (instance for short) or a template function.
 */

// Non template parameter
template <typename T>
int someFunc(T x, double y) {
    return 5
}

// Multiple template type parameters
template <typename T, typename U>
auto max(T x, T y) {
    return (x > y) ? x : y;
}

// Abbreviated function template C++20
// auto max(auto x, auto y) {
//     return (x > y) ? x : y;
// }

int main() {
    int result;
    result = max<int>(2, 3);
    std::cout << min(2, 3) << '\n';
    return 0;
}