#include <functional>
#include <iostream>

/*
    SYNTAX:
        [ captureClause ] ( parameters ) -> returnType
        {
            statements;
        }
*/

int main() {
  [] {}; // a lambda with an omitted return type, no captures, and omitted
         // parameters.

  auto isEven{[](int i) { return i % 2 == 0; }};

  // A regular function pointer. Only works with an empty capture clause (empty
  // []).
  double (*addNumbers1)(double,
                        double){[](double a, double b) { return (a + b); }};

  addNumbers1(1, 2);

  // Using std::function. The lambda could have a non-empty capture clause
  // (discussed next lesson).
  std::function addNumbers2{
      // note: pre-C++17, use std::function<double(double, double)> instead
      [](double a, double b) { return (a + b); }};

  addNumbers2(3, 4);

  return 0;
}